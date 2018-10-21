module.exports = grammar({
  name: 'abnf',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => 'hello'
  }
});
