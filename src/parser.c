#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_if = 4,
  anon_sym_import = 5,
  anon_sym_DOT = 6,
  anon_sym_LBRACE = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACE = 9,
  anon_sym_as = 10,
  anon_sym_COLON = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_return = 14,
  anon_sym_break = 15,
  anon_sym_continue = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_else = 19,
  sym_keyword = 20,
  anon_sym_loop = 21,
  anon_sym_while = 22,
  anon_sym_for = 23,
  anon_sym_in = 24,
  anon_sym_DOT_DOT_DOT = 25,
  sym_identifier = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  sym_int_literal = 29,
  sym_hex_literal = 30,
  sym_bin_literal = 31,
  sym_float_literal = 32,
  sym__comment = 33,
  sym_source_file = 34,
  sym__statement_list = 35,
  sym_empty_statement = 36,
  sym_binding = 37,
  sym_if_no_else = 38,
  sym_import = 39,
  sym_module_path = 40,
  sym_symbol_list = 41,
  sym__symbol = 42,
  sym__expression_statement = 43,
  sym_record = 44,
  sym_block = 45,
  sym__record_item = 46,
  sym_record_pun = 47,
  sym_record_pair = 48,
  sym_record_computed_key = 49,
  sym__record_key = 50,
  sym_call = 51,
  sym_early_exit = 52,
  sym_subscript = 53,
  sym_if_else = 54,
  sym_tuple = 55,
  sym__grouping = 56,
  sym_unit_literal = 57,
  sym_list = 58,
  sym__element = 59,
  sym_loop_loop = 60,
  sym_loop_while = 61,
  sym_loop_for = 62,
  sym_spread = 63,
  sym__literal = 64,
  sym_bool_literal = 65,
  aux_sym__statement_list_repeat1 = 66,
  aux_sym_module_path_repeat1 = 67,
  aux_sym_symbol_list_repeat1 = 68,
  aux_sym_record_repeat1 = 69,
  aux_sym_call_repeat1 = 70,
  aux_sym_tuple_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_as] = "as",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_return] = "return",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_else] = "else",
  [sym_keyword] = "keyword",
  [anon_sym_loop] = "loop",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_int_literal] = "int_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_bin_literal] = "bin_literal",
  [sym_float_literal] = "float_literal",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym_empty_statement] = "empty_statement",
  [sym_binding] = "binding",
  [sym_if_no_else] = "if_no_else",
  [sym_import] = "import",
  [sym_module_path] = "module_path",
  [sym_symbol_list] = "symbol_list",
  [sym__symbol] = "_symbol",
  [sym__expression_statement] = "_expression_statement",
  [sym_record] = "record",
  [sym_block] = "block",
  [sym__record_item] = "_record_item",
  [sym_record_pun] = "record_pun",
  [sym_record_pair] = "record_pair",
  [sym_record_computed_key] = "record_computed_key",
  [sym__record_key] = "_record_key",
  [sym_call] = "call",
  [sym_early_exit] = "early_exit",
  [sym_subscript] = "subscript",
  [sym_if_else] = "if_else",
  [sym_tuple] = "tuple",
  [sym__grouping] = "_grouping",
  [sym_unit_literal] = "unit_literal",
  [sym_list] = "list",
  [sym__element] = "_element",
  [sym_loop_loop] = "loop_loop",
  [sym_loop_while] = "loop_while",
  [sym_loop_for] = "loop_for",
  [sym_spread] = "spread",
  [sym__literal] = "_literal",
  [sym_bool_literal] = "bool_literal",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_module_path_repeat1] = "module_path_repeat1",
  [aux_sym_symbol_list_repeat1] = "symbol_list_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_else] = anon_sym_else,
  [sym_keyword] = sym_keyword,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_int_literal] = sym_int_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_bin_literal] = sym_bin_literal,
  [sym_float_literal] = sym_float_literal,
  [sym__comment] = sym__comment,
  [sym_source_file] = sym_source_file,
  [sym__statement_list] = sym__statement_list,
  [sym_empty_statement] = sym_empty_statement,
  [sym_binding] = sym_binding,
  [sym_if_no_else] = sym_if_no_else,
  [sym_import] = sym_import,
  [sym_module_path] = sym_module_path,
  [sym_symbol_list] = sym_symbol_list,
  [sym__symbol] = sym__symbol,
  [sym__expression_statement] = sym__expression_statement,
  [sym_record] = sym_record,
  [sym_block] = sym_block,
  [sym__record_item] = sym__record_item,
  [sym_record_pun] = sym_record_pun,
  [sym_record_pair] = sym_record_pair,
  [sym_record_computed_key] = sym_record_computed_key,
  [sym__record_key] = sym__record_key,
  [sym_call] = sym_call,
  [sym_early_exit] = sym_early_exit,
  [sym_subscript] = sym_subscript,
  [sym_if_else] = sym_if_else,
  [sym_tuple] = sym_tuple,
  [sym__grouping] = sym__grouping,
  [sym_unit_literal] = sym_unit_literal,
  [sym_list] = sym_list,
  [sym__element] = sym__element,
  [sym_loop_loop] = sym_loop_loop,
  [sym_loop_while] = sym_loop_while,
  [sym_loop_for] = sym_loop_for,
  [sym_spread] = sym_spread,
  [sym__literal] = sym__literal,
  [sym_bool_literal] = sym_bool_literal,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_module_path_repeat1] = aux_sym_module_path_repeat1,
  [aux_sym_symbol_list_repeat1] = aux_sym_symbol_list_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_if_no_else] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_list] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__record_item] = {
    .visible = false,
    .named = true,
  },
  [sym_record_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_record_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_record_computed_key] = {
    .visible = true,
    .named = true,
  },
  [sym__record_key] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_early_exit] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__grouping] = {
    .visible = false,
    .named = true,
  },
  [sym_unit_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_loop_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_while] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_for] = {
    .visible = true,
    .named = true,
  },
  [sym_spread] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 9,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 9,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 53:
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_continue);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_keyword);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(122);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(134);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(120);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(63);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(108);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(114);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(78);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(125);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(86);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(118);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(97);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(112);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_bin_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 55},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 55},
  [62] = {.lex_state = 55},
  [63] = {.lex_state = 55},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 56},
  [66] = {.lex_state = 56},
  [67] = {.lex_state = 55},
  [68] = {.lex_state = 56},
  [69] = {.lex_state = 54},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 56},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
    [sym_bin_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(132),
    [sym__statement_list] = STATE(138),
    [sym_empty_statement] = STATE(119),
    [sym_binding] = STATE(119),
    [sym_if_no_else] = STATE(119),
    [sym_import] = STATE(119),
    [sym__expression_statement] = STATE(119),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_empty_statement] = STATE(120),
    [sym_binding] = STATE(120),
    [sym_if_no_else] = STATE(120),
    [sym_import] = STATE(120),
    [sym__expression_statement] = STATE(120),
    [sym_record] = STATE(77),
    [sym_block] = STATE(77),
    [sym__record_item] = STATE(115),
    [sym_record_pun] = STATE(115),
    [sym_record_pair] = STATE(115),
    [sym_record_computed_key] = STATE(115),
    [sym__record_key] = STATE(137),
    [sym_call] = STATE(77),
    [sym_early_exit] = STATE(77),
    [sym_subscript] = STATE(77),
    [sym_if_else] = STATE(77),
    [sym_tuple] = STATE(77),
    [sym__grouping] = STATE(77),
    [sym_unit_literal] = STATE(77),
    [sym_list] = STATE(77),
    [sym_loop_loop] = STATE(77),
    [sym_loop_while] = STATE(77),
    [sym_loop_for] = STATE(77),
    [sym_spread] = STATE(115),
    [sym__literal] = STATE(71),
    [sym_bool_literal] = STATE(71),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(43),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(47),
    [sym_hex_literal] = ACTIONS(49),
    [sym_bin_literal] = ACTIONS(49),
    [sym_float_literal] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [sym_empty_statement] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_if_no_else] = STATE(102),
    [sym_import] = STATE(102),
    [sym__expression_statement] = STATE(102),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [sym_empty_statement] = STATE(120),
    [sym_binding] = STATE(120),
    [sym_if_no_else] = STATE(120),
    [sym_import] = STATE(120),
    [sym__expression_statement] = STATE(120),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym_empty_statement] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_if_no_else] = STATE(102),
    [sym_import] = STATE(102),
    [sym__expression_statement] = STATE(102),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym_empty_statement] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_if_no_else] = STATE(102),
    [sym_import] = STATE(102),
    [sym__expression_statement] = STATE(102),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [7] = {
    [sym_empty_statement] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_if_no_else] = STATE(102),
    [sym_import] = STATE(102),
    [sym__expression_statement] = STATE(102),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [sym_empty_statement] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_if_no_else] = STATE(102),
    [sym_import] = STATE(102),
    [sym__expression_statement] = STATE(102),
    [sym_record] = STATE(74),
    [sym_block] = STATE(74),
    [sym_call] = STATE(74),
    [sym_early_exit] = STATE(74),
    [sym_subscript] = STATE(74),
    [sym_if_else] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__grouping] = STATE(74),
    [sym_unit_literal] = STATE(74),
    [sym_list] = STATE(74),
    [sym_loop_loop] = STATE(74),
    [sym_loop_while] = STATE(74),
    [sym_loop_for] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(31),
    [sym_hex_literal] = ACTIONS(23),
    [sym_bin_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [sym_record] = STATE(57),
    [sym_block] = STATE(57),
    [sym_call] = STATE(57),
    [sym_early_exit] = STATE(57),
    [sym_subscript] = STATE(57),
    [sym_if_else] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym__grouping] = STATE(57),
    [sym_unit_literal] = STATE(57),
    [sym_list] = STATE(57),
    [sym_loop_loop] = STATE(57),
    [sym_loop_while] = STATE(57),
    [sym_loop_for] = STATE(57),
    [sym__literal] = STATE(57),
    [sym_bool_literal] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_keyword] = ACTIONS(65),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(61),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(67),
    [sym_hex_literal] = ACTIONS(65),
    [sym_bin_literal] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
  },
  [10] = {
    [sym_record] = STATE(101),
    [sym_block] = STATE(101),
    [sym__record_item] = STATE(129),
    [sym_record_pun] = STATE(129),
    [sym_record_pair] = STATE(129),
    [sym_record_computed_key] = STATE(129),
    [sym__record_key] = STATE(137),
    [sym_call] = STATE(101),
    [sym_early_exit] = STATE(101),
    [sym_subscript] = STATE(101),
    [sym_if_else] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym__grouping] = STATE(101),
    [sym_unit_literal] = STATE(101),
    [sym_list] = STATE(101),
    [sym_loop_loop] = STATE(101),
    [sym_loop_while] = STATE(101),
    [sym_loop_for] = STATE(101),
    [sym_spread] = STATE(129),
    [sym__literal] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(71),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(75),
    [sym_hex_literal] = ACTIONS(77),
    [sym_bin_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [sym_record] = STATE(101),
    [sym_block] = STATE(101),
    [sym__record_item] = STATE(129),
    [sym_record_pun] = STATE(129),
    [sym_record_pair] = STATE(129),
    [sym_record_computed_key] = STATE(129),
    [sym__record_key] = STATE(137),
    [sym_call] = STATE(101),
    [sym_early_exit] = STATE(101),
    [sym_subscript] = STATE(101),
    [sym_if_else] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym__grouping] = STATE(101),
    [sym_unit_literal] = STATE(101),
    [sym_list] = STATE(101),
    [sym_loop_loop] = STATE(101),
    [sym_loop_while] = STATE(101),
    [sym_loop_for] = STATE(101),
    [sym_spread] = STATE(129),
    [sym__literal] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(71),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(75),
    [sym_hex_literal] = ACTIONS(77),
    [sym_bin_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_record] = STATE(101),
    [sym_block] = STATE(101),
    [sym__record_item] = STATE(129),
    [sym_record_pun] = STATE(129),
    [sym_record_pair] = STATE(129),
    [sym_record_computed_key] = STATE(129),
    [sym__record_key] = STATE(137),
    [sym_call] = STATE(101),
    [sym_early_exit] = STATE(101),
    [sym_subscript] = STATE(101),
    [sym_if_else] = STATE(101),
    [sym_tuple] = STATE(101),
    [sym__grouping] = STATE(101),
    [sym_unit_literal] = STATE(101),
    [sym_list] = STATE(101),
    [sym_loop_loop] = STATE(101),
    [sym_loop_while] = STATE(101),
    [sym_loop_for] = STATE(101),
    [sym_spread] = STATE(129),
    [sym__literal] = STATE(81),
    [sym_bool_literal] = STATE(81),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(71),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(75),
    [sym_hex_literal] = ACTIONS(77),
    [sym_bin_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
  },
  [13] = {
    [sym_record] = STATE(72),
    [sym_block] = STATE(72),
    [sym_call] = STATE(72),
    [sym_early_exit] = STATE(72),
    [sym_subscript] = STATE(72),
    [sym_if_else] = STATE(72),
    [sym_tuple] = STATE(72),
    [sym__grouping] = STATE(72),
    [sym_unit_literal] = STATE(72),
    [sym_list] = STATE(72),
    [sym__element] = STATE(100),
    [sym_loop_loop] = STATE(72),
    [sym_loop_while] = STATE(72),
    [sym_loop_for] = STATE(72),
    [sym_spread] = STATE(100),
    [sym__literal] = STATE(72),
    [sym_bool_literal] = STATE(72),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(85),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(87),
    [sym_hex_literal] = ACTIONS(85),
    [sym_bin_literal] = ACTIONS(85),
    [sym_float_literal] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
  [14] = {
    [sym_record] = STATE(69),
    [sym_block] = STATE(69),
    [sym_call] = STATE(69),
    [sym_early_exit] = STATE(69),
    [sym_subscript] = STATE(69),
    [sym_if_else] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym__grouping] = STATE(69),
    [sym_unit_literal] = STATE(69),
    [sym_list] = STATE(69),
    [sym__element] = STATE(108),
    [sym_loop_loop] = STATE(69),
    [sym_loop_while] = STATE(69),
    [sym_loop_for] = STATE(69),
    [sym_spread] = STATE(108),
    [sym__literal] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_keyword] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(95),
    [sym_hex_literal] = ACTIONS(93),
    [sym_bin_literal] = ACTIONS(93),
    [sym_float_literal] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
  },
  [15] = {
    [sym_record] = STATE(79),
    [sym_block] = STATE(79),
    [sym_call] = STATE(79),
    [sym_early_exit] = STATE(79),
    [sym_subscript] = STATE(79),
    [sym_if_else] = STATE(79),
    [sym_tuple] = STATE(79),
    [sym__grouping] = STATE(79),
    [sym_unit_literal] = STATE(79),
    [sym_list] = STATE(79),
    [sym__element] = STATE(100),
    [sym_loop_loop] = STATE(79),
    [sym_loop_while] = STATE(79),
    [sym_loop_for] = STATE(79),
    [sym_spread] = STATE(100),
    [sym__literal] = STATE(79),
    [sym_bool_literal] = STATE(79),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(97),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(99),
    [sym_hex_literal] = ACTIONS(97),
    [sym_bin_literal] = ACTIONS(97),
    [sym_float_literal] = ACTIONS(97),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym_record] = STATE(69),
    [sym_block] = STATE(69),
    [sym_call] = STATE(69),
    [sym_early_exit] = STATE(69),
    [sym_subscript] = STATE(69),
    [sym_if_else] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym__grouping] = STATE(69),
    [sym_unit_literal] = STATE(69),
    [sym_list] = STATE(69),
    [sym__element] = STATE(105),
    [sym_loop_loop] = STATE(69),
    [sym_loop_while] = STATE(69),
    [sym_loop_for] = STATE(69),
    [sym_spread] = STATE(105),
    [sym__literal] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(95),
    [sym_hex_literal] = ACTIONS(93),
    [sym_bin_literal] = ACTIONS(93),
    [sym_float_literal] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
  },
  [17] = {
    [sym_record] = STATE(69),
    [sym_block] = STATE(69),
    [sym_call] = STATE(69),
    [sym_early_exit] = STATE(69),
    [sym_subscript] = STATE(69),
    [sym_if_else] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym__grouping] = STATE(69),
    [sym_unit_literal] = STATE(69),
    [sym_list] = STATE(69),
    [sym__element] = STATE(105),
    [sym_loop_loop] = STATE(69),
    [sym_loop_while] = STATE(69),
    [sym_loop_for] = STATE(69),
    [sym_spread] = STATE(105),
    [sym__literal] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_keyword] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(95),
    [sym_hex_literal] = ACTIONS(93),
    [sym_bin_literal] = ACTIONS(93),
    [sym_float_literal] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [sym_record] = STATE(69),
    [sym_block] = STATE(69),
    [sym_call] = STATE(69),
    [sym_early_exit] = STATE(69),
    [sym_subscript] = STATE(69),
    [sym_if_else] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym__grouping] = STATE(69),
    [sym_unit_literal] = STATE(69),
    [sym_list] = STATE(69),
    [sym__element] = STATE(105),
    [sym_loop_loop] = STATE(69),
    [sym_loop_while] = STATE(69),
    [sym_loop_for] = STATE(69),
    [sym_spread] = STATE(105),
    [sym__literal] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_keyword] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(95),
    [sym_hex_literal] = ACTIONS(93),
    [sym_bin_literal] = ACTIONS(93),
    [sym_float_literal] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
  },
  [19] = {
    [sym_record] = STATE(69),
    [sym_block] = STATE(69),
    [sym_call] = STATE(69),
    [sym_early_exit] = STATE(69),
    [sym_subscript] = STATE(69),
    [sym_if_else] = STATE(69),
    [sym_tuple] = STATE(69),
    [sym__grouping] = STATE(69),
    [sym_unit_literal] = STATE(69),
    [sym_list] = STATE(69),
    [sym__element] = STATE(105),
    [sym_loop_loop] = STATE(69),
    [sym_loop_while] = STATE(69),
    [sym_loop_for] = STATE(69),
    [sym_spread] = STATE(105),
    [sym__literal] = STATE(69),
    [sym_bool_literal] = STATE(69),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_keyword] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(95),
    [sym_hex_literal] = ACTIONS(93),
    [sym_bin_literal] = ACTIONS(93),
    [sym_float_literal] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 2,
      sym_identifier,
      sym_int_literal,
    STATE(105), 2,
      sym__element,
      sym_spread,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(93), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(69), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [65] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(113), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(75), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [132] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      anon_sym_in,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(67), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(117), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(65), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(57), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [194] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(123), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(83), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [258] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(123), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(83), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [322] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(129), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(131), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(89), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [383] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(137), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(129), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(135), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(84), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [444] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(141), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(139), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(73), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [505] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(143), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(92), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [566] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(147), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(82), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [627] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(117), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(151), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(106), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [688] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(129), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(155), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(90), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [749] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(123), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(83), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [810] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(129), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(159), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(80), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [871] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(19), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(163), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(93), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [932] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(25), 1,
      anon_sym_loop,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(61), 3,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(129), 3,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(65), 4,
      sym_keyword,
      sym_hex_literal,
      sym_bin_literal,
      sym_float_literal,
    STATE(57), 15,
      sym_record,
      sym_block,
      sym_call,
      sym_early_exit,
      sym_subscript,
      sym_if_else,
      sym_tuple,
      sym__grouping,
      sym_unit_literal,
      sym_list,
      sym_loop_loop,
      sym_loop_while,
      sym_loop_for,
      sym__literal,
      sym_bool_literal,
  [989] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(167), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1007] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(169), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1025] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(171), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1043] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(173), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1061] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(175), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_else,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1079] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(177), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1096] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(179), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1113] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(181), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1130] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(183), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1147] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(185), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1164] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(187), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1181] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(189), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1198] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(191), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1215] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(193), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1232] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(195), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1249] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(197), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1266] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(199), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1283] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(201), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1300] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(203), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1317] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(205), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1334] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(207), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1351] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(209), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1368] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(211), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1385] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(213), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1402] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(215), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1419] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(217), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1436] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1453] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(221), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_DOT_DOT_DOT,
  [1470] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
  [1495] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1511] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1527] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(203), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
  [1541] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1557] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(251), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1575] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1595] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1615] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1634] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1649] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1664] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_call_repeat1,
  [1683] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_symbol_list,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1698] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1715] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1726] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1745] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
  [1761] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
  [1777] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1791] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1805] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [1821] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [1835] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1849] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(98), 1,
      sym__symbol,
  [1865] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(289), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1875] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_block,
  [1891] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [1907] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(293), 1,
      anon_sym_else,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1919] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1933] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
  [1946] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_symbol_list_repeat1,
  [1959] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1968] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [1977] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(309), 1,
      anon_sym_as,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1988] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_symbol_list_repeat1,
  [2001] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2010] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_tuple_repeat1,
  [2023] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT_DOT_DOT,
  [2036] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2045] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_record_repeat1,
  [2058] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym__statement_list_repeat1,
  [2071] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(281), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2080] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_in,
  [2093] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_call_repeat1,
  [2106] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      aux_sym_tuple_repeat1,
  [2119] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_symbol_list_repeat1,
  [2132] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_tuple_repeat1,
  [2145] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_record_repeat1,
  [2158] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__symbol,
  [2171] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(347), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2180] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_call_repeat1,
  [2193] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_record_repeat1,
  [2206] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(356), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2215] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym__statement_list_repeat1,
  [2228] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__symbol,
  [2241] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      aux_sym__statement_list_repeat1,
  [2254] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym__statement_list_repeat1,
  [2267] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2276] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_tuple_repeat1,
  [2289] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2297] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(76), 1,
      sym_module_path,
  [2307] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(130), 1,
      sym__symbol,
  [2317] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [2327] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [2337] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [2347] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2355] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2363] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(376), 1,
      sym_identifier,
  [2370] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
  [2377] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2384] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [2391] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(293), 1,
      anon_sym_else,
  [2398] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
  [2405] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [2412] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
  [2419] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(384), 1,
      sym_identifier,
  [2426] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
  [2433] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [2440] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
  [2447] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(388), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 65,
  [SMALL_STATE(22)] = 132,
  [SMALL_STATE(23)] = 194,
  [SMALL_STATE(24)] = 258,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 383,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 566,
  [SMALL_STATE(30)] = 627,
  [SMALL_STATE(31)] = 688,
  [SMALL_STATE(32)] = 749,
  [SMALL_STATE(33)] = 810,
  [SMALL_STATE(34)] = 871,
  [SMALL_STATE(35)] = 932,
  [SMALL_STATE(36)] = 989,
  [SMALL_STATE(37)] = 1007,
  [SMALL_STATE(38)] = 1025,
  [SMALL_STATE(39)] = 1043,
  [SMALL_STATE(40)] = 1061,
  [SMALL_STATE(41)] = 1079,
  [SMALL_STATE(42)] = 1096,
  [SMALL_STATE(43)] = 1113,
  [SMALL_STATE(44)] = 1130,
  [SMALL_STATE(45)] = 1147,
  [SMALL_STATE(46)] = 1164,
  [SMALL_STATE(47)] = 1181,
  [SMALL_STATE(48)] = 1198,
  [SMALL_STATE(49)] = 1215,
  [SMALL_STATE(50)] = 1232,
  [SMALL_STATE(51)] = 1249,
  [SMALL_STATE(52)] = 1266,
  [SMALL_STATE(53)] = 1283,
  [SMALL_STATE(54)] = 1300,
  [SMALL_STATE(55)] = 1317,
  [SMALL_STATE(56)] = 1334,
  [SMALL_STATE(57)] = 1351,
  [SMALL_STATE(58)] = 1368,
  [SMALL_STATE(59)] = 1385,
  [SMALL_STATE(60)] = 1402,
  [SMALL_STATE(61)] = 1419,
  [SMALL_STATE(62)] = 1436,
  [SMALL_STATE(63)] = 1453,
  [SMALL_STATE(64)] = 1470,
  [SMALL_STATE(65)] = 1495,
  [SMALL_STATE(66)] = 1511,
  [SMALL_STATE(67)] = 1527,
  [SMALL_STATE(68)] = 1541,
  [SMALL_STATE(69)] = 1557,
  [SMALL_STATE(70)] = 1575,
  [SMALL_STATE(71)] = 1595,
  [SMALL_STATE(72)] = 1615,
  [SMALL_STATE(73)] = 1634,
  [SMALL_STATE(74)] = 1649,
  [SMALL_STATE(75)] = 1664,
  [SMALL_STATE(76)] = 1683,
  [SMALL_STATE(77)] = 1698,
  [SMALL_STATE(78)] = 1715,
  [SMALL_STATE(79)] = 1726,
  [SMALL_STATE(80)] = 1745,
  [SMALL_STATE(81)] = 1761,
  [SMALL_STATE(82)] = 1777,
  [SMALL_STATE(83)] = 1791,
  [SMALL_STATE(84)] = 1805,
  [SMALL_STATE(85)] = 1821,
  [SMALL_STATE(86)] = 1835,
  [SMALL_STATE(87)] = 1849,
  [SMALL_STATE(88)] = 1865,
  [SMALL_STATE(89)] = 1875,
  [SMALL_STATE(90)] = 1891,
  [SMALL_STATE(91)] = 1907,
  [SMALL_STATE(92)] = 1919,
  [SMALL_STATE(93)] = 1933,
  [SMALL_STATE(94)] = 1946,
  [SMALL_STATE(95)] = 1959,
  [SMALL_STATE(96)] = 1968,
  [SMALL_STATE(97)] = 1977,
  [SMALL_STATE(98)] = 1988,
  [SMALL_STATE(99)] = 2001,
  [SMALL_STATE(100)] = 2010,
  [SMALL_STATE(101)] = 2023,
  [SMALL_STATE(102)] = 2036,
  [SMALL_STATE(103)] = 2045,
  [SMALL_STATE(104)] = 2058,
  [SMALL_STATE(105)] = 2071,
  [SMALL_STATE(106)] = 2080,
  [SMALL_STATE(107)] = 2093,
  [SMALL_STATE(108)] = 2106,
  [SMALL_STATE(109)] = 2119,
  [SMALL_STATE(110)] = 2132,
  [SMALL_STATE(111)] = 2145,
  [SMALL_STATE(112)] = 2158,
  [SMALL_STATE(113)] = 2171,
  [SMALL_STATE(114)] = 2180,
  [SMALL_STATE(115)] = 2193,
  [SMALL_STATE(116)] = 2206,
  [SMALL_STATE(117)] = 2215,
  [SMALL_STATE(118)] = 2228,
  [SMALL_STATE(119)] = 2241,
  [SMALL_STATE(120)] = 2254,
  [SMALL_STATE(121)] = 2267,
  [SMALL_STATE(122)] = 2276,
  [SMALL_STATE(123)] = 2289,
  [SMALL_STATE(124)] = 2297,
  [SMALL_STATE(125)] = 2307,
  [SMALL_STATE(126)] = 2317,
  [SMALL_STATE(127)] = 2327,
  [SMALL_STATE(128)] = 2337,
  [SMALL_STATE(129)] = 2347,
  [SMALL_STATE(130)] = 2355,
  [SMALL_STATE(131)] = 2363,
  [SMALL_STATE(132)] = 2370,
  [SMALL_STATE(133)] = 2377,
  [SMALL_STATE(134)] = 2384,
  [SMALL_STATE(135)] = 2391,
  [SMALL_STATE(136)] = 2398,
  [SMALL_STATE(137)] = 2405,
  [SMALL_STATE(138)] = 2412,
  [SMALL_STATE(139)] = 2419,
  [SMALL_STATE(140)] = 2426,
  [SMALL_STATE(141)] = 2433,
  [SMALL_STATE(142)] = 2440,
  [SMALL_STATE(143)] = 2447,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_early_exit, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_early_exit, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_loop, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_literal, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_for, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grouping, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_early_exit, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_while, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pun, 1),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_statement, 1), REDUCE(sym_record_pun, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_key, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2), SHIFT_REPEAT(139),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_computed_key, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(8),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(20),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_no_else, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pair, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(12),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2), SHIFT_REPEAT(125),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_list_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 4),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(32),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_list, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [378] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kurt(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
