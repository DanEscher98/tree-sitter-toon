/**
 * External scanner for TOON indentation handling
 *
 * Token types:
 * - NEWLINE: newline where indent stays same or decreases
 * - NEWLINE_INDENT: newline followed by increased indent (combines newline + indent)
 * - DEDENT: emitted when indent decreases (possibly multiple times)
 */

#include "tree_sitter/parser.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

enum TokenType {
    NEWLINE,
    NEWLINE_INDENT,
    DEDENT,
};

#define MAX_DEPTH 64

typedef struct {
    uint16_t indent_stack[MAX_DEPTH];
    uint8_t depth;
    uint8_t pending_dedents;
} Scanner;

static void init(Scanner *s) {
    s->indent_stack[0] = 0;
    s->depth = 1;
    s->pending_dedents = 0;
}

void *tree_sitter_toon_external_scanner_create(void) {
    Scanner *s = calloc(1, sizeof(Scanner));
    init(s);
    return s;
}

void tree_sitter_toon_external_scanner_destroy(void *payload) {
    free(payload);
}

unsigned tree_sitter_toon_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *s = payload;
    unsigned i = 0;
    buffer[i++] = (char)s->depth;
    buffer[i++] = (char)s->pending_dedents;
    for (uint8_t j = 0; j < s->depth && i + 1 < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; j++) {
        buffer[i++] = (char)(s->indent_stack[j] & 0xFF);
        buffer[i++] = (char)((s->indent_stack[j] >> 8) & 0xFF);
    }
    return i;
}

void tree_sitter_toon_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *s = payload;
    init(s);
    if (length < 2) return;

    unsigned i = 0;
    s->depth = (uint8_t)buffer[i++];
    s->pending_dedents = (uint8_t)buffer[i++];

    for (uint8_t j = 0; j < s->depth && i + 1 < length; j++) {
        s->indent_stack[j] = (uint16_t)((uint8_t)buffer[i] | ((uint8_t)buffer[i + 1] << 8));
        i += 2;
    }

    if (s->depth == 0) init(s);
}

bool tree_sitter_toon_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *s = payload;

    // Priority 1: Emit pending DEDENTs
    if (s->pending_dedents > 0 && valid_symbols[DEDENT]) {
        s->pending_dedents--;
        lexer->result_symbol = DEDENT;
        return true;
    }

    // Handle EOF without trailing newline - emit NEWLINE to satisfy grammar
    if (lexer->eof(lexer) && valid_symbols[NEWLINE]) {
        // Queue up remaining DEDENTs
        while (s->depth > 1) {
            s->depth--;
            s->pending_dedents++;
        }
        lexer->result_symbol = NEWLINE;
        return true;
    }

    // Handle newline
    if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
        // Must be valid for at least one newline type
        if (!valid_symbols[NEWLINE] && !valid_symbols[NEWLINE_INDENT]) {
            return false;
        }

        lexer->advance(lexer, false);
        lexer->mark_end(lexer);

        // Handle \r\n
        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
        }

        // Peek ahead to measure indent of next content line
        // We count spaces but DON'T consume them - let extras handle that
        uint16_t next_indent = 0;
        uint32_t saved_col = lexer->get_column(lexer);

        // Count leading spaces for indent level (peek only)
        while (lexer->lookahead == ' ') {
            next_indent++;
            lexer->advance(lexer, false);
        }

        // Handle tabs
        while (lexer->lookahead == '\t') {
            next_indent += 2;
            lexer->advance(lexer, false);
        }

        // Check for blank lines
        while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
            lexer->advance(lexer, false);
            if (lexer->lookahead == '\n') {
                lexer->advance(lexer, false);
            }
            // Reset and count indent of next line
            next_indent = 0;
            while (lexer->lookahead == ' ') {
                next_indent++;
                lexer->advance(lexer, false);
            }
            while (lexer->lookahead == '\t') {
                next_indent += 2;
                lexer->advance(lexer, false);
            }
        }

        // Mark end AFTER consuming all whitespace so next token starts correctly
        lexer->mark_end(lexer);

        uint16_t current = s->indent_stack[s->depth - 1];

        // EOF - emit all remaining dedents
        if (lexer->eof(lexer)) {
            while (s->depth > 1) {
                s->depth--;
                s->pending_dedents++;
            }
            lexer->result_symbol = NEWLINE;
            return true;
        }

        // Indent increased
        if (next_indent > current) {
            if (valid_symbols[NEWLINE_INDENT]) {
                // Push new indent level
                if (s->depth < MAX_DEPTH) {
                    s->indent_stack[s->depth++] = next_indent;
                }
                lexer->result_symbol = NEWLINE_INDENT;
                return true;
            }
            // If NEWLINE_INDENT not valid but NEWLINE is, fall through
        }

        // Indent decreased
        if (next_indent < current) {
            // Queue up DEDENTs
            while (s->depth > 1 && s->indent_stack[s->depth - 1] > next_indent) {
                s->depth--;
                s->pending_dedents++;
            }
        }

        // Emit NEWLINE if valid
        if (valid_symbols[NEWLINE]) {
            lexer->result_symbol = NEWLINE;
            return true;
        }

        return false;
    }

    return false;
}
