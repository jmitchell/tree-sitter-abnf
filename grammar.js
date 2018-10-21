module.exports = grammar({
  name: 'abnf',

  extras: $ => [],

  // TODO: revisit conflicts
  conflicts: $ => [
    [$.__concatenation]
  ],

  rules: {
    source_file: $ => seq('start = ', $.__alternation, '\r\n'),

    __c_wsp: $ => choice(
      $.WSP,
      seq($.__c_nl, $.WSP)
    ),

    __c_nl: $ => $.CRLF,
    
    __alternation: $ => seq(
      $.__concatenation,
      repeat(seq(
        $.__c_wsp,
        "/",
        $.__c_wsp,
        $.__concatenation
      ))
    ),
    
    __concatenation: $ => seq(
      $.core_rulename,
      repeat(seq(
        repeat1($.__c_wsp),
        $.core_rulename
      ))
    ),

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

    CR: $ => "\r",

    CRLF: $ => seq($.CR, $.LF),
    
    HTAB: $ => "\t",

    LF: $ => "\n",
    
    SP: $ => " ",

    WSP: $ => choice($.SP, $.HTAB)
  }
});
