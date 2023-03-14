// A grammar for Kurt.
//
// The way I'm doing recursion in a lot of places here is the same approached
// used by [Swift][]. Specifically see the production 'array-literal' for how
// they do optional trailing separators in lists.
//
// [Swift] https://docs.swift.org/swift-book/ReferenceManual/Expressions.html

const PREC = {
    suffix: 22,
    prefix: 21,
    infix: 20,

    unit: 13,
    grouping: 12,
    tuple: 11,
    fn: 9,

    rec_elt: 5,
    early_exit: 4,

    let_pattern: 2,
    let_fn: 1,
    let_bind: 0,
};

const LEX = {
    // built in things like `=>` are higher precedence than user defined operators like `<=>`
    symbol: 8,
    op: 7,
    reserved: 6,
    identifier: 5,
    keyword: 4,
    string: 3,
    string_content: 2,
    interpolation: 1,
    whitespace: -1,
};

const sep1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

module.exports = grammar({
    name: 'kurt',

    extras: $ => [$._WHITESPACE, $._COMMENT],

    conflicts: $ => [
        [$._parameter, $._primary_expression],
        [$.let_bind, $._pattern],
    ],

    word: $ => $.ID,

    supertypes: $ => [
        $._statement,
        $._expression,
        $._literal,
    ],

    rules: {
        source_file: $ => optional($._statement_list),

        _statement_list: $ => seq($._statement, repeat(seq($._SEMICOLON, $._statement)), optional($._SEMICOLON)),

        _statement: $ => choice(
            $._expression,
            $._empty_statement,
            $._binding,
            $.import,
        ),

        import: $ => seq(
            $._IMPORT,
            $.module_path,
            optional($.import_list),
        ),

        module_path: $ => seq(
            $.ID,
            repeat(seq($._DOT, $.ID)),
        ),

        import_list: $ => seq(
            $._OPEN_BRACE,
            optional(sep1($._import_name, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_BRACE
        ),

        _import_name: $ => choice(
            $.ID,
            $.op_ref,
            $.star,
            $.rename,
            $.rename_op,
        ),

        op_ref: $ => seq($._OPEN_PAREN, choice($._OP, $._BANG, $._QUESTION), $._CLOSE_PAREN),
        star: $ => $._STAR,
        rename: $ => seq($.ID, $._AS, $.ID),
        rename_op: $ => seq($.op_ref, $._AS, $.op_ref),

        _binding: $ => choice(
            $.var_bind,
            $.let_bind,
            $.let_pattern,
            $.let_fn,
        ),

        var_bind: $ => seq(
            $._VAR,
            $.ID,
            $._EQ,
            $._expression,
        ),

        let_bind: $ => seq(
            $._LET,
            choice($.ID, $.op_ref),
            $._EQ,
            $._expression,
        ),

        let_pattern: $ => seq(
            $._LET,
            $.pattern,
            $._EQ,
            $._expression,
        ),

        let_fn: $ => seq(
            $._LET,
            choice($.ID, $.op_ref),
            $.parameter_list,
            $._DOUBLE_ARROW,
            $._expression,
        ),

        _empty_statement: $ => $._SEMICOLON,

        _expression: $ => choice(
            $._unary,
            $.infix,
            $._primary_expression,
        ),

        _unary: $ => choice(
            $.prefix,
            $._suffix,
        ),

        _suffix: $ => prec.left(choice(
            $.subscript,
            $.call,
            $.member,
            $.postfix,
        )),

        prefix: $ => prec.left(PREC.prefix, seq($.prefix_op, $._expression)),

        prefix_op: $ => prec.right(choice($._OP, $._BANG)),

        infix: $ => prec.left(PREC.infix, seq($._expression, $.infix_op, $._expression)),

        infix_op: $ => choice($._OP, $._AND, $._OR),

        postfix: $ => prec.left(PREC.suffix, seq($._expression, $.postfix_op)),

        postfix_op: $ => choice(
            $._BANG,
            $._QUESTION,
        ),

        subscript: $ => prec(PREC.suffix, seq(
            $._expression,
            $._OPEN_BRACKET,
            $._expression,
            $._CLOSE_BRACKET,
        )),

        member: $ => prec.left(PREC.suffix, seq(
            $._expression,
            $._DOT,
            $.ID
        )),

        call: $ => prec(PREC.suffix, seq(
            $._expression,
            $._OPEN_PAREN,
            optional(sep1($._argument, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_PAREN,
        )),

        _argument: $ => choice(
            $._element, // gives us x... arguments.
            $.keyword_argument,
        ),

        keyword_argument: $ => seq(
            $.ID,
            $._COLON,
            $._expression
        ),

        _primary_expression: $ => choice(
            $._literal,
            $.block,
            $.break,
            $.conditional,
            $.continue,
            $.fn,
            $.grouping,
            $.ID,
            $.list,
            $.loop,
            $.match,
            $.op_ref,
            $.record,
            $.return,
            $.tuple,
            $.while,
        ),

        match: $ => seq(
            $._MATCH,
            $._expression,
            $._match_arms,
        ),

        _match_arms: $ => seq(
            $._OPEN_BRACE,
            optional(sep1($.match_arm, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_BRACE,
        ),

        match_arm: $ => seq(
            $.pattern,
            // this isn't actually ambiguous with the closure one, since
            // patterns can't have `=>` -- we know the first one _must_ be the
            // match arm's.
            $._DOUBLE_ARROW,
            $._expression,
        ),

        // this is the general entry point into any pattern, but when it
        // recurses it will always use _pattern instead. 
        pattern: $ => $._pattern,

        _pattern: $ => choice(
            $.ID,
            $._literal,
            $.pat_rename,
            $.pat_rest,
            $.pat_list,
            $.pat_tuple,
            $.pat_grouping,
            $.pat_rec,
            $.pat_or
        ),

        pat_or: $ => prec.left(seq($._pattern, $._PIPE, $._pattern)),
        pat_rename: $ => seq($.ID, $._AS, $.ID),
        pat_rest: $ => prec(PREC.prefix, seq($._DOTS, optional($._pattern))),
        pat_list: $ => seq(
            $._OPEN_BRACKET,
            optional(sep1($._pattern, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_BRACKET,
        ),
        pat_grouping: $ => prec(PREC.grouping, seq($._OPEN_PAREN, $._pattern, $._CLOSE_PAREN)),
        pat_tuple: $ => prec(PREC.tuple, seq(
            $._OPEN_PAREN,
            optional(sep1($._pattern, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_PAREN,
        )),
        pat_rec: $ => prec(PREC.tuple, seq(
            $._OPEN_BRACE,
            optional(sep1($._pat_rec_elt, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_BRACE,
        )),

        _pat_rec_elt: $ => choice(
            $.ID,
            $.pat_rest,
            $.pat_pair,
        ),

        pat_pair: $ => seq(
            $.ID,
            $._COLON,
            $._pattern,
        ),

        return: $ => prec.left(PREC.early_exit, seq($._RETURN, optional($._expression))),
        break: $ => prec.left(PREC.early_exit, seq($._BREAK, optional($._expression))),
        continue: $ => prec.left(PREC.early_exit, seq($._CONTINUE, optional($._expression))),

        loop: $ => seq($._LOOP, $.block),

        while: $ => seq($._WHILE, $._expression, $.block),

        conditional: $ => seq(
            $._IF,
            $._expression,
            $.block,
            optional(seq(repeat($.elif), $._ELSE, $.block))
        ),

        elif: $ => seq($._ELSE, $._IF, $._expression, $.block),

        fn: $ => prec.right(PREC.fn, seq(
            choice($.bare_parameter, $.parameter_list),
            $._DOUBLE_ARROW,
            $._expression,
        )),

        bare_parameter: $ => $.ID,

        parameter_list: $ => seq(
            $._OPEN_PAREN,
            optional(sep1($._parameter, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_PAREN,
        ),

        _parameter: $ => choice(
            $.rest,
            $.ID,
            $.keyword_parameter,
        ),

        keyword_parameter: $ => seq(
            $.ID,
            $._COLON,
            $._expression,
        ),

        list: $ => seq(
            $._OPEN_BRACKET,
            optional(sep1($._element, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_BRACKET,
        ),

        tuple: $ => prec(PREC.tuple, seq(
            $._OPEN_PAREN,
            optional(sep1($._element, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_PAREN,
        )),

        _element: $ => choice($._expression, $.spread),

        spread: $ => prec(PREC.suffix, seq($._expression, $._DOTS)),
        rest: $ => prec(PREC.prefix, seq($._DOTS, $._expression)),

        block: $ => seq($._OPEN_BRACE, $._statement_list, $._CLOSE_BRACE),

        record: $ => seq(
            $._OPEN_BRACE,
            optional(sep1($._record_element, $._COMMA)),
            optional($._COMMA),
            $._CLOSE_BRACE
        ),

        _record_element: $ => choice(
            $.pun,
            $.pair,
            $.spread,
        ),

        pun: $ => prec(PREC.rec_elt, $.ID),
        pair: $ => prec(PREC.rec_elt, seq($._key, $._COLON, $._expression)),
        _key: $ => prec(PREC.rec_elt, choice($._literal, $.ID, $.computed_key)),

        computed_key: $ => $.block, // for now?

        grouping: $ => prec(PREC.grouping, seq($._OPEN_PAREN, $._expression, $._CLOSE_PAREN)),

        _literal: $ => choice(
            $.BIN,
            $.FALSE,
            $.FLOAT,
            $.HEX,
            $.INT,
            $.KEYWORD,
            $.TRUE,
            $.unit,
            $.string,
            $.char,
        ),

        unit: $ => prec(PREC.unit, seq($._OPEN_PAREN, $._CLOSE_PAREN)),

        // Strings and Characters

        string: $ => prec(LEX.string, seq(
            "\"",
            repeat(choice(
                $.interpolation,
                $.string_body,
                $.escape,
            )),
            token.immediate("\""),
        )),

        string_body: $ => prec(LEX.string_content, repeat1(choice(
            $._string_single_quote,
            $._string_not_escape,
        ))),

        interpolation: $ => prec(LEX.interpolation, seq(
            "\\",
            $._OPEN_PAREN,
            $._expression,
            $._CLOSE_PAREN,
        )),

        _string_single_quote: $ => token.immediate("\'"),

        char: $ => prec(LEX.string, seq(
            "'",
            $._char_content,
            token.immediate("'"),
        )),

        _char_content: $ => choice(
            $._char_double_quote,
            $._char_not_escape,
            $.escape,
        ),

        _escape: $ => $.escape,

        _char_double_quote: $ => token.immediate('"'),

        _string_not_escape: $ => token.immediate(prec(LEX.string_content, /[^\"\n\\]+/)),
        _char_not_escape: $ => token.immediate(prec(LEX.string_content, /[^\'\n\\]+/)),

        escape: $ => prec(LEX.string_content, seq(
            "\\",
            choice(
                $.c_style,
                $.byte,
                $.codepoint,
                $.interpolation,
            )
        )),

        c_style: $ => token.immediate(/[nrt\\0\'\"]/),

        byte: $ => token.immediate(seq(
            /[xX]/,
            token.immediate("{"),
            token.immediate(/[0123456789abcdefABCDEF][_0123456789abcdefABCDEF]*/),
            token.immediate("}"),
        )),

        codepoint: $ => token.immediate(seq(
            /[uU]/,
            token.immediate("{"),
            token.immediate(/[0123456789abcdefABCDEF][_0123456789abcdefABCDEF]*/),
            token.immediate("}"),
        )),

        // Lexical Structure

        _COMMENT: $ => token(seq('//', /.*/)),
        _WHITESPACE: $ => token(prec(LEX.whitespace, /\s+/)),

        _SEMICOLON: $ => token(prec(LEX.symbol, ';')),
        _COLON: $ => token(prec(LEX.symbol, ':')),
        _COMMA: $ => token(prec(LEX.symbol, ',')),
        _DOT: $ => token(prec(LEX.symbol, '.')),
        _ARROW: $ => token(prec(LEX.symbol, '->')),
        _DOTS: $ => token(prec(LEX.symbol, '...')),
        _DOUBLE_ARROW: $ => token(prec(LEX.symbol, '=>')),
        _EQ: $ => token(prec(LEX.symbol, "=")),
        _BANG: $ => token(prec(LEX.symbol, '!')),
        _QUESTION: $ => token(prec(LEX.symbol, '?')),
        _PIPE: $ => token(prec(LEX.symbol, '|')),
        _STAR: $ => token(prec(LEX.symbol, '*')),

        _OPEN_BRACE: $ => token(prec(LEX.symbol, '{')),
        _CLOSE_BRACE: $ => token(prec(LEX.symbol, '}')),
        _OPEN_BRACKET: $ => token(prec(LEX.symbol, '[')),
        _CLOSE_BRACKET: $ => token(prec(LEX.symbol, ']')),
        _OPEN_PAREN: $ => token(prec(LEX.symbol, '(')),
        _CLOSE_PAREN: $ => token(prec(LEX.symbol, ')')),

        _AND: $ => token(prec(LEX.reserved, 'and')),
        _AS: $ => token(prec(LEX.reserved, 'as')),
        _BREAK: $ => token(prec(LEX.reserved, 'break')),
        _CONTINUE: $ => token(prec(LEX.reserved, 'continue')),
        _ELSE: $ => token(prec(LEX.reserved, 'else')),
        _FOR: $ => token(prec(LEX.reserved, 'for')),
        _IF: $ => token(prec(LEX.reserved, 'if')),
        _IMPORT: $ => token(prec(LEX.reserved, 'import')),
        _IN: $ => token(prec(LEX.reserved, 'in')),
        _LET: $ => token(prec(LEX.reserved, 'let')),
        _LOOP: $ => token(prec(LEX.reserved, 'loop')),
        _MATCH: $ => token(prec(LEX.reserved, 'match')),
        _OR: $ => token(prec(LEX.reserved, 'or')),
        _RETURN: $ => token(prec(LEX.reserved, 'return')),
        _VAR: $ => token(prec(LEX.reserved, 'var')),
        _WHILE: $ => token(prec(LEX.reserved, 'while')),

        TRUE: $ => token(prec(LEX.reserved, 'true')),
        FALSE: $ => token(prec(LEX.reserved, 'false')),

        // (XID_START | '_') (XID_CONTINUE | '_')*
        ID: $ => token(prec(LEX.identifier, /[_\p{XID_Start}][_\p{XID_Continue}]*/)),

        _OP: $ => token(prec(LEX.op, /[@$%<>\-\|\^\&\*\+\|\\\~]+/)),

        // keyword: $ => /:[_\p{XID_Start}][_\p{XID_Continue}]*/,
        KEYWORD: $ => token(prec(LEX.keyword, /:[_\p{XID_Start}][_\p{XID_Continue}]*/)),

        // digit (digit | '_')*                  // initial digits    
        //  ('.' digit (digit | '_')*)?          // fractional part
        //  (('e' | 'E') digit (digit | '_')*)?  // exponent part
        FLOAT: $ => token(/\d[_\d]*(\.\d[_\d]*)?([eE]\d[_\d]*)/),

        // digit (digit | '_')*
        INT: $ => token(/\d[_\d]*/),

        // '0' ('x' | 'X') hex_digit (hex_digit | '_')*
        HEX: $ => token(/0[xX][0123456789abcdefABCDEF][_0123456789abcdefABCDEF]*/),

        // '0' ('o' | 'O') oct_digit (oct_digit | '_')*
        OCT: $ => token(/0[oO][01234567][_01234567]/),

        // '0' ('b' | 'B') bin_digit (bin_digit | '_')*
        BIN: $ => token(/0[bB][01][_01]*/),
    },
});