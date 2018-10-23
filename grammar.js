num_val_template = (indicator, char_rule) => seq(
  indicator, repeat1(char_rule),
  optional(choice(
    repeat1(seq(".", repeat1(char_rule))),
    seq("-", repeat1(char_rule))
  ))
);

module.exports = grammar({
  name: 'abnf',

  extras: $ => [],

  // TODO: revisit conflicts
  conflicts: $ => [
    [$.concatenation],
    [$.c_wsp],
    [$.elements],
    [$.alternation]
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

    elements: $ => seq($.alternation, repeat($.c_wsp)),

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

    alternation: $ => seq(
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

    repetition: $ => seq(optional($.repeat), $.element),

    repeat: $ => choice(
      repeat1($.DIGIT),
      seq(repeat($.DIGIT), "*", repeat($.DIGIT))
    ),

    // NB: $.core_rulename isn't explicitly defined in RFC 5234.
    element: $ => choice(
      $.core_rulename,
      $.rulename, $.group, $.option,
      $.char_val, $.num_val, $.prose_val
    ),

    group: $ => seq("(", repeat($.c_wsp), $.alternation, repeat($.c_wsp), ")"),

    option: $ => seq("[", repeat($.c_wsp), $.alternation, repeat($.c_wsp), "]"),

    char_val: $ => seq($.DQUOTE, /[\x20-\x21\x23-\x7E]*/, $.DQUOTE),

    num_val: $ => seq("%", choice($.bin_val, $.dec_val, $.hex_val)),

    bin_val: $ => num_val_template("b", $.BIT),

    dec_val: $ => num_val_template("d", $.DIGIT),

    hex_val: $ => num_val_template("x", $.HEXDIG),

    prose_val: $ => seq("<", /[\x20-\x3D\x3F-\x7E]*/, ">"),

    // RFC 5234 doesn't define these as special rulenames; they just
    // happen to match the rulename rule. However, Appendix B defines
    // commonly used rules which use these rulenames and they are
    // implicitly used in many ABNF grammars.
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

    BIT: $ => choice("0", "1"),

    DIGIT: $ => /[0-9]/,

    CR: $ => "\r",

    CRLF: $ => seq($.CR, $.LF),

    DQUOTE: $ => "\"",

    HEXDIG: $ => choice($.DIGIT, "A", "B", "C", "D", "E", "F"),

    HTAB: $ => "\t",

    LF: $ => "\n",

    SP: $ => " ",

    VCHAR: $ => /[\x21-\x7E]/,

    WSP: $ => choice($.SP, $.HTAB)
  }
});
