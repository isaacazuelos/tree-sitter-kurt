// A grammar for Kurt.
//
// The way I'm doing recursion in a lot of places here is the same approached
// used by [Swift][]. Specifically see the production 'array-literal' for how
// they do optional trailing separators in lists.
//
// [Swift] https://docs.swift.org/swift-book/ReferenceManual/Expressions.html

const STATEMENT_SEP = ';';
const MOD_PATH_SEP = '.';
const LIST_SEP = ',';

module.exports = grammar({
    name: 'kurt',

    extras: $ => [
        /\s/,
        $._comment,
    ],

    rules: {
        source_file: $ => optional($._statement_list),

        _statement_list: $ => choice(
            seq($._statement, field('trailing', optional(STATEMENT_SEP))),
            seq($._statement, STATEMENT_SEP, $._statement_list)
        ),

        _statement: $ => choice(
            $.empty_statement,
            $.binding,
            $.if_no_else,
            $.import,

            $._expression_statement,
        ),

        empty_statement: $ => STATEMENT_SEP,

        binding: $ => seq('let', $.identifier, '=', $._expression),

        if_no_else: $ => seq('if', $._expression, $.block),

        import: $ => seq('import', $.module_path, optional($.symbol_list)),

        module_path: $ => seq($.identifier, optional(repeat(seq(MOD_PATH_SEP, $.identifier)))),

        symbol_list: $ => seq('{', optional($._symbol_list_symbols), '}'),

        _symbol_list_symbols: $ => choice(
            seq($.identifier, optional(LIST_SEP)),
            seq($.identifier, LIST_SEP, $._symbol_list_symbols),
        ),

        _expression_statement: $ => $._expression,

        _expression: $ => choice(
            $.block,
            $.if_else,
            $.keyword,

            $.identifier,

            // TODO: more expressions: infix, prefix, postfix, call, early
            //       exits, lists, maps, tuples, match, loops, subscripting, 

            $._grouping,
            $._literal,
        ),

        block: $ => seq('{', optional($._statement_list), '}'),

        if_else: $ => seq('if', $._expression, $.block, 'else', $.block),

        keyword: $ => token.immediate(':', $.identifier),

        _grouping: $ => seq('(', $._expression, ')'),

        _literal: $ => choice(
            $.unit_literal,
            $.bool_literal,
            $.int_literal,
            $.float_literal,
            $.hex_literal,
            $.bin_literal,
        ),

        unit_literal: $ => seq('(', ')'),

        // Lexical Structure
        //
        // Really don't love going back to regex here. :(

        // (XID_START | '_') (XID_CONTINUE | '_')*
        identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
        keyword: $ => /:[_\p{XID_Start}][_\p{XID_Continue}]*/,

        // 'true' | 'false'
        bool_literal: $ => choice('true', 'false'),

        // digit (digit | '_')*
        int_literal: $ => /\d[_\d]*/,

        // '0' ('x' | 'X') hex_digit (hex_digit | '_')*
        hex_literal: $ => /0[xX][_0123456789abcdefABCDEF][_0123456789abcdefABCDEF]*/,

        // '0' ('b' | 'B') bin_digit (bin_digit | '_')*
        bin_literal: $ => /0[bB][01][_01]*/,

        // digit (digit | '_')*                  // initial digits    
        //  ('.' digit (digit | '_')*)?          // fractional part
        //  (('e' | 'E') digit (digit | '_')*)?  // exponent part
        float_literal: $ => /\d[_\d]*(\.\d[_\d]*)?([eE]\d[_\d]*)/,

        _comment: $ => token(seq('//', /.*/)),
    },
});