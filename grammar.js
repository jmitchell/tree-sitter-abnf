module.exports = grammar({
  name: 'abnf',

  extras: $ => [],

  // TODO: revisit conflicts
  conflicts: $ => [
    [$.__concatenation]
  ],

  rules: {
    source_file: $ => seq('start = ', $.__alternation, '\r\n'),

    __alternation: $ => seq(
      $.__concatenation,
      repeat(seq(
        repeat(' '),
        "/",
        repeat(' '),
        $.__concatenation
      ))
    ),
    
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
