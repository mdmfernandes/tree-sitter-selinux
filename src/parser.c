#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 120
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 38

enum ts_symbol_identifiers {
  sym_word = 1,
  sym_comment = 2,
  anon_sym_type = 3,
  anon_sym_alias = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  anon_sym_attribute = 7,
  anon_sym_expandattribute = 8,
  anon_sym_typeattribute = 9,
  anon_sym_typealias = 10,
  anon_sym_permissive = 11,
  anon_sym_type_transition = 12,
  anon_sym_COLON = 13,
  anon_sym_type_change = 14,
  anon_sym_type_member = 15,
  anon_sym_role = 16,
  anon_sym_types = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_bool = 20,
  anon_sym_interface = 21,
  anon_sym_LPAREN = 22,
  anon_sym_BQUOTE = 23,
  anon_sym_SQUOTE = 24,
  anon_sym_RPAREN = 25,
  sym_negative = 26,
  sym_complement = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  anon_sym_DOLLAR = 30,
  aux_sym_expansion_token1 = 31,
  anon_sym_STAR = 32,
  anon_sym_allow = 33,
  anon_sym_auditallow = 34,
  anon_sym_dontaudit = 35,
  anon_sym_neverallow = 36,
  anon_sym_appletalk_socket = 37,
  anon_sym_association = 38,
  anon_sym_blk_file = 39,
  anon_sym_bpf = 40,
  anon_sym_cap_userns = 41,
  anon_sym_cap2_userns = 42,
  anon_sym_capability = 43,
  anon_sym_capability2 = 44,
  anon_sym_chr_file = 45,
  anon_sym_dccp_socket = 46,
  anon_sym_dgram_socket_class_set = 47,
  anon_sym_dir = 48,
  anon_sym_fd = 49,
  anon_sym_fifo_file = 50,
  anon_sym_file = 51,
  anon_sym_filesystem = 52,
  anon_sym_ipc = 53,
  anon_sym_kernel_service = 54,
  anon_sym_key = 55,
  anon_sym_key_socket = 56,
  anon_sym_lnk_file = 57,
  anon_sym_memprotect = 58,
  anon_sym_msg = 59,
  anon_sym_msgq = 60,
  anon_sym_netif = 61,
  anon_sym_netlink_socket = 62,
  anon_sym_netlink_audit_socket = 63,
  anon_sym_netlink_dnrt_socket = 64,
  anon_sym_netlink_firewall_socket = 65,
  anon_sym_netlink_ip6fw_socket = 66,
  anon_sym_netlink_kobject_uevent_socket = 67,
  anon_sym_netlink_nflog_socket = 68,
  anon_sym_netlink_route_socket = 69,
  anon_sym_netlink_selinux_socket = 70,
  anon_sym_netlink_tcpdiag_socket = 71,
  anon_sym_netlink_xfrm_socket = 72,
  anon_sym_node = 73,
  anon_sym_packet = 74,
  anon_sym_packet_socket = 75,
  anon_sym_peer = 76,
  anon_sym_process = 77,
  anon_sym_process2 = 78,
  anon_sym_rawip_socket = 79,
  anon_sym_security = 80,
  anon_sym_service = 81,
  anon_sym_sem = 82,
  anon_sym_shm = 83,
  anon_sym_sock_file = 84,
  anon_sym_socket = 85,
  anon_sym_system = 86,
  anon_sym_tcp_socket = 87,
  anon_sym_tun_socket = 88,
  anon_sym_udp_socket = 89,
  anon_sym_unix_dgram_socket = 90,
  anon_sym_unix_stream_socket = 91,
  anon_sym_db_blob = 92,
  anon_sym_db_column = 93,
  anon_sym_db_database = 94,
  anon_sym_db_procedure = 95,
  anon_sym_db_table = 96,
  anon_sym_db_tuple = 97,
  anon_sym_dbus = 98,
  anon_sym_context = 99,
  anon_sym_nscd = 100,
  anon_sym_passwd = 101,
  anon_sym_x_application_data = 102,
  anon_sym_x_client = 103,
  anon_sym_x_colormap = 104,
  anon_sym_x_cursor = 105,
  anon_sym_x_device = 106,
  anon_sym_x_drawable = 107,
  anon_sym_x_event = 108,
  anon_sym_x_extension = 109,
  anon_sym_x_font = 110,
  anon_sym_x_gc = 111,
  anon_sym_x_keyboard = 112,
  anon_sym_x_pointer = 113,
  anon_sym_x_property = 114,
  anon_sym_x_resource = 115,
  anon_sym_x_screen = 116,
  anon_sym_x_selection = 117,
  anon_sym_x_server = 118,
  anon_sym_x_synthetic_event = 119,
  sym_source_file = 120,
  sym__definition = 121,
  sym_type_declaration = 122,
  sym_attribute_declaration = 123,
  sym_expandattribute_declaration = 124,
  sym_typeattribute_declaration = 125,
  sym_typealias_declaration = 126,
  sym_permissive_declaration = 127,
  sym_type_transition_declaration = 128,
  sym_type_change_declaration = 129,
  sym_type_member_declaration = 130,
  sym_role_declaration = 131,
  sym_class = 132,
  sym_type = 133,
  sym_permission = 134,
  sym_rule_declaration = 135,
  sym_boolean_declaration = 136,
  sym_argument = 137,
  sym_arguments = 138,
  sym_macro_declaration = 139,
  sym_macro_usage = 140,
  sym_boolean = 141,
  sym_expansion = 142,
  sym_identifier = 143,
  sym_permissions = 144,
  sym_rule_name = 145,
  sym_classes = 146,
  aux_sym_source_file_repeat1 = 147,
  aux_sym_class_repeat1 = 148,
  aux_sym_type_repeat1 = 149,
  aux_sym_permission_repeat1 = 150,
  aux_sym_argument_repeat1 = 151,
  aux_sym_arguments_repeat1 = 152,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [sym_comment] = "comment",
  [anon_sym_type] = "type",
  [anon_sym_alias] = "alias",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_attribute] = "attribute",
  [anon_sym_expandattribute] = "expandattribute",
  [anon_sym_typeattribute] = "typeattribute",
  [anon_sym_typealias] = "typealias",
  [anon_sym_permissive] = "permissive",
  [anon_sym_type_transition] = "type_transition",
  [anon_sym_COLON] = ":",
  [anon_sym_type_change] = "type_change",
  [anon_sym_type_member] = "type_member",
  [anon_sym_role] = "role",
  [anon_sym_types] = "types",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_bool] = "bool",
  [anon_sym_interface] = "interface",
  [anon_sym_LPAREN] = "(",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_RPAREN] = ")",
  [sym_negative] = "negative",
  [sym_complement] = "complement",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_expansion_token1] = "expansion_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_allow] = "allow",
  [anon_sym_auditallow] = "auditallow",
  [anon_sym_dontaudit] = "dontaudit",
  [anon_sym_neverallow] = "neverallow",
  [anon_sym_appletalk_socket] = "appletalk_socket",
  [anon_sym_association] = "association",
  [anon_sym_blk_file] = "blk_file",
  [anon_sym_bpf] = "bpf",
  [anon_sym_cap_userns] = "cap_userns",
  [anon_sym_cap2_userns] = "cap2_userns",
  [anon_sym_capability] = "capability",
  [anon_sym_capability2] = "capability2",
  [anon_sym_chr_file] = "chr_file",
  [anon_sym_dccp_socket] = "dccp_socket",
  [anon_sym_dgram_socket_class_set] = "dgram_socket_class_set",
  [anon_sym_dir] = "dir",
  [anon_sym_fd] = "fd",
  [anon_sym_fifo_file] = "fifo_file",
  [anon_sym_file] = "file",
  [anon_sym_filesystem] = "filesystem",
  [anon_sym_ipc] = "ipc",
  [anon_sym_kernel_service] = "kernel_service",
  [anon_sym_key] = "key",
  [anon_sym_key_socket] = "key_socket",
  [anon_sym_lnk_file] = "lnk_file",
  [anon_sym_memprotect] = "memprotect",
  [anon_sym_msg] = "msg",
  [anon_sym_msgq] = "msgq",
  [anon_sym_netif] = "netif",
  [anon_sym_netlink_socket] = "netlink_socket",
  [anon_sym_netlink_audit_socket] = "netlink_audit_socket",
  [anon_sym_netlink_dnrt_socket] = "netlink_dnrt_socket",
  [anon_sym_netlink_firewall_socket] = "netlink_firewall_socket",
  [anon_sym_netlink_ip6fw_socket] = "netlink_ip6fw_socket",
  [anon_sym_netlink_kobject_uevent_socket] = "netlink_kobject_uevent_socket",
  [anon_sym_netlink_nflog_socket] = "netlink_nflog_socket",
  [anon_sym_netlink_route_socket] = "netlink_route_socket",
  [anon_sym_netlink_selinux_socket] = "netlink_selinux_socket",
  [anon_sym_netlink_tcpdiag_socket] = "netlink_tcpdiag_socket",
  [anon_sym_netlink_xfrm_socket] = "netlink_xfrm_socket",
  [anon_sym_node] = "node",
  [anon_sym_packet] = "packet",
  [anon_sym_packet_socket] = "packet_socket",
  [anon_sym_peer] = "peer",
  [anon_sym_process] = "process",
  [anon_sym_process2] = "process2",
  [anon_sym_rawip_socket] = "rawip_socket",
  [anon_sym_security] = "security",
  [anon_sym_service] = "service",
  [anon_sym_sem] = "sem",
  [anon_sym_shm] = "shm",
  [anon_sym_sock_file] = "sock_file",
  [anon_sym_socket] = "socket",
  [anon_sym_system] = "system",
  [anon_sym_tcp_socket] = "tcp_socket",
  [anon_sym_tun_socket] = "tun_socket",
  [anon_sym_udp_socket] = "udp_socket",
  [anon_sym_unix_dgram_socket] = "unix_dgram_socket",
  [anon_sym_unix_stream_socket] = "unix_stream_socket",
  [anon_sym_db_blob] = "db_blob",
  [anon_sym_db_column] = "db_column",
  [anon_sym_db_database] = "db_database",
  [anon_sym_db_procedure] = "db_procedure",
  [anon_sym_db_table] = "db_table",
  [anon_sym_db_tuple] = "db_tuple",
  [anon_sym_dbus] = "dbus",
  [anon_sym_context] = "context",
  [anon_sym_nscd] = "nscd",
  [anon_sym_passwd] = "passwd",
  [anon_sym_x_application_data] = "x_application_data",
  [anon_sym_x_client] = "x_client",
  [anon_sym_x_colormap] = "x_colormap",
  [anon_sym_x_cursor] = "x_cursor",
  [anon_sym_x_device] = "x_device",
  [anon_sym_x_drawable] = "x_drawable",
  [anon_sym_x_event] = "x_event",
  [anon_sym_x_extension] = "x_extension",
  [anon_sym_x_font] = "x_font",
  [anon_sym_x_gc] = "x_gc",
  [anon_sym_x_keyboard] = "x_keyboard",
  [anon_sym_x_pointer] = "x_pointer",
  [anon_sym_x_property] = "x_property",
  [anon_sym_x_resource] = "x_resource",
  [anon_sym_x_screen] = "x_screen",
  [anon_sym_x_selection] = "x_selection",
  [anon_sym_x_server] = "x_server",
  [anon_sym_x_synthetic_event] = "x_synthetic_event",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_type_declaration] = "type_declaration",
  [sym_attribute_declaration] = "attribute_declaration",
  [sym_expandattribute_declaration] = "expandattribute_declaration",
  [sym_typeattribute_declaration] = "typeattribute_declaration",
  [sym_typealias_declaration] = "typealias_declaration",
  [sym_permissive_declaration] = "permissive_declaration",
  [sym_type_transition_declaration] = "type_transition_declaration",
  [sym_type_change_declaration] = "type_change_declaration",
  [sym_type_member_declaration] = "type_member_declaration",
  [sym_role_declaration] = "role_declaration",
  [sym_class] = "class",
  [sym_type] = "type",
  [sym_permission] = "permission",
  [sym_rule_declaration] = "rule_declaration",
  [sym_boolean_declaration] = "boolean_declaration",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_macro_declaration] = "macro_declaration",
  [sym_macro_usage] = "macro_usage",
  [sym_boolean] = "boolean",
  [sym_expansion] = "expansion",
  [sym_identifier] = "identifier",
  [sym_permissions] = "permissions",
  [sym_rule_name] = "rule_name",
  [sym_classes] = "classes",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_permission_repeat1] = "permission_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [sym_comment] = sym_comment,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_expandattribute] = anon_sym_expandattribute,
  [anon_sym_typeattribute] = anon_sym_typeattribute,
  [anon_sym_typealias] = anon_sym_typealias,
  [anon_sym_permissive] = anon_sym_permissive,
  [anon_sym_type_transition] = anon_sym_type_transition,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type_change] = anon_sym_type_change,
  [anon_sym_type_member] = anon_sym_type_member,
  [anon_sym_role] = anon_sym_role,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_negative] = sym_negative,
  [sym_complement] = sym_complement,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_expansion_token1] = aux_sym_expansion_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_auditallow] = anon_sym_auditallow,
  [anon_sym_dontaudit] = anon_sym_dontaudit,
  [anon_sym_neverallow] = anon_sym_neverallow,
  [anon_sym_appletalk_socket] = anon_sym_appletalk_socket,
  [anon_sym_association] = anon_sym_association,
  [anon_sym_blk_file] = anon_sym_blk_file,
  [anon_sym_bpf] = anon_sym_bpf,
  [anon_sym_cap_userns] = anon_sym_cap_userns,
  [anon_sym_cap2_userns] = anon_sym_cap2_userns,
  [anon_sym_capability] = anon_sym_capability,
  [anon_sym_capability2] = anon_sym_capability2,
  [anon_sym_chr_file] = anon_sym_chr_file,
  [anon_sym_dccp_socket] = anon_sym_dccp_socket,
  [anon_sym_dgram_socket_class_set] = anon_sym_dgram_socket_class_set,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_fd] = anon_sym_fd,
  [anon_sym_fifo_file] = anon_sym_fifo_file,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_filesystem] = anon_sym_filesystem,
  [anon_sym_ipc] = anon_sym_ipc,
  [anon_sym_kernel_service] = anon_sym_kernel_service,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_key_socket] = anon_sym_key_socket,
  [anon_sym_lnk_file] = anon_sym_lnk_file,
  [anon_sym_memprotect] = anon_sym_memprotect,
  [anon_sym_msg] = anon_sym_msg,
  [anon_sym_msgq] = anon_sym_msgq,
  [anon_sym_netif] = anon_sym_netif,
  [anon_sym_netlink_socket] = anon_sym_netlink_socket,
  [anon_sym_netlink_audit_socket] = anon_sym_netlink_audit_socket,
  [anon_sym_netlink_dnrt_socket] = anon_sym_netlink_dnrt_socket,
  [anon_sym_netlink_firewall_socket] = anon_sym_netlink_firewall_socket,
  [anon_sym_netlink_ip6fw_socket] = anon_sym_netlink_ip6fw_socket,
  [anon_sym_netlink_kobject_uevent_socket] = anon_sym_netlink_kobject_uevent_socket,
  [anon_sym_netlink_nflog_socket] = anon_sym_netlink_nflog_socket,
  [anon_sym_netlink_route_socket] = anon_sym_netlink_route_socket,
  [anon_sym_netlink_selinux_socket] = anon_sym_netlink_selinux_socket,
  [anon_sym_netlink_tcpdiag_socket] = anon_sym_netlink_tcpdiag_socket,
  [anon_sym_netlink_xfrm_socket] = anon_sym_netlink_xfrm_socket,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_packet] = anon_sym_packet,
  [anon_sym_packet_socket] = anon_sym_packet_socket,
  [anon_sym_peer] = anon_sym_peer,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_process2] = anon_sym_process2,
  [anon_sym_rawip_socket] = anon_sym_rawip_socket,
  [anon_sym_security] = anon_sym_security,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_sem] = anon_sym_sem,
  [anon_sym_shm] = anon_sym_shm,
  [anon_sym_sock_file] = anon_sym_sock_file,
  [anon_sym_socket] = anon_sym_socket,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_tcp_socket] = anon_sym_tcp_socket,
  [anon_sym_tun_socket] = anon_sym_tun_socket,
  [anon_sym_udp_socket] = anon_sym_udp_socket,
  [anon_sym_unix_dgram_socket] = anon_sym_unix_dgram_socket,
  [anon_sym_unix_stream_socket] = anon_sym_unix_stream_socket,
  [anon_sym_db_blob] = anon_sym_db_blob,
  [anon_sym_db_column] = anon_sym_db_column,
  [anon_sym_db_database] = anon_sym_db_database,
  [anon_sym_db_procedure] = anon_sym_db_procedure,
  [anon_sym_db_table] = anon_sym_db_table,
  [anon_sym_db_tuple] = anon_sym_db_tuple,
  [anon_sym_dbus] = anon_sym_dbus,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_nscd] = anon_sym_nscd,
  [anon_sym_passwd] = anon_sym_passwd,
  [anon_sym_x_application_data] = anon_sym_x_application_data,
  [anon_sym_x_client] = anon_sym_x_client,
  [anon_sym_x_colormap] = anon_sym_x_colormap,
  [anon_sym_x_cursor] = anon_sym_x_cursor,
  [anon_sym_x_device] = anon_sym_x_device,
  [anon_sym_x_drawable] = anon_sym_x_drawable,
  [anon_sym_x_event] = anon_sym_x_event,
  [anon_sym_x_extension] = anon_sym_x_extension,
  [anon_sym_x_font] = anon_sym_x_font,
  [anon_sym_x_gc] = anon_sym_x_gc,
  [anon_sym_x_keyboard] = anon_sym_x_keyboard,
  [anon_sym_x_pointer] = anon_sym_x_pointer,
  [anon_sym_x_property] = anon_sym_x_property,
  [anon_sym_x_resource] = anon_sym_x_resource,
  [anon_sym_x_screen] = anon_sym_x_screen,
  [anon_sym_x_selection] = anon_sym_x_selection,
  [anon_sym_x_server] = anon_sym_x_server,
  [anon_sym_x_synthetic_event] = anon_sym_x_synthetic_event,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_type_declaration] = sym_type_declaration,
  [sym_attribute_declaration] = sym_attribute_declaration,
  [sym_expandattribute_declaration] = sym_expandattribute_declaration,
  [sym_typeattribute_declaration] = sym_typeattribute_declaration,
  [sym_typealias_declaration] = sym_typealias_declaration,
  [sym_permissive_declaration] = sym_permissive_declaration,
  [sym_type_transition_declaration] = sym_type_transition_declaration,
  [sym_type_change_declaration] = sym_type_change_declaration,
  [sym_type_member_declaration] = sym_type_member_declaration,
  [sym_role_declaration] = sym_role_declaration,
  [sym_class] = sym_class,
  [sym_type] = sym_type,
  [sym_permission] = sym_permission,
  [sym_rule_declaration] = sym_rule_declaration,
  [sym_boolean_declaration] = sym_boolean_declaration,
  [sym_argument] = sym_argument,
  [sym_arguments] = sym_arguments,
  [sym_macro_declaration] = sym_macro_declaration,
  [sym_macro_usage] = sym_macro_usage,
  [sym_boolean] = sym_boolean,
  [sym_expansion] = sym_expansion,
  [sym_identifier] = sym_identifier,
  [sym_permissions] = sym_permissions,
  [sym_rule_name] = sym_rule_name,
  [sym_classes] = sym_classes,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_repeat1] = aux_sym_class_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_permission_repeat1] = aux_sym_permission_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
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
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expandattribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeattribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typealias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permissive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_transition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_change] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_member] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_complement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auditallow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dontaudit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neverallow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appletalk_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_association] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blk_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap_userns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap2_userns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capability] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capability2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chr_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dccp_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dgram_socket_class_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fifo_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filesystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kernel_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lnk_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memprotect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_audit_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_dnrt_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_firewall_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_ip6fw_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_kobject_uevent_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_nflog_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_route_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_selinux_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_tcpdiag_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_xfrm_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packet_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawip_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sock_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tun_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix_dgram_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix_stream_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_blob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_column] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_database] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nscd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_application_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_colormap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_cursor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_drawable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_gc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_keyboard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_pointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_screen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_selection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_synthetic_event] = {
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
  [sym_attribute_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expandattribute_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_typeattribute_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_typealias_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_permissive_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_transition_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_change_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_role_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_permission] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_permissions] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_classes] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_permission_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias_id = 1,
  field_arg = 2,
  field_argument = 3,
  field_arguments = 4,
  field_attribute_id = 5,
  field_body = 6,
  field_change_type = 7,
  field_class = 8,
  field_default_type = 9,
  field_expand_value = 10,
  field_member_type = 11,
  field_name = 12,
  field_perm_set = 13,
  field_rule_name = 14,
  field_source_type = 15,
  field_target_type = 16,
  field_type = 17,
  field_type_id = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_id] = "alias_id",
  [field_arg] = "arg",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_attribute_id] = "attribute_id",
  [field_body] = "body",
  [field_change_type] = "change_type",
  [field_class] = "class",
  [field_default_type] = "default_type",
  [field_expand_value] = "expand_value",
  [field_member_type] = "member_type",
  [field_name] = "name",
  [field_perm_set] = "perm_set",
  [field_rule_name] = "rule_name",
  [field_source_type] = "source_type",
  [field_target_type] = "target_type",
  [field_type] = "type",
  [field_type_id] = "type_id",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 4},
  [22] = {.index = 35, .length = 4},
  [23] = {.index = 39, .length = 4},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 2},
  [28] = {.index = 50, .length = 1},
  [29] = {.index = 51, .length = 3},
  [30] = {.index = 54, .length = 1},
  [31] = {.index = 55, .length = 2},
  [32] = {.index = 57, .length = 1},
  [33] = {.index = 58, .length = 5},
  [34] = {.index = 63, .length = 2},
  [35] = {.index = 65, .length = 2},
  [36] = {.index = 67, .length = 2},
  [37] = {.index = 69, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
  [1] =
    {field_type_id, 1},
  [2] =
    {field_attribute_id, 1},
  [3] =
    {field_name, 0},
  [4] =
    {field_argument, 0},
  [5] =
    {field_arg, 0},
  [6] =
    {field_type, 1},
  [7] =
    {field_attribute_id, 1},
    {field_expand_value, 2},
  [9] =
    {field_attribute_id, 2},
    {field_type_id, 1},
  [11] =
    {field_name, 1},
    {field_value, 2},
  [13] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [15] =
    {field_arguments, 2},
    {field_name, 0},
  [17] =
    {field_alias_id, 3},
    {field_type_id, 1},
  [19] =
    {field_attribute_id, 3},
    {field_type_id, 1},
  [21] =
    {field_name, 1},
    {field_type, 3},
  [23] =
    {field_argument, 1},
  [24] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [26] =
    {field_type, 1},
    {field_type, 2, .inherited = true},
  [28] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [30] =
    {field_class, 0},
  [31] =
    {field_class, 4},
    {field_default_type, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [35] =
    {field_change_type, 5},
    {field_class, 4},
    {field_source_type, 1},
    {field_target_type, 2},
  [39] =
    {field_class, 4},
    {field_member_type, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [43] =
    {field_arg, 1},
  [44] =
    {field_arg, 1},
    {field_arg, 2, .inherited = true},
  [46] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [48] =
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [50] =
    {field_perm_set, 0},
  [51] =
    {field_alias_id, 3},
    {field_attribute_id, 5},
    {field_type_id, 1},
  [54] =
    {field_class, 1, .inherited = true},
  [55] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [57] =
    {field_perm_set, 1},
  [58] =
    {field_class, 4},
    {field_perm_set, 5},
    {field_rule_name, 0},
    {field_source_type, 1},
    {field_target_type, 2},
  [63] =
    {field_perm_set, 1},
    {field_perm_set, 2, .inherited = true},
  [65] =
    {field_perm_set, 0, .inherited = true},
    {field_perm_set, 1, .inherited = true},
  [67] =
    {field_body, 7},
    {field_name, 3},
  [69] =
    {field_perm_set, 2},
    {field_perm_set, 3, .inherited = true},
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
  [33] = 30,
  [34] = 24,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '~') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (eof) ADVANCE(4);
      if (lookahead == '\\') SKIP(3)
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'r') SKIP(1)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_negative);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_complement);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'k') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 'r') SKIP(20)
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 20:
      if (lookahead == '\\') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_fd);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'k') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bpf);
      END_STATE();
    case 75:
      if (lookahead == '2') ADVANCE(136);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ipc);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_msg);
      if (lookahead == 'q') ADVANCE(159);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_sem);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_shm);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'x') ADVANCE(181);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(188);
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_dbus);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(222);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 157:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_msgq);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_nscd);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 166:
      if (lookahead == 'w') ADVANCE(233);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_peer);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_role);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 174:
      if (lookahead == '_') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '_') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 181:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 186:
      if (lookahead == 'v') ADVANCE(253);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_x_gc);
      END_STATE();
    case 192:
      if (lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(268);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 210:
      if (lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 215:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 218:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 224:
      if (lookahead == 'f') ADVANCE(288);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_netif);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 236:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 239:
      if (lookahead == 'f') ADVANCE(302);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 241:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 254:
      if (lookahead == 'w') ADVANCE(320);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 258:
      if (lookahead == 'b') ADVANCE(324);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 289:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 293:
      if (lookahead == 'k') ADVANCE(359);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_packet);
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_passwd);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_socket);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 307:
      if (lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(376);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_x_font);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 327:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 331:
      if (lookahead == 'h') ADVANCE(393);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_db_blob);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 344:
      if (lookahead == 'b') ADVANCE(404);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 356:
      if (lookahead == 'k') ADVANCE(416);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 359:
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_process);
      if (lookahead == '2') ADVANCE(423);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 365:
      if (lookahead == 'y') ADVANCE(425);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 368:
      if (lookahead == 'k') ADVANCE(427);
      END_STATE();
    case 369:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 371:
      if (lookahead == 'm') ADVANCE(430);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 375:
      if (lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 378:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 383:
      if (lookahead == 'b') ADVANCE(442);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_x_event);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 394:
      if (lookahead == 'k') ADVANCE(452);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_blk_file);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_chr_file);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_db_table);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_db_tuple);
      END_STATE();
    case 408:
      if (lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 409:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_lnk_file);
      END_STATE();
    case 418:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(474);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(476);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead == 'x') ADVANCE(481);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 422:
      if (lookahead == 'v') ADVANCE(484);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_process2);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 430:
      if (lookahead == 'b') ADVANCE(490);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_x_client);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_x_cursor);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_x_device);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 447:
      if (lookahead == 'c') ADVANCE(504);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_x_screen);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_x_server);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 452:
      if (lookahead == '_') ADVANCE(507);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 455:
      if (lookahead == 'w') ADVANCE(509);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 458:
      if (lookahead == 'y') ADVANCE(512);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_db_column);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 463:
      if (lookahead == 'k') ADVANCE(516);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_dontaudit);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_fifo_file);
      END_STATE();
    case 467:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 475:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 477:
      if (lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(531);
      END_STATE();
    case 481:
      if (lookahead == 'f') ADVANCE(532);
      END_STATE();
    case 482:
      if (lookahead == 'w') ADVANCE(533);
      END_STATE();
    case 483:
      if (lookahead == 'c') ADVANCE(534);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 485:
      if (lookahead == 'k') ADVANCE(536);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_sock_file);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 489:
      if (lookahead == 'g') ADVANCE(539);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 493:
      if (lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(544);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(547);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 501:
      if (lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_x_pointer);
      END_STATE();
    case 503:
      if (lookahead == 'y') ADVANCE(551);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_auditallow);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_cap_userns);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_capability);
      if (lookahead == '2') ADVANCE(558);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_filesystem);
      END_STATE();
    case 519:
      if (lookahead == 'v') ADVANCE(564);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_key_socket);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_memprotect);
      END_STATE();
    case 522:
      if (lookahead == 'd') ADVANCE(565);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 525:
      if (lookahead == '6') ADVANCE(568);
      END_STATE();
    case 526:
      if (lookahead == 'b') ADVANCE(569);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(571);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 530:
      if (lookahead == 'c') ADVANCE(573);
      END_STATE();
    case 531:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_neverallow);
      END_STATE();
    case 534:
      if (lookahead == 'k') ADVANCE(576);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_permissive);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_tcp_socket);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_tun_socket);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_udp_socket);
      END_STATE();
    case 544:
      if (lookahead == '_') ADVANCE(582);
      END_STATE();
    case 545:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_x_colormap);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_x_drawable);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_x_keyboard);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_x_property);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_x_resource);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_association);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_cap2_userns);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_capability2);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_db_database);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_dccp_socket);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 563:
      if (lookahead == 'b') ADVANCE(591);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 568:
      if (lookahead == 'f') ADVANCE(596);
      END_STATE();
    case 569:
      if (lookahead == 'j') ADVANCE(597);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 573:
      if (lookahead == 'k') ADVANCE(601);
      END_STATE();
    case 574:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 575:
      if (lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 576:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_type_change);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_type_member);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 583:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_x_extension);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_x_selection);
      END_STATE();
    case 587:
      if (lookahead == '_') ADVANCE(611);
      END_STATE();
    case 588:
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_db_procedure);
      END_STATE();
    case 590:
      if (lookahead == '_') ADVANCE(613);
      END_STATE();
    case 591:
      if (lookahead == 'u') ADVANCE(614);
      END_STATE();
    case 592:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 594:
      if (lookahead == '_') ADVANCE(617);
      END_STATE();
    case 595:
      if (lookahead == 'w') ADVANCE(618);
      END_STATE();
    case 596:
      if (lookahead == 'w') ADVANCE(619);
      END_STATE();
    case 597:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 598:
      if (lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 599:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(623);
      END_STATE();
    case 601:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 602:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 603:
      if (lookahead == '_') ADVANCE(626);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_rawip_socket);
      END_STATE();
    case 606:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 607:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 611:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 612:
      if (lookahead == 'k') ADVANCE(634);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(635);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 615:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 616:
      if (lookahead == '_') ADVANCE(638);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 618:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 619:
      if (lookahead == '_') ADVANCE(641);
      END_STATE();
    case 620:
      if (lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 621:
      if (lookahead == '_') ADVANCE(643);
      END_STATE();
    case 622:
      if (lookahead == '_') ADVANCE(644);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 625:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_packet_socket);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_typeattribute);
      END_STATE();
    case 630:
      if (lookahead == 'c') ADVANCE(650);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 632:
      if (lookahead == '_') ADVANCE(652);
      END_STATE();
    case 633:
      if (lookahead == 'v') ADVANCE(653);
      END_STATE();
    case 634:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 635:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 636:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_kernel_service);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 640:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(660);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(664);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_netlink_socket);
      END_STATE();
    case 647:
      if (lookahead == 'g') ADVANCE(665);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 650:
      if (lookahead == 'k') ADVANCE(668);
      END_STATE();
    case 651:
      if (lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 652:
      if (lookahead == 'd') ADVANCE(670);
      END_STATE();
    case 653:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 655:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_expandattribute);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 658:
      if (lookahead == 'c') ADVANCE(675);
      END_STATE();
    case 659:
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 661:
      if (lookahead == '_') ADVANCE(678);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 664:
      if (lookahead == '_') ADVANCE(681);
      END_STATE();
    case 665:
      if (lookahead == '_') ADVANCE(682);
      END_STATE();
    case 666:
      if (lookahead == 'c') ADVANCE(683);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_type_transition);
      END_STATE();
    case 668:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 669:
      if (lookahead == 'k') ADVANCE(685);
      END_STATE();
    case 670:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 671:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_appletalk_socket);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 674:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 675:
      if (lookahead == 'k') ADVANCE(690);
      END_STATE();
    case 676:
      if (lookahead == '_') ADVANCE(691);
      END_STATE();
    case 677:
      if (lookahead == 'c') ADVANCE(692);
      END_STATE();
    case 678:
      if (lookahead == 'u') ADVANCE(693);
      END_STATE();
    case 679:
      if (lookahead == 'c') ADVANCE(694);
      END_STATE();
    case 680:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 683:
      if (lookahead == 'k') ADVANCE(698);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 685:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(703);
      END_STATE();
    case 689:
      if (lookahead == 'k') ADVANCE(704);
      END_STATE();
    case 690:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 692:
      if (lookahead == 'k') ADVANCE(707);
      END_STATE();
    case 693:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 694:
      if (lookahead == 'k') ADVANCE(709);
      END_STATE();
    case 695:
      if (lookahead == 'k') ADVANCE(710);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 698:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_unix_dgram_socket);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 701:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_x_synthetic_event);
      END_STATE();
    case 703:
      if (lookahead == '_') ADVANCE(716);
      END_STATE();
    case 704:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 707:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 708:
      if (lookahead == 'v') ADVANCE(721);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 710:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 711:
      if (lookahead == 'c') ADVANCE(724);
      END_STATE();
    case 712:
      if (lookahead == 'c') ADVANCE(725);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_unix_stream_socket);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_x_application_data);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_netlink_dnrt_socket);
      END_STATE();
    case 719:
      if (lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(732);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 724:
      if (lookahead == 'k') ADVANCE(734);
      END_STATE();
    case 725:
      if (lookahead == 'k') ADVANCE(735);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_netlink_xfrm_socket);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_netlink_audit_socket);
      END_STATE();
    case 729:
      if (lookahead == 'k') ADVANCE(737);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_netlink_ip6fw_socket);
      END_STATE();
    case 731:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_netlink_nflog_socket);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_netlink_route_socket);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_dgram_socket_class_set);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 743:
      if (lookahead == '_') ADVANCE(747);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_netlink_selinux_socket);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_netlink_tcpdiag_socket);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_netlink_firewall_socket);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 748:
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 749:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 750:
      if (lookahead == 'k') ADVANCE(751);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_netlink_kobject_uevent_socket);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_expandattribute] = ACTIONS(1),
    [anon_sym_typeattribute] = ACTIONS(1),
    [anon_sym_typealias] = ACTIONS(1),
    [anon_sym_permissive] = ACTIONS(1),
    [anon_sym_type_transition] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type_change] = ACTIONS(1),
    [anon_sym_type_member] = ACTIONS(1),
    [anon_sym_role] = ACTIONS(1),
    [anon_sym_types] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_negative] = ACTIONS(1),
    [sym_complement] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_expansion_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_auditallow] = ACTIONS(1),
    [anon_sym_dontaudit] = ACTIONS(1),
    [anon_sym_neverallow] = ACTIONS(1),
    [anon_sym_appletalk_socket] = ACTIONS(1),
    [anon_sym_association] = ACTIONS(1),
    [anon_sym_blk_file] = ACTIONS(1),
    [anon_sym_bpf] = ACTIONS(1),
    [anon_sym_cap_userns] = ACTIONS(1),
    [anon_sym_cap2_userns] = ACTIONS(1),
    [anon_sym_capability] = ACTIONS(1),
    [anon_sym_capability2] = ACTIONS(1),
    [anon_sym_chr_file] = ACTIONS(1),
    [anon_sym_dccp_socket] = ACTIONS(1),
    [anon_sym_dgram_socket_class_set] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_fd] = ACTIONS(1),
    [anon_sym_fifo_file] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_filesystem] = ACTIONS(1),
    [anon_sym_ipc] = ACTIONS(1),
    [anon_sym_kernel_service] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_key_socket] = ACTIONS(1),
    [anon_sym_lnk_file] = ACTIONS(1),
    [anon_sym_memprotect] = ACTIONS(1),
    [anon_sym_msg] = ACTIONS(1),
    [anon_sym_msgq] = ACTIONS(1),
    [anon_sym_netif] = ACTIONS(1),
    [anon_sym_netlink_socket] = ACTIONS(1),
    [anon_sym_netlink_audit_socket] = ACTIONS(1),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(1),
    [anon_sym_netlink_firewall_socket] = ACTIONS(1),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(1),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(1),
    [anon_sym_netlink_nflog_socket] = ACTIONS(1),
    [anon_sym_netlink_route_socket] = ACTIONS(1),
    [anon_sym_netlink_selinux_socket] = ACTIONS(1),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(1),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_packet] = ACTIONS(1),
    [anon_sym_packet_socket] = ACTIONS(1),
    [anon_sym_peer] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_process2] = ACTIONS(1),
    [anon_sym_rawip_socket] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_sem] = ACTIONS(1),
    [anon_sym_shm] = ACTIONS(1),
    [anon_sym_sock_file] = ACTIONS(1),
    [anon_sym_socket] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_tcp_socket] = ACTIONS(1),
    [anon_sym_tun_socket] = ACTIONS(1),
    [anon_sym_udp_socket] = ACTIONS(1),
    [anon_sym_unix_dgram_socket] = ACTIONS(1),
    [anon_sym_unix_stream_socket] = ACTIONS(1),
    [anon_sym_db_blob] = ACTIONS(1),
    [anon_sym_db_column] = ACTIONS(1),
    [anon_sym_db_database] = ACTIONS(1),
    [anon_sym_db_procedure] = ACTIONS(1),
    [anon_sym_db_table] = ACTIONS(1),
    [anon_sym_db_tuple] = ACTIONS(1),
    [anon_sym_dbus] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_nscd] = ACTIONS(1),
    [anon_sym_passwd] = ACTIONS(1),
    [anon_sym_x_application_data] = ACTIONS(1),
    [anon_sym_x_client] = ACTIONS(1),
    [anon_sym_x_colormap] = ACTIONS(1),
    [anon_sym_x_cursor] = ACTIONS(1),
    [anon_sym_x_device] = ACTIONS(1),
    [anon_sym_x_drawable] = ACTIONS(1),
    [anon_sym_x_event] = ACTIONS(1),
    [anon_sym_x_extension] = ACTIONS(1),
    [anon_sym_x_font] = ACTIONS(1),
    [anon_sym_x_gc] = ACTIONS(1),
    [anon_sym_x_keyboard] = ACTIONS(1),
    [anon_sym_x_pointer] = ACTIONS(1),
    [anon_sym_x_property] = ACTIONS(1),
    [anon_sym_x_resource] = ACTIONS(1),
    [anon_sym_x_screen] = ACTIONS(1),
    [anon_sym_x_selection] = ACTIONS(1),
    [anon_sym_x_server] = ACTIONS(1),
    [anon_sym_x_synthetic_event] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym__definition] = STATE(12),
    [sym_type_declaration] = STATE(12),
    [sym_attribute_declaration] = STATE(12),
    [sym_expandattribute_declaration] = STATE(12),
    [sym_typeattribute_declaration] = STATE(12),
    [sym_typealias_declaration] = STATE(12),
    [sym_permissive_declaration] = STATE(12),
    [sym_type_transition_declaration] = STATE(12),
    [sym_type_change_declaration] = STATE(12),
    [sym_type_member_declaration] = STATE(12),
    [sym_role_declaration] = STATE(12),
    [sym_rule_declaration] = STATE(12),
    [sym_boolean_declaration] = STATE(12),
    [sym_macro_declaration] = STATE(12),
    [sym_macro_usage] = STATE(12),
    [sym_rule_name] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_attribute] = ACTIONS(11),
    [anon_sym_expandattribute] = ACTIONS(13),
    [anon_sym_typeattribute] = ACTIONS(15),
    [anon_sym_typealias] = ACTIONS(17),
    [anon_sym_permissive] = ACTIONS(19),
    [anon_sym_type_transition] = ACTIONS(21),
    [anon_sym_type_change] = ACTIONS(23),
    [anon_sym_type_member] = ACTIONS(25),
    [anon_sym_role] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_allow] = ACTIONS(33),
    [anon_sym_auditallow] = ACTIONS(33),
    [anon_sym_dontaudit] = ACTIONS(33),
    [anon_sym_neverallow] = ACTIONS(33),
  },
  [2] = {
    [sym_word] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_complement] = ACTIONS(37),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_appletalk_socket] = ACTIONS(35),
    [anon_sym_association] = ACTIONS(35),
    [anon_sym_blk_file] = ACTIONS(35),
    [anon_sym_bpf] = ACTIONS(35),
    [anon_sym_cap_userns] = ACTIONS(35),
    [anon_sym_cap2_userns] = ACTIONS(35),
    [anon_sym_capability] = ACTIONS(35),
    [anon_sym_capability2] = ACTIONS(35),
    [anon_sym_chr_file] = ACTIONS(35),
    [anon_sym_dccp_socket] = ACTIONS(35),
    [anon_sym_dgram_socket_class_set] = ACTIONS(35),
    [anon_sym_dir] = ACTIONS(35),
    [anon_sym_fd] = ACTIONS(35),
    [anon_sym_fifo_file] = ACTIONS(35),
    [anon_sym_file] = ACTIONS(35),
    [anon_sym_filesystem] = ACTIONS(35),
    [anon_sym_ipc] = ACTIONS(35),
    [anon_sym_kernel_service] = ACTIONS(35),
    [anon_sym_key] = ACTIONS(35),
    [anon_sym_key_socket] = ACTIONS(35),
    [anon_sym_lnk_file] = ACTIONS(35),
    [anon_sym_memprotect] = ACTIONS(35),
    [anon_sym_msg] = ACTIONS(35),
    [anon_sym_msgq] = ACTIONS(35),
    [anon_sym_netif] = ACTIONS(35),
    [anon_sym_netlink_socket] = ACTIONS(35),
    [anon_sym_netlink_audit_socket] = ACTIONS(35),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(35),
    [anon_sym_netlink_firewall_socket] = ACTIONS(35),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(35),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(35),
    [anon_sym_netlink_nflog_socket] = ACTIONS(35),
    [anon_sym_netlink_route_socket] = ACTIONS(35),
    [anon_sym_netlink_selinux_socket] = ACTIONS(35),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(35),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(35),
    [anon_sym_node] = ACTIONS(35),
    [anon_sym_packet] = ACTIONS(35),
    [anon_sym_packet_socket] = ACTIONS(35),
    [anon_sym_peer] = ACTIONS(35),
    [anon_sym_process] = ACTIONS(35),
    [anon_sym_process2] = ACTIONS(35),
    [anon_sym_rawip_socket] = ACTIONS(35),
    [anon_sym_security] = ACTIONS(35),
    [anon_sym_service] = ACTIONS(35),
    [anon_sym_sem] = ACTIONS(35),
    [anon_sym_shm] = ACTIONS(35),
    [anon_sym_sock_file] = ACTIONS(35),
    [anon_sym_socket] = ACTIONS(35),
    [anon_sym_system] = ACTIONS(35),
    [anon_sym_tcp_socket] = ACTIONS(35),
    [anon_sym_tun_socket] = ACTIONS(35),
    [anon_sym_udp_socket] = ACTIONS(35),
    [anon_sym_unix_dgram_socket] = ACTIONS(35),
    [anon_sym_unix_stream_socket] = ACTIONS(35),
    [anon_sym_db_blob] = ACTIONS(35),
    [anon_sym_db_column] = ACTIONS(35),
    [anon_sym_db_database] = ACTIONS(35),
    [anon_sym_db_procedure] = ACTIONS(35),
    [anon_sym_db_table] = ACTIONS(35),
    [anon_sym_db_tuple] = ACTIONS(35),
    [anon_sym_dbus] = ACTIONS(35),
    [anon_sym_context] = ACTIONS(35),
    [anon_sym_nscd] = ACTIONS(35),
    [anon_sym_passwd] = ACTIONS(35),
    [anon_sym_x_application_data] = ACTIONS(35),
    [anon_sym_x_client] = ACTIONS(35),
    [anon_sym_x_colormap] = ACTIONS(35),
    [anon_sym_x_cursor] = ACTIONS(35),
    [anon_sym_x_device] = ACTIONS(35),
    [anon_sym_x_drawable] = ACTIONS(35),
    [anon_sym_x_event] = ACTIONS(35),
    [anon_sym_x_extension] = ACTIONS(35),
    [anon_sym_x_font] = ACTIONS(35),
    [anon_sym_x_gc] = ACTIONS(35),
    [anon_sym_x_keyboard] = ACTIONS(35),
    [anon_sym_x_pointer] = ACTIONS(35),
    [anon_sym_x_property] = ACTIONS(35),
    [anon_sym_x_resource] = ACTIONS(35),
    [anon_sym_x_screen] = ACTIONS(35),
    [anon_sym_x_selection] = ACTIONS(35),
    [anon_sym_x_server] = ACTIONS(35),
    [anon_sym_x_synthetic_event] = ACTIONS(35),
  },
  [3] = {
    [sym_class] = STATE(36),
    [sym_classes] = STATE(62),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dgram_socket_class_set] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(43),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(43),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(43),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(43),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_x_application_data] = ACTIONS(41),
    [anon_sym_x_client] = ACTIONS(41),
    [anon_sym_x_colormap] = ACTIONS(41),
    [anon_sym_x_cursor] = ACTIONS(41),
    [anon_sym_x_device] = ACTIONS(41),
    [anon_sym_x_drawable] = ACTIONS(41),
    [anon_sym_x_event] = ACTIONS(41),
    [anon_sym_x_extension] = ACTIONS(41),
    [anon_sym_x_font] = ACTIONS(41),
    [anon_sym_x_gc] = ACTIONS(41),
    [anon_sym_x_keyboard] = ACTIONS(41),
    [anon_sym_x_pointer] = ACTIONS(41),
    [anon_sym_x_property] = ACTIONS(41),
    [anon_sym_x_resource] = ACTIONS(41),
    [anon_sym_x_screen] = ACTIONS(41),
    [anon_sym_x_selection] = ACTIONS(41),
    [anon_sym_x_server] = ACTIONS(41),
    [anon_sym_x_synthetic_event] = ACTIONS(41),
  },
  [4] = {
    [sym_classes] = STATE(8),
    [aux_sym_class_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dgram_socket_class_set] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(43),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(43),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(43),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(43),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_x_application_data] = ACTIONS(41),
    [anon_sym_x_client] = ACTIONS(41),
    [anon_sym_x_colormap] = ACTIONS(41),
    [anon_sym_x_cursor] = ACTIONS(41),
    [anon_sym_x_device] = ACTIONS(41),
    [anon_sym_x_drawable] = ACTIONS(41),
    [anon_sym_x_event] = ACTIONS(41),
    [anon_sym_x_extension] = ACTIONS(41),
    [anon_sym_x_font] = ACTIONS(41),
    [anon_sym_x_gc] = ACTIONS(41),
    [anon_sym_x_keyboard] = ACTIONS(41),
    [anon_sym_x_pointer] = ACTIONS(41),
    [anon_sym_x_property] = ACTIONS(41),
    [anon_sym_x_resource] = ACTIONS(41),
    [anon_sym_x_screen] = ACTIONS(41),
    [anon_sym_x_selection] = ACTIONS(41),
    [anon_sym_x_server] = ACTIONS(41),
    [anon_sym_x_synthetic_event] = ACTIONS(41),
  },
  [5] = {
    [sym_classes] = STATE(8),
    [aux_sym_class_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(52),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dgram_socket_class_set] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(52),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(52),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(52),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(52),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(52),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_x_application_data] = ACTIONS(49),
    [anon_sym_x_client] = ACTIONS(49),
    [anon_sym_x_colormap] = ACTIONS(49),
    [anon_sym_x_cursor] = ACTIONS(49),
    [anon_sym_x_device] = ACTIONS(49),
    [anon_sym_x_drawable] = ACTIONS(49),
    [anon_sym_x_event] = ACTIONS(49),
    [anon_sym_x_extension] = ACTIONS(49),
    [anon_sym_x_font] = ACTIONS(49),
    [anon_sym_x_gc] = ACTIONS(49),
    [anon_sym_x_keyboard] = ACTIONS(49),
    [anon_sym_x_pointer] = ACTIONS(49),
    [anon_sym_x_property] = ACTIONS(49),
    [anon_sym_x_resource] = ACTIONS(49),
    [anon_sym_x_screen] = ACTIONS(49),
    [anon_sym_x_selection] = ACTIONS(49),
    [anon_sym_x_server] = ACTIONS(49),
    [anon_sym_x_synthetic_event] = ACTIONS(49),
  },
  [6] = {
    [sym_classes] = STATE(8),
    [aux_sym_class_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dgram_socket_class_set] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(43),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(43),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(43),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(43),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_x_application_data] = ACTIONS(41),
    [anon_sym_x_client] = ACTIONS(41),
    [anon_sym_x_colormap] = ACTIONS(41),
    [anon_sym_x_cursor] = ACTIONS(41),
    [anon_sym_x_device] = ACTIONS(41),
    [anon_sym_x_drawable] = ACTIONS(41),
    [anon_sym_x_event] = ACTIONS(41),
    [anon_sym_x_extension] = ACTIONS(41),
    [anon_sym_x_font] = ACTIONS(41),
    [anon_sym_x_gc] = ACTIONS(41),
    [anon_sym_x_keyboard] = ACTIONS(41),
    [anon_sym_x_pointer] = ACTIONS(41),
    [anon_sym_x_property] = ACTIONS(41),
    [anon_sym_x_resource] = ACTIONS(41),
    [anon_sym_x_screen] = ACTIONS(41),
    [anon_sym_x_selection] = ACTIONS(41),
    [anon_sym_x_server] = ACTIONS(41),
    [anon_sym_x_synthetic_event] = ACTIONS(41),
  },
  [7] = {
    [sym_classes] = STATE(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dgram_socket_class_set] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(43),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(43),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(43),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(43),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_x_application_data] = ACTIONS(41),
    [anon_sym_x_client] = ACTIONS(41),
    [anon_sym_x_colormap] = ACTIONS(41),
    [anon_sym_x_cursor] = ACTIONS(41),
    [anon_sym_x_device] = ACTIONS(41),
    [anon_sym_x_drawable] = ACTIONS(41),
    [anon_sym_x_event] = ACTIONS(41),
    [anon_sym_x_extension] = ACTIONS(41),
    [anon_sym_x_font] = ACTIONS(41),
    [anon_sym_x_gc] = ACTIONS(41),
    [anon_sym_x_keyboard] = ACTIONS(41),
    [anon_sym_x_pointer] = ACTIONS(41),
    [anon_sym_x_property] = ACTIONS(41),
    [anon_sym_x_resource] = ACTIONS(41),
    [anon_sym_x_screen] = ACTIONS(41),
    [anon_sym_x_selection] = ACTIONS(41),
    [anon_sym_x_server] = ACTIONS(41),
    [anon_sym_x_synthetic_event] = ACTIONS(41),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_appletalk_socket] = ACTIONS(55),
    [anon_sym_association] = ACTIONS(55),
    [anon_sym_blk_file] = ACTIONS(55),
    [anon_sym_bpf] = ACTIONS(55),
    [anon_sym_cap_userns] = ACTIONS(55),
    [anon_sym_cap2_userns] = ACTIONS(55),
    [anon_sym_capability] = ACTIONS(57),
    [anon_sym_capability2] = ACTIONS(55),
    [anon_sym_chr_file] = ACTIONS(55),
    [anon_sym_dccp_socket] = ACTIONS(55),
    [anon_sym_dgram_socket_class_set] = ACTIONS(55),
    [anon_sym_dir] = ACTIONS(55),
    [anon_sym_fd] = ACTIONS(55),
    [anon_sym_fifo_file] = ACTIONS(55),
    [anon_sym_file] = ACTIONS(57),
    [anon_sym_filesystem] = ACTIONS(55),
    [anon_sym_ipc] = ACTIONS(55),
    [anon_sym_kernel_service] = ACTIONS(55),
    [anon_sym_key] = ACTIONS(57),
    [anon_sym_key_socket] = ACTIONS(55),
    [anon_sym_lnk_file] = ACTIONS(55),
    [anon_sym_memprotect] = ACTIONS(55),
    [anon_sym_msg] = ACTIONS(57),
    [anon_sym_msgq] = ACTIONS(55),
    [anon_sym_netif] = ACTIONS(55),
    [anon_sym_netlink_socket] = ACTIONS(55),
    [anon_sym_netlink_audit_socket] = ACTIONS(55),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(55),
    [anon_sym_netlink_firewall_socket] = ACTIONS(55),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(55),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(55),
    [anon_sym_netlink_nflog_socket] = ACTIONS(55),
    [anon_sym_netlink_route_socket] = ACTIONS(55),
    [anon_sym_netlink_selinux_socket] = ACTIONS(55),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(55),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(55),
    [anon_sym_node] = ACTIONS(55),
    [anon_sym_packet] = ACTIONS(57),
    [anon_sym_packet_socket] = ACTIONS(55),
    [anon_sym_peer] = ACTIONS(55),
    [anon_sym_process] = ACTIONS(57),
    [anon_sym_process2] = ACTIONS(55),
    [anon_sym_rawip_socket] = ACTIONS(55),
    [anon_sym_security] = ACTIONS(55),
    [anon_sym_service] = ACTIONS(55),
    [anon_sym_sem] = ACTIONS(55),
    [anon_sym_shm] = ACTIONS(55),
    [anon_sym_sock_file] = ACTIONS(55),
    [anon_sym_socket] = ACTIONS(55),
    [anon_sym_system] = ACTIONS(55),
    [anon_sym_tcp_socket] = ACTIONS(55),
    [anon_sym_tun_socket] = ACTIONS(55),
    [anon_sym_udp_socket] = ACTIONS(55),
    [anon_sym_unix_dgram_socket] = ACTIONS(55),
    [anon_sym_unix_stream_socket] = ACTIONS(55),
    [anon_sym_db_blob] = ACTIONS(55),
    [anon_sym_db_column] = ACTIONS(55),
    [anon_sym_db_database] = ACTIONS(55),
    [anon_sym_db_procedure] = ACTIONS(55),
    [anon_sym_db_table] = ACTIONS(55),
    [anon_sym_db_tuple] = ACTIONS(55),
    [anon_sym_dbus] = ACTIONS(55),
    [anon_sym_context] = ACTIONS(55),
    [anon_sym_nscd] = ACTIONS(55),
    [anon_sym_passwd] = ACTIONS(55),
    [anon_sym_x_application_data] = ACTIONS(55),
    [anon_sym_x_client] = ACTIONS(55),
    [anon_sym_x_colormap] = ACTIONS(55),
    [anon_sym_x_cursor] = ACTIONS(55),
    [anon_sym_x_device] = ACTIONS(55),
    [anon_sym_x_drawable] = ACTIONS(55),
    [anon_sym_x_event] = ACTIONS(55),
    [anon_sym_x_extension] = ACTIONS(55),
    [anon_sym_x_font] = ACTIONS(55),
    [anon_sym_x_gc] = ACTIONS(55),
    [anon_sym_x_keyboard] = ACTIONS(55),
    [anon_sym_x_pointer] = ACTIONS(55),
    [anon_sym_x_property] = ACTIONS(55),
    [anon_sym_x_resource] = ACTIONS(55),
    [anon_sym_x_screen] = ACTIONS(55),
    [anon_sym_x_selection] = ACTIONS(55),
    [anon_sym_x_server] = ACTIONS(55),
    [anon_sym_x_synthetic_event] = ACTIONS(55),
  },
  [9] = {
    [sym_classes] = STATE(90),
    [sym_comment] = ACTIONS(3),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dgram_socket_class_set] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(43),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(43),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(43),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(43),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_x_application_data] = ACTIONS(41),
    [anon_sym_x_client] = ACTIONS(41),
    [anon_sym_x_colormap] = ACTIONS(41),
    [anon_sym_x_cursor] = ACTIONS(41),
    [anon_sym_x_device] = ACTIONS(41),
    [anon_sym_x_drawable] = ACTIONS(41),
    [anon_sym_x_event] = ACTIONS(41),
    [anon_sym_x_extension] = ACTIONS(41),
    [anon_sym_x_font] = ACTIONS(41),
    [anon_sym_x_gc] = ACTIONS(41),
    [anon_sym_x_keyboard] = ACTIONS(41),
    [anon_sym_x_pointer] = ACTIONS(41),
    [anon_sym_x_property] = ACTIONS(41),
    [anon_sym_x_resource] = ACTIONS(41),
    [anon_sym_x_screen] = ACTIONS(41),
    [anon_sym_x_selection] = ACTIONS(41),
    [anon_sym_x_server] = ACTIONS(41),
    [anon_sym_x_synthetic_event] = ACTIONS(41),
  },
  [10] = {
    [sym_classes] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dgram_socket_class_set] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(43),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(43),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(43),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(43),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_x_application_data] = ACTIONS(41),
    [anon_sym_x_client] = ACTIONS(41),
    [anon_sym_x_colormap] = ACTIONS(41),
    [anon_sym_x_cursor] = ACTIONS(41),
    [anon_sym_x_device] = ACTIONS(41),
    [anon_sym_x_drawable] = ACTIONS(41),
    [anon_sym_x_event] = ACTIONS(41),
    [anon_sym_x_extension] = ACTIONS(41),
    [anon_sym_x_font] = ACTIONS(41),
    [anon_sym_x_gc] = ACTIONS(41),
    [anon_sym_x_keyboard] = ACTIONS(41),
    [anon_sym_x_pointer] = ACTIONS(41),
    [anon_sym_x_property] = ACTIONS(41),
    [anon_sym_x_resource] = ACTIONS(41),
    [anon_sym_x_screen] = ACTIONS(41),
    [anon_sym_x_selection] = ACTIONS(41),
    [anon_sym_x_server] = ACTIONS(41),
    [anon_sym_x_synthetic_event] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_word,
    ACTIONS(64), 1,
      anon_sym_type,
    ACTIONS(67), 1,
      anon_sym_attribute,
    ACTIONS(70), 1,
      anon_sym_expandattribute,
    ACTIONS(73), 1,
      anon_sym_typeattribute,
    ACTIONS(76), 1,
      anon_sym_typealias,
    ACTIONS(79), 1,
      anon_sym_permissive,
    ACTIONS(82), 1,
      anon_sym_type_transition,
    ACTIONS(85), 1,
      anon_sym_type_change,
    ACTIONS(88), 1,
      anon_sym_type_member,
    ACTIONS(91), 1,
      anon_sym_role,
    ACTIONS(94), 1,
      anon_sym_bool,
    ACTIONS(97), 1,
      anon_sym_interface,
    STATE(41), 1,
      sym_rule_name,
    ACTIONS(100), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(11), 16,
      sym__definition,
      sym_type_declaration,
      sym_attribute_declaration,
      sym_expandattribute_declaration,
      sym_typeattribute_declaration,
      sym_typealias_declaration,
      sym_permissive_declaration,
      sym_type_transition_declaration,
      sym_type_change_declaration,
      sym_type_member_declaration,
      sym_role_declaration,
      sym_rule_declaration,
      sym_boolean_declaration,
      sym_macro_declaration,
      sym_macro_usage,
      aux_sym_source_file_repeat1,
  [73] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      anon_sym_attribute,
    ACTIONS(13), 1,
      anon_sym_expandattribute,
    ACTIONS(15), 1,
      anon_sym_typeattribute,
    ACTIONS(17), 1,
      anon_sym_typealias,
    ACTIONS(19), 1,
      anon_sym_permissive,
    ACTIONS(21), 1,
      anon_sym_type_transition,
    ACTIONS(23), 1,
      anon_sym_type_change,
    ACTIONS(25), 1,
      anon_sym_type_member,
    ACTIONS(27), 1,
      anon_sym_role,
    ACTIONS(29), 1,
      anon_sym_bool,
    ACTIONS(31), 1,
      anon_sym_interface,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_rule_name,
    ACTIONS(33), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(11), 16,
      sym__definition,
      sym_type_declaration,
      sym_attribute_declaration,
      sym_expandattribute_declaration,
      sym_typeattribute_declaration,
      sym_typealias_declaration,
      sym_permissive_declaration,
      sym_type_transition_declaration,
      sym_type_change_declaration,
      sym_type_member_declaration,
      sym_role_declaration,
      sym_rule_declaration,
      sym_boolean_declaration,
      sym_macro_declaration,
      sym_macro_usage,
      aux_sym_source_file_repeat1,
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(107), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(111), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(115), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(119), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(123), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(127), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(131), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(135), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 17,
      anon_sym_type,
      anon_sym_attribute,
      anon_sym_expandattribute,
      anon_sym_typeattribute,
      anon_sym_typealias,
      anon_sym_permissive,
      anon_sym_type_transition,
      anon_sym_type_change,
      anon_sym_type_member,
      anon_sym_role,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_alias,
      anon_sym_types,
      anon_sym_true,
      anon_sym_false,
      sym_word,
    ACTIONS(173), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_negative,
      sym_complement,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 5,
      anon_sym_alias,
      anon_sym_types,
      anon_sym_true,
      anon_sym_false,
      sym_word,
    ACTIONS(149), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_negative,
      sym_complement,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_typeattribute,
    STATE(41), 1,
      sym_rule_name,
    ACTIONS(33), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(130), 4,
      sym_type_declaration,
      sym_typeattribute_declaration,
      sym_rule_declaration,
      sym_macro_usage,
  [748] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      sym_complement,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_expansion,
    STATE(60), 1,
      sym_identifier,
    STATE(115), 1,
      sym_permission,
    STATE(135), 1,
      sym_permissions,
  [779] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_expansion,
    STATE(100), 1,
      sym_argument,
    STATE(104), 1,
      sym_identifier,
    STATE(137), 1,
      sym_arguments,
  [807] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expansion,
    STATE(39), 1,
      aux_sym_permission_repeat1,
    STATE(60), 1,
      sym_identifier,
    STATE(76), 1,
      sym_permissions,
  [835] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_word,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_expansion,
    STATE(39), 1,
      aux_sym_permission_repeat1,
    STATE(60), 1,
      sym_identifier,
    STATE(76), 1,
      sym_permissions,
  [863] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expansion,
    STATE(39), 1,
      aux_sym_permission_repeat1,
    STATE(60), 1,
      sym_identifier,
    STATE(76), 1,
      sym_permissions,
  [891] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_complement,
    STATE(33), 1,
      sym_expansion,
    STATE(45), 1,
      sym_type,
    STATE(64), 1,
      sym_identifier,
  [916] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym_negative,
    STATE(33), 1,
      sym_expansion,
    STATE(50), 1,
      aux_sym_type_repeat1,
    STATE(81), 1,
      sym_identifier,
  [941] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_word,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      sym_negative,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(43), 1,
      aux_sym_argument_repeat1,
    STATE(95), 1,
      sym_identifier,
  [966] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      sym_negative,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expansion,
    STATE(50), 1,
      aux_sym_type_repeat1,
    STATE(81), 1,
      sym_identifier,
  [991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_complement,
    STATE(33), 1,
      sym_expansion,
    STATE(64), 1,
      sym_identifier,
    STATE(140), 1,
      sym_type,
  [1016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_expansion,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_permissions,
  [1041] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_expansion,
    STATE(40), 1,
      aux_sym_permission_repeat1,
    STATE(60), 1,
      sym_identifier,
    STATE(76), 1,
      sym_permissions,
  [1066] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      sym_negative,
    STATE(33), 1,
      sym_expansion,
    STATE(43), 1,
      aux_sym_argument_repeat1,
    STATE(95), 1,
      sym_identifier,
  [1091] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_expansion,
    STATE(38), 1,
      aux_sym_permission_repeat1,
    STATE(60), 1,
      sym_identifier,
    STATE(76), 1,
      sym_permissions,
  [1116] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_word,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      sym_negative,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(50), 1,
      aux_sym_type_repeat1,
    STATE(81), 1,
      sym_identifier,
  [1141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      sym_negative,
    STATE(33), 1,
      sym_expansion,
    STATE(42), 1,
      aux_sym_type_repeat1,
    STATE(81), 1,
      sym_identifier,
  [1163] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_expansion,
    STATE(104), 1,
      sym_identifier,
    STATE(105), 1,
      sym_argument,
  [1185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_expansion,
    STATE(47), 1,
      sym_permissions,
    STATE(60), 1,
      sym_identifier,
  [1207] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      sym_negative,
    STATE(33), 1,
      sym_expansion,
    STATE(48), 1,
      aux_sym_argument_repeat1,
    STATE(95), 1,
      sym_identifier,
  [1229] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_expansion,
    STATE(49), 1,
      sym_permissions,
    STATE(60), 1,
      sym_identifier,
  [1251] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      sym_negative,
    STATE(33), 1,
      sym_expansion,
    STATE(44), 1,
      aux_sym_type_repeat1,
    STATE(81), 1,
      sym_identifier,
  [1273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_expansion,
    STATE(58), 1,
      sym_identifier,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [1379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(122), 1,
      sym_identifier,
  [1395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(117), 1,
      sym_identifier,
  [1411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(51), 1,
      sym_identifier,
  [1427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(103), 1,
      sym_identifier,
  [1443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(66), 1,
      sym_identifier,
  [1459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(111), 1,
      sym_identifier,
  [1475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(110), 1,
      sym_identifier,
  [1491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(92), 1,
      sym_identifier,
  [1507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(98), 1,
      sym_identifier,
  [1523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(79), 1,
      sym_identifier,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(96), 1,
      sym_identifier,
  [1565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(141), 1,
      sym_identifier,
  [1581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(131), 1,
      sym_identifier,
  [1597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(65), 1,
      sym_identifier,
  [1613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(54), 1,
      sym_identifier,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [1659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(125), 1,
      sym_identifier,
  [1675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(127), 1,
      sym_identifier,
  [1691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(106), 1,
      sym_identifier,
  [1707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(56), 1,
      sym_identifier,
  [1723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_word,
    ACTIONS(280), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expansion,
  [1739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_word,
    ACTIONS(280), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expansion,
  [1755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_word,
    ACTIONS(280), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expansion,
  [1771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(129), 1,
      sym_identifier,
  [1787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(136), 1,
      sym_identifier,
  [1803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(84), 1,
      sym_identifier,
  [1819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [1829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(120), 1,
      sym_identifier,
  [1845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(133), 1,
      sym_identifier,
  [1861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_alias,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym_boolean,
    ACTIONS(290), 2,
      anon_sym_true,
      anon_sym_false,
  [1885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_arguments_repeat1,
  [1898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_arguments_repeat1,
  [1911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_arguments_repeat1,
  [1924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym_boolean,
    ACTIONS(290), 2,
      anon_sym_true,
      anon_sym_false,
  [1935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [1961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_BQUOTE,
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_alias,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_word,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_BQUOTE,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_SEMI,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [2039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym_expansion_token1,
  [2046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SEMI,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_word,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_SEMI,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [2172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [2179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_types,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_expansion_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 73,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 414,
  [SMALL_STATE(24)] = 440,
  [SMALL_STATE(25)] = 466,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 518,
  [SMALL_STATE(28)] = 544,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 622,
  [SMALL_STATE(32)] = 648,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 697,
  [SMALL_STATE(35)] = 720,
  [SMALL_STATE(36)] = 748,
  [SMALL_STATE(37)] = 779,
  [SMALL_STATE(38)] = 807,
  [SMALL_STATE(39)] = 835,
  [SMALL_STATE(40)] = 863,
  [SMALL_STATE(41)] = 891,
  [SMALL_STATE(42)] = 916,
  [SMALL_STATE(43)] = 941,
  [SMALL_STATE(44)] = 966,
  [SMALL_STATE(45)] = 991,
  [SMALL_STATE(46)] = 1016,
  [SMALL_STATE(47)] = 1041,
  [SMALL_STATE(48)] = 1066,
  [SMALL_STATE(49)] = 1091,
  [SMALL_STATE(50)] = 1116,
  [SMALL_STATE(51)] = 1141,
  [SMALL_STATE(52)] = 1163,
  [SMALL_STATE(53)] = 1185,
  [SMALL_STATE(54)] = 1207,
  [SMALL_STATE(55)] = 1229,
  [SMALL_STATE(56)] = 1251,
  [SMALL_STATE(57)] = 1273,
  [SMALL_STATE(58)] = 1292,
  [SMALL_STATE(59)] = 1303,
  [SMALL_STATE(60)] = 1314,
  [SMALL_STATE(61)] = 1325,
  [SMALL_STATE(62)] = 1336,
  [SMALL_STATE(63)] = 1347,
  [SMALL_STATE(64)] = 1358,
  [SMALL_STATE(65)] = 1369,
  [SMALL_STATE(66)] = 1379,
  [SMALL_STATE(67)] = 1395,
  [SMALL_STATE(68)] = 1411,
  [SMALL_STATE(69)] = 1427,
  [SMALL_STATE(70)] = 1443,
  [SMALL_STATE(71)] = 1459,
  [SMALL_STATE(72)] = 1475,
  [SMALL_STATE(73)] = 1491,
  [SMALL_STATE(74)] = 1507,
  [SMALL_STATE(75)] = 1523,
  [SMALL_STATE(76)] = 1539,
  [SMALL_STATE(77)] = 1549,
  [SMALL_STATE(78)] = 1565,
  [SMALL_STATE(79)] = 1581,
  [SMALL_STATE(80)] = 1597,
  [SMALL_STATE(81)] = 1613,
  [SMALL_STATE(82)] = 1623,
  [SMALL_STATE(83)] = 1633,
  [SMALL_STATE(84)] = 1649,
  [SMALL_STATE(85)] = 1659,
  [SMALL_STATE(86)] = 1675,
  [SMALL_STATE(87)] = 1691,
  [SMALL_STATE(88)] = 1707,
  [SMALL_STATE(89)] = 1723,
  [SMALL_STATE(90)] = 1739,
  [SMALL_STATE(91)] = 1755,
  [SMALL_STATE(92)] = 1771,
  [SMALL_STATE(93)] = 1787,
  [SMALL_STATE(94)] = 1803,
  [SMALL_STATE(95)] = 1819,
  [SMALL_STATE(96)] = 1829,
  [SMALL_STATE(97)] = 1845,
  [SMALL_STATE(98)] = 1861,
  [SMALL_STATE(99)] = 1874,
  [SMALL_STATE(100)] = 1885,
  [SMALL_STATE(101)] = 1898,
  [SMALL_STATE(102)] = 1911,
  [SMALL_STATE(103)] = 1924,
  [SMALL_STATE(104)] = 1935,
  [SMALL_STATE(105)] = 1943,
  [SMALL_STATE(106)] = 1951,
  [SMALL_STATE(107)] = 1961,
  [SMALL_STATE(108)] = 1969,
  [SMALL_STATE(109)] = 1976,
  [SMALL_STATE(110)] = 1983,
  [SMALL_STATE(111)] = 1990,
  [SMALL_STATE(112)] = 1997,
  [SMALL_STATE(113)] = 2004,
  [SMALL_STATE(114)] = 2011,
  [SMALL_STATE(115)] = 2018,
  [SMALL_STATE(116)] = 2025,
  [SMALL_STATE(117)] = 2032,
  [SMALL_STATE(118)] = 2039,
  [SMALL_STATE(119)] = 2046,
  [SMALL_STATE(120)] = 2053,
  [SMALL_STATE(121)] = 2060,
  [SMALL_STATE(122)] = 2067,
  [SMALL_STATE(123)] = 2074,
  [SMALL_STATE(124)] = 2081,
  [SMALL_STATE(125)] = 2088,
  [SMALL_STATE(126)] = 2095,
  [SMALL_STATE(127)] = 2102,
  [SMALL_STATE(128)] = 2109,
  [SMALL_STATE(129)] = 2116,
  [SMALL_STATE(130)] = 2123,
  [SMALL_STATE(131)] = 2130,
  [SMALL_STATE(132)] = 2137,
  [SMALL_STATE(133)] = 2144,
  [SMALL_STATE(134)] = 2151,
  [SMALL_STATE(135)] = 2158,
  [SMALL_STATE(136)] = 2165,
  [SMALL_STATE(137)] = 2172,
  [SMALL_STATE(138)] = 2179,
  [SMALL_STATE(139)] = 2186,
  [SMALL_STATE(140)] = 2193,
  [SMALL_STATE(141)] = 2200,
  [SMALL_STATE(142)] = 2207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 31),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 31), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 31), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 20),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 4, .production_id = 12),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 4, .production_id = 12),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 14),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 14),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 29),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 29),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 7, .production_id = 33),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_declaration, 7, .production_id = 33),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 3, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeattribute_declaration, 4, .production_id = 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeattribute_declaration, 4, .production_id = 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 13),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 3, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 3, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typealias_declaration, 5, .production_id = 13),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typealias_declaration, 5, .production_id = 13),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissive_declaration, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permissive_declaration, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_declaration, 3, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 3, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_declaration, 4, .production_id = 10),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_declaration, 4, .production_id = 10),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_declaration, 6, .production_id = 23),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_member_declaration, 6, .production_id = 23),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_change_declaration, 6, .production_id = 22),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_change_declaration, 6, .production_id = 22),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_transition_declaration, 6, .production_id = 21),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_transition_declaration, 6, .production_id = 21),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expandattribute_declaration, 4, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expandattribute_declaration, 4, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_declaration, 5, .production_id = 15),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_declaration, 5, .production_id = 15),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_declaration, 10, .production_id = 36),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_declaration, 10, .production_id = 36),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 35), SHIFT_REPEAT(33),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 35),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 35), SHIFT_REPEAT(118),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 35), SHIFT_REPEAT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 26), SHIFT_REPEAT(33),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 26),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 26), SHIFT_REPEAT(94),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 26), SHIFT_REPEAT(118),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 19), SHIFT_REPEAT(33),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 19),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 19), SHIFT_REPEAT(80),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 19), SHIFT_REPEAT(118),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 30),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 27),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 20),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 18),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 1, .production_id = 28),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 24),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1, .production_id = 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 11),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 17), SHIFT_REPEAT(52),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 17),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, .production_id = 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 16),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 25),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 34),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 2, .production_id = 32),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 1, .production_id = 28),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 37),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
