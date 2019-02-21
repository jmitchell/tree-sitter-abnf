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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(4);
      if (lookahead == ' ')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
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
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 94},
  [11] = {.lex_state = 151},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 90},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 94},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 152},
  [20] = {.lex_state = 152},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 153},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 94},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 155},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 90},
  [30] = {.lex_state = 152},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 152},
  [33] = {.lex_state = 90},
  [34] = {.lex_state = 152},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 152},
  [37] = {.lex_state = 152},
  [38] = {.lex_state = 94},
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
    [aux_sym_rulelist_repeat1] = STATE(9),
    [sym_defined_as] = STATE(10),
    [sym__CRLF] = STATE(9),
    [sym__WSP] = STATE(9),
    [sym__c_wsp] = STATE(9),
    [sym__CR] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__HTAB] = ACTIONS(13),
    [anon_sym_EQ_SLASH] = ACTIONS(15),
    [sym__SP] = ACTIONS(13),
  },
  [3] = {
    [sym__LF] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [5] = {
    [sym__c_nl] = STATE(12),
    [aux_sym_rulelist_repeat1] = STATE(13),
    [sym__CRLF] = STATE(12),
    [sym__WSP] = STATE(13),
    [sym__c_wsp] = STATE(13),
    [sym_comment] = ACTIONS(21),
    [sym__HTAB] = ACTIONS(23),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(23),
  },
  [6] = {
    [sym__c_nl] = STATE(14),
    [aux_sym_rulelist_repeat1] = STATE(5),
    [aux_sym_rulelist_repeat2] = STATE(14),
    [sym__CRLF] = STATE(14),
    [sym__WSP] = STATE(5),
    [sym_rule] = STATE(14),
    [sym__c_wsp] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [sym_rulename] = ACTIONS(5),
    [sym__HTAB] = ACTIONS(7),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(7),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [8] = {
    [sym__c_nl] = STATE(16),
    [aux_sym_rulelist_repeat1] = STATE(16),
    [sym__CRLF] = STATE(16),
    [sym__WSP] = STATE(16),
    [sym__c_wsp] = STATE(16),
    [sym_DIGIT] = ACTIONS(31),
    [anon_sym_SP] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_WSP] = ACTIONS(33),
    [anon_sym_PERCENTs] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_CR] = ACTIONS(33),
    [anon_sym_HEXDIG] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(31),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(37),
    [anon_sym_LWSP] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
    [sym_rulename] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_CRLF] = ACTIONS(33),
    [anon_sym_HTAB] = ACTIONS(33),
    [anon_sym_DIGIT] = ACTIONS(33),
    [anon_sym_ALPHA] = ACTIONS(33),
    [sym__DQUOTE] = ACTIONS(31),
    [sym__HTAB] = ACTIONS(37),
    [anon_sym_OCTET] = ACTIONS(33),
    [anon_sym_VCHAR] = ACTIONS(33),
    [anon_sym_PERCENTi] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_CTL] = ACTIONS(33),
    [anon_sym_CHAR] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_BIT] = ACTIONS(33),
  },
  [9] = {
    [sym__c_nl] = STATE(18),
    [aux_sym_rulelist_repeat1] = STATE(18),
    [sym__CRLF] = STATE(18),
    [sym__WSP] = STATE(18),
    [sym__c_wsp] = STATE(18),
    [sym__SP] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(41),
    [sym_comment] = ACTIONS(39),
    [sym__HTAB] = ACTIONS(39),
    [anon_sym_EQ_SLASH] = ACTIONS(43),
    [sym__CR] = ACTIONS(9),
  },
  [10] = {
    [sym_elements] = STATE(29),
    [sym_repetition] = STATE(30),
    [sym_repeat] = STATE(31),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [sym_alternation] = STATE(33),
    [sym_concatenation] = STATE(34),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LWSP] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [11] = {
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
    [sym_rulename] = ACTIONS(67),
    [sym__CR] = ACTIONS(67),
    [sym__SP] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(69),
    [sym__HTAB] = ACTIONS(67),
    [anon_sym_EQ_SLASH] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
    [sym_rulename] = ACTIONS(71),
    [sym__HTAB] = ACTIONS(71),
    [sym__CR] = ACTIONS(71),
    [sym__SP] = ACTIONS(71),
  },
  [13] = {
    [sym__c_nl] = STATE(13),
    [aux_sym_rulelist_repeat1] = STATE(13),
    [sym__CRLF] = STATE(13),
    [sym__WSP] = STATE(13),
    [sym__c_wsp] = STATE(13),
    [sym_comment] = ACTIONS(73),
    [sym__HTAB] = ACTIONS(73),
    [sym__CR] = ACTIONS(76),
    [sym__SP] = ACTIONS(73),
  },
  [14] = {
    [sym__c_nl] = STATE(14),
    [aux_sym_rulelist_repeat1] = STATE(5),
    [aux_sym_rulelist_repeat2] = STATE(14),
    [sym__CRLF] = STATE(14),
    [sym__WSP] = STATE(5),
    [sym_rule] = STATE(14),
    [sym__c_wsp] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(79),
    [sym_rulename] = ACTIONS(82),
    [sym__HTAB] = ACTIONS(85),
    [sym__CR] = ACTIONS(88),
    [sym__SP] = ACTIONS(85),
  },
  [15] = {
    [sym__LF] = ACTIONS(91),
  },
  [16] = {
    [sym__c_nl] = STATE(39),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [sym__c_wsp] = STATE(39),
    [sym_DIGIT] = ACTIONS(93),
    [anon_sym_SP] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_WSP] = ACTIONS(95),
    [anon_sym_PERCENTs] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_CR] = ACTIONS(95),
    [anon_sym_HEXDIG] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(93),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(95),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_CRLF] = ACTIONS(95),
    [anon_sym_HTAB] = ACTIONS(95),
    [anon_sym_DIGIT] = ACTIONS(95),
    [anon_sym_ALPHA] = ACTIONS(95),
    [sym__DQUOTE] = ACTIONS(93),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(95),
    [anon_sym_VCHAR] = ACTIONS(95),
    [anon_sym_PERCENTi] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_CTL] = ACTIONS(95),
    [anon_sym_CHAR] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_BIT] = ACTIONS(95),
  },
  [17] = {
    [sym__c_nl] = STATE(40),
    [aux_sym_rulelist_repeat1] = STATE(40),
    [sym__CRLF] = STATE(40),
    [sym__WSP] = STATE(40),
    [sym__c_wsp] = STATE(40),
    [sym_DIGIT] = ACTIONS(93),
    [anon_sym_SP] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_WSP] = ACTIONS(95),
    [anon_sym_PERCENTs] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_CR] = ACTIONS(95),
    [anon_sym_HEXDIG] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(93),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(99),
    [anon_sym_LWSP] = ACTIONS(95),
    [sym_comment] = ACTIONS(99),
    [sym_rulename] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_CRLF] = ACTIONS(95),
    [anon_sym_HTAB] = ACTIONS(95),
    [anon_sym_DIGIT] = ACTIONS(95),
    [anon_sym_ALPHA] = ACTIONS(95),
    [sym__DQUOTE] = ACTIONS(93),
    [sym__HTAB] = ACTIONS(99),
    [anon_sym_OCTET] = ACTIONS(95),
    [anon_sym_VCHAR] = ACTIONS(95),
    [anon_sym_PERCENTi] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_CTL] = ACTIONS(95),
    [anon_sym_CHAR] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_BIT] = ACTIONS(95),
  },
  [18] = {
    [sym__c_nl] = STATE(18),
    [aux_sym_rulelist_repeat1] = STATE(18),
    [sym__CRLF] = STATE(18),
    [sym__WSP] = STATE(18),
    [sym__c_wsp] = STATE(18),
    [sym__SP] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(104),
    [sym_comment] = ACTIONS(101),
    [sym__HTAB] = ACTIONS(101),
    [anon_sym_EQ_SLASH] = ACTIONS(106),
    [sym__CR] = ACTIONS(76),
  },
  [19] = {
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(108),
    [sym__HTAB] = ACTIONS(108),
    [sym__CR] = ACTIONS(108),
    [sym__SP] = ACTIONS(108),
  },
  [20] = {
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [sym__HTAB] = ACTIONS(110),
    [sym__CR] = ACTIONS(110),
    [sym__SP] = ACTIONS(110),
  },
  [21] = {
    [aux_sym_repeat_repeat1] = STATE(41),
    [sym_DIGIT] = ACTIONS(112),
    [anon_sym_SP] = ACTIONS(114),
    [sym_rulename] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_CRLF] = ACTIONS(114),
    [anon_sym_HTAB] = ACTIONS(114),
    [anon_sym_DIGIT] = ACTIONS(114),
    [anon_sym_WSP] = ACTIONS(114),
    [anon_sym_ALPHA] = ACTIONS(114),
    [anon_sym_PERCENTs] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_OCTET] = ACTIONS(114),
    [sym__DQUOTE] = ACTIONS(116),
    [anon_sym_VCHAR] = ACTIONS(114),
    [anon_sym_CR] = ACTIONS(114),
    [anon_sym_HEXDIG] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_PERCENTi] = ACTIONS(116),
    [anon_sym_LWSP] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_CTL] = ACTIONS(114),
    [anon_sym_CHAR] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_BIT] = ACTIONS(114),
  },
  [22] = {
    [aux_sym_quoted_string_token1] = ACTIONS(118),
  },
  [23] = {
    [sym_quoted_string] = STATE(43),
    [sym__DQUOTE] = ACTIONS(53),
  },
  [24] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(47),
    [sym_alternation] = STATE(48),
    [sym_concatenation] = STATE(49),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(47),
    [sym__WSP] = STATE(47),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(47),
    [sym__c_nl] = STATE(47),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(122),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(122),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(122),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [25] = {
    [sym_bin_val] = STATE(53),
    [sym_dec_val] = STATE(53),
    [sym_hex_val] = STATE(53),
    [anon_sym_d] = ACTIONS(124),
    [anon_sym_b] = ACTIONS(126),
    [anon_sym_x] = ACTIONS(128),
  },
  [26] = {
    [aux_sym_prose_val_token1] = ACTIONS(130),
  },
  [27] = {
    [sym_quoted_string] = STATE(55),
    [sym__DQUOTE] = ACTIONS(53),
  },
  [28] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(59),
    [sym_alternation] = STATE(60),
    [sym_concatenation] = STATE(61),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(59),
    [sym__WSP] = STATE(59),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(59),
    [sym__c_nl] = STATE(59),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(134),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(134),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(134),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [29] = {
    [sym__c_nl] = STATE(62),
    [sym__CRLF] = STATE(62),
    [sym__CR] = ACTIONS(9),
    [sym_comment] = ACTIONS(136),
  },
  [30] = {
    [sym__c_nl] = STATE(63),
    [aux_sym_rulelist_repeat1] = STATE(63),
    [aux_sym_concatenation_repeat1] = STATE(64),
    [sym__CRLF] = STATE(63),
    [sym__WSP] = STATE(63),
    [sym__c_wsp] = STATE(63),
    [anon_sym_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(140),
    [sym__HTAB] = ACTIONS(140),
    [sym__CR] = ACTIONS(143),
    [sym__SP] = ACTIONS(140),
  },
  [31] = {
    [sym_char_val] = STATE(20),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [sym_element] = STATE(65),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_option] = STATE(20),
    [anon_sym_SP] = ACTIONS(47),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [sym__DQUOTE] = ACTIONS(53),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LWSP] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [32] = {
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [sym_comment] = ACTIONS(146),
    [sym__HTAB] = ACTIONS(146),
    [sym__CR] = ACTIONS(146),
    [sym__SP] = ACTIONS(146),
  },
  [33] = {
    [sym__c_nl] = STATE(66),
    [aux_sym_rulelist_repeat1] = STATE(66),
    [sym__CRLF] = STATE(66),
    [sym__WSP] = STATE(66),
    [sym__c_wsp] = STATE(66),
    [sym_comment] = ACTIONS(148),
    [sym__HTAB] = ACTIONS(150),
    [sym__CR] = ACTIONS(148),
    [sym__SP] = ACTIONS(150),
  },
  [34] = {
    [sym__c_nl] = STATE(68),
    [aux_sym_rulelist_repeat1] = STATE(68),
    [sym__c_wsp] = STATE(68),
    [sym__CRLF] = STATE(68),
    [sym__WSP] = STATE(68),
    [aux_sym_alternation_repeat1] = STATE(69),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(154),
    [sym__HTAB] = ACTIONS(154),
    [sym__CR] = ACTIONS(157),
    [sym__SP] = ACTIONS(154),
  },
  [35] = {
    [aux_sym_repeat_repeat1] = STATE(71),
    [sym_DIGIT] = ACTIONS(160),
    [anon_sym_SP] = ACTIONS(114),
    [sym_rulename] = ACTIONS(114),
    [anon_sym_LF] = ACTIONS(114),
    [anon_sym_CRLF] = ACTIONS(114),
    [anon_sym_HTAB] = ACTIONS(114),
    [anon_sym_DIGIT] = ACTIONS(114),
    [anon_sym_WSP] = ACTIONS(114),
    [anon_sym_ALPHA] = ACTIONS(114),
    [anon_sym_PERCENTs] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_OCTET] = ACTIONS(114),
    [sym__DQUOTE] = ACTIONS(116),
    [anon_sym_VCHAR] = ACTIONS(114),
    [anon_sym_CR] = ACTIONS(114),
    [anon_sym_HEXDIG] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_PERCENTi] = ACTIONS(116),
    [anon_sym_LWSP] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_CTL] = ACTIONS(114),
    [anon_sym_CHAR] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_BIT] = ACTIONS(114),
  },
  [36] = {
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [sym_comment] = ACTIONS(164),
    [sym__HTAB] = ACTIONS(164),
    [sym__CR] = ACTIONS(164),
    [sym__SP] = ACTIONS(164),
  },
  [37] = {
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [sym_comment] = ACTIONS(166),
    [sym__HTAB] = ACTIONS(166),
    [sym__CR] = ACTIONS(166),
    [sym__SP] = ACTIONS(166),
  },
  [38] = {
    [sym_DIGIT] = ACTIONS(67),
    [anon_sym_SP] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_WSP] = ACTIONS(69),
    [anon_sym_PERCENTs] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_HEXDIG] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(67),
    [sym__CR] = ACTIONS(67),
    [sym__SP] = ACTIONS(67),
    [anon_sym_LWSP] = ACTIONS(69),
    [sym_comment] = ACTIONS(67),
    [sym_rulename] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_CRLF] = ACTIONS(69),
    [anon_sym_HTAB] = ACTIONS(69),
    [anon_sym_DIGIT] = ACTIONS(69),
    [anon_sym_ALPHA] = ACTIONS(69),
    [sym__DQUOTE] = ACTIONS(67),
    [sym__HTAB] = ACTIONS(67),
    [anon_sym_OCTET] = ACTIONS(69),
    [anon_sym_VCHAR] = ACTIONS(69),
    [anon_sym_PERCENTi] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_CTL] = ACTIONS(69),
    [anon_sym_CHAR] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BIT] = ACTIONS(69),
  },
  [39] = {
    [sym__c_nl] = STATE(39),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [sym__c_wsp] = STATE(39),
    [sym_DIGIT] = ACTIONS(106),
    [anon_sym_SP] = ACTIONS(104),
    [anon_sym_LF] = ACTIONS(104),
    [anon_sym_WSP] = ACTIONS(104),
    [anon_sym_PERCENTs] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_CR] = ACTIONS(104),
    [anon_sym_HEXDIG] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [sym__CR] = ACTIONS(168),
    [sym__SP] = ACTIONS(171),
    [anon_sym_LWSP] = ACTIONS(104),
    [sym_comment] = ACTIONS(171),
    [sym_rulename] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_CRLF] = ACTIONS(104),
    [anon_sym_HTAB] = ACTIONS(104),
    [anon_sym_DIGIT] = ACTIONS(104),
    [anon_sym_ALPHA] = ACTIONS(104),
    [sym__DQUOTE] = ACTIONS(106),
    [sym__HTAB] = ACTIONS(171),
    [anon_sym_OCTET] = ACTIONS(104),
    [anon_sym_VCHAR] = ACTIONS(104),
    [anon_sym_PERCENTi] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_CTL] = ACTIONS(104),
    [anon_sym_CHAR] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_BIT] = ACTIONS(104),
  },
  [40] = {
    [sym__c_nl] = STATE(39),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [sym__c_wsp] = STATE(39),
    [sym_DIGIT] = ACTIONS(174),
    [anon_sym_SP] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_WSP] = ACTIONS(176),
    [anon_sym_PERCENTs] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_HEXDIG] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(174),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(176),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_CRLF] = ACTIONS(176),
    [anon_sym_HTAB] = ACTIONS(176),
    [anon_sym_DIGIT] = ACTIONS(176),
    [anon_sym_ALPHA] = ACTIONS(176),
    [sym__DQUOTE] = ACTIONS(174),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(176),
    [anon_sym_VCHAR] = ACTIONS(176),
    [anon_sym_PERCENTi] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_CTL] = ACTIONS(176),
    [anon_sym_CHAR] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_BIT] = ACTIONS(176),
  },
  [41] = {
    [aux_sym_repeat_repeat1] = STATE(72),
    [sym_DIGIT] = ACTIONS(178),
    [anon_sym_SP] = ACTIONS(180),
    [sym_rulename] = ACTIONS(180),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CRLF] = ACTIONS(180),
    [anon_sym_HTAB] = ACTIONS(180),
    [anon_sym_DIGIT] = ACTIONS(180),
    [anon_sym_WSP] = ACTIONS(180),
    [anon_sym_ALPHA] = ACTIONS(180),
    [anon_sym_PERCENTs] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_OCTET] = ACTIONS(180),
    [sym__DQUOTE] = ACTIONS(182),
    [anon_sym_VCHAR] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_HEXDIG] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_PERCENTi] = ACTIONS(182),
    [anon_sym_LWSP] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_CTL] = ACTIONS(180),
    [anon_sym_CHAR] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BIT] = ACTIONS(180),
  },
  [42] = {
    [sym__DQUOTE] = ACTIONS(184),
  },
  [43] = {
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [sym_comment] = ACTIONS(186),
    [sym__HTAB] = ACTIONS(186),
    [sym__CR] = ACTIONS(186),
    [sym__SP] = ACTIONS(186),
  },
  [44] = {
    [sym_bin_val] = STATE(53),
    [sym_dec_val] = STATE(53),
    [sym_hex_val] = STATE(53),
    [anon_sym_d] = ACTIONS(188),
    [anon_sym_b] = ACTIONS(190),
    [anon_sym_x] = ACTIONS(192),
  },
  [45] = {
    [sym__c_nl] = STATE(77),
    [aux_sym_rulelist_repeat1] = STATE(77),
    [aux_sym_concatenation_repeat1] = STATE(78),
    [sym__CRLF] = STATE(77),
    [sym__WSP] = STATE(77),
    [sym__c_wsp] = STATE(77),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(138),
    [sym_comment] = ACTIONS(194),
    [sym__HTAB] = ACTIONS(194),
    [sym__CR] = ACTIONS(143),
    [sym__SP] = ACTIONS(194),
  },
  [46] = {
    [sym_char_val] = STATE(20),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [sym_element] = STATE(65),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_option] = STATE(20),
    [anon_sym_SP] = ACTIONS(47),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [sym__DQUOTE] = ACTIONS(53),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LWSP] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [47] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_alternation] = STATE(79),
    [sym_concatenation] = STATE(49),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [48] = {
    [sym__c_nl] = STATE(81),
    [aux_sym_rulelist_repeat1] = STATE(81),
    [sym__CRLF] = STATE(81),
    [sym__WSP] = STATE(81),
    [sym__c_wsp] = STATE(81),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_comment] = ACTIONS(199),
    [sym__HTAB] = ACTIONS(199),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(199),
  },
  [49] = {
    [sym__c_nl] = STATE(83),
    [aux_sym_rulelist_repeat1] = STATE(83),
    [sym__c_wsp] = STATE(83),
    [sym__CRLF] = STATE(83),
    [sym__WSP] = STATE(83),
    [aux_sym_alternation_repeat1] = STATE(84),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym_comment] = ACTIONS(205),
    [sym__HTAB] = ACTIONS(205),
    [sym__CR] = ACTIONS(157),
    [sym__SP] = ACTIONS(205),
  },
  [50] = {
    [aux_sym_repeat_repeat1] = STATE(85),
    [sym_DIGIT] = ACTIONS(208),
  },
  [51] = {
    [sym_BIT] = STATE(87),
    [aux_sym_bin_val_repeat1] = STATE(87),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [52] = {
    [aux_sym_hex_val_repeat1] = STATE(88),
    [sym_HEXDIG] = ACTIONS(212),
  },
  [53] = {
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [sym_comment] = ACTIONS(214),
    [sym__HTAB] = ACTIONS(214),
    [sym__CR] = ACTIONS(214),
    [sym__SP] = ACTIONS(214),
  },
  [54] = {
    [anon_sym_GT] = ACTIONS(216),
  },
  [55] = {
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [sym_comment] = ACTIONS(218),
    [sym__HTAB] = ACTIONS(218),
    [sym__CR] = ACTIONS(218),
    [sym__SP] = ACTIONS(218),
  },
  [56] = {
    [sym_bin_val] = STATE(53),
    [sym_dec_val] = STATE(53),
    [sym_hex_val] = STATE(53),
    [anon_sym_d] = ACTIONS(220),
    [anon_sym_b] = ACTIONS(222),
    [anon_sym_x] = ACTIONS(224),
  },
  [57] = {
    [sym__c_nl] = STATE(93),
    [aux_sym_rulelist_repeat1] = STATE(93),
    [aux_sym_concatenation_repeat1] = STATE(94),
    [sym__CRLF] = STATE(93),
    [sym__WSP] = STATE(93),
    [sym__c_wsp] = STATE(93),
    [anon_sym_SLASH] = ACTIONS(138),
    [sym__SP] = ACTIONS(226),
    [sym_comment] = ACTIONS(226),
    [sym__HTAB] = ACTIONS(226),
    [sym__CR] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(138),
  },
  [58] = {
    [sym_char_val] = STATE(20),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [sym_element] = STATE(65),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_option] = STATE(20),
    [anon_sym_SP] = ACTIONS(47),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [sym__DQUOTE] = ACTIONS(53),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LWSP] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [59] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_alternation] = STATE(95),
    [sym_concatenation] = STATE(61),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [60] = {
    [sym__c_nl] = STATE(97),
    [aux_sym_rulelist_repeat1] = STATE(97),
    [sym__CRLF] = STATE(97),
    [sym__WSP] = STATE(97),
    [sym__c_wsp] = STATE(97),
    [sym__SP] = ACTIONS(229),
    [sym_comment] = ACTIONS(229),
    [sym__HTAB] = ACTIONS(229),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(231),
  },
  [61] = {
    [sym__c_nl] = STATE(99),
    [aux_sym_rulelist_repeat1] = STATE(99),
    [sym__c_wsp] = STATE(99),
    [sym__CRLF] = STATE(99),
    [sym__WSP] = STATE(99),
    [aux_sym_alternation_repeat1] = STATE(100),
    [sym__SP] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(233),
    [sym__HTAB] = ACTIONS(233),
    [sym__CR] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(203),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_comment] = ACTIONS(238),
    [sym_rulename] = ACTIONS(238),
    [sym__HTAB] = ACTIONS(238),
    [sym__CR] = ACTIONS(238),
    [sym__SP] = ACTIONS(238),
  },
  [63] = {
    [sym_repetition] = STATE(101),
    [sym_repeat] = STATE(31),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [64] = {
    [sym__c_nl] = STATE(63),
    [aux_sym_rulelist_repeat1] = STATE(63),
    [aux_sym_concatenation_repeat1] = STATE(102),
    [sym__CRLF] = STATE(63),
    [sym__WSP] = STATE(63),
    [sym__c_wsp] = STATE(63),
    [anon_sym_SLASH] = ACTIONS(240),
    [sym_comment] = ACTIONS(242),
    [sym__HTAB] = ACTIONS(242),
    [sym__CR] = ACTIONS(245),
    [sym__SP] = ACTIONS(242),
  },
  [65] = {
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [sym_comment] = ACTIONS(248),
    [sym__HTAB] = ACTIONS(248),
    [sym__CR] = ACTIONS(248),
    [sym__SP] = ACTIONS(248),
  },
  [66] = {
    [sym__c_nl] = STATE(13),
    [aux_sym_rulelist_repeat1] = STATE(13),
    [sym__CRLF] = STATE(13),
    [sym__WSP] = STATE(13),
    [sym__c_wsp] = STATE(13),
    [sym_comment] = ACTIONS(250),
    [sym__HTAB] = ACTIONS(23),
    [sym__CR] = ACTIONS(250),
    [sym__SP] = ACTIONS(23),
  },
  [67] = {
    [sym_repetition] = STATE(30),
    [sym_repeat] = STATE(31),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(103),
    [sym_concatenation] = STATE(104),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(103),
    [sym__WSP] = STATE(103),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(103),
    [sym__c_nl] = STATE(103),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(252),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(252),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(252),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [68] = {
    [sym__c_nl] = STATE(106),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(106),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(254),
    [sym_comment] = ACTIONS(256),
    [sym__HTAB] = ACTIONS(256),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(256),
  },
  [69] = {
    [sym__c_nl] = STATE(68),
    [aux_sym_rulelist_repeat1] = STATE(68),
    [sym__c_wsp] = STATE(68),
    [sym__CRLF] = STATE(68),
    [sym__WSP] = STATE(68),
    [aux_sym_alternation_repeat1] = STATE(107),
    [anon_sym_SLASH] = ACTIONS(152),
    [sym_comment] = ACTIONS(258),
    [sym__HTAB] = ACTIONS(258),
    [sym__CR] = ACTIONS(261),
    [sym__SP] = ACTIONS(258),
  },
  [70] = {
    [aux_sym_repeat_repeat1] = STATE(108),
    [sym_DIGIT] = ACTIONS(264),
    [anon_sym_SP] = ACTIONS(180),
    [sym_rulename] = ACTIONS(180),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CRLF] = ACTIONS(180),
    [anon_sym_HTAB] = ACTIONS(180),
    [anon_sym_DIGIT] = ACTIONS(180),
    [anon_sym_WSP] = ACTIONS(180),
    [anon_sym_ALPHA] = ACTIONS(180),
    [anon_sym_PERCENTs] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_OCTET] = ACTIONS(180),
    [sym__DQUOTE] = ACTIONS(182),
    [anon_sym_VCHAR] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_HEXDIG] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_PERCENTi] = ACTIONS(182),
    [anon_sym_LWSP] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_CTL] = ACTIONS(180),
    [anon_sym_CHAR] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_BIT] = ACTIONS(180),
  },
  [71] = {
    [aux_sym_repeat_repeat1] = STATE(71),
    [sym_DIGIT] = ACTIONS(266),
    [anon_sym_SP] = ACTIONS(269),
    [sym_rulename] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(271),
    [anon_sym_CRLF] = ACTIONS(269),
    [anon_sym_HTAB] = ACTIONS(269),
    [anon_sym_DIGIT] = ACTIONS(269),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_ALPHA] = ACTIONS(269),
    [anon_sym_PERCENTs] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_OCTET] = ACTIONS(269),
    [anon_sym_WSP] = ACTIONS(269),
    [anon_sym_VCHAR] = ACTIONS(269),
    [anon_sym_CR] = ACTIONS(269),
    [anon_sym_HEXDIG] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(271),
    [sym__DQUOTE] = ACTIONS(271),
    [anon_sym_PERCENTi] = ACTIONS(271),
    [anon_sym_LWSP] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_CTL] = ACTIONS(269),
    [anon_sym_CHAR] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_BIT] = ACTIONS(269),
  },
  [72] = {
    [aux_sym_repeat_repeat1] = STATE(72),
    [sym_DIGIT] = ACTIONS(273),
    [anon_sym_SP] = ACTIONS(269),
    [sym_rulename] = ACTIONS(269),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_CRLF] = ACTIONS(269),
    [anon_sym_HTAB] = ACTIONS(269),
    [anon_sym_DIGIT] = ACTIONS(269),
    [anon_sym_WSP] = ACTIONS(269),
    [anon_sym_ALPHA] = ACTIONS(269),
    [anon_sym_PERCENTs] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_OCTET] = ACTIONS(269),
    [sym__DQUOTE] = ACTIONS(271),
    [anon_sym_VCHAR] = ACTIONS(269),
    [anon_sym_CR] = ACTIONS(269),
    [anon_sym_HEXDIG] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_PERCENTi] = ACTIONS(271),
    [anon_sym_LWSP] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_CTL] = ACTIONS(269),
    [anon_sym_CHAR] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_BIT] = ACTIONS(269),
  },
  [73] = {
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [sym_comment] = ACTIONS(276),
    [sym__HTAB] = ACTIONS(276),
    [sym__CR] = ACTIONS(276),
    [sym__SP] = ACTIONS(276),
  },
  [74] = {
    [aux_sym_repeat_repeat1] = STATE(109),
    [sym_DIGIT] = ACTIONS(278),
  },
  [75] = {
    [sym_BIT] = STATE(110),
    [aux_sym_bin_val_repeat1] = STATE(110),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [76] = {
    [aux_sym_hex_val_repeat1] = STATE(111),
    [sym_HEXDIG] = ACTIONS(280),
  },
  [77] = {
    [sym_repetition] = STATE(101),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [78] = {
    [sym__c_nl] = STATE(77),
    [aux_sym_rulelist_repeat1] = STATE(77),
    [aux_sym_concatenation_repeat1] = STATE(112),
    [sym__CRLF] = STATE(77),
    [sym__WSP] = STATE(77),
    [sym__c_wsp] = STATE(77),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(282),
    [sym__HTAB] = ACTIONS(282),
    [sym__CR] = ACTIONS(245),
    [sym__SP] = ACTIONS(282),
  },
  [79] = {
    [sym__c_nl] = STATE(114),
    [aux_sym_rulelist_repeat1] = STATE(114),
    [sym__CRLF] = STATE(114),
    [sym__WSP] = STATE(114),
    [sym__c_wsp] = STATE(114),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_comment] = ACTIONS(287),
    [sym__HTAB] = ACTIONS(287),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(287),
  },
  [80] = {
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
    [sym__HTAB] = ACTIONS(289),
    [sym__CR] = ACTIONS(289),
    [sym__SP] = ACTIONS(289),
  },
  [81] = {
    [sym__c_nl] = STATE(115),
    [aux_sym_rulelist_repeat1] = STATE(115),
    [sym__CRLF] = STATE(115),
    [sym__WSP] = STATE(115),
    [sym__c_wsp] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_comment] = ACTIONS(291),
    [sym__HTAB] = ACTIONS(291),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(291),
  },
  [82] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(116),
    [sym_concatenation] = STATE(104),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(116),
    [sym__WSP] = STATE(116),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(116),
    [sym__c_nl] = STATE(116),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(293),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(293),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(293),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [83] = {
    [sym__c_nl] = STATE(106),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(106),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(295),
    [sym_comment] = ACTIONS(256),
    [sym__HTAB] = ACTIONS(256),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(256),
  },
  [84] = {
    [sym__c_nl] = STATE(83),
    [aux_sym_rulelist_repeat1] = STATE(83),
    [sym__c_wsp] = STATE(83),
    [sym__CRLF] = STATE(83),
    [sym__WSP] = STATE(83),
    [aux_sym_alternation_repeat1] = STATE(118),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_comment] = ACTIONS(299),
    [sym__HTAB] = ACTIONS(299),
    [sym__CR] = ACTIONS(261),
    [sym__SP] = ACTIONS(299),
  },
  [85] = {
    [aux_sym_dec_val_repeat1] = STATE(121),
    [aux_sym_repeat_repeat1] = STATE(122),
    [anon_sym_SLASH] = ACTIONS(302),
    [sym_DIGIT] = ACTIONS(304),
    [sym_comment] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(306),
    [sym__CR] = ACTIONS(302),
    [sym__SP] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(308),
    [sym__HTAB] = ACTIONS(302),
  },
  [86] = {
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [sym_comment] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [sym__CR] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [sym__SP] = ACTIONS(310),
    [anon_sym_1] = ACTIONS(310),
    [sym__HTAB] = ACTIONS(310),
    [anon_sym_0] = ACTIONS(310),
  },
  [87] = {
    [aux_sym_bin_val_repeat1] = STATE(126),
    [sym_BIT] = STATE(126),
    [aux_sym_bin_val_repeat2] = STATE(125),
    [anon_sym_SLASH] = ACTIONS(312),
    [sym_comment] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(314),
    [sym__CR] = ACTIONS(312),
    [sym__SP] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(312),
    [anon_sym_0] = ACTIONS(210),
  },
  [88] = {
    [aux_sym_hex_val_repeat1] = STATE(129),
    [aux_sym_hex_val_repeat2] = STATE(130),
    [anon_sym_SLASH] = ACTIONS(318),
    [sym_comment] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(320),
    [sym__CR] = ACTIONS(318),
    [sym__SP] = ACTIONS(318),
    [sym_HEXDIG] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(324),
    [sym__HTAB] = ACTIONS(318),
  },
  [89] = {
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [sym_comment] = ACTIONS(326),
    [sym__HTAB] = ACTIONS(326),
    [sym__CR] = ACTIONS(326),
    [sym__SP] = ACTIONS(326),
  },
  [90] = {
    [aux_sym_repeat_repeat1] = STATE(131),
    [sym_DIGIT] = ACTIONS(328),
  },
  [91] = {
    [sym_BIT] = STATE(132),
    [aux_sym_bin_val_repeat1] = STATE(132),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [92] = {
    [aux_sym_hex_val_repeat1] = STATE(133),
    [sym_HEXDIG] = ACTIONS(330),
  },
  [93] = {
    [sym_repetition] = STATE(101),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [94] = {
    [sym__c_nl] = STATE(93),
    [aux_sym_rulelist_repeat1] = STATE(93),
    [aux_sym_concatenation_repeat1] = STATE(134),
    [sym__CRLF] = STATE(93),
    [sym__WSP] = STATE(93),
    [sym__c_wsp] = STATE(93),
    [anon_sym_SLASH] = ACTIONS(240),
    [sym__SP] = ACTIONS(332),
    [sym_comment] = ACTIONS(332),
    [sym__HTAB] = ACTIONS(332),
    [sym__CR] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(240),
  },
  [95] = {
    [sym__c_nl] = STATE(136),
    [aux_sym_rulelist_repeat1] = STATE(136),
    [sym__CRLF] = STATE(136),
    [sym__WSP] = STATE(136),
    [sym__c_wsp] = STATE(136),
    [sym__SP] = ACTIONS(335),
    [sym_comment] = ACTIONS(335),
    [sym__HTAB] = ACTIONS(335),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(337),
  },
  [96] = {
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(339),
    [sym__HTAB] = ACTIONS(339),
    [sym__CR] = ACTIONS(339),
    [sym__SP] = ACTIONS(339),
  },
  [97] = {
    [sym__c_nl] = STATE(137),
    [aux_sym_rulelist_repeat1] = STATE(137),
    [sym__CRLF] = STATE(137),
    [sym__WSP] = STATE(137),
    [sym__c_wsp] = STATE(137),
    [sym__SP] = ACTIONS(341),
    [sym_comment] = ACTIONS(341),
    [sym__HTAB] = ACTIONS(341),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(337),
  },
  [98] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(138),
    [sym_concatenation] = STATE(104),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(138),
    [sym__WSP] = STATE(138),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(138),
    [sym__c_nl] = STATE(138),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(343),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(343),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(343),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [99] = {
    [sym__c_nl] = STATE(106),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(106),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(345),
    [sym_comment] = ACTIONS(256),
    [sym__HTAB] = ACTIONS(256),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(256),
  },
  [100] = {
    [sym__c_nl] = STATE(99),
    [aux_sym_rulelist_repeat1] = STATE(99),
    [sym__c_wsp] = STATE(99),
    [sym__CRLF] = STATE(99),
    [sym__WSP] = STATE(99),
    [aux_sym_alternation_repeat1] = STATE(140),
    [sym__SP] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(347),
    [sym__HTAB] = ACTIONS(347),
    [sym__CR] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(297),
  },
  [101] = {
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [sym_comment] = ACTIONS(350),
    [sym__HTAB] = ACTIONS(350),
    [sym__CR] = ACTIONS(350),
    [sym__SP] = ACTIONS(350),
  },
  [102] = {
    [sym__c_nl] = STATE(63),
    [aux_sym_rulelist_repeat1] = STATE(63),
    [aux_sym_concatenation_repeat1] = STATE(102),
    [sym__CRLF] = STATE(63),
    [sym__WSP] = STATE(63),
    [sym__c_wsp] = STATE(63),
    [anon_sym_SLASH] = ACTIONS(350),
    [sym_comment] = ACTIONS(352),
    [sym__HTAB] = ACTIONS(352),
    [sym__CR] = ACTIONS(355),
    [sym__SP] = ACTIONS(352),
  },
  [103] = {
    [sym_repetition] = STATE(30),
    [sym_repeat] = STATE(31),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [104] = {
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(358),
    [sym__HTAB] = ACTIONS(358),
    [sym__CR] = ACTIONS(358),
    [sym__SP] = ACTIONS(358),
  },
  [105] = {
    [sym_repetition] = STATE(30),
    [sym_repeat] = STATE(31),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(142),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(142),
    [sym__WSP] = STATE(142),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(142),
    [sym__c_nl] = STATE(142),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(360),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(360),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(360),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [106] = {
    [sym__c_nl] = STATE(106),
    [aux_sym_rulelist_repeat1] = STATE(106),
    [sym__CRLF] = STATE(106),
    [sym__WSP] = STATE(106),
    [sym__c_wsp] = STATE(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(362),
    [sym__HTAB] = ACTIONS(362),
    [sym__CR] = ACTIONS(76),
    [sym__SP] = ACTIONS(362),
  },
  [107] = {
    [sym__c_nl] = STATE(68),
    [aux_sym_rulelist_repeat1] = STATE(68),
    [sym__c_wsp] = STATE(68),
    [sym__CRLF] = STATE(68),
    [sym__WSP] = STATE(68),
    [aux_sym_alternation_repeat1] = STATE(107),
    [anon_sym_SLASH] = ACTIONS(365),
    [sym_comment] = ACTIONS(368),
    [sym__HTAB] = ACTIONS(368),
    [sym__CR] = ACTIONS(371),
    [sym__SP] = ACTIONS(368),
  },
  [108] = {
    [aux_sym_repeat_repeat1] = STATE(72),
    [sym_DIGIT] = ACTIONS(178),
    [anon_sym_SP] = ACTIONS(374),
    [sym_rulename] = ACTIONS(374),
    [anon_sym_LF] = ACTIONS(374),
    [anon_sym_CRLF] = ACTIONS(374),
    [anon_sym_HTAB] = ACTIONS(374),
    [anon_sym_DIGIT] = ACTIONS(374),
    [anon_sym_WSP] = ACTIONS(374),
    [anon_sym_ALPHA] = ACTIONS(374),
    [anon_sym_PERCENTs] = ACTIONS(376),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(374),
    [anon_sym_OCTET] = ACTIONS(374),
    [sym__DQUOTE] = ACTIONS(376),
    [anon_sym_VCHAR] = ACTIONS(374),
    [anon_sym_CR] = ACTIONS(374),
    [anon_sym_HEXDIG] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(376),
    [anon_sym_PERCENTi] = ACTIONS(376),
    [anon_sym_LWSP] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_CTL] = ACTIONS(374),
    [anon_sym_CHAR] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [anon_sym_BIT] = ACTIONS(374),
  },
  [109] = {
    [aux_sym_dec_val_repeat1] = STATE(145),
    [aux_sym_repeat_repeat1] = STATE(146),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_DIGIT] = ACTIONS(378),
    [sym_comment] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(380),
    [sym__CR] = ACTIONS(302),
    [sym__SP] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(382),
    [sym__HTAB] = ACTIONS(302),
  },
  [110] = {
    [aux_sym_bin_val_repeat1] = STATE(150),
    [sym_BIT] = STATE(150),
    [aux_sym_bin_val_repeat2] = STATE(149),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
    [sym_comment] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(384),
    [sym__CR] = ACTIONS(312),
    [sym__SP] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(312),
    [anon_sym_0] = ACTIONS(210),
  },
  [111] = {
    [aux_sym_hex_val_repeat1] = STATE(153),
    [aux_sym_hex_val_repeat2] = STATE(154),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_comment] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(388),
    [sym__CR] = ACTIONS(318),
    [sym__SP] = ACTIONS(318),
    [sym_HEXDIG] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [sym__HTAB] = ACTIONS(318),
  },
  [112] = {
    [sym__c_nl] = STATE(77),
    [aux_sym_rulelist_repeat1] = STATE(77),
    [aux_sym_concatenation_repeat1] = STATE(112),
    [sym__CRLF] = STATE(77),
    [sym__WSP] = STATE(77),
    [sym__c_wsp] = STATE(77),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(394),
    [sym__HTAB] = ACTIONS(394),
    [sym__CR] = ACTIONS(355),
    [sym__SP] = ACTIONS(394),
  },
  [113] = {
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [sym_comment] = ACTIONS(397),
    [sym__HTAB] = ACTIONS(397),
    [sym__CR] = ACTIONS(397),
    [sym__SP] = ACTIONS(397),
  },
  [114] = {
    [sym__c_nl] = STATE(115),
    [aux_sym_rulelist_repeat1] = STATE(115),
    [sym__CRLF] = STATE(115),
    [sym__WSP] = STATE(115),
    [sym__c_wsp] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(399),
    [sym_comment] = ACTIONS(291),
    [sym__HTAB] = ACTIONS(291),
    [sym__CR] = ACTIONS(9),
    [sym__SP] = ACTIONS(291),
  },
  [115] = {
    [sym__c_nl] = STATE(115),
    [aux_sym_rulelist_repeat1] = STATE(115),
    [sym__CRLF] = STATE(115),
    [sym__WSP] = STATE(115),
    [sym__c_wsp] = STATE(115),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym_comment] = ACTIONS(401),
    [sym__HTAB] = ACTIONS(401),
    [sym__CR] = ACTIONS(76),
    [sym__SP] = ACTIONS(401),
  },
  [116] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [117] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(156),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(156),
    [sym__WSP] = STATE(156),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(156),
    [sym__c_nl] = STATE(156),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(404),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(404),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(404),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [118] = {
    [sym__c_nl] = STATE(83),
    [aux_sym_rulelist_repeat1] = STATE(83),
    [sym__c_wsp] = STATE(83),
    [sym__CRLF] = STATE(83),
    [sym__WSP] = STATE(83),
    [aux_sym_alternation_repeat1] = STATE(118),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(358),
    [sym_comment] = ACTIONS(409),
    [sym__HTAB] = ACTIONS(409),
    [sym__CR] = ACTIONS(371),
    [sym__SP] = ACTIONS(409),
  },
  [119] = {
    [aux_sym_repeat_repeat1] = STATE(157),
    [sym_DIGIT] = ACTIONS(412),
  },
  [120] = {
    [aux_sym_repeat_repeat1] = STATE(158),
    [sym_DIGIT] = ACTIONS(414),
  },
  [121] = {
    [aux_sym_dec_val_repeat1] = STATE(159),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(308),
    [sym_comment] = ACTIONS(416),
    [sym__HTAB] = ACTIONS(416),
    [sym__CR] = ACTIONS(416),
    [sym__SP] = ACTIONS(416),
  },
  [122] = {
    [aux_sym_repeat_repeat1] = STATE(122),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(418),
    [sym_comment] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
  },
  [123] = {
    [sym_BIT] = STATE(160),
    [aux_sym_bin_val_repeat1] = STATE(160),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [124] = {
    [sym_BIT] = STATE(161),
    [aux_sym_bin_val_repeat1] = STATE(161),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [125] = {
    [aux_sym_bin_val_repeat2] = STATE(162),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_comment] = ACTIONS(421),
    [sym__HTAB] = ACTIONS(421),
    [sym__CR] = ACTIONS(421),
    [sym__SP] = ACTIONS(421),
  },
  [126] = {
    [sym_BIT] = STATE(126),
    [aux_sym_bin_val_repeat1] = STATE(126),
    [anon_sym_SLASH] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [127] = {
    [aux_sym_hex_val_repeat1] = STATE(163),
    [sym_HEXDIG] = ACTIONS(428),
  },
  [128] = {
    [aux_sym_hex_val_repeat1] = STATE(164),
    [sym_HEXDIG] = ACTIONS(430),
  },
  [129] = {
    [aux_sym_hex_val_repeat1] = STATE(129),
    [anon_sym_SLASH] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(434),
    [sym__SP] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
  },
  [130] = {
    [aux_sym_hex_val_repeat2] = STATE(165),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(324),
    [sym_comment] = ACTIONS(437),
    [sym__HTAB] = ACTIONS(437),
    [sym__CR] = ACTIONS(437),
    [sym__SP] = ACTIONS(437),
  },
  [131] = {
    [aux_sym_dec_val_repeat1] = STATE(168),
    [aux_sym_repeat_repeat1] = STATE(169),
    [anon_sym_SLASH] = ACTIONS(302),
    [sym_DIGIT] = ACTIONS(439),
    [sym_comment] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(441),
    [sym__CR] = ACTIONS(302),
    [sym__SP] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__HTAB] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
  },
  [132] = {
    [aux_sym_bin_val_repeat1] = STATE(173),
    [sym_BIT] = STATE(173),
    [aux_sym_bin_val_repeat2] = STATE(172),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [sym_comment] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(445),
    [sym__CR] = ACTIONS(312),
    [sym__SP] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(447),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(312),
    [anon_sym_0] = ACTIONS(210),
  },
  [133] = {
    [aux_sym_hex_val_repeat1] = STATE(176),
    [aux_sym_hex_val_repeat2] = STATE(177),
    [anon_sym_SLASH] = ACTIONS(318),
    [sym_comment] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(449),
    [sym__CR] = ACTIONS(318),
    [sym__SP] = ACTIONS(318),
    [sym_HEXDIG] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(453),
    [sym__HTAB] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(318),
  },
  [134] = {
    [sym__c_nl] = STATE(93),
    [aux_sym_rulelist_repeat1] = STATE(93),
    [aux_sym_concatenation_repeat1] = STATE(134),
    [sym__CRLF] = STATE(93),
    [sym__WSP] = STATE(93),
    [sym__c_wsp] = STATE(93),
    [anon_sym_SLASH] = ACTIONS(350),
    [sym__SP] = ACTIONS(455),
    [sym_comment] = ACTIONS(455),
    [sym__HTAB] = ACTIONS(455),
    [sym__CR] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(350),
  },
  [135] = {
    [anon_sym_SLASH] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(458),
    [sym__HTAB] = ACTIONS(458),
    [sym__CR] = ACTIONS(458),
    [sym__SP] = ACTIONS(458),
  },
  [136] = {
    [sym__c_nl] = STATE(137),
    [aux_sym_rulelist_repeat1] = STATE(137),
    [sym__CRLF] = STATE(137),
    [sym__WSP] = STATE(137),
    [sym__c_wsp] = STATE(137),
    [sym__SP] = ACTIONS(341),
    [sym_comment] = ACTIONS(341),
    [sym__HTAB] = ACTIONS(341),
    [sym__CR] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(460),
  },
  [137] = {
    [sym__c_nl] = STATE(137),
    [aux_sym_rulelist_repeat1] = STATE(137),
    [sym__CRLF] = STATE(137),
    [sym__WSP] = STATE(137),
    [sym__c_wsp] = STATE(137),
    [sym__SP] = ACTIONS(462),
    [sym_comment] = ACTIONS(462),
    [sym__HTAB] = ACTIONS(462),
    [sym__CR] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(106),
  },
  [138] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [139] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(179),
    [sym_concatenation] = STATE(141),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(179),
    [sym__WSP] = STATE(179),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(179),
    [sym__c_nl] = STATE(179),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(465),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(465),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(465),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [140] = {
    [sym__c_nl] = STATE(99),
    [aux_sym_rulelist_repeat1] = STATE(99),
    [sym__c_wsp] = STATE(99),
    [sym__CRLF] = STATE(99),
    [sym__WSP] = STATE(99),
    [aux_sym_alternation_repeat1] = STATE(140),
    [anon_sym_SLASH] = ACTIONS(467),
    [sym__SP] = ACTIONS(470),
    [sym_comment] = ACTIONS(470),
    [sym__HTAB] = ACTIONS(470),
    [sym__CR] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(358),
  },
  [141] = {
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [sym_comment] = ACTIONS(473),
    [sym__HTAB] = ACTIONS(473),
    [sym__CR] = ACTIONS(473),
    [sym__SP] = ACTIONS(473),
  },
  [142] = {
    [sym_repetition] = STATE(30),
    [sym_repeat] = STATE(31),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(180),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [143] = {
    [aux_sym_repeat_repeat1] = STATE(181),
    [sym_DIGIT] = ACTIONS(475),
  },
  [144] = {
    [aux_sym_repeat_repeat1] = STATE(182),
    [sym_DIGIT] = ACTIONS(477),
  },
  [145] = {
    [aux_sym_dec_val_repeat1] = STATE(183),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(382),
    [sym_comment] = ACTIONS(416),
    [sym__HTAB] = ACTIONS(416),
    [sym__CR] = ACTIONS(416),
    [sym__SP] = ACTIONS(416),
  },
  [146] = {
    [aux_sym_repeat_repeat1] = STATE(146),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(479),
    [sym_comment] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
  },
  [147] = {
    [sym_BIT] = STATE(184),
    [aux_sym_bin_val_repeat1] = STATE(184),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [148] = {
    [sym_BIT] = STATE(185),
    [aux_sym_bin_val_repeat1] = STATE(185),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [149] = {
    [aux_sym_bin_val_repeat2] = STATE(186),
    [anon_sym_SLASH] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_DOT] = ACTIONS(386),
    [sym_comment] = ACTIONS(421),
    [sym__HTAB] = ACTIONS(421),
    [sym__CR] = ACTIONS(421),
    [sym__SP] = ACTIONS(421),
  },
  [150] = {
    [sym_BIT] = STATE(150),
    [aux_sym_bin_val_repeat1] = STATE(150),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [151] = {
    [aux_sym_hex_val_repeat1] = STATE(187),
    [sym_HEXDIG] = ACTIONS(482),
  },
  [152] = {
    [aux_sym_hex_val_repeat1] = STATE(188),
    [sym_HEXDIG] = ACTIONS(484),
  },
  [153] = {
    [aux_sym_hex_val_repeat1] = STATE(153),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(486),
    [sym__SP] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
  },
  [154] = {
    [aux_sym_hex_val_repeat2] = STATE(189),
    [anon_sym_SLASH] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(392),
    [sym_comment] = ACTIONS(437),
    [sym__HTAB] = ACTIONS(437),
    [sym__CR] = ACTIONS(437),
    [sym__SP] = ACTIONS(437),
  },
  [155] = {
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [sym_comment] = ACTIONS(489),
    [sym__HTAB] = ACTIONS(489),
    [sym__CR] = ACTIONS(489),
    [sym__SP] = ACTIONS(489),
  },
  [156] = {
    [sym_repetition] = STATE(45),
    [sym_repeat] = STATE(46),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(180),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [157] = {
    [aux_sym_repeat_repeat1] = STATE(190),
    [anon_sym_SLASH] = ACTIONS(491),
    [sym_DIGIT] = ACTIONS(493),
    [sym_comment] = ACTIONS(491),
    [sym__HTAB] = ACTIONS(491),
    [sym__CR] = ACTIONS(491),
    [sym__SP] = ACTIONS(491),
  },
  [158] = {
    [aux_sym_repeat_repeat1] = STATE(191),
    [anon_sym_SLASH] = ACTIONS(495),
    [sym__SP] = ACTIONS(495),
    [sym_DIGIT] = ACTIONS(497),
    [sym_comment] = ACTIONS(495),
    [sym__HTAB] = ACTIONS(495),
    [sym__CR] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
  },
  [159] = {
    [aux_sym_dec_val_repeat1] = STATE(159),
    [anon_sym_SLASH] = ACTIONS(495),
    [sym__SP] = ACTIONS(495),
    [sym_comment] = ACTIONS(495),
    [sym__HTAB] = ACTIONS(495),
    [sym__CR] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(499),
  },
  [160] = {
    [sym_BIT] = STATE(192),
    [aux_sym_bin_val_repeat1] = STATE(192),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_0] = ACTIONS(210),
    [sym_comment] = ACTIONS(502),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(502),
    [sym__CR] = ACTIONS(502),
    [sym__SP] = ACTIONS(502),
  },
  [161] = {
    [sym_BIT] = STATE(193),
    [aux_sym_bin_val_repeat1] = STATE(193),
    [anon_sym_SLASH] = ACTIONS(504),
    [sym_comment] = ACTIONS(504),
    [sym__CR] = ACTIONS(504),
    [sym__SP] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(504),
    [anon_sym_0] = ACTIONS(210),
  },
  [162] = {
    [aux_sym_bin_val_repeat2] = STATE(162),
    [anon_sym_SLASH] = ACTIONS(504),
    [sym__SP] = ACTIONS(504),
    [sym_comment] = ACTIONS(504),
    [sym__HTAB] = ACTIONS(504),
    [sym__CR] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(506),
  },
  [163] = {
    [aux_sym_hex_val_repeat1] = STATE(194),
    [anon_sym_SLASH] = ACTIONS(509),
    [sym_HEXDIG] = ACTIONS(511),
    [sym_comment] = ACTIONS(509),
    [sym__HTAB] = ACTIONS(509),
    [sym__CR] = ACTIONS(509),
    [sym__SP] = ACTIONS(509),
  },
  [164] = {
    [aux_sym_hex_val_repeat1] = STATE(195),
    [anon_sym_SLASH] = ACTIONS(513),
    [sym__SP] = ACTIONS(513),
    [sym_HEXDIG] = ACTIONS(515),
    [sym_comment] = ACTIONS(513),
    [sym__HTAB] = ACTIONS(513),
    [sym__CR] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(513),
  },
  [165] = {
    [aux_sym_hex_val_repeat2] = STATE(165),
    [anon_sym_SLASH] = ACTIONS(513),
    [sym__SP] = ACTIONS(513),
    [sym_comment] = ACTIONS(513),
    [sym__HTAB] = ACTIONS(513),
    [sym__CR] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(517),
  },
  [166] = {
    [aux_sym_repeat_repeat1] = STATE(196),
    [sym_DIGIT] = ACTIONS(520),
  },
  [167] = {
    [aux_sym_repeat_repeat1] = STATE(197),
    [sym_DIGIT] = ACTIONS(522),
  },
  [168] = {
    [aux_sym_dec_val_repeat1] = STATE(198),
    [anon_sym_SLASH] = ACTIONS(416),
    [sym__SP] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(443),
    [sym_comment] = ACTIONS(416),
    [sym__HTAB] = ACTIONS(416),
    [sym__CR] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(416),
  },
  [169] = {
    [aux_sym_repeat_repeat1] = STATE(169),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(524),
    [sym_comment] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
  },
  [170] = {
    [sym_BIT] = STATE(199),
    [aux_sym_bin_val_repeat1] = STATE(199),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [171] = {
    [sym_BIT] = STATE(200),
    [aux_sym_bin_val_repeat1] = STATE(200),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_0] = ACTIONS(210),
  },
  [172] = {
    [aux_sym_bin_val_repeat2] = STATE(201),
    [anon_sym_SLASH] = ACTIONS(421),
    [sym__SP] = ACTIONS(421),
    [anon_sym_DOT] = ACTIONS(447),
    [sym_comment] = ACTIONS(421),
    [sym__HTAB] = ACTIONS(421),
    [sym__CR] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
  },
  [173] = {
    [sym_BIT] = STATE(173),
    [aux_sym_bin_val_repeat1] = STATE(173),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [174] = {
    [aux_sym_hex_val_repeat1] = STATE(202),
    [sym_HEXDIG] = ACTIONS(527),
  },
  [175] = {
    [aux_sym_hex_val_repeat1] = STATE(203),
    [sym_HEXDIG] = ACTIONS(529),
  },
  [176] = {
    [aux_sym_hex_val_repeat1] = STATE(176),
    [anon_sym_SLASH] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(531),
    [sym__SP] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
  },
  [177] = {
    [aux_sym_hex_val_repeat2] = STATE(204),
    [anon_sym_SLASH] = ACTIONS(437),
    [sym__SP] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(453),
    [sym_comment] = ACTIONS(437),
    [sym__HTAB] = ACTIONS(437),
    [sym__CR] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
  },
  [178] = {
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_RBRACK] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [sym_comment] = ACTIONS(534),
    [sym__HTAB] = ACTIONS(534),
    [sym__CR] = ACTIONS(534),
    [sym__SP] = ACTIONS(534),
  },
  [179] = {
    [sym_repetition] = STATE(57),
    [sym_repeat] = STATE(58),
    [sym_case_insensitive_string] = STATE(32),
    [sym_case_sensitive_string] = STATE(32),
    [sym_prose_val] = STATE(20),
    [aux_sym_rulelist_repeat1] = STATE(39),
    [sym_concatenation] = STATE(180),
    [sym_option] = STATE(20),
    [sym_char_val] = STATE(20),
    [sym__CRLF] = STATE(39),
    [sym__WSP] = STATE(39),
    [aux_sym_repeat_repeat1] = STATE(35),
    [sym__c_wsp] = STATE(39),
    [sym__c_nl] = STATE(39),
    [sym_element] = STATE(36),
    [sym_group] = STATE(20),
    [sym_quoted_string] = STATE(37),
    [sym_num_val] = STATE(20),
    [sym_core_rulename] = STATE(20),
    [sym_DIGIT] = ACTIONS(45),
    [anon_sym_SP] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_WSP] = ACTIONS(47),
    [anon_sym_PERCENTs] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_HEXDIG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(61),
    [sym__CR] = ACTIONS(35),
    [sym__SP] = ACTIONS(97),
    [anon_sym_LWSP] = ACTIONS(47),
    [sym_comment] = ACTIONS(97),
    [sym_rulename] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_CRLF] = ACTIONS(47),
    [anon_sym_HTAB] = ACTIONS(47),
    [anon_sym_DIGIT] = ACTIONS(47),
    [anon_sym_ALPHA] = ACTIONS(47),
    [sym__DQUOTE] = ACTIONS(53),
    [sym__HTAB] = ACTIONS(97),
    [anon_sym_OCTET] = ACTIONS(47),
    [anon_sym_VCHAR] = ACTIONS(47),
    [anon_sym_PERCENTi] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_CTL] = ACTIONS(47),
    [anon_sym_CHAR] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_BIT] = ACTIONS(47),
  },
  [180] = {
    [anon_sym_SLASH] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_comment] = ACTIONS(536),
    [sym__HTAB] = ACTIONS(536),
    [sym__CR] = ACTIONS(536),
    [sym__SP] = ACTIONS(536),
  },
  [181] = {
    [aux_sym_repeat_repeat1] = STATE(205),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym_DIGIT] = ACTIONS(538),
    [sym_comment] = ACTIONS(491),
    [sym__HTAB] = ACTIONS(491),
    [sym__CR] = ACTIONS(491),
    [sym__SP] = ACTIONS(491),
  },
  [182] = {
    [aux_sym_repeat_repeat1] = STATE(206),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [sym_DIGIT] = ACTIONS(540),
    [sym_comment] = ACTIONS(495),
    [sym__CR] = ACTIONS(495),
    [sym__SP] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [sym__HTAB] = ACTIONS(495),
  },
  [183] = {
    [aux_sym_dec_val_repeat1] = STATE(183),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [sym__SP] = ACTIONS(495),
    [sym_comment] = ACTIONS(495),
    [sym__HTAB] = ACTIONS(495),
    [sym__CR] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(542),
  },
  [184] = {
    [sym_BIT] = STATE(207),
    [aux_sym_bin_val_repeat1] = STATE(207),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym_comment] = ACTIONS(502),
    [sym__CR] = ACTIONS(502),
    [sym__SP] = ACTIONS(502),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(502),
    [anon_sym_0] = ACTIONS(210),
  },
  [185] = {
    [sym_BIT] = STATE(208),
    [aux_sym_bin_val_repeat1] = STATE(208),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym_comment] = ACTIONS(504),
    [sym__CR] = ACTIONS(504),
    [sym__SP] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(504),
    [anon_sym_0] = ACTIONS(210),
  },
  [186] = {
    [aux_sym_bin_val_repeat2] = STATE(186),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym__SP] = ACTIONS(504),
    [sym_comment] = ACTIONS(504),
    [sym__HTAB] = ACTIONS(504),
    [sym__CR] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(545),
  },
  [187] = {
    [aux_sym_hex_val_repeat1] = STATE(209),
    [anon_sym_SLASH] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_HEXDIG] = ACTIONS(548),
    [sym_comment] = ACTIONS(509),
    [sym__HTAB] = ACTIONS(509),
    [sym__CR] = ACTIONS(509),
    [sym__SP] = ACTIONS(509),
  },
  [188] = {
    [aux_sym_hex_val_repeat1] = STATE(210),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym_comment] = ACTIONS(513),
    [sym__CR] = ACTIONS(513),
    [sym__SP] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(513),
    [sym_HEXDIG] = ACTIONS(550),
    [sym__HTAB] = ACTIONS(513),
  },
  [189] = {
    [aux_sym_hex_val_repeat2] = STATE(189),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym__SP] = ACTIONS(513),
    [sym_comment] = ACTIONS(513),
    [sym__HTAB] = ACTIONS(513),
    [sym__CR] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(552),
  },
  [190] = {
    [aux_sym_repeat_repeat1] = STATE(190),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(555),
    [sym_comment] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
  },
  [191] = {
    [aux_sym_repeat_repeat1] = STATE(191),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(558),
    [sym__SP] = ACTIONS(271),
    [sym_comment] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
  },
  [192] = {
    [sym_BIT] = STATE(192),
    [aux_sym_bin_val_repeat1] = STATE(192),
    [anon_sym_SLASH] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [193] = {
    [sym_BIT] = STATE(193),
    [aux_sym_bin_val_repeat1] = STATE(193),
    [anon_sym_SLASH] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [194] = {
    [aux_sym_hex_val_repeat1] = STATE(194),
    [anon_sym_SLASH] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(561),
    [sym_comment] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [sym__SP] = ACTIONS(432),
  },
  [195] = {
    [aux_sym_hex_val_repeat1] = STATE(195),
    [anon_sym_SLASH] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(564),
    [sym__SP] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
  },
  [196] = {
    [aux_sym_repeat_repeat1] = STATE(211),
    [anon_sym_SLASH] = ACTIONS(491),
    [sym__SP] = ACTIONS(491),
    [sym_DIGIT] = ACTIONS(567),
    [sym_comment] = ACTIONS(491),
    [sym__HTAB] = ACTIONS(491),
    [sym__CR] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
  },
  [197] = {
    [aux_sym_repeat_repeat1] = STATE(212),
    [anon_sym_SLASH] = ACTIONS(495),
    [sym_DIGIT] = ACTIONS(569),
    [sym_comment] = ACTIONS(495),
    [sym__CR] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [sym__SP] = ACTIONS(495),
    [sym__HTAB] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
  },
  [198] = {
    [aux_sym_dec_val_repeat1] = STATE(198),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(571),
    [sym__SP] = ACTIONS(495),
    [sym_comment] = ACTIONS(495),
    [sym__HTAB] = ACTIONS(495),
    [sym__CR] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
  },
  [199] = {
    [sym_BIT] = STATE(213),
    [aux_sym_bin_val_repeat1] = STATE(213),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_0] = ACTIONS(210),
    [sym_comment] = ACTIONS(502),
    [sym__CR] = ACTIONS(502),
    [sym__SP] = ACTIONS(502),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
  },
  [200] = {
    [sym_BIT] = STATE(214),
    [aux_sym_bin_val_repeat1] = STATE(214),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_0] = ACTIONS(210),
    [sym_comment] = ACTIONS(504),
    [sym__CR] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [sym__SP] = ACTIONS(504),
    [anon_sym_1] = ACTIONS(210),
    [sym__HTAB] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(504),
  },
  [201] = {
    [aux_sym_bin_val_repeat2] = STATE(201),
    [anon_sym_SLASH] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(574),
    [sym__SP] = ACTIONS(504),
    [sym_comment] = ACTIONS(504),
    [sym__HTAB] = ACTIONS(504),
    [sym__CR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(504),
  },
  [202] = {
    [aux_sym_hex_val_repeat1] = STATE(215),
    [anon_sym_SLASH] = ACTIONS(509),
    [sym__SP] = ACTIONS(509),
    [sym_HEXDIG] = ACTIONS(577),
    [sym_comment] = ACTIONS(509),
    [sym__HTAB] = ACTIONS(509),
    [sym__CR] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
  },
  [203] = {
    [aux_sym_hex_val_repeat1] = STATE(216),
    [anon_sym_SLASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(513),
    [sym__CR] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(513),
    [sym__SP] = ACTIONS(513),
    [sym_HEXDIG] = ACTIONS(579),
    [sym__HTAB] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
  },
  [204] = {
    [aux_sym_hex_val_repeat2] = STATE(204),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(581),
    [sym__SP] = ACTIONS(513),
    [sym_comment] = ACTIONS(513),
    [sym__HTAB] = ACTIONS(513),
    [sym__CR] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
  },
  [205] = {
    [aux_sym_repeat_repeat1] = STATE(205),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(584),
    [sym_comment] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
  },
  [206] = {
    [aux_sym_repeat_repeat1] = STATE(206),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(587),
    [sym_comment] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
  },
  [207] = {
    [sym_BIT] = STATE(207),
    [aux_sym_bin_val_repeat1] = STATE(207),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [208] = {
    [sym_BIT] = STATE(208),
    [aux_sym_bin_val_repeat1] = STATE(208),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [209] = {
    [aux_sym_hex_val_repeat1] = STATE(209),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(590),
    [sym_comment] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [sym__SP] = ACTIONS(432),
  },
  [210] = {
    [aux_sym_hex_val_repeat1] = STATE(210),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(593),
    [sym__SP] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
  },
  [211] = {
    [aux_sym_repeat_repeat1] = STATE(211),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(596),
    [sym__SP] = ACTIONS(271),
    [sym_comment] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
  },
  [212] = {
    [aux_sym_repeat_repeat1] = STATE(212),
    [anon_sym_SLASH] = ACTIONS(271),
    [sym_DIGIT] = ACTIONS(599),
    [sym_comment] = ACTIONS(271),
    [sym__CR] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__SP] = ACTIONS(271),
    [sym__HTAB] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
  },
  [213] = {
    [sym_BIT] = STATE(213),
    [aux_sym_bin_val_repeat1] = STATE(213),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [214] = {
    [sym_BIT] = STATE(214),
    [aux_sym_bin_val_repeat1] = STATE(214),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym_comment] = ACTIONS(423),
    [sym__CR] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__SP] = ACTIONS(423),
    [anon_sym_1] = ACTIONS(425),
    [sym__HTAB] = ACTIONS(423),
    [anon_sym_0] = ACTIONS(425),
  },
  [215] = {
    [aux_sym_hex_val_repeat1] = STATE(215),
    [anon_sym_SLASH] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(602),
    [sym__SP] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
  },
  [216] = {
    [aux_sym_hex_val_repeat1] = STATE(216),
    [anon_sym_SLASH] = ACTIONS(432),
    [sym_comment] = ACTIONS(432),
    [sym__CR] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [sym_HEXDIG] = ACTIONS(605),
    [sym__SP] = ACTIONS(432),
    [sym__HTAB] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_rulelist, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_defined_as, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_defined_as, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, SHIFT(35),
  [47] = {.count = 1, .reusable = false}, SHIFT(19),
  [49] = {.count = 1, .reusable = false}, SHIFT(20),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(24),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = true}, SHIFT(26),
  [63] = {.count = 1, .reusable = true}, SHIFT(27),
  [65] = {.count = 1, .reusable = true}, SHIFT(28),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__CRLF, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__CRLF, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(13),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(14),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(2),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(5),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat2, 2), SHIFT_REPEAT(3),
  [91] = {.count = 1, .reusable = true}, SHIFT(38),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_defined_as, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_defined_as, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(39),
  [99] = {.count = 1, .reusable = true}, SHIFT(40),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(18),
  [104] = {.count = 1, .reusable = false}, REDUCE(aux_sym_rulelist_repeat1, 2),
  [106] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_core_rulename, 1),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [112] = {.count = 1, .reusable = true}, SHIFT(41),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_repeat, 1),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 1),
  [118] = {.count = 1, .reusable = true}, SHIFT(42),
  [120] = {.count = 1, .reusable = false}, SHIFT(44),
  [122] = {.count = 1, .reusable = true}, SHIFT(47),
  [124] = {.count = 1, .reusable = true}, SHIFT(50),
  [126] = {.count = 1, .reusable = true}, SHIFT(51),
  [128] = {.count = 1, .reusable = true}, SHIFT(52),
  [130] = {.count = 1, .reusable = true}, SHIFT(54),
  [132] = {.count = 1, .reusable = false}, SHIFT(56),
  [134] = {.count = 1, .reusable = true}, SHIFT(59),
  [136] = {.count = 1, .reusable = true}, SHIFT(62),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 1),
  [140] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(63),
  [143] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(15),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_char_val, 1),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_elements, 1),
  [150] = {.count = 1, .reusable = true}, SHIFT(66),
  [152] = {.count = 1, .reusable = true}, SHIFT(67),
  [154] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(68),
  [157] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(3),
  [160] = {.count = 1, .reusable = true}, SHIFT(71),
  [162] = {.count = 1, .reusable = true}, SHIFT(70),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_repetition, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_case_insensitive_string, 1),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(15),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(39),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_defined_as, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_defined_as, 3),
  [178] = {.count = 1, .reusable = true}, SHIFT(72),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_repeat, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 2),
  [184] = {.count = 1, .reusable = true}, SHIFT(73),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_case_sensitive_string, 2),
  [188] = {.count = 1, .reusable = true}, SHIFT(74),
  [190] = {.count = 1, .reusable = true}, SHIFT(75),
  [192] = {.count = 1, .reusable = true}, SHIFT(76),
  [194] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(77),
  [197] = {.count = 1, .reusable = true}, SHIFT(80),
  [199] = {.count = 1, .reusable = true}, SHIFT(81),
  [201] = {.count = 1, .reusable = true}, SHIFT(82),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_alternation, 1),
  [205] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(83),
  [208] = {.count = 1, .reusable = true}, SHIFT(85),
  [210] = {.count = 1, .reusable = true}, SHIFT(86),
  [212] = {.count = 1, .reusable = true}, SHIFT(88),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_num_val, 2),
  [216] = {.count = 1, .reusable = true}, SHIFT(89),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_case_insensitive_string, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(90),
  [222] = {.count = 1, .reusable = true}, SHIFT(91),
  [224] = {.count = 1, .reusable = true}, SHIFT(92),
  [226] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 1), SHIFT(93),
  [229] = {.count = 1, .reusable = true}, SHIFT(97),
  [231] = {.count = 1, .reusable = true}, SHIFT(96),
  [233] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 1), SHIFT(99),
  [236] = {.count = 1, .reusable = true}, SHIFT(98),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_rule, 4),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 2),
  [242] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(63),
  [245] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(15),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_repetition, 2),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_elements, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(103),
  [254] = {.count = 1, .reusable = true}, SHIFT(105),
  [256] = {.count = 1, .reusable = true}, SHIFT(106),
  [258] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(68),
  [261] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(3),
  [264] = {.count = 1, .reusable = true}, SHIFT(108),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(71),
  [269] = {.count = 1, .reusable = false}, REDUCE(aux_sym_repeat_repeat1, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(72),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_string, 3),
  [278] = {.count = 1, .reusable = true}, SHIFT(109),
  [280] = {.count = 1, .reusable = true}, SHIFT(111),
  [282] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(77),
  [285] = {.count = 1, .reusable = true}, SHIFT(113),
  [287] = {.count = 1, .reusable = true}, SHIFT(114),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_option, 3),
  [291] = {.count = 1, .reusable = true}, SHIFT(115),
  [293] = {.count = 1, .reusable = true}, SHIFT(116),
  [295] = {.count = 1, .reusable = true}, SHIFT(117),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_alternation, 2),
  [299] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(83),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_dec_val, 2),
  [304] = {.count = 1, .reusable = true}, SHIFT(122),
  [306] = {.count = 1, .reusable = true}, SHIFT(119),
  [308] = {.count = 1, .reusable = true}, SHIFT(120),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_BIT, 1),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_bin_val, 2),
  [314] = {.count = 1, .reusable = true}, SHIFT(123),
  [316] = {.count = 1, .reusable = true}, SHIFT(124),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_hex_val, 2),
  [320] = {.count = 1, .reusable = true}, SHIFT(127),
  [322] = {.count = 1, .reusable = true}, SHIFT(129),
  [324] = {.count = 1, .reusable = true}, SHIFT(128),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_prose_val, 3),
  [328] = {.count = 1, .reusable = true}, SHIFT(131),
  [330] = {.count = 1, .reusable = true}, SHIFT(133),
  [332] = {.count = 2, .reusable = true}, REDUCE(sym_concatenation, 2), SHIFT(93),
  [335] = {.count = 1, .reusable = true}, SHIFT(136),
  [337] = {.count = 1, .reusable = true}, SHIFT(135),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_group, 3),
  [341] = {.count = 1, .reusable = true}, SHIFT(137),
  [343] = {.count = 1, .reusable = true}, SHIFT(138),
  [345] = {.count = 1, .reusable = true}, SHIFT(139),
  [347] = {.count = 2, .reusable = true}, REDUCE(sym_alternation, 2), SHIFT(99),
  [350] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(63),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(15),
  [358] = {.count = 1, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2),
  [360] = {.count = 1, .reusable = true}, SHIFT(142),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(106),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(67),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(68),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(3),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_repeat, 3),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_repeat, 3),
  [378] = {.count = 1, .reusable = true}, SHIFT(146),
  [380] = {.count = 1, .reusable = true}, SHIFT(143),
  [382] = {.count = 1, .reusable = true}, SHIFT(144),
  [384] = {.count = 1, .reusable = true}, SHIFT(147),
  [386] = {.count = 1, .reusable = true}, SHIFT(148),
  [388] = {.count = 1, .reusable = true}, SHIFT(151),
  [390] = {.count = 1, .reusable = true}, SHIFT(153),
  [392] = {.count = 1, .reusable = true}, SHIFT(152),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(77),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_option, 4),
  [399] = {.count = 1, .reusable = true}, SHIFT(155),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(115),
  [404] = {.count = 1, .reusable = true}, SHIFT(156),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(82),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(83),
  [412] = {.count = 1, .reusable = true}, SHIFT(157),
  [414] = {.count = 1, .reusable = true}, SHIFT(158),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_dec_val, 3),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(122),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_bin_val, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bin_val_repeat1, 2),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat1, 2), SHIFT_REPEAT(86),
  [428] = {.count = 1, .reusable = true}, SHIFT(163),
  [430] = {.count = 1, .reusable = true}, SHIFT(164),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(129),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_hex_val, 3),
  [439] = {.count = 1, .reusable = true}, SHIFT(169),
  [441] = {.count = 1, .reusable = true}, SHIFT(166),
  [443] = {.count = 1, .reusable = true}, SHIFT(167),
  [445] = {.count = 1, .reusable = true}, SHIFT(170),
  [447] = {.count = 1, .reusable = true}, SHIFT(171),
  [449] = {.count = 1, .reusable = true}, SHIFT(174),
  [451] = {.count = 1, .reusable = true}, SHIFT(176),
  [453] = {.count = 1, .reusable = true}, SHIFT(175),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(93),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_group, 4),
  [460] = {.count = 1, .reusable = true}, SHIFT(178),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rulelist_repeat1, 2), SHIFT_REPEAT(137),
  [465] = {.count = 1, .reusable = true}, SHIFT(179),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(98),
  [470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(99),
  [473] = {.count = 1, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 3),
  [475] = {.count = 1, .reusable = true}, SHIFT(181),
  [477] = {.count = 1, .reusable = true}, SHIFT(182),
  [479] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(146),
  [482] = {.count = 1, .reusable = true}, SHIFT(187),
  [484] = {.count = 1, .reusable = true}, SHIFT(188),
  [486] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(153),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_option, 5),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_dec_val, 4),
  [493] = {.count = 1, .reusable = true}, SHIFT(190),
  [495] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2),
  [497] = {.count = 1, .reusable = true}, SHIFT(191),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(120),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_bin_val, 4),
  [504] = {.count = 1, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(124),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_hex_val, 4),
  [511] = {.count = 1, .reusable = true}, SHIFT(194),
  [513] = {.count = 1, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2),
  [515] = {.count = 1, .reusable = true}, SHIFT(195),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(128),
  [520] = {.count = 1, .reusable = true}, SHIFT(196),
  [522] = {.count = 1, .reusable = true}, SHIFT(197),
  [524] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(169),
  [527] = {.count = 1, .reusable = true}, SHIFT(202),
  [529] = {.count = 1, .reusable = true}, SHIFT(203),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(176),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_group, 5),
  [536] = {.count = 1, .reusable = true}, REDUCE(aux_sym_alternation_repeat1, 4),
  [538] = {.count = 1, .reusable = true}, SHIFT(205),
  [540] = {.count = 1, .reusable = true}, SHIFT(206),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(144),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(148),
  [548] = {.count = 1, .reusable = true}, SHIFT(209),
  [550] = {.count = 1, .reusable = true}, SHIFT(210),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(152),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(190),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(191),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(194),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(195),
  [567] = {.count = 1, .reusable = true}, SHIFT(211),
  [569] = {.count = 1, .reusable = true}, SHIFT(212),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dec_val_repeat1, 2), SHIFT_REPEAT(167),
  [574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_bin_val_repeat2, 2), SHIFT_REPEAT(171),
  [577] = {.count = 1, .reusable = true}, SHIFT(215),
  [579] = {.count = 1, .reusable = true}, SHIFT(216),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat2, 2), SHIFT_REPEAT(175),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(205),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(206),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(209),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(210),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(211),
  [599] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repeat_repeat1, 2), SHIFT_REPEAT(212),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(215),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_hex_val_repeat1, 2), SHIFT_REPEAT(216),
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
