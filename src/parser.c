#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 0
#define TOKEN_COUNT 142
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 47

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
  anon_sym_anon_inode = 37,
  anon_sym_appletalk_socket = 38,
  anon_sym_association = 39,
  anon_sym_binder = 40,
  anon_sym_blk_file = 41,
  anon_sym_bpf = 42,
  anon_sym_cap2_userns = 43,
  anon_sym_cap_userns = 44,
  anon_sym_capability = 45,
  anon_sym_capability2 = 46,
  anon_sym_chr_file = 47,
  anon_sym_context = 48,
  anon_sym_db_blob = 49,
  anon_sym_db_column = 50,
  anon_sym_db_database = 51,
  anon_sym_db_language = 52,
  anon_sym_db_procedure = 53,
  anon_sym_db_schema = 54,
  anon_sym_db_sequence = 55,
  anon_sym_db_table = 56,
  anon_sym_db_tuple = 57,
  anon_sym_db_view = 58,
  anon_sym_dbus = 59,
  anon_sym_dccp_socket = 60,
  anon_sym_dir = 61,
  anon_sym_fd = 62,
  anon_sym_fifo_file = 63,
  anon_sym_file = 64,
  anon_sym_filesystem = 65,
  anon_sym_icmp_socket = 66,
  anon_sym_infiniband_endport = 67,
  anon_sym_infiniband_pkey = 68,
  anon_sym_io_uring = 69,
  anon_sym_ipc = 70,
  anon_sym_kernel_service = 71,
  anon_sym_key = 72,
  anon_sym_key_socket = 73,
  anon_sym_lnk_file = 74,
  anon_sym_lockdown = 75,
  anon_sym_memprotect = 76,
  anon_sym_msg = 77,
  anon_sym_msgq = 78,
  anon_sym_netif = 79,
  anon_sym_netlink_audit_socket = 80,
  anon_sym_netlink_connector_socket = 81,
  anon_sym_netlink_crypto_socket = 82,
  anon_sym_netlink_dnrt_socket = 83,
  anon_sym_netlink_fib_lookup_socket = 84,
  anon_sym_netlink_firewall_socket = 85,
  anon_sym_netlink_generic_socket = 86,
  anon_sym_netlink_ip6fw_socket = 87,
  anon_sym_netlink_iscsi_socket = 88,
  anon_sym_netlink_kobject_uevent_socket = 89,
  anon_sym_netlink_netfilter_socket = 90,
  anon_sym_netlink_nflog_socket = 91,
  anon_sym_netlink_rdma_socket = 92,
  anon_sym_netlink_route_socket = 93,
  anon_sym_netlink_scsitransport_socket = 94,
  anon_sym_netlink_selinux_socket = 95,
  anon_sym_netlink_socket = 96,
  anon_sym_netlink_tcpdiag_socket = 97,
  anon_sym_netlink_xfrm_socket = 98,
  anon_sym_node = 99,
  anon_sym_nscd = 100,
  anon_sym_packet = 101,
  anon_sym_packet_socket = 102,
  anon_sym_passwd = 103,
  anon_sym_peer = 104,
  anon_sym_perf_event = 105,
  anon_sym_process = 106,
  anon_sym_process2 = 107,
  anon_sym_proxy = 108,
  anon_sym_rawip_socket = 109,
  anon_sym_sctp_socket = 110,
  anon_sym_security = 111,
  anon_sym_sem = 112,
  anon_sym_service = 113,
  anon_sym_shm = 114,
  anon_sym_sock_file = 115,
  anon_sym_socket = 116,
  anon_sym_system = 117,
  anon_sym_tcp_socket = 118,
  anon_sym_tun_socket = 119,
  anon_sym_udp_socket = 120,
  anon_sym_unix_dgram_socket = 121,
  anon_sym_unix_stream_socket = 122,
  anon_sym_user_namespace = 123,
  anon_sym_x_application_data = 124,
  anon_sym_x_client = 125,
  anon_sym_x_colormap = 126,
  anon_sym_x_cursor = 127,
  anon_sym_x_device = 128,
  anon_sym_x_drawable = 129,
  anon_sym_x_event = 130,
  anon_sym_x_extension = 131,
  anon_sym_x_font = 132,
  anon_sym_x_gc = 133,
  anon_sym_x_keyboard = 134,
  anon_sym_x_pointer = 135,
  anon_sym_x_property = 136,
  anon_sym_x_resource = 137,
  anon_sym_x_screen = 138,
  anon_sym_x_selection = 139,
  anon_sym_x_server = 140,
  anon_sym_x_synthetic_event = 141,
  sym_source_file = 142,
  sym__definition = 143,
  sym_type_declaration = 144,
  sym_attribute_declaration = 145,
  sym_expandattribute_declaration = 146,
  sym_typeattribute_declaration = 147,
  sym_typealias_declaration = 148,
  sym_permissive_declaration = 149,
  sym_type_transition_declaration = 150,
  sym_type_change_declaration = 151,
  sym_type_member_declaration = 152,
  sym_role_declaration = 153,
  sym_class = 154,
  sym_type = 155,
  sym_alias = 156,
  sym_attribute = 157,
  sym_permission = 158,
  sym_rule_declaration = 159,
  sym_boolean_declaration = 160,
  sym_argument = 161,
  sym_arguments = 162,
  sym_macro_declaration = 163,
  sym_macro_usage = 164,
  sym_boolean = 165,
  sym_expansion = 166,
  sym_identifier = 167,
  sym_permissions = 168,
  sym_rule_name = 169,
  sym_classes = 170,
  aux_sym_source_file_repeat1 = 171,
  aux_sym_type_declaration_repeat1 = 172,
  aux_sym_class_repeat1 = 173,
  aux_sym_type_repeat1 = 174,
  aux_sym_alias_repeat1 = 175,
  aux_sym_attribute_repeat1 = 176,
  aux_sym_permission_repeat1 = 177,
  aux_sym_argument_repeat1 = 178,
  aux_sym_arguments_repeat1 = 179,
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
  field_default_type = 11,
  field_expand_value = 12,
  field_member_type = 13,
  field_name = 14,
  field_object_name = 15,
  field_perm_set = 16,
  field_rule_name = 17,
  field_source_type = 18,
  field_target_type = 19,
  field_type = 20,
  field_type_id = 21,
  field_value = 22,
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
  [field_default_type] = "default_type",
  [field_expand_value] = "expand_value",
  [field_member_type] = "member_type",
  [field_name] = "name",
  [field_object_name] = "object_name",
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
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 1},
  [13] = {.index = 14, .length = 2},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 1},
  [24] = {.index = 36, .length = 2},
  [25] = {.index = 38, .length = 1},
  [26] = {.index = 39, .length = 2},
  [27] = {.index = 41, .length = 1},
  [28] = {.index = 42, .length = 2},
  [29] = {.index = 44, .length = 3},
  [30] = {.index = 47, .length = 2},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 2},
  [33] = {.index = 52, .length = 2},
  [34] = {.index = 54, .length = 1},
  [35] = {.index = 55, .length = 1},
  [36] = {.index = 56, .length = 2},
  [37] = {.index = 58, .length = 4},
  [38] = {.index = 62, .length = 4},
  [39] = {.index = 66, .length = 4},
  [40] = {.index = 70, .length = 1},
  [41] = {.index = 71, .length = 5},
  [42] = {.index = 76, .length = 5},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 2},
  [45] = {.index = 85, .length = 2},
  [46] = {.index = 87, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attribute, 0},
  [1] =
    {field_type, 0},
  [2] =
    {field_type_id, 1},
  [3] =
    {field_attribute_id, 1},
  [4] =
    {field_type, 1},
  [5] =
    {field_name, 0},
  [6] =
    {field_argument, 0},
  [7] =
    {field_arg, 0},
  [8] =
    {field_alias, 0},
  [9] =
    {field_attribute_id, 2, .inherited = true},
    {field_type_id, 1},
  [11] =
    {field_attribute_id, 0, .inherited = true},
    {field_attribute_id, 1, .inherited = true},
  [13] =
    {field_attribute, 1, .inherited = true},
  [14] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
  [16] =
    {field_attribute_id, 1},
    {field_expand_value, 2},
  [18] =
    {field_attribute_id, 2},
    {field_type_id, 1},
  [20] =
    {field_name, 1},
    {field_value, 2},
  [22] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [24] =
    {field_arguments, 2},
    {field_name, 0},
  [26] =
    {field_alias_id, 3},
    {field_type_id, 1},
  [28] =
    {field_attribute_id, 2},
    {field_attribute_id, 3, .inherited = true},
    {field_type_id, 1},
  [31] =
    {field_type, 1},
    {field_type, 2, .inherited = true},
  [33] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [35] =
    {field_class, 0},
  [36] =
    {field_name, 1},
    {field_type, 3},
  [38] =
    {field_argument, 1},
  [39] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [41] =
    {field_alias, 1, .inherited = true},
  [42] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
  [44] =
    {field_alias_id, 3},
    {field_attribute_id, 4, .inherited = true},
    {field_type_id, 1},
  [47] =
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [49] =
    {field_arg, 1},
  [50] =
    {field_arg, 1},
    {field_arg, 2, .inherited = true},
  [52] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [54] =
    {field_perm_set, 0},
  [55] =
    {field_class, 1, .inherited = true},
  [56] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [58] =
    {field_class, 4},
    {field_default_type, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [62] =
    {field_change_type, 5},
    {field_class, 4},
    {field_source_type, 1},
    {field_target_type, 2},
  [66] =
    {field_class, 4},
    {field_member_type, 5},
    {field_source_type, 1},
    {field_target_type, 2},
  [70] =
    {field_perm_set, 1},
  [71] =
    {field_class, 4},
    {field_perm_set, 5},
    {field_rule_name, 0},
    {field_source_type, 1},
    {field_target_type, 2},
  [76] =
    {field_class, 4},
    {field_default_type, 5},
    {field_object_name, 6},
    {field_source_type, 1},
    {field_target_type, 2},
  [81] =
    {field_perm_set, 1},
    {field_perm_set, 2, .inherited = true},
  [83] =
    {field_perm_set, 0, .inherited = true},
    {field_perm_set, 1, .inherited = true},
  [85] =
    {field_body, 7},
    {field_name, 3},
  [87] =
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
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 205:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 206:
      if (lookahead == '_') ADVANCE(286);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(291);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_x_gc);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 229:
      if (lookahead == 'b') ADVANCE(307);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(315);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 244:
      if (lookahead == 'q') ADVANCE(322);
      END_STATE();
    case 245:
      if (lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 252:
      if (lookahead == 'f') ADVANCE(329);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_netif);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 272:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 275:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 276:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 292:
      if (lookahead == 'w') ADVANCE(370);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 296:
      if (lookahead == 'b') ADVANCE(374);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 302:
      if (lookahead == 'v') ADVANCE(380);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_binder);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 316:
      if (lookahead == 'b') ADVANCE(393);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(396);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 322:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 325:
      if (lookahead == 'w') ADVANCE(402);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 327:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 332:
      if (lookahead == 'b') ADVANCE(409);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 335:
      if (lookahead == '_') ADVANCE(412);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 338:
      if (lookahead == 'w') ADVANCE(415);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 340:
      if (lookahead == 'k') ADVANCE(417);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_packet);
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_passwd);
      END_STATE();
    case 344:
      if (lookahead == 'v') ADVANCE(420);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_socket);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 356:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(436);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_x_font);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 379:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 381:
      if (lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_db_blob);
      END_STATE();
    case 394:
      if (lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 395:
      if (lookahead == 'b') ADVANCE(466);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(467);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 398:
      if (lookahead == 'm') ADVANCE(469);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_db_view);
      END_STATE();
    case 403:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 408:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 410:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(481);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(482);
      END_STATE();
    case 413:
      if (lookahead == 'k') ADVANCE(483);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 417:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_process);
      if (lookahead == '2') ADVANCE(492);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 425:
      if (lookahead == 'y') ADVANCE(495);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 428:
      if (lookahead == 'k') ADVANCE(497);
      END_STATE();
    case 429:
      if (lookahead == 'k') ADVANCE(498);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 431:
      if (lookahead == 'm') ADVANCE(500);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 435:
      if (lookahead == 'k') ADVANCE(504);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 438:
      if (lookahead == 'm') ADVANCE(507);
      END_STATE();
    case 439:
      if (lookahead == 'c') ADVANCE(508);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 441:
      if (lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 444:
      if (lookahead == 'b') ADVANCE(513);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_x_event);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 455:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 456:
      if (lookahead == 'k') ADVANCE(524);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_blk_file);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_chr_file);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 468:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_db_table);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_db_tuple);
      END_STATE();
    case 473:
      if (lookahead == 'k') ADVANCE(537);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 478:
      if (lookahead == 'k') ADVANCE(542);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_io_uring);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_lnk_file);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_lockdown);
      END_STATE();
    case 486:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(551);
      if (lookahead == 'g') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'k') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(555);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(559);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 491:
      if (lookahead == 'v') ADVANCE(563);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_process2);
      END_STATE();
    case 493:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(565);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 500:
      if (lookahead == 'b') ADVANCE(570);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 505:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 508:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_x_client);
      END_STATE();
    case 510:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_x_cursor);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_x_device);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 518:
      if (lookahead == 'c') ADVANCE(585);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_x_screen);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_x_server);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 524:
      if (lookahead == '_') ADVANCE(589);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 527:
      if (lookahead == 'w') ADVANCE(591);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 530:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_db_column);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 533:
      if (lookahead == 'g') ADVANCE(596);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_db_schema);
      END_STATE();
    case 536:
      if (lookahead == 'c') ADVANCE(598);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_dontaudit);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_fifo_file);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(601);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 543:
      if (lookahead == 'd') ADVANCE(603);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 548:
      if (lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 553:
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(617);
      END_STATE();
    case 556:
      if (lookahead == 'd') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(620);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(624);
      END_STATE();
    case 560:
      if (lookahead == 'w') ADVANCE(625);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 564:
      if (lookahead == 'k') ADVANCE(629);
      END_STATE();
    case 565:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_sock_file);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 569:
      if (lookahead == 'g') ADVANCE(633);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 573:
      if (lookahead == 'b') ADVANCE(636);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 575:
      if (lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 576:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 580:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 582:
      if (lookahead == 'd') ADVANCE(645);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_x_pointer);
      END_STATE();
    case 584:
      if (lookahead == 'y') ADVANCE(646);
      END_STATE();
    case 585:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 587:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_anon_inode);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_auditallow);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_cap_userns);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_capability);
      if (lookahead == '2') ADVANCE(653);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 596:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 598:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 600:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_filesystem);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 603:
      if (lookahead == '_') ADVANCE(661);
      END_STATE();
    case 604:
      if (lookahead == 'v') ADVANCE(662);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_key_socket);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_memprotect);
      END_STATE();
    case 607:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 609:
      if (lookahead == 'y') ADVANCE(665);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 611:
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 613:
      if (lookahead == '6') ADVANCE(670);
      END_STATE();
    case 614:
      if (lookahead == 'c') ADVANCE(671);
      END_STATE();
    case 615:
      if (lookahead == 'b') ADVANCE(672);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 617:
      if (lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(675);
      END_STATE();
    case 619:
      if (lookahead == 'u') ADVANCE(676);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 621:
      if (lookahead == 'l') ADVANCE(678);
      END_STATE();
    case 622:
      if (lookahead == 'c') ADVANCE(679);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(680);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_neverallow);
      END_STATE();
    case 626:
      if (lookahead == 'k') ADVANCE(682);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_perf_event);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_permissive);
      END_STATE();
    case 629:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_tcp_socket);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_tun_socket);
      END_STATE();
    case 633:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_udp_socket);
      END_STATE();
    case 638:
      if (lookahead == '_') ADVANCE(689);
      END_STATE();
    case 639:
      if (lookahead == 'm') ADVANCE(690);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_x_colormap);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_x_drawable);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_x_keyboard);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_x_property);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_x_resource);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 649:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_association);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_cap2_userns);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_capability2);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_db_database);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_db_language);
      END_STATE();
    case 656:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_db_sequence);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_dccp_socket);
      END_STATE();
    case 659:
      if (lookahead == 'b') ADVANCE(698);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_icmp_socket);
      END_STATE();
    case 661:
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(700);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(704);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 667:
      if (lookahead == '_') ADVANCE(706);
      END_STATE();
    case 668:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 669:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 670:
      if (lookahead == 'f') ADVANCE(709);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 672:
      if (lookahead == 'j') ADVANCE(711);
      END_STATE();
    case 673:
      if (lookahead == 'f') ADVANCE(712);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 675:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 679:
      if (lookahead == 'k') ADVANCE(718);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 681:
      if (lookahead == 'm') ADVANCE(720);
      END_STATE();
    case 682:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_sctp_socket);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_type_change);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_type_member);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 690:
      if (lookahead == '_') ADVANCE(726);
      END_STATE();
    case 691:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_x_extension);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_x_selection);
      END_STATE();
    case 695:
      if (lookahead == '_') ADVANCE(729);
      END_STATE();
    case 696:
      if (lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_db_procedure);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(731);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 700:
      if (lookahead == 'k') ADVANCE(733);
      END_STATE();
    case 701:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 703:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 705:
      if (lookahead == '_') ADVANCE(738);
      END_STATE();
    case 706:
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 707:
      if (lookahead == 'w') ADVANCE(740);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 709:
      if (lookahead == 'w') ADVANCE(742);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 713:
      if (lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 714:
      if (lookahead == '_') ADVANCE(747);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 717:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 719:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 720:
      if (lookahead == '_') ADVANCE(753);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_rawip_socket);
      END_STATE();
    case 723:
      if (lookahead == 'i') ADVANCE(755);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 725:
      if (lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(758);
      END_STATE();
    case 727:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 728:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 730:
      if (lookahead == 'k') ADVANCE(762);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 735:
      if (lookahead == '_') ADVANCE(767);
      END_STATE();
    case 736:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 737:
      if (lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 739:
      if (lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 740:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 741:
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 742:
      if (lookahead == '_') ADVANCE(774);
      END_STATE();
    case 743:
      if (lookahead == '_') ADVANCE(775);
      END_STATE();
    case 744:
      if (lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 745:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 746:
      if (lookahead == '_') ADVANCE(778);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(779);
      END_STATE();
    case 748:
      if (lookahead == '_') ADVANCE(780);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 750:
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 752:
      if (lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(785);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_packet_socket);
      END_STATE();
    case 755:
      if (lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_typeattribute);
      END_STATE();
    case 757:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 758:
      if (lookahead == 'o') ADVANCE(788);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 760:
      if (lookahead == '_') ADVANCE(790);
      END_STATE();
    case 761:
      if (lookahead == 'v') ADVANCE(791);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 764:
      if (lookahead == 'p') ADVANCE(794);
      END_STATE();
    case 765:
      if (lookahead == 'y') ADVANCE(795);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_kernel_service);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 769:
      if (lookahead == '_') ADVANCE(798);
      END_STATE();
    case 770:
      if (lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 771:
      if (lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(801);
      END_STATE();
    case 773:
      if (lookahead == 'c') ADVANCE(802);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(807);
      END_STATE();
    case 779:
      if (lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 781:
      if (lookahead == 'a') ADVANCE(810);
      END_STATE();
    case 782:
      if (lookahead == 'x') ADVANCE(811);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_netlink_socket);
      END_STATE();
    case 784:
      if (lookahead == 'g') ADVANCE(812);
      END_STATE();
    case 785:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 786:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 787:
      if (lookahead == 'k') ADVANCE(815);
      END_STATE();
    case 788:
      if (lookahead == 'c') ADVANCE(816);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_user_namespace);
      END_STATE();
    case 790:
      if (lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(819);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_expandattribute);
      END_STATE();
    case 794:
      if (lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_infiniband_pkey);
      END_STATE();
    case 796:
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 797:
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 799:
      if (lookahead == 'c') ADVANCE(824);
      END_STATE();
    case 800:
      if (lookahead == 'k') ADVANCE(825);
      END_STATE();
    case 801:
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 802:
      if (lookahead == '_') ADVANCE(827);
      END_STATE();
    case 803:
      if (lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 804:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 805:
      if (lookahead == '_') ADVANCE(830);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 807:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 808:
      if (lookahead == 'c') ADVANCE(833);
      END_STATE();
    case 809:
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 810:
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 811:
      if (lookahead == '_') ADVANCE(836);
      END_STATE();
    case 812:
      if (lookahead == '_') ADVANCE(837);
      END_STATE();
    case 813:
      if (lookahead == 'c') ADVANCE(838);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_type_transition);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 816:
      if (lookahead == 'k') ADVANCE(840);
      END_STATE();
    case 817:
      if (lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 818:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_appletalk_socket);
      END_STATE();
    case 820:
      if (lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 821:
      if (lookahead == 'c') ADVANCE(844);
      END_STATE();
    case 822:
      if (lookahead == 'r') ADVANCE(845);
      END_STATE();
    case 823:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 824:
      if (lookahead == 'k') ADVANCE(847);
      END_STATE();
    case 825:
      if (lookahead == 'u') ADVANCE(848);
      END_STATE();
    case 826:
      if (lookahead == '_') ADVANCE(849);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(850);
      END_STATE();
    case 828:
      if (lookahead == 'c') ADVANCE(851);
      END_STATE();
    case 829:
      if (lookahead == 'c') ADVANCE(852);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(853);
      END_STATE();
    case 831:
      if (lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 832:
      if (lookahead == 'c') ADVANCE(855);
      END_STATE();
    case 833:
      if (lookahead == 'k') ADVANCE(856);
      END_STATE();
    case 834:
      if (lookahead == 'c') ADVANCE(857);
      END_STATE();
    case 835:
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 836:
      if (lookahead == 's') ADVANCE(859);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(860);
      END_STATE();
    case 838:
      if (lookahead == 'k') ADVANCE(861);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 844:
      if (lookahead == 'k') ADVANCE(867);
      END_STATE();
    case 845:
      if (lookahead == '_') ADVANCE(868);
      END_STATE();
    case 846:
      if (lookahead == 'c') ADVANCE(869);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 848:
      if (lookahead == 'p') ADVANCE(871);
      END_STATE();
    case 849:
      if (lookahead == 's') ADVANCE(872);
      END_STATE();
    case 850:
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 851:
      if (lookahead == 'k') ADVANCE(874);
      END_STATE();
    case 852:
      if (lookahead == 'k') ADVANCE(875);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 854:
      if (lookahead == '_') ADVANCE(877);
      END_STATE();
    case 855:
      if (lookahead == 'k') ADVANCE(878);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 857:
      if (lookahead == 'k') ADVANCE(880);
      END_STATE();
    case 858:
      if (lookahead == 'p') ADVANCE(881);
      END_STATE();
    case 859:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 860:
      if (lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_unix_dgram_socket);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 864:
      if (lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_x_synthetic_event);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_infiniband_endport);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 868:
      if (lookahead == 's') ADVANCE(888);
      END_STATE();
    case 869:
      if (lookahead == 'k') ADVANCE(889);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 871:
      if (lookahead == '_') ADVANCE(891);
      END_STATE();
    case 872:
      if (lookahead == 'o') ADVANCE(892);
      END_STATE();
    case 873:
      if (lookahead == 'c') ADVANCE(893);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 876:
      if (lookahead == 'v') ADVANCE(896);
      END_STATE();
    case 877:
      if (lookahead == 's') ADVANCE(897);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 881:
      if (lookahead == 'o') ADVANCE(901);
      END_STATE();
    case 882:
      if (lookahead == 'c') ADVANCE(902);
      END_STATE();
    case 883:
      if (lookahead == 'c') ADVANCE(903);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_unix_stream_socket);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_x_application_data);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 888:
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_netlink_dnrt_socket);
      END_STATE();
    case 891:
      if (lookahead == 's') ADVANCE(908);
      END_STATE();
    case 892:
      if (lookahead == 'c') ADVANCE(909);
      END_STATE();
    case 893:
      if (lookahead == 'k') ADVANCE(910);
      END_STATE();
    case 894:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(912);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 898:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_netlink_rdma_socket);
      END_STATE();
    case 900:
      if (lookahead == 't') ADVANCE(916);
      END_STATE();
    case 901:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 902:
      if (lookahead == 'k') ADVANCE(918);
      END_STATE();
    case 903:
      if (lookahead == 'k') ADVANCE(919);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_netlink_xfrm_socket);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_netlink_audit_socket);
      END_STATE();
    case 906:
      if (lookahead == 'c') ADVANCE(920);
      END_STATE();
    case 907:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 909:
      if (lookahead == 'k') ADVANCE(923);
      END_STATE();
    case 910:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_netlink_ip6fw_socket);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_netlink_iscsi_socket);
      END_STATE();
    case 913:
      if (lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 914:
      if (lookahead == 'c') ADVANCE(926);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_netlink_nflog_socket);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_netlink_route_socket);
      END_STATE();
    case 917:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 918:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 920:
      if (lookahead == 'k') ADVANCE(930);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_netlink_crypto_socket);
      END_STATE();
    case 922:
      if (lookahead == 'c') ADVANCE(931);
      END_STATE();
    case 923:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 924:
      if (lookahead == 't') ADVANCE(933);
      END_STATE();
    case 925:
      if (lookahead == 't') ADVANCE(934);
      END_STATE();
    case 926:
      if (lookahead == 'k') ADVANCE(935);
      END_STATE();
    case 927:
      if (lookahead == '_') ADVANCE(936);
      END_STATE();
    case 928:
      if (lookahead == 't') ADVANCE(937);
      END_STATE();
    case 929:
      if (lookahead == 't') ADVANCE(938);
      END_STATE();
    case 930:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 931:
      if (lookahead == 'k') ADVANCE(940);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_netlink_generic_socket);
      END_STATE();
    case 934:
      if (lookahead == '_') ADVANCE(942);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(943);
      END_STATE();
    case 936:
      if (lookahead == 's') ADVANCE(944);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_netlink_selinux_socket);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_netlink_tcpdiag_socket);
      END_STATE();
    case 939:
      if (lookahead == 't') ADVANCE(945);
      END_STATE();
    case 940:
      if (lookahead == 'e') ADVANCE(946);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_netlink_firewall_socket);
      END_STATE();
    case 942:
      if (lookahead == 's') ADVANCE(947);
      END_STATE();
    case 943:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_netlink_connector_socket);
      END_STATE();
    case 946:
      if (lookahead == 't') ADVANCE(950);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(951);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_netlink_netfilter_socket);
      END_STATE();
    case 949:
      if (lookahead == 'c') ADVANCE(952);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_netlink_fib_lookup_socket);
      END_STATE();
    case 951:
      if (lookahead == 'c') ADVANCE(953);
      END_STATE();
    case 952:
      if (lookahead == 'k') ADVANCE(954);
      END_STATE();
    case 953:
      if (lookahead == 'k') ADVANCE(955);
      END_STATE();
    case 954:
      if (lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 955:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 956:
      if (lookahead == 't') ADVANCE(958);
      END_STATE();
    case 957:
      if (lookahead == 't') ADVANCE(959);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_netlink_scsitransport_socket);
      END_STATE();
    case 959:
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
    [sym_source_file] = STATE(142),
    [sym__definition] = STATE(11),
    [sym_type_declaration] = STATE(11),
    [sym_attribute_declaration] = STATE(11),
    [sym_expandattribute_declaration] = STATE(11),
    [sym_typeattribute_declaration] = STATE(11),
    [sym_typealias_declaration] = STATE(11),
    [sym_permissive_declaration] = STATE(11),
    [sym_type_transition_declaration] = STATE(11),
    [sym_type_change_declaration] = STATE(11),
    [sym_type_member_declaration] = STATE(11),
    [sym_role_declaration] = STATE(11),
    [sym_rule_declaration] = STATE(11),
    [sym_boolean_declaration] = STATE(11),
    [sym_macro_declaration] = STATE(11),
    [sym_macro_usage] = STATE(11),
    [sym_rule_name] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    [anon_sym_anon_inode] = ACTIONS(35),
    [anon_sym_appletalk_socket] = ACTIONS(35),
    [anon_sym_association] = ACTIONS(35),
    [anon_sym_binder] = ACTIONS(35),
    [anon_sym_blk_file] = ACTIONS(35),
    [anon_sym_bpf] = ACTIONS(35),
    [anon_sym_cap2_userns] = ACTIONS(35),
    [anon_sym_cap_userns] = ACTIONS(35),
    [anon_sym_capability] = ACTIONS(35),
    [anon_sym_capability2] = ACTIONS(35),
    [anon_sym_chr_file] = ACTIONS(35),
    [anon_sym_context] = ACTIONS(35),
    [anon_sym_db_blob] = ACTIONS(35),
    [anon_sym_db_column] = ACTIONS(35),
    [anon_sym_db_database] = ACTIONS(35),
    [anon_sym_db_language] = ACTIONS(35),
    [anon_sym_db_procedure] = ACTIONS(35),
    [anon_sym_db_schema] = ACTIONS(35),
    [anon_sym_db_sequence] = ACTIONS(35),
    [anon_sym_db_table] = ACTIONS(35),
    [anon_sym_db_tuple] = ACTIONS(35),
    [anon_sym_db_view] = ACTIONS(35),
    [anon_sym_dbus] = ACTIONS(35),
    [anon_sym_dccp_socket] = ACTIONS(35),
    [anon_sym_dir] = ACTIONS(35),
    [anon_sym_fd] = ACTIONS(35),
    [anon_sym_fifo_file] = ACTIONS(35),
    [anon_sym_file] = ACTIONS(35),
    [anon_sym_filesystem] = ACTIONS(35),
    [anon_sym_icmp_socket] = ACTIONS(35),
    [anon_sym_infiniband_endport] = ACTIONS(35),
    [anon_sym_infiniband_pkey] = ACTIONS(35),
    [anon_sym_io_uring] = ACTIONS(35),
    [anon_sym_ipc] = ACTIONS(35),
    [anon_sym_kernel_service] = ACTIONS(35),
    [anon_sym_key] = ACTIONS(35),
    [anon_sym_key_socket] = ACTIONS(35),
    [anon_sym_lnk_file] = ACTIONS(35),
    [anon_sym_lockdown] = ACTIONS(35),
    [anon_sym_memprotect] = ACTIONS(35),
    [anon_sym_msg] = ACTIONS(35),
    [anon_sym_msgq] = ACTIONS(35),
    [anon_sym_netif] = ACTIONS(35),
    [anon_sym_netlink_audit_socket] = ACTIONS(35),
    [anon_sym_netlink_connector_socket] = ACTIONS(35),
    [anon_sym_netlink_crypto_socket] = ACTIONS(35),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(35),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(35),
    [anon_sym_netlink_firewall_socket] = ACTIONS(35),
    [anon_sym_netlink_generic_socket] = ACTIONS(35),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(35),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(35),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(35),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(35),
    [anon_sym_netlink_nflog_socket] = ACTIONS(35),
    [anon_sym_netlink_rdma_socket] = ACTIONS(35),
    [anon_sym_netlink_route_socket] = ACTIONS(35),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(35),
    [anon_sym_netlink_selinux_socket] = ACTIONS(35),
    [anon_sym_netlink_socket] = ACTIONS(35),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(35),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(35),
    [anon_sym_node] = ACTIONS(35),
    [anon_sym_nscd] = ACTIONS(35),
    [anon_sym_packet] = ACTIONS(35),
    [anon_sym_packet_socket] = ACTIONS(35),
    [anon_sym_passwd] = ACTIONS(35),
    [anon_sym_peer] = ACTIONS(35),
    [anon_sym_perf_event] = ACTIONS(35),
    [anon_sym_process] = ACTIONS(35),
    [anon_sym_process2] = ACTIONS(35),
    [anon_sym_proxy] = ACTIONS(35),
    [anon_sym_rawip_socket] = ACTIONS(35),
    [anon_sym_sctp_socket] = ACTIONS(35),
    [anon_sym_security] = ACTIONS(35),
    [anon_sym_sem] = ACTIONS(35),
    [anon_sym_service] = ACTIONS(35),
    [anon_sym_shm] = ACTIONS(35),
    [anon_sym_sock_file] = ACTIONS(35),
    [anon_sym_socket] = ACTIONS(35),
    [anon_sym_system] = ACTIONS(35),
    [anon_sym_tcp_socket] = ACTIONS(35),
    [anon_sym_tun_socket] = ACTIONS(35),
    [anon_sym_udp_socket] = ACTIONS(35),
    [anon_sym_unix_dgram_socket] = ACTIONS(35),
    [anon_sym_unix_stream_socket] = ACTIONS(35),
    [anon_sym_user_namespace] = ACTIONS(35),
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
    [sym_classes] = STATE(10),
    [aux_sym_class_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_anon_inode] = ACTIONS(41),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_binder] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_bpf] = ACTIONS(41),
    [anon_sym_cap2_userns] = ACTIONS(41),
    [anon_sym_cap_userns] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(44),
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
    [anon_sym_file] = ACTIONS(44),
    [anon_sym_filesystem] = ACTIONS(41),
    [anon_sym_icmp_socket] = ACTIONS(41),
    [anon_sym_infiniband_endport] = ACTIONS(41),
    [anon_sym_infiniband_pkey] = ACTIONS(41),
    [anon_sym_io_uring] = ACTIONS(41),
    [anon_sym_ipc] = ACTIONS(41),
    [anon_sym_kernel_service] = ACTIONS(41),
    [anon_sym_key] = ACTIONS(44),
    [anon_sym_key_socket] = ACTIONS(41),
    [anon_sym_lnk_file] = ACTIONS(41),
    [anon_sym_lockdown] = ACTIONS(41),
    [anon_sym_memprotect] = ACTIONS(41),
    [anon_sym_msg] = ACTIONS(44),
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
    [anon_sym_packet] = ACTIONS(44),
    [anon_sym_packet_socket] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_peer] = ACTIONS(41),
    [anon_sym_perf_event] = ACTIONS(41),
    [anon_sym_process] = ACTIONS(44),
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
  [4] = {
    [sym_class] = STATE(99),
    [sym_classes] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_anon_inode] = ACTIONS(49),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_binder] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(51),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_language] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_schema] = ACTIONS(49),
    [anon_sym_db_sequence] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_db_view] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(51),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_icmp_socket] = ACTIONS(49),
    [anon_sym_infiniband_endport] = ACTIONS(49),
    [anon_sym_infiniband_pkey] = ACTIONS(49),
    [anon_sym_io_uring] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_lockdown] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(51),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_connector_socket] = ACTIONS(49),
    [anon_sym_netlink_crypto_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_generic_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_rdma_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(51),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_perf_event] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(51),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_proxy] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_sctp_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_user_namespace] = ACTIONS(49),
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
  [5] = {
    [sym_class] = STATE(97),
    [sym_classes] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_anon_inode] = ACTIONS(49),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_binder] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(51),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_language] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_schema] = ACTIONS(49),
    [anon_sym_db_sequence] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_db_view] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(51),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_icmp_socket] = ACTIONS(49),
    [anon_sym_infiniband_endport] = ACTIONS(49),
    [anon_sym_infiniband_pkey] = ACTIONS(49),
    [anon_sym_io_uring] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_lockdown] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(51),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_connector_socket] = ACTIONS(49),
    [anon_sym_netlink_crypto_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_generic_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_rdma_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(51),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_perf_event] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(51),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_proxy] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_sctp_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_user_namespace] = ACTIONS(49),
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
    [sym_class] = STATE(96),
    [sym_classes] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_anon_inode] = ACTIONS(49),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_binder] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(51),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_language] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_schema] = ACTIONS(49),
    [anon_sym_db_sequence] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_db_view] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(51),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_icmp_socket] = ACTIONS(49),
    [anon_sym_infiniband_endport] = ACTIONS(49),
    [anon_sym_infiniband_pkey] = ACTIONS(49),
    [anon_sym_io_uring] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_lockdown] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(51),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_connector_socket] = ACTIONS(49),
    [anon_sym_netlink_crypto_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_generic_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_rdma_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(51),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_perf_event] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(51),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_proxy] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_sctp_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_user_namespace] = ACTIONS(49),
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
  [7] = {
    [sym_class] = STATE(36),
    [sym_classes] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_anon_inode] = ACTIONS(49),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_binder] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(51),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_language] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_schema] = ACTIONS(49),
    [anon_sym_db_sequence] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_db_view] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(51),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_icmp_socket] = ACTIONS(49),
    [anon_sym_infiniband_endport] = ACTIONS(49),
    [anon_sym_infiniband_pkey] = ACTIONS(49),
    [anon_sym_io_uring] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_lockdown] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(51),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_connector_socket] = ACTIONS(49),
    [anon_sym_netlink_crypto_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_generic_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_rdma_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(51),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_perf_event] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(51),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_proxy] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_sctp_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_user_namespace] = ACTIONS(49),
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
  [8] = {
    [sym_classes] = STATE(10),
    [aux_sym_class_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_anon_inode] = ACTIONS(49),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_binder] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(51),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_language] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_schema] = ACTIONS(49),
    [anon_sym_db_sequence] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_db_view] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(51),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_icmp_socket] = ACTIONS(49),
    [anon_sym_infiniband_endport] = ACTIONS(49),
    [anon_sym_infiniband_pkey] = ACTIONS(49),
    [anon_sym_io_uring] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_lockdown] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(51),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_connector_socket] = ACTIONS(49),
    [anon_sym_netlink_crypto_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_generic_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_rdma_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(51),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_perf_event] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(51),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_proxy] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_sctp_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_user_namespace] = ACTIONS(49),
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
  [9] = {
    [sym_classes] = STATE(10),
    [aux_sym_class_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_anon_inode] = ACTIONS(49),
    [anon_sym_appletalk_socket] = ACTIONS(49),
    [anon_sym_association] = ACTIONS(49),
    [anon_sym_binder] = ACTIONS(49),
    [anon_sym_blk_file] = ACTIONS(49),
    [anon_sym_bpf] = ACTIONS(49),
    [anon_sym_cap2_userns] = ACTIONS(49),
    [anon_sym_cap_userns] = ACTIONS(49),
    [anon_sym_capability] = ACTIONS(51),
    [anon_sym_capability2] = ACTIONS(49),
    [anon_sym_chr_file] = ACTIONS(49),
    [anon_sym_context] = ACTIONS(49),
    [anon_sym_db_blob] = ACTIONS(49),
    [anon_sym_db_column] = ACTIONS(49),
    [anon_sym_db_database] = ACTIONS(49),
    [anon_sym_db_language] = ACTIONS(49),
    [anon_sym_db_procedure] = ACTIONS(49),
    [anon_sym_db_schema] = ACTIONS(49),
    [anon_sym_db_sequence] = ACTIONS(49),
    [anon_sym_db_table] = ACTIONS(49),
    [anon_sym_db_tuple] = ACTIONS(49),
    [anon_sym_db_view] = ACTIONS(49),
    [anon_sym_dbus] = ACTIONS(49),
    [anon_sym_dccp_socket] = ACTIONS(49),
    [anon_sym_dir] = ACTIONS(49),
    [anon_sym_fd] = ACTIONS(49),
    [anon_sym_fifo_file] = ACTIONS(49),
    [anon_sym_file] = ACTIONS(51),
    [anon_sym_filesystem] = ACTIONS(49),
    [anon_sym_icmp_socket] = ACTIONS(49),
    [anon_sym_infiniband_endport] = ACTIONS(49),
    [anon_sym_infiniband_pkey] = ACTIONS(49),
    [anon_sym_io_uring] = ACTIONS(49),
    [anon_sym_ipc] = ACTIONS(49),
    [anon_sym_kernel_service] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_key_socket] = ACTIONS(49),
    [anon_sym_lnk_file] = ACTIONS(49),
    [anon_sym_lockdown] = ACTIONS(49),
    [anon_sym_memprotect] = ACTIONS(49),
    [anon_sym_msg] = ACTIONS(51),
    [anon_sym_msgq] = ACTIONS(49),
    [anon_sym_netif] = ACTIONS(49),
    [anon_sym_netlink_audit_socket] = ACTIONS(49),
    [anon_sym_netlink_connector_socket] = ACTIONS(49),
    [anon_sym_netlink_crypto_socket] = ACTIONS(49),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(49),
    [anon_sym_netlink_fib_lookup_socket] = ACTIONS(49),
    [anon_sym_netlink_firewall_socket] = ACTIONS(49),
    [anon_sym_netlink_generic_socket] = ACTIONS(49),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(49),
    [anon_sym_netlink_iscsi_socket] = ACTIONS(49),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(49),
    [anon_sym_netlink_netfilter_socket] = ACTIONS(49),
    [anon_sym_netlink_nflog_socket] = ACTIONS(49),
    [anon_sym_netlink_rdma_socket] = ACTIONS(49),
    [anon_sym_netlink_route_socket] = ACTIONS(49),
    [anon_sym_netlink_scsitransport_socket] = ACTIONS(49),
    [anon_sym_netlink_selinux_socket] = ACTIONS(49),
    [anon_sym_netlink_socket] = ACTIONS(49),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(49),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(49),
    [anon_sym_node] = ACTIONS(49),
    [anon_sym_nscd] = ACTIONS(49),
    [anon_sym_packet] = ACTIONS(51),
    [anon_sym_packet_socket] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(49),
    [anon_sym_peer] = ACTIONS(49),
    [anon_sym_perf_event] = ACTIONS(49),
    [anon_sym_process] = ACTIONS(51),
    [anon_sym_process2] = ACTIONS(49),
    [anon_sym_proxy] = ACTIONS(49),
    [anon_sym_rawip_socket] = ACTIONS(49),
    [anon_sym_sctp_socket] = ACTIONS(49),
    [anon_sym_security] = ACTIONS(49),
    [anon_sym_sem] = ACTIONS(49),
    [anon_sym_service] = ACTIONS(49),
    [anon_sym_shm] = ACTIONS(49),
    [anon_sym_sock_file] = ACTIONS(49),
    [anon_sym_socket] = ACTIONS(49),
    [anon_sym_system] = ACTIONS(49),
    [anon_sym_tcp_socket] = ACTIONS(49),
    [anon_sym_tun_socket] = ACTIONS(49),
    [anon_sym_udp_socket] = ACTIONS(49),
    [anon_sym_unix_dgram_socket] = ACTIONS(49),
    [anon_sym_unix_stream_socket] = ACTIONS(49),
    [anon_sym_user_namespace] = ACTIONS(49),
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
  [10] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_anon_inode] = ACTIONS(55),
    [anon_sym_appletalk_socket] = ACTIONS(55),
    [anon_sym_association] = ACTIONS(55),
    [anon_sym_binder] = ACTIONS(55),
    [anon_sym_blk_file] = ACTIONS(55),
    [anon_sym_bpf] = ACTIONS(55),
    [anon_sym_cap2_userns] = ACTIONS(55),
    [anon_sym_cap_userns] = ACTIONS(55),
    [anon_sym_capability] = ACTIONS(57),
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
    [anon_sym_file] = ACTIONS(57),
    [anon_sym_filesystem] = ACTIONS(55),
    [anon_sym_icmp_socket] = ACTIONS(55),
    [anon_sym_infiniband_endport] = ACTIONS(55),
    [anon_sym_infiniband_pkey] = ACTIONS(55),
    [anon_sym_io_uring] = ACTIONS(55),
    [anon_sym_ipc] = ACTIONS(55),
    [anon_sym_kernel_service] = ACTIONS(55),
    [anon_sym_key] = ACTIONS(57),
    [anon_sym_key_socket] = ACTIONS(55),
    [anon_sym_lnk_file] = ACTIONS(55),
    [anon_sym_lockdown] = ACTIONS(55),
    [anon_sym_memprotect] = ACTIONS(55),
    [anon_sym_msg] = ACTIONS(57),
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
    [anon_sym_packet] = ACTIONS(57),
    [anon_sym_packet_socket] = ACTIONS(55),
    [anon_sym_passwd] = ACTIONS(55),
    [anon_sym_peer] = ACTIONS(55),
    [anon_sym_perf_event] = ACTIONS(55),
    [anon_sym_process] = ACTIONS(57),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_rule_name,
    ACTIONS(33), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(12), 16,
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
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_word,
    ACTIONS(66), 1,
      anon_sym_type,
    ACTIONS(69), 1,
      anon_sym_attribute,
    ACTIONS(72), 1,
      anon_sym_expandattribute,
    ACTIONS(75), 1,
      anon_sym_typeattribute,
    ACTIONS(78), 1,
      anon_sym_typealias,
    ACTIONS(81), 1,
      anon_sym_permissive,
    ACTIONS(84), 1,
      anon_sym_type_transition,
    ACTIONS(87), 1,
      anon_sym_type_change,
    ACTIONS(90), 1,
      anon_sym_type_member,
    ACTIONS(93), 1,
      anon_sym_role,
    ACTIONS(96), 1,
      anon_sym_bool,
    ACTIONS(99), 1,
      anon_sym_interface,
    STATE(46), 1,
      sym_rule_name,
    ACTIONS(102), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(12), 16,
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
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
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
  [389] = 3,
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
  [415] = 3,
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
  [441] = 3,
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
  [467] = 3,
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
  [493] = 3,
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
  [519] = 3,
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
  [545] = 3,
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
  [571] = 3,
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
  [597] = 3,
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
  [623] = 3,
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
  [649] = 3,
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
  [675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_alias,
      anon_sym_types,
      anon_sym_true,
      anon_sym_false,
      sym_word,
    ACTIONS(187), 10,
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
  [698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      anon_sym_alias,
      anon_sym_types,
      anon_sym_true,
      anon_sym_false,
      sym_word,
    ACTIONS(191), 10,
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
  [721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_typeattribute,
    STATE(46), 1,
      sym_rule_name,
    ACTIONS(33), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(150), 4,
      sym_type_declaration,
      sym_typeattribute_declaration,
      sym_rule_declaration,
      sym_macro_usage,
  [749] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_complement,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_expansion,
    STATE(79), 1,
      sym_identifier,
    STATE(136), 1,
      sym_permission,
    STATE(137), 1,
      sym_permissions,
  [780] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(38), 1,
      aux_sym_permission_repeat1,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym_permissions,
  [808] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_word,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_expansion,
    STATE(38), 1,
      aux_sym_permission_repeat1,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym_permissions,
  [836] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(38), 1,
      aux_sym_permission_repeat1,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym_permissions,
  [864] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expansion,
    STATE(107), 1,
      sym_argument,
    STATE(125), 1,
      sym_identifier,
    STATE(157), 1,
      sym_arguments,
  [892] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(75), 1,
      sym_identifier,
    STATE(156), 1,
      sym_type,
  [917] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(79), 1,
      sym_identifier,
    STATE(147), 1,
      sym_permissions,
  [942] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_expansion,
    STATE(39), 1,
      aux_sym_permission_repeat1,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym_permissions,
  [967] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(50), 1,
      sym_type,
    STATE(75), 1,
      sym_identifier,
  [992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(53), 1,
      sym_type,
    STATE(75), 1,
      sym_identifier,
  [1017] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(41), 1,
      sym_type,
    STATE(75), 1,
      sym_identifier,
  [1042] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(54), 1,
      sym_type,
    STATE(75), 1,
      sym_identifier,
  [1067] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_word,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      sym_negative,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(48), 1,
      aux_sym_type_repeat1,
    STATE(89), 1,
      sym_identifier,
  [1092] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym_negative,
    STATE(34), 1,
      sym_expansion,
    STATE(48), 1,
      aux_sym_type_repeat1,
    STATE(89), 1,
      sym_identifier,
  [1117] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(75), 1,
      sym_identifier,
    STATE(151), 1,
      sym_type,
  [1142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_expansion,
    STATE(37), 1,
      aux_sym_permission_repeat1,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym_permissions,
  [1167] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      sym_negative,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(48), 1,
      aux_sym_type_repeat1,
    STATE(89), 1,
      sym_identifier,
  [1192] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(75), 1,
      sym_identifier,
    STATE(133), 1,
      sym_type,
  [1217] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      sym_complement,
    STATE(34), 1,
      sym_expansion,
    STATE(75), 1,
      sym_identifier,
    STATE(146), 1,
      sym_type,
  [1242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      sym_negative,
    STATE(34), 1,
      sym_expansion,
    STATE(56), 1,
      aux_sym_argument_repeat1,
    STATE(85), 1,
      sym_identifier,
  [1267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_word,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      sym_negative,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(56), 1,
      aux_sym_argument_repeat1,
    STATE(85), 1,
      sym_identifier,
  [1292] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_word,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(57), 1,
      aux_sym_alias_repeat1,
    STATE(110), 1,
      sym_identifier,
  [1314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_word,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
    STATE(105), 1,
      sym_identifier,
  [1336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(116), 1,
      sym_attribute,
    STATE(124), 1,
      sym_identifier,
  [1358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_expansion,
    STATE(51), 1,
      sym_permissions,
    STATE(79), 1,
      sym_identifier,
  [1380] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_expansion,
    STATE(43), 1,
      sym_permissions,
    STATE(79), 1,
      sym_identifier,
  [1402] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      sym_negative,
    STATE(34), 1,
      sym_expansion,
    STATE(52), 1,
      aux_sym_type_repeat1,
    STATE(89), 1,
      sym_identifier,
  [1424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      sym_negative,
    STATE(34), 1,
      sym_expansion,
    STATE(55), 1,
      aux_sym_argument_repeat1,
    STATE(85), 1,
      sym_identifier,
  [1446] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(120), 1,
      sym_argument,
    STATE(125), 1,
      sym_identifier,
  [1468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(117), 1,
      sym_alias,
    STATE(123), 1,
      sym_identifier,
  [1490] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(58), 1,
      aux_sym_attribute_repeat1,
    STATE(105), 1,
      sym_identifier,
  [1512] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(57), 1,
      aux_sym_alias_repeat1,
    STATE(110), 1,
      sym_identifier,
  [1534] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      sym_negative,
    STATE(34), 1,
      sym_expansion,
    STATE(49), 1,
      aux_sym_type_repeat1,
    STATE(89), 1,
      sym_identifier,
  [1556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(123), 1,
      sym_identifier,
    STATE(153), 1,
      sym_alias,
  [1578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(66), 1,
      aux_sym_attribute_repeat1,
    STATE(105), 1,
      sym_identifier,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_expansion,
    STATE(74), 1,
      sym_identifier,
  [1682] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_expansion,
    STATE(141), 1,
      sym_identifier,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(67), 1,
      aux_sym_alias_repeat1,
    STATE(110), 1,
      sym_identifier,
  [1731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(131), 1,
      sym_identifier,
  [1747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
      anon_sym_STAR,
  [1757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(112), 1,
      sym_identifier,
  [1773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(62), 1,
      sym_identifier,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [1799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(100), 1,
      sym_identifier,
  [1815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(68), 1,
      sym_identifier,
  [1831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(102), 1,
      sym_identifier,
  [1847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [1857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(95), 1,
      sym_identifier,
  [1873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(126), 1,
      sym_identifier,
  [1889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(130), 1,
      sym_identifier,
  [1905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(138), 1,
      sym_identifier,
  [1921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_LBRACE,
      sym_complement,
      sym_word,
      anon_sym_DOLLAR,
  [1931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_alias,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_type_declaration_repeat1,
  [1947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(128), 1,
      sym_identifier,
  [1963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(127), 1,
      sym_identifier,
  [1979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(83), 1,
      sym_identifier,
  [1995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(78), 1,
      sym_identifier,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [2021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(122), 1,
      sym_identifier,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_RBRACE,
      sym_negative,
      sym_word,
      anon_sym_DOLLAR,
  [2047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(63), 1,
      sym_identifier,
  [2063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      sym_expansion,
    STATE(134), 1,
      sym_identifier,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
  [2088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(132), 1,
      sym_boolean,
    ACTIONS(322), 2,
      anon_sym_true,
      anon_sym_false,
  [2099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_arguments_repeat1,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_type_declaration_repeat1,
  [2125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_type_declaration_repeat1,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_RBRACE,
      sym_word,
      anon_sym_DOLLAR,
  [2147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_arguments_repeat1,
  [2160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym_type_declaration_repeat1,
  [2173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_type_declaration_repeat1,
  [2186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_type_declaration_repeat1,
  [2199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_arguments_repeat1,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(152), 1,
      sym_boolean,
    ACTIONS(322), 2,
      anon_sym_true,
      anon_sym_false,
  [2223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      aux_sym_type_declaration_repeat1,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_true,
      anon_sym_false,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_true,
      anon_sym_false,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [2307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [2314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [2321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_BQUOTE,
  [2328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_alias,
  [2335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
  [2342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [2349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COLON,
  [2356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [2377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SEMI,
  [2384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_types,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_BQUOTE,
  [2398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_expansion_token1,
  [2405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SEMI,
  [2412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [2419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SQUOTE,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [2433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
  [2440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [2447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [2454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_word,
  [2461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [2468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_SQUOTE,
  [2475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_COLON,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [2489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SEMI,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [2503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [2510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [2517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_word,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(22)] = 389,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 441,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 493,
  [SMALL_STATE(27)] = 519,
  [SMALL_STATE(28)] = 545,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 597,
  [SMALL_STATE(31)] = 623,
  [SMALL_STATE(32)] = 649,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 698,
  [SMALL_STATE(35)] = 721,
  [SMALL_STATE(36)] = 749,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 808,
  [SMALL_STATE(39)] = 836,
  [SMALL_STATE(40)] = 864,
  [SMALL_STATE(41)] = 892,
  [SMALL_STATE(42)] = 917,
  [SMALL_STATE(43)] = 942,
  [SMALL_STATE(44)] = 967,
  [SMALL_STATE(45)] = 992,
  [SMALL_STATE(46)] = 1017,
  [SMALL_STATE(47)] = 1042,
  [SMALL_STATE(48)] = 1067,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1117,
  [SMALL_STATE(51)] = 1142,
  [SMALL_STATE(52)] = 1167,
  [SMALL_STATE(53)] = 1192,
  [SMALL_STATE(54)] = 1217,
  [SMALL_STATE(55)] = 1242,
  [SMALL_STATE(56)] = 1267,
  [SMALL_STATE(57)] = 1292,
  [SMALL_STATE(58)] = 1314,
  [SMALL_STATE(59)] = 1336,
  [SMALL_STATE(60)] = 1358,
  [SMALL_STATE(61)] = 1380,
  [SMALL_STATE(62)] = 1402,
  [SMALL_STATE(63)] = 1424,
  [SMALL_STATE(64)] = 1446,
  [SMALL_STATE(65)] = 1468,
  [SMALL_STATE(66)] = 1490,
  [SMALL_STATE(67)] = 1512,
  [SMALL_STATE(68)] = 1534,
  [SMALL_STATE(69)] = 1556,
  [SMALL_STATE(70)] = 1578,
  [SMALL_STATE(71)] = 1597,
  [SMALL_STATE(72)] = 1608,
  [SMALL_STATE(73)] = 1619,
  [SMALL_STATE(74)] = 1630,
  [SMALL_STATE(75)] = 1641,
  [SMALL_STATE(76)] = 1652,
  [SMALL_STATE(77)] = 1663,
  [SMALL_STATE(78)] = 1682,
  [SMALL_STATE(79)] = 1701,
  [SMALL_STATE(80)] = 1712,
  [SMALL_STATE(81)] = 1731,
  [SMALL_STATE(82)] = 1747,
  [SMALL_STATE(83)] = 1757,
  [SMALL_STATE(84)] = 1773,
  [SMALL_STATE(85)] = 1789,
  [SMALL_STATE(86)] = 1799,
  [SMALL_STATE(87)] = 1815,
  [SMALL_STATE(88)] = 1831,
  [SMALL_STATE(89)] = 1847,
  [SMALL_STATE(90)] = 1857,
  [SMALL_STATE(91)] = 1873,
  [SMALL_STATE(92)] = 1889,
  [SMALL_STATE(93)] = 1905,
  [SMALL_STATE(94)] = 1921,
  [SMALL_STATE(95)] = 1931,
  [SMALL_STATE(96)] = 1947,
  [SMALL_STATE(97)] = 1963,
  [SMALL_STATE(98)] = 1979,
  [SMALL_STATE(99)] = 1995,
  [SMALL_STATE(100)] = 2011,
  [SMALL_STATE(101)] = 2021,
  [SMALL_STATE(102)] = 2037,
  [SMALL_STATE(103)] = 2047,
  [SMALL_STATE(104)] = 2063,
  [SMALL_STATE(105)] = 2079,
  [SMALL_STATE(106)] = 2088,
  [SMALL_STATE(107)] = 2099,
  [SMALL_STATE(108)] = 2112,
  [SMALL_STATE(109)] = 2125,
  [SMALL_STATE(110)] = 2138,
  [SMALL_STATE(111)] = 2147,
  [SMALL_STATE(112)] = 2160,
  [SMALL_STATE(113)] = 2173,
  [SMALL_STATE(114)] = 2186,
  [SMALL_STATE(115)] = 2199,
  [SMALL_STATE(116)] = 2212,
  [SMALL_STATE(117)] = 2223,
  [SMALL_STATE(118)] = 2236,
  [SMALL_STATE(119)] = 2244,
  [SMALL_STATE(120)] = 2252,
  [SMALL_STATE(121)] = 2260,
  [SMALL_STATE(122)] = 2268,
  [SMALL_STATE(123)] = 2276,
  [SMALL_STATE(124)] = 2284,
  [SMALL_STATE(125)] = 2292,
  [SMALL_STATE(126)] = 2300,
  [SMALL_STATE(127)] = 2307,
  [SMALL_STATE(128)] = 2314,
  [SMALL_STATE(129)] = 2321,
  [SMALL_STATE(130)] = 2328,
  [SMALL_STATE(131)] = 2335,
  [SMALL_STATE(132)] = 2342,
  [SMALL_STATE(133)] = 2349,
  [SMALL_STATE(134)] = 2356,
  [SMALL_STATE(135)] = 2363,
  [SMALL_STATE(136)] = 2370,
  [SMALL_STATE(137)] = 2377,
  [SMALL_STATE(138)] = 2384,
  [SMALL_STATE(139)] = 2391,
  [SMALL_STATE(140)] = 2398,
  [SMALL_STATE(141)] = 2405,
  [SMALL_STATE(142)] = 2412,
  [SMALL_STATE(143)] = 2419,
  [SMALL_STATE(144)] = 2426,
  [SMALL_STATE(145)] = 2433,
  [SMALL_STATE(146)] = 2440,
  [SMALL_STATE(147)] = 2447,
  [SMALL_STATE(148)] = 2454,
  [SMALL_STATE(149)] = 2461,
  [SMALL_STATE(150)] = 2468,
  [SMALL_STATE(151)] = 2475,
  [SMALL_STATE(152)] = 2482,
  [SMALL_STATE(153)] = 2489,
  [SMALL_STATE(154)] = 2496,
  [SMALL_STATE(155)] = 2503,
  [SMALL_STATE(156)] = 2510,
  [SMALL_STATE(157)] = 2517,
  [SMALL_STATE(158)] = 2524,
  [SMALL_STATE(159)] = 2531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 36),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 36), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 36), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 23),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 19),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 19),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeattribute_declaration, 5, .production_id = 20),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeattribute_declaration, 5, .production_id = 20),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeattribute_declaration, 4, .production_id = 15),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typeattribute_declaration, 4, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 7, .production_id = 41),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_declaration, 7, .production_id = 41),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 3, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 3, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 3, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 4, .production_id = 18),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 4, .production_id = 18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 4, .production_id = 10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_change_declaration, 7, .production_id = 38),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_change_declaration, 7, .production_id = 38),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expandattribute_declaration, 4, .production_id = 14),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expandattribute_declaration, 4, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_declaration, 5, .production_id = 24),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_declaration, 5, .production_id = 24),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_declaration, 10, .production_id = 45),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_declaration, 10, .production_id = 45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissive_declaration, 3, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permissive_declaration, 3, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_transition_declaration, 7, .production_id = 37),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_transition_declaration, 7, .production_id = 37),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_transition_declaration, 8, .production_id = 42),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_transition_declaration, 8, .production_id = 42),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_declaration, 4, .production_id = 16),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_declaration, 4, .production_id = 16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_declaration, 3, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 3, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typealias_declaration, 5, .production_id = 19),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typealias_declaration, 5, .production_id = 19),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_declaration, 7, .production_id = 39),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_member_declaration, 7, .production_id = 39),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 44), SHIFT_REPEAT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 44),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 44), SHIFT_REPEAT(140),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 44), SHIFT_REPEAT(79),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 22), SHIFT_REPEAT(34),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 22),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 22), SHIFT_REPEAT(88),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 22), SHIFT_REPEAT(140),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 33), SHIFT_REPEAT(34),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 33),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 33), SHIFT_REPEAT(86),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 33), SHIFT_REPEAT(140),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2, .production_id = 28), SHIFT_REPEAT(34),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2, .production_id = 28),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 2, .production_id = 28), SHIFT_REPEAT(140),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 13), SHIFT_REPEAT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 13),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 13), SHIFT_REPEAT(140),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 30),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 35),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 21),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 23),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 1, .production_id = 34),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1, .production_id = 8),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 31),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 1, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_repeat1, 1, .production_id = 9),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 17),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2, .production_id = 11), SHIFT_REPEAT(101),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2, .production_id = 11),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 26), SHIFT_REPEAT(64),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 26),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 32),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 12),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 25),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 3, .production_id = 27),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2, .production_id = 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, .production_id = 9),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 1, .production_id = 34),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [400] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 2, .production_id = 40),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 43),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 46),
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
