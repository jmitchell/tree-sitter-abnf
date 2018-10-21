module.exports = grammar({
  name: 'abnf',

  extras: $ => [],

  rules: {
    source_file: $ => seq('start = ', $.__concatenation, '\r\n'),

    __concatenation: $ => seq(
      $.core_rulename,
      repeat(seq(
        repeat1(' '),
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
    )
  }
});
