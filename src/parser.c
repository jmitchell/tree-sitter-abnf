#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 217
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_rulename = 1,
  anon_sym_EQ = 2,
  anon_sym_EQ_SLASH = 3,
  sym_comment = 4,
  anon_sym_SLASH = 5,
  anon_sym_STAR = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_PERCENTi = 11,
  anon_sym_PERCENTs = 12,
  aux_sym_quoted_string_token1 = 13,
  anon_sym_PERCENT = 14,
  anon_sym_b = 15,
  anon_sym_DOT = 16,
  anon_sym_DASH = 17,
  anon_sym_d = 18,
  anon_sym_x = 19,
  anon_sym_LT = 20,
  aux_sym_prose_val_token1 = 21,
  anon_sym_GT = 22,
  anon_sym_ALPHA = 23,
  anon_sym_BIT = 24,
  anon_sym_CHAR = 25,
  anon_sym_CR = 26,
  anon_sym_CRLF = 27,
  anon_sym_CTL = 28,
  anon_sym_DIGIT = 29,
  anon_sym_DQUOTE = 30,
  anon_sym_HEXDIG = 31,
  anon_sym_HTAB = 32,
  anon_sym_LF = 33,
  anon_sym_LWSP = 34,
  anon_sym_OCTET = 35,
  anon_sym_SP = 36,
  anon_sym_VCHAR = 37,
  anon_sym_WSP = 38,
  sym_ALPHA = 39,
  anon_sym_0 = 40,
  anon_sym_1 = 41,
  sym_DIGIT = 42,
  sym__CR = 43,
  sym__DQUOTE = 44,
  sym_HEXDIG = 45,
  sym__HTAB = 46,
  sym__LF = 47,
  sym__SP = 48,
  sym_VCHAR = 49,
  sym_source_file = 50,
  sym_rulelist = 51,
  sym_rule = 52,
  sym_defined_as = 53,
  sym_elements = 54,
  sym__c_wsp = 55,
  sym__c_nl = 56,
  sym_alternation = 57,
  sym_concatenation = 58,
  sym_repetition = 59,
  sym_repeat = 60,
  sym_element = 61,
  sym_group = 62,
  sym_option = 63,
  sym_char_val = 64,
  sym_case_insensitive_string = 65,
  sym_case_sensitive_string = 66,
  sym_quoted_string = 67,
  sym_num_val = 68,
  sym_bin_val = 69,
  sym_dec_val = 70,
  sym_hex_val = 71,
  sym_prose_val = 72,
  sym_core_rulename = 73,
  sym_BIT = 74,
  sym__CRLF = 75,
  sym__WSP = 76,
  aux_sym_rulelist_repeat1 = 77,
  aux_sym_rulelist_repeat2 = 78,
  aux_sym_alternation_repeat1 = 79,
  aux_sym_concatenation_repeat1 = 80,
  aux_sym_repeat_repeat1 = 81,
  aux_sym_bin_val_repeat1 = 82,
  aux_sym_bin_val_repeat2 = 83,
  aux_sym_dec_val_repeat1 = 84,
  aux_sym_hex_val_repeat1 = 85,
  aux_sym_hex_val_repeat2 = 86,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_rulename] = "rulename",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_SLASH] = "=/",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PERCENTi] = "%i",
  [anon_sym_PERCENTs] = "%s",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_b] = "b",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_d] = "d",
  [anon_sym_x] = "x",
  [anon_sym_LT] = "<",
  [aux_sym_prose_val_token1] = "prose_val_token1",
  [anon_sym_GT] = ">",
  [anon_sym_ALPHA] = "ALPHA",
  [anon_sym_BIT] = "BIT",
  [anon_sym_CHAR] = "CHAR",
  [anon_sym_CR] = "CR",
  [anon_sym_CRLF] = "CRLF",
  [anon_sym_CTL] = "CTL",
  [anon_sym_DIGIT] = "DIGIT",
  [anon_sym_DQUOTE] = "DQUOTE",
  [anon_sym_HEXDIG] = "HEXDIG",
  [anon_sym_HTAB] = "HTAB",
  [anon_sym_LF] = "LF",
  [anon_sym_LWSP] = "LWSP",
  [anon_sym_OCTET] = "OCTET",
  [anon_sym_SP] = "SP",
  [anon_sym_VCHAR] = "VCHAR",
  [anon_sym_WSP] = "WSP",
  [sym_ALPHA] = "ALPHA",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [sym_DIGIT] = "DIGIT",
  [sym__CR] = "_CR",
  [sym__DQUOTE] = "_DQUOTE",
  [sym_HEXDIG] = "HEXDIG",
  [sym__HTAB] = "_HTAB",
  [sym__LF] = "_LF",
  [sym__SP] = "_SP",
  [sym_VCHAR] = "VCHAR",
  [sym_source_file] = "source_file",
  [sym_rulelist] = "rulelist",
  [sym_rule] = "rule",
  [sym_defined_as] = "defined_as",
  [sym_elements] = "elements",
  [sym__c_wsp] = "_c_wsp",
  [sym__c_nl] = "_c_nl",
  [sym_alternation] = "alternation",
  [sym_concatenation] = "concatenation",
  [sym_repetition] = "repetition",
  [sym_repeat] = "repeat",
  [sym_element] = "element",
  [sym_group] = "group",
  [sym_option] = "option",
  [sym_char_val] = "char_val",
  [sym_case_insensitive_string] = "case_insensitive_string",
  [sym_case_sensitive_string] = "case_sensitive_string",
  [sym_quoted_string] = "quoted_string",
  [sym_num_val] = "num_val",
  [sym_bin_val] = "bin_val",
  [sym_dec_val] = "dec_val",
  [sym_hex_val] = "hex_val",
  [sym_prose_val] = "prose_val",
  [sym_core_rulename] = "core_rulename",
  [sym_BIT] = "BIT",
  [sym__CRLF] = "_CRLF",
  [sym__WSP] = "_WSP",
  [aux_sym_rulelist_repeat1] = "rulelist_repeat1",
  [aux_sym_rulelist_repeat2] = "rulelist_repeat2",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
  [aux_sym_repeat_repeat1] = "repeat_repeat1",
  [aux_sym_bin_val_repeat1] = "bin_val_repeat1",
  [aux_sym_bin_val_repeat2] = "bin_val_repeat2",
  [aux_sym_dec_val_repeat1] = "dec_val_repeat1",
  [aux_sym_hex_val_repeat1] = "hex_val_repeat1",
  [aux_sym_hex_val_repeat2] = "hex_val_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_rulename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTs] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prose_val_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALPHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CRLF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIGIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEXDIG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LWSP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OCTET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VCHAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WSP] = {
    .visible = true,
    .named = false,
  },
  [sym_ALPHA] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [sym_DIGIT] = {
    .visible = true,
    .named = true,
  },
  [sym__CR] = {
    .visible = false,
    .named = true,
  },
  [sym__DQUOTE] = {
    .visible = false,
    .named = true,
  },
  [sym_HEXDIG] = {
    .visible = true,
    .named = true,
  },
  [sym__HTAB] = {
    .visible = false,
    .named = true,
  },
  [sym__LF] = {
    .visible = false,
    .named = true,
  },
  [sym__SP] = {
    .visible = false,
    .named = true,
  },
  [sym_VCHAR] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rulelist] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_defined_as] = {
    .visible = true,
    .named = true,
  },
  [sym_elements] = {
    .visible = true,
    .named = true,
  },
  [sym__c_wsp] = {
    .visible = false,
    .named = true,
  },
  [sym__c_nl] = {
    .visible = false,
    .named = true,
  },
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_repetition] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_char_val] = {
    .visible = true,
    .named = true,
  },
  [sym_case_insensitive_string] = {
    .visible = true,
    .named = true,
  },
  [sym_case_sensitive_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_num_val] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_val] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_val] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_val] = {
    .visible = true,
    .named = true,
  },
  [sym_prose_val] = {
    .visible = true,
    .named = true,
  },
  [sym_core_rulename] = {
    .visible = true,
    .named = true,
  },
  [sym_BIT] = {
    .visible = true,
    .named = true,
  },
  [sym__CRLF] = {
    .visible = false,
    .named = true,
  },
  [sym__WSP] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_rulelist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rulelist_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repeat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_val_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dec_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_val_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_val_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '"')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == 'A')
        ADVANCE(20);
      if (lookahead == 'B')
        ADVANCE(21);
      if (lookahead == 'C')
        ADVANCE(22);
      if (lookahead == 'D')
        ADVANCE(23);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'L')
        ADVANCE(25);
      if (lookahead == 'O')
        ADVANCE(26);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead == 'V')
        ADVANCE(28);
      if (lookahead == 'W')
        ADVANCE(29);
      if (lookahead == '[')
        ADVANCE(30);
      if (lookahead == ']')
        ADVANCE(31);
      if (lookahead == 'b')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'F' ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('2' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (('!' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~'))
        ADVANCE(37);
      if (('G' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__HTAB);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__LF);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__CR);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__SP);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__DQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'i')
        ADVANCE(38);
      if (lookahead == 's')
        ADVANCE(39);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_VCHAR);
      if (lookahead == '\r')
        ADVANCE(40);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '~'))
        ADVANCE(41);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '/')
        ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'L')
        ADVANCE(43);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'I')
        ADVANCE(44);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'R')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(47);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'I')
        ADVANCE(48);
      if (lookahead == 'Q')
        ADVANCE(49);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'E')
        ADVANCE(50);
      if (lookahead == 'T')
        ADVANCE(51);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'F')
        ADVANCE(52);
      if (lookahead == 'W')
        ADVANCE(53);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'C')
        ADVANCE(54);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'P')
        ADVANCE(55);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'C')
        ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ALPHA);
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ALPHA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_DIGIT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_VCHAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PERCENTi);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENTs);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == '\r')
        ADVANCE(40);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '~'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_SLASH);
      END_STATE();
    case 43:
      if (lookahead == 'P')
        ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'T')
        ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'A')
        ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == 'L')
        ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'L')
        ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'G')
        ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'U')
        ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'X')
        ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'A')
        ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 53:
      if (lookahead == 'S')
        ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'T')
        ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 56:
      if (lookahead == 'H')
        ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'P')
        ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 59:
      if (lookahead == 'H')
        ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BIT);
      END_STATE();
    case 61:
      if (lookahead == 'R')
        ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'F')
        ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CTL);
      END_STATE();
    case 64:
      if (lookahead == 'I')
        ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'O')
        ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'D')
        ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'B')
        ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'P')
        ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'E')
        ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'A')
        ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_WSP);
      END_STATE();
    case 72:
      if (lookahead == 'A')
        ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CHAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CRLF);
      END_STATE();
    case 75:
      if (lookahead == 'T')
        ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'T')
        ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'I')
        ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_HTAB);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LWSP);
      END_STATE();
    case 80:
      if (lookahead == 'T')
        ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'R')
        ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ALPHA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DIGIT);
      END_STATE();
    case 84:
      if (lookahead == 'E')
        ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'G')
        ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_OCTET);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_VCHAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_HEXDIG);
      END_STATE();
    case 90:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '"')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(18);
      END_STATE();
    case 93:
      if (lookahead == '\n')
        ADVANCE(3);
      END_STATE();
    case 94:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '"')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == 'A')
        ADVANCE(95);
      if (lookahead == 'B')
        ADVANCE(96);
      if (lookahead == 'C')
        ADVANCE(97);
      if (lookahead == 'D')
        ADVANCE(98);
      if (lookahead == 'H')
        ADVANCE(99);
      if (lookahead == 'L')
        ADVANCE(100);
      if (lookahead == 'O')
        ADVANCE(101);
      if (lookahead == 'S')
        ADVANCE(102);
      if (lookahead == 'V')
        ADVANCE(103);
      if (lookahead == 'W')
        ADVANCE(104);
      if (lookahead == '[')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'L')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I')
        ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'H')
        ADVANCE(107);
      if (lookahead == 'R')
        ADVANCE(108);
      if (lookahead == 'T')
        ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I')
        ADVANCE(110);
      if (lookahead == 'Q')
        ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'E')
        ADVANCE(112);
      if (lookahead == 'T')
        ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'F')
        ADVANCE(114);
      if (lookahead == 'W')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'C')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P')
        ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'C')
        ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'S')
        ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P')
        ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T')
        ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A')
        ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == 'L')
        ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'L')
        ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'G')
        ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'U')
        ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'X')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A')
        ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'H')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'R')
        ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'F')
        ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_CTL);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I')
        ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'O')
        ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'D')
        ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'B')
        ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'P')
        ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'E')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_WSP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'A')
        ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CHAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_CRLF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'I')
        ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_HTAB);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LWSP);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'T')
        ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'R')
        ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ALPHA);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DIGIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'E')
        ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_rulename);
      if (lookahead == 'G')
        ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_OCTET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_VCHAR);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_HEXDIG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '"')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == 'A')
        ADVANCE(95);
      if (lookahead == 'B')
        ADVANCE(96);
      if (lookahead == 'C')
        ADVANCE(97);
      if (lookahead == 'D')
        ADVANCE(98);
      if (lookahead == 'H')
        ADVANCE(99);
      if (lookahead == 'L')
        ADVANCE(100);
      if (lookahead == 'O')
        ADVANCE(101);
      if (lookahead == 'S')
        ADVANCE(102);
      if (lookahead == 'V')
        ADVANCE(103);
      if (lookahead == 'W')
        ADVANCE(104);
      if (lookahead == '[')
        ADVANCE(30);
      if (lookahead == ']')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(91);
      END_STATE();
    case 152:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == ']')
        ADVANCE(31);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~'))
        ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'b')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(34);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_prose_val_token1);
      if ((' ' <= lookahead && lookahead <= '=') ||
          ('?' <= lookahead && lookahead <= '~'))
        ADVANCE(155);
      END_STATE();
    case 156:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == ']')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_HEXDIG);
      END_STATE();
    case 158:
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 159:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 160:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == ']')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 161:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == ']')
        ADVANCE(31);
      END_STATE();
    case 162:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '1')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(41);
      END_STATE();
    case 163:
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 94},
  [9] = {.lex_state = 90},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 151},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 94},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 152},
  [21] = {.lex_state = 152},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 153},
  [24] = {.lex_state = 90},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 155},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 90},
  [31] = {.lex_state = 152},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 152},
  [34] = {.lex_state = 90},
  [35] = {.lex_state = 152},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 152},
  [38] = {.lex_state = 152},
  [39] = {.lex_state = 94},
  [40] = {.lex_state = 94},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 90},
  [43] = {.lex_state = 152},
  [44] = {.lex_state = 154},
  [45] = {.lex_state = 156},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 156},
  [49] = {.lex_state = 156},
  [50] = {.lex_state = 90},
  [51] = {.lex_state = 152},
  [52] = {.lex_state = 156},
  [53] = {.lex_state = 152},
  [54] = {.lex_state = 158},
  [55] = {.lex_state = 152},
  [56] = {.lex_state = 154},
  [57] = {.lex_state = 159},
  [58] = {.lex_state = 94},
  [59] = {.lex_state = 94},
  [60] = {.lex_state = 159},
  [61] = {.lex_state = 159},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 152},
  [65] = {.lex_state = 152},
  [66] = {.lex_state = 90},
  [67] = {.lex_state = 94},
  [68] = {.lex_state = 152},
  [69] = {.lex_state = 152},
  [70] = {.lex_state = 94},
  [71] = {.lex_state = 94},
  [72] = {.lex_state = 94},
  [73] = {.lex_state = 152},
  [74] = {.lex_state = 90},
  [75] = {.lex_state = 152},
  [76] = {.lex_state = 156},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 156},
  [79] = {.lex_state = 156},
  [80] = {.lex_state = 152},
  [81] = {.lex_state = 156},
  [82] = {.lex_state = 94},
  [83] = {.lex_state = 152},
  [84] = {.lex_state = 156},
  [85] = {.lex_state = 159},
  [86] = {.lex_state = 152},
  [87] = {.lex_state = 152},
  [88] = {.lex_state = 156},
  [89] = {.lex_state = 152},
  [90] = {.lex_state = 90},
  [91] = {.lex_state = 152},
  [92] = {.lex_state = 156},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 159},
  [95] = {.lex_state = 159},
  [96] = {.lex_state = 152},
  [97] = {.lex_state = 159},
  [98] = {.lex_state = 94},
  [99] = {.lex_state = 152},
  [100] = {.lex_state = 159},
  [101] = {.lex_state = 152},
  [102] = {.lex_state = 152},
  [103] = {.lex_state = 94},
  [104] = {.lex_state = 152},
  [105] = {.lex_state = 94},
  [106] = {.lex_state = 152},
  [107] = {.lex_state = 152},
  [108] = {.lex_state = 94},
  [109] = {.lex_state = 160},
  [110] = {.lex_state = 161},
  [111] = {.lex_state = 156},
  [112] = {.lex_state = 156},
  [113] = {.lex_state = 152},
  [114] = {.lex_state = 156},
  [115] = {.lex_state = 156},
  [116] = {.lex_state = 94},
  [117] = {.lex_state = 94},
  [118] = {.lex_state = 156},
  [119] = {.lex_state = 90},
  [120] = {.lex_state = 90},
  [121] = {.lex_state = 152},
  [122] = {.lex_state = 159},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 152},
  [125] = {.lex_state = 152},
  [126] = {.lex_state = 152},
  [127] = {.lex_state = 156},
  [128] = {.lex_state = 156},
  [129] = {.lex_state = 156},
  [130] = {.lex_state = 152},
  [131] = {.lex_state = 159},
  [132] = {.lex_state = 162},
  [133] = {.lex_state = 163},
  [134] = {.lex_state = 159},
  [135] = {.lex_state = 152},
  [136] = {.lex_state = 159},
  [137] = {.lex_state = 159},
  [138] = {.lex_state = 94},
  [139] = {.lex_state = 94},
  [140] = {.lex_state = 159},
  [141] = {.lex_state = 152},
  [142] = {.lex_state = 94},
  [143] = {.lex_state = 90},
  [144] = {.lex_state = 90},
  [145] = {.lex_state = 156},
  [146] = {.lex_state = 160},
  [147] = {.lex_state = 152},
  [148] = {.lex_state = 152},
  [149] = {.lex_state = 156},
  [150] = {.lex_state = 161},
  [151] = {.lex_state = 156},
  [152] = {.lex_state = 156},
  [153] = {.lex_state = 156},
  [154] = {.lex_state = 156},
  [155] = {.lex_state = 152},
  [156] = {.lex_state = 94},
  [157] = {.lex_state = 159},
  [158] = {.lex_state = 159},
  [159] = {.lex_state = 152},
  [160] = {.lex_state = 152},
  [161] = {.lex_state = 152},
  [162] = {.lex_state = 152},
  [163] = {.lex_state = 156},
  [164] = {.lex_state = 156},
  [165] = {.lex_state = 152},
  [166] = {.lex_state = 90},
  [167] = {.lex_state = 90},
  [168] = {.lex_state = 159},
  [169] = {.lex_state = 159},
  [170] = {.lex_state = 152},
  [171] = {.lex_state = 152},
  [172] = {.lex_state = 159},
  [173] = {.lex_state = 162},
  [174] = {.lex_state = 156},
  [175] = {.lex_state = 156},
  [176] = {.lex_state = 163},
  [177] = {.lex_state = 159},
  [178] = {.lex_state = 152},
  [179] = {.lex_state = 94},
  [180] = {.lex_state = 152},
  [181] = {.lex_state = 160},
  [182] = {.lex_state = 160},
  [183] = {.lex_state = 156},
  [184] = {.lex_state = 161},
  [185] = {.lex_state = 161},
  [186] = {.lex_state = 156},
  [187] = {.lex_state = 156},
  [188] = {.lex_state = 156},
  [189] = {.lex_state = 156},
  [190] = {.lex_state = 159},
  [191] = {.lex_state = 159},
  [192] = {.lex_state = 152},
  [193] = {.lex_state = 152},
  [194] = {.lex_state = 156},
  [195] = {.lex_state = 156},
  [196] = {.lex_state = 159},
  [197] = {.lex_state = 159},
  [198] = {.lex_state = 159},
  [199] = {.lex_state = 162},
  [200] = {.lex_state = 162},
  [201] = {.lex_state = 159},
  [202] = {.lex_state = 163},
  [203] = {.lex_state = 163},
  [204] = {.lex_state = 159},
  [205] = {.lex_state = 160},
  [206] = {.lex_state = 160},
  [207] = {.lex_state = 161},
  [208] = {.lex_state = 161},
  [209] = {.lex_state = 156},
  [210] = {.lex_state = 156},
  [211] = {.lex_state = 159},
  [212] = {.lex_state = 159},
  [213] = {.lex_state = 162},
  [214] = {.lex_state = 162},
  [215] = {.lex_state = 163},
  [216] = {.lex_state = 163},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_DIGIT] = ACTIONS(1),
    [sym__LF] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_WSP] = ACTIONS(1),
    [anon_sym_PERCENTs] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_SLASH] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_HEXDIG] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__CR] = ACTIONS(1),
    [sym__SP] = ACTIONS(1),
    [sym_HEXDIG] = ACTIONS(1),
    [anon_sym_LWSP] = ACTIONS(1),
    [sym_ALPHA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_CRLF] = ACTIONS(1),
    [anon_sym_HTAB] = ACTIONS(1),
    [anon_sym_DIGIT] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_ALPHA] = ACTIONS(1),
    [sym__DQUOTE] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [sym__HTAB] = ACTIONS(1),
    [anon_sym_OCTET] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_VCHAR] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_VCHAR] = ACTIONS(1),
    [anon_sym_PERCENTi] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_CTL] = ACTIONS(1),
    [anon_sym_CHAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_BIT] = ACTIONS(1),
  },
  [1] = {
    [sym__CRLF] = STATE(6),
    [sym__WSP] = STATE(5),
    [sym_source_file] = STATE(4),
    [sym__c_wsp] = STATE(5),
    [sym__c_nl] = STATE(6),
    [aux_sym_rulelist_repeat1] = STATE(5),
    [aux_sym_rulelist_repeat2] = STATE(6),
    [sym_rulelist] = STATE(7),
    [sym_rule] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [sym_rulename] = ACTIONS(5),
    [sym__HTAB] = ACTIONS(7),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(7),
  },
  [2] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(10),
    [sym_defined_as] = STATE(11),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(10),
    [sym__c_wsp] = STATE(10),
    [sym__CR] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(15),
    [anon_sym_EQ_SLASH] = ACTIONS(17),
    [sym__SP] = ACTIONS(15),
  },
  [3] = {
    [sym__LF] = ACTIONS(19),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [5] = {
    [sym__c_nl] = STATE(14),
    [aux_sym_rulelist_repeat1] = STATE(15),
    [sym__CRLF] = STATE(14),
    [sym__WSP] = STATE(15),
    [sym__c_wsp] = STATE(15),
    [sym_comment] = ACTIONS(23),
    [sym__HTAB] = ACTIONS(25),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(25),
  },
  [6] = {
    [sym__c_nl] = STATE(16),
    [aux_sym_rulelist_repeat1] = STATE(5),
    [aux_sym_rulelist_repeat2] = STATE(16),
    [sym__CRLF] = STATE(16),
    [sym__WSP] = STATE(5),
    [sym_rule] = STATE(16),
    [sym__c_wsp] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
    [sym_rulename] = ACTIONS(5),
    [sym__HTAB] = ACTIONS(7),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(7),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [8] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(17),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(17),
    [sym__c_wsp] = STATE(17),
    [sym_DIGIT] = ACTIONS(33),
    [anon_sym_SP] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_WSP] = ACTIONS(35),
    [anon_sym_PERCENTs] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_CR] = ACTIONS(35),
    [anon_sym_HEXDIG] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(33),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(37),
    [anon_sym_LWSP] = ACTIONS(35),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_CRLF] = ACTIONS(35),
    [anon_sym_HTAB] = ACTIONS(35),
    [anon_sym_DIGIT] = ACTIONS(35),
    [anon_sym_ALPHA] = ACTIONS(35),
    [sym__DQUOTE] = ACTIONS(33),
    [sym__HTAB] = ACTIONS(37),
    [anon_sym_OCTET] = ACTIONS(35),
    [anon_sym_VCHAR] = ACTIONS(35),
    [anon_sym_PERCENTi] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_CTL] = ACTIONS(35),
    [anon_sym_CHAR] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_BIT] = ACTIONS(35),
  },
  [9] = {
    [sym__WSP] = STATE(13),
    [sym__HTAB] = ACTIONS(39),
    [sym__SP] = ACTIONS(39),
  },
  [10] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(19),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(19),
    [sym__c_wsp] = STATE(19),
    [sym__SP] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(41),
    [anon_sym_EQ_SLASH] = ACTIONS(45),
    [sym__CR] = ACTIONS(9),
  },
  [11] = {
    [sym_elements] = STATE(30),
    [sym_repetition] = STATE(31),
    [sym_repeat] = STATE(32),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [sym_alternation] = STATE(34),
    [sym_concatenation] = STATE(35),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LWSP] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_comment] = ACTIONS(69),
    [sym_rulename] = ACTIONS(69),
    [sym__HTAB] = ACTIONS(69),
    [sym__CR] = ACTIONS(69),
    [sym__SP] = ACTIONS(69),
  },
  [13] = {
    [sym_DIGIT] = ACTIONS(71),
    [anon_sym_SP] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_WSP] = ACTIONS(73),
    [anon_sym_PERCENTs] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_EQ_SLASH] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_CR] = ACTIONS(73),
    [anon_sym_HEXDIG] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(71),
    [sym__CR] = ACTIONS(71),
    [sym__SP] = ACTIONS(71),
    [anon_sym_LWSP] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
    [sym_rulename] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_CRLF] = ACTIONS(73),
    [anon_sym_HTAB] = ACTIONS(73),
    [anon_sym_DIGIT] = ACTIONS(73),
    [anon_sym_ALPHA] = ACTIONS(73),
    [sym__DQUOTE] = ACTIONS(71),
    [sym__HTAB] = ACTIONS(71),
    [anon_sym_OCTET] = ACTIONS(73),
    [anon_sym_VCHAR] = ACTIONS(73),
    [anon_sym_PERCENTi] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_CTL] = ACTIONS(73),
    [anon_sym_CHAR] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_BIT] = ACTIONS(73),
  },
  [14] = {
    [sym__WSP] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
    [sym_rulename] = ACTIONS(75),
    [sym__HTAB] = ACTIONS(75),
    [sym__CR] = ACTIONS(75),
    [sym__SP] = ACTIONS(75),
  },
  [15] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(15),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(15),
    [sym__c_wsp] = STATE(15),
    [sym_comment] = ACTIONS(77),
    [sym__HTAB] = ACTIONS(80),
    [sym__CR] = ACTIONS(83),
    [sym__SP] = ACTIONS(80),
  },
  [16] = {
    [sym__c_nl] = STATE(16),
    [aux_sym_rulelist_repeat1] = STATE(5),
    [aux_sym_rulelist_repeat2] = STATE(16),
    [sym__CRLF] = STATE(16),
    [sym__WSP] = STATE(5),
    [sym_rule] = STATE(16),
    [sym__c_wsp] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(86),
    [sym_rulename] = ACTIONS(89),
    [sym__HTAB] = ACTIONS(92),
    [sym__CR] = ACTIONS(95),
    [sym__SP] = ACTIONS(92),
  },
  [17] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [sym__c_wsp] = STATE(39),
    [sym_DIGIT] = ACTIONS(98),
    [anon_sym_SP] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_WSP] = ACTIONS(100),
    [anon_sym_PERCENTs] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(100),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_HEXDIG] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(98),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(100),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_CRLF] = ACTIONS(100),
    [anon_sym_HTAB] = ACTIONS(100),
    [anon_sym_DIGIT] = ACTIONS(100),
    [anon_sym_ALPHA] = ACTIONS(100),
    [sym__DQUOTE] = ACTIONS(98),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(100),
    [anon_sym_VCHAR] = ACTIONS(100),
    [anon_sym_PERCENTi] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_CTL] = ACTIONS(100),
    [anon_sym_CHAR] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_BIT] = ACTIONS(100),
  },
  [18] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(40),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(40),
    [sym__c_wsp] = STATE(40),
    [sym_DIGIT] = ACTIONS(98),
    [anon_sym_SP] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_WSP] = ACTIONS(100),
    [anon_sym_PERCENTs] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(100),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_HEXDIG] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(98),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(104),
    [anon_sym_LWSP] = ACTIONS(100),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_CRLF] = ACTIONS(100),
    [anon_sym_HTAB] = ACTIONS(100),
    [anon_sym_DIGIT] = ACTIONS(100),
    [anon_sym_ALPHA] = ACTIONS(100),
    [sym__DQUOTE] = ACTIONS(98),
    [sym__HTAB] = ACTIONS(104),
    [anon_sym_OCTET] = ACTIONS(100),
    [anon_sym_VCHAR] = ACTIONS(100),
    [anon_sym_PERCENTi] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_CTL] = ACTIONS(100),
    [anon_sym_CHAR] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_BIT] = ACTIONS(100),
  },
  [19] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(19),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(19),
    [sym__c_wsp] = STATE(19),
    [sym__SP] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(109),
    [sym_comment] = ACTIONS(77),
    [sym__HTAB] = ACTIONS(106),
    [anon_sym_EQ_SLASH] = ACTIONS(111),
    [sym__CR] = ACTIONS(83),
  },
  [20] = {
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(113),
    [sym__HTAB] = ACTIONS(113),
    [sym__CR] = ACTIONS(113),
    [sym__SP] = ACTIONS(113),
  },
  [21] = {
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
    [sym__HTAB] = ACTIONS(115),
    [sym__CR] = ACTIONS(115),
    [sym__SP] = ACTIONS(115),
  },
  [22] = {
    [aux_sym_repeat_repeat1] = STATE(41),
    [sym_DIGIT] = ACTIONS(117),
    [anon_sym_SP] = ACTIONS(119),
    [sym_rulename] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_CRLF] = ACTIONS(119),
    [anon_sym_HTAB] = ACTIONS(119),
    [anon_sym_DIGIT] = ACTIONS(119),
    [anon_sym_WSP] = ACTIONS(119),
    [anon_sym_ALPHA] = ACTIONS(119),
    [anon_sym_PERCENTs] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_OCTET] = ACTIONS(119),
    [sym__DQUOTE] = ACTIONS(121),
    [anon_sym_VCHAR] = ACTIONS(119),
    [anon_sym_CR] = ACTIONS(119),
    [anon_sym_HEXDIG] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_PERCENTi] = ACTIONS(121),
    [anon_sym_LWSP] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_CTL] = ACTIONS(119),
    [anon_sym_CHAR] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_BIT] = ACTIONS(119),
  },
  [23] = {
    [aux_sym_quoted_string_token1] = ACTIONS(123),
  },
  [24] = {
    [sym_quoted_string] = STATE(43),
    [sym__DQUOTE] = ACTIONS(55),
  },
  [25] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(47),
    [sym_alternation] = STATE(48),
    [sym_concatenation] = STATE(49),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(47),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(47),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(127),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(127),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [26] = {
    [sym_bin_val] = STATE(53),
    [sym_dec_val] = STATE(53),
    [sym_hex_val] = STATE(53),
    [anon_sym_d] = ACTIONS(129),
    [anon_sym_b] = ACTIONS(131),
    [anon_sym_x] = ACTIONS(133),
  },
  [27] = {
    [aux_sym_prose_val_token1] = ACTIONS(135),
  },
  [28] = {
    [sym_quoted_string] = STATE(55),
    [sym__DQUOTE] = ACTIONS(55),
  },
  [29] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(59),
    [sym_alternation] = STATE(60),
    [sym_concatenation] = STATE(61),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(59),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(59),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(139),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(139),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [30] = {
    [sym__c_nl] = STATE(62),
    [sym__CRLF] = STATE(62),
    [sym__CR] = ACTIONS(9),
    [sym_comment] = ACTIONS(141),
  },
  [31] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(63),
    [aux_sym_concatenation_repeat1] = STATE(64),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(63),
    [sym__c_wsp] = STATE(63),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [sym__HTAB] = ACTIONS(148),
    [sym__CR] = ACTIONS(151),
    [sym__SP] = ACTIONS(148),
  },
  [32] = {
    [sym_char_val] = STATE(21),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [sym_element] = STATE(65),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_option] = STATE(21),
    [anon_sym_SP] = ACTIONS(49),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [sym__DQUOTE] = ACTIONS(55),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LWSP] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [33] = {
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [sym_comment] = ACTIONS(154),
    [sym__HTAB] = ACTIONS(154),
    [sym__CR] = ACTIONS(154),
    [sym__SP] = ACTIONS(154),
  },
  [34] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(66),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(66),
    [sym__c_wsp] = STATE(66),
    [sym_comment] = ACTIONS(156),
    [sym__HTAB] = ACTIONS(158),
    [sym__CR] = ACTIONS(156),
    [sym__SP] = ACTIONS(158),
  },
  [35] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(68),
    [sym__c_wsp] = STATE(68),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(68),
    [aux_sym_alternation_repeat1] = STATE(69),
    [anon_sym_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(162),
    [sym__HTAB] = ACTIONS(165),
    [sym__CR] = ACTIONS(168),
    [sym__SP] = ACTIONS(165),
  },
  [36] = {
    [aux_sym_repeat_repeat1] = STATE(71),
    [sym_DIGIT] = ACTIONS(171),
    [anon_sym_SP] = ACTIONS(119),
    [sym_rulename] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_CRLF] = ACTIONS(119),
    [anon_sym_HTAB] = ACTIONS(119),
    [anon_sym_DIGIT] = ACTIONS(119),
    [anon_sym_WSP] = ACTIONS(119),
    [anon_sym_ALPHA] = ACTIONS(119),
    [anon_sym_PERCENTs] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_OCTET] = ACTIONS(119),
    [sym__DQUOTE] = ACTIONS(121),
    [anon_sym_VCHAR] = ACTIONS(119),
    [anon_sym_CR] = ACTIONS(119),
    [anon_sym_HEXDIG] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_PERCENTi] = ACTIONS(121),
    [anon_sym_LWSP] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_CTL] = ACTIONS(119),
    [anon_sym_CHAR] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_BIT] = ACTIONS(119),
  },
  [37] = {
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [sym__HTAB] = ACTIONS(175),
    [sym__CR] = ACTIONS(175),
    [sym__SP] = ACTIONS(175),
  },
  [38] = {
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [sym__HTAB] = ACTIONS(177),
    [sym__CR] = ACTIONS(177),
    [sym__SP] = ACTIONS(177),
  },
  [39] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [sym__c_wsp] = STATE(39),
    [sym_DIGIT] = ACTIONS(111),
    [anon_sym_SP] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_WSP] = ACTIONS(109),
    [anon_sym_PERCENTs] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_HEXDIG] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(111),
    [sym__CR] = ACTIONS(83),
    [sym__SP] = ACTIONS(179),
    [anon_sym_LWSP] = ACTIONS(109),
    [sym_comment] = ACTIONS(77),
    [sym_rulename] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_CRLF] = ACTIONS(109),
    [anon_sym_HTAB] = ACTIONS(109),
    [anon_sym_DIGIT] = ACTIONS(109),
    [anon_sym_ALPHA] = ACTIONS(109),
    [sym__DQUOTE] = ACTIONS(111),
    [sym__HTAB] = ACTIONS(179),
    [anon_sym_OCTET] = ACTIONS(109),
    [anon_sym_VCHAR] = ACTIONS(109),
    [anon_sym_PERCENTi] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_CTL] = ACTIONS(109),
    [anon_sym_CHAR] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_BIT] = ACTIONS(109),
  },
  [40] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [sym__c_wsp] = STATE(39),
    [sym_DIGIT] = ACTIONS(182),
    [anon_sym_SP] = ACTIONS(184),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_WSP] = ACTIONS(184),
    [anon_sym_PERCENTs] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_HEXDIG] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(182),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(184),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_CRLF] = ACTIONS(184),
    [anon_sym_HTAB] = ACTIONS(184),
    [anon_sym_DIGIT] = ACTIONS(184),
    [anon_sym_ALPHA] = ACTIONS(184),
    [sym__DQUOTE] = ACTIONS(182),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(184),
    [anon_sym_VCHAR] = ACTIONS(184),
    [anon_sym_PERCENTi] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_CTL] = ACTIONS(184),
    [anon_sym_CHAR] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_BIT] = ACTIONS(184),
  },
  [41] = {
    [aux_sym_repeat_repeat1] = STATE(72),
    [sym_DIGIT] = ACTIONS(186),
    [anon_sym_SP] = ACTIONS(188),
    [sym_rulename] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_CRLF] = ACTIONS(188),
    [anon_sym_HTAB] = ACTIONS(188),
    [anon_sym_DIGIT] = ACTIONS(188),
    [anon_sym_WSP] = ACTIONS(188),
    [anon_sym_ALPHA] = ACTIONS(188),
    [anon_sym_PERCENTs] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_OCTET] = ACTIONS(188),
    [sym__DQUOTE] = ACTIONS(190),
    [anon_sym_VCHAR] = ACTIONS(188),
    [anon_sym_CR] = ACTIONS(188),
    [anon_sym_HEXDIG] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_PERCENTi] = ACTIONS(190),
    [anon_sym_LWSP] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_CTL] = ACTIONS(188),
    [anon_sym_CHAR] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [anon_sym_BIT] = ACTIONS(188),
  },
  [42] = {
    [sym__DQUOTE] = ACTIONS(192),
  },
  [43] = {
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [sym_comment] = ACTIONS(194),
    [sym__HTAB] = ACTIONS(194),
    [sym__CR] = ACTIONS(194),
    [sym__SP] = ACTIONS(194),
  },
  [44] = {
    [sym_bin_val] = STATE(53),
    [sym_dec_val] = STATE(53),
    [sym_hex_val] = STATE(53),
    [anon_sym_d] = ACTIONS(196),
    [anon_sym_b] = ACTIONS(198),
    [anon_sym_x] = ACTIONS(200),
  },
  [45] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(77),
    [aux_sym_concatenation_repeat1] = STATE(78),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(77),
    [sym__c_wsp] = STATE(77),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [sym__HTAB] = ACTIONS(202),
    [sym__CR] = ACTIONS(151),
    [sym__SP] = ACTIONS(202),
  },
  [46] = {
    [sym_char_val] = STATE(21),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [sym_element] = STATE(65),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_option] = STATE(21),
    [anon_sym_SP] = ACTIONS(49),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [sym__DQUOTE] = ACTIONS(55),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LWSP] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [47] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_alternation] = STATE(79),
    [sym_concatenation] = STATE(49),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [48] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(81),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(81),
    [sym__c_wsp] = STATE(81),
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(207),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(207),
  },
  [49] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(83),
    [sym__c_wsp] = STATE(83),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(83),
    [aux_sym_alternation_repeat1] = STATE(84),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(211),
    [sym_comment] = ACTIONS(162),
    [sym__HTAB] = ACTIONS(213),
    [sym__CR] = ACTIONS(168),
    [sym__SP] = ACTIONS(213),
  },
  [50] = {
    [aux_sym_repeat_repeat1] = STATE(85),
    [sym_DIGIT] = ACTIONS(216),
  },
  [51] = {
    [sym_BIT] = STATE(87),
    [aux_sym_bin_val_repeat1] = STATE(87),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [52] = {
    [aux_sym_hex_val_repeat1] = STATE(88),
    [sym_HEXDIG] = ACTIONS(220),
  },
  [53] = {
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [sym_comment] = ACTIONS(222),
    [sym__HTAB] = ACTIONS(222),
    [sym__CR] = ACTIONS(222),
    [sym__SP] = ACTIONS(222),
  },
  [54] = {
    [anon_sym_GT] = ACTIONS(224),
  },
  [55] = {
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [sym_comment] = ACTIONS(226),
    [sym__HTAB] = ACTIONS(226),
    [sym__CR] = ACTIONS(226),
    [sym__SP] = ACTIONS(226),
  },
  [56] = {
    [sym_bin_val] = STATE(53),
    [sym_dec_val] = STATE(53),
    [sym_hex_val] = STATE(53),
    [anon_sym_d] = ACTIONS(228),
    [anon_sym_b] = ACTIONS(230),
    [anon_sym_x] = ACTIONS(232),
  },
  [57] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(93),
    [aux_sym_concatenation_repeat1] = STATE(94),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(93),
    [sym__c_wsp] = STATE(93),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym__SP] = ACTIONS(234),
    [sym_comment] = ACTIONS(145),
    [sym__HTAB] = ACTIONS(234),
    [sym__CR] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [58] = {
    [sym_char_val] = STATE(21),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [sym_element] = STATE(65),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_option] = STATE(21),
    [anon_sym_SP] = ACTIONS(49),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [sym__DQUOTE] = ACTIONS(55),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LWSP] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [59] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_alternation] = STATE(95),
    [sym_concatenation] = STATE(61),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [60] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(97),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(97),
    [sym__c_wsp] = STATE(97),
    [sym__SP] = ACTIONS(237),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(237),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(239),
  },
  [61] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(99),
    [sym__c_wsp] = STATE(99),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(99),
    [aux_sym_alternation_repeat1] = STATE(100),
    [sym__SP] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(244),
    [sym_comment] = ACTIONS(162),
    [sym__HTAB] = ACTIONS(241),
    [sym__CR] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(211),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_comment] = ACTIONS(246),
    [sym_rulename] = ACTIONS(246),
    [sym__HTAB] = ACTIONS(246),
    [sym__CR] = ACTIONS(246),
    [sym__SP] = ACTIONS(246),
  },
  [63] = {
    [sym_repetition] = STATE(101),
    [sym_repeat] = STATE(32),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [64] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(63),
    [aux_sym_concatenation_repeat1] = STATE(102),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(63),
    [sym__c_wsp] = STATE(63),
    [anon_sym_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(250),
    [sym__HTAB] = ACTIONS(253),
    [sym__CR] = ACTIONS(256),
    [sym__SP] = ACTIONS(253),
  },
  [65] = {
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [sym_comment] = ACTIONS(259),
    [sym__HTAB] = ACTIONS(259),
    [sym__CR] = ACTIONS(259),
    [sym__SP] = ACTIONS(259),
  },
  [66] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(15),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(15),
    [sym__c_wsp] = STATE(15),
    [sym_comment] = ACTIONS(261),
    [sym__HTAB] = ACTIONS(25),
    [sym__CR] = ACTIONS(261),
    [sym__SP] = ACTIONS(25),
  },
  [67] = {
    [sym_repetition] = STATE(31),
    [sym_repeat] = STATE(32),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(103),
    [sym_concatenation] = STATE(104),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(103),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(103),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(263),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(263),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [68] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(265),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(267),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(267),
  },
  [69] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(68),
    [sym__c_wsp] = STATE(68),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(68),
    [aux_sym_alternation_repeat1] = STATE(107),
    [anon_sym_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(269),
    [sym__HTAB] = ACTIONS(272),
    [sym__CR] = ACTIONS(275),
    [sym__SP] = ACTIONS(272),
  },
  [70] = {
    [aux_sym_repeat_repeat1] = STATE(108),
    [sym_DIGIT] = ACTIONS(278),
    [anon_sym_SP] = ACTIONS(188),
    [sym_rulename] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_CRLF] = ACTIONS(188),
    [anon_sym_HTAB] = ACTIONS(188),
    [anon_sym_DIGIT] = ACTIONS(188),
    [anon_sym_WSP] = ACTIONS(188),
    [anon_sym_ALPHA] = ACTIONS(188),
    [anon_sym_PERCENTs] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_OCTET] = ACTIONS(188),
    [sym__DQUOTE] = ACTIONS(190),
    [anon_sym_VCHAR] = ACTIONS(188),
    [anon_sym_CR] = ACTIONS(188),
    [anon_sym_HEXDIG] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_PERCENTi] = ACTIONS(190),
    [anon_sym_LWSP] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_CTL] = ACTIONS(188),
    [anon_sym_CHAR] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [anon_sym_BIT] = ACTIONS(188),
  },
  [71] = {
    [aux_sym_repeat_repeat1] = STATE(71),
    [sym_DIGIT] = ACTIONS(280),
    [anon_sym_SP] = ACTIONS(283),
    [sym_rulename] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_CRLF] = ACTIONS(283),
    [anon_sym_HTAB] = ACTIONS(283),
    [anon_sym_DIGIT] = ACTIONS(283),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_ALPHA] = ACTIONS(283),
    [anon_sym_PERCENTs] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(283),
    [anon_sym_OCTET] = ACTIONS(283),
    [anon_sym_WSP] = ACTIONS(283),
    [anon_sym_VCHAR] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_HEXDIG] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [sym__DQUOTE] = ACTIONS(285),
    [anon_sym_PERCENTi] = ACTIONS(285),
    [anon_sym_LWSP] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_CTL] = ACTIONS(283),
    [anon_sym_CHAR] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_BIT] = ACTIONS(283),
  },
  [72] = {
    [aux_sym_repeat_repeat1] = STATE(72),
    [sym_DIGIT] = ACTIONS(287),
    [anon_sym_SP] = ACTIONS(283),
    [sym_rulename] = ACTIONS(283),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CRLF] = ACTIONS(283),
    [anon_sym_HTAB] = ACTIONS(283),
    [anon_sym_DIGIT] = ACTIONS(283),
    [anon_sym_WSP] = ACTIONS(283),
    [anon_sym_ALPHA] = ACTIONS(283),
    [anon_sym_PERCENTs] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(283),
    [anon_sym_OCTET] = ACTIONS(283),
    [sym__DQUOTE] = ACTIONS(285),
    [anon_sym_VCHAR] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_HEXDIG] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_PERCENTi] = ACTIONS(285),
    [anon_sym_LWSP] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_CTL] = ACTIONS(283),
    [anon_sym_CHAR] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_BIT] = ACTIONS(283),
  },
  [73] = {
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_comment] = ACTIONS(290),
    [sym__HTAB] = ACTIONS(290),
    [sym__CR] = ACTIONS(290),
    [sym__SP] = ACTIONS(290),
  },
  [74] = {
    [aux_sym_repeat_repeat1] = STATE(109),
    [sym_DIGIT] = ACTIONS(292),
  },
  [75] = {
    [sym_BIT] = STATE(110),
    [aux_sym_bin_val_repeat1] = STATE(110),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [76] = {
    [aux_sym_hex_val_repeat1] = STATE(111),
    [sym_HEXDIG] = ACTIONS(294),
  },
  [77] = {
    [sym_repetition] = STATE(101),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [78] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(77),
    [aux_sym_concatenation_repeat1] = STATE(112),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(77),
    [sym__c_wsp] = STATE(77),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [sym_comment] = ACTIONS(250),
    [sym__HTAB] = ACTIONS(296),
    [sym__CR] = ACTIONS(256),
    [sym__SP] = ACTIONS(296),
  },
  [79] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(114),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(114),
    [sym__c_wsp] = STATE(114),
    [anon_sym_RBRACK] = ACTIONS(299),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(301),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(301),
  },
  [80] = {
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [sym_comment] = ACTIONS(303),
    [sym__HTAB] = ACTIONS(303),
    [sym__CR] = ACTIONS(303),
    [sym__SP] = ACTIONS(303),
  },
  [81] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(115),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(115),
    [sym__c_wsp] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(299),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(305),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(305),
  },
  [82] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(116),
    [sym_concatenation] = STATE(104),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(116),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(116),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(307),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(307),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [83] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(309),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(267),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(267),
  },
  [84] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(83),
    [sym__c_wsp] = STATE(83),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(83),
    [aux_sym_alternation_repeat1] = STATE(118),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym_comment] = ACTIONS(269),
    [sym__HTAB] = ACTIONS(313),
    [sym__CR] = ACTIONS(275),
    [sym__SP] = ACTIONS(313),
  },
  [85] = {
    [aux_sym_dec_val_repeat1] = STATE(121),
    [aux_sym_repeat_repeat1] = STATE(122),
    [anon_sym_SLASH] = ACTIONS(316),
    [sym_DIGIT] = ACTIONS(318),
    [sym_comment] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(320),
    [sym__CR] = ACTIONS(316),
    [sym__SP] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(322),
    [sym__HTAB] = ACTIONS(316),
  },
  [86] = {
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [sym_comment] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [sym__CR] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [sym__SP] = ACTIONS(324),
    [anon_sym_1] = ACTIONS(324),
    [sym__HTAB] = ACTIONS(324),
    [anon_sym_0] = ACTIONS(324),
  },
  [87] = {
    [aux_sym_bin_val_repeat1] = STATE(126),
    [sym_BIT] = STATE(126),
    [aux_sym_bin_val_repeat2] = STATE(125),
    [anon_sym_SLASH] = ACTIONS(326),
    [sym_comment] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(328),
    [sym__CR] = ACTIONS(326),
    [sym__SP] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(326),
    [anon_sym_0] = ACTIONS(218),
  },
  [88] = {
    [aux_sym_hex_val_repeat1] = STATE(129),
    [aux_sym_hex_val_repeat2] = STATE(130),
    [anon_sym_SLASH] = ACTIONS(332),
    [sym_comment] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(334),
    [sym__CR] = ACTIONS(332),
    [sym__SP] = ACTIONS(332),
    [sym_HEXDIG] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
    [sym__HTAB] = ACTIONS(332),
  },
  [89] = {
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [sym_comment] = ACTIONS(340),
    [sym__HTAB] = ACTIONS(340),
    [sym__CR] = ACTIONS(340),
    [sym__SP] = ACTIONS(340),
  },
  [90] = {
    [aux_sym_repeat_repeat1] = STATE(131),
    [sym_DIGIT] = ACTIONS(342),
  },
  [91] = {
    [sym_BIT] = STATE(132),
    [aux_sym_bin_val_repeat1] = STATE(132),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [92] = {
    [aux_sym_hex_val_repeat1] = STATE(133),
    [sym_HEXDIG] = ACTIONS(344),
  },
  [93] = {
    [sym_repetition] = STATE(101),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [94] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(93),
    [aux_sym_concatenation_repeat1] = STATE(134),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(93),
    [sym__c_wsp] = STATE(93),
    [anon_sym_SLASH] = ACTIONS(248),
    [sym__SP] = ACTIONS(346),
    [sym_comment] = ACTIONS(250),
    [sym__HTAB] = ACTIONS(346),
    [sym__CR] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(248),
  },
  [95] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(136),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(136),
    [sym__c_wsp] = STATE(136),
    [sym__SP] = ACTIONS(349),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(349),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(351),
  },
  [96] = {
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [sym_comment] = ACTIONS(353),
    [sym__HTAB] = ACTIONS(353),
    [sym__CR] = ACTIONS(353),
    [sym__SP] = ACTIONS(353),
  },
  [97] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(137),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(137),
    [sym__c_wsp] = STATE(137),
    [sym__SP] = ACTIONS(355),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(355),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(351),
  },
  [98] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(138),
    [sym_concatenation] = STATE(104),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(138),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(138),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(357),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(357),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [99] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(359),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(267),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(267),
  },
  [100] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(99),
    [sym__c_wsp] = STATE(99),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(99),
    [aux_sym_alternation_repeat1] = STATE(140),
    [sym__SP] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(244),
    [sym_comment] = ACTIONS(269),
    [sym__HTAB] = ACTIONS(361),
    [sym__CR] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(311),
  },
  [101] = {
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [sym_comment] = ACTIONS(364),
    [sym__HTAB] = ACTIONS(364),
    [sym__CR] = ACTIONS(364),
    [sym__SP] = ACTIONS(364),
  },
  [102] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(63),
    [aux_sym_concatenation_repeat1] = STATE(102),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(63),
    [sym__c_wsp] = STATE(63),
    [anon_sym_SLASH] = ACTIONS(364),
    [sym_comment] = ACTIONS(366),
    [sym__HTAB] = ACTIONS(369),
    [sym__CR] = ACTIONS(372),
    [sym__SP] = ACTIONS(369),
  },
  [103] = {
    [sym_repetition] = STATE(31),
    [sym_repeat] = STATE(32),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [104] = {
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [sym_comment] = ACTIONS(375),
    [sym__HTAB] = ACTIONS(375),
    [sym__CR] = ACTIONS(375),
    [sym__SP] = ACTIONS(375),
  },
  [105] = {
    [sym_repetition] = STATE(31),
    [sym_repeat] = STATE(32),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(142),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(142),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(142),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(377),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(377),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [106] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(77),
    [sym__HTAB] = ACTIONS(379),
    [sym__CR] = ACTIONS(83),
    [sym__SP] = ACTIONS(379),
  },
  [107] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(68),
    [sym__c_wsp] = STATE(68),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(68),
    [aux_sym_alternation_repeat1] = STATE(107),
    [anon_sym_SLASH] = ACTIONS(382),
    [sym_comment] = ACTIONS(385),
    [sym__HTAB] = ACTIONS(388),
    [sym__CR] = ACTIONS(391),
    [sym__SP] = ACTIONS(388),
  },
  [108] = {
    [aux_sym_repeat_repeat1] = STATE(72),
    [sym_DIGIT] = ACTIONS(186),
    [anon_sym_SP] = ACTIONS(394),
    [sym_rulename] = ACTIONS(394),
    [anon_sym_LF] = ACTIONS(394),
    [anon_sym_CRLF] = ACTIONS(394),
    [anon_sym_HTAB] = ACTIONS(394),
    [anon_sym_DIGIT] = ACTIONS(394),
    [anon_sym_WSP] = ACTIONS(394),
    [anon_sym_ALPHA] = ACTIONS(394),
    [anon_sym_PERCENTs] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(394),
    [anon_sym_OCTET] = ACTIONS(394),
    [sym__DQUOTE] = ACTIONS(396),
    [anon_sym_VCHAR] = ACTIONS(394),
    [anon_sym_CR] = ACTIONS(394),
    [anon_sym_HEXDIG] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_PERCENTi] = ACTIONS(396),
    [anon_sym_LWSP] = ACTIONS(394),
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_CTL] = ACTIONS(394),
    [anon_sym_CHAR] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_BIT] = ACTIONS(394),
  },
  [109] = {
    [aux_sym_dec_val_repeat1] = STATE(145),
    [aux_sym_repeat_repeat1] = STATE(146),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym_DIGIT] = ACTIONS(398),
    [sym_comment] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(400),
    [sym__CR] = ACTIONS(316),
    [sym__SP] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(402),
    [sym__HTAB] = ACTIONS(316),
  },
  [110] = {
    [aux_sym_bin_val_repeat1] = STATE(150),
    [sym_BIT] = STATE(150),
    [aux_sym_bin_val_repeat2] = STATE(149),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [sym_comment] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(404),
    [sym__CR] = ACTIONS(326),
    [sym__SP] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(406),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(326),
    [anon_sym_0] = ACTIONS(218),
  },
  [111] = {
    [aux_sym_hex_val_repeat1] = STATE(153),
    [aux_sym_hex_val_repeat2] = STATE(154),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym_comment] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(408),
    [sym__CR] = ACTIONS(332),
    [sym__SP] = ACTIONS(332),
    [sym_HEXDIG] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(412),
    [sym__HTAB] = ACTIONS(332),
  },
  [112] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(77),
    [aux_sym_concatenation_repeat1] = STATE(112),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(77),
    [sym__c_wsp] = STATE(77),
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(366),
    [sym__HTAB] = ACTIONS(414),
    [sym__CR] = ACTIONS(372),
    [sym__SP] = ACTIONS(414),
  },
  [113] = {
    [anon_sym_SLASH] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [sym_comment] = ACTIONS(417),
    [sym__HTAB] = ACTIONS(417),
    [sym__CR] = ACTIONS(417),
    [sym__SP] = ACTIONS(417),
  },
  [114] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(115),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(115),
    [sym__c_wsp] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(305),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(305),
  },
  [115] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(115),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(115),
    [sym__c_wsp] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_comment] = ACTIONS(77),
    [sym__HTAB] = ACTIONS(421),
    [sym__CR] = ACTIONS(83),
    [sym__SP] = ACTIONS(421),
  },
  [116] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [117] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(156),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(156),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(156),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(424),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(424),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [118] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(83),
    [sym__c_wsp] = STATE(83),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(83),
    [aux_sym_alternation_repeat1] = STATE(118),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_comment] = ACTIONS(385),
    [sym__HTAB] = ACTIONS(429),
    [sym__CR] = ACTIONS(391),
    [sym__SP] = ACTIONS(429),
  },
  [119] = {
    [aux_sym_repeat_repeat1] = STATE(157),
    [sym_DIGIT] = ACTIONS(432),
  },
  [120] = {
    [aux_sym_repeat_repeat1] = STATE(158),
    [sym_DIGIT] = ACTIONS(434),
  },
  [121] = {
    [aux_sym_dec_val_repeat1] = STATE(159),
    [anon_sym_SLASH] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(322),
    [sym_comment] = ACTIONS(436),
    [sym__HTAB] = ACTIONS(436),
    [sym__CR] = ACTIONS(436),
    [sym__SP] = ACTIONS(436),
  },
  [122] = {
    [aux_sym_repeat_repeat1] = STATE(122),
    [anon_sym_SLASH] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(438),
    [sym_comment] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
  },
  [123] = {
    [sym_BIT] = STATE(160),
    [aux_sym_bin_val_repeat1] = STATE(160),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [124] = {
    [sym_BIT] = STATE(161),
    [aux_sym_bin_val_repeat1] = STATE(161),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [125] = {
    [aux_sym_bin_val_repeat2] = STATE(162),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_DOT] = ACTIONS(330),
    [sym_comment] = ACTIONS(441),
    [sym__HTAB] = ACTIONS(441),
    [sym__CR] = ACTIONS(441),
    [sym__SP] = ACTIONS(441),
  },
  [126] = {
    [sym_BIT] = STATE(126),
    [aux_sym_bin_val_repeat1] = STATE(126),
    [anon_sym_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [127] = {
    [aux_sym_hex_val_repeat1] = STATE(163),
    [sym_HEXDIG] = ACTIONS(448),
  },
  [128] = {
    [aux_sym_hex_val_repeat1] = STATE(164),
    [sym_HEXDIG] = ACTIONS(450),
  },
  [129] = {
    [aux_sym_hex_val_repeat1] = STATE(129),
    [anon_sym_SLASH] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(454),
    [sym__SP] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
  },
  [130] = {
    [aux_sym_hex_val_repeat2] = STATE(165),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(338),
    [sym_comment] = ACTIONS(457),
    [sym__HTAB] = ACTIONS(457),
    [sym__CR] = ACTIONS(457),
    [sym__SP] = ACTIONS(457),
  },
  [131] = {
    [aux_sym_dec_val_repeat1] = STATE(168),
    [aux_sym_repeat_repeat1] = STATE(169),
    [anon_sym_SLASH] = ACTIONS(316),
    [sym_DIGIT] = ACTIONS(459),
    [sym_comment] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(461),
    [sym__CR] = ACTIONS(316),
    [sym__SP] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(463),
    [sym__HTAB] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
  },
  [132] = {
    [aux_sym_bin_val_repeat1] = STATE(173),
    [sym_BIT] = STATE(173),
    [aux_sym_bin_val_repeat2] = STATE(172),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [sym_comment] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(465),
    [sym__CR] = ACTIONS(326),
    [sym__SP] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(467),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(326),
    [anon_sym_0] = ACTIONS(218),
  },
  [133] = {
    [aux_sym_hex_val_repeat1] = STATE(176),
    [aux_sym_hex_val_repeat2] = STATE(177),
    [anon_sym_SLASH] = ACTIONS(332),
    [sym_comment] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(469),
    [sym__CR] = ACTIONS(332),
    [sym__SP] = ACTIONS(332),
    [sym_HEXDIG] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(473),
    [sym__HTAB] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
  },
  [134] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(93),
    [aux_sym_concatenation_repeat1] = STATE(134),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(93),
    [sym__c_wsp] = STATE(93),
    [anon_sym_SLASH] = ACTIONS(364),
    [sym__SP] = ACTIONS(475),
    [sym_comment] = ACTIONS(366),
    [sym__HTAB] = ACTIONS(475),
    [sym__CR] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(364),
  },
  [135] = {
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_comment] = ACTIONS(478),
    [sym__HTAB] = ACTIONS(478),
    [sym__CR] = ACTIONS(478),
    [sym__SP] = ACTIONS(478),
  },
  [136] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(137),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(137),
    [sym__c_wsp] = STATE(137),
    [sym__SP] = ACTIONS(355),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(355),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(480),
  },
  [137] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(137),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(137),
    [sym__c_wsp] = STATE(137),
    [sym__SP] = ACTIONS(482),
    [sym_comment] = ACTIONS(77),
    [sym__HTAB] = ACTIONS(482),
    [sym__CR] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(111),
  },
  [138] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [139] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(179),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(179),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(179),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(485),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(485),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [140] = {
    [sym__c_nl] = STATE(9),
    [aux_sym_rulelist_repeat1] = STATE(99),
    [sym__c_wsp] = STATE(99),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(99),
    [aux_sym_alternation_repeat1] = STATE(140),
    [anon_sym_SLASH] = ACTIONS(487),
    [sym__SP] = ACTIONS(490),
    [sym_comment] = ACTIONS(385),
    [sym__HTAB] = ACTIONS(490),
    [sym__CR] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(375),
  },
  [141] = {
    [anon_sym_SLASH] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [sym_comment] = ACTIONS(493),
    [sym__HTAB] = ACTIONS(493),
    [sym__CR] = ACTIONS(493),
    [sym__SP] = ACTIONS(493),
  },
  [142] = {
    [sym_repetition] = STATE(31),
    [sym_repeat] = STATE(32),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(180),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [143] = {
    [aux_sym_repeat_repeat1] = STATE(181),
    [sym_DIGIT] = ACTIONS(495),
  },
  [144] = {
    [aux_sym_repeat_repeat1] = STATE(182),
    [sym_DIGIT] = ACTIONS(497),
  },
  [145] = {
    [aux_sym_dec_val_repeat1] = STATE(183),
    [anon_sym_SLASH] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(402),
    [sym_comment] = ACTIONS(436),
    [sym__HTAB] = ACTIONS(436),
    [sym__CR] = ACTIONS(436),
    [sym__SP] = ACTIONS(436),
  },
  [146] = {
    [aux_sym_repeat_repeat1] = STATE(146),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(499),
    [sym_comment] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
  },
  [147] = {
    [sym_BIT] = STATE(184),
    [aux_sym_bin_val_repeat1] = STATE(184),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [148] = {
    [sym_BIT] = STATE(185),
    [aux_sym_bin_val_repeat1] = STATE(185),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [149] = {
    [aux_sym_bin_val_repeat2] = STATE(186),
    [anon_sym_SLASH] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_DOT] = ACTIONS(406),
    [sym_comment] = ACTIONS(441),
    [sym__HTAB] = ACTIONS(441),
    [sym__CR] = ACTIONS(441),
    [sym__SP] = ACTIONS(441),
  },
  [150] = {
    [sym_BIT] = STATE(150),
    [aux_sym_bin_val_repeat1] = STATE(150),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [151] = {
    [aux_sym_hex_val_repeat1] = STATE(187),
    [sym_HEXDIG] = ACTIONS(502),
  },
  [152] = {
    [aux_sym_hex_val_repeat1] = STATE(188),
    [sym_HEXDIG] = ACTIONS(504),
  },
  [153] = {
    [aux_sym_hex_val_repeat1] = STATE(153),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(506),
    [sym__SP] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
  },
  [154] = {
    [aux_sym_hex_val_repeat2] = STATE(189),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(412),
    [sym_comment] = ACTIONS(457),
    [sym__HTAB] = ACTIONS(457),
    [sym__CR] = ACTIONS(457),
    [sym__SP] = ACTIONS(457),
  },
  [155] = {
    [anon_sym_SLASH] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [sym_comment] = ACTIONS(509),
    [sym__HTAB] = ACTIONS(509),
    [sym__CR] = ACTIONS(509),
    [sym__SP] = ACTIONS(509),
  },
  [156] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(180),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [157] = {
    [aux_sym_repeat_repeat1] = STATE(190),
    [anon_sym_SLASH] = ACTIONS(511),
    [sym_DIGIT] = ACTIONS(513),
    [sym_comment] = ACTIONS(511),
    [sym__HTAB] = ACTIONS(511),
    [sym__CR] = ACTIONS(511),
    [sym__SP] = ACTIONS(511),
  },
  [158] = {
    [aux_sym_repeat_repeat1] = STATE(191),
    [anon_sym_SLASH] = ACTIONS(515),
    [sym__SP] = ACTIONS(515),
    [sym_DIGIT] = ACTIONS(517),
    [sym_comment] = ACTIONS(515),
    [sym__HTAB] = ACTIONS(515),
    [sym__CR] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
  },
  [159] = {
    [aux_sym_dec_val_repeat1] = STATE(159),
    [anon_sym_SLASH] = ACTIONS(515),
    [sym__SP] = ACTIONS(515),
    [sym_comment] = ACTIONS(515),
    [sym__HTAB] = ACTIONS(515),
    [sym__CR] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(519),
  },
  [160] = {
    [sym_BIT] = STATE(192),
    [aux_sym_bin_val_repeat1] = STATE(192),
    [anon_sym_SLASH] = ACTIONS(522),
    [anon_sym_0] = ACTIONS(218),
    [sym_comment] = ACTIONS(522),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(522),
    [sym__CR] = ACTIONS(522),
    [sym__SP] = ACTIONS(522),
  },
  [161] = {
    [sym_BIT] = STATE(193),
    [aux_sym_bin_val_repeat1] = STATE(193),
    [anon_sym_SLASH] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__CR] = ACTIONS(524),
    [sym__SP] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(218),
  },
  [162] = {
    [aux_sym_bin_val_repeat2] = STATE(162),
    [anon_sym_SLASH] = ACTIONS(524),
    [sym__SP] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__HTAB] = ACTIONS(524),
    [sym__CR] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(526),
  },
  [163] = {
    [aux_sym_hex_val_repeat1] = STATE(194),
    [anon_sym_SLASH] = ACTIONS(529),
    [sym_HEXDIG] = ACTIONS(531),
    [sym_comment] = ACTIONS(529),
    [sym__HTAB] = ACTIONS(529),
    [sym__CR] = ACTIONS(529),
    [sym__SP] = ACTIONS(529),
  },
  [164] = {
    [aux_sym_hex_val_repeat1] = STATE(195),
    [anon_sym_SLASH] = ACTIONS(533),
    [sym__SP] = ACTIONS(533),
    [sym_HEXDIG] = ACTIONS(535),
    [sym_comment] = ACTIONS(533),
    [sym__HTAB] = ACTIONS(533),
    [sym__CR] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(533),
  },
  [165] = {
    [aux_sym_hex_val_repeat2] = STATE(165),
    [anon_sym_SLASH] = ACTIONS(533),
    [sym__SP] = ACTIONS(533),
    [sym_comment] = ACTIONS(533),
    [sym__HTAB] = ACTIONS(533),
    [sym__CR] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(537),
  },
  [166] = {
    [aux_sym_repeat_repeat1] = STATE(196),
    [sym_DIGIT] = ACTIONS(540),
  },
  [167] = {
    [aux_sym_repeat_repeat1] = STATE(197),
    [sym_DIGIT] = ACTIONS(542),
  },
  [168] = {
    [aux_sym_dec_val_repeat1] = STATE(198),
    [anon_sym_SLASH] = ACTIONS(436),
    [sym__SP] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(463),
    [sym_comment] = ACTIONS(436),
    [sym__HTAB] = ACTIONS(436),
    [sym__CR] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(436),
  },
  [169] = {
    [aux_sym_repeat_repeat1] = STATE(169),
    [anon_sym_SLASH] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(544),
    [sym_comment] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [170] = {
    [sym_BIT] = STATE(199),
    [aux_sym_bin_val_repeat1] = STATE(199),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [171] = {
    [sym_BIT] = STATE(200),
    [aux_sym_bin_val_repeat1] = STATE(200),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_0] = ACTIONS(218),
  },
  [172] = {
    [aux_sym_bin_val_repeat2] = STATE(201),
    [anon_sym_SLASH] = ACTIONS(441),
    [sym__SP] = ACTIONS(441),
    [anon_sym_DOT] = ACTIONS(467),
    [sym_comment] = ACTIONS(441),
    [sym__HTAB] = ACTIONS(441),
    [sym__CR] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
  },
  [173] = {
    [sym_BIT] = STATE(173),
    [aux_sym_bin_val_repeat1] = STATE(173),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [anon_sym_DASH] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [174] = {
    [aux_sym_hex_val_repeat1] = STATE(202),
    [sym_HEXDIG] = ACTIONS(547),
  },
  [175] = {
    [aux_sym_hex_val_repeat1] = STATE(203),
    [sym_HEXDIG] = ACTIONS(549),
  },
  [176] = {
    [aux_sym_hex_val_repeat1] = STATE(176),
    [anon_sym_SLASH] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(551),
    [sym__SP] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
  },
  [177] = {
    [aux_sym_hex_val_repeat2] = STATE(204),
    [anon_sym_SLASH] = ACTIONS(457),
    [sym__SP] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(473),
    [sym_comment] = ACTIONS(457),
    [sym__HTAB] = ACTIONS(457),
    [sym__CR] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
  },
  [178] = {
    [anon_sym_SLASH] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_comment] = ACTIONS(554),
    [sym__HTAB] = ACTIONS(554),
    [sym__CR] = ACTIONS(554),
    [sym__SP] = ACTIONS(554),
  },
  [179] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(33),
    [sym_case_sensitive_string] = STATE(33),
    [sym_prose_val] = STATE(21),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(180),
    [sym_option] = STATE(21),
    [sym_char_val] = STATE(21),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(36),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(9),
    [sym_element] = STATE(37),
    [sym_group] = STATE(21),
    [sym_quoted_string] = STATE(38),
    [sym_num_val] = STATE(21),
    [sym_core_rulename] = STATE(21),
    [sym_DIGIT] = ACTIONS(47),
    [anon_sym_SP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(49),
    [anon_sym_PERCENTs] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_HEXDIG] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(63),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(102),
    [anon_sym_LWSP] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [sym_rulename] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_CRLF] = ACTIONS(49),
    [anon_sym_HTAB] = ACTIONS(49),
    [anon_sym_DIGIT] = ACTIONS(49),
    [anon_sym_ALPHA] = ACTIONS(49),
    [sym__DQUOTE] = ACTIONS(55),
    [sym__HTAB] = ACTIONS(102),
    [anon_sym_OCTET] = ACTIONS(49),
    [anon_sym_VCHAR] = ACTIONS(49),
    [anon_sym_PERCENTi] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(49),
    [anon_sym_CHAR] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BIT] = ACTIONS(49),
  },
  [180] = {
    [anon_sym_SLASH] = ACTIONS(556),
    [anon_sym_RBRACK] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym_comment] = ACTIONS(556),
    [sym__HTAB] = ACTIONS(556),
    [sym__CR] = ACTIONS(556),
    [sym__SP] = ACTIONS(556),
  },
  [181] = {
    [aux_sym_repeat_repeat1] = STATE(205),
    [anon_sym_SLASH] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym_DIGIT] = ACTIONS(558),
    [sym_comment] = ACTIONS(511),
    [sym__HTAB] = ACTIONS(511),
    [sym__CR] = ACTIONS(511),
    [sym__SP] = ACTIONS(511),
  },
  [182] = {
    [aux_sym_repeat_repeat1] = STATE(206),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_DIGIT] = ACTIONS(560),
    [sym_comment] = ACTIONS(515),
    [sym__CR] = ACTIONS(515),
    [sym__SP] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
    [sym__HTAB] = ACTIONS(515),
  },
  [183] = {
    [aux_sym_dec_val_repeat1] = STATE(183),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym__SP] = ACTIONS(515),
    [sym_comment] = ACTIONS(515),
    [sym__HTAB] = ACTIONS(515),
    [sym__CR] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(562),
  },
  [184] = {
    [sym_BIT] = STATE(207),
    [aux_sym_bin_val_repeat1] = STATE(207),
    [anon_sym_SLASH] = ACTIONS(522),
    [anon_sym_RBRACK] = ACTIONS(522),
    [sym_comment] = ACTIONS(522),
    [sym__CR] = ACTIONS(522),
    [sym__SP] = ACTIONS(522),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(522),
    [anon_sym_0] = ACTIONS(218),
  },
  [185] = {
    [sym_BIT] = STATE(208),
    [aux_sym_bin_val_repeat1] = STATE(208),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_RBRACK] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__CR] = ACTIONS(524),
    [sym__SP] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(218),
  },
  [186] = {
    [aux_sym_bin_val_repeat2] = STATE(186),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_RBRACK] = ACTIONS(524),
    [sym__SP] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__HTAB] = ACTIONS(524),
    [sym__CR] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(565),
  },
  [187] = {
    [aux_sym_hex_val_repeat1] = STATE(209),
    [anon_sym_SLASH] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_HEXDIG] = ACTIONS(568),
    [sym_comment] = ACTIONS(529),
    [sym__HTAB] = ACTIONS(529),
    [sym__CR] = ACTIONS(529),
    [sym__SP] = ACTIONS(529),
  },
  [188] = {
    [aux_sym_hex_val_repeat1] = STATE(210),
    [anon_sym_SLASH] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [sym_comment] = ACTIONS(533),
    [sym__CR] = ACTIONS(533),
    [sym__SP] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(533),
    [sym_HEXDIG] = ACTIONS(570),
    [sym__HTAB] = ACTIONS(533),
  },
  [189] = {
    [aux_sym_hex_val_repeat2] = STATE(189),
    [anon_sym_SLASH] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [sym__SP] = ACTIONS(533),
    [sym_comment] = ACTIONS(533),
    [sym__HTAB] = ACTIONS(533),
    [sym__CR] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(572),
  },
  [190] = {
    [aux_sym_repeat_repeat1] = STATE(190),
    [anon_sym_SLASH] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(575),
    [sym_comment] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
  },
  [191] = {
    [aux_sym_repeat_repeat1] = STATE(191),
    [anon_sym_SLASH] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(578),
    [sym__SP] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
  },
  [192] = {
    [sym_BIT] = STATE(192),
    [aux_sym_bin_val_repeat1] = STATE(192),
    [anon_sym_SLASH] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [193] = {
    [sym_BIT] = STATE(193),
    [aux_sym_bin_val_repeat1] = STATE(193),
    [anon_sym_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [194] = {
    [aux_sym_hex_val_repeat1] = STATE(194),
    [anon_sym_SLASH] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(581),
    [sym_comment] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [sym__SP] = ACTIONS(452),
  },
  [195] = {
    [aux_sym_hex_val_repeat1] = STATE(195),
    [anon_sym_SLASH] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(584),
    [sym__SP] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
  },
  [196] = {
    [aux_sym_repeat_repeat1] = STATE(211),
    [anon_sym_SLASH] = ACTIONS(511),
    [sym__SP] = ACTIONS(511),
    [sym_DIGIT] = ACTIONS(587),
    [sym_comment] = ACTIONS(511),
    [sym__HTAB] = ACTIONS(511),
    [sym__CR] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
  },
  [197] = {
    [aux_sym_repeat_repeat1] = STATE(212),
    [anon_sym_SLASH] = ACTIONS(515),
    [sym_DIGIT] = ACTIONS(589),
    [sym_comment] = ACTIONS(515),
    [sym__CR] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
    [sym__SP] = ACTIONS(515),
    [sym__HTAB] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
  },
  [198] = {
    [aux_sym_dec_val_repeat1] = STATE(198),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(591),
    [sym__SP] = ACTIONS(515),
    [sym_comment] = ACTIONS(515),
    [sym__HTAB] = ACTIONS(515),
    [sym__CR] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
  },
  [199] = {
    [sym_BIT] = STATE(213),
    [aux_sym_bin_val_repeat1] = STATE(213),
    [anon_sym_SLASH] = ACTIONS(522),
    [anon_sym_0] = ACTIONS(218),
    [sym_comment] = ACTIONS(522),
    [sym__CR] = ACTIONS(522),
    [sym__SP] = ACTIONS(522),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(522),
  },
  [200] = {
    [sym_BIT] = STATE(214),
    [aux_sym_bin_val_repeat1] = STATE(214),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_0] = ACTIONS(218),
    [sym_comment] = ACTIONS(524),
    [sym__CR] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [sym__SP] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
  },
  [201] = {
    [aux_sym_bin_val_repeat2] = STATE(201),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(594),
    [sym__SP] = ACTIONS(524),
    [sym_comment] = ACTIONS(524),
    [sym__HTAB] = ACTIONS(524),
    [sym__CR] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
  },
  [202] = {
    [aux_sym_hex_val_repeat1] = STATE(215),
    [anon_sym_SLASH] = ACTIONS(529),
    [sym__SP] = ACTIONS(529),
    [sym_HEXDIG] = ACTIONS(597),
    [sym_comment] = ACTIONS(529),
    [sym__HTAB] = ACTIONS(529),
    [sym__CR] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
  },
  [203] = {
    [aux_sym_hex_val_repeat1] = STATE(216),
    [anon_sym_SLASH] = ACTIONS(533),
    [sym_comment] = ACTIONS(533),
    [sym__CR] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(533),
    [sym__SP] = ACTIONS(533),
    [sym_HEXDIG] = ACTIONS(599),
    [sym__HTAB] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
  },
  [204] = {
    [aux_sym_hex_val_repeat2] = STATE(204),
    [anon_sym_SLASH] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(601),
    [sym__SP] = ACTIONS(533),
    [sym_comment] = ACTIONS(533),
    [sym__HTAB] = ACTIONS(533),
    [sym__CR] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
  },
  [205] = {
    [aux_sym_repeat_repeat1] = STATE(205),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(604),
    [sym_comment] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
  },
  [206] = {
    [aux_sym_repeat_repeat1] = STATE(206),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(607),
    [sym_comment] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
  },
  [207] = {
    [sym_BIT] = STATE(207),
    [aux_sym_bin_val_repeat1] = STATE(207),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [208] = {
    [sym_BIT] = STATE(208),
    [aux_sym_bin_val_repeat1] = STATE(208),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [209] = {
    [aux_sym_hex_val_repeat1] = STATE(209),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(610),
    [sym_comment] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [sym__SP] = ACTIONS(452),
  },
  [210] = {
    [aux_sym_hex_val_repeat1] = STATE(210),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(613),
    [sym__SP] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
  },
  [211] = {
    [aux_sym_repeat_repeat1] = STATE(211),
    [anon_sym_SLASH] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(616),
    [sym__SP] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [212] = {
    [aux_sym_repeat_repeat1] = STATE(212),
    [anon_sym_SLASH] = ACTIONS(285),
    [sym_DIGIT] = ACTIONS(619),
    [sym_comment] = ACTIONS(285),
    [sym__CR] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [sym__SP] = ACTIONS(285),
    [sym__HTAB] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [213] = {
    [sym_BIT] = STATE(213),
    [aux_sym_bin_val_repeat1] = STATE(213),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [214] = {
    [sym_BIT] = STATE(214),
    [aux_sym_bin_val_repeat1] = STATE(214),
    [anon_sym_SLASH] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_comment] = ACTIONS(443),
    [sym__CR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__SP] = ACTIONS(443),
    [anon_sym_1] = ACTIONS(445),
    [sym__HTAB] = ACTIONS(443),
    [anon_sym_0] = ACTIONS(445),
  },
  [215] = {
    [aux_sym_hex_val_repeat1] = STATE(215),
    [anon_sym_SLASH] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(622),
    [sym__SP] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
  },
  [216] = {
    [aux_sym_hex_val_repeat1] = STATE(216),
    [anon_sym_SLASH] = ACTIONS(452),
    [sym_comment] = ACTIONS(452),
    [sym__CR] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym_HEXDIG] = ACTIONS(625),
    [sym__SP] = ACTIONS(452),
    [sym__HTAB] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(6),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_rulelist, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_defined_as, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_defined_as, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(13),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, SHIFT(36),
  [49] = {.count = 1, .reusable = false}, SHIFT(20),
  [51] = {.count = 1, .reusable = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(24),
  [59] = {.count = 1, .reusable = true}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, SHIFT(26),
  [63] = {.count = 1, .reusable = true}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, SHIFT(28),
  [67] = {.count = 1, .reusable = true}, SHIFT(29),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__CRLF, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__c_wsp, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__c_wsp, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(15),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(3),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(16),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(2),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(5),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(3),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_defined_as, 2),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_defined_as, 2),
  [102] = {.count = 1, .reusable = true}, SHIFT(39),
  [104] = {.count = 1, .reusable = true}, SHIFT(40),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(19),
  [109] = {.count = 1, .reusable = false}, REDUCE(aux_sym_rulelist_repeat1, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_core_rulename, 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(41),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_repeat, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(42),
  [125] = {.count = 1, .reusable = false}, SHIFT(44),
  [127] = {.count = 1, .reusable = true}, SHIFT(47),
  [129] = {.count = 1, .reusable = true}, SHIFT(50),
  [131] = {.count = 1, .reusable = true}, SHIFT(51),
  [133] = {.count = 1, .reusable = true}, SHIFT(52),
  [135] = {.count = 1, .reusable = true}, SHIFT(54),
  [137] = {.count = 1, .reusable = false}, SHIFT(56),
  [139] = {.count = 1, .reusable = true}, SHIFT(59),
  [141] = {.count = 1, .reusable = true}, SHIFT(62),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 1),
  [145] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(9),
  [148] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(63),
  [151] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_char_val, 1),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_elements, 1),
  [158] = {.count = 1, .reusable = true}, SHIFT(66),
  [160] = {.count = 1, .reusable = true}, SHIFT(67),
  [162] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(9),
  [165] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(68),
  [168] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(3),
  [171] = {.count = 1, .reusable = true}, SHIFT(71),
  [173] = {.count = 1, .reusable = true}, SHIFT(70),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_repetition, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_case_insensitive_string, 1),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(39),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_defined_as, 3),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_defined_as, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(72),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_repeat, 2),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 2),
  [192] = {.count = 1, .reusable = true}, SHIFT(73),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_case_sensitive_string, 2),
  [196] = {.count = 1, .reusable = true}, SHIFT(74),
  [198] = {.count = 1, .reusable = true}, SHIFT(75),
  [200] = {.count = 1, .reusable = true}, SHIFT(76),
  [202] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(77),
  [205] = {.count = 1, .reusable = true}, SHIFT(80),
  [207] = {.count = 1, .reusable = true}, SHIFT(81),
  [209] = {.count = 1, .reusable = true}, SHIFT(82),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_alternation, 1),
  [213] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(83),
  [216] = {.count = 1, .reusable = true}, SHIFT(85),
  [218] = {.count = 1, .reusable = true}, SHIFT(86),
  [220] = {.count = 1, .reusable = true}, SHIFT(88),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_num_val, 2),
  [224] = {.count = 1, .reusable = true}, SHIFT(89),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_case_insensitive_string, 2),
  [228] = {.count = 1, .reusable = true}, SHIFT(90),
  [230] = {.count = 1, .reusable = true}, SHIFT(91),
  [232] = {.count = 1, .reusable = true}, SHIFT(92),
  [234] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(93),
  [237] = {.count = 1, .reusable = true}, SHIFT(97),
  [239] = {.count = 1, .reusable = true}, SHIFT(96),
  [241] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(99),
  [244] = {.count = 1, .reusable = true}, SHIFT(98),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 4),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 2),
  [250] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(9),
  [253] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(63),
  [256] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(3),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_repetition, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_elements, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(103),
  [265] = {.count = 1, .reusable = true}, SHIFT(105),
  [267] = {.count = 1, .reusable = true}, SHIFT(106),
  [269] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(9),
  [272] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(68),
  [275] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(3),
  [278] = {.count = 1, .reusable = true}, SHIFT(108),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(71),
  [283] = {.count = 1, .reusable = false}, REDUCE(aux_sym_repeat_repeat1, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(72),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_string, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(109),
  [294] = {.count = 1, .reusable = true}, SHIFT(111),
  [296] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(77),
  [299] = {.count = 1, .reusable = true}, SHIFT(113),
  [301] = {.count = 1, .reusable = true}, SHIFT(114),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_option, 3),
  [305] = {.count = 1, .reusable = true}, SHIFT(115),
  [307] = {.count = 1, .reusable = true}, SHIFT(116),
  [309] = {.count = 1, .reusable = true}, SHIFT(117),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_alternation, 2),
  [313] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(83),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_dec_val, 2),
  [318] = {.count = 1, .reusable = true}, SHIFT(122),
  [320] = {.count = 1, .reusable = true}, SHIFT(119),
  [322] = {.count = 1, .reusable = true}, SHIFT(120),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_BIT, 1),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_bin_val, 2),
  [328] = {.count = 1, .reusable = true}, SHIFT(123),
  [330] = {.count = 1, .reusable = true}, SHIFT(124),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_hex_val, 2),
  [334] = {.count = 1, .reusable = true}, SHIFT(127),
  [336] = {.count = 1, .reusable = true}, SHIFT(129),
  [338] = {.count = 1, .reusable = true}, SHIFT(128),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_prose_val, 3),
  [342] = {.count = 1, .reusable = true}, SHIFT(131),
  [344] = {.count = 1, .reusable = true}, SHIFT(133),
  [346] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(93),
  [349] = {.count = 1, .reusable = true}, SHIFT(136),
  [351] = {.count = 1, .reusable = true}, SHIFT(135),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [355] = {.count = 1, .reusable = true}, SHIFT(137),
  [357] = {.count = 1, .reusable = true}, SHIFT(138),
  [359] = {.count = 1, .reusable = true}, SHIFT(139),
  [361] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(99),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(9),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(63),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(3),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(142),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(106),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(67),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(9),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(68),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(3),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_repeat, 3),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 3),
  [398] = {.count = 1, .reusable = true}, SHIFT(146),
  [400] = {.count = 1, .reusable = true}, SHIFT(143),
  [402] = {.count = 1, .reusable = true}, SHIFT(144),
  [404] = {.count = 1, .reusable = true}, SHIFT(147),
  [406] = {.count = 1, .reusable = true}, SHIFT(148),
  [408] = {.count = 1, .reusable = true}, SHIFT(151),
  [410] = {.count = 1, .reusable = true}, SHIFT(153),
  [412] = {.count = 1, .reusable = true}, SHIFT(152),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(77),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_option, 4),
  [419] = {.count = 1, .reusable = true}, SHIFT(155),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(115),
  [424] = {.count = 1, .reusable = true}, SHIFT(156),
  [426] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(82),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(83),
  [432] = {.count = 1, .reusable = true}, SHIFT(157),
  [434] = {.count = 1, .reusable = true}, SHIFT(158),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_dec_val, 3),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(122),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_bin_val, 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bin_val_repeat1, 2),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat1, 2), SHIFT_REPEAT(86),
  [448] = {.count = 1, .reusable = true}, SHIFT(163),
  [450] = {.count = 1, .reusable = true}, SHIFT(164),
  [452] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(129),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_hex_val, 3),
  [459] = {.count = 1, .reusable = true}, SHIFT(169),
  [461] = {.count = 1, .reusable = true}, SHIFT(166),
  [463] = {.count = 1, .reusable = true}, SHIFT(167),
  [465] = {.count = 1, .reusable = true}, SHIFT(170),
  [467] = {.count = 1, .reusable = true}, SHIFT(171),
  [469] = {.count = 1, .reusable = true}, SHIFT(174),
  [471] = {.count = 1, .reusable = true}, SHIFT(176),
  [473] = {.count = 1, .reusable = true}, SHIFT(175),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(93),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_group, 4),
  [480] = {.count = 1, .reusable = true}, SHIFT(178),
  [482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(137),
  [485] = {.count = 1, .reusable = true}, SHIFT(179),
  [487] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(98),
  [490] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(99),
  [493] = {.count = 1, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(181),
  [497] = {.count = 1, .reusable = true}, SHIFT(182),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(146),
  [502] = {.count = 1, .reusable = true}, SHIFT(187),
  [504] = {.count = 1, .reusable = true}, SHIFT(188),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(153),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_option, 5),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_dec_val, 4),
  [513] = {.count = 1, .reusable = true}, SHIFT(190),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2),
  [517] = {.count = 1, .reusable = true}, SHIFT(191),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(120),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_bin_val, 4),
  [524] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(124),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_hex_val, 4),
  [531] = {.count = 1, .reusable = true}, SHIFT(194),
  [533] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2),
  [535] = {.count = 1, .reusable = true}, SHIFT(195),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(128),
  [540] = {.count = 1, .reusable = true}, SHIFT(196),
  [542] = {.count = 1, .reusable = true}, SHIFT(197),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(169),
  [547] = {.count = 1, .reusable = true}, SHIFT(202),
  [549] = {.count = 1, .reusable = true}, SHIFT(203),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(176),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_group, 5),
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 4),
  [558] = {.count = 1, .reusable = true}, SHIFT(205),
  [560] = {.count = 1, .reusable = true}, SHIFT(206),
  [562] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(144),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(148),
  [568] = {.count = 1, .reusable = true}, SHIFT(209),
  [570] = {.count = 1, .reusable = true}, SHIFT(210),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(152),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(190),
  [578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(191),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(194),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(195),
  [587] = {.count = 1, .reusable = true}, SHIFT(211),
  [589] = {.count = 1, .reusable = true}, SHIFT(212),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(167),
  [594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(171),
  [597] = {.count = 1, .reusable = true}, SHIFT(215),
  [599] = {.count = 1, .reusable = true}, SHIFT(216),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(175),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(205),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(206),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(209),
  [613] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(210),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(211),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(212),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(215),
  [625] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(216),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_abnf() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
