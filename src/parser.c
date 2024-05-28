#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 0
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 55

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
  anon_sym_attribute_role = 18,
  anon_sym_roleattribute = 19,
  anon_sym_role_transition = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_bool = 23,
  anon_sym_interface = 24,
  anon_sym_LPAREN = 25,
  anon_sym_BQUOTE = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_RPAREN = 28,
  sym_negative = 29,
  sym_complement = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  anon_sym_DOLLAR = 33,
  aux_sym_expansion_token1 = 34,
  anon_sym_STAR = 35,
  anon_sym_allow = 36,
  anon_sym_auditallow = 37,
  anon_sym_dontaudit = 38,
  anon_sym_neverallow = 39,
  anon_sym_anon_inode = 40,
  anon_sym_appletalk_socket = 41,
  anon_sym_association = 42,
  anon_sym_binder = 43,
  anon_sym_blk_file = 44,
  anon_sym_bpf = 45,
  anon_sym_cap2_userns = 46,
  anon_sym_cap_userns = 47,
  anon_sym_capability = 48,
  anon_sym_capability2 = 49,
  anon_sym_chr_file = 50,
  anon_sym_context = 51,
  anon_sym_db_blob = 52,
  anon_sym_db_column = 53,
  anon_sym_db_database = 54,
  anon_sym_db_language = 55,
  anon_sym_db_procedure = 56,
  anon_sym_db_schema = 57,
  anon_sym_db_sequence = 58,
  anon_sym_db_table = 59,
  anon_sym_db_tuple = 60,
  anon_sym_db_view = 61,
  anon_sym_dbus = 62,
  anon_sym_dccp_socket = 63,
  anon_sym_dir = 64,
  anon_sym_fd = 65,
  anon_sym_fifo_file = 66,
  anon_sym_file = 67,
  anon_sym_filesystem = 68,
  anon_sym_icmp_socket = 69,
  anon_sym_infiniband_endport = 70,
  anon_sym_infiniband_pkey = 71,
  anon_sym_io_uring = 72,
  anon_sym_ipc = 73,
  anon_sym_kernel_service = 74,
  anon_sym_key = 75,
  anon_sym_key_socket = 76,
  anon_sym_lnk_file = 77,
  anon_sym_lockdown = 78,
  anon_sym_memprotect = 79,
  anon_sym_msg = 80,
  anon_sym_msgq = 81,
  anon_sym_netif = 82,
  anon_sym_netlink_audit_socket = 83,
  anon_sym_netlink_connector_socket = 84,
  anon_sym_netlink_crypto_socket = 85,
  anon_sym_netlink_dnrt_socket = 86,
  anon_sym_netlink_fib_lookup_socket = 87,
  anon_sym_netlink_firewall_socket = 88,
  anon_sym_netlink_generic_socket = 89,
  anon_sym_netlink_ip6fw_socket = 90,
  anon_sym_netlink_iscsi_socket = 91,
  anon_sym_netlink_kobject_uevent_socket = 92,
  anon_sym_netlink_netfilter_socket = 93,
  anon_sym_netlink_nflog_socket = 94,
  anon_sym_netlink_rdma_socket = 95,
  anon_sym_netlink_route_socket = 96,
  anon_sym_netlink_scsitransport_socket = 97,
  anon_sym_netlink_selinux_socket = 98,
  anon_sym_netlink_socket = 99,
  anon_sym_netlink_tcpdiag_socket = 100,
  anon_sym_netlink_xfrm_socket = 101,
  anon_sym_node = 102,
  anon_sym_nscd = 103,
  anon_sym_packet = 104,
  anon_sym_packet_socket = 105,
  anon_sym_passwd = 106,
  anon_sym_peer = 107,
  anon_sym_perf_event = 108,
  anon_sym_process = 109,
  anon_sym_process2 = 110,
  anon_sym_proxy = 111,
  anon_sym_rawip_socket = 112,
  anon_sym_sctp_socket = 113,
  anon_sym_security = 114,
  anon_sym_sem = 115,
  anon_sym_service = 116,
  anon_sym_shm = 117,
  anon_sym_sock_file = 118,
  anon_sym_socket = 119,
  anon_sym_system = 120,
  anon_sym_tcp_socket = 121,
  anon_sym_tun_socket = 122,
  anon_sym_udp_socket = 123,
  anon_sym_unix_dgram_socket = 124,
  anon_sym_unix_stream_socket = 125,
  anon_sym_user_namespace = 126,
  anon_sym_x_application_data = 127,
  anon_sym_x_client = 128,
  anon_sym_x_colormap = 129,
  anon_sym_x_cursor = 130,
  anon_sym_x_device = 131,
  anon_sym_x_drawable = 132,
  anon_sym_x_event = 133,
  anon_sym_x_extension = 134,
  anon_sym_x_font = 135,
  anon_sym_x_gc = 136,
  anon_sym_x_keyboard = 137,
  anon_sym_x_pointer = 138,
  anon_sym_x_property = 139,
  anon_sym_x_resource = 140,
  anon_sym_x_screen = 141,
  anon_sym_x_selection = 142,
  anon_sym_x_server = 143,
  anon_sym_x_synthetic_event = 144,
  sym_source_file = 145,
  sym__definition = 146,
  sym_type_declaration = 147,
  sym_attribute_declaration = 148,
  sym_expandattribute_declaration = 149,
  sym_typeattribute_declaration = 150,
  sym_typealias_declaration = 151,
  sym_permissive_declaration = 152,
  sym_type_transition_declaration = 153,
  sym_type_change_declaration = 154,
  sym_type_member_declaration = 155,
  sym_role_declaration = 156,
  sym_attribute_role_declaration = 157,
  sym_roleattribute_declaration = 158,
  sym_role_transition_declaration = 159,
  sym_roles = 160,
  sym_class = 161,
  sym_type = 162,
  sym_alias = 163,
  sym_attribute = 164,
  sym_permission = 165,
  sym_rule_declaration = 166,
  sym_boolean_declaration = 167,
  sym_argument = 168,
  sym_arguments = 169,
  sym_macro_declaration = 170,
  sym_macro_usage = 171,
  sym_boolean = 172,
  sym_expansion = 173,
  sym_identifier = 174,
  sym_permissions = 175,
  sym_rule_name = 176,
  sym_classes = 177,
  aux_sym_source_file_repeat1 = 178,
  aux_sym_type_declaration_repeat1 = 179,
  aux_sym_roles_repeat1 = 180,
  aux_sym_class_repeat1 = 181,
  aux_sym_type_repeat1 = 182,
  aux_sym_alias_repeat1 = 183,
  aux_sym_attribute_repeat1 = 184,
  aux_sym_permission_repeat1 = 185,
  aux_sym_argument_repeat1 = 186,
  aux_sym_arguments_repeat1 = 187,
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
  [anon_sym_attribute_role] = "attribute_role",
  [anon_sym_roleattribute] = "roleattribute",
  [anon_sym_role_transition] = "role_transition",
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
  [anon_sym_anon_inode] = "anon_inode",
  [anon_sym_appletalk_socket] = "appletalk_socket",
  [anon_sym_association] = "association",
  [anon_sym_binder] = "binder",
  [anon_sym_blk_file] = "blk_file",
  [anon_sym_bpf] = "bpf",
  [anon_sym_cap2_userns] = "cap2_userns",
  [anon_sym_cap_userns] = "cap_userns",
  [anon_sym_capability] = "capability",
  [anon_sym_capability2] = "capability2",
  [anon_sym_chr_file] = "chr_file",
  [anon_sym_context] = "context",
  [anon_sym_db_blob] = "db_blob",
  [anon_sym_db_column] = "db_column",
  [anon_sym_db_database] = "db_database",
  [anon_sym_db_language] = "db_language",
  [anon_sym_db_procedure] = "db_procedure",
  [anon_sym_db_schema] = "db_schema",
  [anon_sym_db_sequence] = "db_sequence",
  [anon_sym_db_table] = "db_table",
  [anon_sym_db_tuple] = "db_tuple",
  [anon_sym_db_view] = "db_view",
  [anon_sym_dbus] = "dbus",
  [anon_sym_dccp_socket] = "dccp_socket",
  [anon_sym_dir] = "dir",
  [anon_sym_fd] = "fd",
  [anon_sym_fifo_file] = "fifo_file",
  [anon_sym_file] = "file",
  [anon_sym_filesystem] = "filesystem",
  [anon_sym_icmp_socket] = "icmp_socket",
  [anon_sym_infiniband_endport] = "infiniband_endport",
  [anon_sym_infiniband_pkey] = "infiniband_pkey",
  [anon_sym_io_uring] = "io_uring",
  [anon_sym_ipc] = "ipc",
  [anon_sym_kernel_service] = "kernel_service",
  [anon_sym_key] = "key",
  [anon_sym_key_socket] = "key_socket",
  [anon_sym_lnk_file] = "lnk_file",
  [anon_sym_lockdown] = "lockdown",
  [anon_sym_memprotect] = "memprotect",
  [anon_sym_msg] = "msg",
  [anon_sym_msgq] = "msgq",
  [anon_sym_netif] = "netif",
  [anon_sym_netlink_audit_socket] = "netlink_audit_socket",
  [anon_sym_netlink_connector_socket] = "netlink_connector_socket",
  [anon_sym_netlink_crypto_socket] = "netlink_crypto_socket",
  [anon_sym_netlink_dnrt_socket] = "netlink_dnrt_socket",
  [anon_sym_netlink_fib_lookup_socket] = "netlink_fib_lookup_socket",
  [anon_sym_netlink_firewall_socket] = "netlink_firewall_socket",
  [anon_sym_netlink_generic_socket] = "netlink_generic_socket",
  [anon_sym_netlink_ip6fw_socket] = "netlink_ip6fw_socket",
  [anon_sym_netlink_iscsi_socket] = "netlink_iscsi_socket",
  [anon_sym_netlink_kobject_uevent_socket] = "netlink_kobject_uevent_socket",
  [anon_sym_netlink_netfilter_socket] = "netlink_netfilter_socket",
  [anon_sym_netlink_nflog_socket] = "netlink_nflog_socket",
  [anon_sym_netlink_rdma_socket] = "netlink_rdma_socket",
  [anon_sym_netlink_route_socket] = "netlink_route_socket",
  [anon_sym_netlink_scsitransport_socket] = "netlink_scsitransport_socket",
  [anon_sym_netlink_selinux_socket] = "netlink_selinux_socket",
  [anon_sym_netlink_socket] = "netlink_socket",
  [anon_sym_netlink_tcpdiag_socket] = "netlink_tcpdiag_socket",
  [anon_sym_netlink_xfrm_socket] = "netlink_xfrm_socket",
  [anon_sym_node] = "node",
  [anon_sym_nscd] = "nscd",
  [anon_sym_packet] = "packet",
  [anon_sym_packet_socket] = "packet_socket",
  [anon_sym_passwd] = "passwd",
  [anon_sym_peer] = "peer",
  [anon_sym_perf_event] = "perf_event",
  [anon_sym_process] = "process",
  [anon_sym_process2] = "process2",
  [anon_sym_proxy] = "proxy",
  [anon_sym_rawip_socket] = "rawip_socket",
  [anon_sym_sctp_socket] = "sctp_socket",
  [anon_sym_security] = "security",
  [anon_sym_sem] = "sem",
  [anon_sym_service] = "service",
  [anon_sym_shm] = "shm",
  [anon_sym_sock_file] = "sock_file",
  [anon_sym_socket] = "socket",
  [anon_sym_system] = "system",
  [anon_sym_tcp_socket] = "tcp_socket",
  [anon_sym_tun_socket] = "tun_socket",
  [anon_sym_udp_socket] = "udp_socket",
  [anon_sym_unix_dgram_socket] = "unix_dgram_socket",
  [anon_sym_unix_stream_socket] = "unix_stream_socket",
  [anon_sym_user_namespace] = "user_namespace",
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
  [sym_attribute_role_declaration] = "attribute_role_declaration",
  [sym_roleattribute_declaration] = "roleattribute_declaration",
  [sym_role_transition_declaration] = "role_transition_declaration",
  [sym_roles] = "roles",
  [sym_class] = "class",
  [sym_type] = "type",
  [sym_alias] = "alias",
  [sym_attribute] = "attribute",
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
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_roles_repeat1] = "roles_repeat1",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_alias_repeat1] = "alias_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
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
  [anon_sym_attribute_role] = anon_sym_attribute_role,
  [anon_sym_roleattribute] = anon_sym_roleattribute,
  [anon_sym_role_transition] = anon_sym_role_transition,
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
  [anon_sym_anon_inode] = anon_sym_anon_inode,
  [anon_sym_appletalk_socket] = anon_sym_appletalk_socket,
  [anon_sym_association] = anon_sym_association,
  [anon_sym_binder] = anon_sym_binder,
  [anon_sym_blk_file] = anon_sym_blk_file,
  [anon_sym_bpf] = anon_sym_bpf,
  [anon_sym_cap2_userns] = anon_sym_cap2_userns,
  [anon_sym_cap_userns] = anon_sym_cap_userns,
  [anon_sym_capability] = anon_sym_capability,
  [anon_sym_capability2] = anon_sym_capability2,
  [anon_sym_chr_file] = anon_sym_chr_file,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_db_blob] = anon_sym_db_blob,
  [anon_sym_db_column] = anon_sym_db_column,
  [anon_sym_db_database] = anon_sym_db_database,
  [anon_sym_db_language] = anon_sym_db_language,
  [anon_sym_db_procedure] = anon_sym_db_procedure,
  [anon_sym_db_schema] = anon_sym_db_schema,
  [anon_sym_db_sequence] = anon_sym_db_sequence,
  [anon_sym_db_table] = anon_sym_db_table,
  [anon_sym_db_tuple] = anon_sym_db_tuple,
  [anon_sym_db_view] = anon_sym_db_view,
  [anon_sym_dbus] = anon_sym_dbus,
  [anon_sym_dccp_socket] = anon_sym_dccp_socket,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_fd] = anon_sym_fd,
  [anon_sym_fifo_file] = anon_sym_fifo_file,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_filesystem] = anon_sym_filesystem,
  [anon_sym_icmp_socket] = anon_sym_icmp_socket,
  [anon_sym_infiniband_endport] = anon_sym_infiniband_endport,
  [anon_sym_infiniband_pkey] = anon_sym_infiniband_pkey,
  [anon_sym_io_uring] = anon_sym_io_uring,
  [anon_sym_ipc] = anon_sym_ipc,
  [anon_sym_kernel_service] = anon_sym_kernel_service,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_key_socket] = anon_sym_key_socket,
  [anon_sym_lnk_file] = anon_sym_lnk_file,
  [anon_sym_lockdown] = anon_sym_lockdown,
  [anon_sym_memprotect] = anon_sym_memprotect,
  [anon_sym_msg] = anon_sym_msg,
  [anon_sym_msgq] = anon_sym_msgq,
  [anon_sym_netif] = anon_sym_netif,
  [anon_sym_netlink_audit_socket] = anon_sym_netlink_audit_socket,
  [anon_sym_netlink_connector_socket] = anon_sym_netlink_connector_socket,
  [anon_sym_netlink_crypto_socket] = anon_sym_netlink_crypto_socket,
  [anon_sym_netlink_dnrt_socket] = anon_sym_netlink_dnrt_socket,
  [anon_sym_netlink_fib_lookup_socket] = anon_sym_netlink_fib_lookup_socket,
  [anon_sym_netlink_firewall_socket] = anon_sym_netlink_firewall_socket,
  [anon_sym_netlink_generic_socket] = anon_sym_netlink_generic_socket,
  [anon_sym_netlink_ip6fw_socket] = anon_sym_netlink_ip6fw_socket,
  [anon_sym_netlink_iscsi_socket] = anon_sym_netlink_iscsi_socket,
  [anon_sym_netlink_kobject_uevent_socket] = anon_sym_netlink_kobject_uevent_socket,
  [anon_sym_netlink_netfilter_socket] = anon_sym_netlink_netfilter_socket,
  [anon_sym_netlink_nflog_socket] = anon_sym_netlink_nflog_socket,
  [anon_sym_netlink_rdma_socket] = anon_sym_netlink_rdma_socket,
  [anon_sym_netlink_route_socket] = anon_sym_netlink_route_socket,
  [anon_sym_netlink_scsitransport_socket] = anon_sym_netlink_scsitransport_socket,
  [anon_sym_netlink_selinux_socket] = anon_sym_netlink_selinux_socket,
  [anon_sym_netlink_socket] = anon_sym_netlink_socket,
  [anon_sym_netlink_tcpdiag_socket] = anon_sym_netlink_tcpdiag_socket,
  [anon_sym_netlink_xfrm_socket] = anon_sym_netlink_xfrm_socket,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_nscd] = anon_sym_nscd,
  [anon_sym_packet] = anon_sym_packet,
  [anon_sym_packet_socket] = anon_sym_packet_socket,
  [anon_sym_passwd] = anon_sym_passwd,
  [anon_sym_peer] = anon_sym_peer,
  [anon_sym_perf_event] = anon_sym_perf_event,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_process2] = anon_sym_process2,
  [anon_sym_proxy] = anon_sym_proxy,
  [anon_sym_rawip_socket] = anon_sym_rawip_socket,
  [anon_sym_sctp_socket] = anon_sym_sctp_socket,
  [anon_sym_security] = anon_sym_security,
  [anon_sym_sem] = anon_sym_sem,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_shm] = anon_sym_shm,
  [anon_sym_sock_file] = anon_sym_sock_file,
  [anon_sym_socket] = anon_sym_socket,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_tcp_socket] = anon_sym_tcp_socket,
  [anon_sym_tun_socket] = anon_sym_tun_socket,
  [anon_sym_udp_socket] = anon_sym_udp_socket,
  [anon_sym_unix_dgram_socket] = anon_sym_unix_dgram_socket,
  [anon_sym_unix_stream_socket] = anon_sym_unix_stream_socket,
  [anon_sym_user_namespace] = anon_sym_user_namespace,
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
  [sym_attribute_role_declaration] = sym_attribute_role_declaration,
  [sym_roleattribute_declaration] = sym_roleattribute_declaration,
  [sym_role_transition_declaration] = sym_role_transition_declaration,
  [sym_roles] = sym_roles,
  [sym_class] = sym_class,
  [sym_type] = sym_type,
  [sym_alias] = sym_alias,
  [sym_attribute] = sym_attribute,
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
  [aux_sym_type_declaration_repeat1] = aux_sym_type_declaration_repeat1,
  [aux_sym_roles_repeat1] = aux_sym_roles_repeat1,
  [aux_sym_class_repeat1] = aux_sym_class_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_alias_repeat1] = aux_sym_alias_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
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
  [anon_sym_attribute_role] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roleattribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_role_transition] = {
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
  [anon_sym_anon_inode] = {
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
  [anon_sym_binder] = {
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
  [anon_sym_cap2_userns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap_userns] = {
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
  [anon_sym_context] = {
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
  [anon_sym_db_language] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db_sequence] = {
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
  [anon_sym_db_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dccp_socket] = {
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
  [anon_sym_icmp_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infiniband_endport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infiniband_pkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_io_uring] = {
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
  [anon_sym_lockdown] = {
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
  [anon_sym_netlink_audit_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_connector_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_crypto_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_dnrt_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_fib_lookup_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_firewall_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_generic_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_ip6fw_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_iscsi_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_kobject_uevent_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_netfilter_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_nflog_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_rdma_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_route_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_scsitransport_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_selinux_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netlink_socket] = {
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
  [anon_sym_nscd] = {
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
  [anon_sym_passwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_perf_event] = {
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
  [anon_sym_proxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawip_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sctp_socket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
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
  [anon_sym_user_namespace] = {
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
  [sym_attribute_role_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_roleattribute_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_role_transition_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_roles] = {
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
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
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
  [aux_sym_type_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_roles_repeat1] = {
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
  [aux_sym_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
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
  field_alias = 1,
  field_alias_id = 2,
  field_arg = 3,
  field_argument = 4,
  field_arguments = 5,
  field_attribute = 6,
  field_attribute_id = 7,
  field_body = 8,
  field_change_type = 9,
  field_class = 10,
  field_current_role_id = 11,
  field_default_type = 12,
  field_expand_value = 13,
  field_member_type = 14,
  field_name = 15,
  field_new_role_id = 16,
  field_object_name = 17,
  field_perm_set = 18,
  field_role = 19,
  field_role_id = 20,
  field_rule_name = 21,
  field_source_type = 22,
  field_target_type = 23,
  field_type = 24,
  field_type_id = 25,
  field_value = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_alias_id] = "alias_id",
  [field_arg] = "arg",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_attribute] = "attribute",
  [field_attribute_id] = "attribute_id",
  [field_body] = "body",
  [field_change_type] = "change_type",
  [field_class] = "class",
  [field_current_role_id] = "current_role_id",
  [field_default_type] = "default_type",
  [field_expand_value] = "expand_value",
  [field_member_type] = "member_type",
  [field_name] = "name",
  [field_new_role_id] = "new_role_id",
  [field_object_name] = "object_name",
  [field_perm_set] = "perm_set",
  [field_role] = "role",
  [field_role_id] = "role_id",
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
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 1},
  [15] = {.index = 16, .length = 2},
  [16] = {.index = 18, .length = 2},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 1},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 2},
  [22] = {.index = 29, .length = 2},
  [23] = {.index = 31, .length = 2},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 3},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 2},
  [28] = {.index = 42, .length = 1},
  [29] = {.index = 43, .length = 2},
  [30] = {.index = 45, .length = 3},
  [31] = {.index = 48, .length = 3},
  [32] = {.index = 51, .length = 1},
  [33] = {.index = 52, .length = 2},
  [34] = {.index = 54, .length = 1},
  [35] = {.index = 55, .length = 2},
  [36] = {.index = 57, .length = 3},
  [37] = {.index = 60, .length = 2},
  [38] = {.index = 62, .length = 1},
  [39] = {.index = 63, .length = 2},
  [40] = {.index = 65, .length = 2},
  [41] = {.index = 67, .length = 1},
  [42] = {.index = 68, .length = 1},
  [43] = {.index = 69, .length = 2},
  [44] = {.index = 71, .length = 4},
  [45] = {.index = 75, .length = 4},
  [46] = {.index = 79, .length = 4},
  [47] = {.index = 83, .length = 4},
  [48] = {.index = 87, .length = 1},
  [49] = {.index = 88, .length = 5},
  [50] = {.index = 93, .length = 5},
  [51] = {.index = 98, .length = 2},
  [52] = {.index = 100, .length = 2},
  [53] = {.index = 102, .length = 2},
  [54] = {.index = 104, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute, 0},
  [1] =
    {field_type, 0},
  [2] =
    {field_role, 0},
  [3] =
    {field_type_id, 1},
  [4] =
    {field_attribute_id, 1},
  [5] =
    {field_type, 1},
  [6] =
    {field_role_id, 1},
  [7] =
    {field_name, 0},
  [8] =
    {field_argument, 0},
  [9] =
    {field_arg, 0},
  [10] =
    {field_alias, 0},
  [11] =
    {field_attribute_id, 2, .inherited = true},
    {field_type_id, 1},
  [13] =
    {field_attribute_id, 0, .inherited = true},
    {field_attribute_id, 1, .inherited = true},
  [15] =
    {field_attribute, 1, .inherited = true},
  [16] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
  [18] =
    {field_attribute_id, 1},
    {field_expand_value, 2},
  [20] =
    {field_attribute_id, 2},
    {field_type_id, 1},
  [22] =
    {field_attribute_id, 2},
    {field_role_id, 1},
  [24] =
    {field_role, 1, .inherited = true},
  [25] =
    {field_role, 0, .inherited = true},
    {field_role, 1, .inherited = true},
  [27] =
    {field_name, 1},
    {field_value, 2},
  [29] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [31] =
    {field_arguments, 2},
    {field_name, 0},
  [33] =
    {field_alias_id, 3},
    {field_type_id, 1},
  [35] =
    {field_attribute_id, 2},
    {field_attribute_id, 3, .inherited = true},
    {field_type_id, 1},
  [38] =
    {field_type, 1},
    {field_type, 2, .inherited = true},
  [40] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [42] =
    {field_class, 0},
  [43] =
    {field_role_id, 1},
    {field_type_id, 3},
  [45] =
    {field_attribute_id, 2},
    {field_attribute_id, 3, .inherited = true},
    {field_role_id, 1},
  [48] =
    {field_current_role_id, 1},
    {field_new_role_id, 3},
    {field_type_id, 2},
  [51] =
    {field_argument, 1},
  [52] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [54] =
    {field_alias, 1, .inherited = true},
  [55] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
  [57] =
    {field_alias_id, 3},
    {field_attribute_id, 4, .inherited = true},
    {field_type_id, 1},
  [60] =
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [62] =
    {field_arg, 1},
  [63] =
    {field_arg, 1},
    {field_arg, 2, .inherited = true},
  [65] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [67] =
    {field_perm_set, 0},
  [68] =
    {field_class, 1, .inherited = true},
  [69] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [71] =
    {field_class, 4},
    {field_default_type, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [75] =
    {field_change_type, 5},
    {field_class, 4},
    {field_source_type, 1},
    {field_target_type, 2},
  [79] =
    {field_class, 4},
    {field_member_type, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [83] =
    {field_class, 4},
    {field_current_role_id, 1},
    {field_new_role_id, 5},
    {field_type_id, 2},
  [87] =
    {field_perm_set, 1},
  [88] =
    {field_class, 4},
    {field_perm_set, 5},
    {field_rule_name, 0},
    {field_source_type, 1},
    {field_target_type, 2},
  [93] =
    {field_class, 4},
    {field_default_type, 5},
    {field_object_name, 6},
    {field_source_type, 1},
    {field_target_type, 2},
  [98] =
    {field_perm_set, 1},
    {field_perm_set, 2, .inherited = true},
  [100] =
    {field_perm_set, 0, .inherited = true},
    {field_perm_set, 1, .inherited = true},
  [102] =
    {field_body, 7},
    {field_name, 3},
  [104] =
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
  [33] = 33,
  [34] = 34,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
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
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 20:
      if (lookahead == '\\') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_fd);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'g') ADVANCE(136);
      if (lookahead == 'k') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bpf);
      END_STATE();
    case 83:
      if (lookahead == '2') ADVANCE(151);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ipc);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_msg);
      if (lookahead == 'q') ADVANCE(180);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 110:
      if (lookahead == 'k') ADVANCE(186);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_sem);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_shm);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(204);
      END_STATE();
    case 129:
      if (lookahead == 'x') ADVANCE(205);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(213);
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 142:
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(233);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(236);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_dbus);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(252);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == '_') ADVANCE(254);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_msgq);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_nscd);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 187:
      if (lookahead == 'w') ADVANCE(267);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_peer);
      END_STATE();
    case 189:
      if (lookahead == '_') ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 192:
      if (lookahead == 'y') ADVANCE(271);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_role);
      if (lookahead == '_') ADVANCE(273);
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(275);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 205:
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 206:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(293);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_x_gc);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 229:
      if (lookahead == 'b') ADVANCE(309);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 244:
      if (lookahead == 'q') ADVANCE(324);
      END_STATE();
    case 245:
      if (lookahead == 'b') ADVANCE(325);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 252:
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_netif);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 272:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 277:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 278:
      if (lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 294:
      if (lookahead == 'w') ADVANCE(374);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 298:
      if (lookahead == 'b') ADVANCE(378);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 304:
      if (lookahead == 'v') ADVANCE(384);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_binder);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 318:
      if (lookahead == 'b') ADVANCE(397);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 324:
      if (lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 327:
      if (lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 329:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 334:
      if (lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 337:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 340:
      if (lookahead == 'w') ADVANCE(419);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 342:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_packet);
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_passwd);
      END_STATE();
    case 346:
      if (lookahead == 'v') ADVANCE(424);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_socket);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 360:
      if (lookahead == 'h') ADVANCE(436);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(442);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 373:
      if (lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_x_font);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 381:
      if (lookahead == 'u') ADVANCE(456);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_db_blob);
      END_STATE();
    case 398:
      if (lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 399:
      if (lookahead == 'b') ADVANCE(472);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(473);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(475);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_db_view);
      END_STATE();
    case 407:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 412:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 415:
      if (lookahead == 'g') ADVANCE(487);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 417:
      if (lookahead == 'k') ADVANCE(489);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 421:
      if (lookahead == '_') ADVANCE(493);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_process);
      if (lookahead == '2') ADVANCE(498);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 430:
      if (lookahead == 'c') ADVANCE(502);
      END_STATE();
    case 431:
      if (lookahead == 'y') ADVANCE(503);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 433:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 434:
      if (lookahead == 'k') ADVANCE(505);
      END_STATE();
    case 435:
      if (lookahead == 'k') ADVANCE(506);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 437:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 441:
      if (lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 444:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 445:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 447:
      if (lookahead == 'm') ADVANCE(518);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 450:
      if (lookahead == 'b') ADVANCE(521);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_x_event);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 461:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 462:
      if (lookahead == 'k') ADVANCE(532);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_blk_file);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_chr_file);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 474:
      if (lookahead == 'd') ADVANCE(542);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_db_table);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_db_tuple);
      END_STATE();
    case 479:
      if (lookahead == 'k') ADVANCE(545);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 484:
      if (lookahead == 'k') ADVANCE(550);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_io_uring);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_lnk_file);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_lockdown);
      END_STATE();
    case 492:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 493:
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == 'g') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 'k') ADVANCE(562);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead == 'x') ADVANCE(567);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 497:
      if (lookahead == 'v') ADVANCE(571);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_process2);
      END_STATE();
    case 499:
      if (lookahead == 'c') ADVANCE(572);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 502:
      if (lookahead == 'k') ADVANCE(575);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 508:
      if (lookahead == 'b') ADVANCE(580);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 513:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 516:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_x_client);
      END_STATE();
    case 518:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_x_cursor);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_x_device);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 526:
      if (lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_x_screen);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_x_server);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 532:
      if (lookahead == '_') ADVANCE(599);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (lookahead == '_') ADVANCE(601);
      END_STATE();
    case 535:
      if (lookahead == 'w') ADVANCE(602);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 538:
      if (lookahead == 'y') ADVANCE(605);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_db_column);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 541:
      if (lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_db_schema);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(609);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_dontaudit);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_fifo_file);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 551:
      if (lookahead == 'd') ADVANCE(614);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 556:
      if (lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 561:
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(628);
      END_STATE();
    case 564:
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(634);
      END_STATE();
    case 567:
      if (lookahead == 'f') ADVANCE(635);
      END_STATE();
    case 568:
      if (lookahead == 'w') ADVANCE(636);
      END_STATE();
    case 569:
      if (lookahead == 'c') ADVANCE(637);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 571:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 572:
      if (lookahead == 'k') ADVANCE(640);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 574:
      if (lookahead == 'b') ADVANCE(642);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_sock_file);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 579:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 580:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 583:
      if (lookahead == 'b') ADVANCE(649);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 585:
      if (lookahead == 'm') ADVANCE(651);
      END_STATE();
    case 586:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(655);
      END_STATE();
    case 590:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 592:
      if (lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_x_pointer);
      END_STATE();
    case 594:
      if (lookahead == 'y') ADVANCE(659);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 597:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_anon_inode);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_auditallow);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_cap_userns);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_capability);
      if (lookahead == '2') ADVANCE(667);
      END_STATE();
    case 606:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 607:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 609:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 611:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_filesystem);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 614:
      if (lookahead == '_') ADVANCE(675);
      END_STATE();
    case 615:
      if (lookahead == 'v') ADVANCE(676);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_key_socket);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_memprotect);
      END_STATE();
    case 618:
      if (lookahead == 'd') ADVANCE(677);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 620:
      if (lookahead == 'y') ADVANCE(679);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(680);
      END_STATE();
    case 622:
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 624:
      if (lookahead == '6') ADVANCE(684);
      END_STATE();
    case 625:
      if (lookahead == 'c') ADVANCE(685);
      END_STATE();
    case 626:
      if (lookahead == 'b') ADVANCE(686);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 628:
      if (lookahead == 'l') ADVANCE(688);
      END_STATE();
    case 629:
      if (lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(690);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 632:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 633:
      if (lookahead == 'c') ADVANCE(693);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(694);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_neverallow);
      END_STATE();
    case 637:
      if (lookahead == 'k') ADVANCE(696);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_perf_event);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_permissive);
      END_STATE();
    case 640:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 642:
      if (lookahead == 'u') ADVANCE(699);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_tcp_socket);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_tun_socket);
      END_STATE();
    case 646:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(704);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_udp_socket);
      END_STATE();
    case 651:
      if (lookahead == '_') ADVANCE(705);
      END_STATE();
    case 652:
      if (lookahead == 'm') ADVANCE(706);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(707);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_x_colormap);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_x_drawable);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_x_keyboard);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_x_property);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_x_resource);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 662:
      if (lookahead == 'c') ADVANCE(711);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_association);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_cap2_userns);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_capability2);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_db_database);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_db_language);
      END_STATE();
    case 670:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_db_sequence);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_dccp_socket);
      END_STATE();
    case 673:
      if (lookahead == 'b') ADVANCE(715);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_icmp_socket);
      END_STATE();
    case 675:
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead == 'p') ADVANCE(717);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 678:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(721);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 681:
      if (lookahead == '_') ADVANCE(723);
      END_STATE();
    case 682:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 683:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 684:
      if (lookahead == 'f') ADVANCE(726);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 686:
      if (lookahead == 'j') ADVANCE(728);
      END_STATE();
    case 687:
      if (lookahead == 'f') ADVANCE(729);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 689:
      if (lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(732);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(734);
      END_STATE();
    case 693:
      if (lookahead == 'k') ADVANCE(735);
      END_STATE();
    case 694:
      if (lookahead == 'd') ADVANCE(736);
      END_STATE();
    case 695:
      if (lookahead == 'm') ADVANCE(737);
      END_STATE();
    case 696:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_sctp_socket);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_type_change);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_type_member);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 706:
      if (lookahead == '_') ADVANCE(745);
      END_STATE();
    case 707:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_x_extension);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_x_selection);
      END_STATE();
    case 711:
      if (lookahead == '_') ADVANCE(748);
      END_STATE();
    case 712:
      if (lookahead == 'c') ADVANCE(749);
      END_STATE();
    case 713:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_db_procedure);
      END_STATE();
    case 715:
      if (lookahead == 'u') ADVANCE(751);
      END_STATE();
    case 716:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 717:
      if (lookahead == 'k') ADVANCE(753);
      END_STATE();
    case 718:
      if (lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 722:
      if (lookahead == '_') ADVANCE(758);
      END_STATE();
    case 723:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 724:
      if (lookahead == 'w') ADVANCE(760);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 726:
      if (lookahead == 'w') ADVANCE(762);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(763);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 729:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 730:
      if (lookahead == 'g') ADVANCE(766);
      END_STATE();
    case 731:
      if (lookahead == '_') ADVANCE(767);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 734:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 736:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 737:
      if (lookahead == '_') ADVANCE(773);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(774);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_rawip_socket);
      END_STATE();
    case 740:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 742:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 744:
      if (lookahead == 'o') ADVANCE(779);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(780);
      END_STATE();
    case 746:
      if (lookahead == 'c') ADVANCE(781);
      END_STATE();
    case 747:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 749:
      if (lookahead == 'k') ADVANCE(784);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 752:
      if (lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 755:
      if (lookahead == '_') ADVANCE(790);
      END_STATE();
    case 756:
      if (lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 757:
      if (lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(793);
      END_STATE();
    case 759:
      if (lookahead == 'o') ADVANCE(794);
      END_STATE();
    case 760:
      if (lookahead == 'a') ADVANCE(795);
      END_STATE();
    case 761:
      if (lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 762:
      if (lookahead == '_') ADVANCE(797);
      END_STATE();
    case 763:
      if (lookahead == '_') ADVANCE(798);
      END_STATE();
    case 764:
      if (lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(800);
      END_STATE();
    case 766:
      if (lookahead == '_') ADVANCE(801);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 768:
      if (lookahead == '_') ADVANCE(803);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(805);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 772:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(808);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_packet_socket);
      END_STATE();
    case 775:
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_roleattribute);
      END_STATE();
    case 777:
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_typeattribute);
      END_STATE();
    case 779:
      if (lookahead == 'c') ADVANCE(811);
      END_STATE();
    case 780:
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 782:
      if (lookahead == '_') ADVANCE(814);
      END_STATE();
    case 783:
      if (lookahead == 'v') ADVANCE(815);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_attribute_role);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 787:
      if (lookahead == 'p') ADVANCE(818);
      END_STATE();
    case 788:
      if (lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_kernel_service);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 792:
      if (lookahead == '_') ADVANCE(822);
      END_STATE();
    case 793:
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 794:
      if (lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 796:
      if (lookahead == 'c') ADVANCE(826);
      END_STATE();
    case 797:
      if (lookahead == 's') ADVANCE(827);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 801:
      if (lookahead == 's') ADVANCE(831);
      END_STATE();
    case 802:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 803:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 804:
      if (lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 805:
      if (lookahead == 'x') ADVANCE(835);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_netlink_socket);
      END_STATE();
    case 807:
      if (lookahead == 'g') ADVANCE(836);
      END_STATE();
    case 808:
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 809:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 810:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 811:
      if (lookahead == 'k') ADVANCE(840);
      END_STATE();
    case 812:
      if (lookahead == 'c') ADVANCE(841);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_user_namespace);
      END_STATE();
    case 814:
      if (lookahead == 'd') ADVANCE(842);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_expandattribute);
      END_STATE();
    case 818:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_infiniband_pkey);
      END_STATE();
    case 820:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 821:
      if (lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(848);
      END_STATE();
    case 823:
      if (lookahead == 'c') ADVANCE(849);
      END_STATE();
    case 824:
      if (lookahead == 'k') ADVANCE(850);
      END_STATE();
    case 825:
      if (lookahead == 'l') ADVANCE(851);
      END_STATE();
    case 826:
      if (lookahead == '_') ADVANCE(852);
      END_STATE();
    case 827:
      if (lookahead == 'o') ADVANCE(853);
      END_STATE();
    case 828:
      if (lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 829:
      if (lookahead == '_') ADVANCE(855);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 831:
      if (lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 832:
      if (lookahead == 'c') ADVANCE(858);
      END_STATE();
    case 833:
      if (lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 835:
      if (lookahead == '_') ADVANCE(861);
      END_STATE();
    case 836:
      if (lookahead == '_') ADVANCE(862);
      END_STATE();
    case 837:
      if (lookahead == 'c') ADVANCE(863);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_role_transition);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_type_transition);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 841:
      if (lookahead == 'k') ADVANCE(865);
      END_STATE();
    case 842:
      if (lookahead == 'a') ADVANCE(866);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_appletalk_socket);
      END_STATE();
    case 845:
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 846:
      if (lookahead == 'c') ADVANCE(869);
      END_STATE();
    case 847:
      if (lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 848:
      if (lookahead == 'o') ADVANCE(871);
      END_STATE();
    case 849:
      if (lookahead == 'k') ADVANCE(872);
      END_STATE();
    case 850:
      if (lookahead == 'u') ADVANCE(873);
      END_STATE();
    case 851:
      if (lookahead == '_') ADVANCE(874);
      END_STATE();
    case 852:
      if (lookahead == 's') ADVANCE(875);
      END_STATE();
    case 853:
      if (lookahead == 'c') ADVANCE(876);
      END_STATE();
    case 854:
      if (lookahead == 'c') ADVANCE(877);
      END_STATE();
    case 855:
      if (lookahead == 'u') ADVANCE(878);
      END_STATE();
    case 856:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 857:
      if (lookahead == 'c') ADVANCE(880);
      END_STATE();
    case 858:
      if (lookahead == 'k') ADVANCE(881);
      END_STATE();
    case 859:
      if (lookahead == 'c') ADVANCE(882);
      END_STATE();
    case 860:
      if (lookahead == 's') ADVANCE(883);
      END_STATE();
    case 861:
      if (lookahead == 's') ADVANCE(884);
      END_STATE();
    case 862:
      if (lookahead == 's') ADVANCE(885);
      END_STATE();
    case 863:
      if (lookahead == 'k') ADVANCE(886);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(887);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(889);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(891);
      END_STATE();
    case 869:
      if (lookahead == 'k') ADVANCE(892);
      END_STATE();
    case 870:
      if (lookahead == '_') ADVANCE(893);
      END_STATE();
    case 871:
      if (lookahead == 'c') ADVANCE(894);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 873:
      if (lookahead == 'p') ADVANCE(896);
      END_STATE();
    case 874:
      if (lookahead == 's') ADVANCE(897);
      END_STATE();
    case 875:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 876:
      if (lookahead == 'k') ADVANCE(899);
      END_STATE();
    case 877:
      if (lookahead == 'k') ADVANCE(900);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 879:
      if (lookahead == '_') ADVANCE(902);
      END_STATE();
    case 880:
      if (lookahead == 'k') ADVANCE(903);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 882:
      if (lookahead == 'k') ADVANCE(905);
      END_STATE();
    case 883:
      if (lookahead == 'p') ADVANCE(906);
      END_STATE();
    case 884:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 885:
      if (lookahead == 'o') ADVANCE(908);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_unix_dgram_socket);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 889:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_x_synthetic_event);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_infiniband_endport);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 893:
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 894:
      if (lookahead == 'k') ADVANCE(914);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 896:
      if (lookahead == '_') ADVANCE(916);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 898:
      if (lookahead == 'c') ADVANCE(918);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 901:
      if (lookahead == 'v') ADVANCE(921);
      END_STATE();
    case 902:
      if (lookahead == 's') ADVANCE(922);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(924);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 906:
      if (lookahead == 'o') ADVANCE(926);
      END_STATE();
    case 907:
      if (lookahead == 'c') ADVANCE(927);
      END_STATE();
    case 908:
      if (lookahead == 'c') ADVANCE(928);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(929);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_unix_stream_socket);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_x_application_data);
      END_STATE();
    case 912:
      if (lookahead == 't') ADVANCE(930);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 914:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_netlink_dnrt_socket);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(933);
      END_STATE();
    case 917:
      if (lookahead == 'c') ADVANCE(934);
      END_STATE();
    case 918:
      if (lookahead == 'k') ADVANCE(935);
      END_STATE();
    case 919:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 920:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 923:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_netlink_rdma_socket);
      END_STATE();
    case 925:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 926:
      if (lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 927:
      if (lookahead == 'k') ADVANCE(943);
      END_STATE();
    case 928:
      if (lookahead == 'k') ADVANCE(944);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_netlink_xfrm_socket);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_netlink_audit_socket);
      END_STATE();
    case 931:
      if (lookahead == 'c') ADVANCE(945);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 934:
      if (lookahead == 'k') ADVANCE(948);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_netlink_ip6fw_socket);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_netlink_iscsi_socket);
      END_STATE();
    case 938:
      if (lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 939:
      if (lookahead == 'c') ADVANCE(951);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_netlink_nflog_socket);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_netlink_route_socket);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 943:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 944:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 945:
      if (lookahead == 'k') ADVANCE(955);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_netlink_crypto_socket);
      END_STATE();
    case 947:
      if (lookahead == 'c') ADVANCE(956);
      END_STATE();
    case 948:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 949:
      if (lookahead == 't') ADVANCE(958);
      END_STATE();
    case 950:
      if (lookahead == 't') ADVANCE(959);
      END_STATE();
    case 951:
      if (lookahead == 'k') ADVANCE(960);
      END_STATE();
    case 952:
      if (lookahead == '_') ADVANCE(961);
      END_STATE();
    case 953:
      if (lookahead == 't') ADVANCE(962);
      END_STATE();
    case 954:
      if (lookahead == 't') ADVANCE(963);
      END_STATE();
    case 955:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 956:
      if (lookahead == 'k') ADVANCE(965);
      END_STATE();
    case 957:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_netlink_generic_socket);
      END_STATE();
    case 959:
      if (lookahead == '_') ADVANCE(967);
      END_STATE();
    case 960:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 961:
      if (lookahead == 's') ADVANCE(969);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_netlink_selinux_socket);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_netlink_tcpdiag_socket);
      END_STATE();
    case 964:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 965:
      if (lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_netlink_firewall_socket);
      END_STATE();
    case 967:
      if (lookahead == 's') ADVANCE(972);
      END_STATE();
    case 968:
      if (lookahead == 't') ADVANCE(973);
      END_STATE();
    case 969:
      if (lookahead == 'o') ADVANCE(974);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_netlink_connector_socket);
      END_STATE();
    case 971:
      if (lookahead == 't') ADVANCE(975);
      END_STATE();
    case 972:
      if (lookahead == 'o') ADVANCE(976);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_netlink_netfilter_socket);
      END_STATE();
    case 974:
      if (lookahead == 'c') ADVANCE(977);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_netlink_fib_lookup_socket);
      END_STATE();
    case 976:
      if (lookahead == 'c') ADVANCE(978);
      END_STATE();
    case 977:
      if (lookahead == 'k') ADVANCE(979);
      END_STATE();
    case 978:
      if (lookahead == 'k') ADVANCE(980);
      END_STATE();
    case 979:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 980:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 981:
      if (lookahead == 't') ADVANCE(983);
      END_STATE();
    case 982:
      if (lookahead == 't') ADVANCE(984);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_netlink_scsitransport_socket);
      END_STATE();
    case 984:
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
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
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
    [anon_sym_attribute_role] = ACTIONS(1),
    [anon_sym_roleattribute] = ACTIONS(1),
    [anon_sym_role_transition] = ACTIONS(1),
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
    [anon_sym_anon_inode] = ACTIONS(1),
    [anon_sym_appletalk_socket] = ACTIONS(1),
    [anon_sym_association] = ACTIONS(1),
    [anon_sym_binder] = ACTIONS(1),
    [anon_sym_blk_file] = ACTIONS(1),
    [anon_sym_bpf] = ACTIONS(1),
    [anon_sym_cap2_userns] = ACTIONS(1),
    [anon_sym_cap_userns] = ACTIONS(1),
    [anon_sym_capability] = ACTIONS(1),
    [anon_sym_capability2] = ACTIONS(1),
    [anon_sym_chr_file] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_db_blob] = ACTIONS(1),
    [anon_sym_db_column] = ACTIONS(1),
    [anon_sym_db_database] = ACTIONS(1),
    [anon_sym_db_language] = ACTIONS(1),
    [anon_sym_db_procedure] = ACTIONS(1),
    [anon_sym_db_schema] = ACTIONS(1),
    [anon_sym_db_sequence] = ACTIONS(1),
    [anon_sym_db_table] = ACTIONS(1),
    [anon_sym_db_tuple] = ACTIONS(1),
    [anon_sym_db_view] = ACTIONS(1),
    [anon_sym_dbus] = ACTIONS(1),
    [anon_sym_dccp_socket] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_fd] = ACTIONS(1),
    [anon_sym_fifo_file] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_filesystem] = ACTIONS(1),
    [anon_sym_icmp_socket] = ACTIONS(1),
    [anon_sym_infiniband_endport] = ACTIONS(1),
    [anon_sym_infiniband_pkey] = ACTIONS(1),
    [anon_sym_io_uring] = ACTIONS(1),
    [anon_sym_ipc] = ACTIONS(1),
    [anon_sym_kernel_service] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_key_socket] = ACTIONS(1),
    [anon_sym_lnk_file] = ACTIONS(1),
    [anon_sym_lockdown] = ACTIONS(1),
    [anon_sym_memprotect] = ACTIONS(1),
    [anon_sym_msg] = ACTIONS(1),
    [anon_sym_msgq] = ACTIONS(1),
    [anon_sym_netif] = ACTIONS(1),
    [anon_sym_netlink_audit_socket] = ACTIONS(1),
    [anon_sym_netlink_connector_socket] = ACTIONS(1),
    [anon_sym_netlink_crypto_socket] = ACTIONS(1),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(1),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(1),
    [anon_sym_netlink_firewall_socket] = ACTIONS(1),
    [anon_sym_netlink_generic_socket] = ACTIONS(1),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(1),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(1),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(1),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(1),
    [anon_sym_netlink_nflog_socket] = ACTIONS(1),
    [anon_sym_netlink_rdma_socket] = ACTIONS(1),
    [anon_sym_netlink_route_socket] = ACTIONS(1),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(1),
    [anon_sym_netlink_selinux_socket] = ACTIONS(1),
    [anon_sym_netlink_socket] = ACTIONS(1),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(1),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_nscd] = ACTIONS(1),
    [anon_sym_packet] = ACTIONS(1),
    [anon_sym_packet_socket] = ACTIONS(1),
    [anon_sym_passwd] = ACTIONS(1),
    [anon_sym_peer] = ACTIONS(1),
    [anon_sym_perf_event] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_process2] = ACTIONS(1),
    [anon_sym_proxy] = ACTIONS(1),
    [anon_sym_rawip_socket] = ACTIONS(1),
    [anon_sym_sctp_socket] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
    [anon_sym_sem] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_shm] = ACTIONS(1),
    [anon_sym_sock_file] = ACTIONS(1),
    [anon_sym_socket] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_tcp_socket] = ACTIONS(1),
    [anon_sym_tun_socket] = ACTIONS(1),
    [anon_sym_udp_socket] = ACTIONS(1),
    [anon_sym_unix_dgram_socket] = ACTIONS(1),
    [anon_sym_unix_stream_socket] = ACTIONS(1),
    [anon_sym_user_namespace] = ACTIONS(1),
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
    [sym_source_file] = STATE(163),
    [sym__definition] = STATE(13),
    [sym_type_declaration] = STATE(13),
    [sym_attribute_declaration] = STATE(13),
    [sym_expandattribute_declaration] = STATE(13),
    [sym_typeattribute_declaration] = STATE(13),
    [sym_typealias_declaration] = STATE(13),
    [sym_permissive_declaration] = STATE(13),
    [sym_type_transition_declaration] = STATE(13),
    [sym_type_change_declaration] = STATE(13),
    [sym_type_member_declaration] = STATE(13),
    [sym_role_declaration] = STATE(13),
    [sym_attribute_role_declaration] = STATE(13),
    [sym_roleattribute_declaration] = STATE(13),
    [sym_role_transition_declaration] = STATE(13),
    [sym_rule_declaration] = STATE(13),
    [sym_boolean_declaration] = STATE(13),
    [sym_macro_declaration] = STATE(13),
    [sym_macro_usage] = STATE(13),
    [sym_rule_name] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    [anon_sym_attribute_role] = ACTIONS(29),
    [anon_sym_roleattribute] = ACTIONS(31),
    [anon_sym_role_transition] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(35),
    [anon_sym_interface] = ACTIONS(37),
    [anon_sym_allow] = ACTIONS(39),
    [anon_sym_auditallow] = ACTIONS(39),
    [anon_sym_dontaudit] = ACTIONS(39),
    [anon_sym_neverallow] = ACTIONS(39),
  },
  [2] = {
    [sym_word] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_complement] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_anon_inode] = ACTIONS(41),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_binder] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(41),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_db_blob] = ACTIONS(41),
    [anon_sym_db_column] = ACTIONS(41),
    [anon_sym_db_database] = ACTIONS(41),
    [anon_sym_db_language] = ACTIONS(41),
    [anon_sym_db_procedure] = ACTIONS(41),
    [anon_sym_db_schema] = ACTIONS(41),
    [anon_sym_db_sequence] = ACTIONS(41),
    [anon_sym_db_table] = ACTIONS(41),
    [anon_sym_db_tuple] = ACTIONS(41),
    [anon_sym_db_view] = ACTIONS(41),
    [anon_sym_dbus] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
    [anon_sym_dir] = ACTIONS(41),
    [anon_sym_fd] = ACTIONS(41),
    [anon_sym_fifo_file] = ACTIONS(41),
    [anon_sym_file] = ACTIONS(41),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_icmp_socket] = ACTIONS(41),
    [anon_sym_infiniband_endport] = ACTIONS(41),
    [anon_sym_infiniband_pkey] = ACTIONS(41),
    [anon_sym_io_uring] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(41),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_lockdown] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(41),
    [anon_sym_msgq] = ACTIONS(41),
    [anon_sym_netif] = ACTIONS(41),
    [anon_sym_netlink_audit_socket] = ACTIONS(41),
    [anon_sym_netlink_connector_socket] = ACTIONS(41),
    [anon_sym_netlink_crypto_socket] = ACTIONS(41),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(41),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(41),
    [anon_sym_netlink_firewall_socket] = ACTIONS(41),
    [anon_sym_netlink_generic_socket] = ACTIONS(41),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(41),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(41),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(41),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(41),
    [anon_sym_netlink_nflog_socket] = ACTIONS(41),
    [anon_sym_netlink_rdma_socket] = ACTIONS(41),
    [anon_sym_netlink_route_socket] = ACTIONS(41),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(41),
    [anon_sym_netlink_selinux_socket] = ACTIONS(41),
    [anon_sym_netlink_socket] = ACTIONS(41),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(41),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(41),
    [anon_sym_node] = ACTIONS(41),
    [anon_sym_nscd] = ACTIONS(41),
    [anon_sym_packet] = ACTIONS(41),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_perf_event] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(41),
    [anon_sym_process2] = ACTIONS(41),
    [anon_sym_proxy] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_sctp_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
    [anon_sym_sem] = ACTIONS(41),
    [anon_sym_service] = ACTIONS(41),
    [anon_sym_shm] = ACTIONS(41),
    [anon_sym_sock_file] = ACTIONS(41),
    [anon_sym_socket] = ACTIONS(41),
    [anon_sym_system] = ACTIONS(41),
    [anon_sym_tcp_socket] = ACTIONS(41),
    [anon_sym_tun_socket] = ACTIONS(41),
    [anon_sym_udp_socket] = ACTIONS(41),
    [anon_sym_unix_dgram_socket] = ACTIONS(41),
    [anon_sym_unix_stream_socket] = ACTIONS(41),
    [anon_sym_user_namespace] = ACTIONS(41),
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
  [3] = {
    [sym_class] = STATE(96),
    [sym_classes] = STATE(86),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
  [4] = {
    [sym_class] = STATE(43),
    [sym_classes] = STATE(86),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
  [5] = {
    [sym_classes] = STATE(10),
    [aux_sym_class_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
  [6] = {
    [sym_classes] = STATE(10),
    [aux_sym_class_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_anon_inode] = ACTIONS(55),
    [anon_sym_appletalk_socket] = ACTIONS(55),
    [anon_sym_association] = ACTIONS(55),
    [anon_sym_binder] = ACTIONS(55),
    [anon_sym_blk_file] = ACTIONS(55),
    [anon_sym_bpf] = ACTIONS(55),
    [anon_sym_cap2_userns] = ACTIONS(55),
    [anon_sym_cap_userns] = ACTIONS(55),
    [anon_sym_capability] = ACTIONS(58),
    [anon_sym_capability2] = ACTIONS(55),
    [anon_sym_chr_file] = ACTIONS(55),
    [anon_sym_context] = ACTIONS(55),
    [anon_sym_db_blob] = ACTIONS(55),
    [anon_sym_db_column] = ACTIONS(55),
    [anon_sym_db_database] = ACTIONS(55),
    [anon_sym_db_language] = ACTIONS(55),
    [anon_sym_db_procedure] = ACTIONS(55),
    [anon_sym_db_schema] = ACTIONS(55),
    [anon_sym_db_sequence] = ACTIONS(55),
    [anon_sym_db_table] = ACTIONS(55),
    [anon_sym_db_tuple] = ACTIONS(55),
    [anon_sym_db_view] = ACTIONS(55),
    [anon_sym_dbus] = ACTIONS(55),
    [anon_sym_dccp_socket] = ACTIONS(55),
    [anon_sym_dir] = ACTIONS(55),
    [anon_sym_fd] = ACTIONS(55),
    [anon_sym_fifo_file] = ACTIONS(55),
    [anon_sym_file] = ACTIONS(58),
    [anon_sym_filesystem] = ACTIONS(55),
    [anon_sym_icmp_socket] = ACTIONS(55),
    [anon_sym_infiniband_endport] = ACTIONS(55),
    [anon_sym_infiniband_pkey] = ACTIONS(55),
    [anon_sym_io_uring] = ACTIONS(55),
    [anon_sym_ipc] = ACTIONS(55),
    [anon_sym_kernel_service] = ACTIONS(55),
    [anon_sym_key] = ACTIONS(58),
    [anon_sym_key_socket] = ACTIONS(55),
    [anon_sym_lnk_file] = ACTIONS(55),
    [anon_sym_lockdown] = ACTIONS(55),
    [anon_sym_memprotect] = ACTIONS(55),
    [anon_sym_msg] = ACTIONS(58),
    [anon_sym_msgq] = ACTIONS(55),
    [anon_sym_netif] = ACTIONS(55),
    [anon_sym_netlink_audit_socket] = ACTIONS(55),
    [anon_sym_netlink_connector_socket] = ACTIONS(55),
    [anon_sym_netlink_crypto_socket] = ACTIONS(55),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(55),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(55),
    [anon_sym_netlink_firewall_socket] = ACTIONS(55),
    [anon_sym_netlink_generic_socket] = ACTIONS(55),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(55),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(55),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(55),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(55),
    [anon_sym_netlink_nflog_socket] = ACTIONS(55),
    [anon_sym_netlink_rdma_socket] = ACTIONS(55),
    [anon_sym_netlink_route_socket] = ACTIONS(55),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(55),
    [anon_sym_netlink_selinux_socket] = ACTIONS(55),
    [anon_sym_netlink_socket] = ACTIONS(55),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(55),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(55),
    [anon_sym_node] = ACTIONS(55),
    [anon_sym_nscd] = ACTIONS(55),
    [anon_sym_packet] = ACTIONS(58),
    [anon_sym_packet_socket] = ACTIONS(55),
    [anon_sym_passwd] = ACTIONS(55),
    [anon_sym_peer] = ACTIONS(55),
    [anon_sym_perf_event] = ACTIONS(55),
    [anon_sym_process] = ACTIONS(58),
    [anon_sym_process2] = ACTIONS(55),
    [anon_sym_proxy] = ACTIONS(55),
    [anon_sym_rawip_socket] = ACTIONS(55),
    [anon_sym_sctp_socket] = ACTIONS(55),
    [anon_sym_security] = ACTIONS(55),
    [anon_sym_sem] = ACTIONS(55),
    [anon_sym_service] = ACTIONS(55),
    [anon_sym_shm] = ACTIONS(55),
    [anon_sym_sock_file] = ACTIONS(55),
    [anon_sym_socket] = ACTIONS(55),
    [anon_sym_system] = ACTIONS(55),
    [anon_sym_tcp_socket] = ACTIONS(55),
    [anon_sym_tun_socket] = ACTIONS(55),
    [anon_sym_udp_socket] = ACTIONS(55),
    [anon_sym_unix_dgram_socket] = ACTIONS(55),
    [anon_sym_unix_stream_socket] = ACTIONS(55),
    [anon_sym_user_namespace] = ACTIONS(55),
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
  [7] = {
    [sym_class] = STATE(119),
    [sym_classes] = STATE(86),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
  [8] = {
    [sym_class] = STATE(118),
    [sym_classes] = STATE(86),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
  [9] = {
    [sym_classes] = STATE(10),
    [aux_sym_class_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_anon_inode] = ACTIONS(61),
    [anon_sym_appletalk_socket] = ACTIONS(61),
    [anon_sym_association] = ACTIONS(61),
    [anon_sym_binder] = ACTIONS(61),
    [anon_sym_blk_file] = ACTIONS(61),
    [anon_sym_bpf] = ACTIONS(61),
    [anon_sym_cap2_userns] = ACTIONS(61),
    [anon_sym_cap_userns] = ACTIONS(61),
    [anon_sym_capability] = ACTIONS(63),
    [anon_sym_capability2] = ACTIONS(61),
    [anon_sym_chr_file] = ACTIONS(61),
    [anon_sym_context] = ACTIONS(61),
    [anon_sym_db_blob] = ACTIONS(61),
    [anon_sym_db_column] = ACTIONS(61),
    [anon_sym_db_database] = ACTIONS(61),
    [anon_sym_db_language] = ACTIONS(61),
    [anon_sym_db_procedure] = ACTIONS(61),
    [anon_sym_db_schema] = ACTIONS(61),
    [anon_sym_db_sequence] = ACTIONS(61),
    [anon_sym_db_table] = ACTIONS(61),
    [anon_sym_db_tuple] = ACTIONS(61),
    [anon_sym_db_view] = ACTIONS(61),
    [anon_sym_dbus] = ACTIONS(61),
    [anon_sym_dccp_socket] = ACTIONS(61),
    [anon_sym_dir] = ACTIONS(61),
    [anon_sym_fd] = ACTIONS(61),
    [anon_sym_fifo_file] = ACTIONS(61),
    [anon_sym_file] = ACTIONS(63),
    [anon_sym_filesystem] = ACTIONS(61),
    [anon_sym_icmp_socket] = ACTIONS(61),
    [anon_sym_infiniband_endport] = ACTIONS(61),
    [anon_sym_infiniband_pkey] = ACTIONS(61),
    [anon_sym_io_uring] = ACTIONS(61),
    [anon_sym_ipc] = ACTIONS(61),
    [anon_sym_kernel_service] = ACTIONS(61),
    [anon_sym_key] = ACTIONS(63),
    [anon_sym_key_socket] = ACTIONS(61),
    [anon_sym_lnk_file] = ACTIONS(61),
    [anon_sym_lockdown] = ACTIONS(61),
    [anon_sym_memprotect] = ACTIONS(61),
    [anon_sym_msg] = ACTIONS(63),
    [anon_sym_msgq] = ACTIONS(61),
    [anon_sym_netif] = ACTIONS(61),
    [anon_sym_netlink_audit_socket] = ACTIONS(61),
    [anon_sym_netlink_connector_socket] = ACTIONS(61),
    [anon_sym_netlink_crypto_socket] = ACTIONS(61),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(61),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(61),
    [anon_sym_netlink_firewall_socket] = ACTIONS(61),
    [anon_sym_netlink_generic_socket] = ACTIONS(61),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(61),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(61),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(61),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(61),
    [anon_sym_netlink_nflog_socket] = ACTIONS(61),
    [anon_sym_netlink_rdma_socket] = ACTIONS(61),
    [anon_sym_netlink_route_socket] = ACTIONS(61),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(61),
    [anon_sym_netlink_selinux_socket] = ACTIONS(61),
    [anon_sym_netlink_socket] = ACTIONS(61),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(61),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(61),
    [anon_sym_node] = ACTIONS(61),
    [anon_sym_nscd] = ACTIONS(61),
    [anon_sym_packet] = ACTIONS(63),
    [anon_sym_packet_socket] = ACTIONS(61),
    [anon_sym_passwd] = ACTIONS(61),
    [anon_sym_peer] = ACTIONS(61),
    [anon_sym_perf_event] = ACTIONS(61),
    [anon_sym_process] = ACTIONS(63),
    [anon_sym_process2] = ACTIONS(61),
    [anon_sym_proxy] = ACTIONS(61),
    [anon_sym_rawip_socket] = ACTIONS(61),
    [anon_sym_sctp_socket] = ACTIONS(61),
    [anon_sym_security] = ACTIONS(61),
    [anon_sym_sem] = ACTIONS(61),
    [anon_sym_service] = ACTIONS(61),
    [anon_sym_shm] = ACTIONS(61),
    [anon_sym_sock_file] = ACTIONS(61),
    [anon_sym_socket] = ACTIONS(61),
    [anon_sym_system] = ACTIONS(61),
    [anon_sym_tcp_socket] = ACTIONS(61),
    [anon_sym_tun_socket] = ACTIONS(61),
    [anon_sym_udp_socket] = ACTIONS(61),
    [anon_sym_unix_dgram_socket] = ACTIONS(61),
    [anon_sym_unix_stream_socket] = ACTIONS(61),
    [anon_sym_user_namespace] = ACTIONS(61),
    [anon_sym_x_application_data] = ACTIONS(61),
    [anon_sym_x_client] = ACTIONS(61),
    [anon_sym_x_colormap] = ACTIONS(61),
    [anon_sym_x_cursor] = ACTIONS(61),
    [anon_sym_x_device] = ACTIONS(61),
    [anon_sym_x_drawable] = ACTIONS(61),
    [anon_sym_x_event] = ACTIONS(61),
    [anon_sym_x_extension] = ACTIONS(61),
    [anon_sym_x_font] = ACTIONS(61),
    [anon_sym_x_gc] = ACTIONS(61),
    [anon_sym_x_keyboard] = ACTIONS(61),
    [anon_sym_x_pointer] = ACTIONS(61),
    [anon_sym_x_property] = ACTIONS(61),
    [anon_sym_x_resource] = ACTIONS(61),
    [anon_sym_x_screen] = ACTIONS(61),
    [anon_sym_x_selection] = ACTIONS(61),
    [anon_sym_x_server] = ACTIONS(61),
    [anon_sym_x_synthetic_event] = ACTIONS(61),
  },
  [11] = {
    [sym_classes] = STATE(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_anon_inode] = ACTIONS(47),
    [anon_sym_appletalk_socket] = ACTIONS(47),
    [anon_sym_association] = ACTIONS(47),
    [anon_sym_binder] = ACTIONS(47),
    [anon_sym_blk_file] = ACTIONS(47),
    [anon_sym_bpf] = ACTIONS(47),
    [anon_sym_cap2_userns] = ACTIONS(47),
    [anon_sym_cap_userns] = ACTIONS(47),
    [anon_sym_capability] = ACTIONS(49),
    [anon_sym_capability2] = ACTIONS(47),
    [anon_sym_chr_file] = ACTIONS(47),
    [anon_sym_context] = ACTIONS(47),
    [anon_sym_db_blob] = ACTIONS(47),
    [anon_sym_db_column] = ACTIONS(47),
    [anon_sym_db_database] = ACTIONS(47),
    [anon_sym_db_language] = ACTIONS(47),
    [anon_sym_db_procedure] = ACTIONS(47),
    [anon_sym_db_schema] = ACTIONS(47),
    [anon_sym_db_sequence] = ACTIONS(47),
    [anon_sym_db_table] = ACTIONS(47),
    [anon_sym_db_tuple] = ACTIONS(47),
    [anon_sym_db_view] = ACTIONS(47),
    [anon_sym_dbus] = ACTIONS(47),
    [anon_sym_dccp_socket] = ACTIONS(47),
    [anon_sym_dir] = ACTIONS(47),
    [anon_sym_fd] = ACTIONS(47),
    [anon_sym_fifo_file] = ACTIONS(47),
    [anon_sym_file] = ACTIONS(49),
    [anon_sym_filesystem] = ACTIONS(47),
    [anon_sym_icmp_socket] = ACTIONS(47),
    [anon_sym_infiniband_endport] = ACTIONS(47),
    [anon_sym_infiniband_pkey] = ACTIONS(47),
    [anon_sym_io_uring] = ACTIONS(47),
    [anon_sym_ipc] = ACTIONS(47),
    [anon_sym_kernel_service] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_key_socket] = ACTIONS(47),
    [anon_sym_lnk_file] = ACTIONS(47),
    [anon_sym_lockdown] = ACTIONS(47),
    [anon_sym_memprotect] = ACTIONS(47),
    [anon_sym_msg] = ACTIONS(49),
    [anon_sym_msgq] = ACTIONS(47),
    [anon_sym_netif] = ACTIONS(47),
    [anon_sym_netlink_audit_socket] = ACTIONS(47),
    [anon_sym_netlink_connector_socket] = ACTIONS(47),
    [anon_sym_netlink_crypto_socket] = ACTIONS(47),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(47),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(47),
    [anon_sym_netlink_firewall_socket] = ACTIONS(47),
    [anon_sym_netlink_generic_socket] = ACTIONS(47),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(47),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(47),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(47),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(47),
    [anon_sym_netlink_nflog_socket] = ACTIONS(47),
    [anon_sym_netlink_rdma_socket] = ACTIONS(47),
    [anon_sym_netlink_route_socket] = ACTIONS(47),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(47),
    [anon_sym_netlink_selinux_socket] = ACTIONS(47),
    [anon_sym_netlink_socket] = ACTIONS(47),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(47),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(47),
    [anon_sym_node] = ACTIONS(47),
    [anon_sym_nscd] = ACTIONS(47),
    [anon_sym_packet] = ACTIONS(49),
    [anon_sym_packet_socket] = ACTIONS(47),
    [anon_sym_passwd] = ACTIONS(47),
    [anon_sym_peer] = ACTIONS(47),
    [anon_sym_perf_event] = ACTIONS(47),
    [anon_sym_process] = ACTIONS(49),
    [anon_sym_process2] = ACTIONS(47),
    [anon_sym_proxy] = ACTIONS(47),
    [anon_sym_rawip_socket] = ACTIONS(47),
    [anon_sym_sctp_socket] = ACTIONS(47),
    [anon_sym_security] = ACTIONS(47),
    [anon_sym_sem] = ACTIONS(47),
    [anon_sym_service] = ACTIONS(47),
    [anon_sym_shm] = ACTIONS(47),
    [anon_sym_sock_file] = ACTIONS(47),
    [anon_sym_socket] = ACTIONS(47),
    [anon_sym_system] = ACTIONS(47),
    [anon_sym_tcp_socket] = ACTIONS(47),
    [anon_sym_tun_socket] = ACTIONS(47),
    [anon_sym_udp_socket] = ACTIONS(47),
    [anon_sym_unix_dgram_socket] = ACTIONS(47),
    [anon_sym_unix_stream_socket] = ACTIONS(47),
    [anon_sym_user_namespace] = ACTIONS(47),
    [anon_sym_x_application_data] = ACTIONS(47),
    [anon_sym_x_client] = ACTIONS(47),
    [anon_sym_x_colormap] = ACTIONS(47),
    [anon_sym_x_cursor] = ACTIONS(47),
    [anon_sym_x_device] = ACTIONS(47),
    [anon_sym_x_drawable] = ACTIONS(47),
    [anon_sym_x_event] = ACTIONS(47),
    [anon_sym_x_extension] = ACTIONS(47),
    [anon_sym_x_font] = ACTIONS(47),
    [anon_sym_x_gc] = ACTIONS(47),
    [anon_sym_x_keyboard] = ACTIONS(47),
    [anon_sym_x_pointer] = ACTIONS(47),
    [anon_sym_x_property] = ACTIONS(47),
    [anon_sym_x_resource] = ACTIONS(47),
    [anon_sym_x_screen] = ACTIONS(47),
    [anon_sym_x_selection] = ACTIONS(47),
    [anon_sym_x_server] = ACTIONS(47),
    [anon_sym_x_synthetic_event] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_word,
    ACTIONS(70), 1,
      anon_sym_type,
    ACTIONS(73), 1,
      anon_sym_attribute,
    ACTIONS(76), 1,
      anon_sym_expandattribute,
    ACTIONS(79), 1,
      anon_sym_typeattribute,
    ACTIONS(82), 1,
      anon_sym_typealias,
    ACTIONS(85), 1,
      anon_sym_permissive,
    ACTIONS(88), 1,
      anon_sym_type_transition,
    ACTIONS(91), 1,
      anon_sym_type_change,
    ACTIONS(94), 1,
      anon_sym_type_member,
    ACTIONS(97), 1,
      anon_sym_role,
    ACTIONS(100), 1,
      anon_sym_attribute_role,
    ACTIONS(103), 1,
      anon_sym_roleattribute,
    ACTIONS(106), 1,
      anon_sym_role_transition,
    ACTIONS(109), 1,
      anon_sym_bool,
    ACTIONS(112), 1,
      anon_sym_interface,
    STATE(58), 1,
      sym_rule_name,
    ACTIONS(115), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(12), 19,
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
      sym_attribute_role_declaration,
      sym_roleattribute_declaration,
      sym_role_transition_declaration,
      sym_rule_declaration,
      sym_boolean_declaration,
      sym_macro_declaration,
      sym_macro_usage,
      aux_sym_source_file_repeat1,
  [85] = 21,
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
      anon_sym_attribute_role,
    ACTIONS(31), 1,
      anon_sym_roleattribute,
    ACTIONS(33), 1,
      anon_sym_role_transition,
    ACTIONS(35), 1,
      anon_sym_bool,
    ACTIONS(37), 1,
      anon_sym_interface,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_rule_name,
    ACTIONS(39), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(12), 19,
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
      sym_attribute_role_declaration,
      sym_roleattribute_declaration,
      sym_role_transition_declaration,
      sym_rule_declaration,
      sym_boolean_declaration,
      sym_macro_declaration,
      sym_macro_usage,
      aux_sym_source_file_repeat1,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(122), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
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
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(126), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(130), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(134), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(138), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(142), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(146), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(150), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
    ACTIONS(154), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
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
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 20,
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
      anon_sym_attribute_role,
      anon_sym_roleattribute,
      anon_sym_role_transition,
      anon_sym_bool,
      anon_sym_interface,
      sym_word,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_alias,
      anon_sym_types,
      anon_sym_true,
      anon_sym_false,
      sym_word,
    ACTIONS(226), 10,
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
  [956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_alias,
      anon_sym_types,
      anon_sym_true,
      anon_sym_false,
      sym_word,
    ACTIONS(230), 10,
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
  [979] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_typeattribute,
    STATE(58), 1,
      sym_rule_name,
    ACTIONS(39), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(175), 4,
      sym_type_declaration,
      sym_typeattribute_declaration,
      sym_rule_declaration,
      sym_macro_usage,
  [1007] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_complement,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_expansion,
    STATE(87), 1,
      sym_identifier,
    STATE(160), 1,
      sym_permission,
    STATE(161), 1,
      sym_permissions,
  [1038] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(45), 1,
      aux_sym_permission_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(95), 1,
      sym_permissions,
  [1066] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_word,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_expansion,
    STATE(45), 1,
      aux_sym_permission_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(95), 1,
      sym_permissions,
  [1094] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym_expansion,
    STATE(133), 1,
      sym_argument,
    STATE(140), 1,
      sym_identifier,
    STATE(170), 1,
      sym_arguments,
  [1122] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(45), 1,
      aux_sym_permission_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(95), 1,
      sym_permissions,
  [1150] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(67), 1,
      sym_identifier,
    STATE(169), 1,
      sym_type,
  [1175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_word,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      sym_negative,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(49), 1,
      aux_sym_argument_repeat1,
    STATE(109), 1,
      sym_identifier,
  [1200] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(67), 1,
      sym_identifier,
    STATE(174), 1,
      sym_type,
  [1225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(67), 1,
      sym_identifier,
    STATE(177), 1,
      sym_type,
  [1250] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(50), 1,
      sym_type,
    STATE(67), 1,
      sym_identifier,
  [1275] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(67), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type,
  [1300] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(53), 1,
      sym_type,
    STATE(67), 1,
      sym_identifier,
  [1325] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(67), 1,
      sym_identifier,
    STATE(90), 1,
      sym_type,
  [1350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(87), 1,
      sym_identifier,
    STATE(172), 1,
      sym_permissions,
  [1375] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      sym_negative,
    STATE(41), 1,
      sym_expansion,
    STATE(49), 1,
      aux_sym_argument_repeat1,
    STATE(109), 1,
      sym_identifier,
  [1400] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(48), 1,
      sym_type,
    STATE(67), 1,
      sym_identifier,
  [1425] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_expansion,
    STATE(44), 1,
      aux_sym_permission_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(95), 1,
      sym_permissions,
  [1450] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      sym_negative,
    STATE(41), 1,
      sym_expansion,
    STATE(62), 1,
      aux_sym_type_repeat1,
    STATE(116), 1,
      sym_identifier,
  [1475] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_negative,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(62), 1,
      aux_sym_type_repeat1,
    STATE(116), 1,
      sym_identifier,
  [1500] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_word,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      sym_negative,
    ACTIONS(296), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(62), 1,
      aux_sym_type_repeat1,
    STATE(116), 1,
      sym_identifier,
  [1525] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(67), 1,
      sym_identifier,
    STATE(149), 1,
      sym_type,
  [1550] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_expansion,
    STATE(47), 1,
      aux_sym_permission_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(95), 1,
      sym_permissions,
  [1575] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_complement,
    STATE(41), 1,
      sym_expansion,
    STATE(51), 1,
      sym_type,
    STATE(67), 1,
      sym_identifier,
  [1600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(142), 1,
      sym_identifier,
    STATE(164), 1,
      sym_alias,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_negative,
    STATE(41), 1,
      sym_expansion,
    STATE(60), 1,
      aux_sym_type_repeat1,
    STATE(116), 1,
      sym_identifier,
  [1656] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(81), 1,
      aux_sym_alias_repeat1,
    STATE(129), 1,
      sym_identifier,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 6,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1690] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(55), 1,
      sym_roles,
    STATE(102), 1,
      sym_identifier,
  [1712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(140), 1,
      sym_identifier,
    STATE(148), 1,
      sym_argument,
  [1734] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_word,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(73), 1,
      aux_sym_attribute_repeat1,
    STATE(124), 1,
      sym_identifier,
  [1756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_negative,
    STATE(41), 1,
      sym_expansion,
    STATE(57), 1,
      aux_sym_argument_repeat1,
    STATE(109), 1,
      sym_identifier,
  [1790] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_expansion,
    STATE(59), 1,
      sym_permissions,
    STATE(87), 1,
      sym_identifier,
  [1812] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(84), 1,
      aux_sym_roles_repeat1,
    STATE(132), 1,
      sym_identifier,
  [1834] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    STATE(41), 1,
      sym_expansion,
    STATE(64), 1,
      sym_permissions,
    STATE(87), 1,
      sym_identifier,
  [1856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(73), 1,
      aux_sym_attribute_repeat1,
    STATE(124), 1,
      sym_identifier,
  [1878] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(134), 1,
      sym_alias,
    STATE(142), 1,
      sym_identifier,
  [1900] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_word,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(81), 1,
      aux_sym_alias_repeat1,
    STATE(129), 1,
      sym_identifier,
  [1922] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_negative,
    STATE(41), 1,
      sym_expansion,
    STATE(61), 1,
      aux_sym_type_repeat1,
    STATE(116), 1,
      sym_identifier,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1956] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_word,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(84), 1,
      aux_sym_roles_repeat1,
    STATE(132), 1,
      sym_identifier,
  [1978] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(126), 1,
      sym_attribute,
    STATE(141), 1,
      sym_identifier,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 5,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [2022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_expansion,
    STATE(70), 1,
      sym_identifier,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [2052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym_expansion,
    STATE(162), 1,
      sym_identifier,
  [2071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_alias_repeat1,
    STATE(129), 1,
      sym_identifier,
  [2090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_expansion,
    STATE(165), 1,
      sym_identifier,
  [2109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(79), 1,
      aux_sym_attribute_repeat1,
    STATE(124), 1,
      sym_identifier,
  [2128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(77), 1,
      aux_sym_roles_repeat1,
    STATE(132), 1,
      sym_identifier,
  [2147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [2157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(152), 1,
      sym_identifier,
  [2173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(121), 1,
      sym_identifier,
  [2189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(150), 1,
      sym_identifier,
  [2205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(122), 1,
      sym_identifier,
  [2221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(131), 1,
      sym_identifier,
  [2237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(100), 1,
      sym_identifier,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [2263] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(183), 1,
      sym_identifier,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [2289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 4,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [2299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(146), 1,
      sym_identifier,
  [2315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(68), 1,
      sym_identifier,
  [2331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(115), 1,
      sym_identifier,
  [2347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [2357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(75), 1,
      sym_identifier,
  [2373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(117), 1,
      sym_identifier,
  [2389] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(153), 1,
      sym_identifier,
  [2405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(144), 1,
      sym_identifier,
  [2421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(159), 1,
      sym_identifier,
  [2437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(125), 1,
      sym_identifier,
  [2453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [2473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(151), 1,
      sym_identifier,
  [2489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(92), 1,
      sym_identifier,
  [2505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(82), 1,
      sym_identifier,
  [2521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [2531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_alias,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      aux_sym_type_declaration_repeat1,
  [2547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(157), 1,
      sym_identifier,
  [2563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      aux_sym_type_declaration_repeat1,
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      sym_boolean,
    ACTIONS(381), 2,
      anon_sym_true,
      anon_sym_false,
  [2596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_type_declaration_repeat1,
  [2609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_type_declaration_repeat1,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
  [2631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
  [2644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      aux_sym_type_declaration_repeat1,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
  [2666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_arguments_repeat1,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      aux_sym_type_declaration_repeat1,
  [2692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_type_declaration_repeat1,
  [2718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(173), 1,
      sym_boolean,
    ACTIONS(381), 2,
      anon_sym_true,
      anon_sym_false,
  [2729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_type_declaration_repeat1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_type_declaration_repeat1,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_true,
      anon_sym_false,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_true,
      anon_sym_false,
  [2803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      anon_sym_types,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SEMI,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_SEMI,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_BQUOTE,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COMMA,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_alias,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SEMI,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_word,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_expansion_token1,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COLON,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_word,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SEMI,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SEMI,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COLON,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COLON,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COLON,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SEMI,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_SEMI,
  [3060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_BQUOTE,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_SEMI,
  [3074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 230,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 440,
  [SMALL_STATE(24)] = 469,
  [SMALL_STATE(25)] = 498,
  [SMALL_STATE(26)] = 527,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 585,
  [SMALL_STATE(29)] = 614,
  [SMALL_STATE(30)] = 643,
  [SMALL_STATE(31)] = 672,
  [SMALL_STATE(32)] = 701,
  [SMALL_STATE(33)] = 730,
  [SMALL_STATE(34)] = 759,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 817,
  [SMALL_STATE(37)] = 846,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 904,
  [SMALL_STATE(40)] = 933,
  [SMALL_STATE(41)] = 956,
  [SMALL_STATE(42)] = 979,
  [SMALL_STATE(43)] = 1007,
  [SMALL_STATE(44)] = 1038,
  [SMALL_STATE(45)] = 1066,
  [SMALL_STATE(46)] = 1094,
  [SMALL_STATE(47)] = 1122,
  [SMALL_STATE(48)] = 1150,
  [SMALL_STATE(49)] = 1175,
  [SMALL_STATE(50)] = 1200,
  [SMALL_STATE(51)] = 1225,
  [SMALL_STATE(52)] = 1250,
  [SMALL_STATE(53)] = 1275,
  [SMALL_STATE(54)] = 1300,
  [SMALL_STATE(55)] = 1325,
  [SMALL_STATE(56)] = 1350,
  [SMALL_STATE(57)] = 1375,
  [SMALL_STATE(58)] = 1400,
  [SMALL_STATE(59)] = 1425,
  [SMALL_STATE(60)] = 1450,
  [SMALL_STATE(61)] = 1475,
  [SMALL_STATE(62)] = 1500,
  [SMALL_STATE(63)] = 1525,
  [SMALL_STATE(64)] = 1550,
  [SMALL_STATE(65)] = 1575,
  [SMALL_STATE(66)] = 1600,
  [SMALL_STATE(67)] = 1622,
  [SMALL_STATE(68)] = 1634,
  [SMALL_STATE(69)] = 1656,
  [SMALL_STATE(70)] = 1678,
  [SMALL_STATE(71)] = 1690,
  [SMALL_STATE(72)] = 1712,
  [SMALL_STATE(73)] = 1734,
  [SMALL_STATE(74)] = 1756,
  [SMALL_STATE(75)] = 1768,
  [SMALL_STATE(76)] = 1790,
  [SMALL_STATE(77)] = 1812,
  [SMALL_STATE(78)] = 1834,
  [SMALL_STATE(79)] = 1856,
  [SMALL_STATE(80)] = 1878,
  [SMALL_STATE(81)] = 1900,
  [SMALL_STATE(82)] = 1922,
  [SMALL_STATE(83)] = 1944,
  [SMALL_STATE(84)] = 1956,
  [SMALL_STATE(85)] = 1978,
  [SMALL_STATE(86)] = 2000,
  [SMALL_STATE(87)] = 2011,
  [SMALL_STATE(88)] = 2022,
  [SMALL_STATE(89)] = 2041,
  [SMALL_STATE(90)] = 2052,
  [SMALL_STATE(91)] = 2071,
  [SMALL_STATE(92)] = 2090,
  [SMALL_STATE(93)] = 2109,
  [SMALL_STATE(94)] = 2128,
  [SMALL_STATE(95)] = 2147,
  [SMALL_STATE(96)] = 2157,
  [SMALL_STATE(97)] = 2173,
  [SMALL_STATE(98)] = 2189,
  [SMALL_STATE(99)] = 2205,
  [SMALL_STATE(100)] = 2221,
  [SMALL_STATE(101)] = 2237,
  [SMALL_STATE(102)] = 2253,
  [SMALL_STATE(103)] = 2263,
  [SMALL_STATE(104)] = 2279,
  [SMALL_STATE(105)] = 2289,
  [SMALL_STATE(106)] = 2299,
  [SMALL_STATE(107)] = 2315,
  [SMALL_STATE(108)] = 2331,
  [SMALL_STATE(109)] = 2347,
  [SMALL_STATE(110)] = 2357,
  [SMALL_STATE(111)] = 2373,
  [SMALL_STATE(112)] = 2389,
  [SMALL_STATE(113)] = 2405,
  [SMALL_STATE(114)] = 2421,
  [SMALL_STATE(115)] = 2437,
  [SMALL_STATE(116)] = 2453,
  [SMALL_STATE(117)] = 2463,
  [SMALL_STATE(118)] = 2473,
  [SMALL_STATE(119)] = 2489,
  [SMALL_STATE(120)] = 2505,
  [SMALL_STATE(121)] = 2521,
  [SMALL_STATE(122)] = 2531,
  [SMALL_STATE(123)] = 2547,
  [SMALL_STATE(124)] = 2563,
  [SMALL_STATE(125)] = 2572,
  [SMALL_STATE(126)] = 2585,
  [SMALL_STATE(127)] = 2596,
  [SMALL_STATE(128)] = 2609,
  [SMALL_STATE(129)] = 2622,
  [SMALL_STATE(130)] = 2631,
  [SMALL_STATE(131)] = 2644,
  [SMALL_STATE(132)] = 2657,
  [SMALL_STATE(133)] = 2666,
  [SMALL_STATE(134)] = 2679,
  [SMALL_STATE(135)] = 2692,
  [SMALL_STATE(136)] = 2705,
  [SMALL_STATE(137)] = 2718,
  [SMALL_STATE(138)] = 2729,
  [SMALL_STATE(139)] = 2742,
  [SMALL_STATE(140)] = 2755,
  [SMALL_STATE(141)] = 2763,
  [SMALL_STATE(142)] = 2771,
  [SMALL_STATE(143)] = 2779,
  [SMALL_STATE(144)] = 2787,
  [SMALL_STATE(145)] = 2795,
  [SMALL_STATE(146)] = 2803,
  [SMALL_STATE(147)] = 2813,
  [SMALL_STATE(148)] = 2821,
  [SMALL_STATE(149)] = 2829,
  [SMALL_STATE(150)] = 2836,
  [SMALL_STATE(151)] = 2843,
  [SMALL_STATE(152)] = 2850,
  [SMALL_STATE(153)] = 2857,
  [SMALL_STATE(154)] = 2864,
  [SMALL_STATE(155)] = 2871,
  [SMALL_STATE(156)] = 2878,
  [SMALL_STATE(157)] = 2885,
  [SMALL_STATE(158)] = 2892,
  [SMALL_STATE(159)] = 2899,
  [SMALL_STATE(160)] = 2906,
  [SMALL_STATE(161)] = 2913,
  [SMALL_STATE(162)] = 2920,
  [SMALL_STATE(163)] = 2927,
  [SMALL_STATE(164)] = 2934,
  [SMALL_STATE(165)] = 2941,
  [SMALL_STATE(166)] = 2948,
  [SMALL_STATE(167)] = 2955,
  [SMALL_STATE(168)] = 2962,
  [SMALL_STATE(169)] = 2969,
  [SMALL_STATE(170)] = 2976,
  [SMALL_STATE(171)] = 2983,
  [SMALL_STATE(172)] = 2990,
  [SMALL_STATE(173)] = 2997,
  [SMALL_STATE(174)] = 3004,
  [SMALL_STATE(175)] = 3011,
  [SMALL_STATE(176)] = 3018,
  [SMALL_STATE(177)] = 3025,
  [SMALL_STATE(178)] = 3032,
  [SMALL_STATE(179)] = 3039,
  [SMALL_STATE(180)] = 3046,
  [SMALL_STATE(181)] = 3053,
  [SMALL_STATE(182)] = 3060,
  [SMALL_STATE(183)] = 3067,
  [SMALL_STATE(184)] = 3074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 43),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 43), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 43), SHIFT_REPEAT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 28),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 28),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeattribute_declaration, 4, .production_id = 17),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeattribute_declaration, 4, .production_id = 17),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 7, .production_id = 49),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_declaration, 7, .production_id = 49),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 12),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 4, .production_id = 12),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 36),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 36),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 4, .production_id = 23),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 4, .production_id = 23),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 3, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 24),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 24),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeattribute_declaration, 5, .production_id = 25),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeattribute_declaration, 5, .production_id = 25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 3, .production_id = 8),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 3, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_transition_declaration, 7, .production_id = 44),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_transition_declaration, 7, .production_id = 44),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_declaration, 3, .production_id = 7),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_declaration, 3, .production_id = 7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typealias_declaration, 5, .production_id = 24),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typealias_declaration, 5, .production_id = 24),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_declaration, 10, .production_id = 53),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_declaration, 10, .production_id = 53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_declaration, 5, .production_id = 29),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_declaration, 5, .production_id = 29),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roleattribute_declaration, 5, .production_id = 30),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roleattribute_declaration, 5, .production_id = 30),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_transition_declaration, 5, .production_id = 31),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_transition_declaration, 5, .production_id = 31),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_declaration, 4, .production_id = 21),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_declaration, 4, .production_id = 21),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_role_declaration, 3, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_role_declaration, 3, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roleattribute_declaration, 4, .production_id = 18),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_roleattribute_declaration, 4, .production_id = 18),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_change_declaration, 7, .production_id = 45),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_change_declaration, 7, .production_id = 45),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_declaration, 7, .production_id = 46),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_member_declaration, 7, .production_id = 46),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_transition_declaration, 7, .production_id = 47),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_transition_declaration, 7, .production_id = 47),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_declaration, 3, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 3, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expandattribute_declaration, 4, .production_id = 16),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expandattribute_declaration, 4, .production_id = 16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissive_declaration, 3, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permissive_declaration, 3, .production_id = 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_transition_declaration, 8, .production_id = 50),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_transition_declaration, 8, .production_id = 50),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 52), SHIFT_REPEAT(41),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 52),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 52), SHIFT_REPEAT(168),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 52), SHIFT_REPEAT(87),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 40), SHIFT_REPEAT(41),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 40),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 40), SHIFT_REPEAT(111),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 40), SHIFT_REPEAT(168),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 27), SHIFT_REPEAT(41),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 27),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 27), SHIFT_REPEAT(97),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 27), SHIFT_REPEAT(168),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 15), SHIFT_REPEAT(41),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 15),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 15), SHIFT_REPEAT(168),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 26),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2, .production_id = 35), SHIFT_REPEAT(41),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2, .production_id = 35),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2, .production_id = 35), SHIFT_REPEAT(168),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 37),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_roles_repeat1, 2, .production_id = 20), SHIFT_REPEAT(41),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_roles_repeat1, 2, .production_id = 20),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_roles_repeat1, 2, .production_id = 20), SHIFT_REPEAT(168),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 28),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 42),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 1, .production_id = 41),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roles, 1, .production_id = 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_roles, 3, .production_id = 19),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1, .production_id = 10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 38),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, .production_id = 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 1, .production_id = 11),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 22),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_roles_repeat1, 1, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 33), SHIFT_REPEAT(72),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 33),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2, .production_id = 13), SHIFT_REPEAT(113),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2, .production_id = 13),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, .production_id = 10),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, .production_id = 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, .production_id = 11),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 3, .production_id = 34),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 14),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 39),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 32),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 1, .production_id = 41),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [463] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 2, .production_id = 48),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 51),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 54),
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
