module.exports = grammar({
  name: 'abnf',

  rules: {
    source_file: $ => seq('start = ', $.__concatenation),

    __concatenation: $ => repeat1($.core_rulename),

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
