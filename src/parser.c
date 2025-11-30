#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_TAB = 4,
  anon_sym_PIPE = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_COMMA = 8,
  sym_list_marker = 9,
  anon_sym_DOT = 10,
  sym_null = 11,
  sym_true = 12,
  sym_false = 13,
  sym_number = 14,
  sym_integer = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_quoted_string_token1 = 17,
  sym_escape_sequence = 18,
  aux_sym_unquoted_string_token1 = 19,
  aux_sym_unquoted_string_token2 = 20,
  aux_sym_unquoted_string_token3 = 21,
  aux_sym_unquoted_string_token4 = 22,
  sym_identifier = 23,
  sym__newline = 24,
  sym__newline_indent = 25,
  sym__dedent = 26,
  sym_document = 27,
  sym_object = 28,
  sym_pair = 29,
  sym_array_declaration = 30,
  sym_root_array = 31,
  sym_array_header = 32,
  sym_delimiter_marker = 33,
  sym_field_list = 34,
  sym_field_delimiter = 35,
  sym_field_name = 36,
  sym_inline_values = 37,
  sym_array_content = 38,
  sym_tabular_row = 39,
  sym_list_item = 40,
  sym__inline_value = 41,
  sym_key = 42,
  sym_dotted_key = 43,
  sym_quoted_string = 44,
  sym_unquoted_string = 45,
  sym_delimiter = 46,
  aux_sym_object_repeat1 = 47,
  aux_sym_field_list_repeat1 = 48,
  aux_sym_inline_values_repeat1 = 49,
  aux_sym_array_content_repeat1 = 50,
  aux_sym_array_content_repeat2 = 51,
  aux_sym_dotted_key_repeat1 = 52,
  aux_sym_quoted_string_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_TAB] = "\t",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [sym_list_marker] = "list_marker",
  [anon_sym_DOT] = ".",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [aux_sym_unquoted_string_token2] = "unquoted_string_token2",
  [aux_sym_unquoted_string_token3] = "unquoted_string_token3",
  [aux_sym_unquoted_string_token4] = "unquoted_string_token4",
  [sym_identifier] = "identifier",
  [sym__newline] = "_newline",
  [sym__newline_indent] = "_newline_indent",
  [sym__dedent] = "_dedent",
  [sym_document] = "document",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array_declaration] = "array_declaration",
  [sym_root_array] = "root_array",
  [sym_array_header] = "array_header",
  [sym_delimiter_marker] = "delimiter_marker",
  [sym_field_list] = "field_list",
  [sym_field_delimiter] = "field_delimiter",
  [sym_field_name] = "field_name",
  [sym_inline_values] = "inline_values",
  [sym_array_content] = "array_content",
  [sym_tabular_row] = "tabular_row",
  [sym_list_item] = "list_item",
  [sym__inline_value] = "_inline_value",
  [sym_key] = "key",
  [sym_dotted_key] = "dotted_key",
  [sym_quoted_string] = "quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_delimiter] = "delimiter",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_inline_values_repeat1] = "inline_values_repeat1",
  [aux_sym_array_content_repeat1] = "array_content_repeat1",
  [aux_sym_array_content_repeat2] = "array_content_repeat2",
  [aux_sym_dotted_key_repeat1] = "dotted_key_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_list_marker] = sym_list_marker,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [aux_sym_unquoted_string_token2] = aux_sym_unquoted_string_token2,
  [aux_sym_unquoted_string_token3] = aux_sym_unquoted_string_token3,
  [aux_sym_unquoted_string_token4] = aux_sym_unquoted_string_token4,
  [sym_identifier] = sym_identifier,
  [sym__newline] = sym__newline,
  [sym__newline_indent] = sym__newline_indent,
  [sym__dedent] = sym__dedent,
  [sym_document] = sym_document,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array_declaration] = sym_array_declaration,
  [sym_root_array] = sym_root_array,
  [sym_array_header] = sym_array_header,
  [sym_delimiter_marker] = sym_delimiter_marker,
  [sym_field_list] = sym_field_list,
  [sym_field_delimiter] = sym_field_delimiter,
  [sym_field_name] = sym_field_name,
  [sym_inline_values] = sym_inline_values,
  [sym_array_content] = sym_array_content,
  [sym_tabular_row] = sym_tabular_row,
  [sym_list_item] = sym_list_item,
  [sym__inline_value] = sym__inline_value,
  [sym_key] = sym_key,
  [sym_dotted_key] = sym_dotted_key,
  [sym_quoted_string] = sym_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_delimiter] = sym_delimiter,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_inline_values_repeat1] = aux_sym_inline_values_repeat1,
  [aux_sym_array_content_repeat1] = aux_sym_array_content_repeat1,
  [aux_sym_array_content_repeat2] = aux_sym_array_content_repeat2,
  [aux_sym_dotted_key_repeat1] = aux_sym_dotted_key_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_list_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__newline_indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_root_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_header] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_values] = {
    .visible = true,
    .named = true,
  },
  [sym_array_content] = {
    .visible = true,
    .named = true,
  },
  [sym_tabular_row] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_content_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_delimiter = 2,
  field_fields = 3,
  field_key = 4,
  field_length = 5,
  field_value = 6,
  field_values = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_delimiter] = "delimiter",
  [field_fields] = "fields",
  [field_key] = "key",
  [field_length] = "length",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_length, 1},
  [1] =
    {field_key, 0},
  [2] =
    {field_fields, 3},
    {field_length, 1},
  [4] =
    {field_delimiter, 2},
    {field_length, 1},
  [6] =
    {field_values, 2},
  [7] =
    {field_key, 0},
    {field_value, 2},
  [9] =
    {field_delimiter, 2},
    {field_fields, 4},
    {field_length, 1},
  [12] =
    {field_content, 3},
  [13] =
    {field_key, 0},
    {field_value, 3},
  [15] =
    {field_key, 0},
    {field_values, 3},
  [17] =
    {field_value, 1},
  [18] =
    {field_content, 4},
    {field_key, 0},
  [20] =
    {field_key, 1},
    {field_value, 3},
  [22] =
    {field_key, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 53,
  [56] = 41,
  [57] = 35,
  [58] = 41,
  [59] = 35,
  [60] = 41,
  [61] = 35,
  [62] = 41,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
  [73] = 70,
  [74] = 65,
  [75] = 66,
  [76] = 67,
  [77] = 77,
  [78] = 64,
  [79] = 71,
  [80] = 53,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 50,
  [88] = 52,
  [89] = 51,
  [90] = 51,
  [91] = 53,
  [92] = 51,
  [93] = 53,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 98,
  [116] = 116,
  [117] = 111,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 96,
  [122] = 122,
  [123] = 119,
  [124] = 124,
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 38,
        ',', 25,
        '-', 27,
        '.', 28,
        ':', 18,
        '[', 19,
        '\\', 6,
        ']', 20,
        'f', 47,
        'n', 56,
        't', 53,
        '{', 23,
        '|', 22,
        '}', 24,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == ' ') SKIP(1);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(45);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 38,
        ',', 25,
        '-', 27,
        '.', 28,
        ':', 18,
        '[', 19,
        ']', 20,
        'f', 47,
        'n', 56,
        't', 53,
        '{', 23,
        '|', 22,
        '}', 24,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_list_marker);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_list_marker);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 's') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 3},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 4},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 3},
  [16] = {.lex_state = 2, .external_lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 16, .external_lex_state = 3},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16, .external_lex_state = 3},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 1, .external_lex_state = 5},
  [27] = {.lex_state = 1, .external_lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 1, .external_lex_state = 5},
  [33] = {.lex_state = 1, .external_lex_state = 5},
  [34] = {.lex_state = 16, .external_lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 16, .external_lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 1, .external_lex_state = 5},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1, .external_lex_state = 5},
  [51] = {.lex_state = 1, .external_lex_state = 5},
  [52] = {.lex_state = 1, .external_lex_state = 5},
  [53] = {.lex_state = 1, .external_lex_state = 5},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16, .external_lex_state = 3},
  [72] = {.lex_state = 16, .external_lex_state = 3},
  [73] = {.lex_state = 16, .external_lex_state = 3},
  [74] = {.lex_state = 16, .external_lex_state = 3},
  [75] = {.lex_state = 16, .external_lex_state = 3},
  [76] = {.lex_state = 16, .external_lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 16, .external_lex_state = 3},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 16, .external_lex_state = 3},
  [85] = {.lex_state = 16, .external_lex_state = 3},
  [86] = {.lex_state = 16, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 5},
  [110] = {.lex_state = 0, .external_lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 5},
  [114] = {.lex_state = 0, .external_lex_state = 5},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_list_marker] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_unquoted_string_token1] = ACTIONS(1),
    [aux_sym_unquoted_string_token2] = ACTIONS(1),
    [aux_sym_unquoted_string_token3] = ACTIONS(1),
    [aux_sym_unquoted_string_token4] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__newline_indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(120),
    [sym_object] = STATE(101),
    [sym_pair] = STATE(19),
    [sym_array_declaration] = STATE(19),
    [sym_root_array] = STATE(101),
    [sym_array_header] = STATE(112),
    [sym_key] = STATE(64),
    [sym_dotted_key] = STATE(94),
    [sym_quoted_string] = STATE(94),
    [aux_sym_object_repeat1] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      sym_list_marker,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(115), 1,
      sym_array_content,
    STATE(7), 2,
      sym_tabular_row,
      aux_sym_array_content_repeat2,
    STATE(38), 2,
      sym_list_item,
      aux_sym_array_content_repeat1,
    STATE(32), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(11), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [38] = 9,
    ACTIONS(9), 1,
      sym_list_marker,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(102), 1,
      sym_array_content,
    STATE(7), 2,
      sym_tabular_row,
      aux_sym_array_content_repeat2,
    STATE(38), 2,
      sym_list_item,
      aux_sym_array_content_repeat1,
    STATE(32), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(11), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [76] = 9,
    ACTIONS(9), 1,
      sym_list_marker,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(98), 1,
      sym_array_content,
    STATE(7), 2,
      sym_tabular_row,
      aux_sym_array_content_repeat2,
    STATE(38), 2,
      sym_list_item,
      aux_sym_array_content_repeat1,
    STATE(32), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(11), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [114] = 8,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(21), 1,
      sym__newline,
    ACTIONS(23), 1,
      sym__newline_indent,
    STATE(113), 1,
      sym_inline_values,
    STATE(31), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(19), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [147] = 8,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym__newline,
    ACTIONS(27), 1,
      sym__newline_indent,
    STATE(110), 1,
      sym_inline_values,
    STATE(31), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(19), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [180] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym__dedent,
    STATE(9), 2,
      sym_tabular_row,
      aux_sym_array_content_repeat2,
    STATE(32), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(11), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [211] = 8,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym__newline,
    ACTIONS(33), 1,
      sym__newline_indent,
    STATE(114), 1,
      sym_inline_values,
    STATE(31), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(19), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [244] = 7,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym__dedent,
    STATE(9), 2,
      sym_tabular_row,
      aux_sym_array_content_repeat2,
    STATE(32), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(35), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
    ACTIONS(41), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [275] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(53), 1,
      sym__newline_indent,
    STATE(117), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(49), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [305] = 8,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(94), 1,
      sym_dotted_key,
    STATE(95), 1,
      sym_quoted_string,
    STATE(116), 1,
      sym_key,
    STATE(109), 2,
      sym__inline_value,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(55), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [337] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__newline_indent,
    STATE(111), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(61), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [367] = 6,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym__newline_indent,
    STATE(83), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(67), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
    ACTIONS(71), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [394] = 5,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(45), 3,
      sym__inline_value,
      sym_quoted_string,
      sym_unquoted_string,
    ACTIONS(15), 4,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
    ACTIONS(77), 4,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
  [418] = 2,
    ACTIONS(79), 5,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
      sym_identifier,
    ACTIONS(81), 6,
      sym__dedent,
      anon_sym_DQUOTE,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [434] = 2,
    ACTIONS(83), 5,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
      sym_identifier,
    ACTIONS(85), 6,
      sym__dedent,
      anon_sym_DQUOTE,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [450] = 2,
    ACTIONS(87), 5,
      sym_null,
      sym_true,
      sym_false,
      sym_number,
      sym_identifier,
    ACTIONS(89), 5,
      anon_sym_DQUOTE,
      aux_sym_unquoted_string_token1,
      aux_sym_unquoted_string_token2,
      aux_sym_unquoted_string_token3,
      aux_sym_unquoted_string_token4,
  [465] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(91), 1,
      sym__dedent,
    STATE(78), 1,
      sym_key,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(20), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [487] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_key,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(25), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [509] = 6,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym__dedent,
    STATE(78), 1,
      sym_key,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(20), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [531] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(78), 1,
      sym_key,
    STATE(99), 1,
      sym_object,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(18), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [553] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(78), 1,
      sym_key,
    STATE(104), 1,
      sym_object,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(18), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [575] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(78), 1,
      sym_key,
    STATE(121), 1,
      sym_object,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(18), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [597] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(78), 1,
      sym_key,
    STATE(96), 1,
      sym_object,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(18), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [619] = 6,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_key,
    STATE(94), 2,
      sym_dotted_key,
      sym_quoted_string,
    STATE(25), 3,
      sym_pair,
      sym_array_declaration,
      aux_sym_object_repeat1,
  [641] = 5,
    ACTIONS(101), 1,
      anon_sym_TAB,
    ACTIONS(105), 1,
      sym__newline,
    STATE(14), 1,
      sym_delimiter,
    STATE(27), 1,
      aux_sym_inline_values_repeat1,
    ACTIONS(103), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [658] = 5,
    ACTIONS(107), 1,
      anon_sym_TAB,
    ACTIONS(113), 1,
      sym__newline,
    STATE(14), 1,
      sym_delimiter,
    STATE(27), 1,
      aux_sym_inline_values_repeat1,
    ACTIONS(110), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [675] = 5,
    ACTIONS(115), 1,
      anon_sym_TAB,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_field_list_repeat1,
    STATE(46), 1,
      sym_field_delimiter,
    ACTIONS(117), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [692] = 5,
    ACTIONS(121), 1,
      anon_sym_TAB,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_field_list_repeat1,
    STATE(46), 1,
      sym_field_delimiter,
    ACTIONS(124), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [709] = 5,
    ACTIONS(115), 1,
      anon_sym_TAB,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_field_list_repeat1,
    STATE(46), 1,
      sym_field_delimiter,
    ACTIONS(117), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [726] = 5,
    ACTIONS(101), 1,
      anon_sym_TAB,
    ACTIONS(131), 1,
      sym__newline,
    STATE(14), 1,
      sym_delimiter,
    STATE(26), 1,
      aux_sym_inline_values_repeat1,
    ACTIONS(103), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [743] = 5,
    ACTIONS(101), 1,
      anon_sym_TAB,
    ACTIONS(133), 1,
      sym__newline,
    STATE(14), 1,
      sym_delimiter,
    STATE(33), 1,
      aux_sym_inline_values_repeat1,
    ACTIONS(103), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [760] = 5,
    ACTIONS(101), 1,
      anon_sym_TAB,
    ACTIONS(135), 1,
      sym__newline,
    STATE(14), 1,
      sym_delimiter,
    STATE(27), 1,
      aux_sym_inline_values_repeat1,
    ACTIONS(103), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [777] = 3,
    ACTIONS(137), 1,
      sym_list_marker,
    ACTIONS(140), 1,
      sym__dedent,
    STATE(34), 2,
      sym_list_item,
      aux_sym_array_content_repeat1,
  [788] = 3,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(144), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [799] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(30), 1,
      sym_field_name,
    STATE(42), 1,
      sym_quoted_string,
  [812] = 4,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(152), 1,
      anon_sym_TAB,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      sym_delimiter_marker,
  [825] = 3,
    ACTIONS(29), 1,
      sym__dedent,
    ACTIONS(156), 1,
      sym_list_marker,
    STATE(34), 2,
      sym_list_item,
      aux_sym_array_content_repeat1,
  [836] = 3,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(144), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [847] = 3,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_dotted_key_repeat1,
    ACTIONS(160), 2,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [858] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(166), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [869] = 2,
    ACTIONS(168), 1,
      anon_sym_TAB,
    ACTIONS(170), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [878] = 3,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_dotted_key_repeat1,
    ACTIONS(172), 2,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [889] = 4,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym_dotted_key_repeat1,
  [902] = 2,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_TAB,
    ACTIONS(176), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [911] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_string,
    STATE(48), 1,
      sym_field_name,
  [924] = 3,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(180), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [935] = 2,
    ACTIONS(183), 1,
      anon_sym_TAB,
    ACTIONS(127), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [944] = 3,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_dotted_key_repeat1,
    ACTIONS(185), 2,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [955] = 2,
    ACTIONS(190), 2,
      sym__newline,
      anon_sym_TAB,
    ACTIONS(192), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [964] = 2,
    ACTIONS(194), 2,
      sym__newline,
      anon_sym_TAB,
    ACTIONS(196), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [973] = 2,
    ACTIONS(174), 2,
      sym__newline,
      anon_sym_TAB,
    ACTIONS(198), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [982] = 2,
    ACTIONS(200), 2,
      sym__newline,
      anon_sym_TAB,
    ACTIONS(202), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [991] = 2,
    ACTIONS(194), 1,
      anon_sym_TAB,
    ACTIONS(196), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1000] = 2,
    ACTIONS(200), 1,
      anon_sym_TAB,
    ACTIONS(202), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1009] = 3,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(206), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1020] = 3,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(144), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1031] = 3,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(212), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1042] = 3,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(144), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1053] = 3,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(218), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1064] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(144), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1075] = 3,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(224), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
  [1086] = 3,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_field_list,
  [1096] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_COLON,
    STATE(119), 1,
      sym_array_header,
  [1106] = 1,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1112] = 1,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1118] = 1,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1124] = 1,
    ACTIONS(185), 3,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [1130] = 1,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1136] = 1,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1142] = 1,
    ACTIONS(242), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1148] = 1,
    ACTIONS(238), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1154] = 1,
    ACTIONS(240), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1160] = 1,
    ACTIONS(232), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1166] = 1,
    ACTIONS(234), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1172] = 1,
    ACTIONS(236), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1178] = 3,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_COLON,
    STATE(107), 1,
      sym_field_list,
  [1188] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym_array_header,
  [1198] = 1,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1204] = 1,
    ACTIONS(200), 2,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [1209] = 1,
    ACTIONS(248), 2,
      sym__dedent,
      sym_list_marker,
  [1214] = 1,
    ACTIONS(250), 2,
      anon_sym_DQUOTE,
      sym_identifier,
  [1219] = 2,
    ACTIONS(252), 1,
      sym__newline,
    ACTIONS(254), 1,
      sym__newline_indent,
  [1226] = 1,
    ACTIONS(256), 2,
      sym__dedent,
      sym_list_marker,
  [1231] = 1,
    ACTIONS(258), 2,
      sym__dedent,
      sym_list_marker,
  [1236] = 1,
    ACTIONS(260), 2,
      sym__dedent,
      sym_list_marker,
  [1241] = 1,
    ACTIONS(190), 2,
      sym__newline,
      sym__newline_indent,
  [1246] = 1,
    ACTIONS(174), 2,
      sym__newline,
      sym__newline_indent,
  [1251] = 1,
    ACTIONS(194), 2,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [1256] = 1,
    ACTIONS(194), 2,
      sym__newline,
      anon_sym_COLON,
  [1261] = 1,
    ACTIONS(200), 2,
      sym__newline,
      anon_sym_COLON,
  [1266] = 1,
    ACTIONS(194), 2,
      sym__newline,
      sym__newline_indent,
  [1271] = 1,
    ACTIONS(200), 2,
      sym__newline,
      sym__newline_indent,
  [1276] = 1,
    ACTIONS(172), 2,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [1281] = 2,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      sym__newline,
  [1288] = 1,
    ACTIONS(264), 1,
      sym__dedent,
  [1292] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
  [1296] = 1,
    ACTIONS(268), 1,
      sym__dedent,
  [1300] = 1,
    ACTIONS(270), 1,
      sym__dedent,
  [1304] = 1,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
  [1308] = 1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1312] = 1,
    ACTIONS(276), 1,
      sym__dedent,
  [1316] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [1320] = 1,
    ACTIONS(280), 1,
      sym__dedent,
  [1324] = 1,
    ACTIONS(282), 1,
      sym_integer,
  [1328] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1332] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1336] = 1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [1340] = 1,
    ACTIONS(290), 1,
      sym__newline,
  [1344] = 1,
    ACTIONS(292), 1,
      sym__newline,
  [1348] = 1,
    ACTIONS(294), 1,
      sym__newline,
  [1352] = 1,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [1356] = 1,
    ACTIONS(298), 1,
      sym__newline,
  [1360] = 1,
    ACTIONS(300), 1,
      sym__newline,
  [1364] = 1,
    ACTIONS(302), 1,
      sym__dedent,
  [1368] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON,
  [1372] = 1,
    ACTIONS(306), 1,
      sym__newline,
  [1376] = 1,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
  [1380] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [1384] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [1388] = 1,
    ACTIONS(314), 1,
      sym__dedent,
  [1392] = 1,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [1396] = 1,
    ACTIONS(318), 1,
      anon_sym_COLON,
  [1400] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [1404] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 337,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 418,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 465,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 509,
  [SMALL_STATE(21)] = 531,
  [SMALL_STATE(22)] = 553,
  [SMALL_STATE(23)] = 575,
  [SMALL_STATE(24)] = 597,
  [SMALL_STATE(25)] = 619,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 658,
  [SMALL_STATE(28)] = 675,
  [SMALL_STATE(29)] = 692,
  [SMALL_STATE(30)] = 709,
  [SMALL_STATE(31)] = 726,
  [SMALL_STATE(32)] = 743,
  [SMALL_STATE(33)] = 760,
  [SMALL_STATE(34)] = 777,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 799,
  [SMALL_STATE(37)] = 812,
  [SMALL_STATE(38)] = 825,
  [SMALL_STATE(39)] = 836,
  [SMALL_STATE(40)] = 847,
  [SMALL_STATE(41)] = 858,
  [SMALL_STATE(42)] = 869,
  [SMALL_STATE(43)] = 878,
  [SMALL_STATE(44)] = 889,
  [SMALL_STATE(45)] = 902,
  [SMALL_STATE(46)] = 911,
  [SMALL_STATE(47)] = 924,
  [SMALL_STATE(48)] = 935,
  [SMALL_STATE(49)] = 944,
  [SMALL_STATE(50)] = 955,
  [SMALL_STATE(51)] = 964,
  [SMALL_STATE(52)] = 973,
  [SMALL_STATE(53)] = 982,
  [SMALL_STATE(54)] = 991,
  [SMALL_STATE(55)] = 1000,
  [SMALL_STATE(56)] = 1009,
  [SMALL_STATE(57)] = 1020,
  [SMALL_STATE(58)] = 1031,
  [SMALL_STATE(59)] = 1042,
  [SMALL_STATE(60)] = 1053,
  [SMALL_STATE(61)] = 1064,
  [SMALL_STATE(62)] = 1075,
  [SMALL_STATE(63)] = 1086,
  [SMALL_STATE(64)] = 1096,
  [SMALL_STATE(65)] = 1106,
  [SMALL_STATE(66)] = 1112,
  [SMALL_STATE(67)] = 1118,
  [SMALL_STATE(68)] = 1124,
  [SMALL_STATE(69)] = 1130,
  [SMALL_STATE(70)] = 1136,
  [SMALL_STATE(71)] = 1142,
  [SMALL_STATE(72)] = 1148,
  [SMALL_STATE(73)] = 1154,
  [SMALL_STATE(74)] = 1160,
  [SMALL_STATE(75)] = 1166,
  [SMALL_STATE(76)] = 1172,
  [SMALL_STATE(77)] = 1178,
  [SMALL_STATE(78)] = 1188,
  [SMALL_STATE(79)] = 1198,
  [SMALL_STATE(80)] = 1204,
  [SMALL_STATE(81)] = 1209,
  [SMALL_STATE(82)] = 1214,
  [SMALL_STATE(83)] = 1219,
  [SMALL_STATE(84)] = 1226,
  [SMALL_STATE(85)] = 1231,
  [SMALL_STATE(86)] = 1236,
  [SMALL_STATE(87)] = 1241,
  [SMALL_STATE(88)] = 1246,
  [SMALL_STATE(89)] = 1251,
  [SMALL_STATE(90)] = 1256,
  [SMALL_STATE(91)] = 1261,
  [SMALL_STATE(92)] = 1266,
  [SMALL_STATE(93)] = 1271,
  [SMALL_STATE(94)] = 1276,
  [SMALL_STATE(95)] = 1281,
  [SMALL_STATE(96)] = 1288,
  [SMALL_STATE(97)] = 1292,
  [SMALL_STATE(98)] = 1296,
  [SMALL_STATE(99)] = 1300,
  [SMALL_STATE(100)] = 1304,
  [SMALL_STATE(101)] = 1308,
  [SMALL_STATE(102)] = 1312,
  [SMALL_STATE(103)] = 1316,
  [SMALL_STATE(104)] = 1320,
  [SMALL_STATE(105)] = 1324,
  [SMALL_STATE(106)] = 1328,
  [SMALL_STATE(107)] = 1332,
  [SMALL_STATE(108)] = 1336,
  [SMALL_STATE(109)] = 1340,
  [SMALL_STATE(110)] = 1344,
  [SMALL_STATE(111)] = 1348,
  [SMALL_STATE(112)] = 1352,
  [SMALL_STATE(113)] = 1356,
  [SMALL_STATE(114)] = 1360,
  [SMALL_STATE(115)] = 1364,
  [SMALL_STATE(116)] = 1368,
  [SMALL_STATE(117)] = 1372,
  [SMALL_STATE(118)] = 1376,
  [SMALL_STATE(119)] = 1380,
  [SMALL_STATE(120)] = 1384,
  [SMALL_STATE(121)] = 1388,
  [SMALL_STATE(122)] = 1392,
  [SMALL_STATE(123)] = 1396,
  [SMALL_STATE(124)] = 1400,
  [SMALL_STATE(125)] = 1404,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_content, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_content_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_content_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_content_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_content_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_content_repeat2, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tabular_row, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabular_row, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tabular_row, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabular_row, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_values, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_values_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_values_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_values_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_values, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_content_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_key, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_value, 1, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_values_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_key_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_key_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_value, 1, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_header, 4, 0, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5, 0, 10),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 5, 0, 11),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 6, 0, 13),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, 0, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 4, 0, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_header, 3, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3, 0, 12),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delimiter, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 5, 0, 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 6, 0, 15),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 7, 0, 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_value, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter_marker, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_header, 5, 0, 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_header, 4, 0, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_array, 4, 0, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_array, 5, 0, 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_array, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__newline_indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__newline_indent] = sym__newline_indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__newline_indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token__newline_indent] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__newline_indent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_toon_external_scanner_create(void);
void tree_sitter_toon_external_scanner_destroy(void *);
bool tree_sitter_toon_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toon_external_scanner_serialize(void *, char *);
void tree_sitter_toon_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_toon(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_toon_external_scanner_create,
      tree_sitter_toon_external_scanner_destroy,
      tree_sitter_toon_external_scanner_scan,
      tree_sitter_toon_external_scanner_serialize,
      tree_sitter_toon_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
