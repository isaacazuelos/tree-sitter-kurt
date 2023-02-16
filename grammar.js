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

const sep_by_trailing1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)), optional(sep));
const sep_by_trailing = (rule, sep) => choice(sep, optional(sep_by_trailing1(rule, sep)));

module.exports = grammar({
    name: 'kurt',

    extras: $ => [
        /\s/,
        $._comment,
    ],

    inline: $ => [
        $._expression,
        $._statement,
    ],

    conflicts: $ => [
        [$.block, $.empty_statement],
        [$.record, $.block],
        [$._record_item, $._expression_statement],
        [$.record_pun, $._expression_statement],
    ],

    rules: {
        source_file: $ => optional($._statement_list),

        _statement_list: $ => sep_by_trailing1($._statement, STATEMENT_SEP),

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

        module_path: $ => seq($.identifier, repeat(seq(MOD_PATH_SEP, $.identifier))),

        symbol_list: $ => seq('{', sep_by_trailing($._symbol, LIST_SEP), '}'),

        _symbol: $ => seq($.identifier, optional(seq('as', $.identifier))),

        _symbol_list_symbols: $ => choice(
            seq($.identifier, optional(LIST_SEP)),
            seq($.identifier, LIST_SEP, $._symbol_list_symbols),
        ),

        _expression_statement: $ => $._expression,

        _expression: $ => choice(
            $._grouping,
            $._literal,
            $.identifier,
            $.if_else,
            $.keyword,
            $.list,
            $.loop_for,
            $.loop_loop,
            $.loop_while,
            $.spread,
            $.subscript,
            $.tuple,
            $.unit_literal,
            $.early_exit,
            $.call,

            $.block,
            $.record

            // TODO: operators, fns, match

        ),

        record: $ => seq('{', sep_by_trailing($._record_item, LIST_SEP), '}'),

        _record_item: $ => choice(
            $.record_pair,
            $.record_pun,
            $.record_computed_key,
        ),

        record_pun: $ => $.identifier,
        record_pair: $ => seq($._record_key, ':', $._expression),
        record_computed_key: $ => seq('(', $._expression, ')', ':', $._expression),

        _record_key: $ => choice(
            $.identifier,
            $._literal,
        ),

        call: $ => prec.left(seq($._expression, '(', sep_by_trailing($._expression, LIST_SEP), ')')),

        early_exit: $ => prec.left(seq(choice('return', 'break', 'continue'), optional($._expression))),

        subscript: $ => seq($._expression, '[', $._expression, ']'),

        block: $ => seq(
            '{',
            sep_by_trailing($._statement, STATEMENT_SEP),
            '}'
        ),

        if_else: $ => seq('if', $._expression, $.block, 'else', $.block),

        keyword: $ => token.immediate(':', $.identifier),

        parameter_list: $ => seq('(', sep_by_trailing($.identifier, LIST_SEP), ')'),

        tuple: $ => choice(
            seq('(', ',', ')'),
            seq('(', $._expression, ',', ')'),
            seq('(', $._expression, repeat1(seq(',', $._expression)), optional(LIST_SEP), ')'),
        ),

        _grouping: $ => seq('(', $._expression, ')'),

        unit_literal: $ => seq('(', ')'),

        list: $ => seq('[', sep_by_trailing($._expression, LIST_SEP), ']'),

        loop_loop: $ => seq('loop', $.block),

        loop_while: $ => seq('while', $._expression, $.block),

        loop_for: $ => seq('for', $._expression, 'in', $._expression, $.block),

        spread: $ => seq($._expression, '...'),

        _literal: $ => choice(
            $.bool_literal,
            $.int_literal,
            $.float_literal,
            $.hex_literal,
            $.bin_literal,
        ),

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