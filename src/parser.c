#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_type = 2,
  anon_sym_SEMI = 3,
  anon_sym_role = 4,
  anon_sym_types = 5,
  anon_sym_allow = 6,
  anon_sym_COLON = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_neverallow = 10,
  anon_sym_bool = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  sym_identifier = 14,
  anon_sym_read = 15,
  anon_sym_write = 16,
  anon_sym_execute = 17,
  anon_sym_unlink = 18,
  anon_sym_append = 19,
  anon_sym_getattr = 20,
  sym_source_file = 21,
  sym__definition = 22,
  sym_type_declaration = 23,
  sym_role_declaration = 24,
  sym_allow_rule = 25,
  sym_neverallow_rule = 26,
  sym_boolean_declaration = 27,
  sym_permissions = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_permissions_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_type] = "type",
  [anon_sym_SEMI] = ";",
  [anon_sym_role] = "role",
  [anon_sym_types] = "types",
  [anon_sym_allow] = "allow",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_neverallow] = "neverallow",
  [anon_sym_bool] = "bool",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_execute] = "execute",
  [anon_sym_unlink] = "unlink",
  [anon_sym_append] = "append",
  [anon_sym_getattr] = "getattr",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_type_declaration] = "type_declaration",
  [sym_role_declaration] = "role_declaration",
  [sym_allow_rule] = "allow_rule",
  [sym_neverallow_rule] = "neverallow_rule",
  [sym_boolean_declaration] = "boolean_declaration",
  [sym_permissions] = "permissions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_permissions_repeat1] = "permissions_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_role] = anon_sym_role,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_neverallow] = anon_sym_neverallow,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_execute] = anon_sym_execute,
  [anon_sym_unlink] = anon_sym_unlink,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_getattr] = anon_sym_getattr,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_type_declaration] = sym_type_declaration,
  [sym_role_declaration] = sym_role_declaration,
  [sym_allow_rule] = sym_allow_rule,
  [sym_neverallow_rule] = sym_neverallow_rule,
  [sym_boolean_declaration] = sym_boolean_declaration,
  [sym_permissions] = sym_permissions,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_permissions_repeat1] = aux_sym_permissions_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_role] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_types] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neverallow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getattr] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_role_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_allow_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_neverallow_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_permissions] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_permissions_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_class = 1,
  field_name = 2,
  field_perms = 3,
  field_source_type = 4,
  field_target_type = 5,
  field_type = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class] = "class",
  [field_name] = "name",
  [field_perms] = "perms",
  [field_source_type] = "source_type",
  [field_target_type] = "target_type",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 4},
  [5] = {.index = 9, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 2},
  [3] =
    {field_name, 1},
    {field_type, 3},
  [5] =
    {field_class, 4},
    {field_perms, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [9] =
    {field_class, 4},
    {field_perms, 6},
    {field_source_type, 1},
    {field_target_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(51);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\\') SKIP(39)
      END_STATE();
    case 4:
      if (lookahead == '\\') SKIP(39)
      if (lookahead == 'r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\\') SKIP(40)
      END_STATE();
    case 6:
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'n') SKIP(1)
      END_STATE();
    case 40:
      if (lookahead == 'n') SKIP(2)
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 67:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 68:
      if (eof) ADVANCE(71);
      if (lookahead == '\\') SKIP(70)
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      if (lookahead == '\\') SKIP(70)
      if (lookahead == 'r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_role);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_neverallow);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_execute);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_unlink);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_getattr);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_role] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_neverallow] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_execute] = ACTIONS(1),
    [anon_sym_unlink] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_getattr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__definition] = STATE(2),
    [sym_type_declaration] = STATE(2),
    [sym_role_declaration] = STATE(2),
    [sym_allow_rule] = STATE(2),
    [sym_neverallow_rule] = STATE(2),
    [sym_boolean_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_role] = ACTIONS(9),
    [anon_sym_allow] = ACTIONS(11),
    [anon_sym_neverallow] = ACTIONS(13),
    [anon_sym_bool] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(9), 1,
      anon_sym_role,
    ACTIONS(11), 1,
      anon_sym_allow,
    ACTIONS(13), 1,
      anon_sym_neverallow,
    ACTIONS(15), 1,
      anon_sym_bool,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(3), 7,
      sym__definition,
      sym_type_declaration,
      sym_role_declaration,
      sym_allow_rule,
      sym_neverallow_rule,
      sym_boolean_declaration,
      aux_sym_source_file_repeat1,
  [31] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_type,
    ACTIONS(24), 1,
      anon_sym_role,
    ACTIONS(27), 1,
      anon_sym_allow,
    ACTIONS(30), 1,
      anon_sym_neverallow,
    ACTIONS(33), 1,
      anon_sym_bool,
    STATE(3), 7,
      sym__definition,
      sym_type_declaration,
      sym_role_declaration,
      sym_allow_rule,
      sym_neverallow_rule,
      sym_boolean_declaration,
      aux_sym_source_file_repeat1,
  [62] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_permissions_repeat1,
    ACTIONS(36), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(38), 6,
      anon_sym_read,
      anon_sym_write,
      anon_sym_execute,
      anon_sym_unlink,
      anon_sym_append,
      anon_sym_getattr,
  [81] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_permissions_repeat1,
    ACTIONS(41), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(43), 6,
      anon_sym_read,
      anon_sym_write,
      anon_sym_execute,
      anon_sym_unlink,
      anon_sym_append,
      anon_sym_getattr,
  [100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_permissions_repeat1,
    STATE(30), 1,
      sym_permissions,
    ACTIONS(45), 6,
      anon_sym_read,
      anon_sym_write,
      anon_sym_execute,
      anon_sym_unlink,
      anon_sym_append,
      anon_sym_getattr,
  [118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_permissions_repeat1,
    STATE(28), 1,
      sym_permissions,
    ACTIONS(45), 6,
      anon_sym_read,
      anon_sym_write,
      anon_sym_execute,
      anon_sym_unlink,
      anon_sym_append,
      anon_sym_getattr,
  [136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_role,
      anon_sym_allow,
      anon_sym_neverallow,
      anon_sym_bool,
  [148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_role,
      anon_sym_allow,
      anon_sym_neverallow,
      anon_sym_bool,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_role,
      anon_sym_allow,
      anon_sym_neverallow,
      anon_sym_bool,
  [172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_role,
      anon_sym_allow,
      anon_sym_neverallow,
      anon_sym_bool,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_role,
      anon_sym_allow,
      anon_sym_neverallow,
      anon_sym_bool,
  [196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
  [204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
  [211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
  [218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
  [225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_COLON,
  [232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_COLON,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SEMI,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
  [267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_SEMI,
  [274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_identifier,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_identifier,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_SEMI,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
  [337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_types,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 260,
  [SMALL_STATE(23)] = 267,
  [SMALL_STATE(24)] = 274,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 288,
  [SMALL_STATE(27)] = 295,
  [SMALL_STATE(28)] = 302,
  [SMALL_STATE(29)] = 309,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 323,
  [SMALL_STATE(32)] = 330,
  [SMALL_STATE(33)] = 337,
  [SMALL_STATE(34)] = 344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permissions_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permissions_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_declaration, 5, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allow_rule, 9, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neverallow_rule, 7, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_declaration, 4, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_selinux() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
