#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 314
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_ID = 1,
  sym__COMMENT = 2,
  sym__WHITESPACE = 3,
  sym__SEMICOLON = 4,
  sym__COLON = 5,
  sym__COMMA = 6,
  sym__DOT = 7,
  sym__ARROW = 8,
  sym__DOTS = 9,
  sym__DOUBLE_ARROW = 10,
  sym__EQ = 11,
  sym__BANG = 12,
  sym__QUESTION = 13,
  sym__PIPE = 14,
  sym__STAR = 15,
  sym__OPEN_BRACE = 16,
  sym__CLOSE_BRACE = 17,
  sym__OPEN_BRACKET = 18,
  sym__CLOSE_BRACKET = 19,
  sym__OPEN_PAREN = 20,
  sym__CLOSE_PAREN = 21,
  sym__AND = 22,
  sym__AS = 23,
  sym__BREAK = 24,
  sym__CONTINUE = 25,
  sym__ELSE = 26,
  sym__FOR = 27,
  sym__IF = 28,
  sym__IMPORT = 29,
  sym__IN = 30,
  sym__LET = 31,
  sym__LOOP = 32,
  sym__MATCH = 33,
  sym__OR = 34,
  sym__RETURN = 35,
  sym__VAR = 36,
  sym__WHILE = 37,
  sym_TRUE = 38,
  sym_FALSE = 39,
  sym__OP = 40,
  sym_KEYWORD = 41,
  sym_FLOAT = 42,
  sym_INT = 43,
  sym_HEX = 44,
  sym_BIN = 45,
  sym_source_file = 46,
  sym__statement_list = 47,
  sym__statement = 48,
  sym_import = 49,
  sym_module_path = 50,
  sym_import_list = 51,
  sym__import_name = 52,
  sym_op_ref = 53,
  sym_star = 54,
  sym_rename = 55,
  sym_rename_op = 56,
  sym__binding = 57,
  sym_var_bind = 58,
  sym_let_bind = 59,
  sym_let_pattern = 60,
  sym_let_fn = 61,
  sym__empty_statement = 62,
  sym__expression = 63,
  sym__unary = 64,
  sym__suffix = 65,
  sym_prefix = 66,
  sym_prefix_op = 67,
  sym_infix = 68,
  sym_infix_op = 69,
  sym_postfix = 70,
  sym_postfix_op = 71,
  sym_subscript = 72,
  sym_member = 73,
  sym_call = 74,
  sym__argument = 75,
  sym_keyword_argument = 76,
  sym__primary_expression = 77,
  sym_match = 78,
  sym__match_arms = 79,
  sym_match_arm = 80,
  sym_pattern = 81,
  sym__pattern = 82,
  sym_pat_or = 83,
  sym_pat_rename = 84,
  sym_pat_rest = 85,
  sym_pat_list = 86,
  sym_pat_grouping = 87,
  sym_pat_tuple = 88,
  sym_pat_rec = 89,
  sym__pat_rec_elt = 90,
  sym_pat_pair = 91,
  sym_return = 92,
  sym_break = 93,
  sym_continue = 94,
  sym_loop = 95,
  sym_while = 96,
  sym_conditional = 97,
  sym_elif = 98,
  sym_fn = 99,
  sym_bare_parameter = 100,
  sym_parameter_list = 101,
  sym__parameter = 102,
  sym_keyword_parameter = 103,
  sym_list = 104,
  sym_tuple = 105,
  sym__element = 106,
  sym_spread = 107,
  sym_rest = 108,
  sym_block = 109,
  sym_record = 110,
  sym__record_element = 111,
  sym_pun = 112,
  sym_pair = 113,
  sym__key = 114,
  sym_computed_key = 115,
  sym_grouping = 116,
  sym__literal = 117,
  sym_unit = 118,
  aux_sym__statement_list_repeat1 = 119,
  aux_sym_module_path_repeat1 = 120,
  aux_sym_import_list_repeat1 = 121,
  aux_sym_call_repeat1 = 122,
  aux_sym__match_arms_repeat1 = 123,
  aux_sym_pat_list_repeat1 = 124,
  aux_sym_pat_rec_repeat1 = 125,
  aux_sym_conditional_repeat1 = 126,
  aux_sym_parameter_list_repeat1 = 127,
  aux_sym_list_repeat1 = 128,
  aux_sym_record_repeat1 = 129,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ID] = "ID",
  [sym__COMMENT] = "_COMMENT",
  [sym__WHITESPACE] = "_WHITESPACE",
  [sym__SEMICOLON] = "_SEMICOLON",
  [sym__COLON] = "_COLON",
  [sym__COMMA] = "_COMMA",
  [sym__DOT] = "_DOT",
  [sym__ARROW] = "_ARROW",
  [sym__DOTS] = "_DOTS",
  [sym__DOUBLE_ARROW] = "_DOUBLE_ARROW",
  [sym__EQ] = "_EQ",
  [sym__BANG] = "_BANG",
  [sym__QUESTION] = "_QUESTION",
  [sym__PIPE] = "_PIPE",
  [sym__STAR] = "_STAR",
  [sym__OPEN_BRACE] = "_OPEN_BRACE",
  [sym__CLOSE_BRACE] = "_CLOSE_BRACE",
  [sym__OPEN_BRACKET] = "_OPEN_BRACKET",
  [sym__CLOSE_BRACKET] = "_CLOSE_BRACKET",
  [sym__OPEN_PAREN] = "_OPEN_PAREN",
  [sym__CLOSE_PAREN] = "_CLOSE_PAREN",
  [sym__AND] = "_AND",
  [sym__AS] = "_AS",
  [sym__BREAK] = "_BREAK",
  [sym__CONTINUE] = "_CONTINUE",
  [sym__ELSE] = "_ELSE",
  [sym__FOR] = "_FOR",
  [sym__IF] = "_IF",
  [sym__IMPORT] = "_IMPORT",
  [sym__IN] = "_IN",
  [sym__LET] = "_LET",
  [sym__LOOP] = "_LOOP",
  [sym__MATCH] = "_MATCH",
  [sym__OR] = "_OR",
  [sym__RETURN] = "_RETURN",
  [sym__VAR] = "_VAR",
  [sym__WHILE] = "_WHILE",
  [sym_TRUE] = "TRUE",
  [sym_FALSE] = "FALSE",
  [sym__OP] = "_OP",
  [sym_KEYWORD] = "KEYWORD",
  [sym_FLOAT] = "FLOAT",
  [sym_INT] = "INT",
  [sym_HEX] = "HEX",
  [sym_BIN] = "BIN",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym_import] = "import",
  [sym_module_path] = "module_path",
  [sym_import_list] = "import_list",
  [sym__import_name] = "_import_name",
  [sym_op_ref] = "op_ref",
  [sym_star] = "star",
  [sym_rename] = "rename",
  [sym_rename_op] = "rename_op",
  [sym__binding] = "_binding",
  [sym_var_bind] = "var_bind",
  [sym_let_bind] = "let_bind",
  [sym_let_pattern] = "let_pattern",
  [sym_let_fn] = "let_fn",
  [sym__empty_statement] = "_empty_statement",
  [sym__expression] = "_expression",
  [sym__unary] = "_unary",
  [sym__suffix] = "_suffix",
  [sym_prefix] = "prefix",
  [sym_prefix_op] = "prefix_op",
  [sym_infix] = "infix",
  [sym_infix_op] = "infix_op",
  [sym_postfix] = "postfix",
  [sym_postfix_op] = "postfix_op",
  [sym_subscript] = "subscript",
  [sym_member] = "member",
  [sym_call] = "call",
  [sym__argument] = "_argument",
  [sym_keyword_argument] = "keyword_argument",
  [sym__primary_expression] = "_primary_expression",
  [sym_match] = "match",
  [sym__match_arms] = "_match_arms",
  [sym_match_arm] = "match_arm",
  [sym_pattern] = "pattern",
  [sym__pattern] = "_pattern",
  [sym_pat_or] = "pat_or",
  [sym_pat_rename] = "pat_rename",
  [sym_pat_rest] = "pat_rest",
  [sym_pat_list] = "pat_list",
  [sym_pat_grouping] = "pat_grouping",
  [sym_pat_tuple] = "pat_tuple",
  [sym_pat_rec] = "pat_rec",
  [sym__pat_rec_elt] = "_pat_rec_elt",
  [sym_pat_pair] = "pat_pair",
  [sym_return] = "return",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [sym_loop] = "loop",
  [sym_while] = "while",
  [sym_conditional] = "conditional",
  [sym_elif] = "elif",
  [sym_fn] = "fn",
  [sym_bare_parameter] = "bare_parameter",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_keyword_parameter] = "keyword_parameter",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym__element] = "_element",
  [sym_spread] = "spread",
  [sym_rest] = "rest",
  [sym_block] = "block",
  [sym_record] = "record",
  [sym__record_element] = "_record_element",
  [sym_pun] = "pun",
  [sym_pair] = "pair",
  [sym__key] = "_key",
  [sym_computed_key] = "computed_key",
  [sym_grouping] = "grouping",
  [sym__literal] = "_literal",
  [sym_unit] = "unit",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_module_path_repeat1] = "module_path_repeat1",
  [aux_sym_import_list_repeat1] = "import_list_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym__match_arms_repeat1] = "_match_arms_repeat1",
  [aux_sym_pat_list_repeat1] = "pat_list_repeat1",
  [aux_sym_pat_rec_repeat1] = "pat_rec_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ID] = sym_ID,
  [sym__COMMENT] = sym__COMMENT,
  [sym__WHITESPACE] = sym__WHITESPACE,
  [sym__SEMICOLON] = sym__SEMICOLON,
  [sym__COLON] = sym__COLON,
  [sym__COMMA] = sym__COMMA,
  [sym__DOT] = sym__DOT,
  [sym__ARROW] = sym__ARROW,
  [sym__DOTS] = sym__DOTS,
  [sym__DOUBLE_ARROW] = sym__DOUBLE_ARROW,
  [sym__EQ] = sym__EQ,
  [sym__BANG] = sym__BANG,
  [sym__QUESTION] = sym__QUESTION,
  [sym__PIPE] = sym__PIPE,
  [sym__STAR] = sym__STAR,
  [sym__OPEN_BRACE] = sym__OPEN_BRACE,
  [sym__CLOSE_BRACE] = sym__CLOSE_BRACE,
  [sym__OPEN_BRACKET] = sym__OPEN_BRACKET,
  [sym__CLOSE_BRACKET] = sym__CLOSE_BRACKET,
  [sym__OPEN_PAREN] = sym__OPEN_PAREN,
  [sym__CLOSE_PAREN] = sym__CLOSE_PAREN,
  [sym__AND] = sym__AND,
  [sym__AS] = sym__AS,
  [sym__BREAK] = sym__BREAK,
  [sym__CONTINUE] = sym__CONTINUE,
  [sym__ELSE] = sym__ELSE,
  [sym__FOR] = sym__FOR,
  [sym__IF] = sym__IF,
  [sym__IMPORT] = sym__IMPORT,
  [sym__IN] = sym__IN,
  [sym__LET] = sym__LET,
  [sym__LOOP] = sym__LOOP,
  [sym__MATCH] = sym__MATCH,
  [sym__OR] = sym__OR,
  [sym__RETURN] = sym__RETURN,
  [sym__VAR] = sym__VAR,
  [sym__WHILE] = sym__WHILE,
  [sym_TRUE] = sym_TRUE,
  [sym_FALSE] = sym_FALSE,
  [sym__OP] = sym__OP,
  [sym_KEYWORD] = sym_KEYWORD,
  [sym_FLOAT] = sym_FLOAT,
  [sym_INT] = sym_INT,
  [sym_HEX] = sym_HEX,
  [sym_BIN] = sym_BIN,
  [sym_source_file] = sym_source_file,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym_import] = sym_import,
  [sym_module_path] = sym_module_path,
  [sym_import_list] = sym_import_list,
  [sym__import_name] = sym__import_name,
  [sym_op_ref] = sym_op_ref,
  [sym_star] = sym_star,
  [sym_rename] = sym_rename,
  [sym_rename_op] = sym_rename_op,
  [sym__binding] = sym__binding,
  [sym_var_bind] = sym_var_bind,
  [sym_let_bind] = sym_let_bind,
  [sym_let_pattern] = sym_let_pattern,
  [sym_let_fn] = sym_let_fn,
  [sym__empty_statement] = sym__empty_statement,
  [sym__expression] = sym__expression,
  [sym__unary] = sym__unary,
  [sym__suffix] = sym__suffix,
  [sym_prefix] = sym_prefix,
  [sym_prefix_op] = sym_prefix_op,
  [sym_infix] = sym_infix,
  [sym_infix_op] = sym_infix_op,
  [sym_postfix] = sym_postfix,
  [sym_postfix_op] = sym_postfix_op,
  [sym_subscript] = sym_subscript,
  [sym_member] = sym_member,
  [sym_call] = sym_call,
  [sym__argument] = sym__argument,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym__primary_expression] = sym__primary_expression,
  [sym_match] = sym_match,
  [sym__match_arms] = sym__match_arms,
  [sym_match_arm] = sym_match_arm,
  [sym_pattern] = sym_pattern,
  [sym__pattern] = sym__pattern,
  [sym_pat_or] = sym_pat_or,
  [sym_pat_rename] = sym_pat_rename,
  [sym_pat_rest] = sym_pat_rest,
  [sym_pat_list] = sym_pat_list,
  [sym_pat_grouping] = sym_pat_grouping,
  [sym_pat_tuple] = sym_pat_tuple,
  [sym_pat_rec] = sym_pat_rec,
  [sym__pat_rec_elt] = sym__pat_rec_elt,
  [sym_pat_pair] = sym_pat_pair,
  [sym_return] = sym_return,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [sym_loop] = sym_loop,
  [sym_while] = sym_while,
  [sym_conditional] = sym_conditional,
  [sym_elif] = sym_elif,
  [sym_fn] = sym_fn,
  [sym_bare_parameter] = sym_bare_parameter,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_keyword_parameter] = sym_keyword_parameter,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym__element] = sym__element,
  [sym_spread] = sym_spread,
  [sym_rest] = sym_rest,
  [sym_block] = sym_block,
  [sym_record] = sym_record,
  [sym__record_element] = sym__record_element,
  [sym_pun] = sym_pun,
  [sym_pair] = sym_pair,
  [sym__key] = sym__key,
  [sym_computed_key] = sym_computed_key,
  [sym_grouping] = sym_grouping,
  [sym__literal] = sym__literal,
  [sym_unit] = sym_unit,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_module_path_repeat1] = aux_sym_module_path_repeat1,
  [aux_sym_import_list_repeat1] = aux_sym_import_list_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym__match_arms_repeat1] = aux_sym__match_arms_repeat1,
  [aux_sym_pat_list_repeat1] = aux_sym_pat_list_repeat1,
  [aux_sym_pat_rec_repeat1] = aux_sym_pat_rec_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ID] = {
    .visible = true,
    .named = true,
  },
  [sym__COMMENT] = {
    .visible = false,
    .named = true,
  },
  [sym__WHITESPACE] = {
    .visible = false,
    .named = true,
  },
  [sym__SEMICOLON] = {
    .visible = false,
    .named = true,
  },
  [sym__COLON] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMA] = {
    .visible = false,
    .named = true,
  },
  [sym__DOT] = {
    .visible = false,
    .named = true,
  },
  [sym__ARROW] = {
    .visible = false,
    .named = true,
  },
  [sym__DOTS] = {
    .visible = false,
    .named = true,
  },
  [sym__DOUBLE_ARROW] = {
    .visible = false,
    .named = true,
  },
  [sym__EQ] = {
    .visible = false,
    .named = true,
  },
  [sym__BANG] = {
    .visible = false,
    .named = true,
  },
  [sym__QUESTION] = {
    .visible = false,
    .named = true,
  },
  [sym__PIPE] = {
    .visible = false,
    .named = true,
  },
  [sym__STAR] = {
    .visible = false,
    .named = true,
  },
  [sym__OPEN_BRACE] = {
    .visible = false,
    .named = true,
  },
  [sym__CLOSE_BRACE] = {
    .visible = false,
    .named = true,
  },
  [sym__OPEN_BRACKET] = {
    .visible = false,
    .named = true,
  },
  [sym__CLOSE_BRACKET] = {
    .visible = false,
    .named = true,
  },
  [sym__OPEN_PAREN] = {
    .visible = false,
    .named = true,
  },
  [sym__CLOSE_PAREN] = {
    .visible = false,
    .named = true,
  },
  [sym__AND] = {
    .visible = false,
    .named = true,
  },
  [sym__AS] = {
    .visible = false,
    .named = true,
  },
  [sym__BREAK] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTINUE] = {
    .visible = false,
    .named = true,
  },
  [sym__ELSE] = {
    .visible = false,
    .named = true,
  },
  [sym__FOR] = {
    .visible = false,
    .named = true,
  },
  [sym__IF] = {
    .visible = false,
    .named = true,
  },
  [sym__IMPORT] = {
    .visible = false,
    .named = true,
  },
  [sym__IN] = {
    .visible = false,
    .named = true,
  },
  [sym__LET] = {
    .visible = false,
    .named = true,
  },
  [sym__LOOP] = {
    .visible = false,
    .named = true,
  },
  [sym__MATCH] = {
    .visible = false,
    .named = true,
  },
  [sym__OR] = {
    .visible = false,
    .named = true,
  },
  [sym__RETURN] = {
    .visible = false,
    .named = true,
  },
  [sym__VAR] = {
    .visible = false,
    .named = true,
  },
  [sym__WHILE] = {
    .visible = false,
    .named = true,
  },
  [sym_TRUE] = {
    .visible = true,
    .named = true,
  },
  [sym_FALSE] = {
    .visible = true,
    .named = true,
  },
  [sym__OP] = {
    .visible = false,
    .named = true,
  },
  [sym_KEYWORD] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT] = {
    .visible = true,
    .named = true,
  },
  [sym_HEX] = {
    .visible = true,
    .named = true,
  },
  [sym_BIN] = {
    .visible = true,
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
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_import_list] = {
    .visible = true,
    .named = true,
  },
  [sym__import_name] = {
    .visible = false,
    .named = true,
  },
  [sym_op_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [sym_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_rename_op] = {
    .visible = true,
    .named = true,
  },
  [sym__binding] = {
    .visible = false,
    .named = true,
  },
  [sym_var_bind] = {
    .visible = true,
    .named = true,
  },
  [sym_let_bind] = {
    .visible = true,
    .named = true,
  },
  [sym_let_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_let_fn] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__unary] = {
    .visible = false,
    .named = true,
  },
  [sym__suffix] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym__match_arms] = {
    .visible = false,
    .named = true,
  },
  [sym_match_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_pat_or] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_list] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_rec] = {
    .visible = true,
    .named = true,
  },
  [sym__pat_rec_elt] = {
    .visible = false,
    .named = true,
  },
  [sym_pat_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_elif] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_spread] = {
    .visible = true,
    .named = true,
  },
  [sym_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym__record_element] = {
    .visible = false,
    .named = true,
  },
  [sym_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_computed_key] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unit] = {
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
  [aux_sym_import_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__match_arms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pat_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pat_rec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
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
  [17] = 9,
  [18] = 18,
  [19] = 7,
  [20] = 20,
  [21] = 8,
  [22] = 22,
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 31,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 28,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 52,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 47,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 60,
  [64] = 64,
  [65] = 61,
  [66] = 62,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
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
  [141] = 84,
  [142] = 142,
  [143] = 85,
  [144] = 81,
  [145] = 83,
  [146] = 86,
  [147] = 79,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 156,
  [157] = 157,
  [158] = 82,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 160,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 176,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 188,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 200,
  [217] = 203,
  [218] = 208,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 157,
  [230] = 154,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 212,
  [245] = 245,
  [246] = 246,
  [247] = 169,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 157,
  [254] = 254,
  [255] = 82,
  [256] = 167,
  [257] = 257,
  [258] = 171,
  [259] = 259,
  [260] = 260,
  [261] = 170,
  [262] = 262,
  [263] = 163,
  [264] = 264,
  [265] = 178,
  [266] = 172,
  [267] = 267,
  [268] = 268,
  [269] = 181,
  [270] = 177,
  [271] = 161,
  [272] = 264,
  [273] = 166,
  [274] = 156,
  [275] = 173,
  [276] = 175,
  [277] = 179,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 285,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 298,
  [302] = 281,
  [303] = 303,
  [304] = 304,
  [305] = 287,
  [306] = 306,
  [307] = 307,
  [308] = 300,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
};

static inline bool sym_ID_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
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

static inline bool sym_ID_character_set_2(int32_t c) {
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

static inline bool sym_ID_character_set_3(int32_t c) {
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

static inline bool sym__OP_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < '-'
      ? (c < '*'
        ? (c >= '$' && c <= '&')
        : c <= '+')
      : (c <= '-' || c == '<'))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym__OP_character_set_2(int32_t c) {
  return (c < '@'
    ? (c < '-'
      ? (c < '*'
        ? (c >= '$' && c <= '&')
        : c <= '+')
      : (c <= '-' || (c < '>'
        ? c == '<'
        : c <= '>')))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '~') ADVANCE(38);
      if (sym_ID_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_ID_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_ID_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 12:
      if (sym_ID_character_set_2(lookahead)) ADVANCE(39);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (sym_ID_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '-') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (sym_ID_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__WHITESPACE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__SEMICOLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__ARROW);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__DOTS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__DOUBLE_ARROW);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__BANG);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__QUESTION);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__OPEN_BRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__CLOSE_BRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__OPEN_BRACKET);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__CLOSE_BRACKET);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__OPEN_PAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__CLOSE_PAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ID);
      if (sym_ID_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__OP);
      if (lookahead == '>') ADVANCE(22);
      if (sym__OP_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__OP);
      if (sym__OP_character_set_2(lookahead)) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_KEYWORD);
      if (sym_ID_character_set_3(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_INT);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_INT);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_HEX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_BIN);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__AS);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__IF);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__IN);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__OR);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__AND);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__FOR);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__LET);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__VAR);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__ELSE);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__LOOP);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_TRUE);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__BREAK);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_FALSE);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__MATCH);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__WHILE);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__IMPORT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__RETURN);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__CONTINUE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ID] = ACTIONS(1),
    [sym__COMMENT] = ACTIONS(3),
    [sym__WHITESPACE] = ACTIONS(3),
    [sym__SEMICOLON] = ACTIONS(1),
    [sym__COLON] = ACTIONS(1),
    [sym__COMMA] = ACTIONS(1),
    [sym__DOT] = ACTIONS(1),
    [sym__ARROW] = ACTIONS(1),
    [sym__DOTS] = ACTIONS(1),
    [sym__EQ] = ACTIONS(1),
    [sym__BANG] = ACTIONS(1),
    [sym__QUESTION] = ACTIONS(1),
    [sym__PIPE] = ACTIONS(1),
    [sym__STAR] = ACTIONS(1),
    [sym__OPEN_BRACE] = ACTIONS(1),
    [sym__CLOSE_BRACE] = ACTIONS(1),
    [sym__OPEN_BRACKET] = ACTIONS(1),
    [sym__CLOSE_BRACKET] = ACTIONS(1),
    [sym__OPEN_PAREN] = ACTIONS(1),
    [sym__CLOSE_PAREN] = ACTIONS(1),
    [sym__AND] = ACTIONS(1),
    [sym__AS] = ACTIONS(1),
    [sym__BREAK] = ACTIONS(1),
    [sym__CONTINUE] = ACTIONS(1),
    [sym__ELSE] = ACTIONS(1),
    [sym__FOR] = ACTIONS(1),
    [sym__IF] = ACTIONS(1),
    [sym__IMPORT] = ACTIONS(1),
    [sym__IN] = ACTIONS(1),
    [sym__LET] = ACTIONS(1),
    [sym__LOOP] = ACTIONS(1),
    [sym__MATCH] = ACTIONS(1),
    [sym__OR] = ACTIONS(1),
    [sym__RETURN] = ACTIONS(1),
    [sym__VAR] = ACTIONS(1),
    [sym__WHILE] = ACTIONS(1),
    [sym_TRUE] = ACTIONS(1),
    [sym_FALSE] = ACTIONS(1),
    [sym__OP] = ACTIONS(1),
    [sym_KEYWORD] = ACTIONS(1),
    [sym_FLOAT] = ACTIONS(1),
    [sym_INT] = ACTIONS(1),
    [sym_HEX] = ACTIONS(1),
    [sym_BIN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(311),
    [sym__statement_list] = STATE(309),
    [sym__statement] = STATE(194),
    [sym_import] = STATE(207),
    [sym_op_ref] = STATE(107),
    [sym__binding] = STATE(207),
    [sym_var_bind] = STATE(207),
    [sym_let_bind] = STATE(207),
    [sym_let_pattern] = STATE(207),
    [sym_let_fn] = STATE(207),
    [sym__empty_statement] = STATE(207),
    [sym__expression] = STATE(120),
    [sym__unary] = STATE(107),
    [sym__suffix] = STATE(107),
    [sym_prefix] = STATE(107),
    [sym_prefix_op] = STATE(39),
    [sym_infix] = STATE(107),
    [sym_postfix] = STATE(107),
    [sym_subscript] = STATE(107),
    [sym_member] = STATE(107),
    [sym_call] = STATE(107),
    [sym__primary_expression] = STATE(107),
    [sym_match] = STATE(107),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_loop] = STATE(107),
    [sym_while] = STATE(107),
    [sym_conditional] = STATE(107),
    [sym_fn] = STATE(107),
    [sym_bare_parameter] = STATE(305),
    [sym_parameter_list] = STATE(305),
    [sym_list] = STATE(107),
    [sym_tuple] = STATE(107),
    [sym_block] = STATE(107),
    [sym_record] = STATE(107),
    [sym_grouping] = STATE(107),
    [sym__literal] = STATE(107),
    [sym_unit] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ID] = ACTIONS(7),
    [sym__COMMENT] = ACTIONS(3),
    [sym__WHITESPACE] = ACTIONS(3),
    [sym__SEMICOLON] = ACTIONS(9),
    [sym__BANG] = ACTIONS(11),
    [sym__OPEN_BRACE] = ACTIONS(13),
    [sym__OPEN_BRACKET] = ACTIONS(15),
    [sym__OPEN_PAREN] = ACTIONS(17),
    [sym__BREAK] = ACTIONS(19),
    [sym__CONTINUE] = ACTIONS(21),
    [sym__IF] = ACTIONS(23),
    [sym__IMPORT] = ACTIONS(25),
    [sym__LET] = ACTIONS(27),
    [sym__LOOP] = ACTIONS(29),
    [sym__MATCH] = ACTIONS(31),
    [sym__RETURN] = ACTIONS(33),
    [sym__VAR] = ACTIONS(35),
    [sym__WHILE] = ACTIONS(37),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym__OP] = ACTIONS(11),
    [sym_KEYWORD] = ACTIONS(39),
    [sym_FLOAT] = ACTIONS(39),
    [sym_INT] = ACTIONS(41),
    [sym_HEX] = ACTIONS(39),
    [sym_BIN] = ACTIONS(39),
  },
  [2] = {
    [sym__statement_list] = STATE(303),
    [sym__statement] = STATE(194),
    [sym_import] = STATE(207),
    [sym_op_ref] = STATE(107),
    [sym__binding] = STATE(207),
    [sym_var_bind] = STATE(207),
    [sym_let_bind] = STATE(207),
    [sym_let_pattern] = STATE(207),
    [sym_let_fn] = STATE(207),
    [sym__empty_statement] = STATE(207),
    [sym__expression] = STATE(122),
    [sym__unary] = STATE(107),
    [sym__suffix] = STATE(107),
    [sym_prefix] = STATE(107),
    [sym_prefix_op] = STATE(39),
    [sym_infix] = STATE(107),
    [sym_postfix] = STATE(107),
    [sym_subscript] = STATE(107),
    [sym_member] = STATE(107),
    [sym_call] = STATE(107),
    [sym__primary_expression] = STATE(107),
    [sym_match] = STATE(107),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_loop] = STATE(107),
    [sym_while] = STATE(107),
    [sym_conditional] = STATE(107),
    [sym_fn] = STATE(107),
    [sym_bare_parameter] = STATE(305),
    [sym_parameter_list] = STATE(305),
    [sym_list] = STATE(107),
    [sym_tuple] = STATE(107),
    [sym_spread] = STATE(210),
    [sym_block] = STATE(129),
    [sym_record] = STATE(107),
    [sym__record_element] = STATE(210),
    [sym_pun] = STATE(210),
    [sym_pair] = STATE(210),
    [sym__key] = STATE(299),
    [sym_computed_key] = STATE(299),
    [sym_grouping] = STATE(107),
    [sym__literal] = STATE(130),
    [sym_unit] = STATE(82),
    [sym_ID] = ACTIONS(43),
    [sym__COMMENT] = ACTIONS(3),
    [sym__WHITESPACE] = ACTIONS(3),
    [sym__SEMICOLON] = ACTIONS(9),
    [sym__COMMA] = ACTIONS(45),
    [sym__BANG] = ACTIONS(11),
    [sym__OPEN_BRACE] = ACTIONS(13),
    [sym__CLOSE_BRACE] = ACTIONS(47),
    [sym__OPEN_BRACKET] = ACTIONS(15),
    [sym__OPEN_PAREN] = ACTIONS(17),
    [sym__BREAK] = ACTIONS(19),
    [sym__CONTINUE] = ACTIONS(21),
    [sym__IF] = ACTIONS(23),
    [sym__IMPORT] = ACTIONS(25),
    [sym__LET] = ACTIONS(27),
    [sym__LOOP] = ACTIONS(29),
    [sym__MATCH] = ACTIONS(31),
    [sym__RETURN] = ACTIONS(33),
    [sym__VAR] = ACTIONS(35),
    [sym__WHILE] = ACTIONS(37),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym__OP] = ACTIONS(11),
    [sym_KEYWORD] = ACTIONS(39),
    [sym_FLOAT] = ACTIONS(39),
    [sym_INT] = ACTIONS(41),
    [sym_HEX] = ACTIONS(39),
    [sym_BIN] = ACTIONS(39),
  },
  [3] = {
    [sym__statement] = STATE(245),
    [sym_import] = STATE(207),
    [sym_op_ref] = STATE(107),
    [sym__binding] = STATE(207),
    [sym_var_bind] = STATE(207),
    [sym_let_bind] = STATE(207),
    [sym_let_pattern] = STATE(207),
    [sym_let_fn] = STATE(207),
    [sym__empty_statement] = STATE(207),
    [sym__expression] = STATE(120),
    [sym__unary] = STATE(107),
    [sym__suffix] = STATE(107),
    [sym_prefix] = STATE(107),
    [sym_prefix_op] = STATE(39),
    [sym_infix] = STATE(107),
    [sym_postfix] = STATE(107),
    [sym_subscript] = STATE(107),
    [sym_member] = STATE(107),
    [sym_call] = STATE(107),
    [sym__primary_expression] = STATE(107),
    [sym_match] = STATE(107),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_loop] = STATE(107),
    [sym_while] = STATE(107),
    [sym_conditional] = STATE(107),
    [sym_fn] = STATE(107),
    [sym_bare_parameter] = STATE(305),
    [sym_parameter_list] = STATE(305),
    [sym_list] = STATE(107),
    [sym_tuple] = STATE(107),
    [sym_block] = STATE(107),
    [sym_record] = STATE(107),
    [sym_grouping] = STATE(107),
    [sym__literal] = STATE(107),
    [sym_unit] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_ID] = ACTIONS(7),
    [sym__COMMENT] = ACTIONS(3),
    [sym__WHITESPACE] = ACTIONS(3),
    [sym__SEMICOLON] = ACTIONS(9),
    [sym__BANG] = ACTIONS(11),
    [sym__OPEN_BRACE] = ACTIONS(13),
    [sym__CLOSE_BRACE] = ACTIONS(49),
    [sym__OPEN_BRACKET] = ACTIONS(15),
    [sym__OPEN_PAREN] = ACTIONS(17),
    [sym__BREAK] = ACTIONS(19),
    [sym__CONTINUE] = ACTIONS(21),
    [sym__IF] = ACTIONS(23),
    [sym__IMPORT] = ACTIONS(25),
    [sym__LET] = ACTIONS(27),
    [sym__LOOP] = ACTIONS(29),
    [sym__MATCH] = ACTIONS(31),
    [sym__RETURN] = ACTIONS(33),
    [sym__VAR] = ACTIONS(35),
    [sym__WHILE] = ACTIONS(37),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym__OP] = ACTIONS(11),
    [sym_KEYWORD] = ACTIONS(39),
    [sym_FLOAT] = ACTIONS(39),
    [sym_INT] = ACTIONS(41),
    [sym_HEX] = ACTIONS(39),
    [sym_BIN] = ACTIONS(39),
  },
  [4] = {
    [sym__statement] = STATE(245),
    [sym_import] = STATE(207),
    [sym_op_ref] = STATE(107),
    [sym__binding] = STATE(207),
    [sym_var_bind] = STATE(207),
    [sym_let_bind] = STATE(207),
    [sym_let_pattern] = STATE(207),
    [sym_let_fn] = STATE(207),
    [sym__empty_statement] = STATE(207),
    [sym__expression] = STATE(120),
    [sym__unary] = STATE(107),
    [sym__suffix] = STATE(107),
    [sym_prefix] = STATE(107),
    [sym_prefix_op] = STATE(39),
    [sym_infix] = STATE(107),
    [sym_postfix] = STATE(107),
    [sym_subscript] = STATE(107),
    [sym_member] = STATE(107),
    [sym_call] = STATE(107),
    [sym__primary_expression] = STATE(107),
    [sym_match] = STATE(107),
    [sym_return] = STATE(107),
    [sym_break] = STATE(107),
    [sym_continue] = STATE(107),
    [sym_loop] = STATE(107),
    [sym_while] = STATE(107),
    [sym_conditional] = STATE(107),
    [sym_fn] = STATE(107),
    [sym_bare_parameter] = STATE(305),
    [sym_parameter_list] = STATE(305),
    [sym_list] = STATE(107),
    [sym_tuple] = STATE(107),
    [sym_block] = STATE(107),
    [sym_record] = STATE(107),
    [sym_grouping] = STATE(107),
    [sym__literal] = STATE(107),
    [sym_unit] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_ID] = ACTIONS(7),
    [sym__COMMENT] = ACTIONS(3),
    [sym__WHITESPACE] = ACTIONS(3),
    [sym__SEMICOLON] = ACTIONS(9),
    [sym__BANG] = ACTIONS(11),
    [sym__OPEN_BRACE] = ACTIONS(13),
    [sym__CLOSE_BRACE] = ACTIONS(51),
    [sym__OPEN_BRACKET] = ACTIONS(15),
    [sym__OPEN_PAREN] = ACTIONS(17),
    [sym__BREAK] = ACTIONS(19),
    [sym__CONTINUE] = ACTIONS(21),
    [sym__IF] = ACTIONS(23),
    [sym__IMPORT] = ACTIONS(25),
    [sym__LET] = ACTIONS(27),
    [sym__LOOP] = ACTIONS(29),
    [sym__MATCH] = ACTIONS(31),
    [sym__RETURN] = ACTIONS(33),
    [sym__VAR] = ACTIONS(35),
    [sym__WHILE] = ACTIONS(37),
    [sym_TRUE] = ACTIONS(39),
    [sym_FALSE] = ACTIONS(39),
    [sym__OP] = ACTIONS(11),
    [sym_KEYWORD] = ACTIONS(39),
    [sym_FLOAT] = ACTIONS(39),
    [sym_INT] = ACTIONS(41),
    [sym_HEX] = ACTIONS(39),
    [sym_BIN] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      sym__SEMICOLON,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(25), 1,
      sym__IMPORT,
    ACTIONS(27), 1,
      sym__LET,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(35), 1,
      sym__VAR,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(120), 1,
      sym__expression,
    STATE(194), 1,
      sym__statement,
    STATE(303), 1,
      sym__statement_list,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(207), 7,
      sym_import,
      sym__binding,
      sym_var_bind,
      sym_let_bind,
      sym_let_pattern,
      sym_let_fn,
      sym__empty_statement,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [119] = 26,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      sym__SEMICOLON,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(25), 1,
      sym__IMPORT,
    ACTIONS(27), 1,
      sym__LET,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(35), 1,
      sym__VAR,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(120), 1,
      sym__expression,
    STATE(245), 1,
      sym__statement,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(207), 7,
      sym_import,
      sym__binding,
      sym_var_bind,
      sym_let_bind,
      sym_let_pattern,
      sym_let_fn,
      sym__empty_statement,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [235] = 19,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(55), 1,
      sym__DOT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(84), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(53), 14,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [336] = 19,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(59), 1,
      sym__DOT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(79), 1,
      sym__expression,
    STATE(82), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(57), 14,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [437] = 19,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(63), 1,
      sym__DOT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(86), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(61), 14,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [538] = 26,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(65), 1,
      sym_ID,
    ACTIONS(67), 1,
      sym__COMMA,
    ACTIONS(69), 1,
      sym__DOTS,
    ACTIONS(73), 1,
      sym__QUESTION,
    ACTIONS(75), 1,
      sym__CLOSE_PAREN,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(121), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(71), 2,
      sym__BANG,
      sym__OP,
    STATE(224), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(214), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [651] = 25,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(43), 1,
      sym_ID,
    ACTIONS(77), 1,
      sym__CLOSE_BRACE,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(129), 1,
      sym_block,
    STATE(130), 1,
      sym__literal,
    STATE(140), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(299), 2,
      sym__key,
      sym_computed_key,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(249), 4,
      sym_spread,
      sym__record_element,
      sym_pun,
      sym_pair,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 22,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_record,
      sym_grouping,
  [760] = 25,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(43), 1,
      sym_ID,
    ACTIONS(79), 1,
      sym__CLOSE_BRACE,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(129), 1,
      sym_block,
    STATE(130), 1,
      sym__literal,
    STATE(140), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(299), 2,
      sym__key,
      sym_computed_key,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(249), 4,
      sym_spread,
      sym__record_element,
      sym_pun,
      sym_pair,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 22,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_record,
      sym_grouping,
  [869] = 23,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(81), 1,
      sym_ID,
    ACTIONS(83), 1,
      sym__COMMA,
    ACTIONS(85), 1,
      sym__CLOSE_PAREN,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(243), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [973] = 24,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(43), 1,
      sym_ID,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(129), 1,
      sym_block,
    STATE(130), 1,
      sym__literal,
    STATE(140), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(299), 2,
      sym__key,
      sym_computed_key,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(249), 4,
      sym_spread,
      sym__record_element,
      sym_pun,
      sym_pair,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 22,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_record,
      sym_grouping,
  [1079] = 22,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(81), 1,
      sym_ID,
    ACTIONS(87), 1,
      sym__CLOSE_PAREN,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(268), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1180] = 22,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(81), 1,
      sym_ID,
    ACTIONS(89), 1,
      sym__CLOSE_PAREN,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(268), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1281] = 17,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(146), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(61), 9,
      sym__DOT,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1371] = 21,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(81), 1,
      sym_ID,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(268), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1469] = 17,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(141), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(53), 9,
      sym__DOT,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1559] = 23,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(97), 1,
      sym__COMMA,
    ACTIONS(99), 1,
      sym__CLOSE_BRACKET,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(213), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1661] = 17,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(147), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(57), 9,
      sym__DOT,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1751] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__CLOSE_BRACKET,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(238), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1850] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(103), 1,
      sym__CLOSE_PAREN,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(238), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [1949] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(105), 1,
      sym__CLOSE_PAREN,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(238), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2048] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(107), 1,
      sym__CLOSE_BRACKET,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(238), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2147] = 21,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(119), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(238), 2,
      sym__element,
      sym_spread,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2243] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(136), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2335] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(145), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2427] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(132), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2519] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(137), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2611] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(81), 1,
      sym__expression,
    STATE(82), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2703] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(124), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2795] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(131), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2887] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(142), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [2979] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(134), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3071] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(128), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3163] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(138), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3255] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(144), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3347] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(85), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3439] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(139), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3531] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(143), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3623] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(135), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3715] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(127), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3807] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(126), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3899] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    ACTIONS(91), 1,
      sym__BREAK,
    ACTIONS(93), 1,
      sym__CONTINUE,
    ACTIONS(95), 1,
      sym__RETURN,
    STATE(41), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(133), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(287), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [3991] = 20,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(13), 1,
      sym__OPEN_BRACE,
    ACTIONS(15), 1,
      sym__OPEN_BRACKET,
    ACTIONS(17), 1,
      sym__OPEN_PAREN,
    ACTIONS(19), 1,
      sym__BREAK,
    ACTIONS(21), 1,
      sym__CONTINUE,
    ACTIONS(23), 1,
      sym__IF,
    ACTIONS(29), 1,
      sym__LOOP,
    ACTIONS(31), 1,
      sym__MATCH,
    ACTIONS(33), 1,
      sym__RETURN,
    ACTIONS(37), 1,
      sym__WHILE,
    ACTIONS(41), 1,
      sym_INT,
    STATE(39), 1,
      sym_prefix_op,
    STATE(82), 1,
      sym_unit,
    STATE(83), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(11), 2,
      sym__BANG,
      sym__OP,
    STATE(305), 2,
      sym_bare_parameter,
      sym_parameter_list,
    ACTIONS(39), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(107), 24,
      sym_op_ref,
      sym__unary,
      sym__suffix,
      sym_prefix,
      sym_infix,
      sym_postfix,
      sym_subscript,
      sym_member,
      sym_call,
      sym__primary_expression,
      sym_match,
      sym_return,
      sym_break,
      sym_continue,
      sym_loop,
      sym_while,
      sym_conditional,
      sym_fn,
      sym_list,
      sym_tuple,
      sym_block,
      sym_record,
      sym_grouping,
      sym__literal,
  [4083] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(111), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(157), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4136] = 13,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(125), 1,
      sym__COMMA,
    ACTIONS(127), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(73), 3,
      sym__BANG,
      sym__QUESTION,
      sym__OP,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(195), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4192] = 14,
    ACTIONS(129), 1,
      sym_ID,
    ACTIONS(131), 1,
      sym__COMMA,
    ACTIONS(133), 1,
      sym__DOTS,
    ACTIONS(135), 1,
      sym__OPEN_BRACE,
    ACTIONS(137), 1,
      sym__CLOSE_BRACE,
    ACTIONS(139), 1,
      sym__OPEN_BRACKET,
    ACTIONS(141), 1,
      sym__OPEN_PAREN,
    ACTIONS(145), 1,
      sym_INT,
    STATE(202), 1,
      sym_match_arm,
    STATE(255), 1,
      sym_unit,
    STATE(310), 1,
      sym_pattern,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(143), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(264), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4249] = 13,
    ACTIONS(129), 1,
      sym_ID,
    ACTIONS(133), 1,
      sym__DOTS,
    ACTIONS(135), 1,
      sym__OPEN_BRACE,
    ACTIONS(139), 1,
      sym__OPEN_BRACKET,
    ACTIONS(141), 1,
      sym__OPEN_PAREN,
    ACTIONS(145), 1,
      sym_INT,
    ACTIONS(147), 1,
      sym__CLOSE_BRACE,
    STATE(255), 1,
      sym_unit,
    STATE(262), 1,
      sym_match_arm,
    STATE(310), 1,
      sym_pattern,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(143), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(264), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4303] = 13,
    ACTIONS(129), 1,
      sym_ID,
    ACTIONS(133), 1,
      sym__DOTS,
    ACTIONS(135), 1,
      sym__OPEN_BRACE,
    ACTIONS(139), 1,
      sym__OPEN_BRACKET,
    ACTIONS(141), 1,
      sym__OPEN_PAREN,
    ACTIONS(145), 1,
      sym_INT,
    ACTIONS(149), 1,
      sym__CLOSE_BRACE,
    STATE(255), 1,
      sym_unit,
    STATE(262), 1,
      sym_match_arm,
    STATE(310), 1,
      sym_pattern,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(143), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(264), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4357] = 12,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(151), 1,
      sym__COMMA,
    ACTIONS(153), 1,
      sym__CLOSE_BRACKET,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(188), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4408] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(111), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(229), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4457] = 12,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(155), 1,
      sym__COMMA,
    ACTIONS(157), 1,
      sym__CLOSE_BRACKET,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(191), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4508] = 12,
    ACTIONS(129), 1,
      sym_ID,
    ACTIONS(133), 1,
      sym__DOTS,
    ACTIONS(135), 1,
      sym__OPEN_BRACE,
    ACTIONS(139), 1,
      sym__OPEN_BRACKET,
    ACTIONS(141), 1,
      sym__OPEN_PAREN,
    ACTIONS(145), 1,
      sym_INT,
    STATE(255), 1,
      sym_unit,
    STATE(262), 1,
      sym_match_arm,
    STATE(310), 1,
      sym_pattern,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(143), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(264), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4559] = 12,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(159), 1,
      sym_ID,
    ACTIONS(161), 1,
      sym__OPEN_PAREN,
    STATE(158), 1,
      sym_unit,
    STATE(226), 1,
      sym_op_ref,
    STATE(288), 1,
      sym_pattern,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(272), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4610] = 12,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(163), 1,
      sym__COMMA,
    ACTIONS(165), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(193), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4661] = 11,
    ACTIONS(129), 1,
      sym_ID,
    ACTIONS(133), 1,
      sym__DOTS,
    ACTIONS(135), 1,
      sym__OPEN_BRACE,
    ACTIONS(139), 1,
      sym__OPEN_BRACKET,
    ACTIONS(141), 1,
      sym__OPEN_PAREN,
    ACTIONS(145), 1,
      sym_INT,
    STATE(255), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(111), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
    ACTIONS(143), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(253), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4710] = 12,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(125), 1,
      sym__COMMA,
    ACTIONS(127), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(195), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4761] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(167), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4809] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(169), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4857] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(171), 1,
      sym__CLOSE_BRACKET,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4905] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(173), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4953] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(175), 1,
      sym__CLOSE_BRACKET,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5001] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(177), 1,
      sym__CLOSE_PAREN,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5049] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(179), 1,
      sym__CLOSE_BRACKET,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5097] = 11,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    ACTIONS(181), 1,
      sym__CLOSE_BRACKET,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5145] = 10,
    ACTIONS(129), 1,
      sym_ID,
    ACTIONS(133), 1,
      sym__DOTS,
    ACTIONS(135), 1,
      sym__OPEN_BRACE,
    ACTIONS(139), 1,
      sym__OPEN_BRACKET,
    ACTIONS(141), 1,
      sym__OPEN_PAREN,
    ACTIONS(145), 1,
      sym_INT,
    STATE(255), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(143), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(247), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5190] = 10,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(211), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5235] = 10,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(190), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5280] = 10,
    ACTIONS(109), 1,
      sym_ID,
    ACTIONS(113), 1,
      sym__DOTS,
    ACTIONS(115), 1,
      sym__OPEN_BRACE,
    ACTIONS(117), 1,
      sym__OPEN_BRACKET,
    ACTIONS(119), 1,
      sym__OPEN_PAREN,
    ACTIONS(123), 1,
      sym_INT,
    STATE(158), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(169), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5325] = 4,
    ACTIONS(187), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(183), 2,
      sym_ID,
      sym_INT,
    ACTIONS(185), 18,
      sym__BANG,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__BREAK,
      sym__CONTINUE,
      sym__IF,
      sym__LOOP,
      sym__MATCH,
      sym__RETURN,
      sym__WHILE,
      sym_TRUE,
      sym_FALSE,
      sym__OP,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
  [5357] = 3,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(189), 2,
      sym_ID,
      sym_INT,
    ACTIONS(191), 18,
      sym__BANG,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__BREAK,
      sym__CONTINUE,
      sym__IF,
      sym__LOOP,
      sym__MATCH,
      sym__RETURN,
      sym__WHILE,
      sym_TRUE,
      sym_FALSE,
      sym__OP,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
  [5386] = 3,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(183), 2,
      sym_ID,
      sym_INT,
    ACTIONS(185), 18,
      sym__BANG,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__BREAK,
      sym__CONTINUE,
      sym__IF,
      sym__LOOP,
      sym__MATCH,
      sym__RETURN,
      sym__WHILE,
      sym_TRUE,
      sym_FALSE,
      sym__OP,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
  [5415] = 5,
    ACTIONS(195), 1,
      sym__DOT,
    ACTIONS(197), 1,
      sym__ELSE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(227), 2,
      sym_elif,
      aux_sym_conditional_repeat1,
    ACTIONS(193), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5447] = 4,
    ACTIONS(201), 1,
      sym__DOT,
    ACTIONS(203), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(199), 16,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5476] = 3,
    ACTIONS(207), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(205), 17,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__EQ,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__AS,
      sym__OR,
      sym__OP,
  [5503] = 3,
    ACTIONS(211), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(209), 17,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__ELSE,
      sym__OR,
      sym__OP,
  [5530] = 9,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5568] = 4,
    ACTIONS(227), 1,
      sym__DOT,
    ACTIONS(229), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(225), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5596] = 9,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5634] = 3,
    ACTIONS(235), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(233), 16,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5660] = 8,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5696] = 9,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5734] = 8,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(241), 10,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5770] = 9,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5808] = 4,
    ACTIONS(247), 1,
      sym__DOT,
    ACTIONS(249), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(245), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5836] = 3,
    ACTIONS(253), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(251), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5861] = 3,
    ACTIONS(257), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(255), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5886] = 3,
    ACTIONS(261), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(259), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5911] = 3,
    ACTIONS(265), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(263), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5936] = 3,
    ACTIONS(269), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(267), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5961] = 3,
    ACTIONS(273), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [5986] = 3,
    ACTIONS(277), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(275), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6011] = 3,
    ACTIONS(281), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(279), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6036] = 3,
    ACTIONS(285), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(283), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6061] = 3,
    ACTIONS(289), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(287), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6086] = 3,
    ACTIONS(293), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(291), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6111] = 3,
    ACTIONS(297), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(295), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6136] = 3,
    ACTIONS(247), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(245), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6161] = 3,
    ACTIONS(301), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(299), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6186] = 3,
    ACTIONS(305), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(303), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6211] = 3,
    ACTIONS(309), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(307), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6236] = 3,
    ACTIONS(313), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(311), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6261] = 3,
    ACTIONS(317), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(315), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6286] = 3,
    ACTIONS(321), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(319), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6311] = 3,
    ACTIONS(325), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(323), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6336] = 3,
    ACTIONS(329), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(327), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6361] = 3,
    ACTIONS(333), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(331), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6386] = 3,
    ACTIONS(337), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(335), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6411] = 3,
    ACTIONS(341), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(339), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6436] = 3,
    ACTIONS(345), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(343), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6461] = 3,
    ACTIONS(349), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(347), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6486] = 3,
    ACTIONS(353), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(351), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6511] = 3,
    ACTIONS(357), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(355), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6536] = 3,
    ACTIONS(361), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(359), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6561] = 3,
    ACTIONS(365), 1,
      sym__DOT,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(363), 15,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__CLOSE_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6586] = 6,
    ACTIONS(227), 1,
      sym__DOT,
    ACTIONS(229), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(367), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(369), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(225), 9,
      sym__SEMICOLON,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6615] = 10,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(373), 1,
      sym__DOTS,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(371), 3,
      sym__COMMA,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [6652] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [6686] = 11,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(371), 1,
      sym__COMMA,
    ACTIONS(373), 1,
      sym__DOTS,
    ACTIONS(379), 1,
      sym__CLOSE_PAREN,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [6724] = 10,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(373), 1,
      sym__DOTS,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(375), 2,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [6760] = 6,
    ACTIONS(227), 1,
      sym__DOT,
    ACTIONS(229), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(381), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(383), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(225), 8,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6788] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(386), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [6822] = 5,
    ACTIONS(227), 1,
      sym__DOT,
    ACTIONS(229), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(388), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(225), 10,
      sym__COMMA,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__CLOSE_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6848] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(390), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [6882] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(392), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [6916] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [6950] = 4,
    ACTIONS(227), 1,
      sym__DOT,
    ACTIONS(396), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(225), 10,
      sym__SEMICOLON,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6973] = 4,
    ACTIONS(227), 1,
      sym__DOT,
    ACTIONS(367), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(225), 10,
      sym__SEMICOLON,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__CLOSE_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6996] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(398), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7029] = 10,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    ACTIONS(400), 1,
      sym__OPEN_BRACE,
    STATE(28), 1,
      sym_infix_op,
    STATE(75), 1,
      sym_block,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7064] = 10,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    ACTIONS(400), 1,
      sym__OPEN_BRACE,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    STATE(290), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7099] = 10,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    ACTIONS(400), 1,
      sym__OPEN_BRACE,
    STATE(28), 1,
      sym_infix_op,
    STATE(90), 1,
      sym_block,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7134] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(402), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7167] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(404), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7200] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(406), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7233] = 10,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    ACTIONS(408), 1,
      sym__OPEN_BRACE,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    STATE(112), 1,
      sym__match_arms,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7268] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(410), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7301] = 9,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(373), 1,
      sym__DOTS,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7333] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(239), 1,
      sym__OPEN_BRACE,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7365] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    ACTIONS(412), 1,
      sym__CLOSE_BRACKET,
    STATE(46), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7397] = 8,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(241), 4,
      sym__OPEN_BRACE,
      sym__AND,
      sym__OR,
      sym__OP,
  [7427] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(231), 1,
      sym__OPEN_BRACE,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7459] = 8,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(237), 4,
      sym__OPEN_BRACE,
      sym__AND,
      sym__OR,
      sym__OP,
  [7489] = 9,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(243), 1,
      sym__OPEN_BRACE,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7521] = 9,
    ACTIONS(213), 1,
      sym__OPEN_BRACE,
    ACTIONS(219), 1,
      sym__OPEN_BRACKET,
    ACTIONS(221), 1,
      sym__OPEN_PAREN,
    ACTIONS(377), 1,
      sym__DOT,
    STATE(28), 1,
      sym_infix_op,
    STATE(92), 1,
      sym_postfix_op,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(223), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7553] = 8,
    ACTIONS(414), 1,
      sym_ID,
    ACTIONS(416), 1,
      sym__COMMA,
    ACTIONS(418), 1,
      sym__STAR,
    ACTIONS(420), 1,
      sym__CLOSE_BRACE,
    ACTIONS(422), 1,
      sym__OPEN_PAREN,
    STATE(219), 1,
      sym_op_ref,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(220), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [7582] = 7,
    ACTIONS(414), 1,
      sym_ID,
    ACTIONS(418), 1,
      sym__STAR,
    ACTIONS(422), 1,
      sym__OPEN_PAREN,
    ACTIONS(424), 1,
      sym__CLOSE_BRACE,
    STATE(219), 1,
      sym_op_ref,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(259), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [7608] = 7,
    ACTIONS(414), 1,
      sym_ID,
    ACTIONS(418), 1,
      sym__STAR,
    ACTIONS(422), 1,
      sym__OPEN_PAREN,
    ACTIONS(426), 1,
      sym__CLOSE_BRACE,
    STATE(219), 1,
      sym_op_ref,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(259), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [7634] = 6,
    ACTIONS(414), 1,
      sym_ID,
    ACTIONS(418), 1,
      sym__STAR,
    ACTIONS(422), 1,
      sym__OPEN_PAREN,
    STATE(219), 1,
      sym_op_ref,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(259), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [7657] = 6,
    ACTIONS(69), 1,
      sym__DOTS,
    ACTIONS(428), 1,
      sym_ID,
    ACTIONS(430), 1,
      sym__COMMA,
    ACTIONS(432), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(214), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [7679] = 6,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(436), 1,
      sym__COMMA,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(440), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(244), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [7701] = 3,
    ACTIONS(444), 1,
      sym__AS,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(442), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7717] = 6,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(446), 1,
      sym__COMMA,
    ACTIONS(448), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(212), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [7739] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(450), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7752] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(452), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7765] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(233), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7778] = 4,
    ACTIONS(456), 1,
      sym__DOT,
    STATE(159), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(454), 4,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [7795] = 5,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(459), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(251), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [7814] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(199), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7827] = 5,
    ACTIONS(69), 1,
      sym__DOTS,
    ACTIONS(428), 1,
      sym_ID,
    ACTIONS(461), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(267), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [7846] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(463), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7859] = 4,
    ACTIONS(467), 1,
      sym__DOT,
    STATE(159), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(465), 4,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [7876] = 4,
    ACTIONS(467), 1,
      sym__DOT,
    STATE(164), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(469), 4,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [7893] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(471), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7906] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(473), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7919] = 5,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(475), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(251), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [7938] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(477), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7951] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(479), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7964] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(481), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7977] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(483), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [7990] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(485), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8003] = 5,
    ACTIONS(69), 1,
      sym__DOTS,
    ACTIONS(428), 1,
      sym_ID,
    ACTIONS(487), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(267), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [8022] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(489), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8035] = 5,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(491), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(251), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8054] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(493), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8067] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(495), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8080] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(497), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8093] = 5,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(499), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(251), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8112] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(501), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8125] = 4,
    ACTIONS(434), 1,
      sym_ID,
    ACTIONS(438), 1,
      sym__DOTS,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(251), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8141] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(454), 5,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__DOT,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [8153] = 4,
    ACTIONS(505), 1,
      sym__OPEN_BRACE,
    STATE(240), 1,
      sym_import_list,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8169] = 4,
    ACTIONS(69), 1,
      sym__DOTS,
    ACTIONS(428), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(267), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [8185] = 6,
    ACTIONS(442), 1,
      sym__PIPE,
    ACTIONS(444), 1,
      sym__AS,
    ACTIONS(507), 1,
      sym__EQ,
    ACTIONS(510), 1,
      sym__OPEN_PAREN,
    STATE(313), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8205] = 4,
    ACTIONS(514), 1,
      sym__SEMICOLON,
    STATE(187), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      sym__CLOSE_BRACE,
  [8220] = 5,
    ACTIONS(517), 1,
      sym__COMMA,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(521), 1,
      sym__CLOSE_BRACKET,
    STATE(203), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8237] = 4,
    ACTIONS(523), 1,
      sym__COMMA,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(526), 2,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8252] = 3,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(528), 3,
      sym__COMMA,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8265] = 5,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(530), 1,
      sym__COMMA,
    ACTIONS(532), 1,
      sym__CLOSE_BRACKET,
    STATE(217), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8282] = 4,
    ACTIONS(534), 1,
      sym__COMMA,
    STATE(192), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(528), 2,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8297] = 5,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(537), 1,
      sym__COMMA,
    ACTIONS(539), 1,
      sym__CLOSE_PAREN,
    STATE(200), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8314] = 4,
    ACTIONS(543), 1,
      sym__SEMICOLON,
    STATE(197), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      sym__CLOSE_BRACE,
  [8329] = 5,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(545), 1,
      sym__COMMA,
    ACTIONS(547), 1,
      sym__CLOSE_PAREN,
    STATE(216), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8346] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(549), 4,
      sym__COMMA,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8357] = 4,
    ACTIONS(551), 1,
      sym__SEMICOLON,
    STATE(187), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym__CLOSE_BRACE,
  [8372] = 4,
    ACTIONS(400), 1,
      sym__OPEN_BRACE,
    ACTIONS(553), 1,
      sym__IF,
    STATE(105), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8386] = 3,
    ACTIONS(555), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(557), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [8398] = 4,
    ACTIONS(173), 1,
      sym__CLOSE_PAREN,
    ACTIONS(559), 1,
      sym__COMMA,
    STATE(192), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8412] = 4,
    ACTIONS(89), 1,
      sym__CLOSE_PAREN,
    ACTIONS(561), 1,
      sym__COMMA,
    STATE(231), 1,
      aux_sym_call_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8426] = 4,
    ACTIONS(563), 1,
      sym__COMMA,
    ACTIONS(565), 1,
      sym__CLOSE_BRACE,
    STATE(225), 1,
      aux_sym__match_arms_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8440] = 4,
    ACTIONS(175), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(567), 1,
      sym__COMMA,
    STATE(192), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8454] = 4,
    ACTIONS(400), 1,
      sym__OPEN_BRACE,
    ACTIONS(553), 1,
      sym__IF,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8468] = 3,
    ACTIONS(569), 1,
      sym__ELSE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(205), 2,
      sym_elif,
      aux_sym_conditional_repeat1,
  [8480] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(572), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8490] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8500] = 4,
    ACTIONS(459), 1,
      sym__CLOSE_BRACE,
    ACTIONS(574), 1,
      sym__COMMA,
    STATE(215), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8514] = 4,
    ACTIONS(424), 1,
      sym__CLOSE_BRACE,
    ACTIONS(576), 1,
      sym__COMMA,
    STATE(239), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8528] = 4,
    ACTIONS(578), 1,
      sym__COMMA,
    ACTIONS(580), 1,
      sym__CLOSE_BRACE,
    STATE(233), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8542] = 3,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(582), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [8554] = 4,
    ACTIONS(584), 1,
      sym__COMMA,
    ACTIONS(586), 1,
      sym__CLOSE_BRACE,
    STATE(208), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8568] = 4,
    ACTIONS(588), 1,
      sym__COMMA,
    ACTIONS(590), 1,
      sym__CLOSE_BRACKET,
    STATE(234), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8582] = 4,
    ACTIONS(592), 1,
      sym__COMMA,
    ACTIONS(594), 1,
      sym__CLOSE_PAREN,
    STATE(235), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8596] = 4,
    ACTIONS(596), 1,
      sym__COMMA,
    ACTIONS(599), 1,
      sym__CLOSE_BRACE,
    STATE(215), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8610] = 4,
    ACTIONS(167), 1,
      sym__CLOSE_PAREN,
    ACTIONS(601), 1,
      sym__COMMA,
    STATE(192), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8624] = 4,
    ACTIONS(181), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(603), 1,
      sym__COMMA,
    STATE(192), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8638] = 4,
    ACTIONS(475), 1,
      sym__CLOSE_BRACE,
    ACTIONS(605), 1,
      sym__COMMA,
    STATE(215), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8652] = 3,
    ACTIONS(609), 1,
      sym__AS,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(607), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [8664] = 4,
    ACTIONS(611), 1,
      sym__COMMA,
    ACTIONS(613), 1,
      sym__CLOSE_BRACE,
    STATE(209), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8678] = 3,
    ACTIONS(615), 1,
      sym__AS,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(607), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [8690] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(73), 3,
      sym__BANG,
      sym__QUESTION,
      sym__OP,
  [8700] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(617), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8710] = 4,
    ACTIONS(619), 1,
      sym__COMMA,
    ACTIONS(621), 1,
      sym__CLOSE_PAREN,
    STATE(237), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8724] = 4,
    ACTIONS(149), 1,
      sym__CLOSE_BRACE,
    ACTIONS(623), 1,
      sym__COMMA,
    STATE(246), 1,
      aux_sym__match_arms_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8738] = 4,
    ACTIONS(510), 1,
      sym__OPEN_PAREN,
    ACTIONS(625), 1,
      sym__EQ,
    STATE(313), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8752] = 3,
    ACTIONS(627), 1,
      sym__ELSE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(205), 2,
      sym_elif,
      aux_sym_conditional_repeat1,
  [8764] = 4,
    ACTIONS(629), 1,
      sym__COMMA,
    ACTIONS(632), 1,
      sym__CLOSE_PAREN,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8778] = 3,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(452), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [8790] = 3,
    ACTIONS(634), 1,
      sym__AS,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(442), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [8802] = 4,
    ACTIONS(636), 1,
      sym__COMMA,
    ACTIONS(639), 1,
      sym__CLOSE_PAREN,
    STATE(231), 1,
      aux_sym_call_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8816] = 3,
    ACTIONS(381), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(641), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
  [8828] = 4,
    ACTIONS(79), 1,
      sym__CLOSE_BRACE,
    ACTIONS(643), 1,
      sym__COMMA,
    STATE(241), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8842] = 4,
    ACTIONS(107), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(645), 1,
      sym__COMMA,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8856] = 4,
    ACTIONS(461), 1,
      sym__CLOSE_PAREN,
    ACTIONS(647), 1,
      sym__COMMA,
    STATE(228), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8870] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(649), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8880] = 4,
    ACTIONS(105), 1,
      sym__CLOSE_PAREN,
    ACTIONS(651), 1,
      sym__COMMA,
    STATE(189), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8894] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(526), 3,
      sym__COMMA,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8904] = 4,
    ACTIONS(653), 1,
      sym__COMMA,
    ACTIONS(656), 1,
      sym__CLOSE_BRACE,
    STATE(239), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8918] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(658), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8928] = 4,
    ACTIONS(660), 1,
      sym__COMMA,
    ACTIONS(663), 1,
      sym__CLOSE_BRACE,
    STATE(241), 1,
      aux_sym_record_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8942] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(665), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8952] = 4,
    ACTIONS(667), 1,
      sym__COMMA,
    ACTIONS(669), 1,
      sym__CLOSE_PAREN,
    STATE(201), 1,
      aux_sym_call_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8966] = 4,
    ACTIONS(671), 1,
      sym__COMMA,
    ACTIONS(673), 1,
      sym__CLOSE_BRACE,
    STATE(218), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8980] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8990] = 4,
    ACTIONS(675), 1,
      sym__COMMA,
    ACTIONS(678), 1,
      sym__CLOSE_BRACE,
    STATE(246), 1,
      aux_sym__match_arms_repeat1,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9004] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(477), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9013] = 3,
    ACTIONS(400), 1,
      sym__OPEN_BRACE,
    STATE(106), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9024] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(663), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9033] = 3,
    ACTIONS(422), 1,
      sym__OPEN_PAREN,
    STATE(257), 1,
      sym_op_ref,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9044] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(599), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9053] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(680), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9062] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(452), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9071] = 3,
    ACTIONS(682), 1,
      sym_ID,
    STATE(184), 1,
      sym_module_path,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9082] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(233), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9091] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(473), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9100] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(684), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9109] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(481), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9118] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(656), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9127] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(686), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9136] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(479), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9145] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(678), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9154] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(463), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9163] = 3,
    ACTIONS(688), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(690), 1,
      sym__PIPE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9174] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(495), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9183] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(483), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9192] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(632), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
  [9201] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(639), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
  [9210] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(501), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9219] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(493), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9228] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(199), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9237] = 3,
    ACTIONS(519), 1,
      sym__PIPE,
    ACTIONS(688), 1,
      sym__EQ,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9248] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(471), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9257] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(450), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9266] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(485), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9275] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(489), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9284] = 2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(497), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9293] = 2,
    ACTIONS(553), 1,
      sym__IF,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9301] = 2,
    ACTIONS(590), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9309] = 2,
    ACTIONS(692), 1,
      sym__EQ,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9317] = 2,
    ACTIONS(694), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9325] = 2,
    ACTIONS(696), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9333] = 2,
    ACTIONS(249), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9341] = 2,
    ACTIONS(698), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9349] = 2,
    ACTIONS(673), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9357] = 2,
    ACTIONS(700), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9365] = 2,
    ACTIONS(702), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9373] = 2,
    ACTIONS(704), 1,
      sym__EQ,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9381] = 2,
    ACTIONS(613), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9389] = 2,
    ACTIONS(706), 1,
      sym__ELSE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9397] = 2,
    ACTIONS(594), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9405] = 2,
    ACTIONS(187), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9413] = 2,
    ACTIONS(708), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9421] = 2,
    ACTIONS(669), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9429] = 2,
    ACTIONS(710), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9437] = 2,
    ACTIONS(586), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9445] = 2,
    ACTIONS(203), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9453] = 2,
    ACTIONS(521), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9461] = 2,
    ACTIONS(712), 1,
      sym__COLON,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9469] = 2,
    ACTIONS(714), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9477] = 2,
    ACTIONS(532), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9485] = 2,
    ACTIONS(716), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9493] = 2,
    ACTIONS(718), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9501] = 2,
    ACTIONS(580), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9509] = 2,
    ACTIONS(720), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9517] = 2,
    ACTIONS(565), 1,
      sym__CLOSE_BRACE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9525] = 2,
    ACTIONS(722), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9533] = 2,
    ACTIONS(724), 1,
      sym__CLOSE_PAREN,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9541] = 2,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9549] = 2,
    ACTIONS(728), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9557] = 2,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9565] = 2,
    ACTIONS(732), 1,
      sym_ID,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9573] = 2,
    ACTIONS(734), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 437,
  [SMALL_STATE(10)] = 538,
  [SMALL_STATE(11)] = 651,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 869,
  [SMALL_STATE(14)] = 973,
  [SMALL_STATE(15)] = 1079,
  [SMALL_STATE(16)] = 1180,
  [SMALL_STATE(17)] = 1281,
  [SMALL_STATE(18)] = 1371,
  [SMALL_STATE(19)] = 1469,
  [SMALL_STATE(20)] = 1559,
  [SMALL_STATE(21)] = 1661,
  [SMALL_STATE(22)] = 1751,
  [SMALL_STATE(23)] = 1850,
  [SMALL_STATE(24)] = 1949,
  [SMALL_STATE(25)] = 2048,
  [SMALL_STATE(26)] = 2147,
  [SMALL_STATE(27)] = 2243,
  [SMALL_STATE(28)] = 2335,
  [SMALL_STATE(29)] = 2427,
  [SMALL_STATE(30)] = 2519,
  [SMALL_STATE(31)] = 2611,
  [SMALL_STATE(32)] = 2703,
  [SMALL_STATE(33)] = 2795,
  [SMALL_STATE(34)] = 2887,
  [SMALL_STATE(35)] = 2979,
  [SMALL_STATE(36)] = 3071,
  [SMALL_STATE(37)] = 3163,
  [SMALL_STATE(38)] = 3255,
  [SMALL_STATE(39)] = 3347,
  [SMALL_STATE(40)] = 3439,
  [SMALL_STATE(41)] = 3531,
  [SMALL_STATE(42)] = 3623,
  [SMALL_STATE(43)] = 3715,
  [SMALL_STATE(44)] = 3807,
  [SMALL_STATE(45)] = 3899,
  [SMALL_STATE(46)] = 3991,
  [SMALL_STATE(47)] = 4083,
  [SMALL_STATE(48)] = 4136,
  [SMALL_STATE(49)] = 4192,
  [SMALL_STATE(50)] = 4249,
  [SMALL_STATE(51)] = 4303,
  [SMALL_STATE(52)] = 4357,
  [SMALL_STATE(53)] = 4408,
  [SMALL_STATE(54)] = 4457,
  [SMALL_STATE(55)] = 4508,
  [SMALL_STATE(56)] = 4559,
  [SMALL_STATE(57)] = 4610,
  [SMALL_STATE(58)] = 4661,
  [SMALL_STATE(59)] = 4710,
  [SMALL_STATE(60)] = 4761,
  [SMALL_STATE(61)] = 4809,
  [SMALL_STATE(62)] = 4857,
  [SMALL_STATE(63)] = 4905,
  [SMALL_STATE(64)] = 4953,
  [SMALL_STATE(65)] = 5001,
  [SMALL_STATE(66)] = 5049,
  [SMALL_STATE(67)] = 5097,
  [SMALL_STATE(68)] = 5145,
  [SMALL_STATE(69)] = 5190,
  [SMALL_STATE(70)] = 5235,
  [SMALL_STATE(71)] = 5280,
  [SMALL_STATE(72)] = 5325,
  [SMALL_STATE(73)] = 5357,
  [SMALL_STATE(74)] = 5386,
  [SMALL_STATE(75)] = 5415,
  [SMALL_STATE(76)] = 5447,
  [SMALL_STATE(77)] = 5476,
  [SMALL_STATE(78)] = 5503,
  [SMALL_STATE(79)] = 5530,
  [SMALL_STATE(80)] = 5568,
  [SMALL_STATE(81)] = 5596,
  [SMALL_STATE(82)] = 5634,
  [SMALL_STATE(83)] = 5660,
  [SMALL_STATE(84)] = 5696,
  [SMALL_STATE(85)] = 5734,
  [SMALL_STATE(86)] = 5770,
  [SMALL_STATE(87)] = 5808,
  [SMALL_STATE(88)] = 5836,
  [SMALL_STATE(89)] = 5861,
  [SMALL_STATE(90)] = 5886,
  [SMALL_STATE(91)] = 5911,
  [SMALL_STATE(92)] = 5936,
  [SMALL_STATE(93)] = 5961,
  [SMALL_STATE(94)] = 5986,
  [SMALL_STATE(95)] = 6011,
  [SMALL_STATE(96)] = 6036,
  [SMALL_STATE(97)] = 6061,
  [SMALL_STATE(98)] = 6086,
  [SMALL_STATE(99)] = 6111,
  [SMALL_STATE(100)] = 6136,
  [SMALL_STATE(101)] = 6161,
  [SMALL_STATE(102)] = 6186,
  [SMALL_STATE(103)] = 6211,
  [SMALL_STATE(104)] = 6236,
  [SMALL_STATE(105)] = 6261,
  [SMALL_STATE(106)] = 6286,
  [SMALL_STATE(107)] = 6311,
  [SMALL_STATE(108)] = 6336,
  [SMALL_STATE(109)] = 6361,
  [SMALL_STATE(110)] = 6386,
  [SMALL_STATE(111)] = 6411,
  [SMALL_STATE(112)] = 6436,
  [SMALL_STATE(113)] = 6461,
  [SMALL_STATE(114)] = 6486,
  [SMALL_STATE(115)] = 6511,
  [SMALL_STATE(116)] = 6536,
  [SMALL_STATE(117)] = 6561,
  [SMALL_STATE(118)] = 6586,
  [SMALL_STATE(119)] = 6615,
  [SMALL_STATE(120)] = 6652,
  [SMALL_STATE(121)] = 6686,
  [SMALL_STATE(122)] = 6724,
  [SMALL_STATE(123)] = 6760,
  [SMALL_STATE(124)] = 6788,
  [SMALL_STATE(125)] = 6822,
  [SMALL_STATE(126)] = 6848,
  [SMALL_STATE(127)] = 6882,
  [SMALL_STATE(128)] = 6916,
  [SMALL_STATE(129)] = 6950,
  [SMALL_STATE(130)] = 6973,
  [SMALL_STATE(131)] = 6996,
  [SMALL_STATE(132)] = 7029,
  [SMALL_STATE(133)] = 7064,
  [SMALL_STATE(134)] = 7099,
  [SMALL_STATE(135)] = 7134,
  [SMALL_STATE(136)] = 7167,
  [SMALL_STATE(137)] = 7200,
  [SMALL_STATE(138)] = 7233,
  [SMALL_STATE(139)] = 7268,
  [SMALL_STATE(140)] = 7301,
  [SMALL_STATE(141)] = 7333,
  [SMALL_STATE(142)] = 7365,
  [SMALL_STATE(143)] = 7397,
  [SMALL_STATE(144)] = 7427,
  [SMALL_STATE(145)] = 7459,
  [SMALL_STATE(146)] = 7489,
  [SMALL_STATE(147)] = 7521,
  [SMALL_STATE(148)] = 7553,
  [SMALL_STATE(149)] = 7582,
  [SMALL_STATE(150)] = 7608,
  [SMALL_STATE(151)] = 7634,
  [SMALL_STATE(152)] = 7657,
  [SMALL_STATE(153)] = 7679,
  [SMALL_STATE(154)] = 7701,
  [SMALL_STATE(155)] = 7717,
  [SMALL_STATE(156)] = 7739,
  [SMALL_STATE(157)] = 7752,
  [SMALL_STATE(158)] = 7765,
  [SMALL_STATE(159)] = 7778,
  [SMALL_STATE(160)] = 7795,
  [SMALL_STATE(161)] = 7814,
  [SMALL_STATE(162)] = 7827,
  [SMALL_STATE(163)] = 7846,
  [SMALL_STATE(164)] = 7859,
  [SMALL_STATE(165)] = 7876,
  [SMALL_STATE(166)] = 7893,
  [SMALL_STATE(167)] = 7906,
  [SMALL_STATE(168)] = 7919,
  [SMALL_STATE(169)] = 7938,
  [SMALL_STATE(170)] = 7951,
  [SMALL_STATE(171)] = 7964,
  [SMALL_STATE(172)] = 7977,
  [SMALL_STATE(173)] = 7990,
  [SMALL_STATE(174)] = 8003,
  [SMALL_STATE(175)] = 8022,
  [SMALL_STATE(176)] = 8035,
  [SMALL_STATE(177)] = 8054,
  [SMALL_STATE(178)] = 8067,
  [SMALL_STATE(179)] = 8080,
  [SMALL_STATE(180)] = 8093,
  [SMALL_STATE(181)] = 8112,
  [SMALL_STATE(182)] = 8125,
  [SMALL_STATE(183)] = 8141,
  [SMALL_STATE(184)] = 8153,
  [SMALL_STATE(185)] = 8169,
  [SMALL_STATE(186)] = 8185,
  [SMALL_STATE(187)] = 8205,
  [SMALL_STATE(188)] = 8220,
  [SMALL_STATE(189)] = 8237,
  [SMALL_STATE(190)] = 8252,
  [SMALL_STATE(191)] = 8265,
  [SMALL_STATE(192)] = 8282,
  [SMALL_STATE(193)] = 8297,
  [SMALL_STATE(194)] = 8314,
  [SMALL_STATE(195)] = 8329,
  [SMALL_STATE(196)] = 8346,
  [SMALL_STATE(197)] = 8357,
  [SMALL_STATE(198)] = 8372,
  [SMALL_STATE(199)] = 8386,
  [SMALL_STATE(200)] = 8398,
  [SMALL_STATE(201)] = 8412,
  [SMALL_STATE(202)] = 8426,
  [SMALL_STATE(203)] = 8440,
  [SMALL_STATE(204)] = 8454,
  [SMALL_STATE(205)] = 8468,
  [SMALL_STATE(206)] = 8480,
  [SMALL_STATE(207)] = 8490,
  [SMALL_STATE(208)] = 8500,
  [SMALL_STATE(209)] = 8514,
  [SMALL_STATE(210)] = 8528,
  [SMALL_STATE(211)] = 8542,
  [SMALL_STATE(212)] = 8554,
  [SMALL_STATE(213)] = 8568,
  [SMALL_STATE(214)] = 8582,
  [SMALL_STATE(215)] = 8596,
  [SMALL_STATE(216)] = 8610,
  [SMALL_STATE(217)] = 8624,
  [SMALL_STATE(218)] = 8638,
  [SMALL_STATE(219)] = 8652,
  [SMALL_STATE(220)] = 8664,
  [SMALL_STATE(221)] = 8678,
  [SMALL_STATE(222)] = 8690,
  [SMALL_STATE(223)] = 8700,
  [SMALL_STATE(224)] = 8710,
  [SMALL_STATE(225)] = 8724,
  [SMALL_STATE(226)] = 8738,
  [SMALL_STATE(227)] = 8752,
  [SMALL_STATE(228)] = 8764,
  [SMALL_STATE(229)] = 8778,
  [SMALL_STATE(230)] = 8790,
  [SMALL_STATE(231)] = 8802,
  [SMALL_STATE(232)] = 8816,
  [SMALL_STATE(233)] = 8828,
  [SMALL_STATE(234)] = 8842,
  [SMALL_STATE(235)] = 8856,
  [SMALL_STATE(236)] = 8870,
  [SMALL_STATE(237)] = 8880,
  [SMALL_STATE(238)] = 8894,
  [SMALL_STATE(239)] = 8904,
  [SMALL_STATE(240)] = 8918,
  [SMALL_STATE(241)] = 8928,
  [SMALL_STATE(242)] = 8942,
  [SMALL_STATE(243)] = 8952,
  [SMALL_STATE(244)] = 8966,
  [SMALL_STATE(245)] = 8980,
  [SMALL_STATE(246)] = 8990,
  [SMALL_STATE(247)] = 9004,
  [SMALL_STATE(248)] = 9013,
  [SMALL_STATE(249)] = 9024,
  [SMALL_STATE(250)] = 9033,
  [SMALL_STATE(251)] = 9044,
  [SMALL_STATE(252)] = 9053,
  [SMALL_STATE(253)] = 9062,
  [SMALL_STATE(254)] = 9071,
  [SMALL_STATE(255)] = 9082,
  [SMALL_STATE(256)] = 9091,
  [SMALL_STATE(257)] = 9100,
  [SMALL_STATE(258)] = 9109,
  [SMALL_STATE(259)] = 9118,
  [SMALL_STATE(260)] = 9127,
  [SMALL_STATE(261)] = 9136,
  [SMALL_STATE(262)] = 9145,
  [SMALL_STATE(263)] = 9154,
  [SMALL_STATE(264)] = 9163,
  [SMALL_STATE(265)] = 9174,
  [SMALL_STATE(266)] = 9183,
  [SMALL_STATE(267)] = 9192,
  [SMALL_STATE(268)] = 9201,
  [SMALL_STATE(269)] = 9210,
  [SMALL_STATE(270)] = 9219,
  [SMALL_STATE(271)] = 9228,
  [SMALL_STATE(272)] = 9237,
  [SMALL_STATE(273)] = 9248,
  [SMALL_STATE(274)] = 9257,
  [SMALL_STATE(275)] = 9266,
  [SMALL_STATE(276)] = 9275,
  [SMALL_STATE(277)] = 9284,
  [SMALL_STATE(278)] = 9293,
  [SMALL_STATE(279)] = 9301,
  [SMALL_STATE(280)] = 9309,
  [SMALL_STATE(281)] = 9317,
  [SMALL_STATE(282)] = 9325,
  [SMALL_STATE(283)] = 9333,
  [SMALL_STATE(284)] = 9341,
  [SMALL_STATE(285)] = 9349,
  [SMALL_STATE(286)] = 9357,
  [SMALL_STATE(287)] = 9365,
  [SMALL_STATE(288)] = 9373,
  [SMALL_STATE(289)] = 9381,
  [SMALL_STATE(290)] = 9389,
  [SMALL_STATE(291)] = 9397,
  [SMALL_STATE(292)] = 9405,
  [SMALL_STATE(293)] = 9413,
  [SMALL_STATE(294)] = 9421,
  [SMALL_STATE(295)] = 9429,
  [SMALL_STATE(296)] = 9437,
  [SMALL_STATE(297)] = 9445,
  [SMALL_STATE(298)] = 9453,
  [SMALL_STATE(299)] = 9461,
  [SMALL_STATE(300)] = 9469,
  [SMALL_STATE(301)] = 9477,
  [SMALL_STATE(302)] = 9485,
  [SMALL_STATE(303)] = 9493,
  [SMALL_STATE(304)] = 9501,
  [SMALL_STATE(305)] = 9509,
  [SMALL_STATE(306)] = 9517,
  [SMALL_STATE(307)] = 9525,
  [SMALL_STATE(308)] = 9533,
  [SMALL_STATE(309)] = 9541,
  [SMALL_STATE(310)] = 9549,
  [SMALL_STATE(311)] = 9557,
  [SMALL_STATE(312)] = 9565,
  [SMALL_STATE(313)] = 9573,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rest, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_op, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_op, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_op, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_op, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ref, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_ref, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_parameter, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_op, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_op, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pun, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary_expression, 1), REDUCE(sym__parameter, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_fn, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bind, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_pattern, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_bind, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_key, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_parameter, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rest, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2), SHIFT_REPEAT(284),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_or, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_grouping, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rename, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__pattern, 1), SHIFT(44),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(26),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_list_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_list_repeat1, 2), SHIFT_REPEAT(70),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_rec_elt, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(278),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_pair, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_rec_repeat1, 2), SHIFT_REPEAT(182),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_rec_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(185),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(18),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_list_repeat1, 2), SHIFT_REPEAT(151),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_list_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(14),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_arms_repeat1, 2), SHIFT_REPEAT(55),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_arms_repeat1, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_star, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_op, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [730] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ID,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
