/**
 * @file Tree-sitter grammar for TOON (Token-Oriented Object Notation)
 * @author Your Name
 * @license MIT
 *
 * TOON is a line-oriented, indentation-based text format that encodes
 * the JSON data model with explicit structure and minimal quoting.
 *
 * Reference: https://github.com/toon-format/spec
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'toon',

  // External scanner handles indentation-sensitive tokens
  externals: $ => [
    $._newline,         // newline when indent stays same or decreases
    $._newline_indent,  // newline followed by increased indent
    $._dedent,
  ],

  // Tokens that can appear anywhere
  extras: $ => [
    /[ \t]/,
  ],

  // Conflict resolution
  conflicts: $ => [
    [$.value, $.key],
  ],

  rules: {
    // Document: root level
    document: $ => choice(
      $.object,
      $.root_array,
    ),

    // Object: collection of pairs or array declarations
    object: $ => repeat1(choice(
      $.pair,
      $.array_declaration,
    )),

    // Key-value pair: key: value
    pair: $ => seq(
      field('key', $.key),
      ':',
      choice(
        // Inline value on same line, then newline
        seq(field('value', $._inline_value), $._newline),
        // Nested object on next line(s) - use _newline_indent which combines newline + indent
        seq($._newline_indent, field('value', $.object), $._dedent),
        // Just newline (empty/null value)
        $._newline,
      ),
    ),

    // Array declaration with header: key[N]: or key[N]{fields}:
    array_declaration: $ => seq(
      field('key', $.key),
      $.array_header,
      ':',
      choice(
        // Inline values: key[3]: a,b,c
        seq(field('values', $.inline_values), $._newline),
        // Tabular or list on next lines - use _newline_indent
        seq($._newline_indent, field('content', $.array_content), $._dedent),
        // Empty array
        $._newline,
      ),
    ),

    // Root array (no key prefix): [N]: or [N]{fields}:
    root_array: $ => seq(
      $.array_header,
      ':',
      choice(
        seq(field('values', $.inline_values), $._newline),
        seq($._newline_indent, field('content', $.array_content), $._dedent),
        $._newline,
      ),
    ),

    // Array header: [N] or [N|] or [N\t] with optional {fields}
    array_header: $ => seq(
      '[',
      field('length', $.integer),
      optional(field('delimiter', $.delimiter_marker)),
      ']',
      optional(field('fields', $.field_list)),
    ),

    // Delimiter marker inside brackets
    delimiter_marker: $ => choice('\t', '|'),

    // Field list: {field1,field2,...} or {field1|field2} or {field1\tfield2}
    // Per spec, the delimiter must match the one declared in brackets.
    // Grammar accepts any delimiter; semantic validation can check consistency.
    field_list: $ => seq(
      '{',
      $.field_name,
      repeat(seq($.field_delimiter, $.field_name)),
      '}',
    ),

    // Field delimiter - same options as value delimiter
    field_delimiter: $ => choice(',', '\t', '|'),

    // Field name
    field_name: $ => choice($.identifier, $.quoted_string),

    // Inline values (delimiter-separated)
    inline_values: $ => seq(
      $._inline_value,
      repeat(seq($.delimiter, $._inline_value)),
    ),

    // Array content (list items or tabular rows)
    // List items have higher priority since they start with '-'
    array_content: $ => choice(
      prec(2, repeat1($.list_item)),
      prec(1, repeat1($.tabular_row)),
    ),

    // Tabular row
    tabular_row: $ => seq(
      $._inline_value,
      repeat(seq($.delimiter, $._inline_value)),
      $._newline,
    ),

    // List item marker - just the dash character
    list_marker: $ => '-',

    // List item: - value or - key: value (with possible continuation)
    // Key-value pattern has higher precedence to avoid matching "a: hello" as unquoted_string
    list_item: $ => seq(
      $.list_marker,
      choice(
        // Object starting inline: - a: hello (with optional more keys on next lines)
        // Higher precedence so "- a: hello" is parsed as key-value, not simple value
        prec(1, seq(
          field('key', $.key),
          ':',
          choice(
            // Inline value, possibly followed by more keys at same indent
            seq(
              field('value', $._inline_value),
              choice(
                $._newline,
                seq($._newline_indent, $.object, $._dedent),
              ),
            ),
            // Nested object
            seq($._newline_indent, $.object, $._dedent),
          ),
        )),
        // Simple value (lower precedence)
        seq(field('value', $._inline_value), $._newline),
      ),
    ),

    // Inline value (on same line, no nested structures)
    // NOTE: identifier is included as fallback for single-word strings like "one", "hello"
    // These get aliased to unquoted_string in the AST for consistency
    _inline_value: $ => choice(
      $.null,
      $.true,
      $.false,
      $.number,
      $.quoted_string,
      $.unquoted_string,
      alias($.identifier, $.unquoted_string),
    ),

    // Value wrapper for tree structure
    value: $ => $._inline_value,

    // Key
    key: $ => choice(
      $.identifier,
      $.dotted_key,
      $.quoted_string,
    ),

    // Dotted key: a.b.c
    dotted_key: $ => seq(
      $.identifier,
      repeat1(seq('.', $.identifier)),
    ),

    // Primitives
    null: $ => 'null',
    true: $ => 'true',
    false: $ => 'false',

    // Number
    number: $ => token(prec(1, seq(
      optional('-'),
      /[0-9]+/,
      optional(seq('.', /[0-9]+/)),
      optional(seq(/[eE][+-]?/, /[0-9]+/)),
    ))),

    // Integer (for array length)
    integer: $ => /[0-9]+/,

    // Quoted string
    quoted_string: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        /[^"\\\n]+/,
      )),
      '"',
    ),

    // Escape sequences
    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice('\\', '"', 'n', 'r', 't'),
    )),

    // Unquoted string - matches value content that isn't a number/boolean/null
    // After the key's colon, everything until delimiter/newline is the value
    // Can contain colons (URLs), dots (versions), etc.
    // Cannot start with '-' (list_marker), space/tab (extras), or '"' (quoted)
    // Must exclude delimiters (comma, tab, pipe) to allow splitting
    // Tab must be excluded to work as delimiter
    //
    // NOTE: Single-word strings like "one", "hello" are parsed as `identifier`
    // and the grammar handles this in _inline_value via the alias.
    //
    // Patterns:
    // 1. Version strings like 1.0.0 - HIGH precedence to beat number
    // 2. Date/timestamps like 2025-01-15T10:30:00Z - HIGH precedence
    // 3. Multi-word strings (contains space)
    // 4. URLs/strings with colon not followed by space
    unquoted_string: $ => choice(
      // Pattern 1: version strings - HIGH precedence to beat number
      token(prec(2, /[0-9]+\.[0-9]+\.[0-9][^\n\r\[\]\{\},"|\\	]*/)),
      // Pattern 2: date strings - HIGH precedence to beat number
      token(prec(2, /[0-9]+\-[0-9]+\-[0-9]+[^\n\r\[\]\{\},"|\\	]*/)),
      // Pattern 3: multi-word strings (contains space)
      // This catches "text value", "hello world", etc.
      token(/[a-zA-Z_][a-zA-Z0-9_]* [^\n\r\[\]\{\},"|\\	]+/),
      // Pattern 4: string with colon NOT followed by space (like URLs https://...)
      token(/[a-zA-Z_][a-zA-Z0-9_]*:[^ \n\r\[\]\{\},"|\\	][^\n\r\[\]\{\},"|\\	]*/),
    ),

    // Identifier - used for keys, field names, and single-word string values
    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    // Delimiter
    delimiter: $ => choice(',', '\t', '|'),
  },
});
