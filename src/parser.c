#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 350
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_ID = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_DQUOTE2 = 3,
  anon_sym_BSLASH = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_SQUOTE2 = 6,
  sym__string_not_escape = 7,
  sym__char_not_escape = 8,
  sym_c_style = 9,
  sym_byte = 10,
  sym_codepoint = 11,
  sym__COMMENT = 12,
  sym__WHITESPACE = 13,
  sym__SEMICOLON = 14,
  sym__COLON = 15,
  sym__COMMA = 16,
  sym__DOT = 17,
  sym__ARROW = 18,
  sym__DOTS = 19,
  sym__DOUBLE_ARROW = 20,
  sym__EQ = 21,
  sym__BANG = 22,
  sym__QUESTION = 23,
  sym__PIPE = 24,
  sym__STAR = 25,
  sym__OPEN_BRACE = 26,
  sym__CLOSE_BRACE = 27,
  sym__OPEN_BRACKET = 28,
  sym__CLOSE_BRACKET = 29,
  sym__OPEN_PAREN = 30,
  sym__CLOSE_PAREN = 31,
  sym__AND = 32,
  sym__AS = 33,
  sym__BREAK = 34,
  sym__CONTINUE = 35,
  sym__ELSE = 36,
  sym__FOR = 37,
  sym__IF = 38,
  sym__IMPORT = 39,
  sym__IN = 40,
  sym__LET = 41,
  sym__LOOP = 42,
  sym__MATCH = 43,
  sym__OR = 44,
  sym__RETURN = 45,
  sym__VAR = 46,
  sym__WHILE = 47,
  sym_TRUE = 48,
  sym_FALSE = 49,
  sym__OP = 50,
  sym_KEYWORD = 51,
  sym_FLOAT = 52,
  sym_INT = 53,
  sym_HEX = 54,
  sym_BIN = 55,
  sym_source_file = 56,
  sym__statement_list = 57,
  sym__statement = 58,
  sym_import = 59,
  sym_module_path = 60,
  sym_import_list = 61,
  sym__import_name = 62,
  sym_op_ref = 63,
  sym_star = 64,
  sym_rename = 65,
  sym_rename_op = 66,
  sym__binding = 67,
  sym_var_bind = 68,
  sym_let_bind = 69,
  sym_let_pattern = 70,
  sym_let_fn = 71,
  sym__empty_statement = 72,
  sym__expression = 73,
  sym__unary = 74,
  sym__suffix = 75,
  sym_prefix = 76,
  sym_prefix_op = 77,
  sym_infix = 78,
  sym_infix_op = 79,
  sym_postfix = 80,
  sym_postfix_op = 81,
  sym_subscript = 82,
  sym_member = 83,
  sym_call = 84,
  sym__argument = 85,
  sym_keyword_argument = 86,
  sym__primary_expression = 87,
  sym_match = 88,
  sym__match_arms = 89,
  sym_match_arm = 90,
  sym_pattern = 91,
  sym__pattern = 92,
  sym_pat_or = 93,
  sym_pat_rename = 94,
  sym_pat_rest = 95,
  sym_pat_list = 96,
  sym_pat_grouping = 97,
  sym_pat_tuple = 98,
  sym_pat_rec = 99,
  sym__pat_rec_elt = 100,
  sym_pat_pair = 101,
  sym_return = 102,
  sym_break = 103,
  sym_continue = 104,
  sym_loop = 105,
  sym_while = 106,
  sym_conditional = 107,
  sym_elif = 108,
  sym_fn = 109,
  sym_bare_parameter = 110,
  sym_parameter_list = 111,
  sym__parameter = 112,
  sym_keyword_parameter = 113,
  sym_list = 114,
  sym_tuple = 115,
  sym__element = 116,
  sym_spread = 117,
  sym_rest = 118,
  sym_block = 119,
  sym_record = 120,
  sym__record_element = 121,
  sym_pun = 122,
  sym_pair = 123,
  sym__key = 124,
  sym_computed_key = 125,
  sym_grouping = 126,
  sym__literal = 127,
  sym_unit = 128,
  sym_string = 129,
  sym_string_body = 130,
  sym_interpolation = 131,
  sym__string_single_quote = 132,
  sym_char = 133,
  sym__char_content = 134,
  sym__char_double_quote = 135,
  sym_escape = 136,
  aux_sym__statement_list_repeat1 = 137,
  aux_sym_module_path_repeat1 = 138,
  aux_sym_import_list_repeat1 = 139,
  aux_sym_call_repeat1 = 140,
  aux_sym__match_arms_repeat1 = 141,
  aux_sym_pat_list_repeat1 = 142,
  aux_sym_pat_rec_repeat1 = 143,
  aux_sym_conditional_repeat1 = 144,
  aux_sym_parameter_list_repeat1 = 145,
  aux_sym_list_repeat1 = 146,
  aux_sym_record_repeat1 = 147,
  aux_sym_string_repeat1 = 148,
  aux_sym_string_body_repeat1 = 149,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ID] = "ID",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym__string_not_escape] = "_string_not_escape",
  [sym__char_not_escape] = "_char_not_escape",
  [sym_c_style] = "c_style",
  [sym_byte] = "byte",
  [sym_codepoint] = "codepoint",
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
  [sym_string] = "string",
  [sym_string_body] = "string_body",
  [sym_interpolation] = "interpolation",
  [sym__string_single_quote] = "_string_single_quote",
  [sym_char] = "char",
  [sym__char_content] = "_char_content",
  [sym__char_double_quote] = "_char_double_quote",
  [sym_escape] = "escape",
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
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_body_repeat1] = "string_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ID] = sym_ID,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym__string_not_escape] = sym__string_not_escape,
  [sym__char_not_escape] = sym__char_not_escape,
  [sym_c_style] = sym_c_style,
  [sym_byte] = sym_byte,
  [sym_codepoint] = sym_codepoint,
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
  [sym_string] = sym_string,
  [sym_string_body] = sym_string_body,
  [sym_interpolation] = sym_interpolation,
  [sym__string_single_quote] = sym__string_single_quote,
  [sym_char] = sym_char,
  [sym__char_content] = sym__char_content,
  [sym__char_double_quote] = sym__char_double_quote,
  [sym_escape] = sym_escape,
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
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_body_repeat1] = aux_sym_string_body_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__string_not_escape] = {
    .visible = false,
    .named = true,
  },
  [sym__char_not_escape] = {
    .visible = false,
    .named = true,
  },
  [sym_c_style] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_codepoint] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_body] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__string_single_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym__char_content] = {
    .visible = false,
    .named = true,
  },
  [sym__char_double_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_escape] = {
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_body_repeat1] = {
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
  [19] = 8,
  [20] = 7,
  [21] = 9,
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
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
  [44] = 33,
  [45] = 42,
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
  [57] = 49,
  [58] = 58,
  [59] = 56,
  [60] = 55,
  [61] = 49,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 62,
  [68] = 65,
  [69] = 64,
  [70] = 70,
  [71] = 70,
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
  [144] = 144,
  [145] = 145,
  [146] = 85,
  [147] = 83,
  [148] = 84,
  [149] = 88,
  [150] = 150,
  [151] = 90,
  [152] = 87,
  [153] = 145,
  [154] = 154,
  [155] = 155,
  [156] = 155,
  [157] = 157,
  [158] = 155,
  [159] = 157,
  [160] = 160,
  [161] = 157,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 166,
  [170] = 170,
  [171] = 82,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 89,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 92,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 184,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 177,
  [199] = 199,
  [200] = 91,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 202,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 211,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 213,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 186,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 168,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 225,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 248,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 255,
  [269] = 269,
  [270] = 269,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 181,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 89,
  [281] = 281,
  [282] = 282,
  [283] = 190,
  [284] = 284,
  [285] = 282,
  [286] = 186,
  [287] = 92,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 201,
  [293] = 182,
  [294] = 173,
  [295] = 189,
  [296] = 191,
  [297] = 196,
  [298] = 199,
  [299] = 178,
  [300] = 170,
  [301] = 172,
  [302] = 188,
  [303] = 180,
  [304] = 179,
  [305] = 91,
  [306] = 82,
  [307] = 307,
  [308] = 220,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 216,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 324,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 326,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 328,
  [334] = 334,
  [335] = 330,
  [336] = 336,
  [337] = 337,
  [338] = 315,
  [339] = 339,
  [340] = 340,
  [341] = 313,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 315,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 319,
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
  return (c < '>'
    ? (c < '-'
      ? (c < '*'
        ? (c >= '$' && c <= '&')
        : c <= '+')
      : (c <= '-' || c == '<'))
    : (c <= '>' || (c < '|'
      ? (c < '^'
        ? c == '@'
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
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(61);
      if (('$' <= lookahead && lookahead <= '+') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(63);
      if (sym_ID_character_set_1(lookahead)) ADVANCE(61);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (sym_ID_character_set_2(lookahead)) ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (sym_ID_character_set_2(lookahead)) ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 21:
      if (sym_ID_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('$' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(64);
      if (sym_ID_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('$' <= lookahead && lookahead <= '-') ||
          ('<' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(64);
      if (sym_ID_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__string_not_escape);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__string_not_escape);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__string_not_escape);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__string_not_escape);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__char_not_escape);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__char_not_escape);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__char_not_escape);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_c_style);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_codepoint);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__WHITESPACE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__SEMICOLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__DOT);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__DOT);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__ARROW);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__DOTS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__DOUBLE_ARROW);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__BANG);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__QUESTION);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__OPEN_BRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__CLOSE_BRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__OPEN_BRACKET);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__CLOSE_BRACKET);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__OPEN_PAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__CLOSE_PAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ID);
      if (sym_ID_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__OP);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(64);
      if (('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__OP);
      if (lookahead == '\\') ADVANCE(64);
      if (sym__OP_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__OP);
      if (sym__OP_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_KEYWORD);
      if (sym_ID_character_set_3(lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_INT);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_INT);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_HEX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_BIN);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(70);
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
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 22},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 22},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 22},
  [148] = {.lex_state = 22},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 22},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 22},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 22},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 22},
  [193] = {.lex_state = 22},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 22},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 22},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 22},
  [210] = {.lex_state = 22},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 22},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 22},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 22},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 22},
  [230] = {.lex_state = 22},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 22},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 22},
  [241] = {.lex_state = 22},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 22},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 22},
  [246] = {.lex_state = 23},
  [247] = {.lex_state = 22},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 22},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 22},
  [252] = {.lex_state = 22},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 22},
  [255] = {.lex_state = 22},
  [256] = {.lex_state = 22},
  [257] = {.lex_state = 22},
  [258] = {.lex_state = 22},
  [259] = {.lex_state = 22},
  [260] = {.lex_state = 22},
  [261] = {.lex_state = 22},
  [262] = {.lex_state = 22},
  [263] = {.lex_state = 22},
  [264] = {.lex_state = 22},
  [265] = {.lex_state = 22},
  [266] = {.lex_state = 22},
  [267] = {.lex_state = 22},
  [268] = {.lex_state = 22},
  [269] = {.lex_state = 22},
  [270] = {.lex_state = 22},
  [271] = {.lex_state = 22},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 22},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 22},
  [276] = {.lex_state = 22},
  [277] = {.lex_state = 22},
  [278] = {.lex_state = 22},
  [279] = {.lex_state = 22},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 22},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 22},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 22},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 22},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 22},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 22},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 22},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 22},
  [315] = {.lex_state = 23},
  [316] = {.lex_state = 23},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 22},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 22},
  [322] = {.lex_state = 22},
  [323] = {.lex_state = 22},
  [324] = {.lex_state = 22},
  [325] = {.lex_state = 22},
  [326] = {.lex_state = 22},
  [327] = {.lex_state = 22},
  [328] = {.lex_state = 22},
  [329] = {.lex_state = 22},
  [330] = {.lex_state = 22},
  [331] = {.lex_state = 22},
  [332] = {.lex_state = 23},
  [333] = {.lex_state = 22},
  [334] = {.lex_state = 22},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 22},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 23},
  [339] = {.lex_state = 22},
  [340] = {.lex_state = 22},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 22},
  [344] = {.lex_state = 22},
  [345] = {.lex_state = 23},
  [346] = {.lex_state = 22},
  [347] = {.lex_state = 22},
  [348] = {.lex_state = 22},
  [349] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ID] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym__string_not_escape] = ACTIONS(1),
    [sym_c_style] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_codepoint] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(346),
    [sym__statement_list] = STATE(344),
    [sym__statement] = STATE(212),
    [sym_import] = STATE(241),
    [sym_op_ref] = STATE(111),
    [sym__binding] = STATE(241),
    [sym_var_bind] = STATE(241),
    [sym_let_bind] = STATE(241),
    [sym_let_pattern] = STATE(241),
    [sym_let_fn] = STATE(241),
    [sym__empty_statement] = STATE(241),
    [sym__expression] = STATE(130),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(15),
    [sym__BANG] = ACTIONS(17),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__OPEN_BRACKET] = ACTIONS(21),
    [sym__OPEN_PAREN] = ACTIONS(23),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__IMPORT] = ACTIONS(31),
    [sym__LET] = ACTIONS(33),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__RETURN] = ACTIONS(39),
    [sym__VAR] = ACTIONS(41),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(17),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [2] = {
    [sym__statement_list] = STATE(334),
    [sym__statement] = STATE(212),
    [sym_import] = STATE(241),
    [sym_op_ref] = STATE(111),
    [sym__binding] = STATE(241),
    [sym_var_bind] = STATE(241),
    [sym_let_bind] = STATE(241),
    [sym_let_pattern] = STATE(241),
    [sym_let_fn] = STATE(241),
    [sym__empty_statement] = STATE(241),
    [sym__expression] = STATE(129),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_spread] = STATE(264),
    [sym_block] = STATE(136),
    [sym_record] = STATE(111),
    [sym__record_element] = STATE(264),
    [sym_pun] = STATE(264),
    [sym_pair] = STATE(264),
    [sym__key] = STATE(332),
    [sym_computed_key] = STATE(332),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(138),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [sym_ID] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(15),
    [sym__COMMA] = ACTIONS(51),
    [sym__BANG] = ACTIONS(17),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__CLOSE_BRACE] = ACTIONS(53),
    [sym__OPEN_BRACKET] = ACTIONS(21),
    [sym__OPEN_PAREN] = ACTIONS(23),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__IMPORT] = ACTIONS(31),
    [sym__LET] = ACTIONS(33),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__RETURN] = ACTIONS(39),
    [sym__VAR] = ACTIONS(41),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(17),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [3] = {
    [sym__statement] = STATE(232),
    [sym_import] = STATE(241),
    [sym_op_ref] = STATE(111),
    [sym__binding] = STATE(241),
    [sym_var_bind] = STATE(241),
    [sym_let_bind] = STATE(241),
    [sym_let_pattern] = STATE(241),
    [sym_let_fn] = STATE(241),
    [sym__empty_statement] = STATE(241),
    [sym__expression] = STATE(130),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(15),
    [sym__BANG] = ACTIONS(17),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__CLOSE_BRACE] = ACTIONS(55),
    [sym__OPEN_BRACKET] = ACTIONS(21),
    [sym__OPEN_PAREN] = ACTIONS(23),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__IMPORT] = ACTIONS(31),
    [sym__LET] = ACTIONS(33),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__RETURN] = ACTIONS(39),
    [sym__VAR] = ACTIONS(41),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(17),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [4] = {
    [sym__statement] = STATE(232),
    [sym_import] = STATE(241),
    [sym_op_ref] = STATE(111),
    [sym__binding] = STATE(241),
    [sym_var_bind] = STATE(241),
    [sym_let_bind] = STATE(241),
    [sym_let_pattern] = STATE(241),
    [sym_let_fn] = STATE(241),
    [sym__empty_statement] = STATE(241),
    [sym__expression] = STATE(130),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(15),
    [sym__BANG] = ACTIONS(17),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__CLOSE_BRACE] = ACTIONS(57),
    [sym__OPEN_BRACKET] = ACTIONS(21),
    [sym__OPEN_PAREN] = ACTIONS(23),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__IMPORT] = ACTIONS(31),
    [sym__LET] = ACTIONS(33),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__RETURN] = ACTIONS(39),
    [sym__VAR] = ACTIONS(41),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(17),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [5] = {
    [sym__statement_list] = STATE(334),
    [sym__statement] = STATE(212),
    [sym_import] = STATE(241),
    [sym_op_ref] = STATE(111),
    [sym__binding] = STATE(241),
    [sym_var_bind] = STATE(241),
    [sym_let_bind] = STATE(241),
    [sym_let_pattern] = STATE(241),
    [sym_let_fn] = STATE(241),
    [sym__empty_statement] = STATE(241),
    [sym__expression] = STATE(130),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(15),
    [sym__BANG] = ACTIONS(17),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__OPEN_BRACKET] = ACTIONS(21),
    [sym__OPEN_PAREN] = ACTIONS(23),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__IMPORT] = ACTIONS(31),
    [sym__LET] = ACTIONS(33),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__RETURN] = ACTIONS(39),
    [sym__VAR] = ACTIONS(41),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(17),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [6] = {
    [sym__statement] = STATE(232),
    [sym_import] = STATE(241),
    [sym_op_ref] = STATE(111),
    [sym__binding] = STATE(241),
    [sym_var_bind] = STATE(241),
    [sym_let_bind] = STATE(241),
    [sym_let_pattern] = STATE(241),
    [sym_let_fn] = STATE(241),
    [sym__empty_statement] = STATE(241),
    [sym__expression] = STATE(130),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(15),
    [sym__BANG] = ACTIONS(17),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__OPEN_BRACKET] = ACTIONS(21),
    [sym__OPEN_PAREN] = ACTIONS(23),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__IMPORT] = ACTIONS(31),
    [sym__LET] = ACTIONS(33),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__RETURN] = ACTIONS(39),
    [sym__VAR] = ACTIONS(41),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(17),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [7] = {
    [sym_op_ref] = STATE(111),
    [sym__expression] = STATE(87),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(59),
    [sym__COMMA] = ACTIONS(59),
    [sym__DOT] = ACTIONS(61),
    [sym__DOTS] = ACTIONS(59),
    [sym__BANG] = ACTIONS(59),
    [sym__QUESTION] = ACTIONS(59),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__CLOSE_BRACE] = ACTIONS(59),
    [sym__OPEN_BRACKET] = ACTIONS(59),
    [sym__CLOSE_BRACKET] = ACTIONS(59),
    [sym__OPEN_PAREN] = ACTIONS(59),
    [sym__CLOSE_PAREN] = ACTIONS(59),
    [sym__AND] = ACTIONS(59),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__OR] = ACTIONS(59),
    [sym__RETURN] = ACTIONS(39),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(59),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [8] = {
    [sym_op_ref] = STATE(111),
    [sym__expression] = STATE(90),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(63),
    [sym__COMMA] = ACTIONS(63),
    [sym__DOT] = ACTIONS(65),
    [sym__DOTS] = ACTIONS(63),
    [sym__BANG] = ACTIONS(63),
    [sym__QUESTION] = ACTIONS(63),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__CLOSE_BRACE] = ACTIONS(63),
    [sym__OPEN_BRACKET] = ACTIONS(63),
    [sym__CLOSE_BRACKET] = ACTIONS(63),
    [sym__OPEN_PAREN] = ACTIONS(63),
    [sym__CLOSE_PAREN] = ACTIONS(63),
    [sym__AND] = ACTIONS(63),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__OR] = ACTIONS(63),
    [sym__RETURN] = ACTIONS(39),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(63),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
  [9] = {
    [sym_op_ref] = STATE(111),
    [sym__expression] = STATE(88),
    [sym__unary] = STATE(111),
    [sym__suffix] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prefix_op] = STATE(29),
    [sym_infix] = STATE(111),
    [sym_postfix] = STATE(111),
    [sym_subscript] = STATE(111),
    [sym_member] = STATE(111),
    [sym_call] = STATE(111),
    [sym__primary_expression] = STATE(111),
    [sym_match] = STATE(111),
    [sym_return] = STATE(111),
    [sym_break] = STATE(111),
    [sym_continue] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_while] = STATE(111),
    [sym_conditional] = STATE(111),
    [sym_fn] = STATE(111),
    [sym_bare_parameter] = STATE(341),
    [sym_parameter_list] = STATE(341),
    [sym_list] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_block] = STATE(111),
    [sym_record] = STATE(111),
    [sym_grouping] = STATE(111),
    [sym__literal] = STATE(111),
    [sym_unit] = STATE(91),
    [sym_string] = STATE(91),
    [sym_char] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_ID] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [sym__COMMENT] = ACTIONS(13),
    [sym__WHITESPACE] = ACTIONS(13),
    [sym__SEMICOLON] = ACTIONS(67),
    [sym__COMMA] = ACTIONS(67),
    [sym__DOT] = ACTIONS(69),
    [sym__DOTS] = ACTIONS(67),
    [sym__BANG] = ACTIONS(67),
    [sym__QUESTION] = ACTIONS(67),
    [sym__OPEN_BRACE] = ACTIONS(19),
    [sym__CLOSE_BRACE] = ACTIONS(67),
    [sym__OPEN_BRACKET] = ACTIONS(67),
    [sym__CLOSE_BRACKET] = ACTIONS(67),
    [sym__OPEN_PAREN] = ACTIONS(67),
    [sym__CLOSE_PAREN] = ACTIONS(67),
    [sym__AND] = ACTIONS(67),
    [sym__BREAK] = ACTIONS(25),
    [sym__CONTINUE] = ACTIONS(27),
    [sym__IF] = ACTIONS(29),
    [sym__LOOP] = ACTIONS(35),
    [sym__MATCH] = ACTIONS(37),
    [sym__OR] = ACTIONS(67),
    [sym__RETURN] = ACTIONS(39),
    [sym__WHILE] = ACTIONS(43),
    [sym_TRUE] = ACTIONS(45),
    [sym_FALSE] = ACTIONS(45),
    [sym__OP] = ACTIONS(67),
    [sym_KEYWORD] = ACTIONS(45),
    [sym_FLOAT] = ACTIONS(45),
    [sym_INT] = ACTIONS(47),
    [sym_HEX] = ACTIONS(45),
    [sym_BIN] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(71), 1,
      sym_ID,
    ACTIONS(73), 1,
      sym__COMMA,
    ACTIONS(75), 1,
      sym__DOTS,
    ACTIONS(79), 1,
      sym__QUESTION,
    ACTIONS(81), 1,
      sym__CLOSE_PAREN,
    STATE(29), 1,
      sym_prefix_op,
    STATE(126), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(77), 2,
      sym__BANG,
      sym__OP,
    STATE(256), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(262), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [121] = 27,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(49), 1,
      sym_ID,
    ACTIONS(83), 1,
      sym__CLOSE_BRACE,
    STATE(29), 1,
      sym_prefix_op,
    STATE(136), 1,
      sym_block,
    STATE(138), 1,
      sym__literal,
    STATE(154), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(332), 2,
      sym__key,
      sym_computed_key,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(279), 4,
      sym_spread,
      sym__record_element,
      sym_pun,
      sym_pair,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 22,
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
  [238] = 27,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(49), 1,
      sym_ID,
    ACTIONS(85), 1,
      sym__CLOSE_BRACE,
    STATE(29), 1,
      sym_prefix_op,
    STATE(136), 1,
      sym_block,
    STATE(138), 1,
      sym__literal,
    STATE(154), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(332), 2,
      sym__key,
      sym_computed_key,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(279), 4,
      sym_spread,
      sym__record_element,
      sym_pun,
      sym_pair,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 22,
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
  [355] = 26,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(49), 1,
      sym_ID,
    STATE(29), 1,
      sym_prefix_op,
    STATE(136), 1,
      sym_block,
    STATE(138), 1,
      sym__literal,
    STATE(154), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(332), 2,
      sym__key,
      sym_computed_key,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(279), 4,
      sym_spread,
      sym__record_element,
      sym_pun,
      sym_pair,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 22,
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
  [469] = 25,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(87), 1,
      sym_ID,
    ACTIONS(89), 1,
      sym__COMMA,
    ACTIONS(91), 1,
      sym__CLOSE_PAREN,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(254), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [581] = 24,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(87), 1,
      sym_ID,
    ACTIONS(93), 1,
      sym__CLOSE_PAREN,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(289), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [690] = 24,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(87), 1,
      sym_ID,
    ACTIONS(95), 1,
      sym__CLOSE_PAREN,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(289), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [799] = 25,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(97), 1,
      sym__COMMA,
    ACTIONS(99), 1,
      sym__CLOSE_BRACKET,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(266), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [909] = 23,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(87), 1,
      sym_ID,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    STATE(289), 4,
      sym__argument,
      sym_keyword_argument,
      sym__element,
      sym_spread,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1015] = 19,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(151), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(63), 9,
      sym__DOT,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(111), 24,
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
  [1113] = 19,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(152), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(59), 9,
      sym__DOT,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(111), 24,
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
  [1211] = 19,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(149), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    ACTIONS(67), 9,
      sym__DOT,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACE,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
    STATE(111), 24,
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
  [1309] = 24,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(107), 1,
      sym__CLOSE_PAREN,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(249), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1416] = 24,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(109), 1,
      sym__CLOSE_BRACKET,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(249), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1523] = 24,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(111), 1,
      sym__CLOSE_BRACKET,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(249), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1630] = 24,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(113), 1,
      sym__CLOSE_PAREN,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(249), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1737] = 23,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(123), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(249), 2,
      sym__element,
      sym_spread,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1841] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(140), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [1941] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(137), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2041] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(84), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2141] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(133), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2241] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(143), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2341] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(141), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2441] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(146), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2541] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(144), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2641] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(148), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2741] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(125), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2841] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(131), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [2941] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(128), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3041] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(153), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3141] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(139), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3241] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(135), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3341] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    ACTIONS(101), 1,
      sym__BREAK,
    ACTIONS(103), 1,
      sym__CONTINUE,
    ACTIONS(105), 1,
      sym__RETURN,
    STATE(35), 1,
      sym_prefix_op,
    STATE(147), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(313), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3441] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(145), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3541] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(85), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3641] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(83), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3741] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(142), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3841] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(134), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [3941] = 22,
    ACTIONS(7), 1,
      sym_ID,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE2,
    ACTIONS(19), 1,
      sym__OPEN_BRACE,
    ACTIONS(21), 1,
      sym__OPEN_BRACKET,
    ACTIONS(23), 1,
      sym__OPEN_PAREN,
    ACTIONS(25), 1,
      sym__BREAK,
    ACTIONS(27), 1,
      sym__CONTINUE,
    ACTIONS(29), 1,
      sym__IF,
    ACTIONS(35), 1,
      sym__LOOP,
    ACTIONS(37), 1,
      sym__MATCH,
    ACTIONS(39), 1,
      sym__RETURN,
    ACTIONS(43), 1,
      sym__WHILE,
    ACTIONS(47), 1,
      sym_INT,
    STATE(29), 1,
      sym_prefix_op,
    STATE(150), 1,
      sym__expression,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(17), 2,
      sym__BANG,
      sym__OP,
    STATE(341), 2,
      sym_bare_parameter,
      sym_parameter_list,
    STATE(91), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(45), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(111), 24,
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
  [4041] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(121), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(186), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4102] = 15,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(135), 1,
      sym__COMMA,
    ACTIONS(137), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(79), 3,
      sym__BANG,
      sym__QUESTION,
      sym__OP,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(219), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4166] = 16,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE2,
    ACTIONS(145), 1,
      sym__COMMA,
    ACTIONS(147), 1,
      sym__DOTS,
    ACTIONS(149), 1,
      sym__OPEN_BRACE,
    ACTIONS(151), 1,
      sym__CLOSE_BRACE,
    ACTIONS(153), 1,
      sym__OPEN_BRACKET,
    ACTIONS(155), 1,
      sym__OPEN_PAREN,
    ACTIONS(159), 1,
      sym_INT,
    STATE(240), 1,
      sym_match_arm,
    STATE(312), 1,
      sym_pattern,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(157), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(282), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4231] = 15,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE2,
    ACTIONS(147), 1,
      sym__DOTS,
    ACTIONS(149), 1,
      sym__OPEN_BRACE,
    ACTIONS(153), 1,
      sym__OPEN_BRACKET,
    ACTIONS(155), 1,
      sym__OPEN_PAREN,
    ACTIONS(159), 1,
      sym_INT,
    ACTIONS(161), 1,
      sym__CLOSE_BRACE,
    STATE(290), 1,
      sym_match_arm,
    STATE(312), 1,
      sym_pattern,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(157), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(282), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4293] = 15,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE2,
    ACTIONS(147), 1,
      sym__DOTS,
    ACTIONS(149), 1,
      sym__OPEN_BRACE,
    ACTIONS(153), 1,
      sym__OPEN_BRACKET,
    ACTIONS(155), 1,
      sym__OPEN_PAREN,
    ACTIONS(159), 1,
      sym_INT,
    ACTIONS(163), 1,
      sym__CLOSE_BRACE,
    STATE(290), 1,
      sym_match_arm,
    STATE(312), 1,
      sym_pattern,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(157), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(282), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4355] = 14,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE2,
    ACTIONS(147), 1,
      sym__DOTS,
    ACTIONS(149), 1,
      sym__OPEN_BRACE,
    ACTIONS(153), 1,
      sym__OPEN_BRACKET,
    ACTIONS(155), 1,
      sym__OPEN_PAREN,
    ACTIONS(159), 1,
      sym_INT,
    STATE(290), 1,
      sym_match_arm,
    STATE(312), 1,
      sym_pattern,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(157), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(282), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4414] = 14,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(165), 1,
      sym__COMMA,
    ACTIONS(167), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(214), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4473] = 14,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(135), 1,
      sym__COMMA,
    ACTIONS(137), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(219), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4532] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(227), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4589] = 14,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(169), 1,
      sym_ID,
    ACTIONS(171), 1,
      sym__OPEN_PAREN,
    STATE(237), 1,
      sym_op_ref,
    STATE(314), 1,
      sym_pattern,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(285), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4648] = 14,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(173), 1,
      sym__COMMA,
    ACTIONS(175), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(213), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4707] = 14,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(177), 1,
      sym__COMMA,
    ACTIONS(179), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
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
  [4766] = 13,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE2,
    ACTIONS(147), 1,
      sym__DOTS,
    ACTIONS(149), 1,
      sym__OPEN_BRACE,
    ACTIONS(153), 1,
      sym__OPEN_BRACKET,
    ACTIONS(155), 1,
      sym__OPEN_PAREN,
    ACTIONS(159), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(121), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
    STATE(305), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(157), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(286), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4823] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(181), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4879] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(183), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4935] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(185), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [4991] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(187), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5047] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(189), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5103] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(191), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5159] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(193), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5215] = 13,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(195), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5271] = 12,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE2,
    ACTIONS(147), 1,
      sym__DOTS,
    ACTIONS(149), 1,
      sym__OPEN_BRACE,
    ACTIONS(153), 1,
      sym__OPEN_BRACKET,
    ACTIONS(155), 1,
      sym__OPEN_PAREN,
    ACTIONS(159), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(305), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(157), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(298), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5324] = 12,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(199), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5377] = 12,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(235), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5430] = 12,
    ACTIONS(115), 1,
      sym_ID,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE2,
    ACTIONS(123), 1,
      sym__DOTS,
    ACTIONS(125), 1,
      sym__OPEN_BRACE,
    ACTIONS(127), 1,
      sym__OPEN_BRACKET,
    ACTIONS(129), 1,
      sym__OPEN_PAREN,
    ACTIONS(133), 1,
      sym_INT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(200), 3,
      sym_unit,
      sym_string,
      sym_char,
    ACTIONS(131), 6,
      sym_TRUE,
      sym_FALSE,
      sym_KEYWORD,
      sym_FLOAT,
      sym_HEX,
      sym_BIN,
    STATE(221), 9,
      sym__pattern,
      sym_pat_or,
      sym_pat_rename,
      sym_pat_rest,
      sym_pat_list,
      sym_pat_grouping,
      sym_pat_tuple,
      sym_pat_rec,
      sym__literal,
  [5483] = 4,
    ACTIONS(201), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(197), 2,
      sym_ID,
      sym_INT,
    ACTIONS(199), 20,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE2,
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
  [5517] = 3,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(197), 2,
      sym_ID,
      sym_INT,
    ACTIONS(199), 20,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE2,
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
  [5548] = 3,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(203), 2,
      sym_ID,
      sym_INT,
    ACTIONS(205), 20,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE2,
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
  [5579] = 5,
    ACTIONS(209), 1,
      sym__DOT,
    ACTIONS(211), 1,
      sym__ELSE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(242), 2,
      sym_elif,
      aux_sym_conditional_repeat1,
    ACTIONS(207), 15,
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
  [5611] = 3,
    ACTIONS(215), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(213), 17,
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
  [5638] = 3,
    ACTIONS(219), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(217), 17,
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
  [5665] = 4,
    ACTIONS(223), 1,
      sym__DOT,
    ACTIONS(225), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(221), 16,
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
  [5694] = 4,
    ACTIONS(229), 1,
      sym__DOT,
    ACTIONS(231), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(227), 15,
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
  [5722] = 3,
    ACTIONS(235), 1,
      sym__DOT,
    ACTIONS(13), 2,
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
  [5748] = 8,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
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
  [5784] = 8,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(247), 10,
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
  [5820] = 9,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5858] = 4,
    ACTIONS(255), 1,
      sym__DOT,
    ACTIONS(257), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(253), 15,
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
  [5886] = 9,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5924] = 9,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [5962] = 3,
    ACTIONS(265), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(263), 16,
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
  [5988] = 9,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(267), 7,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__COMMA,
      sym__DOTS,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [6026] = 3,
    ACTIONS(271), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(269), 16,
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
  [6052] = 3,
    ACTIONS(275), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(273), 16,
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
  [6078] = 3,
    ACTIONS(279), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(277), 15,
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
  [6103] = 3,
    ACTIONS(283), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(281), 15,
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
  [6128] = 3,
    ACTIONS(287), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(285), 15,
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
  [6153] = 3,
    ACTIONS(291), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(289), 15,
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
  [6178] = 3,
    ACTIONS(295), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(293), 15,
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
  [6203] = 3,
    ACTIONS(299), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(297), 15,
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
  [6228] = 3,
    ACTIONS(303), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(301), 15,
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
  [6253] = 3,
    ACTIONS(307), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(305), 15,
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
  [6278] = 3,
    ACTIONS(311), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(309), 15,
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
  [6303] = 3,
    ACTIONS(315), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(313), 15,
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
  [6328] = 3,
    ACTIONS(319), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(317), 15,
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
  [6353] = 3,
    ACTIONS(323), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(321), 15,
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
  [6378] = 3,
    ACTIONS(327), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(325), 15,
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
  [6403] = 3,
    ACTIONS(331), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(329), 15,
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
  [6428] = 3,
    ACTIONS(335), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(333), 15,
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
  [6453] = 3,
    ACTIONS(339), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(337), 15,
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
  [6478] = 3,
    ACTIONS(343), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(341), 15,
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
  [6503] = 3,
    ACTIONS(255), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(253), 15,
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
  [6528] = 3,
    ACTIONS(347), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(345), 15,
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
  [6553] = 3,
    ACTIONS(351), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(349), 15,
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
  [6578] = 3,
    ACTIONS(355), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(353), 15,
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
  [6603] = 3,
    ACTIONS(359), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(357), 15,
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
  [6628] = 3,
    ACTIONS(363), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(361), 15,
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
  [6653] = 3,
    ACTIONS(367), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(365), 15,
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
  [6678] = 3,
    ACTIONS(371), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(369), 15,
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
  [6703] = 3,
    ACTIONS(375), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(373), 15,
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
  [6728] = 3,
    ACTIONS(379), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(377), 15,
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
  [6753] = 3,
    ACTIONS(383), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(381), 15,
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
  [6778] = 3,
    ACTIONS(387), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(385), 15,
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
  [6803] = 3,
    ACTIONS(391), 1,
      sym__DOT,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(389), 15,
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
  [6828] = 10,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(395), 1,
      sym__DOTS,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(393), 3,
      sym__COMMA,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [6865] = 6,
    ACTIONS(229), 1,
      sym__DOT,
    ACTIONS(231), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(397), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(399), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(227), 9,
      sym__SEMICOLON,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6894] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [6928] = 11,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(393), 1,
      sym__COMMA,
    ACTIONS(395), 1,
      sym__DOTS,
    ACTIONS(405), 1,
      sym__CLOSE_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [6966] = 6,
    ACTIONS(229), 1,
      sym__DOT,
    ACTIONS(231), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(407), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(409), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(227), 8,
      sym__DOTS,
      sym__BANG,
      sym__QUESTION,
      sym__OPEN_BRACKET,
      sym__OPEN_PAREN,
      sym__AND,
      sym__OR,
      sym__OP,
  [6994] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(412), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [7028] = 10,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(395), 1,
      sym__DOTS,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(414), 2,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7064] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(414), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [7098] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(416), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [7132] = 5,
    ACTIONS(229), 1,
      sym__DOT,
    ACTIONS(231), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(418), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(227), 10,
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
  [7158] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
    ACTIONS(420), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [7192] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(422), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7225] = 10,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(424), 1,
      sym__OPEN_BRACE,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    STATE(108), 1,
      sym_block,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7260] = 4,
    ACTIONS(229), 1,
      sym__DOT,
    ACTIONS(426), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(227), 10,
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
  [7283] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(428), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7316] = 4,
    ACTIONS(229), 1,
      sym__DOT,
    ACTIONS(397), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(227), 10,
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
  [7339] = 10,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(424), 1,
      sym__OPEN_BRACE,
    STATE(42), 1,
      sym_infix_op,
    STATE(77), 1,
      sym_block,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7374] = 10,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(430), 1,
      sym__OPEN_BRACE,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    STATE(121), 1,
      sym__match_arms,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7409] = 10,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(424), 1,
      sym__OPEN_BRACE,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    STATE(327), 1,
      sym_block,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7444] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(432), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7477] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(434), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7510] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(436), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7543] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(438), 1,
      sym__CLOSE_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7575] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(249), 1,
      sym__OPEN_BRACE,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7607] = 8,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(237), 4,
      sym__OPEN_BRACE,
      sym__AND,
      sym__OR,
      sym__OP,
  [7637] = 8,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(247), 4,
      sym__OPEN_BRACE,
      sym__AND,
      sym__OR,
      sym__OP,
  [7667] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(261), 1,
      sym__OPEN_BRACE,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7699] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(440), 1,
      sym__CLOSE_BRACKET,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7731] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(267), 1,
      sym__OPEN_BRACE,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7763] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(259), 1,
      sym__OPEN_BRACE,
    ACTIONS(403), 1,
      sym__DOT,
    STATE(42), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7795] = 9,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(403), 1,
      sym__DOT,
    ACTIONS(442), 1,
      sym__CLOSE_PAREN,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7827] = 9,
    ACTIONS(239), 1,
      sym__DOT,
    ACTIONS(243), 1,
      sym__OPEN_BRACKET,
    ACTIONS(245), 1,
      sym__OPEN_PAREN,
    ACTIONS(395), 1,
      sym__DOTS,
    STATE(45), 1,
      sym_infix_op,
    STATE(105), 1,
      sym_postfix_op,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(241), 2,
      sym__BANG,
      sym__QUESTION,
    ACTIONS(251), 3,
      sym__AND,
      sym__OR,
      sym__OP,
  [7859] = 7,
    ACTIONS(444), 1,
      anon_sym_DQUOTE2,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym__string_not_escape,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(159), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [7886] = 7,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym__string_not_escape,
    ACTIONS(452), 1,
      anon_sym_DQUOTE2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(161), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [7913] = 7,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym__string_not_escape,
    ACTIONS(454), 1,
      anon_sym_DQUOTE2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(160), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [7940] = 7,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym__string_not_escape,
    ACTIONS(456), 1,
      anon_sym_DQUOTE2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(157), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [7967] = 7,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym__string_not_escape,
    ACTIONS(458), 1,
      anon_sym_DQUOTE2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(160), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [7994] = 7,
    ACTIONS(460), 1,
      anon_sym_DQUOTE2,
    ACTIONS(462), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      sym__string_not_escape,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(160), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [8021] = 7,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym__string_not_escape,
    ACTIONS(471), 1,
      anon_sym_DQUOTE2,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(194), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    STATE(160), 4,
      sym_string_body,
      sym_interpolation,
      sym_escape,
      aux_sym_string_repeat1,
  [8048] = 8,
    ACTIONS(473), 1,
      sym_ID,
    ACTIONS(475), 1,
      sym__COMMA,
    ACTIONS(477), 1,
      sym__STAR,
    ACTIONS(479), 1,
      sym__CLOSE_BRACE,
    ACTIONS(481), 1,
      sym__OPEN_PAREN,
    STATE(231), 1,
      sym_op_ref,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(245), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [8077] = 7,
    ACTIONS(473), 1,
      sym_ID,
    ACTIONS(477), 1,
      sym__STAR,
    ACTIONS(481), 1,
      sym__OPEN_PAREN,
    ACTIONS(483), 1,
      sym__CLOSE_BRACE,
    STATE(231), 1,
      sym_op_ref,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(277), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [8103] = 7,
    ACTIONS(473), 1,
      sym_ID,
    ACTIONS(477), 1,
      sym__STAR,
    ACTIONS(481), 1,
      sym__OPEN_PAREN,
    ACTIONS(485), 1,
      sym__CLOSE_BRACE,
    STATE(231), 1,
      sym_op_ref,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(277), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [8129] = 6,
    ACTIONS(473), 1,
      sym_ID,
    ACTIONS(477), 1,
      sym__STAR,
    ACTIONS(481), 1,
      sym__OPEN_PAREN,
    STATE(231), 1,
      sym_op_ref,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(277), 4,
      sym__import_name,
      sym_star,
      sym_rename,
      sym_rename_op,
  [8152] = 6,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(489), 1,
      sym__COMMA,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(493), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(270), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8174] = 6,
    ACTIONS(75), 1,
      sym__DOTS,
    ACTIONS(495), 1,
      sym_ID,
    ACTIONS(497), 1,
      sym__COMMA,
    ACTIONS(499), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(262), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [8196] = 3,
    ACTIONS(503), 1,
      sym__AS,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(501), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8212] = 6,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(505), 1,
      sym__COMMA,
    ACTIONS(507), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(269), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8234] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(509), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8247] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(233), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8260] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(511), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8273] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(513), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8286] = 4,
    ACTIONS(517), 1,
      sym__DOT,
    STATE(195), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(515), 4,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [8303] = 4,
    ACTIONS(521), 1,
      sym__DOT,
    STATE(175), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(519), 4,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [8320] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(263), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8333] = 5,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(524), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(284), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8352] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(526), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8365] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(528), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8378] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(530), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8391] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(221), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8404] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(532), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8417] = 5,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    ACTIONS(539), 1,
      sym__string_not_escape,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(534), 2,
      anon_sym_DQUOTE2,
      anon_sym_BSLASH,
    STATE(183), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
  [8436] = 5,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(542), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(284), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8455] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(273), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8468] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(544), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8481] = 5,
    ACTIONS(75), 1,
      sym__DOTS,
    ACTIONS(495), 1,
      sym_ID,
    ACTIONS(546), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(281), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [8500] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(548), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8513] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(550), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8526] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(552), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8539] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(554), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8552] = 5,
    ACTIONS(75), 1,
      sym__DOTS,
    ACTIONS(495), 1,
      sym_ID,
    ACTIONS(556), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(281), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [8571] = 5,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(558), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(284), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8590] = 4,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(183), 2,
      sym__string_single_quote,
      aux_sym_string_body_repeat1,
    ACTIONS(560), 3,
      anon_sym_DQUOTE2,
      anon_sym_BSLASH,
      sym__string_not_escape,
  [8607] = 4,
    ACTIONS(517), 1,
      sym__DOT,
    STATE(175), 1,
      aux_sym_module_path_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(564), 4,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [8624] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(566), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8637] = 6,
    ACTIONS(568), 1,
      anon_sym_BSLASH,
    ACTIONS(570), 1,
      sym_c_style,
    ACTIONS(574), 1,
      sym__OPEN_PAREN,
    STATE(216), 1,
      sym_interpolation,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(572), 2,
      sym_byte,
      sym_codepoint,
  [8658] = 5,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(576), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(284), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8677] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(578), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8690] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(269), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8703] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(580), 6,
      sym__COMMA,
      sym__EQ,
      sym__PIPE,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8716] = 5,
    ACTIONS(582), 1,
      anon_sym_DQUOTE2,
    ACTIONS(584), 1,
      anon_sym_BSLASH,
    ACTIONS(586), 1,
      sym__char_not_escape,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(315), 3,
      sym__char_content,
      sym__char_double_quote,
      sym_escape,
  [8735] = 5,
    ACTIONS(584), 1,
      anon_sym_BSLASH,
    ACTIONS(588), 1,
      anon_sym_DQUOTE2,
    ACTIONS(590), 1,
      sym__char_not_escape,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(345), 3,
      sym__char_content,
      sym__char_double_quote,
      sym_escape,
  [8754] = 5,
    ACTIONS(584), 1,
      anon_sym_BSLASH,
    ACTIONS(592), 1,
      anon_sym_DQUOTE2,
    ACTIONS(594), 1,
      sym__char_not_escape,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(338), 3,
      sym__char_content,
      sym__char_double_quote,
      sym_escape,
  [8773] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(519), 5,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__DOT,
      sym__OPEN_BRACE,
      sym__CLOSE_BRACE,
  [8785] = 5,
    ACTIONS(596), 1,
      anon_sym_BSLASH,
    ACTIONS(598), 1,
      sym_c_style,
    STATE(316), 1,
      sym_interpolation,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(600), 2,
      sym_byte,
      sym_codepoint,
  [8803] = 4,
    ACTIONS(604), 1,
      sym__OPEN_BRACE,
    STATE(265), 1,
      sym_import_list,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(602), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [8819] = 6,
    ACTIONS(501), 1,
      sym__PIPE,
    ACTIONS(503), 1,
      sym__AS,
    ACTIONS(606), 1,
      sym__EQ,
    ACTIONS(609), 1,
      sym__OPEN_PAREN,
    STATE(337), 1,
      sym_parameter_list,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8839] = 4,
    ACTIONS(75), 1,
      sym__DOTS,
    ACTIONS(495), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(281), 3,
      sym__parameter,
      sym_keyword_parameter,
      sym_rest,
  [8855] = 4,
    ACTIONS(487), 1,
      sym_ID,
    ACTIONS(491), 1,
      sym__DOTS,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(284), 3,
      sym_pat_rest,
      sym__pat_rec_elt,
      sym_pat_pair,
  [8871] = 5,
    ACTIONS(611), 1,
      sym__COMMA,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(615), 1,
      sym__CLOSE_BRACKET,
    STATE(225), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8888] = 4,
    ACTIONS(619), 1,
      sym__SEMICOLON,
    STATE(215), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(617), 2,
      ts_builtin_sym_end,
      sym__CLOSE_BRACE,
  [8903] = 5,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(621), 1,
      sym__COMMA,
    ACTIONS(623), 1,
      sym__CLOSE_PAREN,
    STATE(255), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8920] = 5,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(625), 1,
      sym__COMMA,
    ACTIONS(627), 1,
      sym__CLOSE_BRACKET,
    STATE(259), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [8937] = 4,
    ACTIONS(629), 1,
      sym__SEMICOLON,
    STATE(222), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym__CLOSE_BRACE,
  [8952] = 3,
    ACTIONS(633), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(631), 3,
      anon_sym_DQUOTE2,
      anon_sym_BSLASH,
      sym__string_not_escape,
  [8965] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(635), 4,
      sym__COMMA,
      sym__CLOSE_BRACE,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8976] = 4,
    ACTIONS(637), 1,
      sym__COMMA,
    STATE(218), 1,
      aux_sym_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(640), 2,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [8991] = 5,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(642), 1,
      sym__COMMA,
    ACTIONS(644), 1,
      sym__CLOSE_PAREN,
    STATE(268), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9008] = 3,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(646), 3,
      anon_sym_DQUOTE2,
      anon_sym_BSLASH,
      sym__string_not_escape,
  [9021] = 3,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(650), 3,
      sym__COMMA,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [9034] = 4,
    ACTIONS(654), 1,
      sym__SEMICOLON,
    STATE(222), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(652), 2,
      ts_builtin_sym_end,
      sym__CLOSE_BRACE,
  [9049] = 4,
    ACTIONS(657), 1,
      sym__COMMA,
    STATE(223), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(650), 2,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [9064] = 4,
    ACTIONS(111), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(660), 1,
      sym__COMMA,
    STATE(218), 1,
      aux_sym_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9078] = 4,
    ACTIONS(191), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(662), 1,
      sym__COMMA,
    STATE(223), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9092] = 4,
    ACTIONS(95), 1,
      sym__CLOSE_PAREN,
    ACTIONS(664), 1,
      sym__COMMA,
    STATE(252), 1,
      aux_sym_call_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9106] = 3,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(544), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9118] = 4,
    ACTIONS(424), 1,
      sym__OPEN_BRACE,
    ACTIONS(666), 1,
      sym__IF,
    STATE(98), 1,
      sym_block,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9132] = 3,
    ACTIONS(668), 1,
      sym__ELSE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(229), 2,
      sym_elif,
      aux_sym_conditional_repeat1,
  [9144] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(671), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9154] = 3,
    ACTIONS(675), 1,
      sym__AS,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(673), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9166] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(652), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9176] = 4,
    ACTIONS(485), 1,
      sym__CLOSE_BRACE,
    ACTIONS(677), 1,
      sym__COMMA,
    STATE(260), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9190] = 3,
    ACTIONS(679), 1,
      sym__AS,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(501), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9202] = 3,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(681), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9214] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(79), 3,
      sym__BANG,
      sym__QUESTION,
      sym__OP,
  [9224] = 4,
    ACTIONS(609), 1,
      sym__OPEN_PAREN,
    ACTIONS(683), 1,
      sym__EQ,
    STATE(337), 1,
      sym_parameter_list,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9238] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(685), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9248] = 4,
    ACTIONS(687), 1,
      sym__COMMA,
    ACTIONS(690), 1,
      sym__CLOSE_BRACE,
    STATE(239), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9262] = 4,
    ACTIONS(692), 1,
      sym__COMMA,
    ACTIONS(694), 1,
      sym__CLOSE_BRACE,
    STATE(247), 1,
      aux_sym__match_arms_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9276] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(414), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9286] = 3,
    ACTIONS(696), 1,
      sym__ELSE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    STATE(229), 2,
      sym_elif,
      aux_sym_conditional_repeat1,
  [9298] = 4,
    ACTIONS(424), 1,
      sym__OPEN_BRACE,
    ACTIONS(666), 1,
      sym__IF,
    STATE(95), 1,
      sym_block,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9312] = 4,
    ACTIONS(698), 1,
      sym__COMMA,
    ACTIONS(701), 1,
      sym__CLOSE_PAREN,
    STATE(244), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9326] = 4,
    ACTIONS(703), 1,
      sym__COMMA,
    ACTIONS(705), 1,
      sym__CLOSE_BRACE,
    STATE(233), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9340] = 3,
    ACTIONS(407), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(707), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
  [9352] = 4,
    ACTIONS(161), 1,
      sym__CLOSE_BRACE,
    ACTIONS(709), 1,
      sym__COMMA,
    STATE(267), 1,
      aux_sym__match_arms_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9366] = 4,
    ACTIONS(542), 1,
      sym__CLOSE_BRACE,
    ACTIONS(711), 1,
      sym__COMMA,
    STATE(239), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9380] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(640), 3,
      sym__COMMA,
      sym__CLOSE_BRACKET,
      sym__CLOSE_PAREN,
  [9390] = 4,
    ACTIONS(85), 1,
      sym__CLOSE_BRACE,
    ACTIONS(713), 1,
      sym__COMMA,
    STATE(251), 1,
      aux_sym_record_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9404] = 4,
    ACTIONS(715), 1,
      sym__COMMA,
    ACTIONS(718), 1,
      sym__CLOSE_BRACE,
    STATE(251), 1,
      aux_sym_record_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9418] = 4,
    ACTIONS(720), 1,
      sym__COMMA,
    ACTIONS(723), 1,
      sym__CLOSE_PAREN,
    STATE(252), 1,
      aux_sym_call_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9432] = 3,
    ACTIONS(725), 1,
      sym__AS,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(673), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9444] = 4,
    ACTIONS(727), 1,
      sym__COMMA,
    ACTIONS(729), 1,
      sym__CLOSE_PAREN,
    STATE(226), 1,
      aux_sym_call_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9458] = 4,
    ACTIONS(183), 1,
      sym__CLOSE_PAREN,
    ACTIONS(731), 1,
      sym__COMMA,
    STATE(223), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9472] = 4,
    ACTIONS(733), 1,
      sym__COMMA,
    ACTIONS(735), 1,
      sym__CLOSE_PAREN,
    STATE(261), 1,
      aux_sym_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9486] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(737), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9496] = 4,
    ACTIONS(556), 1,
      sym__CLOSE_PAREN,
    ACTIONS(739), 1,
      sym__COMMA,
    STATE(244), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9510] = 4,
    ACTIONS(181), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(741), 1,
      sym__COMMA,
    STATE(223), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9524] = 4,
    ACTIONS(743), 1,
      sym__COMMA,
    ACTIONS(746), 1,
      sym__CLOSE_BRACE,
    STATE(260), 1,
      aux_sym_import_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9538] = 4,
    ACTIONS(113), 1,
      sym__CLOSE_PAREN,
    ACTIONS(748), 1,
      sym__COMMA,
    STATE(218), 1,
      aux_sym_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9552] = 4,
    ACTIONS(750), 1,
      sym__COMMA,
    ACTIONS(752), 1,
      sym__CLOSE_PAREN,
    STATE(258), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9566] = 4,
    ACTIONS(558), 1,
      sym__CLOSE_BRACE,
    ACTIONS(754), 1,
      sym__COMMA,
    STATE(239), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9580] = 4,
    ACTIONS(756), 1,
      sym__COMMA,
    ACTIONS(758), 1,
      sym__CLOSE_BRACE,
    STATE(250), 1,
      aux_sym_record_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9594] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(760), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9604] = 4,
    ACTIONS(762), 1,
      sym__COMMA,
    ACTIONS(764), 1,
      sym__CLOSE_BRACKET,
    STATE(224), 1,
      aux_sym_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9618] = 4,
    ACTIONS(766), 1,
      sym__COMMA,
    ACTIONS(769), 1,
      sym__CLOSE_BRACE,
    STATE(267), 1,
      aux_sym__match_arms_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9632] = 4,
    ACTIONS(189), 1,
      sym__CLOSE_PAREN,
    ACTIONS(771), 1,
      sym__COMMA,
    STATE(223), 1,
      aux_sym_pat_list_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9646] = 4,
    ACTIONS(773), 1,
      sym__COMMA,
    ACTIONS(775), 1,
      sym__CLOSE_BRACE,
    STATE(248), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9660] = 4,
    ACTIONS(777), 1,
      sym__COMMA,
    ACTIONS(779), 1,
      sym__CLOSE_BRACE,
    STATE(263), 1,
      aux_sym_pat_rec_repeat1,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9674] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(781), 3,
      ts_builtin_sym_end,
      sym__SEMICOLON,
      sym__CLOSE_BRACE,
  [9684] = 3,
    ACTIONS(783), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(785), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9696] = 3,
    ACTIONS(424), 1,
      sym__OPEN_BRACE,
    STATE(120), 1,
      sym_block,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9707] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(221), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9716] = 3,
    ACTIONS(787), 1,
      sym_ID,
    STATE(207), 1,
      sym_module_path,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9727] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(789), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9736] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(746), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9745] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(791), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9754] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(718), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9763] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(263), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9772] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(701), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
  [9781] = 3,
    ACTIONS(793), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(795), 1,
      sym__PIPE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9792] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(552), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9801] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(690), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9810] = 3,
    ACTIONS(613), 1,
      sym__PIPE,
    ACTIONS(793), 1,
      sym__EQ,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9821] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(544), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9830] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(273), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9839] = 3,
    ACTIONS(481), 1,
      sym__OPEN_PAREN,
    STATE(276), 1,
      sym_op_ref,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [9850] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(723), 2,
      sym__COMMA,
      sym__CLOSE_PAREN,
  [9859] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(769), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9868] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(797), 2,
      sym__COMMA,
      sym__CLOSE_BRACE,
  [9877] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(580), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9886] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(532), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9895] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(513), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9904] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(550), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9913] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(554), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9922] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(566), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9931] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(578), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9940] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(526), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9949] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(509), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9958] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(511), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9967] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(548), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9976] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(530), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9985] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(528), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [9994] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(269), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [10003] = 2,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
    ACTIONS(233), 2,
      sym__DOUBLE_ARROW,
      sym__PIPE,
  [10012] = 2,
    ACTIONS(799), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10020] = 2,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10028] = 2,
    ACTIONS(801), 1,
      sym__EQ,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10036] = 2,
    ACTIONS(803), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10044] = 2,
    ACTIONS(694), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10052] = 2,
    ACTIONS(805), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10060] = 2,
    ACTIONS(807), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10068] = 2,
    ACTIONS(809), 1,
      sym__EQ,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10076] = 2,
    ACTIONS(811), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10084] = 2,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10092] = 2,
    ACTIONS(225), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10100] = 2,
    ACTIONS(752), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10108] = 2,
    ACTIONS(574), 1,
      sym__OPEN_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10116] = 2,
    ACTIONS(257), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10124] = 2,
    ACTIONS(201), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10132] = 2,
    ACTIONS(813), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10140] = 2,
    ACTIONS(815), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10148] = 2,
    ACTIONS(779), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10156] = 2,
    ACTIONS(775), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10164] = 2,
    ACTIONS(627), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10172] = 2,
    ACTIONS(817), 1,
      sym__ELSE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10180] = 2,
    ACTIONS(819), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10188] = 2,
    ACTIONS(615), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10196] = 2,
    ACTIONS(821), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10204] = 2,
    ACTIONS(764), 1,
      sym__CLOSE_BRACKET,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10212] = 2,
    ACTIONS(823), 1,
      sym__COLON,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10220] = 2,
    ACTIONS(825), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10228] = 2,
    ACTIONS(827), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10236] = 2,
    ACTIONS(829), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10244] = 2,
    ACTIONS(758), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10252] = 2,
    ACTIONS(831), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10260] = 2,
    ACTIONS(833), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10268] = 2,
    ACTIONS(729), 1,
      sym__CLOSE_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10276] = 2,
    ACTIONS(666), 1,
      sym__IF,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10284] = 2,
    ACTIONS(835), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10292] = 2,
    ACTIONS(837), 1,
      sym__DOUBLE_ARROW,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10300] = 2,
    ACTIONS(705), 1,
      sym__CLOSE_BRACE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10308] = 2,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10316] = 2,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10324] = 2,
    ACTIONS(843), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10332] = 2,
    ACTIONS(845), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10340] = 2,
    ACTIONS(847), 1,
      sym_ID,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
  [10348] = 2,
    ACTIONS(849), 1,
      sym__OPEN_PAREN,
    ACTIONS(13), 2,
      sym__COMMENT,
      sym__WHITESPACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 355,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 690,
  [SMALL_STATE(17)] = 799,
  [SMALL_STATE(18)] = 909,
  [SMALL_STATE(19)] = 1015,
  [SMALL_STATE(20)] = 1113,
  [SMALL_STATE(21)] = 1211,
  [SMALL_STATE(22)] = 1309,
  [SMALL_STATE(23)] = 1416,
  [SMALL_STATE(24)] = 1523,
  [SMALL_STATE(25)] = 1630,
  [SMALL_STATE(26)] = 1737,
  [SMALL_STATE(27)] = 1841,
  [SMALL_STATE(28)] = 1941,
  [SMALL_STATE(29)] = 2041,
  [SMALL_STATE(30)] = 2141,
  [SMALL_STATE(31)] = 2241,
  [SMALL_STATE(32)] = 2341,
  [SMALL_STATE(33)] = 2441,
  [SMALL_STATE(34)] = 2541,
  [SMALL_STATE(35)] = 2641,
  [SMALL_STATE(36)] = 2741,
  [SMALL_STATE(37)] = 2841,
  [SMALL_STATE(38)] = 2941,
  [SMALL_STATE(39)] = 3041,
  [SMALL_STATE(40)] = 3141,
  [SMALL_STATE(41)] = 3241,
  [SMALL_STATE(42)] = 3341,
  [SMALL_STATE(43)] = 3441,
  [SMALL_STATE(44)] = 3541,
  [SMALL_STATE(45)] = 3641,
  [SMALL_STATE(46)] = 3741,
  [SMALL_STATE(47)] = 3841,
  [SMALL_STATE(48)] = 3941,
  [SMALL_STATE(49)] = 4041,
  [SMALL_STATE(50)] = 4102,
  [SMALL_STATE(51)] = 4166,
  [SMALL_STATE(52)] = 4231,
  [SMALL_STATE(53)] = 4293,
  [SMALL_STATE(54)] = 4355,
  [SMALL_STATE(55)] = 4414,
  [SMALL_STATE(56)] = 4473,
  [SMALL_STATE(57)] = 4532,
  [SMALL_STATE(58)] = 4589,
  [SMALL_STATE(59)] = 4648,
  [SMALL_STATE(60)] = 4707,
  [SMALL_STATE(61)] = 4766,
  [SMALL_STATE(62)] = 4823,
  [SMALL_STATE(63)] = 4879,
  [SMALL_STATE(64)] = 4935,
  [SMALL_STATE(65)] = 4991,
  [SMALL_STATE(66)] = 5047,
  [SMALL_STATE(67)] = 5103,
  [SMALL_STATE(68)] = 5159,
  [SMALL_STATE(69)] = 5215,
  [SMALL_STATE(70)] = 5271,
  [SMALL_STATE(71)] = 5324,
  [SMALL_STATE(72)] = 5377,
  [SMALL_STATE(73)] = 5430,
  [SMALL_STATE(74)] = 5483,
  [SMALL_STATE(75)] = 5517,
  [SMALL_STATE(76)] = 5548,
  [SMALL_STATE(77)] = 5579,
  [SMALL_STATE(78)] = 5611,
  [SMALL_STATE(79)] = 5638,
  [SMALL_STATE(80)] = 5665,
  [SMALL_STATE(81)] = 5694,
  [SMALL_STATE(82)] = 5722,
  [SMALL_STATE(83)] = 5748,
  [SMALL_STATE(84)] = 5784,
  [SMALL_STATE(85)] = 5820,
  [SMALL_STATE(86)] = 5858,
  [SMALL_STATE(87)] = 5886,
  [SMALL_STATE(88)] = 5924,
  [SMALL_STATE(89)] = 5962,
  [SMALL_STATE(90)] = 5988,
  [SMALL_STATE(91)] = 6026,
  [SMALL_STATE(92)] = 6052,
  [SMALL_STATE(93)] = 6078,
  [SMALL_STATE(94)] = 6103,
  [SMALL_STATE(95)] = 6128,
  [SMALL_STATE(96)] = 6153,
  [SMALL_STATE(97)] = 6178,
  [SMALL_STATE(98)] = 6203,
  [SMALL_STATE(99)] = 6228,
  [SMALL_STATE(100)] = 6253,
  [SMALL_STATE(101)] = 6278,
  [SMALL_STATE(102)] = 6303,
  [SMALL_STATE(103)] = 6328,
  [SMALL_STATE(104)] = 6353,
  [SMALL_STATE(105)] = 6378,
  [SMALL_STATE(106)] = 6403,
  [SMALL_STATE(107)] = 6428,
  [SMALL_STATE(108)] = 6453,
  [SMALL_STATE(109)] = 6478,
  [SMALL_STATE(110)] = 6503,
  [SMALL_STATE(111)] = 6528,
  [SMALL_STATE(112)] = 6553,
  [SMALL_STATE(113)] = 6578,
  [SMALL_STATE(114)] = 6603,
  [SMALL_STATE(115)] = 6628,
  [SMALL_STATE(116)] = 6653,
  [SMALL_STATE(117)] = 6678,
  [SMALL_STATE(118)] = 6703,
  [SMALL_STATE(119)] = 6728,
  [SMALL_STATE(120)] = 6753,
  [SMALL_STATE(121)] = 6778,
  [SMALL_STATE(122)] = 6803,
  [SMALL_STATE(123)] = 6828,
  [SMALL_STATE(124)] = 6865,
  [SMALL_STATE(125)] = 6894,
  [SMALL_STATE(126)] = 6928,
  [SMALL_STATE(127)] = 6966,
  [SMALL_STATE(128)] = 6994,
  [SMALL_STATE(129)] = 7028,
  [SMALL_STATE(130)] = 7064,
  [SMALL_STATE(131)] = 7098,
  [SMALL_STATE(132)] = 7132,
  [SMALL_STATE(133)] = 7158,
  [SMALL_STATE(134)] = 7192,
  [SMALL_STATE(135)] = 7225,
  [SMALL_STATE(136)] = 7260,
  [SMALL_STATE(137)] = 7283,
  [SMALL_STATE(138)] = 7316,
  [SMALL_STATE(139)] = 7339,
  [SMALL_STATE(140)] = 7374,
  [SMALL_STATE(141)] = 7409,
  [SMALL_STATE(142)] = 7444,
  [SMALL_STATE(143)] = 7477,
  [SMALL_STATE(144)] = 7510,
  [SMALL_STATE(145)] = 7543,
  [SMALL_STATE(146)] = 7575,
  [SMALL_STATE(147)] = 7607,
  [SMALL_STATE(148)] = 7637,
  [SMALL_STATE(149)] = 7667,
  [SMALL_STATE(150)] = 7699,
  [SMALL_STATE(151)] = 7731,
  [SMALL_STATE(152)] = 7763,
  [SMALL_STATE(153)] = 7795,
  [SMALL_STATE(154)] = 7827,
  [SMALL_STATE(155)] = 7859,
  [SMALL_STATE(156)] = 7886,
  [SMALL_STATE(157)] = 7913,
  [SMALL_STATE(158)] = 7940,
  [SMALL_STATE(159)] = 7967,
  [SMALL_STATE(160)] = 7994,
  [SMALL_STATE(161)] = 8021,
  [SMALL_STATE(162)] = 8048,
  [SMALL_STATE(163)] = 8077,
  [SMALL_STATE(164)] = 8103,
  [SMALL_STATE(165)] = 8129,
  [SMALL_STATE(166)] = 8152,
  [SMALL_STATE(167)] = 8174,
  [SMALL_STATE(168)] = 8196,
  [SMALL_STATE(169)] = 8212,
  [SMALL_STATE(170)] = 8234,
  [SMALL_STATE(171)] = 8247,
  [SMALL_STATE(172)] = 8260,
  [SMALL_STATE(173)] = 8273,
  [SMALL_STATE(174)] = 8286,
  [SMALL_STATE(175)] = 8303,
  [SMALL_STATE(176)] = 8320,
  [SMALL_STATE(177)] = 8333,
  [SMALL_STATE(178)] = 8352,
  [SMALL_STATE(179)] = 8365,
  [SMALL_STATE(180)] = 8378,
  [SMALL_STATE(181)] = 8391,
  [SMALL_STATE(182)] = 8404,
  [SMALL_STATE(183)] = 8417,
  [SMALL_STATE(184)] = 8436,
  [SMALL_STATE(185)] = 8455,
  [SMALL_STATE(186)] = 8468,
  [SMALL_STATE(187)] = 8481,
  [SMALL_STATE(188)] = 8500,
  [SMALL_STATE(189)] = 8513,
  [SMALL_STATE(190)] = 8526,
  [SMALL_STATE(191)] = 8539,
  [SMALL_STATE(192)] = 8552,
  [SMALL_STATE(193)] = 8571,
  [SMALL_STATE(194)] = 8590,
  [SMALL_STATE(195)] = 8607,
  [SMALL_STATE(196)] = 8624,
  [SMALL_STATE(197)] = 8637,
  [SMALL_STATE(198)] = 8658,
  [SMALL_STATE(199)] = 8677,
  [SMALL_STATE(200)] = 8690,
  [SMALL_STATE(201)] = 8703,
  [SMALL_STATE(202)] = 8716,
  [SMALL_STATE(203)] = 8735,
  [SMALL_STATE(204)] = 8754,
  [SMALL_STATE(205)] = 8773,
  [SMALL_STATE(206)] = 8785,
  [SMALL_STATE(207)] = 8803,
  [SMALL_STATE(208)] = 8819,
  [SMALL_STATE(209)] = 8839,
  [SMALL_STATE(210)] = 8855,
  [SMALL_STATE(211)] = 8871,
  [SMALL_STATE(212)] = 8888,
  [SMALL_STATE(213)] = 8903,
  [SMALL_STATE(214)] = 8920,
  [SMALL_STATE(215)] = 8937,
  [SMALL_STATE(216)] = 8952,
  [SMALL_STATE(217)] = 8965,
  [SMALL_STATE(218)] = 8976,
  [SMALL_STATE(219)] = 8991,
  [SMALL_STATE(220)] = 9008,
  [SMALL_STATE(221)] = 9021,
  [SMALL_STATE(222)] = 9034,
  [SMALL_STATE(223)] = 9049,
  [SMALL_STATE(224)] = 9064,
  [SMALL_STATE(225)] = 9078,
  [SMALL_STATE(226)] = 9092,
  [SMALL_STATE(227)] = 9106,
  [SMALL_STATE(228)] = 9118,
  [SMALL_STATE(229)] = 9132,
  [SMALL_STATE(230)] = 9144,
  [SMALL_STATE(231)] = 9154,
  [SMALL_STATE(232)] = 9166,
  [SMALL_STATE(233)] = 9176,
  [SMALL_STATE(234)] = 9190,
  [SMALL_STATE(235)] = 9202,
  [SMALL_STATE(236)] = 9214,
  [SMALL_STATE(237)] = 9224,
  [SMALL_STATE(238)] = 9238,
  [SMALL_STATE(239)] = 9248,
  [SMALL_STATE(240)] = 9262,
  [SMALL_STATE(241)] = 9276,
  [SMALL_STATE(242)] = 9286,
  [SMALL_STATE(243)] = 9298,
  [SMALL_STATE(244)] = 9312,
  [SMALL_STATE(245)] = 9326,
  [SMALL_STATE(246)] = 9340,
  [SMALL_STATE(247)] = 9352,
  [SMALL_STATE(248)] = 9366,
  [SMALL_STATE(249)] = 9380,
  [SMALL_STATE(250)] = 9390,
  [SMALL_STATE(251)] = 9404,
  [SMALL_STATE(252)] = 9418,
  [SMALL_STATE(253)] = 9432,
  [SMALL_STATE(254)] = 9444,
  [SMALL_STATE(255)] = 9458,
  [SMALL_STATE(256)] = 9472,
  [SMALL_STATE(257)] = 9486,
  [SMALL_STATE(258)] = 9496,
  [SMALL_STATE(259)] = 9510,
  [SMALL_STATE(260)] = 9524,
  [SMALL_STATE(261)] = 9538,
  [SMALL_STATE(262)] = 9552,
  [SMALL_STATE(263)] = 9566,
  [SMALL_STATE(264)] = 9580,
  [SMALL_STATE(265)] = 9594,
  [SMALL_STATE(266)] = 9604,
  [SMALL_STATE(267)] = 9618,
  [SMALL_STATE(268)] = 9632,
  [SMALL_STATE(269)] = 9646,
  [SMALL_STATE(270)] = 9660,
  [SMALL_STATE(271)] = 9674,
  [SMALL_STATE(272)] = 9684,
  [SMALL_STATE(273)] = 9696,
  [SMALL_STATE(274)] = 9707,
  [SMALL_STATE(275)] = 9716,
  [SMALL_STATE(276)] = 9727,
  [SMALL_STATE(277)] = 9736,
  [SMALL_STATE(278)] = 9745,
  [SMALL_STATE(279)] = 9754,
  [SMALL_STATE(280)] = 9763,
  [SMALL_STATE(281)] = 9772,
  [SMALL_STATE(282)] = 9781,
  [SMALL_STATE(283)] = 9792,
  [SMALL_STATE(284)] = 9801,
  [SMALL_STATE(285)] = 9810,
  [SMALL_STATE(286)] = 9821,
  [SMALL_STATE(287)] = 9830,
  [SMALL_STATE(288)] = 9839,
  [SMALL_STATE(289)] = 9850,
  [SMALL_STATE(290)] = 9859,
  [SMALL_STATE(291)] = 9868,
  [SMALL_STATE(292)] = 9877,
  [SMALL_STATE(293)] = 9886,
  [SMALL_STATE(294)] = 9895,
  [SMALL_STATE(295)] = 9904,
  [SMALL_STATE(296)] = 9913,
  [SMALL_STATE(297)] = 9922,
  [SMALL_STATE(298)] = 9931,
  [SMALL_STATE(299)] = 9940,
  [SMALL_STATE(300)] = 9949,
  [SMALL_STATE(301)] = 9958,
  [SMALL_STATE(302)] = 9967,
  [SMALL_STATE(303)] = 9976,
  [SMALL_STATE(304)] = 9985,
  [SMALL_STATE(305)] = 9994,
  [SMALL_STATE(306)] = 10003,
  [SMALL_STATE(307)] = 10012,
  [SMALL_STATE(308)] = 10020,
  [SMALL_STATE(309)] = 10028,
  [SMALL_STATE(310)] = 10036,
  [SMALL_STATE(311)] = 10044,
  [SMALL_STATE(312)] = 10052,
  [SMALL_STATE(313)] = 10060,
  [SMALL_STATE(314)] = 10068,
  [SMALL_STATE(315)] = 10076,
  [SMALL_STATE(316)] = 10084,
  [SMALL_STATE(317)] = 10092,
  [SMALL_STATE(318)] = 10100,
  [SMALL_STATE(319)] = 10108,
  [SMALL_STATE(320)] = 10116,
  [SMALL_STATE(321)] = 10124,
  [SMALL_STATE(322)] = 10132,
  [SMALL_STATE(323)] = 10140,
  [SMALL_STATE(324)] = 10148,
  [SMALL_STATE(325)] = 10156,
  [SMALL_STATE(326)] = 10164,
  [SMALL_STATE(327)] = 10172,
  [SMALL_STATE(328)] = 10180,
  [SMALL_STATE(329)] = 10188,
  [SMALL_STATE(330)] = 10196,
  [SMALL_STATE(331)] = 10204,
  [SMALL_STATE(332)] = 10212,
  [SMALL_STATE(333)] = 10220,
  [SMALL_STATE(334)] = 10228,
  [SMALL_STATE(335)] = 10236,
  [SMALL_STATE(336)] = 10244,
  [SMALL_STATE(337)] = 10252,
  [SMALL_STATE(338)] = 10260,
  [SMALL_STATE(339)] = 10268,
  [SMALL_STATE(340)] = 10276,
  [SMALL_STATE(341)] = 10284,
  [SMALL_STATE(342)] = 10292,
  [SMALL_STATE(343)] = 10300,
  [SMALL_STATE(344)] = 10308,
  [SMALL_STATE(345)] = 10316,
  [SMALL_STATE(346)] = 10324,
  [SMALL_STATE(347)] = 10332,
  [SMALL_STATE(348)] = 10340,
  [SMALL_STATE(349)] = 10348,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rest, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_op, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_op, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_op, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_op, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ref, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_ref, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_parameter, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouping, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_op, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_op, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match_arms, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match_arms, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pun, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_bind, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary_expression, 1), REDUCE(sym__parameter, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_pattern, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_bind, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_fn, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_key, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_parameter, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(197),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(194),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(194),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_path_repeat1, 2), SHIFT_REPEAT(323),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_body_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_body_repeat1, 2), SHIFT_REPEAT(183),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_body_repeat1, 2), SHIFT_REPEAT(183),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rest, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_tuple, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_list, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_grouping, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_body, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_body, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_path, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rename, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_or, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_rec, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__pattern, 1), SHIFT(37),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(26),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_list_repeat1, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(6),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_list_repeat1, 2), SHIFT_REPEAT(73),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(340),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_name, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_pair, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 2),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_rec_repeat1, 2), SHIFT_REPEAT(210),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_rec_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(209),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(13),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(18),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_list_repeat1, 2), SHIFT_REPEAT(165),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_list_repeat1, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__match_arms_repeat1, 2), SHIFT_REPEAT(54),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__match_arms_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_list, 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_rec_elt, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename_op, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rename, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_star, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif, 4),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [843] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
