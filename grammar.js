module.exports = grammar({
  name: 'abnf',

  extras: $ => [],

  // TODO: revisit conflicts
  conflicts: $ => [
    [$.concatenation],
    [$.c_wsp],
    [$.elements],
    [$.__alternation]
  ],

  rules: {
    source_file: $ => $.rulelist,

    rulelist: $ => repeat1(choice(
      $.rule,
      seq(repeat($.c_wsp), $.c_nl)
    )),

    rule: $ => seq($.rulename, $.defined_as, $.elements, $.c_nl),

    rulename: $ => seq(
      $.ALPHA,
      repeat(choice($.ALPHA, $.DIGIT, "-"))
    ),

    defined_as: $ => seq(
      repeat($.c_wsp),
      choice("=", "=/"),
      repeat($.c_wsp)
    ),

    elements: $ => seq($.__alternation, repeat($.c_wsp)),

    c_wsp: $ => choice(
      $.WSP,
      seq($.c_nl, $.WSP)
    ),

    c_nl: $ => choice($.comment, $.CRLF),

    comment: $ => seq(
      ";",
      repeat(choice($.WSP, $.VCHAR)),
      $.CRLF
    ),

    __alternation: $ => seq(
      $.concatenation,
      repeat(seq(
        $.c_wsp,
        "/",
        $.c_wsp,
        $.concatenation
      ))
    ),

    concatenation: $ => seq(
      $.repetition,
      repeat(seq(
        repeat1($.c_wsp),
        $.repetition
      ))
    ),

    repetition: $ => seq(optional($.repeat), $.__element),

    repeat: $ => choice(
      repeat1($.DIGIT),
      seq(repeat($.DIGIT), "*", repeat($.DIGIT))
    ),

    __element: $ => choice($.core_rulename, $.rulename),

    core_rulename: $ => choice(
      "ALPHA",
      "BIT",
      "CHAR",
      "CR",
      "CRLF",
      "CTL",
      "DIGIT",
      "DQUOTE",
      "HEXDIG",
      "HTAB",
      "LF",
      "LWSP",
      "OCTET",
      "SP",
      "VCHAR",
      "WSP"
    ),

    ALPHA: $ => /[A-Za-z]/,

    DIGIT: $ => /[0-9]/,

    CR: $ => "\r",

    CRLF: $ => seq($.CR, $.LF),

    HTAB: $ => "\t",

    LF: $ => "\n",

    SP: $ => " ",

    VCHAR: $ => /[\x21-\x7E]/,

    WSP: $ => choice($.SP, $.HTAB)
  }
});
