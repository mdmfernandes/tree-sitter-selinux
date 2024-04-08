#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 331
#define ALIAS_COUNT 0
#define TOKEN_COUNT 310
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_type = 2,
  anon_sym_SEMI = 3,
  anon_sym_role = 4,
  anon_sym_types = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_TILDE = 8,
  anon_sym_DASH = 9,
  anon_sym_COLON = 10,
  anon_sym_bool = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_COMMA = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_identifier = 17,
  anon_sym_allow = 18,
  anon_sym_auditallow = 19,
  anon_sym_dontaudit = 20,
  anon_sym_neverallow = 21,
  anon_sym_appletalk_socket = 22,
  anon_sym_association = 23,
  anon_sym_blk_file = 24,
  anon_sym_capability = 25,
  anon_sym_capability2 = 26,
  anon_sym_chr_file = 27,
  anon_sym_dccp_socket = 28,
  anon_sym_dir = 29,
  anon_sym_fd = 30,
  anon_sym_fifo_file = 31,
  anon_sym_file = 32,
  anon_sym_filesystem = 33,
  anon_sym_ipc = 34,
  anon_sym_kernel_service = 35,
  anon_sym_key = 36,
  anon_sym_key_socket = 37,
  anon_sym_lnk_file = 38,
  anon_sym_memprotect = 39,
  anon_sym_msg = 40,
  anon_sym_msgq = 41,
  anon_sym_netif = 42,
  anon_sym_netlink_socket = 43,
  anon_sym_netlink_audit_socket = 44,
  anon_sym_netlink_dnrt_socket = 45,
  anon_sym_netlink_firewall_socket = 46,
  anon_sym_netlink_ip6fw_socket = 47,
  anon_sym_netlink_kobject_uevent_socket = 48,
  anon_sym_netlink_nflog_socket = 49,
  anon_sym_netlink_route_socket = 50,
  anon_sym_netlink_selinux_socket = 51,
  anon_sym_netlink_tcpdiag_socket = 52,
  anon_sym_netlink_xfrm_socket = 53,
  anon_sym_node = 54,
  anon_sym_packet = 55,
  anon_sym_packet_socket = 56,
  anon_sym_peer = 57,
  anon_sym_process = 58,
  anon_sym_rawip_socket = 59,
  anon_sym_security = 60,
  anon_sym_sem = 61,
  anon_sym_shm = 62,
  anon_sym_sock_file = 63,
  anon_sym_socket = 64,
  anon_sym_system = 65,
  anon_sym_tcp_socket = 66,
  anon_sym_tun_socket = 67,
  anon_sym_udp_socket = 68,
  anon_sym_unix_dgram_socket = 69,
  anon_sym_unix_stream_socket = 70,
  anon_sym_db_blob = 71,
  anon_sym_db_column = 72,
  anon_sym_db_database = 73,
  anon_sym_db_procedure = 74,
  anon_sym_db_table = 75,
  anon_sym_db_tuple = 76,
  anon_sym_dbus = 77,
  anon_sym_context = 78,
  anon_sym_nscd = 79,
  anon_sym_passwd = 80,
  anon_sym_x_application_data = 81,
  anon_sym_x_client = 82,
  anon_sym_x_colormap = 83,
  anon_sym_x_cursor = 84,
  anon_sym_x_device = 85,
  anon_sym_x_drawable = 86,
  anon_sym_x_event = 87,
  anon_sym_x_extension = 88,
  anon_sym_x_font = 89,
  anon_sym_x_gc = 90,
  anon_sym_x_keyboard = 91,
  anon_sym_x_pointer = 92,
  anon_sym_x_property = 93,
  anon_sym_x_resource = 94,
  anon_sym_x_screen = 95,
  anon_sym_x_selection = 96,
  anon_sym_x_server = 97,
  anon_sym_x_synthetic_event = 98,
  anon_sym_STAR = 99,
  anon_sym_accept = 100,
  anon_sym_acceptfrom = 101,
  anon_sym_acquire_svc = 102,
  anon_sym_activegrab = 103,
  anon_sym_add_name = 104,
  anon_sym_addchild = 105,
  anon_sym_admin = 106,
  anon_sym_append = 107,
  anon_sym_assign = 108,
  anon_sym_associate = 109,
  anon_sym_audit_control = 110,
  anon_sym_audit_write = 111,
  anon_sym_bell = 112,
  anon_sym_bind = 113,
  anon_sym_check_context = 114,
  anon_sym_chfn = 115,
  anon_sym_chown = 116,
  anon_sym_chparent = 117,
  anon_sym_chprop = 118,
  anon_sym_chproplist = 119,
  anon_sym_chselection = 120,
  anon_sym_chsh = 121,
  anon_sym_chstack = 122,
  anon_sym_clientcomevent = 123,
  anon_sym_compute_av = 124,
  anon_sym_compute_create = 125,
  anon_sym_compute_member = 126,
  anon_sym_compute_relabel = 127,
  anon_sym_compute_user = 128,
  anon_sym_connect = 129,
  anon_sym_connectto = 130,
  anon_sym_copy = 131,
  anon_sym_create = 132,
  anon_sym_createglyph = 133,
  anon_sym_crontab = 134,
  anon_sym_ctrllife = 135,
  anon_sym_dac_override = 136,
  anon_sym_dac_read_search = 137,
  anon_sym_destroy = 138,
  anon_sym_draw = 139,
  anon_sym_drawevent = 140,
  anon_sym_dyntransition = 141,
  anon_sym_emutramp = 142,
  anon_sym_enforce_dest = 143,
  anon_sym_enqueue = 144,
  anon_sym_entrypoint = 145,
  anon_sym_enumerate = 146,
  anon_sym_execheap = 147,
  anon_sym_execmem = 148,
  anon_sym_execmod = 149,
  anon_sym_execstack = 150,
  anon_sym_execute = 151,
  anon_sym_execute_no_trans = 152,
  anon_sym_extensionevent = 153,
  anon_sym_fork = 154,
  anon_sym_fowner = 155,
  anon_sym_free = 156,
  anon_sym_fsetid = 157,
  anon_sym_getattr = 158,
  anon_sym_getcap = 159,
  anon_sym_getfontpath = 160,
  anon_sym_getgrp = 161,
  anon_sym_gethost = 162,
  anon_sym_gethostlist = 163,
  anon_sym_getopt = 164,
  anon_sym_getpgid = 165,
  anon_sym_getpwd = 166,
  anon_sym_getsched = 167,
  anon_sym_getsession = 168,
  anon_sym_getstat = 169,
  anon_sym_grab = 170,
  anon_sym_inputevent = 171,
  anon_sym_install = 172,
  anon_sym_ioctl = 173,
  anon_sym_ipc_info = 174,
  anon_sym_ipc_lock = 175,
  anon_sym_ipc_owner = 176,
  anon_sym_kill = 177,
  anon_sym_lease = 178,
  anon_sym_link = 179,
  anon_sym_linux_immutable = 180,
  anon_sym_list = 181,
  anon_sym_listen = 182,
  anon_sym_listprop = 183,
  anon_sym_load = 184,
  anon_sym_load_policy = 185,
  anon_sym_lock = 186,
  anon_sym_lookup = 187,
  anon_sym_map = 188,
  anon_sym_mknod = 189,
  anon_sym_mmap_zero = 190,
  anon_sym_mount = 191,
  anon_sym_mounton = 192,
  anon_sym_mousemotion = 193,
  anon_sym_move = 194,
  anon_sym_mprotect = 195,
  anon_sym_name_bind = 196,
  anon_sym_name_connect = 197,
  anon_sym_net_admin = 198,
  anon_sym_net_bind_service = 199,
  anon_sym_net_broadcast = 200,
  anon_sym_net_raw = 201,
  anon_sym_newconn = 202,
  anon_sym_nlmsg_read = 203,
  anon_sym_nlmsg_readpriv = 204,
  anon_sym_nlmsg_relay = 205,
  anon_sym_nlmsg_write = 206,
  anon_sym_noatsecure = 207,
  anon_sym_node_bind = 208,
  anon_sym_pageexec = 209,
  anon_sym_passivegrab = 210,
  anon_sym_polmatch = 211,
  anon_sym_ptrace = 212,
  anon_sym_query = 213,
  anon_sym_quotaget = 214,
  anon_sym_quotamod = 215,
  anon_sym_quotaon = 216,
  anon_sym_randexec = 217,
  anon_sym_randmmap = 218,
  anon_sym_rawip_recv = 219,
  anon_sym_rawip_send = 220,
  anon_sym_read = 221,
  anon_sym_receive = 222,
  anon_sym_recv = 223,
  anon_sym_recv_msg = 224,
  anon_sym_recvfrom = 225,
  anon_sym_relabelfrom = 226,
  anon_sym_relabelinput = 227,
  anon_sym_relabelto = 228,
  anon_sym_remount = 229,
  anon_sym_remove_name = 230,
  anon_sym_rename = 231,
  anon_sym_reparent = 232,
  anon_sym_rlimitinh = 233,
  anon_sym_rmdir = 234,
  anon_sym_rootok = 235,
  anon_sym_screensaver = 236,
  anon_sym_search = 237,
  anon_sym_segmexec = 238,
  anon_sym_send = 239,
  anon_sym_send_msg = 240,
  anon_sym_sendto = 241,
  anon_sym_serverchangeevent = 242,
  anon_sym_setattr = 243,
  anon_sym_setbool = 244,
  anon_sym_setcap = 245,
  anon_sym_setcheckreqprot = 246,
  anon_sym_setcontext = 247,
  anon_sym_setcurrent = 248,
  anon_sym_setenforce = 249,
  anon_sym_setexec = 250,
  anon_sym_setfocus = 251,
  anon_sym_setfontpath = 252,
  anon_sym_setfscreate = 253,
  anon_sym_setgid = 254,
  anon_sym_sethostlist = 255,
  anon_sym_setkeycreate = 256,
  anon_sym_setopt = 257,
  anon_sym_setpcap = 258,
  anon_sym_setpgid = 259,
  anon_sym_setrlimit = 260,
  anon_sym_setsched = 261,
  anon_sym_setsecparam = 262,
  anon_sym_setuid = 263,
  anon_sym_share = 264,
  anon_sym_shmemgrp = 265,
  anon_sym_shmemhost = 266,
  anon_sym_shmempwd = 267,
  anon_sym_shutdown = 268,
  anon_sym_sigchld = 269,
  anon_sym_siginh = 270,
  anon_sym_sigkill = 271,
  anon_sym_signal = 272,
  anon_sym_signull = 273,
  anon_sym_sigstop = 274,
  anon_sym_store = 275,
  anon_sym_swapon = 276,
  anon_sym_sys_admin = 277,
  anon_sym_sys_boot = 278,
  anon_sym_sys_chroot = 279,
  anon_sym_sys_module = 280,
  anon_sym_sys_nice = 281,
  anon_sym_sys_pacct = 282,
  anon_sym_sys_ptrace = 283,
  anon_sym_sys_rawio = 284,
  anon_sym_sys_resource = 285,
  anon_sym_sys_time = 286,
  anon_sym_sys_tty_config = 287,
  anon_sym_syslog_console = 288,
  anon_sym_syslog_mod = 289,
  anon_sym_syslog_read = 290,
  anon_sym_tcp_recv = 291,
  anon_sym_tcp_send = 292,
  anon_sym_transition = 293,
  anon_sym_transparent = 294,
  anon_sym_udp_recv = 295,
  anon_sym_udp_send = 296,
  anon_sym_ungrab = 297,
  anon_sym_uninstall = 298,
  anon_sym_unix_read = 299,
  anon_sym_unix_write = 300,
  anon_sym_unlink = 301,
  anon_sym_unmap = 302,
  anon_sym_unmount = 303,
  anon_sym_use = 304,
  anon_sym_view = 305,
  anon_sym_warppointer = 306,
  anon_sym_windowchangeevent = 307,
  anon_sym_windowchangerequest = 308,
  anon_sym_write = 309,
  sym_source_file = 310,
  sym__definition = 311,
  sym_type_declaration = 312,
  sym_role_declaration = 313,
  sym_class = 314,
  sym_type = 315,
  sym_permission = 316,
  sym_rule_declaration = 317,
  sym_boolean_declaration = 318,
  sym_argument = 319,
  sym_arguments = 320,
  sym_macro_usage = 321,
  sym_rule_name = 322,
  sym_classes = 323,
  sym_permissions = 324,
  aux_sym_source_file_repeat1 = 325,
  aux_sym_class_repeat1 = 326,
  aux_sym_type_repeat1 = 327,
  aux_sym_permission_repeat1 = 328,
  aux_sym_argument_repeat1 = 329,
  aux_sym_arguments_repeat1 = 330,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_type] = "type",
  [anon_sym_SEMI] = ";",
  [anon_sym_role] = "role",
  [anon_sym_types] = "types",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_bool] = "bool",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_allow] = "allow",
  [anon_sym_auditallow] = "auditallow",
  [anon_sym_dontaudit] = "dontaudit",
  [anon_sym_neverallow] = "neverallow",
  [anon_sym_appletalk_socket] = "appletalk_socket",
  [anon_sym_association] = "association",
  [anon_sym_blk_file] = "blk_file",
  [anon_sym_capability] = "capability",
  [anon_sym_capability2] = "capability2",
  [anon_sym_chr_file] = "chr_file",
  [anon_sym_dccp_socket] = "dccp_socket",
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
  [anon_sym_rawip_socket] = "rawip_socket",
  [anon_sym_security] = "security",
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
  [anon_sym_STAR] = "*",
  [anon_sym_accept] = "accept",
  [anon_sym_acceptfrom] = "acceptfrom",
  [anon_sym_acquire_svc] = "acquire_svc",
  [anon_sym_activegrab] = "activegrab",
  [anon_sym_add_name] = "add_name",
  [anon_sym_addchild] = "addchild",
  [anon_sym_admin] = "admin",
  [anon_sym_append] = "append",
  [anon_sym_assign] = "assign",
  [anon_sym_associate] = "associate",
  [anon_sym_audit_control] = "audit_control",
  [anon_sym_audit_write] = "audit_write",
  [anon_sym_bell] = "bell",
  [anon_sym_bind] = "bind",
  [anon_sym_check_context] = "check_context",
  [anon_sym_chfn] = "chfn",
  [anon_sym_chown] = "chown",
  [anon_sym_chparent] = "chparent",
  [anon_sym_chprop] = "chprop",
  [anon_sym_chproplist] = "chproplist",
  [anon_sym_chselection] = "chselection",
  [anon_sym_chsh] = "chsh",
  [anon_sym_chstack] = "chstack",
  [anon_sym_clientcomevent] = "clientcomevent",
  [anon_sym_compute_av] = "compute_av",
  [anon_sym_compute_create] = "compute_create",
  [anon_sym_compute_member] = "compute_member",
  [anon_sym_compute_relabel] = "compute_relabel",
  [anon_sym_compute_user] = "compute_user",
  [anon_sym_connect] = "connect",
  [anon_sym_connectto] = "connectto",
  [anon_sym_copy] = "copy",
  [anon_sym_create] = "create",
  [anon_sym_createglyph] = "createglyph",
  [anon_sym_crontab] = "crontab",
  [anon_sym_ctrllife] = "ctrllife",
  [anon_sym_dac_override] = "dac_override",
  [anon_sym_dac_read_search] = "dac_read_search",
  [anon_sym_destroy] = "destroy",
  [anon_sym_draw] = "draw",
  [anon_sym_drawevent] = "drawevent",
  [anon_sym_dyntransition] = "dyntransition",
  [anon_sym_emutramp] = "emutramp",
  [anon_sym_enforce_dest] = "enforce_dest",
  [anon_sym_enqueue] = "enqueue",
  [anon_sym_entrypoint] = "entrypoint",
  [anon_sym_enumerate] = "enumerate",
  [anon_sym_execheap] = "execheap",
  [anon_sym_execmem] = "execmem",
  [anon_sym_execmod] = "execmod",
  [anon_sym_execstack] = "execstack",
  [anon_sym_execute] = "execute",
  [anon_sym_execute_no_trans] = "execute_no_trans",
  [anon_sym_extensionevent] = "extensionevent",
  [anon_sym_fork] = "fork",
  [anon_sym_fowner] = "fowner",
  [anon_sym_free] = "free",
  [anon_sym_fsetid] = "fsetid",
  [anon_sym_getattr] = "getattr",
  [anon_sym_getcap] = "getcap",
  [anon_sym_getfontpath] = "getfontpath",
  [anon_sym_getgrp] = "getgrp",
  [anon_sym_gethost] = "gethost",
  [anon_sym_gethostlist] = "gethostlist",
  [anon_sym_getopt] = "getopt",
  [anon_sym_getpgid] = "getpgid",
  [anon_sym_getpwd] = "getpwd",
  [anon_sym_getsched] = "getsched",
  [anon_sym_getsession] = "getsession",
  [anon_sym_getstat] = "getstat",
  [anon_sym_grab] = "grab",
  [anon_sym_inputevent] = "inputevent",
  [anon_sym_install] = "install",
  [anon_sym_ioctl] = "ioctl",
  [anon_sym_ipc_info] = "ipc_info",
  [anon_sym_ipc_lock] = "ipc_lock",
  [anon_sym_ipc_owner] = "ipc_owner",
  [anon_sym_kill] = "kill",
  [anon_sym_lease] = "lease",
  [anon_sym_link] = "link",
  [anon_sym_linux_immutable] = "linux_immutable",
  [anon_sym_list] = "list",
  [anon_sym_listen] = "listen",
  [anon_sym_listprop] = "listprop",
  [anon_sym_load] = "load",
  [anon_sym_load_policy] = "load_policy",
  [anon_sym_lock] = "lock",
  [anon_sym_lookup] = "lookup",
  [anon_sym_map] = "map",
  [anon_sym_mknod] = "mknod",
  [anon_sym_mmap_zero] = "mmap_zero",
  [anon_sym_mount] = "mount",
  [anon_sym_mounton] = "mounton",
  [anon_sym_mousemotion] = "mousemotion",
  [anon_sym_move] = "move",
  [anon_sym_mprotect] = "mprotect",
  [anon_sym_name_bind] = "name_bind",
  [anon_sym_name_connect] = "name_connect",
  [anon_sym_net_admin] = "net_admin",
  [anon_sym_net_bind_service] = "net_bind_service",
  [anon_sym_net_broadcast] = "net_broadcast",
  [anon_sym_net_raw] = "net_raw",
  [anon_sym_newconn] = "newconn",
  [anon_sym_nlmsg_read] = "nlmsg_read",
  [anon_sym_nlmsg_readpriv] = "nlmsg_readpriv",
  [anon_sym_nlmsg_relay] = "nlmsg_relay",
  [anon_sym_nlmsg_write] = "nlmsg_write",
  [anon_sym_noatsecure] = "noatsecure",
  [anon_sym_node_bind] = "node_bind",
  [anon_sym_pageexec] = "pageexec",
  [anon_sym_passivegrab] = "passivegrab",
  [anon_sym_polmatch] = "polmatch",
  [anon_sym_ptrace] = "ptrace",
  [anon_sym_query] = "query",
  [anon_sym_quotaget] = "quotaget",
  [anon_sym_quotamod] = "quotamod",
  [anon_sym_quotaon] = "quotaon",
  [anon_sym_randexec] = "randexec",
  [anon_sym_randmmap] = "randmmap",
  [anon_sym_rawip_recv] = "rawip_recv",
  [anon_sym_rawip_send] = "rawip_send",
  [anon_sym_read] = "read",
  [anon_sym_receive] = "receive",
  [anon_sym_recv] = "recv",
  [anon_sym_recv_msg] = "recv_msg",
  [anon_sym_recvfrom] = "recvfrom",
  [anon_sym_relabelfrom] = "relabelfrom",
  [anon_sym_relabelinput] = "relabelinput",
  [anon_sym_relabelto] = "relabelto",
  [anon_sym_remount] = "remount",
  [anon_sym_remove_name] = "remove_name",
  [anon_sym_rename] = "rename",
  [anon_sym_reparent] = "reparent",
  [anon_sym_rlimitinh] = "rlimitinh",
  [anon_sym_rmdir] = "rmdir",
  [anon_sym_rootok] = "rootok",
  [anon_sym_screensaver] = "screensaver",
  [anon_sym_search] = "search",
  [anon_sym_segmexec] = "segmexec",
  [anon_sym_send] = "send",
  [anon_sym_send_msg] = "send_msg",
  [anon_sym_sendto] = "sendto",
  [anon_sym_serverchangeevent] = "serverchangeevent",
  [anon_sym_setattr] = "setattr",
  [anon_sym_setbool] = "setbool",
  [anon_sym_setcap] = "setcap",
  [anon_sym_setcheckreqprot] = "setcheckreqprot",
  [anon_sym_setcontext] = "setcontext",
  [anon_sym_setcurrent] = "setcurrent",
  [anon_sym_setenforce] = "setenforce",
  [anon_sym_setexec] = "setexec",
  [anon_sym_setfocus] = "setfocus",
  [anon_sym_setfontpath] = "setfontpath",
  [anon_sym_setfscreate] = "setfscreate",
  [anon_sym_setgid] = "setgid",
  [anon_sym_sethostlist] = "sethostlist",
  [anon_sym_setkeycreate] = "setkeycreate",
  [anon_sym_setopt] = "setopt",
  [anon_sym_setpcap] = "setpcap",
  [anon_sym_setpgid] = "setpgid",
  [anon_sym_setrlimit] = "setrlimit",
  [anon_sym_setsched] = "setsched",
  [anon_sym_setsecparam] = "setsecparam",
  [anon_sym_setuid] = "setuid",
  [anon_sym_share] = "share",
  [anon_sym_shmemgrp] = "shmemgrp",
  [anon_sym_shmemhost] = "shmemhost",
  [anon_sym_shmempwd] = "shmempwd",
  [anon_sym_shutdown] = "shutdown",
  [anon_sym_sigchld] = "sigchld",
  [anon_sym_siginh] = "siginh",
  [anon_sym_sigkill] = "sigkill",
  [anon_sym_signal] = "signal",
  [anon_sym_signull] = "signull",
  [anon_sym_sigstop] = "sigstop",
  [anon_sym_store] = "store",
  [anon_sym_swapon] = "swapon",
  [anon_sym_sys_admin] = "sys_admin",
  [anon_sym_sys_boot] = "sys_boot",
  [anon_sym_sys_chroot] = "sys_chroot",
  [anon_sym_sys_module] = "sys_module",
  [anon_sym_sys_nice] = "sys_nice",
  [anon_sym_sys_pacct] = "sys_pacct",
  [anon_sym_sys_ptrace] = "sys_ptrace",
  [anon_sym_sys_rawio] = "sys_rawio",
  [anon_sym_sys_resource] = "sys_resource",
  [anon_sym_sys_time] = "sys_time",
  [anon_sym_sys_tty_config] = "sys_tty_config",
  [anon_sym_syslog_console] = "syslog_console",
  [anon_sym_syslog_mod] = "syslog_mod",
  [anon_sym_syslog_read] = "syslog_read",
  [anon_sym_tcp_recv] = "tcp_recv",
  [anon_sym_tcp_send] = "tcp_send",
  [anon_sym_transition] = "transition",
  [anon_sym_transparent] = "transparent",
  [anon_sym_udp_recv] = "udp_recv",
  [anon_sym_udp_send] = "udp_send",
  [anon_sym_ungrab] = "ungrab",
  [anon_sym_uninstall] = "uninstall",
  [anon_sym_unix_read] = "unix_read",
  [anon_sym_unix_write] = "unix_write",
  [anon_sym_unlink] = "unlink",
  [anon_sym_unmap] = "unmap",
  [anon_sym_unmount] = "unmount",
  [anon_sym_use] = "use",
  [anon_sym_view] = "view",
  [anon_sym_warppointer] = "warppointer",
  [anon_sym_windowchangeevent] = "windowchangeevent",
  [anon_sym_windowchangerequest] = "windowchangerequest",
  [anon_sym_write] = "write",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_type_declaration] = "type_declaration",
  [sym_role_declaration] = "role_declaration",
  [sym_class] = "class",
  [sym_type] = "type",
  [sym_permission] = "permission",
  [sym_rule_declaration] = "rule_declaration",
  [sym_boolean_declaration] = "boolean_declaration",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_macro_usage] = "macro_usage",
  [sym_rule_name] = "rule_name",
  [sym_classes] = "classes",
  [sym_permissions] = "permissions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_permission_repeat1] = "permission_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_role] = anon_sym_role,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_auditallow] = anon_sym_auditallow,
  [anon_sym_dontaudit] = anon_sym_dontaudit,
  [anon_sym_neverallow] = anon_sym_neverallow,
  [anon_sym_appletalk_socket] = anon_sym_appletalk_socket,
  [anon_sym_association] = anon_sym_association,
  [anon_sym_blk_file] = anon_sym_blk_file,
  [anon_sym_capability] = anon_sym_capability,
  [anon_sym_capability2] = anon_sym_capability2,
  [anon_sym_chr_file] = anon_sym_chr_file,
  [anon_sym_dccp_socket] = anon_sym_dccp_socket,
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
  [anon_sym_rawip_socket] = anon_sym_rawip_socket,
  [anon_sym_security] = anon_sym_security,
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_accept] = anon_sym_accept,
  [anon_sym_acceptfrom] = anon_sym_acceptfrom,
  [anon_sym_acquire_svc] = anon_sym_acquire_svc,
  [anon_sym_activegrab] = anon_sym_activegrab,
  [anon_sym_add_name] = anon_sym_add_name,
  [anon_sym_addchild] = anon_sym_addchild,
  [anon_sym_admin] = anon_sym_admin,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_associate] = anon_sym_associate,
  [anon_sym_audit_control] = anon_sym_audit_control,
  [anon_sym_audit_write] = anon_sym_audit_write,
  [anon_sym_bell] = anon_sym_bell,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_check_context] = anon_sym_check_context,
  [anon_sym_chfn] = anon_sym_chfn,
  [anon_sym_chown] = anon_sym_chown,
  [anon_sym_chparent] = anon_sym_chparent,
  [anon_sym_chprop] = anon_sym_chprop,
  [anon_sym_chproplist] = anon_sym_chproplist,
  [anon_sym_chselection] = anon_sym_chselection,
  [anon_sym_chsh] = anon_sym_chsh,
  [anon_sym_chstack] = anon_sym_chstack,
  [anon_sym_clientcomevent] = anon_sym_clientcomevent,
  [anon_sym_compute_av] = anon_sym_compute_av,
  [anon_sym_compute_create] = anon_sym_compute_create,
  [anon_sym_compute_member] = anon_sym_compute_member,
  [anon_sym_compute_relabel] = anon_sym_compute_relabel,
  [anon_sym_compute_user] = anon_sym_compute_user,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_connectto] = anon_sym_connectto,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_createglyph] = anon_sym_createglyph,
  [anon_sym_crontab] = anon_sym_crontab,
  [anon_sym_ctrllife] = anon_sym_ctrllife,
  [anon_sym_dac_override] = anon_sym_dac_override,
  [anon_sym_dac_read_search] = anon_sym_dac_read_search,
  [anon_sym_destroy] = anon_sym_destroy,
  [anon_sym_draw] = anon_sym_draw,
  [anon_sym_drawevent] = anon_sym_drawevent,
  [anon_sym_dyntransition] = anon_sym_dyntransition,
  [anon_sym_emutramp] = anon_sym_emutramp,
  [anon_sym_enforce_dest] = anon_sym_enforce_dest,
  [anon_sym_enqueue] = anon_sym_enqueue,
  [anon_sym_entrypoint] = anon_sym_entrypoint,
  [anon_sym_enumerate] = anon_sym_enumerate,
  [anon_sym_execheap] = anon_sym_execheap,
  [anon_sym_execmem] = anon_sym_execmem,
  [anon_sym_execmod] = anon_sym_execmod,
  [anon_sym_execstack] = anon_sym_execstack,
  [anon_sym_execute] = anon_sym_execute,
  [anon_sym_execute_no_trans] = anon_sym_execute_no_trans,
  [anon_sym_extensionevent] = anon_sym_extensionevent,
  [anon_sym_fork] = anon_sym_fork,
  [anon_sym_fowner] = anon_sym_fowner,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_fsetid] = anon_sym_fsetid,
  [anon_sym_getattr] = anon_sym_getattr,
  [anon_sym_getcap] = anon_sym_getcap,
  [anon_sym_getfontpath] = anon_sym_getfontpath,
  [anon_sym_getgrp] = anon_sym_getgrp,
  [anon_sym_gethost] = anon_sym_gethost,
  [anon_sym_gethostlist] = anon_sym_gethostlist,
  [anon_sym_getopt] = anon_sym_getopt,
  [anon_sym_getpgid] = anon_sym_getpgid,
  [anon_sym_getpwd] = anon_sym_getpwd,
  [anon_sym_getsched] = anon_sym_getsched,
  [anon_sym_getsession] = anon_sym_getsession,
  [anon_sym_getstat] = anon_sym_getstat,
  [anon_sym_grab] = anon_sym_grab,
  [anon_sym_inputevent] = anon_sym_inputevent,
  [anon_sym_install] = anon_sym_install,
  [anon_sym_ioctl] = anon_sym_ioctl,
  [anon_sym_ipc_info] = anon_sym_ipc_info,
  [anon_sym_ipc_lock] = anon_sym_ipc_lock,
  [anon_sym_ipc_owner] = anon_sym_ipc_owner,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_lease] = anon_sym_lease,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_linux_immutable] = anon_sym_linux_immutable,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_listen] = anon_sym_listen,
  [anon_sym_listprop] = anon_sym_listprop,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_load_policy] = anon_sym_load_policy,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_lookup] = anon_sym_lookup,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_mknod] = anon_sym_mknod,
  [anon_sym_mmap_zero] = anon_sym_mmap_zero,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_mounton] = anon_sym_mounton,
  [anon_sym_mousemotion] = anon_sym_mousemotion,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_mprotect] = anon_sym_mprotect,
  [anon_sym_name_bind] = anon_sym_name_bind,
  [anon_sym_name_connect] = anon_sym_name_connect,
  [anon_sym_net_admin] = anon_sym_net_admin,
  [anon_sym_net_bind_service] = anon_sym_net_bind_service,
  [anon_sym_net_broadcast] = anon_sym_net_broadcast,
  [anon_sym_net_raw] = anon_sym_net_raw,
  [anon_sym_newconn] = anon_sym_newconn,
  [anon_sym_nlmsg_read] = anon_sym_nlmsg_read,
  [anon_sym_nlmsg_readpriv] = anon_sym_nlmsg_readpriv,
  [anon_sym_nlmsg_relay] = anon_sym_nlmsg_relay,
  [anon_sym_nlmsg_write] = anon_sym_nlmsg_write,
  [anon_sym_noatsecure] = anon_sym_noatsecure,
  [anon_sym_node_bind] = anon_sym_node_bind,
  [anon_sym_pageexec] = anon_sym_pageexec,
  [anon_sym_passivegrab] = anon_sym_passivegrab,
  [anon_sym_polmatch] = anon_sym_polmatch,
  [anon_sym_ptrace] = anon_sym_ptrace,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_quotaget] = anon_sym_quotaget,
  [anon_sym_quotamod] = anon_sym_quotamod,
  [anon_sym_quotaon] = anon_sym_quotaon,
  [anon_sym_randexec] = anon_sym_randexec,
  [anon_sym_randmmap] = anon_sym_randmmap,
  [anon_sym_rawip_recv] = anon_sym_rawip_recv,
  [anon_sym_rawip_send] = anon_sym_rawip_send,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_receive] = anon_sym_receive,
  [anon_sym_recv] = anon_sym_recv,
  [anon_sym_recv_msg] = anon_sym_recv_msg,
  [anon_sym_recvfrom] = anon_sym_recvfrom,
  [anon_sym_relabelfrom] = anon_sym_relabelfrom,
  [anon_sym_relabelinput] = anon_sym_relabelinput,
  [anon_sym_relabelto] = anon_sym_relabelto,
  [anon_sym_remount] = anon_sym_remount,
  [anon_sym_remove_name] = anon_sym_remove_name,
  [anon_sym_rename] = anon_sym_rename,
  [anon_sym_reparent] = anon_sym_reparent,
  [anon_sym_rlimitinh] = anon_sym_rlimitinh,
  [anon_sym_rmdir] = anon_sym_rmdir,
  [anon_sym_rootok] = anon_sym_rootok,
  [anon_sym_screensaver] = anon_sym_screensaver,
  [anon_sym_search] = anon_sym_search,
  [anon_sym_segmexec] = anon_sym_segmexec,
  [anon_sym_send] = anon_sym_send,
  [anon_sym_send_msg] = anon_sym_send_msg,
  [anon_sym_sendto] = anon_sym_sendto,
  [anon_sym_serverchangeevent] = anon_sym_serverchangeevent,
  [anon_sym_setattr] = anon_sym_setattr,
  [anon_sym_setbool] = anon_sym_setbool,
  [anon_sym_setcap] = anon_sym_setcap,
  [anon_sym_setcheckreqprot] = anon_sym_setcheckreqprot,
  [anon_sym_setcontext] = anon_sym_setcontext,
  [anon_sym_setcurrent] = anon_sym_setcurrent,
  [anon_sym_setenforce] = anon_sym_setenforce,
  [anon_sym_setexec] = anon_sym_setexec,
  [anon_sym_setfocus] = anon_sym_setfocus,
  [anon_sym_setfontpath] = anon_sym_setfontpath,
  [anon_sym_setfscreate] = anon_sym_setfscreate,
  [anon_sym_setgid] = anon_sym_setgid,
  [anon_sym_sethostlist] = anon_sym_sethostlist,
  [anon_sym_setkeycreate] = anon_sym_setkeycreate,
  [anon_sym_setopt] = anon_sym_setopt,
  [anon_sym_setpcap] = anon_sym_setpcap,
  [anon_sym_setpgid] = anon_sym_setpgid,
  [anon_sym_setrlimit] = anon_sym_setrlimit,
  [anon_sym_setsched] = anon_sym_setsched,
  [anon_sym_setsecparam] = anon_sym_setsecparam,
  [anon_sym_setuid] = anon_sym_setuid,
  [anon_sym_share] = anon_sym_share,
  [anon_sym_shmemgrp] = anon_sym_shmemgrp,
  [anon_sym_shmemhost] = anon_sym_shmemhost,
  [anon_sym_shmempwd] = anon_sym_shmempwd,
  [anon_sym_shutdown] = anon_sym_shutdown,
  [anon_sym_sigchld] = anon_sym_sigchld,
  [anon_sym_siginh] = anon_sym_siginh,
  [anon_sym_sigkill] = anon_sym_sigkill,
  [anon_sym_signal] = anon_sym_signal,
  [anon_sym_signull] = anon_sym_signull,
  [anon_sym_sigstop] = anon_sym_sigstop,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_swapon] = anon_sym_swapon,
  [anon_sym_sys_admin] = anon_sym_sys_admin,
  [anon_sym_sys_boot] = anon_sym_sys_boot,
  [anon_sym_sys_chroot] = anon_sym_sys_chroot,
  [anon_sym_sys_module] = anon_sym_sys_module,
  [anon_sym_sys_nice] = anon_sym_sys_nice,
  [anon_sym_sys_pacct] = anon_sym_sys_pacct,
  [anon_sym_sys_ptrace] = anon_sym_sys_ptrace,
  [anon_sym_sys_rawio] = anon_sym_sys_rawio,
  [anon_sym_sys_resource] = anon_sym_sys_resource,
  [anon_sym_sys_time] = anon_sym_sys_time,
  [anon_sym_sys_tty_config] = anon_sym_sys_tty_config,
  [anon_sym_syslog_console] = anon_sym_syslog_console,
  [anon_sym_syslog_mod] = anon_sym_syslog_mod,
  [anon_sym_syslog_read] = anon_sym_syslog_read,
  [anon_sym_tcp_recv] = anon_sym_tcp_recv,
  [anon_sym_tcp_send] = anon_sym_tcp_send,
  [anon_sym_transition] = anon_sym_transition,
  [anon_sym_transparent] = anon_sym_transparent,
  [anon_sym_udp_recv] = anon_sym_udp_recv,
  [anon_sym_udp_send] = anon_sym_udp_send,
  [anon_sym_ungrab] = anon_sym_ungrab,
  [anon_sym_uninstall] = anon_sym_uninstall,
  [anon_sym_unix_read] = anon_sym_unix_read,
  [anon_sym_unix_write] = anon_sym_unix_write,
  [anon_sym_unlink] = anon_sym_unlink,
  [anon_sym_unmap] = anon_sym_unmap,
  [anon_sym_unmount] = anon_sym_unmount,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_view] = anon_sym_view,
  [anon_sym_warppointer] = anon_sym_warppointer,
  [anon_sym_windowchangeevent] = anon_sym_windowchangeevent,
  [anon_sym_windowchangerequest] = anon_sym_windowchangerequest,
  [anon_sym_write] = anon_sym_write,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_type_declaration] = sym_type_declaration,
  [sym_role_declaration] = sym_role_declaration,
  [sym_class] = sym_class,
  [sym_type] = sym_type,
  [sym_permission] = sym_permission,
  [sym_rule_declaration] = sym_rule_declaration,
  [sym_boolean_declaration] = sym_boolean_declaration,
  [sym_argument] = sym_argument,
  [sym_arguments] = sym_arguments,
  [sym_macro_usage] = sym_macro_usage,
  [sym_rule_name] = sym_rule_name,
  [sym_classes] = sym_classes,
  [sym_permissions] = sym_permissions,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_rawip_socket] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acceptfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acquire_svc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_activegrab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addchild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_admin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_associate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audit_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audit_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chfn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chparent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chprop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chproplist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chselection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chsh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chstack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clientcomevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute_av] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute_member] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute_relabel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute_user] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connectto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_createglyph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crontab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrllife] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dac_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dac_read_search] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_destroy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_draw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drawevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dyntransition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emutramp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enforce_dest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enqueue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entrypoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enumerate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execheap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execstack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execute_no_trans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensionevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fork] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fowner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fsetid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getattr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getcap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getfontpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getgrp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gethost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gethostlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getopt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getpgid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getpwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getsched] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getsession] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getstat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inputevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_install] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ioctl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipc_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipc_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipc_owner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lease] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linux_immutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listprop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lookup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mknod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mmap_zero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mounton] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mousemotion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mprotect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net_admin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net_bind_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net_broadcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newconn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nlmsg_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nlmsg_readpriv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nlmsg_relay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nlmsg_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noatsecure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pageexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passivegrab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_polmatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quotaget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quotamod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quotaon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_randexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_randmmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawip_recv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rawip_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_receive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recv_msg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recvfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relabelfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relabelinput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relabelto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reparent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rlimitinh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rootok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_screensaver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_search] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_segmexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send_msg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sendto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_serverchangeevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setattr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setbool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setcap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setcheckreqprot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setcurrent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setenforce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setfocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setfontpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setfscreate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setgid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sethostlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setkeycreate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setopt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setpcap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setpgid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setrlimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setsched] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setsecparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_share] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shmemgrp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shmemhost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shmempwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shutdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sigchld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_siginh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sigkill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sigstop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_admin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_boot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_chroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_nice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_pacct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_ptrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_rawio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_tty_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syslog_console] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syslog_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syslog_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_recv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transparent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp_recv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp_send] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ungrab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uninstall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unmount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warppointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windowchangeevent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windowchangerequest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
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
  [sym_macro_usage] = {
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
  [sym_permissions] = {
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
  field_arg = 1,
  field_argument = 2,
  field_arguments = 3,
  field_class = 4,
  field_name = 5,
  field_perm_set = 6,
  field_rule_name = 7,
  field_source_type = 8,
  field_target_type = 9,
  field_type = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_class] = "class",
  [field_name] = "name",
  [field_perm_set] = "perm_set",
  [field_rule_name] = "rule_name",
  [field_source_type] = "source_type",
  [field_target_type] = "target_type",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 1},
  [24] = {.index = 34, .length = 5},
  [25] = {.index = 39, .length = 2},
  [26] = {.index = 41, .length = 2},
  [27] = {.index = 43, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_arg, 0},
  [4] =
    {field_argument, 0},
  [5] =
    {field_type, 1},
  [6] =
    {field_name, 1},
    {field_value, 2},
  [8] =
    {field_argument, 0},
    {field_argument, 1, .inherited = true},
  [10] =
    {field_arguments, 2},
    {field_name, 0},
  [12] =
    {field_name, 1},
    {field_type, 3},
  [14] =
    {field_argument, 1},
  [15] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [17] =
    {field_type, 1},
    {field_type, 2, .inherited = true},
  [19] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [21] =
    {field_class, 0},
  [22] =
    {field_arg, 1},
  [23] =
    {field_arg, 1},
    {field_arg, 2, .inherited = true},
  [25] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [27] =
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [29] =
    {field_perm_set, 0},
  [30] =
    {field_class, 1, .inherited = true},
  [31] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [33] =
    {field_perm_set, 1},
  [34] =
    {field_class, 4},
    {field_perm_set, 5},
    {field_rule_name, 0},
    {field_source_type, 1},
    {field_target_type, 2},
  [39] =
    {field_perm_set, 1},
    {field_perm_set, 2, .inherited = true},
  [41] =
    {field_perm_set, 0, .inherited = true},
    {field_perm_set, 1, .inherited = true},
  [43] =
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
  [20] = 8,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1575);
      if (lookahead == '#') ADVANCE(1576);
      if (lookahead == '(') ADVANCE(1593);
      if (lookahead == ')') ADVANCE(1594);
      if (lookahead == '*') ADVANCE(1721);
      if (lookahead == ',') ADVANCE(1592);
      if (lookahead == '-') ADVANCE(1586);
      if (lookahead == ':') ADVANCE(1587);
      if (lookahead == ';') ADVANCE(1579);
      if (lookahead == '\\') SKIP(1570)
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(885);
      if (lookahead == 'k') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'q') ADVANCE(1475);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead == '{') ADVANCE(1583);
      if (lookahead == '}') ADVANCE(1584);
      if (lookahead == '~') ADVANCE(1585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(1576);
      if (lookahead == ')') ADVANCE(1594);
      if (lookahead == '-') ADVANCE(1586);
      if (lookahead == ':') ADVANCE(1587);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(1583);
      if (lookahead == '}') ADVANCE(1584);
      if (lookahead == '~') ADVANCE(1585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1576);
      if (lookahead == '*') ADVANCE(1721);
      if (lookahead == ';') ADVANCE(1579);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(642);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == 'f') ADVANCE(992);
      if (lookahead == 'g') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead == 'k') ADVANCE(692);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(1475);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(1583);
      if (lookahead == '}') ADVANCE(1584);
      if (lookahead == '~') ADVANCE(1585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1576);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(1132);
      if (lookahead == 'b') ADVANCE(782);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(1133);
      if (lookahead == 'k') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(989);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead == '{') ADVANCE(1583);
      if (lookahead == '}') ADVANCE(1584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '6') ADVANCE(599);
      END_STATE();
    case 5:
      if (lookahead == '\\') SKIP(910)
      END_STATE();
    case 6:
      if (lookahead == '\\') SKIP(910)
      if (lookahead == 'r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\\') SKIP(911)
      END_STATE();
    case 8:
      if (lookahead == '\\') SKIP(911)
      if (lookahead == 'r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\\') SKIP(912)
      END_STATE();
    case 10:
      if (lookahead == '\\') SKIP(912)
      if (lookahead == 'r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(1258);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(600);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(668);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(1049);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(1049);
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(1206);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(1567);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(836);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(258);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(182);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(366);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(1213);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(1073);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(1207);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(983);
      if (lookahead == 'c') ADVANCE(643);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(291);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(1298);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(1268);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(368);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(1208);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(665);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(1222);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(1209);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(1214);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(1215);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(1501);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(1286);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(284);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(608);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(987);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(1462);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(610);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(611);
      if (lookahead == 'e') ADVANCE(1334);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(1304);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(1308);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(1310);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(1311);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(1312);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(1313);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(1314);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(1315);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(1316);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(1317);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(1318);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(1319);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(1320);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(1321);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(1322);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(1305);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(1323);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(1324);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(1307);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'i') ADVANCE(1161);
      if (lookahead == 'o') ADVANCE(914);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(970);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(1266);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(970);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(797);
      if (lookahead == 'r') ADVANCE(1011);
      if (lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(917);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(1703);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(797);
      if (lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(1120);
      if (lookahead == 'h') ADVANCE(452);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(855);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(1224);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(1120);
      if (lookahead == 'h') ADVANCE(1248);
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(859);
      if (lookahead == 'e') ADVANCE(1326);
      if (lookahead == 'l') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(859);
      if (lookahead == 'e') ADVANCE(1419);
      if (lookahead == 'l') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(1527);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'd') ADVANCE(1650);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(1175);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(1103);
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == 'k') ADVANCE(921);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(1476);
      if (lookahead == 'p') ADVANCE(1179);
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(1103);
      if (lookahead == 'k') ADVANCE(921);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(1476);
      if (lookahead == 'p') ADVANCE(1179);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(754);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(1000);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(1181);
      if (lookahead == 'i') ADVANCE(922);
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(1535);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(1504);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(1299);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(1447);
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(1447);
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(1530);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(1495);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(925);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(925);
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(1539);
      if (lookahead == 'e') ADVANCE(1306);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(1121);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(1140);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(1182);
      if (lookahead == 'c') ADVANCE(1478);
      if (lookahead == 'g') ADVANCE(872);
      if (lookahead == 'm') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(1510);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(1182);
      if (lookahead == 'g') ADVANCE(872);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(1510);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(1196);
      if (lookahead == 'm') ADVANCE(1684);
      if (lookahead == 'u') ADVANCE(1403);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(1196);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(1403);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(1123);
      if (lookahead == 'c') ADVANCE(839);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == 'e') ADVANCE(1514);
      if (lookahead == 'f') ADVANCE(1064);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'k') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(1010);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(1243);
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(1445);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(1067);
      if (lookahead == 'g') ADVANCE(1188);
      if (lookahead == 'h') ADVANCE(1059);
      if (lookahead == 'o') ADVANCE(1126);
      if (lookahead == 'p') ADVANCE(627);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(1560);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(1104);
      if (lookahead == 'o') ADVANCE(1492);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'b') ADVANCE(703);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'u') ADVANCE(810);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(882);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(1106);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(1420);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(1109);
      if (lookahead == 'h') ADVANCE(478);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == 'u') ADVANCE(1252);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(832);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(1110);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 't') ADVANCE(1238);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(1113);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(1204);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(1339);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(1115);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(1117);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(924);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(1398);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(926);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(1407);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(1410);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(865);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(1006);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(1277);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(1537);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(1426);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(934);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(1203);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(868);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(1450);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(1287);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(1421);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(942);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(1427);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(1284);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(1436);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(1437);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1438);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(1439);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(1452);
      if (lookahead == 'b') ADVANCE(1057);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(915);
      if (lookahead == 'f') ADVANCE(993);
      if (lookahead == 'g') ADVANCE(669);
      if (lookahead == 'h') ADVANCE(1063);
      if (lookahead == 'k') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(1127);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(842);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'b') ADVANCE(1052);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(1026);
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 't') ADVANCE(711);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(1513);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(1498);
      if (lookahead == 'd') ADVANCE(972);
      if (lookahead == 'f') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == 'k') ADVANCE(1013);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(1077);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'x') ADVANCE(603);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(840);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(1247);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(1470);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(1161);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(1792);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(1919);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(1756);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(1693);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(1725);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(743);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(1832);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(715);
      if (lookahead == 'c') ADVANCE(1028);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(1054);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(472);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(492);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(805);
      if (lookahead == 'c') ADVANCE(1014);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(1235);
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(670);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(815);
      END_STATE();
    case 204:
      if (lookahead == 'b') ADVANCE(821);
      END_STATE();
    case 205:
      if (lookahead == 'b') ADVANCE(823);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(504);
      END_STATE();
    case 207:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 208:
      if (lookahead == 'b') ADVANCE(719);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(796);
      if (lookahead == 'p') ADVANCE(1102);
      if (lookahead == 's') ADVANCE(1256);
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1301);
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(1655);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(1712);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(1872);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(1831);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(1839);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(1860);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(1724);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(1654);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead == 'k') ADVANCE(707);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 's') ADVANCE(1449);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(1502);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(1290);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(1119);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(916);
      if (lookahead == 'y') ADVANCE(1125);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(1503);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(634);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(1478);
      if (lookahead == 'm') ADVANCE(1683);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead == 's') ADVANCE(1291);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 't') ADVANCE(1055);
      if (lookahead == 'w') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(1257);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 't') ADVANCE(1055);
      if (lookahead == 'w') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(1264);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(1402);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(747);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 'q') ADVANCE(1485);
      if (lookahead == 't') ADVANCE(691);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(1155);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(1505);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(1480);
      if (lookahead == 'n') ADVANCE(1461);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(751);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(705);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(1019);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(1559);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(641);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(1336);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(1069);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(1142);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(1135);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(1068);
      if (lookahead == 'm') ADVANCE(1038);
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(1344);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(1352);
      END_STATE();
    case 262:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 263:
      if (lookahead == 'c') ADVANCE(1357);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(495);
      END_STATE();
    case 265:
      if (lookahead == 'c') ADVANCE(1369);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 267:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(1413);
      END_STATE();
    case 269:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 271:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 272:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 275:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 276:
      if (lookahead == 'c') ADVANCE(1130);
      END_STATE();
    case 277:
      if (lookahead == 'c') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(1488);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'g') ADVANCE(674);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(1216);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(1040);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(1226);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == 'y') ADVANCE(941);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(649);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(1075);
      if (lookahead == 'w') ADVANCE(1242);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(1072);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(769);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(775);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(777);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(778);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(779);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(1465);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(1250);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(1468);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(1156);
      if (lookahead == 'u') ADVANCE(916);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(1650);
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(660);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(1735);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(1806);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(1701);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(1843);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(1861);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(1811);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(1729);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(1779);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(1788);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(1702);
      END_STATE();
    case 327:
      if (lookahead == 'd') ADVANCE(1876);
      END_STATE();
    case 328:
      if (lookahead == 'd') ADVANCE(1885);
      END_STATE();
    case 329:
      if (lookahead == 'd') ADVANCE(1771);
      END_STATE();
    case 330:
      if (lookahead == 'd') ADVANCE(1787);
      END_STATE();
    case 331:
      if (lookahead == 'd') ADVANCE(1881);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(1891);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(1727);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(1789);
      END_STATE();
    case 335:
      if (lookahead == 'd') ADVANCE(1837);
      END_STATE();
    case 336:
      if (lookahead == 'd') ADVANCE(1883);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(1914);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(1918);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(1818);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(1830);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(1921);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(1825);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(1842);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(1911);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(1713);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(1912);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(1889);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(875);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(1493);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(1058);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(683);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(563);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(1137);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(1141);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(630);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == 's') ADVANCE(1456);
      if (lookahead == 'w') ADVANCE(1236);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(630);
      if (lookahead == 's') ADVANCE(1456);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(877);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(1491);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1157);
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(1325);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(1178);
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(1926);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(1652);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(1816);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(1580);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(1590);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(1577);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(1591);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(1800);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(1886);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(1897);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(1931);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(1754);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(1834);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1853);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1766);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(1773);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(1726);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(1644);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(1647);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(1757);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(1697);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(1659);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(1903);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(1908);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(1707);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(1731);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(1731);
      if (lookahead == 'i') ADVANCE(1036);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(1768);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(1651);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(1685);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(1829);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(1871);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(1902);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(1905);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(1922);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(1708);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(1716);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(1733);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(1695);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(1875);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(1758);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(1696);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(1878);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(1907);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(1747);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1656);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(1910);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(1802);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(845);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(1300);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(1675);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead == 'i') ADVANCE(913);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead == 'i') ADVANCE(913);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'o') ADVANCE(1003);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(1515);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(887);
      if (lookahead == 'n') ADVANCE(780);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(887);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(1400);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1561);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(976);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(1533);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(888);
      if (lookahead == 'o') ADVANCE(1533);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == 'h') ADVANCE(1743);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead == 'o') ADVANCE(1411);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1274);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1124);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(1271);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(1332);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(1193);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1210);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(1168);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1265);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(1249);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(1172);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1173);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(1174);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1345);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(1384);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(1385);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(1388);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(1389);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(1390);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(1391);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(1392);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(1393);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(1394);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(1395);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(1547);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(1549);
      if (lookahead == 'm') ADVANCE(876);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1482);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(1542);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(1551);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(1418);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(1416);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(986);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 556:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 561:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 562:
      if (lookahead == 'e') ADVANCE(954);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(1283);
      END_STATE();
    case 564:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 565:
      if (lookahead == 'e') ADVANCE(1285);
      END_STATE();
    case 566:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 569:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 571:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 572:
      if (lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 574:
      if (lookahead == 'e') ADVANCE(963);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 576:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 577:
      if (lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 579:
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'v') ADVANCE(1845);
      END_STATE();
    case 580:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 581:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 582:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 583:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 584:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 585:
      if (lookahead == 'e') ADVANCE(1520);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(1521);
      END_STATE();
    case 587:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 588:
      if (lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 589:
      if (lookahead == 'e') ADVANCE(1524);
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 590:
      if (lookahead == 'e') ADVANCE(1525);
      END_STATE();
    case 591:
      if (lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 592:
      if (lookahead == 'e') ADVANCE(1251);
      END_STATE();
    case 593:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 594:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 596:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 597:
      if (lookahead == 'f') ADVANCE(1663);
      END_STATE();
    case 598:
      if (lookahead == 'f') ADVANCE(1084);
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 599:
      if (lookahead == 'f') ADVANCE(1543);
      END_STATE();
    case 600:
      if (lookahead == 'f') ADVANCE(694);
      END_STATE();
    case 601:
      if (lookahead == 'f') ADVANCE(662);
      END_STATE();
    case 602:
      if (lookahead == 'f') ADVANCE(995);
      END_STATE();
    case 603:
      if (lookahead == 'f') ADVANCE(1255);
      END_STATE();
    case 604:
      if (lookahead == 'f') ADVANCE(398);
      END_STATE();
    case 605:
      if (lookahead == 'f') ADVANCE(1053);
      if (lookahead == 'q') ADVANCE(1481);
      if (lookahead == 't') ADVANCE(1176);
      if (lookahead == 'u') ADVANCE(880);
      END_STATE();
    case 606:
      if (lookahead == 'f') ADVANCE(837);
      END_STATE();
    case 607:
      if (lookahead == 'f') ADVANCE(1205);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 't') ADVANCE(998);
      END_STATE();
    case 608:
      if (lookahead == 'f') ADVANCE(700);
      END_STATE();
    case 609:
      if (lookahead == 'f') ADVANCE(712);
      END_STATE();
    case 610:
      if (lookahead == 'f') ADVANCE(717);
      END_STATE();
    case 611:
      if (lookahead == 'f') ADVANCE(721);
      END_STATE();
    case 612:
      if (lookahead == 'f') ADVANCE(1076);
      END_STATE();
    case 613:
      if (lookahead == 'g') ADVANCE(1661);
      END_STATE();
    case 614:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 615:
      if (lookahead == 'g') ADVANCE(1846);
      END_STATE();
    case 616:
      if (lookahead == 'g') ADVANCE(1862);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(1909);
      END_STATE();
    case 618:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 619:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 620:
      if (lookahead == 'g') ADVANCE(891);
      END_STATE();
    case 621:
      if (lookahead == 'g') ADVANCE(440);
      END_STATE();
    case 622:
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 623:
      if (lookahead == 'g') ADVANCE(1184);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 624:
      if (lookahead == 'g') ADVANCE(1184);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 625:
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead == 'h') ADVANCE(1071);
      if (lookahead == 'p') ADVANCE(1538);
      END_STATE();
    case 626:
      if (lookahead == 'g') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(1031);
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 627:
      if (lookahead == 'g') ADVANCE(673);
      if (lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 628:
      if (lookahead == 'g') ADVANCE(594);
      END_STATE();
    case 629:
      if (lookahead == 'g') ADVANCE(1194);
      END_STATE();
    case 630:
      if (lookahead == 'g') ADVANCE(1195);
      END_STATE();
    case 631:
      if (lookahead == 'g') ADVANCE(1199);
      END_STATE();
    case 632:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 633:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 634:
      if (lookahead == 'h') ADVANCE(1859);
      END_STATE();
    case 635:
      if (lookahead == 'h') ADVANCE(1892);
      END_STATE();
    case 636:
      if (lookahead == 'h') ADVANCE(1833);
      END_STATE();
    case 637:
      if (lookahead == 'h') ADVANCE(1855);
      END_STATE();
    case 638:
      if (lookahead == 'h') ADVANCE(1755);
      END_STATE();
    case 639:
      if (lookahead == 'h') ADVANCE(1782);
      END_STATE();
    case 640:
      if (lookahead == 'h') ADVANCE(1874);
      END_STATE();
    case 641:
      if (lookahead == 'h') ADVANCE(1759);
      END_STATE();
    case 642:
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(1224);
      END_STATE();
    case 643:
      if (lookahead == 'h') ADVANCE(695);
      END_STATE();
    case 644:
      if (lookahead == 'h') ADVANCE(809);
      END_STATE();
    case 645:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 646:
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead == 's') ADVANCE(1448);
      if (lookahead == 'u') ADVANCE(1430);
      END_STATE();
    case 647:
      if (lookahead == 'h') ADVANCE(481);
      END_STATE();
    case 648:
      if (lookahead == 'h') ADVANCE(489);
      END_STATE();
    case 649:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 650:
      if (lookahead == 'h') ADVANCE(1241);
      END_STATE();
    case 651:
      if (lookahead == 'h') ADVANCE(546);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(1506);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(1425);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(1328);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(923);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(1163);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(920);
      if (lookahead == 'l') ADVANCE(1020);
      if (lookahead == 'o') ADVANCE(1540);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(973);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(900);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(1051);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(901);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(1401);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(999);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(1048);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(1404);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(930);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(1351);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(1422);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(1507);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(1454);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(1545);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(1143);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(1460);
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(1211);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(1144);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(1509);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(1034);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(808);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(1035);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(1280);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(869);
      if (lookahead == 't') ADVANCE(1563);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 713:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 714:
      if (lookahead == 'i') ADVANCE(1036);
      END_STATE();
    case 715:
      if (lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 716:
      if (lookahead == 'i') ADVANCE(1281);
      END_STATE();
    case 717:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 718:
      if (lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 719:
      if (lookahead == 'i') ADVANCE(951);
      END_STATE();
    case 720:
      if (lookahead == 'i') ADVANCE(1282);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 722:
      if (lookahead == 'i') ADVANCE(1039);
      END_STATE();
    case 723:
      if (lookahead == 'i') ADVANCE(1221);
      END_STATE();
    case 724:
      if (lookahead == 'i') ADVANCE(1433);
      END_STATE();
    case 725:
      if (lookahead == 'i') ADVANCE(1043);
      END_STATE();
    case 726:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 728:
      if (lookahead == 'i') ADVANCE(1434);
      END_STATE();
    case 729:
      if (lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 730:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 731:
      if (lookahead == 'i') ADVANCE(1045);
      END_STATE();
    case 732:
      if (lookahead == 'i') ADVANCE(1435);
      END_STATE();
    case 733:
      if (lookahead == 'i') ADVANCE(958);
      END_STATE();
    case 734:
      if (lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 735:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 736:
      if (lookahead == 'i') ADVANCE(1516);
      if (lookahead == 'w') ADVANCE(326);
      END_STATE();
    case 737:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 738:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 739:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 740:
      if (lookahead == 'i') ADVANCE(1469);
      END_STATE();
    case 741:
      if (lookahead == 'i') ADVANCE(1473);
      END_STATE();
    case 742:
      if (lookahead == 'i') ADVANCE(1158);
      END_STATE();
    case 743:
      if (lookahead == 'j') ADVANCE(560);
      END_STATE();
    case 744:
      if (lookahead == 'k') ADVANCE(1776);
      END_STATE();
    case 745:
      if (lookahead == 'k') ADVANCE(1801);
      if (lookahead == 'u') ADVANCE(1544);
      END_STATE();
    case 746:
      if (lookahead == 'k') ADVANCE(1808);
      END_STATE();
    case 747:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 748:
      if (lookahead == 'k') ADVANCE(1857);
      END_STATE();
    case 749:
      if (lookahead == 'k') ADVANCE(1923);
      END_STATE();
    case 750:
      if (lookahead == 'k') ADVANCE(1744);
      END_STATE();
    case 751:
      if (lookahead == 'k') ADVANCE(1797);
      END_STATE();
    case 752:
      if (lookahead == 'k') ADVANCE(1772);
      END_STATE();
    case 753:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 754:
      if (lookahead == 'k') ADVANCE(1479);
      END_STATE();
    case 755:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 756:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 757:
      if (lookahead == 'k') ADVANCE(470);
      END_STATE();
    case 758:
      if (lookahead == 'k') ADVANCE(506);
      END_STATE();
    case 759:
      if (lookahead == 'k') ADVANCE(507);
      END_STATE();
    case 760:
      if (lookahead == 'k') ADVANCE(508);
      END_STATE();
    case 761:
      if (lookahead == 'k') ADVANCE(1219);
      END_STATE();
    case 762:
      if (lookahead == 'k') ADVANCE(510);
      END_STATE();
    case 763:
      if (lookahead == 'k') ADVANCE(511);
      END_STATE();
    case 764:
      if (lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 765:
      if (lookahead == 'k') ADVANCE(513);
      END_STATE();
    case 766:
      if (lookahead == 'k') ADVANCE(514);
      END_STATE();
    case 767:
      if (lookahead == 'k') ADVANCE(515);
      END_STATE();
    case 768:
      if (lookahead == 'k') ADVANCE(516);
      END_STATE();
    case 769:
      if (lookahead == 'k') ADVANCE(517);
      END_STATE();
    case 770:
      if (lookahead == 'k') ADVANCE(518);
      END_STATE();
    case 771:
      if (lookahead == 'k') ADVANCE(519);
      END_STATE();
    case 772:
      if (lookahead == 'k') ADVANCE(520);
      END_STATE();
    case 773:
      if (lookahead == 'k') ADVANCE(521);
      END_STATE();
    case 774:
      if (lookahead == 'k') ADVANCE(522);
      END_STATE();
    case 775:
      if (lookahead == 'k') ADVANCE(523);
      END_STATE();
    case 776:
      if (lookahead == 'k') ADVANCE(524);
      END_STATE();
    case 777:
      if (lookahead == 'k') ADVANCE(525);
      END_STATE();
    case 778:
      if (lookahead == 'k') ADVANCE(526);
      END_STATE();
    case 779:
      if (lookahead == 'k') ADVANCE(527);
      END_STATE();
    case 780:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 781:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(1734);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(1588);
      END_STATE();
    case 785:
      if (lookahead == 'l') ADVANCE(1799);
      END_STATE();
    case 786:
      if (lookahead == 'l') ADVANCE(1795);
      END_STATE();
    case 787:
      if (lookahead == 'l') ADVANCE(1894);
      END_STATE();
    case 788:
      if (lookahead == 'l') ADVANCE(1794);
      END_STATE();
    case 789:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(1866);
      END_STATE();
    case 791:
      if (lookahead == 'l') ADVANCE(1893);
      END_STATE();
    case 792:
      if (lookahead == 'l') ADVANCE(1895);
      END_STATE();
    case 793:
      if (lookahead == 'l') ADVANCE(1920);
      END_STATE();
    case 794:
      if (lookahead == 'l') ADVANCE(1732);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(1749);
      END_STATE();
    case 796:
      if (lookahead == 'l') ADVANCE(1001);
      END_STATE();
    case 797:
      if (lookahead == 'l') ADVANCE(871);
      END_STATE();
    case 798:
      if (lookahead == 'l') ADVANCE(783);
      END_STATE();
    case 799:
      if (lookahead == 'l') ADVANCE(1275);
      END_STATE();
    case 800:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 801:
      if (lookahead == 'l') ADVANCE(1477);
      END_STATE();
    case 802:
      if (lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 803:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 804:
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 805:
      if (lookahead == 'l') ADVANCE(1007);
      END_STATE();
    case 806:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 807:
      if (lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 808:
      if (lookahead == 'l') ADVANCE(791);
      END_STATE();
    case 809:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 810:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 811:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 812:
      if (lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 814:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 815:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 816:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 817:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 818:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 819:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 820:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 821:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 822:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 823:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 824:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 825:
      if (lookahead == 'l') ADVANCE(1562);
      END_STATE();
    case 826:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 827:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 828:
      if (lookahead == 'l') ADVANCE(844);
      END_STATE();
    case 829:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 830:
      if (lookahead == 'l') ADVANCE(1025);
      END_STATE();
    case 831:
      if (lookahead == 'l') ADVANCE(1009);
      END_STATE();
    case 832:
      if (lookahead == 'l') ADVANCE(781);
      END_STATE();
    case 833:
      if (lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 834:
      if (lookahead == 'l') ADVANCE(685);
      END_STATE();
    case 835:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 836:
      if (lookahead == 'l') ADVANCE(831);
      END_STATE();
    case 837:
      if (lookahead == 'l') ADVANCE(1060);
      END_STATE();
    case 838:
      if (lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 839:
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 'u') ADVANCE(1183);
      END_STATE();
    case 840:
      if (lookahead == 'l') ADVANCE(833);
      END_STATE();
    case 841:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 842:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 843:
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'r') ADVANCE(1512);
      END_STATE();
    case 844:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 845:
      if (lookahead == 'm') ADVANCE(1684);
      END_STATE();
    case 846:
      if (lookahead == 'm') ADVANCE(1687);
      END_STATE();
    case 847:
      if (lookahead == 'm') ADVANCE(1770);
      END_STATE();
    case 848:
      if (lookahead == 'm') ADVANCE(1847);
      END_STATE();
    case 849:
      if (lookahead == 'm') ADVANCE(1723);
      END_STATE();
    case 850:
      if (lookahead == 'm') ADVANCE(1653);
      END_STATE();
    case 851:
      if (lookahead == 'm') ADVANCE(1848);
      END_STATE();
    case 852:
      if (lookahead == 'm') ADVANCE(1884);
      END_STATE();
    case 853:
      if (lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 854:
      if (lookahead == 'm') ADVANCE(1497);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 'x') ADVANCE(456);
      END_STATE();
    case 855:
      if (lookahead == 'm') ADVANCE(1153);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == 'p') ADVANCE(1553);
      END_STATE();
    case 856:
      if (lookahead == 'm') ADVANCE(1153);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'p') ADVANCE(1553);
      END_STATE();
    case 857:
      if (lookahead == 'm') ADVANCE(1267);
      END_STATE();
    case 858:
      if (lookahead == 'm') ADVANCE(1154);
      END_STATE();
    case 859:
      if (lookahead == 'm') ADVANCE(451);
      END_STATE();
    case 860:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 861:
      if (lookahead == 'm') ADVANCE(873);
      END_STATE();
    case 862:
      if (lookahead == 'm') ADVANCE(1269);
      END_STATE();
    case 863:
      if (lookahead == 'm') ADVANCE(1270);
      END_STATE();
    case 864:
      if (lookahead == 'm') ADVANCE(1083);
      END_STATE();
    case 865:
      if (lookahead == 'm') ADVANCE(1112);
      END_STATE();
    case 866:
      if (lookahead == 'm') ADVANCE(899);
      END_STATE();
    case 867:
      if (lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 868:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 869:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 870:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 871:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 872:
      if (lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 873:
      if (lookahead == 'm') ADVANCE(1490);
      END_STATE();
    case 874:
      if (lookahead == 'm') ADVANCE(693);
      END_STATE();
    case 875:
      if (lookahead == 'm') ADVANCE(676);
      END_STATE();
    case 876:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 877:
      if (lookahead == 'm') ADVANCE(678);
      END_STATE();
    case 878:
      if (lookahead == 'm') ADVANCE(688);
      END_STATE();
    case 879:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 880:
      if (lookahead == 'm') ADVANCE(557);
      END_STATE();
    case 881:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 882:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 883:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 884:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 885:
      if (lookahead == 'n') ADVANCE(1136);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(1136);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 887:
      if (lookahead == 'n') ADVANCE(745);
      if (lookahead == 's') ADVANCE(1327);
      END_STATE();
    case 888:
      if (lookahead == 'n') ADVANCE(1737);
      END_STATE();
    case 889:
      if (lookahead == 'n') ADVANCE(1728);
      END_STATE();
    case 890:
      if (lookahead == 'n') ADVANCE(1738);
      END_STATE();
    case 891:
      if (lookahead == 'n') ADVANCE(1730);
      END_STATE();
    case 892:
      if (lookahead == 'n') ADVANCE(1804);
      END_STATE();
    case 893:
      if (lookahead == 'n') ADVANCE(1898);
      END_STATE();
    case 894:
      if (lookahead == 'n') ADVANCE(1814);
      END_STATE();
    case 895:
      if (lookahead == 'n') ADVANCE(1824);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(1838);
      END_STATE();
    case 897:
      if (lookahead == 'n') ADVANCE(1890);
      END_STATE();
    case 898:
      if (lookahead == 'n') ADVANCE(1717);
      END_STATE();
    case 899:
      if (lookahead == 'n') ADVANCE(1694);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(1820);
      END_STATE();
    case 901:
      if (lookahead == 'n') ADVANCE(1899);
      END_STATE();
    case 902:
      if (lookahead == 'n') ADVANCE(1790);
      END_STATE();
    case 903:
      if (lookahead == 'n') ADVANCE(1915);
      END_STATE();
    case 904:
      if (lookahead == 'n') ADVANCE(1643);
      END_STATE();
    case 905:
      if (lookahead == 'n') ADVANCE(1742);
      END_STATE();
    case 906:
      if (lookahead == 'n') ADVANCE(1815);
      END_STATE();
    case 907:
      if (lookahead == 'n') ADVANCE(1710);
      END_STATE();
    case 908:
      if (lookahead == 'n') ADVANCE(1718);
      END_STATE();
    case 909:
      if (lookahead == 'n') ADVANCE(1763);
      END_STATE();
    case 910:
      if (lookahead == 'n') SKIP(2)
      END_STATE();
    case 911:
      if (lookahead == 'n') SKIP(3)
      END_STATE();
    case 912:
      if (lookahead == 'n') SKIP(1)
      END_STATE();
    case 913:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 914:
      if (lookahead == 'n') ADVANCE(1406);
      END_STATE();
    case 915:
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == 'x') ADVANCE(480);
      END_STATE();
    case 916:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 917:
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'w') ADVANCE(698);
      END_STATE();
    case 918:
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'w') ADVANCE(702);
      END_STATE();
    case 919:
      if (lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 920:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 921:
      if (lookahead == 'n') ADVANCE(1008);
      END_STATE();
    case 922:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 923:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 924:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 925:
      if (lookahead == 'n') ADVANCE(1260);
      END_STATE();
    case 926:
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 927:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 928:
      if (lookahead == 'n') ADVANCE(1272);
      END_STATE();
    case 929:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 930:
      if (lookahead == 'n') ADVANCE(1484);
      END_STATE();
    case 931:
      if (lookahead == 'n') ADVANCE(1329);
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 932:
      if (lookahead == 'n') ADVANCE(1441);
      END_STATE();
    case 933:
      if (lookahead == 'n') ADVANCE(1276);
      END_STATE();
    case 934:
      if (lookahead == 'n') ADVANCE(1296);
      END_STATE();
    case 935:
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 936:
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 937:
      if (lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 938:
      if (lookahead == 'n') ADVANCE(1335);
      END_STATE();
    case 939:
      if (lookahead == 'n') ADVANCE(1295);
      END_STATE();
    case 940:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 941:
      if (lookahead == 'n') ADVANCE(1399);
      END_STATE();
    case 942:
      if (lookahead == 'n') ADVANCE(1263);
      END_STATE();
    case 943:
      if (lookahead == 'n') ADVANCE(1444);
      END_STATE();
    case 944:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 945:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 946:
      if (lookahead == 'n') ADVANCE(1340);
      END_STATE();
    case 947:
      if (lookahead == 'n') ADVANCE(1341);
      END_STATE();
    case 948:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 949:
      if (lookahead == 'n') ADVANCE(1342);
      END_STATE();
    case 950:
      if (lookahead == 'n') ADVANCE(1457);
      END_STATE();
    case 951:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 952:
      if (lookahead == 'n') ADVANCE(1343);
      END_STATE();
    case 953:
      if (lookahead == 'n') ADVANCE(1018);
      END_STATE();
    case 954:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 955:
      if (lookahead == 'n') ADVANCE(1346);
      END_STATE();
    case 956:
      if (lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 957:
      if (lookahead == 'n') ADVANCE(1350);
      END_STATE();
    case 958:
      if (lookahead == 'n') ADVANCE(1354);
      END_STATE();
    case 959:
      if (lookahead == 'n') ADVANCE(1355);
      END_STATE();
    case 960:
      if (lookahead == 'n') ADVANCE(1359);
      END_STATE();
    case 961:
      if (lookahead == 'n') ADVANCE(1367);
      END_STATE();
    case 962:
      if (lookahead == 'n') ADVANCE(1375);
      END_STATE();
    case 963:
      if (lookahead == 'n') ADVANCE(1376);
      END_STATE();
    case 964:
      if (lookahead == 'n') ADVANCE(1380);
      END_STATE();
    case 965:
      if (lookahead == 'n') ADVANCE(1382);
      END_STATE();
    case 966:
      if (lookahead == 'n') ADVANCE(1383);
      END_STATE();
    case 967:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 968:
      if (lookahead == 'n') ADVANCE(1302);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 969:
      if (lookahead == 'n') ADVANCE(1302);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 970:
      if (lookahead == 'n') ADVANCE(1446);
      END_STATE();
    case 971:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 972:
      if (lookahead == 'n') ADVANCE(1212);
      END_STATE();
    case 973:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 974:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 975:
      if (lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 976:
      if (lookahead == 'n') ADVANCE(1412);
      END_STATE();
    case 977:
      if (lookahead == 'n') ADVANCE(1423);
      END_STATE();
    case 978:
      if (lookahead == 'n') ADVANCE(1442);
      END_STATE();
    case 979:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 980:
      if (lookahead == 'n') ADVANCE(1451);
      END_STATE();
    case 981:
      if (lookahead == 'n') ADVANCE(1417);
      END_STATE();
    case 982:
      if (lookahead == 'n') ADVANCE(1146);
      END_STATE();
    case 983:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 984:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 985:
      if (lookahead == 'n') ADVANCE(1458);
      END_STATE();
    case 986:
      if (lookahead == 'n') ADVANCE(1303);
      END_STATE();
    case 987:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 988:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 989:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 990:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 991:
      if (lookahead == 'n') ADVANCE(1474);
      END_STATE();
    case 992:
      if (lookahead == 'o') ADVANCE(1175);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 993:
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 994:
      if (lookahead == 'o') ADVANCE(1863);
      END_STATE();
    case 995:
      if (lookahead == 'o') ADVANCE(1796);
      END_STATE();
    case 996:
      if (lookahead == 'o') ADVANCE(1752);
      END_STATE();
    case 997:
      if (lookahead == 'o') ADVANCE(1812);
      END_STATE();
    case 998:
      if (lookahead == 'o') ADVANCE(1850);
      END_STATE();
    case 999:
      if (lookahead == 'o') ADVANCE(1906);
      END_STATE();
    case 1000:
      if (lookahead == 'o') ADVANCE(1489);
      END_STATE();
    case 1001:
      if (lookahead == 'o') ADVANCE(1529);
      END_STATE();
    case 1002:
      if (lookahead == 'o') ADVANCE(1541);
      END_STATE();
    case 1003:
      if (lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 1004:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 1005:
      if (lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 1007:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 1011:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 1012:
      if (lookahead == 'o') ADVANCE(1532);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 1014:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(848);
      END_STATE();
    case 1016:
      if (lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 1017:
      if (lookahead == 'o') ADVANCE(1105);
      END_STATE();
    case 1018:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 1019:
      if (lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 1020:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 1021:
      if (lookahead == 'o') ADVANCE(893);
      END_STATE();
    case 1022:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 1024:
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 1025:
      if (lookahead == 'o') ADVANCE(1239);
      END_STATE();
    case 1026:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(1149);
      END_STATE();
    case 1028:
      if (lookahead == 'o') ADVANCE(975);
      END_STATE();
    case 1029:
      if (lookahead == 'o') ADVANCE(1167);
      END_STATE();
    case 1030:
      if (lookahead == 'o') ADVANCE(1111);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 1032:
      if (lookahead == 'o') ADVANCE(794);
      END_STATE();
    case 1033:
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 1034:
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 1035:
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 1036:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 1037:
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 1038:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 1039:
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 1040:
      if (lookahead == 'o') ADVANCE(967);
      END_STATE();
    case 1041:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 1042:
      if (lookahead == 'o') ADVANCE(1347);
      END_STATE();
    case 1043:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 1044:
      if (lookahead == 'o') ADVANCE(908);
      END_STATE();
    case 1045:
      if (lookahead == 'o') ADVANCE(909);
      END_STATE();
    case 1046:
      if (lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1047:
      if (lookahead == 'o') ADVANCE(1378);
      END_STATE();
    case 1048:
      if (lookahead == 'o') ADVANCE(971);
      END_STATE();
    case 1049:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 1050:
      if (lookahead == 'o') ADVANCE(1499);
      END_STATE();
    case 1051:
      if (lookahead == 'o') ADVANCE(990);
      END_STATE();
    case 1052:
      if (lookahead == 'o') ADVANCE(1042);
      END_STATE();
    case 1053:
      if (lookahead == 'o') ADVANCE(1225);
      END_STATE();
    case 1054:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 1055:
      if (lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 1056:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 1057:
      if (lookahead == 'o') ADVANCE(1024);
      END_STATE();
    case 1058:
      if (lookahead == 'o') ADVANCE(1536);
      END_STATE();
    case 1059:
      if (lookahead == 'o') ADVANCE(1278);
      END_STATE();
    case 1060:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 1061:
      if (lookahead == 'o') ADVANCE(1046);
      END_STATE();
    case 1062:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 1063:
      if (lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 1064:
      if (lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 1065:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 1066:
      if (lookahead == 'o') ADVANCE(1464);
      END_STATE();
    case 1067:
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 1068:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 1069:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 1070:
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 1071:
      if (lookahead == 'o') ADVANCE(1288);
      END_STATE();
    case 1072:
      if (lookahead == 'o') ADVANCE(980);
      END_STATE();
    case 1073:
      if (lookahead == 'o') ADVANCE(1511);
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 1075:
      if (lookahead == 'o') ADVANCE(977);
      END_STATE();
    case 1076:
      if (lookahead == 'o') ADVANCE(1232);
      END_STATE();
    case 1077:
      if (lookahead == 'o') ADVANCE(1494);
      END_STATE();
    case 1078:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 1079:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 1080:
      if (lookahead == 'o') ADVANCE(1500);
      END_STATE();
    case 1081:
      if (lookahead == 'o') ADVANCE(1466);
      END_STATE();
    case 1082:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 1083:
      if (lookahead == 'o') ADVANCE(1467);
      END_STATE();
    case 1084:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 1085:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 1086:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 1087:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 1088:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 1089:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 1090:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 1091:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 1092:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 1093:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 1094:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 1095:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 1096:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 1097:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 1098:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 1099:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 1100:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 1101:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 1102:
      if (lookahead == 'p') ADVANCE(536);
      END_STATE();
    case 1103:
      if (lookahead == 'p') ADVANCE(1810);
      END_STATE();
    case 1104:
      if (lookahead == 'p') ADVANCE(1924);
      END_STATE();
    case 1105:
      if (lookahead == 'p') ADVANCE(1740);
      END_STATE();
    case 1106:
      if (lookahead == 'p') ADVANCE(1781);
      END_STATE();
    case 1107:
      if (lookahead == 'p') ADVANCE(1783);
      END_STATE();
    case 1108:
      if (lookahead == 'p') ADVANCE(1809);
      END_STATE();
    case 1109:
      if (lookahead == 'p') ADVANCE(1867);
      END_STATE();
    case 1110:
      if (lookahead == 'p') ADVANCE(1880);
      END_STATE();
    case 1111:
      if (lookahead == 'p') ADVANCE(1896);
      END_STATE();
    case 1112:
      if (lookahead == 'p') ADVANCE(1764);
      END_STATE();
    case 1113:
      if (lookahead == 'p') ADVANCE(1769);
      END_STATE();
    case 1114:
      if (lookahead == 'p') ADVANCE(1805);
      END_STATE();
    case 1115:
      if (lookahead == 'p') ADVANCE(1840);
      END_STATE();
    case 1116:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 1117:
      if (lookahead == 'p') ADVANCE(1705);
      END_STATE();
    case 1118:
      if (lookahead == 'p') ADVANCE(1887);
      END_STATE();
    case 1119:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 1120:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 1121:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 1122:
      if (lookahead == 'p') ADVANCE(638);
      END_STATE();
    case 1123:
      if (lookahead == 'p') ADVANCE(1138);
      END_STATE();
    case 1124:
      if (lookahead == 'p') ADVANCE(1330);
      END_STATE();
    case 1125:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 1126:
      if (lookahead == 'p') ADVANCE(1331);
      END_STATE();
    case 1127:
      if (lookahead == 'p') ADVANCE(1333);
      END_STATE();
    case 1128:
      if (lookahead == 'p') ADVANCE(1078);
      END_STATE();
    case 1129:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 1130:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 1131:
      if (lookahead == 'p') ADVANCE(824);
      END_STATE();
    case 1132:
      if (lookahead == 'p') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1293);
      END_STATE();
    case 1133:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 1134:
      if (lookahead == 'p') ADVANCE(535);
      END_STATE();
    case 1135:
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 1136:
      if (lookahead == 'p') ADVANCE(1486);
      if (lookahead == 's') ADVANCE(1409);
      END_STATE();
    case 1137:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 1138:
      if (lookahead == 'p') ADVANCE(806);
      END_STATE();
    case 1139:
      if (lookahead == 'p') ADVANCE(1128);
      END_STATE();
    case 1140:
      if (lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 1141:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 1142:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 1143:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 1144:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 1145:
      if (lookahead == 'p') ADVANCE(1062);
      END_STATE();
    case 1146:
      if (lookahead == 'p') ADVANCE(1483);
      END_STATE();
    case 1147:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 1148:
      if (lookahead == 'p') ADVANCE(816);
      END_STATE();
    case 1149:
      if (lookahead == 'p') ADVANCE(479);
      END_STATE();
    case 1150:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 1151:
      if (lookahead == 'p') ADVANCE(1228);
      END_STATE();
    case 1152:
      if (lookahead == 'p') ADVANCE(1074);
      END_STATE();
    case 1153:
      if (lookahead == 'p') ADVANCE(1487);
      END_STATE();
    case 1154:
      if (lookahead == 'p') ADVANCE(1254);
      END_STATE();
    case 1155:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 1156:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 1157:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 1158:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 1159:
      if (lookahead == 'q') ADVANCE(1496);
      END_STATE();
    case 1160:
      if (lookahead == 'q') ADVANCE(1151);
      END_STATE();
    case 1161:
      if (lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(1679);
      END_STATE();
    case 1163:
      if (lookahead == 'r') ADVANCE(1856);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(1777);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(1780);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(1865);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(1706);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1719);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(1798);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(1714);
      END_STATE();
    case 1171:
      if (lookahead == 'r') ADVANCE(1858);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(1928);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(1750);
      END_STATE();
    case 1174:
      if (lookahead == 'r') ADVANCE(1748);
      END_STATE();
    case 1175:
      if (lookahead == 'r') ADVANCE(744);
      if (lookahead == 'w') ADVANCE(974);
      END_STATE();
    case 1176:
      if (lookahead == 'r') ADVANCE(1565);
      END_STATE();
    case 1177:
      if (lookahead == 'r') ADVANCE(1554);
      END_STATE();
    case 1178:
      if (lookahead == 'r') ADVANCE(940);
      if (lookahead == 'y') ADVANCE(1657);
      END_STATE();
    case 1179:
      if (lookahead == 'r') ADVANCE(1066);
      END_STATE();
    case 1180:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 1181:
      if (lookahead == 'r') ADVANCE(1139);
      END_STATE();
    case 1182:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 1183:
      if (lookahead == 'r') ADVANCE(1294);
      END_STATE();
    case 1184:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 1185:
      if (lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 1186:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 1187:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 1188:
      if (lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 1189:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 1190:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 1191:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 1192:
      if (lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 1193:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 1194:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 1195:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 1196:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 1197:
      if (lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 1198:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 1199:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 1200:
      if (lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 1201:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 1202:
      if (lookahead == 'r') ADVANCE(1118);
      END_STATE();
    case 1203:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 1204:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 1205:
      if (lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 1206:
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 1207:
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 1208:
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 1209:
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 1210:
      if (lookahead == 'r') ADVANCE(1405);
      END_STATE();
    case 1211:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 1212:
      if (lookahead == 'r') ADVANCE(1472);
      END_STATE();
    case 1213:
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead == 'w') ADVANCE(1244);
      END_STATE();
    case 1214:
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 1215:
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 1216:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 1217:
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 1218:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 1219:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 1220:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 1221:
      if (lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 1222:
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == 'w') ADVANCE(1236);
      END_STATE();
    case 1223:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 1224:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 1225:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 1226:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 1227:
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 1228:
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 1229:
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 1230:
      if (lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 1231:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 1232:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 1233:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 1234:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 1235:
      if (lookahead == 'r') ADVANCE(1065);
      END_STATE();
    case 1236:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 1237:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 1238:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 1239:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 1240:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 1241:
      if (lookahead == 'r') ADVANCE(1061);
      END_STATE();
    case 1242:
      if (lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 1243:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 1244:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 1245:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 1246:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 1247:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 1248:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 1249:
      if (lookahead == 'r') ADVANCE(1517);
      END_STATE();
    case 1250:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 1251:
      if (lookahead == 'r') ADVANCE(1518);
      END_STATE();
    case 1252:
      if (lookahead == 'r') ADVANCE(1246);
      END_STATE();
    case 1253:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 1254:
      if (lookahead == 'r') ADVANCE(1081);
      END_STATE();
    case 1255:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 1256:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 1257:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 1258:
      if (lookahead == 's') ADVANCE(1699);
      END_STATE();
    case 1259:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 1260:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 1261:
      if (lookahead == 's') ADVANCE(1680);
      END_STATE();
    case 1262:
      if (lookahead == 's') ADVANCE(1873);
      END_STATE();
    case 1263:
      if (lookahead == 's') ADVANCE(1774);
      END_STATE();
    case 1264:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 1265:
      if (lookahead == 's') ADVANCE(1582);
      END_STATE();
    case 1266:
      if (lookahead == 's') ADVANCE(1440);
      END_STATE();
    case 1267:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 1268:
      if (lookahead == 's') ADVANCE(1508);
      END_STATE();
    case 1269:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 1270:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 1271:
      if (lookahead == 's') ADVANCE(1261);
      END_STATE();
    case 1272:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 1273:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 1274:
      if (lookahead == 's') ADVANCE(1050);
      END_STATE();
    case 1275:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 1276:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 1277:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 1278:
      if (lookahead == 's') ADVANCE(1338);
      END_STATE();
    case 1279:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 1280:
      if (lookahead == 's') ADVANCE(1353);
      END_STATE();
    case 1281:
      if (lookahead == 's') ADVANCE(1365);
      END_STATE();
    case 1282:
      if (lookahead == 's') ADVANCE(1366);
      END_STATE();
    case 1283:
      if (lookahead == 's') ADVANCE(1368);
      END_STATE();
    case 1284:
      if (lookahead == 's') ADVANCE(1373);
      END_STATE();
    case 1285:
      if (lookahead == 's') ADVANCE(1387);
      END_STATE();
    case 1286:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 1287:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 1288:
      if (lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1289:
      if (lookahead == 's') ADVANCE(1455);
      END_STATE();
    case 1290:
      if (lookahead == 's') ADVANCE(1273);
      END_STATE();
    case 1291:
      if (lookahead == 's') ADVANCE(1534);
      END_STATE();
    case 1292:
      if (lookahead == 's') ADVANCE(1022);
      END_STATE();
    case 1293:
      if (lookahead == 's') ADVANCE(1041);
      END_STATE();
    case 1294:
      if (lookahead == 's') ADVANCE(1029);
      END_STATE();
    case 1295:
      if (lookahead == 's') ADVANCE(1070);
      END_STATE();
    case 1296:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 1297:
      if (lookahead == 's') ADVANCE(1432);
      END_STATE();
    case 1298:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 1299:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 1300:
      if (lookahead == 's') ADVANCE(1424);
      END_STATE();
    case 1301:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 1302:
      if (lookahead == 's') ADVANCE(1459);
      END_STATE();
    case 1303:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 1304:
      if (lookahead == 's') ADVANCE(1082);
      END_STATE();
    case 1305:
      if (lookahead == 's') ADVANCE(1079);
      END_STATE();
    case 1306:
      if (lookahead == 's') ADVANCE(1080);
      END_STATE();
    case 1307:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 1308:
      if (lookahead == 's') ADVANCE(1086);
      END_STATE();
    case 1309:
      if (lookahead == 's') ADVANCE(1088);
      END_STATE();
    case 1310:
      if (lookahead == 's') ADVANCE(1089);
      END_STATE();
    case 1311:
      if (lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 1312:
      if (lookahead == 's') ADVANCE(1091);
      END_STATE();
    case 1313:
      if (lookahead == 's') ADVANCE(1092);
      END_STATE();
    case 1314:
      if (lookahead == 's') ADVANCE(1093);
      END_STATE();
    case 1315:
      if (lookahead == 's') ADVANCE(1094);
      END_STATE();
    case 1316:
      if (lookahead == 's') ADVANCE(1095);
      END_STATE();
    case 1317:
      if (lookahead == 's') ADVANCE(1096);
      END_STATE();
    case 1318:
      if (lookahead == 's') ADVANCE(1097);
      END_STATE();
    case 1319:
      if (lookahead == 's') ADVANCE(1098);
      END_STATE();
    case 1320:
      if (lookahead == 's') ADVANCE(1099);
      END_STATE();
    case 1321:
      if (lookahead == 's') ADVANCE(1100);
      END_STATE();
    case 1322:
      if (lookahead == 's') ADVANCE(1101);
      END_STATE();
    case 1323:
      if (lookahead == 's') ADVANCE(1085);
      END_STATE();
    case 1324:
      if (lookahead == 's') ADVANCE(1087);
      END_STATE();
    case 1325:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 1326:
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 1327:
      if (lookahead == 't') ADVANCE(1803);
      END_STATE();
    case 1328:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 1329:
      if (lookahead == 't') ADVANCE(1813);
      END_STATE();
    case 1330:
      if (lookahead == 't') ADVANCE(1722);
      END_STATE();
    case 1331:
      if (lookahead == 't') ADVANCE(1786);
      END_STATE();
    case 1332:
      if (lookahead == 't') ADVANCE(1677);
      END_STATE();
    case 1333:
      if (lookahead == 't') ADVANCE(1879);
      END_STATE();
    case 1334:
      if (lookahead == 't') ADVANCE(1686);
      END_STATE();
    case 1335:
      if (lookahead == 't') ADVANCE(1711);
      END_STATE();
    case 1336:
      if (lookahead == 't') ADVANCE(1751);
      END_STATE();
    case 1337:
      if (lookahead == 't') ADVANCE(1700);
      END_STATE();
    case 1338:
      if (lookahead == 't') ADVANCE(1784);
      END_STATE();
    case 1339:
      if (lookahead == 't') ADVANCE(1791);
      END_STATE();
    case 1340:
      if (lookahead == 't') ADVANCE(1851);
      END_STATE();
    case 1341:
      if (lookahead == 't') ADVANCE(1925);
      END_STATE();
    case 1342:
      if (lookahead == 't') ADVANCE(1709);
      END_STATE();
    case 1343:
      if (lookahead == 't') ADVANCE(1739);
      END_STATE();
    case 1344:
      if (lookahead == 't') ADVANCE(1817);
      END_STATE();
    case 1345:
      if (lookahead == 't') ADVANCE(1836);
      END_STATE();
    case 1346:
      if (lookahead == 't') ADVANCE(1854);
      END_STATE();
    case 1347:
      if (lookahead == 't') ADVANCE(1900);
      END_STATE();
    case 1348:
      if (lookahead == 't') ADVANCE(1704);
      END_STATE();
    case 1349:
      if (lookahead == 't') ADVANCE(1638);
      END_STATE();
    case 1350:
      if (lookahead == 't') ADVANCE(1762);
      END_STATE();
    case 1351:
      if (lookahead == 't') ADVANCE(1882);
      END_STATE();
    case 1352:
      if (lookahead == 't') ADVANCE(1904);
      END_STATE();
    case 1353:
      if (lookahead == 't') ADVANCE(1741);
      END_STATE();
    case 1354:
      if (lookahead == 't') ADVANCE(1767);
      END_STATE();
    case 1355:
      if (lookahead == 't') ADVANCE(1793);
      END_STATE();
    case 1356:
      if (lookahead == 't') ADVANCE(1658);
      END_STATE();
    case 1357:
      if (lookahead == 't') ADVANCE(1660);
      END_STATE();
    case 1358:
      if (lookahead == 't') ADVANCE(1869);
      END_STATE();
    case 1359:
      if (lookahead == 't') ADVANCE(1870);
      END_STATE();
    case 1360:
      if (lookahead == 't') ADVANCE(1901);
      END_STATE();
    case 1361:
      if (lookahead == 't') ADVANCE(1688);
      END_STATE();
    case 1362:
      if (lookahead == 't') ADVANCE(1689);
      END_STATE();
    case 1363:
      if (lookahead == 't') ADVANCE(1690);
      END_STATE();
    case 1364:
      if (lookahead == 't') ADVANCE(1648);
      END_STATE();
    case 1365:
      if (lookahead == 't') ADVANCE(1785);
      END_STATE();
    case 1366:
      if (lookahead == 't') ADVANCE(1877);
      END_STATE();
    case 1367:
      if (lookahead == 't') ADVANCE(1916);
      END_STATE();
    case 1368:
      if (lookahead == 't') ADVANCE(1765);
      END_STATE();
    case 1369:
      if (lookahead == 't') ADVANCE(1819);
      END_STATE();
    case 1370:
      if (lookahead == 't') ADVANCE(1681);
      END_STATE();
    case 1371:
      if (lookahead == 't') ADVANCE(1849);
      END_STATE();
    case 1372:
      if (lookahead == 't') ADVANCE(1736);
      END_STATE();
    case 1373:
      if (lookahead == 't') ADVANCE(1822);
      END_STATE();
    case 1374:
      if (lookahead == 't') ADVANCE(1678);
      END_STATE();
    case 1375:
      if (lookahead == 't') ADVANCE(1745);
      END_STATE();
    case 1376:
      if (lookahead == 't') ADVANCE(1775);
      END_STATE();
    case 1377:
      if (lookahead == 't') ADVANCE(1664);
      END_STATE();
    case 1378:
      if (lookahead == 't') ADVANCE(1868);
      END_STATE();
    case 1379:
      if (lookahead == 't') ADVANCE(1642);
      END_STATE();
    case 1380:
      if (lookahead == 't') ADVANCE(1864);
      END_STATE();
    case 1381:
      if (lookahead == 't') ADVANCE(1691);
      END_STATE();
    case 1382:
      if (lookahead == 't') ADVANCE(1929);
      END_STATE();
    case 1383:
      if (lookahead == 't') ADVANCE(1720);
      END_STATE();
    case 1384:
      if (lookahead == 't') ADVANCE(1692);
      END_STATE();
    case 1385:
      if (lookahead == 't') ADVANCE(1666);
      END_STATE();
    case 1386:
      if (lookahead == 't') ADVANCE(1674);
      END_STATE();
    case 1387:
      if (lookahead == 't') ADVANCE(1930);
      END_STATE();
    case 1388:
      if (lookahead == 't') ADVANCE(1665);
      END_STATE();
    case 1389:
      if (lookahead == 't') ADVANCE(1668);
      END_STATE();
    case 1390:
      if (lookahead == 't') ADVANCE(1670);
      END_STATE();
    case 1391:
      if (lookahead == 't') ADVANCE(1671);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(1672);
      END_STATE();
    case 1393:
      if (lookahead == 't') ADVANCE(1673);
      END_STATE();
    case 1394:
      if (lookahead == 't') ADVANCE(1667);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1888);
      END_STATE();
    case 1397:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 1398:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 1399:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 1400:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 1401:
      if (lookahead == 't') ADVANCE(1556);
      END_STATE();
    case 1402:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 1403:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 1404:
      if (lookahead == 't') ADVANCE(1557);
      END_STATE();
    case 1405:
      if (lookahead == 't') ADVANCE(1558);
      END_STATE();
    case 1406:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 1407:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 1408:
      if (lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 1409:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 1410:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 1411:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 1412:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 1413:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 1414:
      if (lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1415:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1416:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 1417:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 1418:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 1419:
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 1421:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 1422:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 1423:
      if (lookahead == 't') ADVANCE(1230);
      END_STATE();
    case 1424:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 1425:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 1426:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 1427:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 1428:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 1429:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 1430:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 1431:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 1432:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 1433:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 1434:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 1435:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 1436:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 1437:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 1438:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 1439:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 1440:
      if (lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 1441:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 1442:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 1443:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 1444:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1445:
      if (lookahead == 't') ADVANCE(1414);
      END_STATE();
    case 1446:
      if (lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 1447:
      if (lookahead == 't') ADVANCE(1279);
      END_STATE();
    case 1448:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 1449:
      if (lookahead == 't') ADVANCE(1030);
      END_STATE();
    case 1450:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 1451:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 1452:
      if (lookahead == 't') ADVANCE(1415);
      END_STATE();
    case 1453:
      if (lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1454:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 1455:
      if (lookahead == 't') ADVANCE(841);
      END_STATE();
    case 1456:
      if (lookahead == 't') ADVANCE(1217);
      END_STATE();
    case 1457:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 1458:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 1459:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 1460:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 1461:
      if (lookahead == 't') ADVANCE(1150);
      END_STATE();
    case 1462:
      if (lookahead == 't') ADVANCE(1240);
      END_STATE();
    case 1463:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 1464:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 1465:
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 1466:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 1467:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 1468:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 1469:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 1470:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 1471:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 1472:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 1473:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 1474:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1475:
      if (lookahead == 'u') ADVANCE(458);
      END_STATE();
    case 1476:
      if (lookahead == 'u') ADVANCE(931);
      if (lookahead == 'v') ADVANCE(379);
      END_STATE();
    case 1477:
      if (lookahead == 'u') ADVANCE(866);
      END_STATE();
    case 1478:
      if (lookahead == 'u') ADVANCE(1227);
      END_STATE();
    case 1479:
      if (lookahead == 'u') ADVANCE(1108);
      END_STATE();
    case 1480:
      if (lookahead == 'u') ADVANCE(1262);
      END_STATE();
    case 1481:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 1482:
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 1483:
      if (lookahead == 'u') ADVANCE(1371);
      END_STATE();
    case 1484:
      if (lookahead == 'u') ADVANCE(1552);
      END_STATE();
    case 1485:
      if (lookahead == 'u') ADVANCE(701);
      END_STATE();
    case 1486:
      if (lookahead == 'u') ADVANCE(1428);
      END_STATE();
    case 1487:
      if (lookahead == 'u') ADVANCE(1429);
      END_STATE();
    case 1488:
      if (lookahead == 'u') ADVANCE(1218);
      END_STATE();
    case 1489:
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 1490:
      if (lookahead == 'u') ADVANCE(1471);
      END_STATE();
    case 1491:
      if (lookahead == 'u') ADVANCE(1220);
      END_STATE();
    case 1492:
      if (lookahead == 'u') ADVANCE(947);
      END_STATE();
    case 1493:
      if (lookahead == 'u') ADVANCE(820);
      END_STATE();
    case 1494:
      if (lookahead == 'u') ADVANCE(1443);
      END_STATE();
    case 1495:
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 1496:
      if (lookahead == 'u') ADVANCE(565);
      END_STATE();
    case 1497:
      if (lookahead == 'u') ADVANCE(1453);
      END_STATE();
    case 1498:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 1499:
      if (lookahead == 'u') ADVANCE(1233);
      END_STATE();
    case 1500:
      if (lookahead == 'u') ADVANCE(1234);
      END_STATE();
    case 1501:
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 1502:
      if (lookahead == 'v') ADVANCE(1913);
      END_STATE();
    case 1503:
      if (lookahead == 'v') ADVANCE(1917);
      END_STATE();
    case 1504:
      if (lookahead == 'v') ADVANCE(1746);
      END_STATE();
    case 1505:
      if (lookahead == 'v') ADVANCE(1841);
      END_STATE();
    case 1506:
      if (lookahead == 'v') ADVANCE(1826);
      END_STATE();
    case 1507:
      if (lookahead == 'v') ADVANCE(447);
      END_STATE();
    case 1508:
      if (lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 1509:
      if (lookahead == 'v') ADVANCE(394);
      END_STATE();
    case 1510:
      if (lookahead == 'v') ADVANCE(543);
      END_STATE();
    case 1511:
      if (lookahead == 'v') ADVANCE(476);
      END_STATE();
    case 1512:
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 1513:
      if (lookahead == 'v') ADVANCE(499);
      END_STATE();
    case 1514:
      if (lookahead == 'v') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(1463);
      END_STATE();
    case 1515:
      if (lookahead == 'v') ADVANCE(713);
      END_STATE();
    case 1516:
      if (lookahead == 'v') ADVANCE(581);
      END_STATE();
    case 1517:
      if (lookahead == 'v') ADVANCE(727);
      END_STATE();
    case 1518:
      if (lookahead == 'v') ADVANCE(730);
      END_STATE();
    case 1519:
      if (lookahead == 'v') ADVANCE(569);
      END_STATE();
    case 1520:
      if (lookahead == 'v') ADVANCE(570);
      END_STATE();
    case 1521:
      if (lookahead == 'v') ADVANCE(573);
      END_STATE();
    case 1522:
      if (lookahead == 'v') ADVANCE(574);
      END_STATE();
    case 1523:
      if (lookahead == 'v') ADVANCE(575);
      END_STATE();
    case 1524:
      if (lookahead == 'v') ADVANCE(576);
      END_STATE();
    case 1525:
      if (lookahead == 'v') ADVANCE(577);
      END_STATE();
    case 1526:
      if (lookahead == 'v') ADVANCE(578);
      END_STATE();
    case 1527:
      if (lookahead == 'w') ADVANCE(1761);
      END_STATE();
    case 1528:
      if (lookahead == 'w') ADVANCE(1927);
      END_STATE();
    case 1529:
      if (lookahead == 'w') ADVANCE(1634);
      END_STATE();
    case 1530:
      if (lookahead == 'w') ADVANCE(1823);
      END_STATE();
    case 1531:
      if (lookahead == 'w') ADVANCE(1636);
      END_STATE();
    case 1532:
      if (lookahead == 'w') ADVANCE(1640);
      END_STATE();
    case 1533:
      if (lookahead == 'w') ADVANCE(890);
      END_STATE();
    case 1534:
      if (lookahead == 'w') ADVANCE(326);
      END_STATE();
    case 1535:
      if (lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 1536:
      if (lookahead == 'w') ADVANCE(897);
      END_STATE();
    case 1537:
      if (lookahead == 'w') ADVANCE(742);
      END_STATE();
    case 1538:
      if (lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 1539:
      if (lookahead == 'w') ADVANCE(681);
      END_STATE();
    case 1540:
      if (lookahead == 'w') ADVANCE(979);
      END_STATE();
    case 1541:
      if (lookahead == 'w') ADVANCE(287);
      END_STATE();
    case 1542:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 1543:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 1544:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 1545:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 1546:
      if (lookahead == 'x') ADVANCE(1337);
      END_STATE();
    case 1547:
      if (lookahead == 'x') ADVANCE(1358);
      END_STATE();
    case 1548:
      if (lookahead == 'x') ADVANCE(494);
      END_STATE();
    case 1549:
      if (lookahead == 'x') ADVANCE(497);
      END_STATE();
    case 1550:
      if (lookahead == 'x') ADVANCE(498);
      END_STATE();
    case 1551:
      if (lookahead == 'x') ADVANCE(1372);
      END_STATE();
    case 1552:
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 1553:
      if (lookahead == 'y') ADVANCE(1753);
      END_STATE();
    case 1554:
      if (lookahead == 'y') ADVANCE(1835);
      END_STATE();
    case 1555:
      if (lookahead == 'y') ADVANCE(1760);
      END_STATE();
    case 1556:
      if (lookahead == 'y') ADVANCE(1682);
      END_STATE();
    case 1557:
      if (lookahead == 'y') ADVANCE(1645);
      END_STATE();
    case 1558:
      if (lookahead == 'y') ADVANCE(1715);
      END_STATE();
    case 1559:
      if (lookahead == 'y') ADVANCE(1807);
      END_STATE();
    case 1560:
      if (lookahead == 'y') ADVANCE(1827);
      END_STATE();
    case 1561:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 1562:
      if (lookahead == 'y') ADVANCE(1122);
      END_STATE();
    case 1563:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 1564:
      if (lookahead == 'y') ADVANCE(1297);
      END_STATE();
    case 1565:
      if (lookahead == 'y') ADVANCE(1152);
      END_STATE();
    case 1566:
      if (lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 1567:
      if (lookahead == 'z') ADVANCE(558);
      END_STATE();
    case 1568:
      if (eof) ADVANCE(1575);
      if (lookahead == '#') ADVANCE(1576);
      if (lookahead == '\\') SKIP(1572)
      if (lookahead == 'a') ADVANCE(1606);
      if (lookahead == 'b') ADVANCE(1621);
      if (lookahead == 'd') ADVANCE(1615);
      if (lookahead == 'n') ADVANCE(1600);
      if (lookahead == 'r') ADVANCE(1617);
      if (lookahead == 't') ADVANCE(1632);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1568)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1569:
      if (eof) ADVANCE(1575);
      if (lookahead == '\\') SKIP(1573)
      END_STATE();
    case 1570:
      if (eof) ADVANCE(1575);
      if (lookahead == '\\') SKIP(1573)
      if (lookahead == 'r') SKIP(1569)
      END_STATE();
    case 1571:
      if (eof) ADVANCE(1575);
      if (lookahead == '\\') SKIP(1574)
      END_STATE();
    case 1572:
      if (eof) ADVANCE(1575);
      if (lookahead == '\\') SKIP(1574)
      if (lookahead == 'r') SKIP(1571)
      END_STATE();
    case 1573:
      if (eof) ADVANCE(1575);
      if (lookahead == 'n') SKIP(0)
      END_STATE();
    case 1574:
      if (eof) ADVANCE(1575);
      if (lookahead == 'n') SKIP(1568)
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_role);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_role);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1609);
      if (lookahead == 'u') ADVANCE(1598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_allow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_auditallow);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_auditallow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_dontaudit);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_dontaudit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_neverallow);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_neverallow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1633);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_appletalk_socket);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_association);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_blk_file);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_capability);
      if (lookahead == '2') ADVANCE(1646);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_capability2);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_chr_file);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_dccp_socket);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_fd);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_fifo_file);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(1564);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_filesystem);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_ipc);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_ipc);
      if (lookahead == '_') ADVANCE(668);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_kernel_service);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '_') ADVANCE(1292);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_key_socket);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_lnk_file);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_memprotect);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_msg);
      if (lookahead == 'q') ADVANCE(1662);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_msgq);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_netif);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_netlink_socket);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_netlink_audit_socket);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_netlink_dnrt_socket);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_netlink_firewall_socket);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_netlink_ip6fw_socket);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_netlink_kobject_uevent_socket);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_netlink_nflog_socket);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_netlink_route_socket);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_netlink_selinux_socket);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_netlink_tcpdiag_socket);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_netlink_xfrm_socket);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == '_') ADVANCE(208);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_packet);
      if (lookahead == '_') ADVANCE(1309);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_packet_socket);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_peer);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_rawip_socket);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_sem);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_shm);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_sock_file);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_socket);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_tcp_socket);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_tun_socket);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_udp_socket);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_unix_dgram_socket);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_unix_stream_socket);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_db_blob);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_db_column);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_db_database);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_db_procedure);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_db_table);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_db_tuple);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_dbus);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_nscd);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_passwd);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_x_application_data);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_x_client);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_x_colormap);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_x_cursor);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_x_device);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_x_drawable);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_x_event);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_x_extension);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_x_font);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_x_gc);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_x_keyboard);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_x_pointer);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_x_property);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_x_resource);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_x_screen);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_x_selection);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_x_server);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_x_synthetic_event);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_accept);
      if (lookahead == 'f') ADVANCE(1197);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_acceptfrom);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_acquire_svc);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_activegrab);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_add_name);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_addchild);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_admin);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_associate);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_audit_control);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_audit_write);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_bell);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_check_context);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_chfn);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_chown);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_chparent);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_chprop);
      if (lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_chproplist);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_chselection);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_chsh);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_chstack);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_clientcomevent);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_compute_av);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_compute_create);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_compute_member);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_compute_relabel);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_compute_user);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_connect);
      if (lookahead == 't') ADVANCE(996);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(anon_sym_connectto);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == 'g') ADVANCE(825);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_createglyph);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_crontab);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_ctrllife);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_dac_override);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_dac_read_search);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_destroy);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_draw);
      if (lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_drawevent);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_dyntransition);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_emutramp);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_enforce_dest);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_enqueue);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_entrypoint);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_enumerate);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_execheap);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_execmem);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_execmod);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_execstack);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '_') ADVANCE(953);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_execute_no_trans);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_extensionevent);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_fork);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_fowner);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_fsetid);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_getattr);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_getcap);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_getfontpath);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_getgrp);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_gethost);
      if (lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_gethostlist);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_getopt);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_getpgid);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_getpwd);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_getsched);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_getsession);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_getstat);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_grab);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_inputevent);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_ioctl);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_ipc_info);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_ipc_lock);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_ipc_owner);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(anon_sym_lease);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(anon_sym_linux_immutable);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead == 'p') ADVANCE(1229);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_listen);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_listprop);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == '_') ADVANCE(1145);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(anon_sym_load_policy);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(anon_sym_mknod);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(anon_sym_mmap_zero);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_mounton);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_mousemotion);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(anon_sym_mprotect);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_name_bind);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_name_connect);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_net_admin);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_net_bind_service);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(anon_sym_net_broadcast);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(anon_sym_net_raw);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_newconn);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_nlmsg_read);
      if (lookahead == 'p') ADVANCE(1191);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_nlmsg_readpriv);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_nlmsg_relay);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_nlmsg_write);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_noatsecure);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_node_bind);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_pageexec);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_passivegrab);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_polmatch);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_ptrace);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_quotaget);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_quotamod);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_quotaon);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_randexec);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_randmmap);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_rawip_recv);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_rawip_send);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_receive);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_recv);
      if (lookahead == '_') ADVANCE(862);
      if (lookahead == 'f') ADVANCE(1192);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_recv_msg);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_recvfrom);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_relabelfrom);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_relabelinput);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_relabelto);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_remount);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_remove_name);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_reparent);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_rlimitinh);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_rmdir);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_rootok);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_screensaver);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_segmexec);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_send);
      if (lookahead == '_') ADVANCE(863);
      if (lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_send_msg);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_sendto);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_serverchangeevent);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_setattr);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_setbool);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_setcap);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_setcheckreqprot);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_setcontext);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_setcurrent);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_setenforce);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_setexec);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_setfocus);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_setfontpath);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_setfscreate);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_setgid);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_sethostlist);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_setkeycreate);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_setopt);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_setpcap);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_setpgid);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_setrlimit);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_setsched);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_setsecparam);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_setuid);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_share);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_shmemgrp);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_shmemhost);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_shmempwd);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_shutdown);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_sigchld);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_siginh);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_sigkill);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_signull);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_sigstop);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_swapon);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_sys_admin);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_sys_boot);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_sys_chroot);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_sys_module);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_sys_nice);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_sys_pacct);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_sys_ptrace);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_sys_rawio);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_sys_resource);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_sys_time);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_sys_tty_config);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_syslog_console);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_syslog_mod);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_syslog_read);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_tcp_recv);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_tcp_send);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_transition);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_transparent);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_udp_recv);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_udp_send);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_ungrab);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_uninstall);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_unix_read);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_unix_write);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_unlink);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_unmap);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_unmount);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_warppointer);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_windowchangeevent);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_windowchangerequest);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1568},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1568},
  [23] = {.lex_state = 1568},
  [24] = {.lex_state = 1568},
  [25] = {.lex_state = 1568},
  [26] = {.lex_state = 1568},
  [27] = {.lex_state = 1568},
  [28] = {.lex_state = 1568},
  [29] = {.lex_state = 1568},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_role] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_auditallow] = ACTIONS(1),
    [anon_sym_dontaudit] = ACTIONS(1),
    [anon_sym_neverallow] = ACTIONS(1),
    [anon_sym_appletalk_socket] = ACTIONS(1),
    [anon_sym_association] = ACTIONS(1),
    [anon_sym_blk_file] = ACTIONS(1),
    [anon_sym_capability] = ACTIONS(1),
    [anon_sym_capability2] = ACTIONS(1),
    [anon_sym_chr_file] = ACTIONS(1),
    [anon_sym_dccp_socket] = ACTIONS(1),
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
    [anon_sym_rawip_socket] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_accept] = ACTIONS(1),
    [anon_sym_acceptfrom] = ACTIONS(1),
    [anon_sym_acquire_svc] = ACTIONS(1),
    [anon_sym_activegrab] = ACTIONS(1),
    [anon_sym_add_name] = ACTIONS(1),
    [anon_sym_addchild] = ACTIONS(1),
    [anon_sym_admin] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_associate] = ACTIONS(1),
    [anon_sym_audit_control] = ACTIONS(1),
    [anon_sym_audit_write] = ACTIONS(1),
    [anon_sym_bell] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_check_context] = ACTIONS(1),
    [anon_sym_chfn] = ACTIONS(1),
    [anon_sym_chown] = ACTIONS(1),
    [anon_sym_chparent] = ACTIONS(1),
    [anon_sym_chprop] = ACTIONS(1),
    [anon_sym_chproplist] = ACTIONS(1),
    [anon_sym_chselection] = ACTIONS(1),
    [anon_sym_chsh] = ACTIONS(1),
    [anon_sym_chstack] = ACTIONS(1),
    [anon_sym_clientcomevent] = ACTIONS(1),
    [anon_sym_compute_av] = ACTIONS(1),
    [anon_sym_compute_create] = ACTIONS(1),
    [anon_sym_compute_member] = ACTIONS(1),
    [anon_sym_compute_relabel] = ACTIONS(1),
    [anon_sym_compute_user] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_connectto] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_createglyph] = ACTIONS(1),
    [anon_sym_crontab] = ACTIONS(1),
    [anon_sym_ctrllife] = ACTIONS(1),
    [anon_sym_dac_override] = ACTIONS(1),
    [anon_sym_dac_read_search] = ACTIONS(1),
    [anon_sym_destroy] = ACTIONS(1),
    [anon_sym_draw] = ACTIONS(1),
    [anon_sym_drawevent] = ACTIONS(1),
    [anon_sym_dyntransition] = ACTIONS(1),
    [anon_sym_emutramp] = ACTIONS(1),
    [anon_sym_enforce_dest] = ACTIONS(1),
    [anon_sym_enqueue] = ACTIONS(1),
    [anon_sym_entrypoint] = ACTIONS(1),
    [anon_sym_enumerate] = ACTIONS(1),
    [anon_sym_execheap] = ACTIONS(1),
    [anon_sym_execmem] = ACTIONS(1),
    [anon_sym_execmod] = ACTIONS(1),
    [anon_sym_execstack] = ACTIONS(1),
    [anon_sym_execute] = ACTIONS(1),
    [anon_sym_execute_no_trans] = ACTIONS(1),
    [anon_sym_extensionevent] = ACTIONS(1),
    [anon_sym_fork] = ACTIONS(1),
    [anon_sym_fowner] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_fsetid] = ACTIONS(1),
    [anon_sym_getattr] = ACTIONS(1),
    [anon_sym_getcap] = ACTIONS(1),
    [anon_sym_getfontpath] = ACTIONS(1),
    [anon_sym_getgrp] = ACTIONS(1),
    [anon_sym_gethost] = ACTIONS(1),
    [anon_sym_gethostlist] = ACTIONS(1),
    [anon_sym_getopt] = ACTIONS(1),
    [anon_sym_getpgid] = ACTIONS(1),
    [anon_sym_getpwd] = ACTIONS(1),
    [anon_sym_getsched] = ACTIONS(1),
    [anon_sym_getsession] = ACTIONS(1),
    [anon_sym_getstat] = ACTIONS(1),
    [anon_sym_grab] = ACTIONS(1),
    [anon_sym_inputevent] = ACTIONS(1),
    [anon_sym_install] = ACTIONS(1),
    [anon_sym_ioctl] = ACTIONS(1),
    [anon_sym_ipc_info] = ACTIONS(1),
    [anon_sym_ipc_lock] = ACTIONS(1),
    [anon_sym_ipc_owner] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_lease] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_linux_immutable] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_listen] = ACTIONS(1),
    [anon_sym_listprop] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_load_policy] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_lookup] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_mknod] = ACTIONS(1),
    [anon_sym_mmap_zero] = ACTIONS(1),
    [anon_sym_mount] = ACTIONS(1),
    [anon_sym_mounton] = ACTIONS(1),
    [anon_sym_mousemotion] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_mprotect] = ACTIONS(1),
    [anon_sym_name_bind] = ACTIONS(1),
    [anon_sym_name_connect] = ACTIONS(1),
    [anon_sym_net_admin] = ACTIONS(1),
    [anon_sym_net_bind_service] = ACTIONS(1),
    [anon_sym_net_broadcast] = ACTIONS(1),
    [anon_sym_net_raw] = ACTIONS(1),
    [anon_sym_newconn] = ACTIONS(1),
    [anon_sym_nlmsg_read] = ACTIONS(1),
    [anon_sym_nlmsg_readpriv] = ACTIONS(1),
    [anon_sym_nlmsg_relay] = ACTIONS(1),
    [anon_sym_nlmsg_write] = ACTIONS(1),
    [anon_sym_noatsecure] = ACTIONS(1),
    [anon_sym_node_bind] = ACTIONS(1),
    [anon_sym_pageexec] = ACTIONS(1),
    [anon_sym_passivegrab] = ACTIONS(1),
    [anon_sym_polmatch] = ACTIONS(1),
    [anon_sym_ptrace] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_quotaget] = ACTIONS(1),
    [anon_sym_quotamod] = ACTIONS(1),
    [anon_sym_quotaon] = ACTIONS(1),
    [anon_sym_randexec] = ACTIONS(1),
    [anon_sym_randmmap] = ACTIONS(1),
    [anon_sym_rawip_recv] = ACTIONS(1),
    [anon_sym_rawip_send] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_receive] = ACTIONS(1),
    [anon_sym_recv] = ACTIONS(1),
    [anon_sym_recv_msg] = ACTIONS(1),
    [anon_sym_recvfrom] = ACTIONS(1),
    [anon_sym_relabelfrom] = ACTIONS(1),
    [anon_sym_relabelinput] = ACTIONS(1),
    [anon_sym_relabelto] = ACTIONS(1),
    [anon_sym_remount] = ACTIONS(1),
    [anon_sym_remove_name] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [anon_sym_reparent] = ACTIONS(1),
    [anon_sym_rlimitinh] = ACTIONS(1),
    [anon_sym_rmdir] = ACTIONS(1),
    [anon_sym_rootok] = ACTIONS(1),
    [anon_sym_screensaver] = ACTIONS(1),
    [anon_sym_search] = ACTIONS(1),
    [anon_sym_segmexec] = ACTIONS(1),
    [anon_sym_send] = ACTIONS(1),
    [anon_sym_send_msg] = ACTIONS(1),
    [anon_sym_sendto] = ACTIONS(1),
    [anon_sym_serverchangeevent] = ACTIONS(1),
    [anon_sym_setattr] = ACTIONS(1),
    [anon_sym_setbool] = ACTIONS(1),
    [anon_sym_setcap] = ACTIONS(1),
    [anon_sym_setcheckreqprot] = ACTIONS(1),
    [anon_sym_setcontext] = ACTIONS(1),
    [anon_sym_setcurrent] = ACTIONS(1),
    [anon_sym_setenforce] = ACTIONS(1),
    [anon_sym_setexec] = ACTIONS(1),
    [anon_sym_setfocus] = ACTIONS(1),
    [anon_sym_setfontpath] = ACTIONS(1),
    [anon_sym_setfscreate] = ACTIONS(1),
    [anon_sym_setgid] = ACTIONS(1),
    [anon_sym_sethostlist] = ACTIONS(1),
    [anon_sym_setkeycreate] = ACTIONS(1),
    [anon_sym_setopt] = ACTIONS(1),
    [anon_sym_setpcap] = ACTIONS(1),
    [anon_sym_setpgid] = ACTIONS(1),
    [anon_sym_setrlimit] = ACTIONS(1),
    [anon_sym_setsched] = ACTIONS(1),
    [anon_sym_setsecparam] = ACTIONS(1),
    [anon_sym_setuid] = ACTIONS(1),
    [anon_sym_share] = ACTIONS(1),
    [anon_sym_shutdown] = ACTIONS(1),
    [anon_sym_sigchld] = ACTIONS(1),
    [anon_sym_siginh] = ACTIONS(1),
    [anon_sym_sigkill] = ACTIONS(1),
    [anon_sym_signal] = ACTIONS(1),
    [anon_sym_signull] = ACTIONS(1),
    [anon_sym_sigstop] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_swapon] = ACTIONS(1),
    [anon_sym_sys_admin] = ACTIONS(1),
    [anon_sym_sys_boot] = ACTIONS(1),
    [anon_sym_sys_chroot] = ACTIONS(1),
    [anon_sym_sys_module] = ACTIONS(1),
    [anon_sym_sys_nice] = ACTIONS(1),
    [anon_sym_sys_pacct] = ACTIONS(1),
    [anon_sym_sys_ptrace] = ACTIONS(1),
    [anon_sym_sys_rawio] = ACTIONS(1),
    [anon_sym_sys_resource] = ACTIONS(1),
    [anon_sym_sys_time] = ACTIONS(1),
    [anon_sym_sys_tty_config] = ACTIONS(1),
    [anon_sym_syslog_console] = ACTIONS(1),
    [anon_sym_syslog_mod] = ACTIONS(1),
    [anon_sym_syslog_read] = ACTIONS(1),
    [anon_sym_tcp_recv] = ACTIONS(1),
    [anon_sym_tcp_send] = ACTIONS(1),
    [anon_sym_transition] = ACTIONS(1),
    [anon_sym_transparent] = ACTIONS(1),
    [anon_sym_udp_recv] = ACTIONS(1),
    [anon_sym_udp_send] = ACTIONS(1),
    [anon_sym_ungrab] = ACTIONS(1),
    [anon_sym_uninstall] = ACTIONS(1),
    [anon_sym_unix_read] = ACTIONS(1),
    [anon_sym_unix_write] = ACTIONS(1),
    [anon_sym_unlink] = ACTIONS(1),
    [anon_sym_unmap] = ACTIONS(1),
    [anon_sym_unmount] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_warppointer] = ACTIONS(1),
    [anon_sym_windowchangeevent] = ACTIONS(1),
    [anon_sym_windowchangerequest] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym__definition] = STATE(23),
    [sym_type_declaration] = STATE(23),
    [sym_role_declaration] = STATE(23),
    [sym_rule_declaration] = STATE(23),
    [sym_boolean_declaration] = STATE(23),
    [sym_macro_usage] = STATE(23),
    [sym_rule_name] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_role] = ACTIONS(9),
    [anon_sym_bool] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_allow] = ACTIONS(15),
    [anon_sym_auditallow] = ACTIONS(15),
    [anon_sym_dontaudit] = ACTIONS(15),
    [anon_sym_neverallow] = ACTIONS(15),
  },
  [2] = {
    [sym_permission] = STATE(65),
    [sym_permissions] = STATE(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [3] = {
    [sym_permissions] = STATE(13),
    [aux_sym_permission_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [4] = {
    [sym_permissions] = STATE(13),
    [aux_sym_permission_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_passwd] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_accept] = ACTIONS(32),
    [anon_sym_acceptfrom] = ACTIONS(29),
    [anon_sym_acquire_svc] = ACTIONS(29),
    [anon_sym_activegrab] = ACTIONS(29),
    [anon_sym_add_name] = ACTIONS(29),
    [anon_sym_addchild] = ACTIONS(29),
    [anon_sym_admin] = ACTIONS(29),
    [anon_sym_append] = ACTIONS(29),
    [anon_sym_assign] = ACTIONS(29),
    [anon_sym_associate] = ACTIONS(29),
    [anon_sym_audit_control] = ACTIONS(29),
    [anon_sym_audit_write] = ACTIONS(29),
    [anon_sym_bell] = ACTIONS(29),
    [anon_sym_bind] = ACTIONS(29),
    [anon_sym_check_context] = ACTIONS(29),
    [anon_sym_chfn] = ACTIONS(29),
    [anon_sym_chown] = ACTIONS(29),
    [anon_sym_chparent] = ACTIONS(29),
    [anon_sym_chprop] = ACTIONS(32),
    [anon_sym_chproplist] = ACTIONS(29),
    [anon_sym_chselection] = ACTIONS(29),
    [anon_sym_chsh] = ACTIONS(29),
    [anon_sym_chstack] = ACTIONS(29),
    [anon_sym_clientcomevent] = ACTIONS(29),
    [anon_sym_compute_av] = ACTIONS(29),
    [anon_sym_compute_create] = ACTIONS(29),
    [anon_sym_compute_member] = ACTIONS(29),
    [anon_sym_compute_relabel] = ACTIONS(29),
    [anon_sym_compute_user] = ACTIONS(29),
    [anon_sym_connect] = ACTIONS(32),
    [anon_sym_connectto] = ACTIONS(29),
    [anon_sym_copy] = ACTIONS(29),
    [anon_sym_create] = ACTIONS(32),
    [anon_sym_createglyph] = ACTIONS(29),
    [anon_sym_crontab] = ACTIONS(29),
    [anon_sym_ctrllife] = ACTIONS(29),
    [anon_sym_dac_override] = ACTIONS(29),
    [anon_sym_dac_read_search] = ACTIONS(29),
    [anon_sym_destroy] = ACTIONS(29),
    [anon_sym_draw] = ACTIONS(32),
    [anon_sym_drawevent] = ACTIONS(29),
    [anon_sym_dyntransition] = ACTIONS(29),
    [anon_sym_emutramp] = ACTIONS(29),
    [anon_sym_enforce_dest] = ACTIONS(29),
    [anon_sym_enqueue] = ACTIONS(29),
    [anon_sym_entrypoint] = ACTIONS(29),
    [anon_sym_enumerate] = ACTIONS(29),
    [anon_sym_execheap] = ACTIONS(29),
    [anon_sym_execmem] = ACTIONS(29),
    [anon_sym_execmod] = ACTIONS(29),
    [anon_sym_execstack] = ACTIONS(29),
    [anon_sym_execute] = ACTIONS(32),
    [anon_sym_execute_no_trans] = ACTIONS(29),
    [anon_sym_extensionevent] = ACTIONS(29),
    [anon_sym_fork] = ACTIONS(29),
    [anon_sym_fowner] = ACTIONS(29),
    [anon_sym_free] = ACTIONS(29),
    [anon_sym_fsetid] = ACTIONS(29),
    [anon_sym_getattr] = ACTIONS(29),
    [anon_sym_getcap] = ACTIONS(29),
    [anon_sym_getfontpath] = ACTIONS(29),
    [anon_sym_getgrp] = ACTIONS(29),
    [anon_sym_gethost] = ACTIONS(32),
    [anon_sym_gethostlist] = ACTIONS(29),
    [anon_sym_getopt] = ACTIONS(29),
    [anon_sym_getpgid] = ACTIONS(29),
    [anon_sym_getpwd] = ACTIONS(29),
    [anon_sym_getsched] = ACTIONS(29),
    [anon_sym_getsession] = ACTIONS(29),
    [anon_sym_getstat] = ACTIONS(29),
    [anon_sym_grab] = ACTIONS(29),
    [anon_sym_inputevent] = ACTIONS(29),
    [anon_sym_install] = ACTIONS(29),
    [anon_sym_ioctl] = ACTIONS(29),
    [anon_sym_ipc_info] = ACTIONS(29),
    [anon_sym_ipc_lock] = ACTIONS(29),
    [anon_sym_ipc_owner] = ACTIONS(29),
    [anon_sym_kill] = ACTIONS(29),
    [anon_sym_lease] = ACTIONS(29),
    [anon_sym_link] = ACTIONS(29),
    [anon_sym_linux_immutable] = ACTIONS(29),
    [anon_sym_list] = ACTIONS(32),
    [anon_sym_listen] = ACTIONS(29),
    [anon_sym_listprop] = ACTIONS(29),
    [anon_sym_load] = ACTIONS(32),
    [anon_sym_load_policy] = ACTIONS(29),
    [anon_sym_lock] = ACTIONS(29),
    [anon_sym_lookup] = ACTIONS(29),
    [anon_sym_map] = ACTIONS(29),
    [anon_sym_mknod] = ACTIONS(29),
    [anon_sym_mmap_zero] = ACTIONS(29),
    [anon_sym_mount] = ACTIONS(32),
    [anon_sym_mounton] = ACTIONS(29),
    [anon_sym_mousemotion] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(29),
    [anon_sym_mprotect] = ACTIONS(29),
    [anon_sym_name_bind] = ACTIONS(29),
    [anon_sym_name_connect] = ACTIONS(29),
    [anon_sym_net_admin] = ACTIONS(29),
    [anon_sym_net_bind_service] = ACTIONS(29),
    [anon_sym_net_broadcast] = ACTIONS(29),
    [anon_sym_net_raw] = ACTIONS(29),
    [anon_sym_newconn] = ACTIONS(29),
    [anon_sym_nlmsg_read] = ACTIONS(32),
    [anon_sym_nlmsg_readpriv] = ACTIONS(29),
    [anon_sym_nlmsg_relay] = ACTIONS(29),
    [anon_sym_nlmsg_write] = ACTIONS(29),
    [anon_sym_noatsecure] = ACTIONS(29),
    [anon_sym_node_bind] = ACTIONS(29),
    [anon_sym_pageexec] = ACTIONS(29),
    [anon_sym_passivegrab] = ACTIONS(29),
    [anon_sym_polmatch] = ACTIONS(29),
    [anon_sym_ptrace] = ACTIONS(29),
    [anon_sym_query] = ACTIONS(29),
    [anon_sym_quotaget] = ACTIONS(29),
    [anon_sym_quotamod] = ACTIONS(29),
    [anon_sym_quotaon] = ACTIONS(29),
    [anon_sym_randexec] = ACTIONS(29),
    [anon_sym_randmmap] = ACTIONS(29),
    [anon_sym_rawip_recv] = ACTIONS(29),
    [anon_sym_rawip_send] = ACTIONS(29),
    [anon_sym_read] = ACTIONS(29),
    [anon_sym_receive] = ACTIONS(29),
    [anon_sym_recv] = ACTIONS(32),
    [anon_sym_recv_msg] = ACTIONS(29),
    [anon_sym_recvfrom] = ACTIONS(29),
    [anon_sym_relabelfrom] = ACTIONS(29),
    [anon_sym_relabelinput] = ACTIONS(29),
    [anon_sym_relabelto] = ACTIONS(29),
    [anon_sym_remount] = ACTIONS(29),
    [anon_sym_remove_name] = ACTIONS(29),
    [anon_sym_rename] = ACTIONS(29),
    [anon_sym_reparent] = ACTIONS(29),
    [anon_sym_rlimitinh] = ACTIONS(29),
    [anon_sym_rmdir] = ACTIONS(29),
    [anon_sym_rootok] = ACTIONS(29),
    [anon_sym_screensaver] = ACTIONS(29),
    [anon_sym_search] = ACTIONS(29),
    [anon_sym_segmexec] = ACTIONS(29),
    [anon_sym_send] = ACTIONS(32),
    [anon_sym_send_msg] = ACTIONS(29),
    [anon_sym_sendto] = ACTIONS(29),
    [anon_sym_serverchangeevent] = ACTIONS(29),
    [anon_sym_setattr] = ACTIONS(29),
    [anon_sym_setbool] = ACTIONS(29),
    [anon_sym_setcap] = ACTIONS(29),
    [anon_sym_setcheckreqprot] = ACTIONS(29),
    [anon_sym_setcontext] = ACTIONS(29),
    [anon_sym_setcurrent] = ACTIONS(29),
    [anon_sym_setenforce] = ACTIONS(29),
    [anon_sym_setexec] = ACTIONS(29),
    [anon_sym_setfocus] = ACTIONS(29),
    [anon_sym_setfontpath] = ACTIONS(29),
    [anon_sym_setfscreate] = ACTIONS(29),
    [anon_sym_setgid] = ACTIONS(29),
    [anon_sym_sethostlist] = ACTIONS(29),
    [anon_sym_setkeycreate] = ACTIONS(29),
    [anon_sym_setopt] = ACTIONS(29),
    [anon_sym_setpcap] = ACTIONS(29),
    [anon_sym_setpgid] = ACTIONS(29),
    [anon_sym_setrlimit] = ACTIONS(29),
    [anon_sym_setsched] = ACTIONS(29),
    [anon_sym_setsecparam] = ACTIONS(29),
    [anon_sym_setuid] = ACTIONS(29),
    [anon_sym_share] = ACTIONS(29),
    [anon_sym_shmemgrp] = ACTIONS(29),
    [anon_sym_shmemhost] = ACTIONS(29),
    [anon_sym_shmempwd] = ACTIONS(29),
    [anon_sym_shutdown] = ACTIONS(29),
    [anon_sym_sigchld] = ACTIONS(29),
    [anon_sym_siginh] = ACTIONS(29),
    [anon_sym_sigkill] = ACTIONS(29),
    [anon_sym_signal] = ACTIONS(29),
    [anon_sym_signull] = ACTIONS(29),
    [anon_sym_sigstop] = ACTIONS(29),
    [anon_sym_store] = ACTIONS(29),
    [anon_sym_swapon] = ACTIONS(29),
    [anon_sym_sys_admin] = ACTIONS(29),
    [anon_sym_sys_boot] = ACTIONS(29),
    [anon_sym_sys_chroot] = ACTIONS(29),
    [anon_sym_sys_module] = ACTIONS(29),
    [anon_sym_sys_nice] = ACTIONS(29),
    [anon_sym_sys_pacct] = ACTIONS(29),
    [anon_sym_sys_ptrace] = ACTIONS(29),
    [anon_sym_sys_rawio] = ACTIONS(29),
    [anon_sym_sys_resource] = ACTIONS(29),
    [anon_sym_sys_time] = ACTIONS(29),
    [anon_sym_sys_tty_config] = ACTIONS(29),
    [anon_sym_syslog_console] = ACTIONS(29),
    [anon_sym_syslog_mod] = ACTIONS(29),
    [anon_sym_syslog_read] = ACTIONS(29),
    [anon_sym_tcp_recv] = ACTIONS(29),
    [anon_sym_tcp_send] = ACTIONS(29),
    [anon_sym_transition] = ACTIONS(29),
    [anon_sym_transparent] = ACTIONS(29),
    [anon_sym_udp_recv] = ACTIONS(29),
    [anon_sym_udp_send] = ACTIONS(29),
    [anon_sym_ungrab] = ACTIONS(29),
    [anon_sym_uninstall] = ACTIONS(29),
    [anon_sym_unix_read] = ACTIONS(29),
    [anon_sym_unix_write] = ACTIONS(29),
    [anon_sym_unlink] = ACTIONS(29),
    [anon_sym_unmap] = ACTIONS(29),
    [anon_sym_unmount] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_view] = ACTIONS(29),
    [anon_sym_warppointer] = ACTIONS(29),
    [anon_sym_windowchangeevent] = ACTIONS(29),
    [anon_sym_windowchangerequest] = ACTIONS(29),
    [anon_sym_write] = ACTIONS(29),
  },
  [5] = {
    [sym_permissions] = STATE(13),
    [aux_sym_permission_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_passwd] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_accept] = ACTIONS(39),
    [anon_sym_acceptfrom] = ACTIONS(37),
    [anon_sym_acquire_svc] = ACTIONS(37),
    [anon_sym_activegrab] = ACTIONS(37),
    [anon_sym_add_name] = ACTIONS(37),
    [anon_sym_addchild] = ACTIONS(37),
    [anon_sym_admin] = ACTIONS(37),
    [anon_sym_append] = ACTIONS(37),
    [anon_sym_assign] = ACTIONS(37),
    [anon_sym_associate] = ACTIONS(37),
    [anon_sym_audit_control] = ACTIONS(37),
    [anon_sym_audit_write] = ACTIONS(37),
    [anon_sym_bell] = ACTIONS(37),
    [anon_sym_bind] = ACTIONS(37),
    [anon_sym_check_context] = ACTIONS(37),
    [anon_sym_chfn] = ACTIONS(37),
    [anon_sym_chown] = ACTIONS(37),
    [anon_sym_chparent] = ACTIONS(37),
    [anon_sym_chprop] = ACTIONS(39),
    [anon_sym_chproplist] = ACTIONS(37),
    [anon_sym_chselection] = ACTIONS(37),
    [anon_sym_chsh] = ACTIONS(37),
    [anon_sym_chstack] = ACTIONS(37),
    [anon_sym_clientcomevent] = ACTIONS(37),
    [anon_sym_compute_av] = ACTIONS(37),
    [anon_sym_compute_create] = ACTIONS(37),
    [anon_sym_compute_member] = ACTIONS(37),
    [anon_sym_compute_relabel] = ACTIONS(37),
    [anon_sym_compute_user] = ACTIONS(37),
    [anon_sym_connect] = ACTIONS(39),
    [anon_sym_connectto] = ACTIONS(37),
    [anon_sym_copy] = ACTIONS(37),
    [anon_sym_create] = ACTIONS(39),
    [anon_sym_createglyph] = ACTIONS(37),
    [anon_sym_crontab] = ACTIONS(37),
    [anon_sym_ctrllife] = ACTIONS(37),
    [anon_sym_dac_override] = ACTIONS(37),
    [anon_sym_dac_read_search] = ACTIONS(37),
    [anon_sym_destroy] = ACTIONS(37),
    [anon_sym_draw] = ACTIONS(39),
    [anon_sym_drawevent] = ACTIONS(37),
    [anon_sym_dyntransition] = ACTIONS(37),
    [anon_sym_emutramp] = ACTIONS(37),
    [anon_sym_enforce_dest] = ACTIONS(37),
    [anon_sym_enqueue] = ACTIONS(37),
    [anon_sym_entrypoint] = ACTIONS(37),
    [anon_sym_enumerate] = ACTIONS(37),
    [anon_sym_execheap] = ACTIONS(37),
    [anon_sym_execmem] = ACTIONS(37),
    [anon_sym_execmod] = ACTIONS(37),
    [anon_sym_execstack] = ACTIONS(37),
    [anon_sym_execute] = ACTIONS(39),
    [anon_sym_execute_no_trans] = ACTIONS(37),
    [anon_sym_extensionevent] = ACTIONS(37),
    [anon_sym_fork] = ACTIONS(37),
    [anon_sym_fowner] = ACTIONS(37),
    [anon_sym_free] = ACTIONS(37),
    [anon_sym_fsetid] = ACTIONS(37),
    [anon_sym_getattr] = ACTIONS(37),
    [anon_sym_getcap] = ACTIONS(37),
    [anon_sym_getfontpath] = ACTIONS(37),
    [anon_sym_getgrp] = ACTIONS(37),
    [anon_sym_gethost] = ACTIONS(39),
    [anon_sym_gethostlist] = ACTIONS(37),
    [anon_sym_getopt] = ACTIONS(37),
    [anon_sym_getpgid] = ACTIONS(37),
    [anon_sym_getpwd] = ACTIONS(37),
    [anon_sym_getsched] = ACTIONS(37),
    [anon_sym_getsession] = ACTIONS(37),
    [anon_sym_getstat] = ACTIONS(37),
    [anon_sym_grab] = ACTIONS(37),
    [anon_sym_inputevent] = ACTIONS(37),
    [anon_sym_install] = ACTIONS(37),
    [anon_sym_ioctl] = ACTIONS(37),
    [anon_sym_ipc_info] = ACTIONS(37),
    [anon_sym_ipc_lock] = ACTIONS(37),
    [anon_sym_ipc_owner] = ACTIONS(37),
    [anon_sym_kill] = ACTIONS(37),
    [anon_sym_lease] = ACTIONS(37),
    [anon_sym_link] = ACTIONS(37),
    [anon_sym_linux_immutable] = ACTIONS(37),
    [anon_sym_list] = ACTIONS(39),
    [anon_sym_listen] = ACTIONS(37),
    [anon_sym_listprop] = ACTIONS(37),
    [anon_sym_load] = ACTIONS(39),
    [anon_sym_load_policy] = ACTIONS(37),
    [anon_sym_lock] = ACTIONS(37),
    [anon_sym_lookup] = ACTIONS(37),
    [anon_sym_map] = ACTIONS(37),
    [anon_sym_mknod] = ACTIONS(37),
    [anon_sym_mmap_zero] = ACTIONS(37),
    [anon_sym_mount] = ACTIONS(39),
    [anon_sym_mounton] = ACTIONS(37),
    [anon_sym_mousemotion] = ACTIONS(37),
    [anon_sym_move] = ACTIONS(37),
    [anon_sym_mprotect] = ACTIONS(37),
    [anon_sym_name_bind] = ACTIONS(37),
    [anon_sym_name_connect] = ACTIONS(37),
    [anon_sym_net_admin] = ACTIONS(37),
    [anon_sym_net_bind_service] = ACTIONS(37),
    [anon_sym_net_broadcast] = ACTIONS(37),
    [anon_sym_net_raw] = ACTIONS(37),
    [anon_sym_newconn] = ACTIONS(37),
    [anon_sym_nlmsg_read] = ACTIONS(39),
    [anon_sym_nlmsg_readpriv] = ACTIONS(37),
    [anon_sym_nlmsg_relay] = ACTIONS(37),
    [anon_sym_nlmsg_write] = ACTIONS(37),
    [anon_sym_noatsecure] = ACTIONS(37),
    [anon_sym_node_bind] = ACTIONS(37),
    [anon_sym_pageexec] = ACTIONS(37),
    [anon_sym_passivegrab] = ACTIONS(37),
    [anon_sym_polmatch] = ACTIONS(37),
    [anon_sym_ptrace] = ACTIONS(37),
    [anon_sym_query] = ACTIONS(37),
    [anon_sym_quotaget] = ACTIONS(37),
    [anon_sym_quotamod] = ACTIONS(37),
    [anon_sym_quotaon] = ACTIONS(37),
    [anon_sym_randexec] = ACTIONS(37),
    [anon_sym_randmmap] = ACTIONS(37),
    [anon_sym_rawip_recv] = ACTIONS(37),
    [anon_sym_rawip_send] = ACTIONS(37),
    [anon_sym_read] = ACTIONS(37),
    [anon_sym_receive] = ACTIONS(37),
    [anon_sym_recv] = ACTIONS(39),
    [anon_sym_recv_msg] = ACTIONS(37),
    [anon_sym_recvfrom] = ACTIONS(37),
    [anon_sym_relabelfrom] = ACTIONS(37),
    [anon_sym_relabelinput] = ACTIONS(37),
    [anon_sym_relabelto] = ACTIONS(37),
    [anon_sym_remount] = ACTIONS(37),
    [anon_sym_remove_name] = ACTIONS(37),
    [anon_sym_rename] = ACTIONS(37),
    [anon_sym_reparent] = ACTIONS(37),
    [anon_sym_rlimitinh] = ACTIONS(37),
    [anon_sym_rmdir] = ACTIONS(37),
    [anon_sym_rootok] = ACTIONS(37),
    [anon_sym_screensaver] = ACTIONS(37),
    [anon_sym_search] = ACTIONS(37),
    [anon_sym_segmexec] = ACTIONS(37),
    [anon_sym_send] = ACTIONS(39),
    [anon_sym_send_msg] = ACTIONS(37),
    [anon_sym_sendto] = ACTIONS(37),
    [anon_sym_serverchangeevent] = ACTIONS(37),
    [anon_sym_setattr] = ACTIONS(37),
    [anon_sym_setbool] = ACTIONS(37),
    [anon_sym_setcap] = ACTIONS(37),
    [anon_sym_setcheckreqprot] = ACTIONS(37),
    [anon_sym_setcontext] = ACTIONS(37),
    [anon_sym_setcurrent] = ACTIONS(37),
    [anon_sym_setenforce] = ACTIONS(37),
    [anon_sym_setexec] = ACTIONS(37),
    [anon_sym_setfocus] = ACTIONS(37),
    [anon_sym_setfontpath] = ACTIONS(37),
    [anon_sym_setfscreate] = ACTIONS(37),
    [anon_sym_setgid] = ACTIONS(37),
    [anon_sym_sethostlist] = ACTIONS(37),
    [anon_sym_setkeycreate] = ACTIONS(37),
    [anon_sym_setopt] = ACTIONS(37),
    [anon_sym_setpcap] = ACTIONS(37),
    [anon_sym_setpgid] = ACTIONS(37),
    [anon_sym_setrlimit] = ACTIONS(37),
    [anon_sym_setsched] = ACTIONS(37),
    [anon_sym_setsecparam] = ACTIONS(37),
    [anon_sym_setuid] = ACTIONS(37),
    [anon_sym_share] = ACTIONS(37),
    [anon_sym_shmemgrp] = ACTIONS(37),
    [anon_sym_shmemhost] = ACTIONS(37),
    [anon_sym_shmempwd] = ACTIONS(37),
    [anon_sym_shutdown] = ACTIONS(37),
    [anon_sym_sigchld] = ACTIONS(37),
    [anon_sym_siginh] = ACTIONS(37),
    [anon_sym_sigkill] = ACTIONS(37),
    [anon_sym_signal] = ACTIONS(37),
    [anon_sym_signull] = ACTIONS(37),
    [anon_sym_sigstop] = ACTIONS(37),
    [anon_sym_store] = ACTIONS(37),
    [anon_sym_swapon] = ACTIONS(37),
    [anon_sym_sys_admin] = ACTIONS(37),
    [anon_sym_sys_boot] = ACTIONS(37),
    [anon_sym_sys_chroot] = ACTIONS(37),
    [anon_sym_sys_module] = ACTIONS(37),
    [anon_sym_sys_nice] = ACTIONS(37),
    [anon_sym_sys_pacct] = ACTIONS(37),
    [anon_sym_sys_ptrace] = ACTIONS(37),
    [anon_sym_sys_rawio] = ACTIONS(37),
    [anon_sym_sys_resource] = ACTIONS(37),
    [anon_sym_sys_time] = ACTIONS(37),
    [anon_sym_sys_tty_config] = ACTIONS(37),
    [anon_sym_syslog_console] = ACTIONS(37),
    [anon_sym_syslog_mod] = ACTIONS(37),
    [anon_sym_syslog_read] = ACTIONS(37),
    [anon_sym_tcp_recv] = ACTIONS(37),
    [anon_sym_tcp_send] = ACTIONS(37),
    [anon_sym_transition] = ACTIONS(37),
    [anon_sym_transparent] = ACTIONS(37),
    [anon_sym_udp_recv] = ACTIONS(37),
    [anon_sym_udp_send] = ACTIONS(37),
    [anon_sym_ungrab] = ACTIONS(37),
    [anon_sym_uninstall] = ACTIONS(37),
    [anon_sym_unix_read] = ACTIONS(37),
    [anon_sym_unix_write] = ACTIONS(37),
    [anon_sym_unlink] = ACTIONS(37),
    [anon_sym_unmap] = ACTIONS(37),
    [anon_sym_unmount] = ACTIONS(37),
    [anon_sym_use] = ACTIONS(37),
    [anon_sym_view] = ACTIONS(37),
    [anon_sym_warppointer] = ACTIONS(37),
    [anon_sym_windowchangeevent] = ACTIONS(37),
    [anon_sym_windowchangerequest] = ACTIONS(37),
    [anon_sym_write] = ACTIONS(37),
  },
  [7] = {
    [sym_permissions] = STATE(13),
    [aux_sym_permission_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_passwd] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_accept] = ACTIONS(43),
    [anon_sym_acceptfrom] = ACTIONS(41),
    [anon_sym_acquire_svc] = ACTIONS(41),
    [anon_sym_activegrab] = ACTIONS(41),
    [anon_sym_add_name] = ACTIONS(41),
    [anon_sym_addchild] = ACTIONS(41),
    [anon_sym_admin] = ACTIONS(41),
    [anon_sym_append] = ACTIONS(41),
    [anon_sym_assign] = ACTIONS(41),
    [anon_sym_associate] = ACTIONS(41),
    [anon_sym_audit_control] = ACTIONS(41),
    [anon_sym_audit_write] = ACTIONS(41),
    [anon_sym_bell] = ACTIONS(41),
    [anon_sym_bind] = ACTIONS(41),
    [anon_sym_check_context] = ACTIONS(41),
    [anon_sym_chfn] = ACTIONS(41),
    [anon_sym_chown] = ACTIONS(41),
    [anon_sym_chparent] = ACTIONS(41),
    [anon_sym_chprop] = ACTIONS(43),
    [anon_sym_chproplist] = ACTIONS(41),
    [anon_sym_chselection] = ACTIONS(41),
    [anon_sym_chsh] = ACTIONS(41),
    [anon_sym_chstack] = ACTIONS(41),
    [anon_sym_clientcomevent] = ACTIONS(41),
    [anon_sym_compute_av] = ACTIONS(41),
    [anon_sym_compute_create] = ACTIONS(41),
    [anon_sym_compute_member] = ACTIONS(41),
    [anon_sym_compute_relabel] = ACTIONS(41),
    [anon_sym_compute_user] = ACTIONS(41),
    [anon_sym_connect] = ACTIONS(43),
    [anon_sym_connectto] = ACTIONS(41),
    [anon_sym_copy] = ACTIONS(41),
    [anon_sym_create] = ACTIONS(43),
    [anon_sym_createglyph] = ACTIONS(41),
    [anon_sym_crontab] = ACTIONS(41),
    [anon_sym_ctrllife] = ACTIONS(41),
    [anon_sym_dac_override] = ACTIONS(41),
    [anon_sym_dac_read_search] = ACTIONS(41),
    [anon_sym_destroy] = ACTIONS(41),
    [anon_sym_draw] = ACTIONS(43),
    [anon_sym_drawevent] = ACTIONS(41),
    [anon_sym_dyntransition] = ACTIONS(41),
    [anon_sym_emutramp] = ACTIONS(41),
    [anon_sym_enforce_dest] = ACTIONS(41),
    [anon_sym_enqueue] = ACTIONS(41),
    [anon_sym_entrypoint] = ACTIONS(41),
    [anon_sym_enumerate] = ACTIONS(41),
    [anon_sym_execheap] = ACTIONS(41),
    [anon_sym_execmem] = ACTIONS(41),
    [anon_sym_execmod] = ACTIONS(41),
    [anon_sym_execstack] = ACTIONS(41),
    [anon_sym_execute] = ACTIONS(43),
    [anon_sym_execute_no_trans] = ACTIONS(41),
    [anon_sym_extensionevent] = ACTIONS(41),
    [anon_sym_fork] = ACTIONS(41),
    [anon_sym_fowner] = ACTIONS(41),
    [anon_sym_free] = ACTIONS(41),
    [anon_sym_fsetid] = ACTIONS(41),
    [anon_sym_getattr] = ACTIONS(41),
    [anon_sym_getcap] = ACTIONS(41),
    [anon_sym_getfontpath] = ACTIONS(41),
    [anon_sym_getgrp] = ACTIONS(41),
    [anon_sym_gethost] = ACTIONS(43),
    [anon_sym_gethostlist] = ACTIONS(41),
    [anon_sym_getopt] = ACTIONS(41),
    [anon_sym_getpgid] = ACTIONS(41),
    [anon_sym_getpwd] = ACTIONS(41),
    [anon_sym_getsched] = ACTIONS(41),
    [anon_sym_getsession] = ACTIONS(41),
    [anon_sym_getstat] = ACTIONS(41),
    [anon_sym_grab] = ACTIONS(41),
    [anon_sym_inputevent] = ACTIONS(41),
    [anon_sym_install] = ACTIONS(41),
    [anon_sym_ioctl] = ACTIONS(41),
    [anon_sym_ipc_info] = ACTIONS(41),
    [anon_sym_ipc_lock] = ACTIONS(41),
    [anon_sym_ipc_owner] = ACTIONS(41),
    [anon_sym_kill] = ACTIONS(41),
    [anon_sym_lease] = ACTIONS(41),
    [anon_sym_link] = ACTIONS(41),
    [anon_sym_linux_immutable] = ACTIONS(41),
    [anon_sym_list] = ACTIONS(43),
    [anon_sym_listen] = ACTIONS(41),
    [anon_sym_listprop] = ACTIONS(41),
    [anon_sym_load] = ACTIONS(43),
    [anon_sym_load_policy] = ACTIONS(41),
    [anon_sym_lock] = ACTIONS(41),
    [anon_sym_lookup] = ACTIONS(41),
    [anon_sym_map] = ACTIONS(41),
    [anon_sym_mknod] = ACTIONS(41),
    [anon_sym_mmap_zero] = ACTIONS(41),
    [anon_sym_mount] = ACTIONS(43),
    [anon_sym_mounton] = ACTIONS(41),
    [anon_sym_mousemotion] = ACTIONS(41),
    [anon_sym_move] = ACTIONS(41),
    [anon_sym_mprotect] = ACTIONS(41),
    [anon_sym_name_bind] = ACTIONS(41),
    [anon_sym_name_connect] = ACTIONS(41),
    [anon_sym_net_admin] = ACTIONS(41),
    [anon_sym_net_bind_service] = ACTIONS(41),
    [anon_sym_net_broadcast] = ACTIONS(41),
    [anon_sym_net_raw] = ACTIONS(41),
    [anon_sym_newconn] = ACTIONS(41),
    [anon_sym_nlmsg_read] = ACTIONS(43),
    [anon_sym_nlmsg_readpriv] = ACTIONS(41),
    [anon_sym_nlmsg_relay] = ACTIONS(41),
    [anon_sym_nlmsg_write] = ACTIONS(41),
    [anon_sym_noatsecure] = ACTIONS(41),
    [anon_sym_node_bind] = ACTIONS(41),
    [anon_sym_pageexec] = ACTIONS(41),
    [anon_sym_passivegrab] = ACTIONS(41),
    [anon_sym_polmatch] = ACTIONS(41),
    [anon_sym_ptrace] = ACTIONS(41),
    [anon_sym_query] = ACTIONS(41),
    [anon_sym_quotaget] = ACTIONS(41),
    [anon_sym_quotamod] = ACTIONS(41),
    [anon_sym_quotaon] = ACTIONS(41),
    [anon_sym_randexec] = ACTIONS(41),
    [anon_sym_randmmap] = ACTIONS(41),
    [anon_sym_rawip_recv] = ACTIONS(41),
    [anon_sym_rawip_send] = ACTIONS(41),
    [anon_sym_read] = ACTIONS(41),
    [anon_sym_receive] = ACTIONS(41),
    [anon_sym_recv] = ACTIONS(43),
    [anon_sym_recv_msg] = ACTIONS(41),
    [anon_sym_recvfrom] = ACTIONS(41),
    [anon_sym_relabelfrom] = ACTIONS(41),
    [anon_sym_relabelinput] = ACTIONS(41),
    [anon_sym_relabelto] = ACTIONS(41),
    [anon_sym_remount] = ACTIONS(41),
    [anon_sym_remove_name] = ACTIONS(41),
    [anon_sym_rename] = ACTIONS(41),
    [anon_sym_reparent] = ACTIONS(41),
    [anon_sym_rlimitinh] = ACTIONS(41),
    [anon_sym_rmdir] = ACTIONS(41),
    [anon_sym_rootok] = ACTIONS(41),
    [anon_sym_screensaver] = ACTIONS(41),
    [anon_sym_search] = ACTIONS(41),
    [anon_sym_segmexec] = ACTIONS(41),
    [anon_sym_send] = ACTIONS(43),
    [anon_sym_send_msg] = ACTIONS(41),
    [anon_sym_sendto] = ACTIONS(41),
    [anon_sym_serverchangeevent] = ACTIONS(41),
    [anon_sym_setattr] = ACTIONS(41),
    [anon_sym_setbool] = ACTIONS(41),
    [anon_sym_setcap] = ACTIONS(41),
    [anon_sym_setcheckreqprot] = ACTIONS(41),
    [anon_sym_setcontext] = ACTIONS(41),
    [anon_sym_setcurrent] = ACTIONS(41),
    [anon_sym_setenforce] = ACTIONS(41),
    [anon_sym_setexec] = ACTIONS(41),
    [anon_sym_setfocus] = ACTIONS(41),
    [anon_sym_setfontpath] = ACTIONS(41),
    [anon_sym_setfscreate] = ACTIONS(41),
    [anon_sym_setgid] = ACTIONS(41),
    [anon_sym_sethostlist] = ACTIONS(41),
    [anon_sym_setkeycreate] = ACTIONS(41),
    [anon_sym_setopt] = ACTIONS(41),
    [anon_sym_setpcap] = ACTIONS(41),
    [anon_sym_setpgid] = ACTIONS(41),
    [anon_sym_setrlimit] = ACTIONS(41),
    [anon_sym_setsched] = ACTIONS(41),
    [anon_sym_setsecparam] = ACTIONS(41),
    [anon_sym_setuid] = ACTIONS(41),
    [anon_sym_share] = ACTIONS(41),
    [anon_sym_shmemgrp] = ACTIONS(41),
    [anon_sym_shmemhost] = ACTIONS(41),
    [anon_sym_shmempwd] = ACTIONS(41),
    [anon_sym_shutdown] = ACTIONS(41),
    [anon_sym_sigchld] = ACTIONS(41),
    [anon_sym_siginh] = ACTIONS(41),
    [anon_sym_sigkill] = ACTIONS(41),
    [anon_sym_signal] = ACTIONS(41),
    [anon_sym_signull] = ACTIONS(41),
    [anon_sym_sigstop] = ACTIONS(41),
    [anon_sym_store] = ACTIONS(41),
    [anon_sym_swapon] = ACTIONS(41),
    [anon_sym_sys_admin] = ACTIONS(41),
    [anon_sym_sys_boot] = ACTIONS(41),
    [anon_sym_sys_chroot] = ACTIONS(41),
    [anon_sym_sys_module] = ACTIONS(41),
    [anon_sym_sys_nice] = ACTIONS(41),
    [anon_sym_sys_pacct] = ACTIONS(41),
    [anon_sym_sys_ptrace] = ACTIONS(41),
    [anon_sym_sys_rawio] = ACTIONS(41),
    [anon_sym_sys_resource] = ACTIONS(41),
    [anon_sym_sys_time] = ACTIONS(41),
    [anon_sym_sys_tty_config] = ACTIONS(41),
    [anon_sym_syslog_console] = ACTIONS(41),
    [anon_sym_syslog_mod] = ACTIONS(41),
    [anon_sym_syslog_read] = ACTIONS(41),
    [anon_sym_tcp_recv] = ACTIONS(41),
    [anon_sym_tcp_send] = ACTIONS(41),
    [anon_sym_transition] = ACTIONS(41),
    [anon_sym_transparent] = ACTIONS(41),
    [anon_sym_udp_recv] = ACTIONS(41),
    [anon_sym_udp_send] = ACTIONS(41),
    [anon_sym_ungrab] = ACTIONS(41),
    [anon_sym_uninstall] = ACTIONS(41),
    [anon_sym_unix_read] = ACTIONS(41),
    [anon_sym_unix_write] = ACTIONS(41),
    [anon_sym_unlink] = ACTIONS(41),
    [anon_sym_unmap] = ACTIONS(41),
    [anon_sym_unmount] = ACTIONS(41),
    [anon_sym_use] = ACTIONS(41),
    [anon_sym_view] = ACTIONS(41),
    [anon_sym_warppointer] = ACTIONS(41),
    [anon_sym_windowchangeevent] = ACTIONS(41),
    [anon_sym_windowchangerequest] = ACTIONS(41),
    [anon_sym_write] = ACTIONS(41),
  },
  [9] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_passwd] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_accept] = ACTIONS(47),
    [anon_sym_acceptfrom] = ACTIONS(45),
    [anon_sym_acquire_svc] = ACTIONS(45),
    [anon_sym_activegrab] = ACTIONS(45),
    [anon_sym_add_name] = ACTIONS(45),
    [anon_sym_addchild] = ACTIONS(45),
    [anon_sym_admin] = ACTIONS(45),
    [anon_sym_append] = ACTIONS(45),
    [anon_sym_assign] = ACTIONS(45),
    [anon_sym_associate] = ACTIONS(45),
    [anon_sym_audit_control] = ACTIONS(45),
    [anon_sym_audit_write] = ACTIONS(45),
    [anon_sym_bell] = ACTIONS(45),
    [anon_sym_bind] = ACTIONS(45),
    [anon_sym_check_context] = ACTIONS(45),
    [anon_sym_chfn] = ACTIONS(45),
    [anon_sym_chown] = ACTIONS(45),
    [anon_sym_chparent] = ACTIONS(45),
    [anon_sym_chprop] = ACTIONS(47),
    [anon_sym_chproplist] = ACTIONS(45),
    [anon_sym_chselection] = ACTIONS(45),
    [anon_sym_chsh] = ACTIONS(45),
    [anon_sym_chstack] = ACTIONS(45),
    [anon_sym_clientcomevent] = ACTIONS(45),
    [anon_sym_compute_av] = ACTIONS(45),
    [anon_sym_compute_create] = ACTIONS(45),
    [anon_sym_compute_member] = ACTIONS(45),
    [anon_sym_compute_relabel] = ACTIONS(45),
    [anon_sym_compute_user] = ACTIONS(45),
    [anon_sym_connect] = ACTIONS(47),
    [anon_sym_connectto] = ACTIONS(45),
    [anon_sym_copy] = ACTIONS(45),
    [anon_sym_create] = ACTIONS(47),
    [anon_sym_createglyph] = ACTIONS(45),
    [anon_sym_crontab] = ACTIONS(45),
    [anon_sym_ctrllife] = ACTIONS(45),
    [anon_sym_dac_override] = ACTIONS(45),
    [anon_sym_dac_read_search] = ACTIONS(45),
    [anon_sym_destroy] = ACTIONS(45),
    [anon_sym_draw] = ACTIONS(47),
    [anon_sym_drawevent] = ACTIONS(45),
    [anon_sym_dyntransition] = ACTIONS(45),
    [anon_sym_emutramp] = ACTIONS(45),
    [anon_sym_enforce_dest] = ACTIONS(45),
    [anon_sym_enqueue] = ACTIONS(45),
    [anon_sym_entrypoint] = ACTIONS(45),
    [anon_sym_enumerate] = ACTIONS(45),
    [anon_sym_execheap] = ACTIONS(45),
    [anon_sym_execmem] = ACTIONS(45),
    [anon_sym_execmod] = ACTIONS(45),
    [anon_sym_execstack] = ACTIONS(45),
    [anon_sym_execute] = ACTIONS(47),
    [anon_sym_execute_no_trans] = ACTIONS(45),
    [anon_sym_extensionevent] = ACTIONS(45),
    [anon_sym_fork] = ACTIONS(45),
    [anon_sym_fowner] = ACTIONS(45),
    [anon_sym_free] = ACTIONS(45),
    [anon_sym_fsetid] = ACTIONS(45),
    [anon_sym_getattr] = ACTIONS(45),
    [anon_sym_getcap] = ACTIONS(45),
    [anon_sym_getfontpath] = ACTIONS(45),
    [anon_sym_getgrp] = ACTIONS(45),
    [anon_sym_gethost] = ACTIONS(47),
    [anon_sym_gethostlist] = ACTIONS(45),
    [anon_sym_getopt] = ACTIONS(45),
    [anon_sym_getpgid] = ACTIONS(45),
    [anon_sym_getpwd] = ACTIONS(45),
    [anon_sym_getsched] = ACTIONS(45),
    [anon_sym_getsession] = ACTIONS(45),
    [anon_sym_getstat] = ACTIONS(45),
    [anon_sym_grab] = ACTIONS(45),
    [anon_sym_inputevent] = ACTIONS(45),
    [anon_sym_install] = ACTIONS(45),
    [anon_sym_ioctl] = ACTIONS(45),
    [anon_sym_ipc_info] = ACTIONS(45),
    [anon_sym_ipc_lock] = ACTIONS(45),
    [anon_sym_ipc_owner] = ACTIONS(45),
    [anon_sym_kill] = ACTIONS(45),
    [anon_sym_lease] = ACTIONS(45),
    [anon_sym_link] = ACTIONS(45),
    [anon_sym_linux_immutable] = ACTIONS(45),
    [anon_sym_list] = ACTIONS(47),
    [anon_sym_listen] = ACTIONS(45),
    [anon_sym_listprop] = ACTIONS(45),
    [anon_sym_load] = ACTIONS(47),
    [anon_sym_load_policy] = ACTIONS(45),
    [anon_sym_lock] = ACTIONS(45),
    [anon_sym_lookup] = ACTIONS(45),
    [anon_sym_map] = ACTIONS(45),
    [anon_sym_mknod] = ACTIONS(45),
    [anon_sym_mmap_zero] = ACTIONS(45),
    [anon_sym_mount] = ACTIONS(47),
    [anon_sym_mounton] = ACTIONS(45),
    [anon_sym_mousemotion] = ACTIONS(45),
    [anon_sym_move] = ACTIONS(45),
    [anon_sym_mprotect] = ACTIONS(45),
    [anon_sym_name_bind] = ACTIONS(45),
    [anon_sym_name_connect] = ACTIONS(45),
    [anon_sym_net_admin] = ACTIONS(45),
    [anon_sym_net_bind_service] = ACTIONS(45),
    [anon_sym_net_broadcast] = ACTIONS(45),
    [anon_sym_net_raw] = ACTIONS(45),
    [anon_sym_newconn] = ACTIONS(45),
    [anon_sym_nlmsg_read] = ACTIONS(47),
    [anon_sym_nlmsg_readpriv] = ACTIONS(45),
    [anon_sym_nlmsg_relay] = ACTIONS(45),
    [anon_sym_nlmsg_write] = ACTIONS(45),
    [anon_sym_noatsecure] = ACTIONS(45),
    [anon_sym_node_bind] = ACTIONS(45),
    [anon_sym_pageexec] = ACTIONS(45),
    [anon_sym_passivegrab] = ACTIONS(45),
    [anon_sym_polmatch] = ACTIONS(45),
    [anon_sym_ptrace] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(45),
    [anon_sym_quotaget] = ACTIONS(45),
    [anon_sym_quotamod] = ACTIONS(45),
    [anon_sym_quotaon] = ACTIONS(45),
    [anon_sym_randexec] = ACTIONS(45),
    [anon_sym_randmmap] = ACTIONS(45),
    [anon_sym_rawip_recv] = ACTIONS(45),
    [anon_sym_rawip_send] = ACTIONS(45),
    [anon_sym_read] = ACTIONS(45),
    [anon_sym_receive] = ACTIONS(45),
    [anon_sym_recv] = ACTIONS(47),
    [anon_sym_recv_msg] = ACTIONS(45),
    [anon_sym_recvfrom] = ACTIONS(45),
    [anon_sym_relabelfrom] = ACTIONS(45),
    [anon_sym_relabelinput] = ACTIONS(45),
    [anon_sym_relabelto] = ACTIONS(45),
    [anon_sym_remount] = ACTIONS(45),
    [anon_sym_remove_name] = ACTIONS(45),
    [anon_sym_rename] = ACTIONS(45),
    [anon_sym_reparent] = ACTIONS(45),
    [anon_sym_rlimitinh] = ACTIONS(45),
    [anon_sym_rmdir] = ACTIONS(45),
    [anon_sym_rootok] = ACTIONS(45),
    [anon_sym_screensaver] = ACTIONS(45),
    [anon_sym_search] = ACTIONS(45),
    [anon_sym_segmexec] = ACTIONS(45),
    [anon_sym_send] = ACTIONS(47),
    [anon_sym_send_msg] = ACTIONS(45),
    [anon_sym_sendto] = ACTIONS(45),
    [anon_sym_serverchangeevent] = ACTIONS(45),
    [anon_sym_setattr] = ACTIONS(45),
    [anon_sym_setbool] = ACTIONS(45),
    [anon_sym_setcap] = ACTIONS(45),
    [anon_sym_setcheckreqprot] = ACTIONS(45),
    [anon_sym_setcontext] = ACTIONS(45),
    [anon_sym_setcurrent] = ACTIONS(45),
    [anon_sym_setenforce] = ACTIONS(45),
    [anon_sym_setexec] = ACTIONS(45),
    [anon_sym_setfocus] = ACTIONS(45),
    [anon_sym_setfontpath] = ACTIONS(45),
    [anon_sym_setfscreate] = ACTIONS(45),
    [anon_sym_setgid] = ACTIONS(45),
    [anon_sym_sethostlist] = ACTIONS(45),
    [anon_sym_setkeycreate] = ACTIONS(45),
    [anon_sym_setopt] = ACTIONS(45),
    [anon_sym_setpcap] = ACTIONS(45),
    [anon_sym_setpgid] = ACTIONS(45),
    [anon_sym_setrlimit] = ACTIONS(45),
    [anon_sym_setsched] = ACTIONS(45),
    [anon_sym_setsecparam] = ACTIONS(45),
    [anon_sym_setuid] = ACTIONS(45),
    [anon_sym_share] = ACTIONS(45),
    [anon_sym_shmemgrp] = ACTIONS(45),
    [anon_sym_shmemhost] = ACTIONS(45),
    [anon_sym_shmempwd] = ACTIONS(45),
    [anon_sym_shutdown] = ACTIONS(45),
    [anon_sym_sigchld] = ACTIONS(45),
    [anon_sym_siginh] = ACTIONS(45),
    [anon_sym_sigkill] = ACTIONS(45),
    [anon_sym_signal] = ACTIONS(45),
    [anon_sym_signull] = ACTIONS(45),
    [anon_sym_sigstop] = ACTIONS(45),
    [anon_sym_store] = ACTIONS(45),
    [anon_sym_swapon] = ACTIONS(45),
    [anon_sym_sys_admin] = ACTIONS(45),
    [anon_sym_sys_boot] = ACTIONS(45),
    [anon_sym_sys_chroot] = ACTIONS(45),
    [anon_sym_sys_module] = ACTIONS(45),
    [anon_sym_sys_nice] = ACTIONS(45),
    [anon_sym_sys_pacct] = ACTIONS(45),
    [anon_sym_sys_ptrace] = ACTIONS(45),
    [anon_sym_sys_rawio] = ACTIONS(45),
    [anon_sym_sys_resource] = ACTIONS(45),
    [anon_sym_sys_time] = ACTIONS(45),
    [anon_sym_sys_tty_config] = ACTIONS(45),
    [anon_sym_syslog_console] = ACTIONS(45),
    [anon_sym_syslog_mod] = ACTIONS(45),
    [anon_sym_syslog_read] = ACTIONS(45),
    [anon_sym_tcp_recv] = ACTIONS(45),
    [anon_sym_tcp_send] = ACTIONS(45),
    [anon_sym_transition] = ACTIONS(45),
    [anon_sym_transparent] = ACTIONS(45),
    [anon_sym_udp_recv] = ACTIONS(45),
    [anon_sym_udp_send] = ACTIONS(45),
    [anon_sym_ungrab] = ACTIONS(45),
    [anon_sym_uninstall] = ACTIONS(45),
    [anon_sym_unix_read] = ACTIONS(45),
    [anon_sym_unix_write] = ACTIONS(45),
    [anon_sym_unlink] = ACTIONS(45),
    [anon_sym_unmap] = ACTIONS(45),
    [anon_sym_unmount] = ACTIONS(45),
    [anon_sym_use] = ACTIONS(45),
    [anon_sym_view] = ACTIONS(45),
    [anon_sym_warppointer] = ACTIONS(45),
    [anon_sym_windowchangeevent] = ACTIONS(45),
    [anon_sym_windowchangerequest] = ACTIONS(45),
    [anon_sym_write] = ACTIONS(45),
  },
  [10] = {
    [sym_permissions] = STATE(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [11] = {
    [sym_permissions] = STATE(13),
    [aux_sym_permission_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_passwd] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_accept] = ACTIONS(53),
    [anon_sym_acceptfrom] = ACTIONS(51),
    [anon_sym_acquire_svc] = ACTIONS(51),
    [anon_sym_activegrab] = ACTIONS(51),
    [anon_sym_add_name] = ACTIONS(51),
    [anon_sym_addchild] = ACTIONS(51),
    [anon_sym_admin] = ACTIONS(51),
    [anon_sym_append] = ACTIONS(51),
    [anon_sym_assign] = ACTIONS(51),
    [anon_sym_associate] = ACTIONS(51),
    [anon_sym_audit_control] = ACTIONS(51),
    [anon_sym_audit_write] = ACTIONS(51),
    [anon_sym_bell] = ACTIONS(51),
    [anon_sym_bind] = ACTIONS(51),
    [anon_sym_check_context] = ACTIONS(51),
    [anon_sym_chfn] = ACTIONS(51),
    [anon_sym_chown] = ACTIONS(51),
    [anon_sym_chparent] = ACTIONS(51),
    [anon_sym_chprop] = ACTIONS(53),
    [anon_sym_chproplist] = ACTIONS(51),
    [anon_sym_chselection] = ACTIONS(51),
    [anon_sym_chsh] = ACTIONS(51),
    [anon_sym_chstack] = ACTIONS(51),
    [anon_sym_clientcomevent] = ACTIONS(51),
    [anon_sym_compute_av] = ACTIONS(51),
    [anon_sym_compute_create] = ACTIONS(51),
    [anon_sym_compute_member] = ACTIONS(51),
    [anon_sym_compute_relabel] = ACTIONS(51),
    [anon_sym_compute_user] = ACTIONS(51),
    [anon_sym_connect] = ACTIONS(53),
    [anon_sym_connectto] = ACTIONS(51),
    [anon_sym_copy] = ACTIONS(51),
    [anon_sym_create] = ACTIONS(53),
    [anon_sym_createglyph] = ACTIONS(51),
    [anon_sym_crontab] = ACTIONS(51),
    [anon_sym_ctrllife] = ACTIONS(51),
    [anon_sym_dac_override] = ACTIONS(51),
    [anon_sym_dac_read_search] = ACTIONS(51),
    [anon_sym_destroy] = ACTIONS(51),
    [anon_sym_draw] = ACTIONS(53),
    [anon_sym_drawevent] = ACTIONS(51),
    [anon_sym_dyntransition] = ACTIONS(51),
    [anon_sym_emutramp] = ACTIONS(51),
    [anon_sym_enforce_dest] = ACTIONS(51),
    [anon_sym_enqueue] = ACTIONS(51),
    [anon_sym_entrypoint] = ACTIONS(51),
    [anon_sym_enumerate] = ACTIONS(51),
    [anon_sym_execheap] = ACTIONS(51),
    [anon_sym_execmem] = ACTIONS(51),
    [anon_sym_execmod] = ACTIONS(51),
    [anon_sym_execstack] = ACTIONS(51),
    [anon_sym_execute] = ACTIONS(53),
    [anon_sym_execute_no_trans] = ACTIONS(51),
    [anon_sym_extensionevent] = ACTIONS(51),
    [anon_sym_fork] = ACTIONS(51),
    [anon_sym_fowner] = ACTIONS(51),
    [anon_sym_free] = ACTIONS(51),
    [anon_sym_fsetid] = ACTIONS(51),
    [anon_sym_getattr] = ACTIONS(51),
    [anon_sym_getcap] = ACTIONS(51),
    [anon_sym_getfontpath] = ACTIONS(51),
    [anon_sym_getgrp] = ACTIONS(51),
    [anon_sym_gethost] = ACTIONS(53),
    [anon_sym_gethostlist] = ACTIONS(51),
    [anon_sym_getopt] = ACTIONS(51),
    [anon_sym_getpgid] = ACTIONS(51),
    [anon_sym_getpwd] = ACTIONS(51),
    [anon_sym_getsched] = ACTIONS(51),
    [anon_sym_getsession] = ACTIONS(51),
    [anon_sym_getstat] = ACTIONS(51),
    [anon_sym_grab] = ACTIONS(51),
    [anon_sym_inputevent] = ACTIONS(51),
    [anon_sym_install] = ACTIONS(51),
    [anon_sym_ioctl] = ACTIONS(51),
    [anon_sym_ipc_info] = ACTIONS(51),
    [anon_sym_ipc_lock] = ACTIONS(51),
    [anon_sym_ipc_owner] = ACTIONS(51),
    [anon_sym_kill] = ACTIONS(51),
    [anon_sym_lease] = ACTIONS(51),
    [anon_sym_link] = ACTIONS(51),
    [anon_sym_linux_immutable] = ACTIONS(51),
    [anon_sym_list] = ACTIONS(53),
    [anon_sym_listen] = ACTIONS(51),
    [anon_sym_listprop] = ACTIONS(51),
    [anon_sym_load] = ACTIONS(53),
    [anon_sym_load_policy] = ACTIONS(51),
    [anon_sym_lock] = ACTIONS(51),
    [anon_sym_lookup] = ACTIONS(51),
    [anon_sym_map] = ACTIONS(51),
    [anon_sym_mknod] = ACTIONS(51),
    [anon_sym_mmap_zero] = ACTIONS(51),
    [anon_sym_mount] = ACTIONS(53),
    [anon_sym_mounton] = ACTIONS(51),
    [anon_sym_mousemotion] = ACTIONS(51),
    [anon_sym_move] = ACTIONS(51),
    [anon_sym_mprotect] = ACTIONS(51),
    [anon_sym_name_bind] = ACTIONS(51),
    [anon_sym_name_connect] = ACTIONS(51),
    [anon_sym_net_admin] = ACTIONS(51),
    [anon_sym_net_bind_service] = ACTIONS(51),
    [anon_sym_net_broadcast] = ACTIONS(51),
    [anon_sym_net_raw] = ACTIONS(51),
    [anon_sym_newconn] = ACTIONS(51),
    [anon_sym_nlmsg_read] = ACTIONS(53),
    [anon_sym_nlmsg_readpriv] = ACTIONS(51),
    [anon_sym_nlmsg_relay] = ACTIONS(51),
    [anon_sym_nlmsg_write] = ACTIONS(51),
    [anon_sym_noatsecure] = ACTIONS(51),
    [anon_sym_node_bind] = ACTIONS(51),
    [anon_sym_pageexec] = ACTIONS(51),
    [anon_sym_passivegrab] = ACTIONS(51),
    [anon_sym_polmatch] = ACTIONS(51),
    [anon_sym_ptrace] = ACTIONS(51),
    [anon_sym_query] = ACTIONS(51),
    [anon_sym_quotaget] = ACTIONS(51),
    [anon_sym_quotamod] = ACTIONS(51),
    [anon_sym_quotaon] = ACTIONS(51),
    [anon_sym_randexec] = ACTIONS(51),
    [anon_sym_randmmap] = ACTIONS(51),
    [anon_sym_rawip_recv] = ACTIONS(51),
    [anon_sym_rawip_send] = ACTIONS(51),
    [anon_sym_read] = ACTIONS(51),
    [anon_sym_receive] = ACTIONS(51),
    [anon_sym_recv] = ACTIONS(53),
    [anon_sym_recv_msg] = ACTIONS(51),
    [anon_sym_recvfrom] = ACTIONS(51),
    [anon_sym_relabelfrom] = ACTIONS(51),
    [anon_sym_relabelinput] = ACTIONS(51),
    [anon_sym_relabelto] = ACTIONS(51),
    [anon_sym_remount] = ACTIONS(51),
    [anon_sym_remove_name] = ACTIONS(51),
    [anon_sym_rename] = ACTIONS(51),
    [anon_sym_reparent] = ACTIONS(51),
    [anon_sym_rlimitinh] = ACTIONS(51),
    [anon_sym_rmdir] = ACTIONS(51),
    [anon_sym_rootok] = ACTIONS(51),
    [anon_sym_screensaver] = ACTIONS(51),
    [anon_sym_search] = ACTIONS(51),
    [anon_sym_segmexec] = ACTIONS(51),
    [anon_sym_send] = ACTIONS(53),
    [anon_sym_send_msg] = ACTIONS(51),
    [anon_sym_sendto] = ACTIONS(51),
    [anon_sym_serverchangeevent] = ACTIONS(51),
    [anon_sym_setattr] = ACTIONS(51),
    [anon_sym_setbool] = ACTIONS(51),
    [anon_sym_setcap] = ACTIONS(51),
    [anon_sym_setcheckreqprot] = ACTIONS(51),
    [anon_sym_setcontext] = ACTIONS(51),
    [anon_sym_setcurrent] = ACTIONS(51),
    [anon_sym_setenforce] = ACTIONS(51),
    [anon_sym_setexec] = ACTIONS(51),
    [anon_sym_setfocus] = ACTIONS(51),
    [anon_sym_setfontpath] = ACTIONS(51),
    [anon_sym_setfscreate] = ACTIONS(51),
    [anon_sym_setgid] = ACTIONS(51),
    [anon_sym_sethostlist] = ACTIONS(51),
    [anon_sym_setkeycreate] = ACTIONS(51),
    [anon_sym_setopt] = ACTIONS(51),
    [anon_sym_setpcap] = ACTIONS(51),
    [anon_sym_setpgid] = ACTIONS(51),
    [anon_sym_setrlimit] = ACTIONS(51),
    [anon_sym_setsched] = ACTIONS(51),
    [anon_sym_setsecparam] = ACTIONS(51),
    [anon_sym_setuid] = ACTIONS(51),
    [anon_sym_share] = ACTIONS(51),
    [anon_sym_shmemgrp] = ACTIONS(51),
    [anon_sym_shmemhost] = ACTIONS(51),
    [anon_sym_shmempwd] = ACTIONS(51),
    [anon_sym_shutdown] = ACTIONS(51),
    [anon_sym_sigchld] = ACTIONS(51),
    [anon_sym_siginh] = ACTIONS(51),
    [anon_sym_sigkill] = ACTIONS(51),
    [anon_sym_signal] = ACTIONS(51),
    [anon_sym_signull] = ACTIONS(51),
    [anon_sym_sigstop] = ACTIONS(51),
    [anon_sym_store] = ACTIONS(51),
    [anon_sym_swapon] = ACTIONS(51),
    [anon_sym_sys_admin] = ACTIONS(51),
    [anon_sym_sys_boot] = ACTIONS(51),
    [anon_sym_sys_chroot] = ACTIONS(51),
    [anon_sym_sys_module] = ACTIONS(51),
    [anon_sym_sys_nice] = ACTIONS(51),
    [anon_sym_sys_pacct] = ACTIONS(51),
    [anon_sym_sys_ptrace] = ACTIONS(51),
    [anon_sym_sys_rawio] = ACTIONS(51),
    [anon_sym_sys_resource] = ACTIONS(51),
    [anon_sym_sys_time] = ACTIONS(51),
    [anon_sym_sys_tty_config] = ACTIONS(51),
    [anon_sym_syslog_console] = ACTIONS(51),
    [anon_sym_syslog_mod] = ACTIONS(51),
    [anon_sym_syslog_read] = ACTIONS(51),
    [anon_sym_tcp_recv] = ACTIONS(51),
    [anon_sym_tcp_send] = ACTIONS(51),
    [anon_sym_transition] = ACTIONS(51),
    [anon_sym_transparent] = ACTIONS(51),
    [anon_sym_udp_recv] = ACTIONS(51),
    [anon_sym_udp_send] = ACTIONS(51),
    [anon_sym_ungrab] = ACTIONS(51),
    [anon_sym_uninstall] = ACTIONS(51),
    [anon_sym_unix_read] = ACTIONS(51),
    [anon_sym_unix_write] = ACTIONS(51),
    [anon_sym_unlink] = ACTIONS(51),
    [anon_sym_unmap] = ACTIONS(51),
    [anon_sym_unmount] = ACTIONS(51),
    [anon_sym_use] = ACTIONS(51),
    [anon_sym_view] = ACTIONS(51),
    [anon_sym_warppointer] = ACTIONS(51),
    [anon_sym_windowchangeevent] = ACTIONS(51),
    [anon_sym_windowchangerequest] = ACTIONS(51),
    [anon_sym_write] = ACTIONS(51),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_passwd] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_accept] = ACTIONS(57),
    [anon_sym_acceptfrom] = ACTIONS(55),
    [anon_sym_acquire_svc] = ACTIONS(55),
    [anon_sym_activegrab] = ACTIONS(55),
    [anon_sym_add_name] = ACTIONS(55),
    [anon_sym_addchild] = ACTIONS(55),
    [anon_sym_admin] = ACTIONS(55),
    [anon_sym_append] = ACTIONS(55),
    [anon_sym_assign] = ACTIONS(55),
    [anon_sym_associate] = ACTIONS(55),
    [anon_sym_audit_control] = ACTIONS(55),
    [anon_sym_audit_write] = ACTIONS(55),
    [anon_sym_bell] = ACTIONS(55),
    [anon_sym_bind] = ACTIONS(55),
    [anon_sym_check_context] = ACTIONS(55),
    [anon_sym_chfn] = ACTIONS(55),
    [anon_sym_chown] = ACTIONS(55),
    [anon_sym_chparent] = ACTIONS(55),
    [anon_sym_chprop] = ACTIONS(57),
    [anon_sym_chproplist] = ACTIONS(55),
    [anon_sym_chselection] = ACTIONS(55),
    [anon_sym_chsh] = ACTIONS(55),
    [anon_sym_chstack] = ACTIONS(55),
    [anon_sym_clientcomevent] = ACTIONS(55),
    [anon_sym_compute_av] = ACTIONS(55),
    [anon_sym_compute_create] = ACTIONS(55),
    [anon_sym_compute_member] = ACTIONS(55),
    [anon_sym_compute_relabel] = ACTIONS(55),
    [anon_sym_compute_user] = ACTIONS(55),
    [anon_sym_connect] = ACTIONS(57),
    [anon_sym_connectto] = ACTIONS(55),
    [anon_sym_copy] = ACTIONS(55),
    [anon_sym_create] = ACTIONS(57),
    [anon_sym_createglyph] = ACTIONS(55),
    [anon_sym_crontab] = ACTIONS(55),
    [anon_sym_ctrllife] = ACTIONS(55),
    [anon_sym_dac_override] = ACTIONS(55),
    [anon_sym_dac_read_search] = ACTIONS(55),
    [anon_sym_destroy] = ACTIONS(55),
    [anon_sym_draw] = ACTIONS(57),
    [anon_sym_drawevent] = ACTIONS(55),
    [anon_sym_dyntransition] = ACTIONS(55),
    [anon_sym_emutramp] = ACTIONS(55),
    [anon_sym_enforce_dest] = ACTIONS(55),
    [anon_sym_enqueue] = ACTIONS(55),
    [anon_sym_entrypoint] = ACTIONS(55),
    [anon_sym_enumerate] = ACTIONS(55),
    [anon_sym_execheap] = ACTIONS(55),
    [anon_sym_execmem] = ACTIONS(55),
    [anon_sym_execmod] = ACTIONS(55),
    [anon_sym_execstack] = ACTIONS(55),
    [anon_sym_execute] = ACTIONS(57),
    [anon_sym_execute_no_trans] = ACTIONS(55),
    [anon_sym_extensionevent] = ACTIONS(55),
    [anon_sym_fork] = ACTIONS(55),
    [anon_sym_fowner] = ACTIONS(55),
    [anon_sym_free] = ACTIONS(55),
    [anon_sym_fsetid] = ACTIONS(55),
    [anon_sym_getattr] = ACTIONS(55),
    [anon_sym_getcap] = ACTIONS(55),
    [anon_sym_getfontpath] = ACTIONS(55),
    [anon_sym_getgrp] = ACTIONS(55),
    [anon_sym_gethost] = ACTIONS(57),
    [anon_sym_gethostlist] = ACTIONS(55),
    [anon_sym_getopt] = ACTIONS(55),
    [anon_sym_getpgid] = ACTIONS(55),
    [anon_sym_getpwd] = ACTIONS(55),
    [anon_sym_getsched] = ACTIONS(55),
    [anon_sym_getsession] = ACTIONS(55),
    [anon_sym_getstat] = ACTIONS(55),
    [anon_sym_grab] = ACTIONS(55),
    [anon_sym_inputevent] = ACTIONS(55),
    [anon_sym_install] = ACTIONS(55),
    [anon_sym_ioctl] = ACTIONS(55),
    [anon_sym_ipc_info] = ACTIONS(55),
    [anon_sym_ipc_lock] = ACTIONS(55),
    [anon_sym_ipc_owner] = ACTIONS(55),
    [anon_sym_kill] = ACTIONS(55),
    [anon_sym_lease] = ACTIONS(55),
    [anon_sym_link] = ACTIONS(55),
    [anon_sym_linux_immutable] = ACTIONS(55),
    [anon_sym_list] = ACTIONS(57),
    [anon_sym_listen] = ACTIONS(55),
    [anon_sym_listprop] = ACTIONS(55),
    [anon_sym_load] = ACTIONS(57),
    [anon_sym_load_policy] = ACTIONS(55),
    [anon_sym_lock] = ACTIONS(55),
    [anon_sym_lookup] = ACTIONS(55),
    [anon_sym_map] = ACTIONS(55),
    [anon_sym_mknod] = ACTIONS(55),
    [anon_sym_mmap_zero] = ACTIONS(55),
    [anon_sym_mount] = ACTIONS(57),
    [anon_sym_mounton] = ACTIONS(55),
    [anon_sym_mousemotion] = ACTIONS(55),
    [anon_sym_move] = ACTIONS(55),
    [anon_sym_mprotect] = ACTIONS(55),
    [anon_sym_name_bind] = ACTIONS(55),
    [anon_sym_name_connect] = ACTIONS(55),
    [anon_sym_net_admin] = ACTIONS(55),
    [anon_sym_net_bind_service] = ACTIONS(55),
    [anon_sym_net_broadcast] = ACTIONS(55),
    [anon_sym_net_raw] = ACTIONS(55),
    [anon_sym_newconn] = ACTIONS(55),
    [anon_sym_nlmsg_read] = ACTIONS(57),
    [anon_sym_nlmsg_readpriv] = ACTIONS(55),
    [anon_sym_nlmsg_relay] = ACTIONS(55),
    [anon_sym_nlmsg_write] = ACTIONS(55),
    [anon_sym_noatsecure] = ACTIONS(55),
    [anon_sym_node_bind] = ACTIONS(55),
    [anon_sym_pageexec] = ACTIONS(55),
    [anon_sym_passivegrab] = ACTIONS(55),
    [anon_sym_polmatch] = ACTIONS(55),
    [anon_sym_ptrace] = ACTIONS(55),
    [anon_sym_query] = ACTIONS(55),
    [anon_sym_quotaget] = ACTIONS(55),
    [anon_sym_quotamod] = ACTIONS(55),
    [anon_sym_quotaon] = ACTIONS(55),
    [anon_sym_randexec] = ACTIONS(55),
    [anon_sym_randmmap] = ACTIONS(55),
    [anon_sym_rawip_recv] = ACTIONS(55),
    [anon_sym_rawip_send] = ACTIONS(55),
    [anon_sym_read] = ACTIONS(55),
    [anon_sym_receive] = ACTIONS(55),
    [anon_sym_recv] = ACTIONS(57),
    [anon_sym_recv_msg] = ACTIONS(55),
    [anon_sym_recvfrom] = ACTIONS(55),
    [anon_sym_relabelfrom] = ACTIONS(55),
    [anon_sym_relabelinput] = ACTIONS(55),
    [anon_sym_relabelto] = ACTIONS(55),
    [anon_sym_remount] = ACTIONS(55),
    [anon_sym_remove_name] = ACTIONS(55),
    [anon_sym_rename] = ACTIONS(55),
    [anon_sym_reparent] = ACTIONS(55),
    [anon_sym_rlimitinh] = ACTIONS(55),
    [anon_sym_rmdir] = ACTIONS(55),
    [anon_sym_rootok] = ACTIONS(55),
    [anon_sym_screensaver] = ACTIONS(55),
    [anon_sym_search] = ACTIONS(55),
    [anon_sym_segmexec] = ACTIONS(55),
    [anon_sym_send] = ACTIONS(57),
    [anon_sym_send_msg] = ACTIONS(55),
    [anon_sym_sendto] = ACTIONS(55),
    [anon_sym_serverchangeevent] = ACTIONS(55),
    [anon_sym_setattr] = ACTIONS(55),
    [anon_sym_setbool] = ACTIONS(55),
    [anon_sym_setcap] = ACTIONS(55),
    [anon_sym_setcheckreqprot] = ACTIONS(55),
    [anon_sym_setcontext] = ACTIONS(55),
    [anon_sym_setcurrent] = ACTIONS(55),
    [anon_sym_setenforce] = ACTIONS(55),
    [anon_sym_setexec] = ACTIONS(55),
    [anon_sym_setfocus] = ACTIONS(55),
    [anon_sym_setfontpath] = ACTIONS(55),
    [anon_sym_setfscreate] = ACTIONS(55),
    [anon_sym_setgid] = ACTIONS(55),
    [anon_sym_sethostlist] = ACTIONS(55),
    [anon_sym_setkeycreate] = ACTIONS(55),
    [anon_sym_setopt] = ACTIONS(55),
    [anon_sym_setpcap] = ACTIONS(55),
    [anon_sym_setpgid] = ACTIONS(55),
    [anon_sym_setrlimit] = ACTIONS(55),
    [anon_sym_setsched] = ACTIONS(55),
    [anon_sym_setsecparam] = ACTIONS(55),
    [anon_sym_setuid] = ACTIONS(55),
    [anon_sym_share] = ACTIONS(55),
    [anon_sym_shmemgrp] = ACTIONS(55),
    [anon_sym_shmemhost] = ACTIONS(55),
    [anon_sym_shmempwd] = ACTIONS(55),
    [anon_sym_shutdown] = ACTIONS(55),
    [anon_sym_sigchld] = ACTIONS(55),
    [anon_sym_siginh] = ACTIONS(55),
    [anon_sym_sigkill] = ACTIONS(55),
    [anon_sym_signal] = ACTIONS(55),
    [anon_sym_signull] = ACTIONS(55),
    [anon_sym_sigstop] = ACTIONS(55),
    [anon_sym_store] = ACTIONS(55),
    [anon_sym_swapon] = ACTIONS(55),
    [anon_sym_sys_admin] = ACTIONS(55),
    [anon_sym_sys_boot] = ACTIONS(55),
    [anon_sym_sys_chroot] = ACTIONS(55),
    [anon_sym_sys_module] = ACTIONS(55),
    [anon_sym_sys_nice] = ACTIONS(55),
    [anon_sym_sys_pacct] = ACTIONS(55),
    [anon_sym_sys_ptrace] = ACTIONS(55),
    [anon_sym_sys_rawio] = ACTIONS(55),
    [anon_sym_sys_resource] = ACTIONS(55),
    [anon_sym_sys_time] = ACTIONS(55),
    [anon_sym_sys_tty_config] = ACTIONS(55),
    [anon_sym_syslog_console] = ACTIONS(55),
    [anon_sym_syslog_mod] = ACTIONS(55),
    [anon_sym_syslog_read] = ACTIONS(55),
    [anon_sym_tcp_recv] = ACTIONS(55),
    [anon_sym_tcp_send] = ACTIONS(55),
    [anon_sym_transition] = ACTIONS(55),
    [anon_sym_transparent] = ACTIONS(55),
    [anon_sym_udp_recv] = ACTIONS(55),
    [anon_sym_udp_send] = ACTIONS(55),
    [anon_sym_ungrab] = ACTIONS(55),
    [anon_sym_uninstall] = ACTIONS(55),
    [anon_sym_unix_read] = ACTIONS(55),
    [anon_sym_unix_write] = ACTIONS(55),
    [anon_sym_unlink] = ACTIONS(55),
    [anon_sym_unmap] = ACTIONS(55),
    [anon_sym_unmount] = ACTIONS(55),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_view] = ACTIONS(55),
    [anon_sym_warppointer] = ACTIONS(55),
    [anon_sym_windowchangeevent] = ACTIONS(55),
    [anon_sym_windowchangerequest] = ACTIONS(55),
    [anon_sym_write] = ACTIONS(55),
  },
  [14] = {
    [sym_permissions] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [15] = {
    [sym_permissions] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_passwd] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_accept] = ACTIONS(23),
    [anon_sym_acceptfrom] = ACTIONS(21),
    [anon_sym_acquire_svc] = ACTIONS(21),
    [anon_sym_activegrab] = ACTIONS(21),
    [anon_sym_add_name] = ACTIONS(21),
    [anon_sym_addchild] = ACTIONS(21),
    [anon_sym_admin] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_assign] = ACTIONS(21),
    [anon_sym_associate] = ACTIONS(21),
    [anon_sym_audit_control] = ACTIONS(21),
    [anon_sym_audit_write] = ACTIONS(21),
    [anon_sym_bell] = ACTIONS(21),
    [anon_sym_bind] = ACTIONS(21),
    [anon_sym_check_context] = ACTIONS(21),
    [anon_sym_chfn] = ACTIONS(21),
    [anon_sym_chown] = ACTIONS(21),
    [anon_sym_chparent] = ACTIONS(21),
    [anon_sym_chprop] = ACTIONS(23),
    [anon_sym_chproplist] = ACTIONS(21),
    [anon_sym_chselection] = ACTIONS(21),
    [anon_sym_chsh] = ACTIONS(21),
    [anon_sym_chstack] = ACTIONS(21),
    [anon_sym_clientcomevent] = ACTIONS(21),
    [anon_sym_compute_av] = ACTIONS(21),
    [anon_sym_compute_create] = ACTIONS(21),
    [anon_sym_compute_member] = ACTIONS(21),
    [anon_sym_compute_relabel] = ACTIONS(21),
    [anon_sym_compute_user] = ACTIONS(21),
    [anon_sym_connect] = ACTIONS(23),
    [anon_sym_connectto] = ACTIONS(21),
    [anon_sym_copy] = ACTIONS(21),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_createglyph] = ACTIONS(21),
    [anon_sym_crontab] = ACTIONS(21),
    [anon_sym_ctrllife] = ACTIONS(21),
    [anon_sym_dac_override] = ACTIONS(21),
    [anon_sym_dac_read_search] = ACTIONS(21),
    [anon_sym_destroy] = ACTIONS(21),
    [anon_sym_draw] = ACTIONS(23),
    [anon_sym_drawevent] = ACTIONS(21),
    [anon_sym_dyntransition] = ACTIONS(21),
    [anon_sym_emutramp] = ACTIONS(21),
    [anon_sym_enforce_dest] = ACTIONS(21),
    [anon_sym_enqueue] = ACTIONS(21),
    [anon_sym_entrypoint] = ACTIONS(21),
    [anon_sym_enumerate] = ACTIONS(21),
    [anon_sym_execheap] = ACTIONS(21),
    [anon_sym_execmem] = ACTIONS(21),
    [anon_sym_execmod] = ACTIONS(21),
    [anon_sym_execstack] = ACTIONS(21),
    [anon_sym_execute] = ACTIONS(23),
    [anon_sym_execute_no_trans] = ACTIONS(21),
    [anon_sym_extensionevent] = ACTIONS(21),
    [anon_sym_fork] = ACTIONS(21),
    [anon_sym_fowner] = ACTIONS(21),
    [anon_sym_free] = ACTIONS(21),
    [anon_sym_fsetid] = ACTIONS(21),
    [anon_sym_getattr] = ACTIONS(21),
    [anon_sym_getcap] = ACTIONS(21),
    [anon_sym_getfontpath] = ACTIONS(21),
    [anon_sym_getgrp] = ACTIONS(21),
    [anon_sym_gethost] = ACTIONS(23),
    [anon_sym_gethostlist] = ACTIONS(21),
    [anon_sym_getopt] = ACTIONS(21),
    [anon_sym_getpgid] = ACTIONS(21),
    [anon_sym_getpwd] = ACTIONS(21),
    [anon_sym_getsched] = ACTIONS(21),
    [anon_sym_getsession] = ACTIONS(21),
    [anon_sym_getstat] = ACTIONS(21),
    [anon_sym_grab] = ACTIONS(21),
    [anon_sym_inputevent] = ACTIONS(21),
    [anon_sym_install] = ACTIONS(21),
    [anon_sym_ioctl] = ACTIONS(21),
    [anon_sym_ipc_info] = ACTIONS(21),
    [anon_sym_ipc_lock] = ACTIONS(21),
    [anon_sym_ipc_owner] = ACTIONS(21),
    [anon_sym_kill] = ACTIONS(21),
    [anon_sym_lease] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(21),
    [anon_sym_linux_immutable] = ACTIONS(21),
    [anon_sym_list] = ACTIONS(23),
    [anon_sym_listen] = ACTIONS(21),
    [anon_sym_listprop] = ACTIONS(21),
    [anon_sym_load] = ACTIONS(23),
    [anon_sym_load_policy] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_lookup] = ACTIONS(21),
    [anon_sym_map] = ACTIONS(21),
    [anon_sym_mknod] = ACTIONS(21),
    [anon_sym_mmap_zero] = ACTIONS(21),
    [anon_sym_mount] = ACTIONS(23),
    [anon_sym_mounton] = ACTIONS(21),
    [anon_sym_mousemotion] = ACTIONS(21),
    [anon_sym_move] = ACTIONS(21),
    [anon_sym_mprotect] = ACTIONS(21),
    [anon_sym_name_bind] = ACTIONS(21),
    [anon_sym_name_connect] = ACTIONS(21),
    [anon_sym_net_admin] = ACTIONS(21),
    [anon_sym_net_bind_service] = ACTIONS(21),
    [anon_sym_net_broadcast] = ACTIONS(21),
    [anon_sym_net_raw] = ACTIONS(21),
    [anon_sym_newconn] = ACTIONS(21),
    [anon_sym_nlmsg_read] = ACTIONS(23),
    [anon_sym_nlmsg_readpriv] = ACTIONS(21),
    [anon_sym_nlmsg_relay] = ACTIONS(21),
    [anon_sym_nlmsg_write] = ACTIONS(21),
    [anon_sym_noatsecure] = ACTIONS(21),
    [anon_sym_node_bind] = ACTIONS(21),
    [anon_sym_pageexec] = ACTIONS(21),
    [anon_sym_passivegrab] = ACTIONS(21),
    [anon_sym_polmatch] = ACTIONS(21),
    [anon_sym_ptrace] = ACTIONS(21),
    [anon_sym_query] = ACTIONS(21),
    [anon_sym_quotaget] = ACTIONS(21),
    [anon_sym_quotamod] = ACTIONS(21),
    [anon_sym_quotaon] = ACTIONS(21),
    [anon_sym_randexec] = ACTIONS(21),
    [anon_sym_randmmap] = ACTIONS(21),
    [anon_sym_rawip_recv] = ACTIONS(21),
    [anon_sym_rawip_send] = ACTIONS(21),
    [anon_sym_read] = ACTIONS(21),
    [anon_sym_receive] = ACTIONS(21),
    [anon_sym_recv] = ACTIONS(23),
    [anon_sym_recv_msg] = ACTIONS(21),
    [anon_sym_recvfrom] = ACTIONS(21),
    [anon_sym_relabelfrom] = ACTIONS(21),
    [anon_sym_relabelinput] = ACTIONS(21),
    [anon_sym_relabelto] = ACTIONS(21),
    [anon_sym_remount] = ACTIONS(21),
    [anon_sym_remove_name] = ACTIONS(21),
    [anon_sym_rename] = ACTIONS(21),
    [anon_sym_reparent] = ACTIONS(21),
    [anon_sym_rlimitinh] = ACTIONS(21),
    [anon_sym_rmdir] = ACTIONS(21),
    [anon_sym_rootok] = ACTIONS(21),
    [anon_sym_screensaver] = ACTIONS(21),
    [anon_sym_search] = ACTIONS(21),
    [anon_sym_segmexec] = ACTIONS(21),
    [anon_sym_send] = ACTIONS(23),
    [anon_sym_send_msg] = ACTIONS(21),
    [anon_sym_sendto] = ACTIONS(21),
    [anon_sym_serverchangeevent] = ACTIONS(21),
    [anon_sym_setattr] = ACTIONS(21),
    [anon_sym_setbool] = ACTIONS(21),
    [anon_sym_setcap] = ACTIONS(21),
    [anon_sym_setcheckreqprot] = ACTIONS(21),
    [anon_sym_setcontext] = ACTIONS(21),
    [anon_sym_setcurrent] = ACTIONS(21),
    [anon_sym_setenforce] = ACTIONS(21),
    [anon_sym_setexec] = ACTIONS(21),
    [anon_sym_setfocus] = ACTIONS(21),
    [anon_sym_setfontpath] = ACTIONS(21),
    [anon_sym_setfscreate] = ACTIONS(21),
    [anon_sym_setgid] = ACTIONS(21),
    [anon_sym_sethostlist] = ACTIONS(21),
    [anon_sym_setkeycreate] = ACTIONS(21),
    [anon_sym_setopt] = ACTIONS(21),
    [anon_sym_setpcap] = ACTIONS(21),
    [anon_sym_setpgid] = ACTIONS(21),
    [anon_sym_setrlimit] = ACTIONS(21),
    [anon_sym_setsched] = ACTIONS(21),
    [anon_sym_setsecparam] = ACTIONS(21),
    [anon_sym_setuid] = ACTIONS(21),
    [anon_sym_share] = ACTIONS(21),
    [anon_sym_shmemgrp] = ACTIONS(21),
    [anon_sym_shmemhost] = ACTIONS(21),
    [anon_sym_shmempwd] = ACTIONS(21),
    [anon_sym_shutdown] = ACTIONS(21),
    [anon_sym_sigchld] = ACTIONS(21),
    [anon_sym_siginh] = ACTIONS(21),
    [anon_sym_sigkill] = ACTIONS(21),
    [anon_sym_signal] = ACTIONS(21),
    [anon_sym_signull] = ACTIONS(21),
    [anon_sym_sigstop] = ACTIONS(21),
    [anon_sym_store] = ACTIONS(21),
    [anon_sym_swapon] = ACTIONS(21),
    [anon_sym_sys_admin] = ACTIONS(21),
    [anon_sym_sys_boot] = ACTIONS(21),
    [anon_sym_sys_chroot] = ACTIONS(21),
    [anon_sym_sys_module] = ACTIONS(21),
    [anon_sym_sys_nice] = ACTIONS(21),
    [anon_sym_sys_pacct] = ACTIONS(21),
    [anon_sym_sys_ptrace] = ACTIONS(21),
    [anon_sym_sys_rawio] = ACTIONS(21),
    [anon_sym_sys_resource] = ACTIONS(21),
    [anon_sym_sys_time] = ACTIONS(21),
    [anon_sym_sys_tty_config] = ACTIONS(21),
    [anon_sym_syslog_console] = ACTIONS(21),
    [anon_sym_syslog_mod] = ACTIONS(21),
    [anon_sym_syslog_read] = ACTIONS(21),
    [anon_sym_tcp_recv] = ACTIONS(21),
    [anon_sym_tcp_send] = ACTIONS(21),
    [anon_sym_transition] = ACTIONS(21),
    [anon_sym_transparent] = ACTIONS(21),
    [anon_sym_udp_recv] = ACTIONS(21),
    [anon_sym_udp_send] = ACTIONS(21),
    [anon_sym_ungrab] = ACTIONS(21),
    [anon_sym_uninstall] = ACTIONS(21),
    [anon_sym_unix_read] = ACTIONS(21),
    [anon_sym_unix_write] = ACTIONS(21),
    [anon_sym_unlink] = ACTIONS(21),
    [anon_sym_unmap] = ACTIONS(21),
    [anon_sym_unmount] = ACTIONS(21),
    [anon_sym_use] = ACTIONS(21),
    [anon_sym_view] = ACTIONS(21),
    [anon_sym_warppointer] = ACTIONS(21),
    [anon_sym_windowchangeevent] = ACTIONS(21),
    [anon_sym_windowchangerequest] = ACTIONS(21),
    [anon_sym_write] = ACTIONS(21),
  },
  [16] = {
    [sym_classes] = STATE(21),
    [aux_sym_class_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_appletalk_socket] = ACTIONS(61),
    [anon_sym_association] = ACTIONS(61),
    [anon_sym_blk_file] = ACTIONS(61),
    [anon_sym_capability] = ACTIONS(64),
    [anon_sym_capability2] = ACTIONS(61),
    [anon_sym_chr_file] = ACTIONS(61),
    [anon_sym_dccp_socket] = ACTIONS(61),
    [anon_sym_dir] = ACTIONS(61),
    [anon_sym_fd] = ACTIONS(61),
    [anon_sym_fifo_file] = ACTIONS(61),
    [anon_sym_file] = ACTIONS(64),
    [anon_sym_filesystem] = ACTIONS(61),
    [anon_sym_ipc] = ACTIONS(61),
    [anon_sym_kernel_service] = ACTIONS(61),
    [anon_sym_key] = ACTIONS(64),
    [anon_sym_key_socket] = ACTIONS(61),
    [anon_sym_lnk_file] = ACTIONS(61),
    [anon_sym_memprotect] = ACTIONS(61),
    [anon_sym_msg] = ACTIONS(64),
    [anon_sym_msgq] = ACTIONS(61),
    [anon_sym_netif] = ACTIONS(61),
    [anon_sym_netlink_socket] = ACTIONS(61),
    [anon_sym_netlink_audit_socket] = ACTIONS(61),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(61),
    [anon_sym_netlink_firewall_socket] = ACTIONS(61),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(61),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(61),
    [anon_sym_netlink_nflog_socket] = ACTIONS(61),
    [anon_sym_netlink_route_socket] = ACTIONS(61),
    [anon_sym_netlink_selinux_socket] = ACTIONS(61),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(61),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(61),
    [anon_sym_node] = ACTIONS(61),
    [anon_sym_packet] = ACTIONS(64),
    [anon_sym_packet_socket] = ACTIONS(61),
    [anon_sym_peer] = ACTIONS(61),
    [anon_sym_process] = ACTIONS(61),
    [anon_sym_rawip_socket] = ACTIONS(61),
    [anon_sym_security] = ACTIONS(61),
    [anon_sym_sem] = ACTIONS(61),
    [anon_sym_shm] = ACTIONS(61),
    [anon_sym_sock_file] = ACTIONS(61),
    [anon_sym_socket] = ACTIONS(61),
    [anon_sym_system] = ACTIONS(61),
    [anon_sym_tcp_socket] = ACTIONS(61),
    [anon_sym_tun_socket] = ACTIONS(61),
    [anon_sym_udp_socket] = ACTIONS(61),
    [anon_sym_unix_dgram_socket] = ACTIONS(61),
    [anon_sym_unix_stream_socket] = ACTIONS(61),
    [anon_sym_db_blob] = ACTIONS(61),
    [anon_sym_db_column] = ACTIONS(61),
    [anon_sym_db_database] = ACTIONS(61),
    [anon_sym_db_procedure] = ACTIONS(61),
    [anon_sym_db_table] = ACTIONS(61),
    [anon_sym_db_tuple] = ACTIONS(61),
    [anon_sym_dbus] = ACTIONS(61),
    [anon_sym_context] = ACTIONS(61),
    [anon_sym_nscd] = ACTIONS(61),
    [anon_sym_passwd] = ACTIONS(61),
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
  [17] = {
    [sym_classes] = STATE(21),
    [aux_sym_class_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_appletalk_socket] = ACTIONS(69),
    [anon_sym_association] = ACTIONS(69),
    [anon_sym_blk_file] = ACTIONS(69),
    [anon_sym_capability] = ACTIONS(71),
    [anon_sym_capability2] = ACTIONS(69),
    [anon_sym_chr_file] = ACTIONS(69),
    [anon_sym_dccp_socket] = ACTIONS(69),
    [anon_sym_dir] = ACTIONS(69),
    [anon_sym_fd] = ACTIONS(69),
    [anon_sym_fifo_file] = ACTIONS(69),
    [anon_sym_file] = ACTIONS(71),
    [anon_sym_filesystem] = ACTIONS(69),
    [anon_sym_ipc] = ACTIONS(69),
    [anon_sym_kernel_service] = ACTIONS(69),
    [anon_sym_key] = ACTIONS(71),
    [anon_sym_key_socket] = ACTIONS(69),
    [anon_sym_lnk_file] = ACTIONS(69),
    [anon_sym_memprotect] = ACTIONS(69),
    [anon_sym_msg] = ACTIONS(71),
    [anon_sym_msgq] = ACTIONS(69),
    [anon_sym_netif] = ACTIONS(69),
    [anon_sym_netlink_socket] = ACTIONS(69),
    [anon_sym_netlink_audit_socket] = ACTIONS(69),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(69),
    [anon_sym_netlink_firewall_socket] = ACTIONS(69),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(69),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(69),
    [anon_sym_netlink_nflog_socket] = ACTIONS(69),
    [anon_sym_netlink_route_socket] = ACTIONS(69),
    [anon_sym_netlink_selinux_socket] = ACTIONS(69),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(69),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(69),
    [anon_sym_node] = ACTIONS(69),
    [anon_sym_packet] = ACTIONS(71),
    [anon_sym_packet_socket] = ACTIONS(69),
    [anon_sym_peer] = ACTIONS(69),
    [anon_sym_process] = ACTIONS(69),
    [anon_sym_rawip_socket] = ACTIONS(69),
    [anon_sym_security] = ACTIONS(69),
    [anon_sym_sem] = ACTIONS(69),
    [anon_sym_shm] = ACTIONS(69),
    [anon_sym_sock_file] = ACTIONS(69),
    [anon_sym_socket] = ACTIONS(69),
    [anon_sym_system] = ACTIONS(69),
    [anon_sym_tcp_socket] = ACTIONS(69),
    [anon_sym_tun_socket] = ACTIONS(69),
    [anon_sym_udp_socket] = ACTIONS(69),
    [anon_sym_unix_dgram_socket] = ACTIONS(69),
    [anon_sym_unix_stream_socket] = ACTIONS(69),
    [anon_sym_db_blob] = ACTIONS(69),
    [anon_sym_db_column] = ACTIONS(69),
    [anon_sym_db_database] = ACTIONS(69),
    [anon_sym_db_procedure] = ACTIONS(69),
    [anon_sym_db_table] = ACTIONS(69),
    [anon_sym_db_tuple] = ACTIONS(69),
    [anon_sym_dbus] = ACTIONS(69),
    [anon_sym_context] = ACTIONS(69),
    [anon_sym_nscd] = ACTIONS(69),
    [anon_sym_passwd] = ACTIONS(69),
    [anon_sym_x_application_data] = ACTIONS(69),
    [anon_sym_x_client] = ACTIONS(69),
    [anon_sym_x_colormap] = ACTIONS(69),
    [anon_sym_x_cursor] = ACTIONS(69),
    [anon_sym_x_device] = ACTIONS(69),
    [anon_sym_x_drawable] = ACTIONS(69),
    [anon_sym_x_event] = ACTIONS(69),
    [anon_sym_x_extension] = ACTIONS(69),
    [anon_sym_x_font] = ACTIONS(69),
    [anon_sym_x_gc] = ACTIONS(69),
    [anon_sym_x_keyboard] = ACTIONS(69),
    [anon_sym_x_pointer] = ACTIONS(69),
    [anon_sym_x_property] = ACTIONS(69),
    [anon_sym_x_resource] = ACTIONS(69),
    [anon_sym_x_screen] = ACTIONS(69),
    [anon_sym_x_selection] = ACTIONS(69),
    [anon_sym_x_server] = ACTIONS(69),
    [anon_sym_x_synthetic_event] = ACTIONS(69),
  },
  [18] = {
    [sym_class] = STATE(2),
    [sym_classes] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_appletalk_socket] = ACTIONS(75),
    [anon_sym_association] = ACTIONS(75),
    [anon_sym_blk_file] = ACTIONS(75),
    [anon_sym_capability] = ACTIONS(77),
    [anon_sym_capability2] = ACTIONS(75),
    [anon_sym_chr_file] = ACTIONS(75),
    [anon_sym_dccp_socket] = ACTIONS(75),
    [anon_sym_dir] = ACTIONS(75),
    [anon_sym_fd] = ACTIONS(75),
    [anon_sym_fifo_file] = ACTIONS(75),
    [anon_sym_file] = ACTIONS(77),
    [anon_sym_filesystem] = ACTIONS(75),
    [anon_sym_ipc] = ACTIONS(75),
    [anon_sym_kernel_service] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(77),
    [anon_sym_key_socket] = ACTIONS(75),
    [anon_sym_lnk_file] = ACTIONS(75),
    [anon_sym_memprotect] = ACTIONS(75),
    [anon_sym_msg] = ACTIONS(77),
    [anon_sym_msgq] = ACTIONS(75),
    [anon_sym_netif] = ACTIONS(75),
    [anon_sym_netlink_socket] = ACTIONS(75),
    [anon_sym_netlink_audit_socket] = ACTIONS(75),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(75),
    [anon_sym_netlink_firewall_socket] = ACTIONS(75),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(75),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(75),
    [anon_sym_netlink_nflog_socket] = ACTIONS(75),
    [anon_sym_netlink_route_socket] = ACTIONS(75),
    [anon_sym_netlink_selinux_socket] = ACTIONS(75),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(75),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(75),
    [anon_sym_node] = ACTIONS(75),
    [anon_sym_packet] = ACTIONS(77),
    [anon_sym_packet_socket] = ACTIONS(75),
    [anon_sym_peer] = ACTIONS(75),
    [anon_sym_process] = ACTIONS(75),
    [anon_sym_rawip_socket] = ACTIONS(75),
    [anon_sym_security] = ACTIONS(75),
    [anon_sym_sem] = ACTIONS(75),
    [anon_sym_shm] = ACTIONS(75),
    [anon_sym_sock_file] = ACTIONS(75),
    [anon_sym_socket] = ACTIONS(75),
    [anon_sym_system] = ACTIONS(75),
    [anon_sym_tcp_socket] = ACTIONS(75),
    [anon_sym_tun_socket] = ACTIONS(75),
    [anon_sym_udp_socket] = ACTIONS(75),
    [anon_sym_unix_dgram_socket] = ACTIONS(75),
    [anon_sym_unix_stream_socket] = ACTIONS(75),
    [anon_sym_db_blob] = ACTIONS(75),
    [anon_sym_db_column] = ACTIONS(75),
    [anon_sym_db_database] = ACTIONS(75),
    [anon_sym_db_procedure] = ACTIONS(75),
    [anon_sym_db_table] = ACTIONS(75),
    [anon_sym_db_tuple] = ACTIONS(75),
    [anon_sym_dbus] = ACTIONS(75),
    [anon_sym_context] = ACTIONS(75),
    [anon_sym_nscd] = ACTIONS(75),
    [anon_sym_passwd] = ACTIONS(75),
    [anon_sym_x_application_data] = ACTIONS(75),
    [anon_sym_x_client] = ACTIONS(75),
    [anon_sym_x_colormap] = ACTIONS(75),
    [anon_sym_x_cursor] = ACTIONS(75),
    [anon_sym_x_device] = ACTIONS(75),
    [anon_sym_x_drawable] = ACTIONS(75),
    [anon_sym_x_event] = ACTIONS(75),
    [anon_sym_x_extension] = ACTIONS(75),
    [anon_sym_x_font] = ACTIONS(75),
    [anon_sym_x_gc] = ACTIONS(75),
    [anon_sym_x_keyboard] = ACTIONS(75),
    [anon_sym_x_pointer] = ACTIONS(75),
    [anon_sym_x_property] = ACTIONS(75),
    [anon_sym_x_resource] = ACTIONS(75),
    [anon_sym_x_screen] = ACTIONS(75),
    [anon_sym_x_selection] = ACTIONS(75),
    [anon_sym_x_server] = ACTIONS(75),
    [anon_sym_x_synthetic_event] = ACTIONS(75),
  },
  [19] = {
    [sym_classes] = STATE(21),
    [aux_sym_class_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_appletalk_socket] = ACTIONS(69),
    [anon_sym_association] = ACTIONS(69),
    [anon_sym_blk_file] = ACTIONS(69),
    [anon_sym_capability] = ACTIONS(71),
    [anon_sym_capability2] = ACTIONS(69),
    [anon_sym_chr_file] = ACTIONS(69),
    [anon_sym_dccp_socket] = ACTIONS(69),
    [anon_sym_dir] = ACTIONS(69),
    [anon_sym_fd] = ACTIONS(69),
    [anon_sym_fifo_file] = ACTIONS(69),
    [anon_sym_file] = ACTIONS(71),
    [anon_sym_filesystem] = ACTIONS(69),
    [anon_sym_ipc] = ACTIONS(69),
    [anon_sym_kernel_service] = ACTIONS(69),
    [anon_sym_key] = ACTIONS(71),
    [anon_sym_key_socket] = ACTIONS(69),
    [anon_sym_lnk_file] = ACTIONS(69),
    [anon_sym_memprotect] = ACTIONS(69),
    [anon_sym_msg] = ACTIONS(71),
    [anon_sym_msgq] = ACTIONS(69),
    [anon_sym_netif] = ACTIONS(69),
    [anon_sym_netlink_socket] = ACTIONS(69),
    [anon_sym_netlink_audit_socket] = ACTIONS(69),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(69),
    [anon_sym_netlink_firewall_socket] = ACTIONS(69),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(69),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(69),
    [anon_sym_netlink_nflog_socket] = ACTIONS(69),
    [anon_sym_netlink_route_socket] = ACTIONS(69),
    [anon_sym_netlink_selinux_socket] = ACTIONS(69),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(69),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(69),
    [anon_sym_node] = ACTIONS(69),
    [anon_sym_packet] = ACTIONS(71),
    [anon_sym_packet_socket] = ACTIONS(69),
    [anon_sym_peer] = ACTIONS(69),
    [anon_sym_process] = ACTIONS(69),
    [anon_sym_rawip_socket] = ACTIONS(69),
    [anon_sym_security] = ACTIONS(69),
    [anon_sym_sem] = ACTIONS(69),
    [anon_sym_shm] = ACTIONS(69),
    [anon_sym_sock_file] = ACTIONS(69),
    [anon_sym_socket] = ACTIONS(69),
    [anon_sym_system] = ACTIONS(69),
    [anon_sym_tcp_socket] = ACTIONS(69),
    [anon_sym_tun_socket] = ACTIONS(69),
    [anon_sym_udp_socket] = ACTIONS(69),
    [anon_sym_unix_dgram_socket] = ACTIONS(69),
    [anon_sym_unix_stream_socket] = ACTIONS(69),
    [anon_sym_db_blob] = ACTIONS(69),
    [anon_sym_db_column] = ACTIONS(69),
    [anon_sym_db_database] = ACTIONS(69),
    [anon_sym_db_procedure] = ACTIONS(69),
    [anon_sym_db_table] = ACTIONS(69),
    [anon_sym_db_tuple] = ACTIONS(69),
    [anon_sym_dbus] = ACTIONS(69),
    [anon_sym_context] = ACTIONS(69),
    [anon_sym_nscd] = ACTIONS(69),
    [anon_sym_passwd] = ACTIONS(69),
    [anon_sym_x_application_data] = ACTIONS(69),
    [anon_sym_x_client] = ACTIONS(69),
    [anon_sym_x_colormap] = ACTIONS(69),
    [anon_sym_x_cursor] = ACTIONS(69),
    [anon_sym_x_device] = ACTIONS(69),
    [anon_sym_x_drawable] = ACTIONS(69),
    [anon_sym_x_event] = ACTIONS(69),
    [anon_sym_x_extension] = ACTIONS(69),
    [anon_sym_x_font] = ACTIONS(69),
    [anon_sym_x_gc] = ACTIONS(69),
    [anon_sym_x_keyboard] = ACTIONS(69),
    [anon_sym_x_pointer] = ACTIONS(69),
    [anon_sym_x_property] = ACTIONS(69),
    [anon_sym_x_resource] = ACTIONS(69),
    [anon_sym_x_screen] = ACTIONS(69),
    [anon_sym_x_selection] = ACTIONS(69),
    [anon_sym_x_server] = ACTIONS(69),
    [anon_sym_x_synthetic_event] = ACTIONS(69),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_appletalk_socket] = ACTIONS(41),
    [anon_sym_association] = ACTIONS(41),
    [anon_sym_blk_file] = ACTIONS(41),
    [anon_sym_capability] = ACTIONS(43),
    [anon_sym_capability2] = ACTIONS(41),
    [anon_sym_chr_file] = ACTIONS(41),
    [anon_sym_dccp_socket] = ACTIONS(41),
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
    [anon_sym_process] = ACTIONS(41),
    [anon_sym_rawip_socket] = ACTIONS(41),
    [anon_sym_security] = ACTIONS(41),
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
  [21] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_appletalk_socket] = ACTIONS(79),
    [anon_sym_association] = ACTIONS(79),
    [anon_sym_blk_file] = ACTIONS(79),
    [anon_sym_capability] = ACTIONS(81),
    [anon_sym_capability2] = ACTIONS(79),
    [anon_sym_chr_file] = ACTIONS(79),
    [anon_sym_dccp_socket] = ACTIONS(79),
    [anon_sym_dir] = ACTIONS(79),
    [anon_sym_fd] = ACTIONS(79),
    [anon_sym_fifo_file] = ACTIONS(79),
    [anon_sym_file] = ACTIONS(81),
    [anon_sym_filesystem] = ACTIONS(79),
    [anon_sym_ipc] = ACTIONS(79),
    [anon_sym_kernel_service] = ACTIONS(79),
    [anon_sym_key] = ACTIONS(81),
    [anon_sym_key_socket] = ACTIONS(79),
    [anon_sym_lnk_file] = ACTIONS(79),
    [anon_sym_memprotect] = ACTIONS(79),
    [anon_sym_msg] = ACTIONS(81),
    [anon_sym_msgq] = ACTIONS(79),
    [anon_sym_netif] = ACTIONS(79),
    [anon_sym_netlink_socket] = ACTIONS(79),
    [anon_sym_netlink_audit_socket] = ACTIONS(79),
    [anon_sym_netlink_dnrt_socket] = ACTIONS(79),
    [anon_sym_netlink_firewall_socket] = ACTIONS(79),
    [anon_sym_netlink_ip6fw_socket] = ACTIONS(79),
    [anon_sym_netlink_kobject_uevent_socket] = ACTIONS(79),
    [anon_sym_netlink_nflog_socket] = ACTIONS(79),
    [anon_sym_netlink_route_socket] = ACTIONS(79),
    [anon_sym_netlink_selinux_socket] = ACTIONS(79),
    [anon_sym_netlink_tcpdiag_socket] = ACTIONS(79),
    [anon_sym_netlink_xfrm_socket] = ACTIONS(79),
    [anon_sym_node] = ACTIONS(79),
    [anon_sym_packet] = ACTIONS(81),
    [anon_sym_packet_socket] = ACTIONS(79),
    [anon_sym_peer] = ACTIONS(79),
    [anon_sym_process] = ACTIONS(79),
    [anon_sym_rawip_socket] = ACTIONS(79),
    [anon_sym_security] = ACTIONS(79),
    [anon_sym_sem] = ACTIONS(79),
    [anon_sym_shm] = ACTIONS(79),
    [anon_sym_sock_file] = ACTIONS(79),
    [anon_sym_socket] = ACTIONS(79),
    [anon_sym_system] = ACTIONS(79),
    [anon_sym_tcp_socket] = ACTIONS(79),
    [anon_sym_tun_socket] = ACTIONS(79),
    [anon_sym_udp_socket] = ACTIONS(79),
    [anon_sym_unix_dgram_socket] = ACTIONS(79),
    [anon_sym_unix_stream_socket] = ACTIONS(79),
    [anon_sym_db_blob] = ACTIONS(79),
    [anon_sym_db_column] = ACTIONS(79),
    [anon_sym_db_database] = ACTIONS(79),
    [anon_sym_db_procedure] = ACTIONS(79),
    [anon_sym_db_table] = ACTIONS(79),
    [anon_sym_db_tuple] = ACTIONS(79),
    [anon_sym_dbus] = ACTIONS(79),
    [anon_sym_context] = ACTIONS(79),
    [anon_sym_nscd] = ACTIONS(79),
    [anon_sym_passwd] = ACTIONS(79),
    [anon_sym_x_application_data] = ACTIONS(79),
    [anon_sym_x_client] = ACTIONS(79),
    [anon_sym_x_colormap] = ACTIONS(79),
    [anon_sym_x_cursor] = ACTIONS(79),
    [anon_sym_x_device] = ACTIONS(79),
    [anon_sym_x_drawable] = ACTIONS(79),
    [anon_sym_x_event] = ACTIONS(79),
    [anon_sym_x_extension] = ACTIONS(79),
    [anon_sym_x_font] = ACTIONS(79),
    [anon_sym_x_gc] = ACTIONS(79),
    [anon_sym_x_keyboard] = ACTIONS(79),
    [anon_sym_x_pointer] = ACTIONS(79),
    [anon_sym_x_property] = ACTIONS(79),
    [anon_sym_x_resource] = ACTIONS(79),
    [anon_sym_x_screen] = ACTIONS(79),
    [anon_sym_x_selection] = ACTIONS(79),
    [anon_sym_x_server] = ACTIONS(79),
    [anon_sym_x_synthetic_event] = ACTIONS(79),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(88), 1,
      anon_sym_role,
    ACTIONS(91), 1,
      anon_sym_bool,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(33), 1,
      sym_rule_name,
    ACTIONS(97), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(22), 7,
      sym__definition,
      sym_type_declaration,
      sym_role_declaration,
      sym_rule_declaration,
      sym_boolean_declaration,
      sym_macro_usage,
      aux_sym_source_file_repeat1,
  [37] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(9), 1,
      anon_sym_role,
    ACTIONS(11), 1,
      anon_sym_bool,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_rule_name,
    ACTIONS(15), 4,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
    STATE(22), 7,
      sym__definition,
      sym_type_declaration,
      sym_role_declaration,
      sym_rule_declaration,
      sym_boolean_declaration,
      sym_macro_usage,
      aux_sym_source_file_repeat1,
  [74] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 8,
      anon_sym_type,
      anon_sym_role,
      anon_sym_bool,
      sym_identifier,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [91] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 8,
      anon_sym_type,
      anon_sym_role,
      anon_sym_bool,
      sym_identifier,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 8,
      anon_sym_type,
      anon_sym_role,
      anon_sym_bool,
      sym_identifier,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 8,
      anon_sym_type,
      anon_sym_role,
      anon_sym_bool,
      sym_identifier,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 8,
      anon_sym_type,
      anon_sym_role,
      anon_sym_bool,
      sym_identifier,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 8,
      anon_sym_type,
      anon_sym_role,
      anon_sym_bool,
      sym_identifier,
      anon_sym_allow,
      anon_sym_auditallow,
      anon_sym_dontaudit,
      anon_sym_neverallow,
  [176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(51), 1,
      sym_argument,
    STATE(67), 1,
      sym_arguments,
  [195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_type_repeat1,
  [211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_COLON,
      sym_identifier,
  [221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(35), 1,
      sym_type,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_COLON,
      sym_identifier,
  [247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_TILDE,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(64), 1,
      sym_type,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_COLON,
      sym_identifier,
  [273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_argument_repeat1,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_COLON,
      sym_identifier,
  [299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_type_repeat1,
  [315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_type_repeat1,
  [331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_DASH,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_argument_repeat1,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_DASH,
      sym_identifier,
  [356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_type_repeat1,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_identifier,
  [391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_RBRACE,
      anon_sym_DASH,
      sym_identifier,
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_RBRACE,
      anon_sym_DASH,
      sym_identifier,
  [422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_type_repeat1,
  [435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DASH,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_argument_repeat1,
  [448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_arguments_repeat1,
  [461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(56), 1,
      sym_argument,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      anon_sym_DASH,
      sym_identifier,
  [483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_true,
      anon_sym_false,
  [491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      sym_identifier,
  [501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SEMI,
  [532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_types,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_identifier,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_identifier,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_identifier,
  [595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
  [602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
  [609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SEMI,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_identifier,
  [644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
  [658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SEMI,
  [672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 37,
  [SMALL_STATE(24)] = 74,
  [SMALL_STATE(25)] = 91,
  [SMALL_STATE(26)] = 108,
  [SMALL_STATE(27)] = 125,
  [SMALL_STATE(28)] = 142,
  [SMALL_STATE(29)] = 159,
  [SMALL_STATE(30)] = 176,
  [SMALL_STATE(31)] = 195,
  [SMALL_STATE(32)] = 211,
  [SMALL_STATE(33)] = 221,
  [SMALL_STATE(34)] = 237,
  [SMALL_STATE(35)] = 247,
  [SMALL_STATE(36)] = 263,
  [SMALL_STATE(37)] = 273,
  [SMALL_STATE(38)] = 289,
  [SMALL_STATE(39)] = 299,
  [SMALL_STATE(40)] = 315,
  [SMALL_STATE(41)] = 331,
  [SMALL_STATE(42)] = 347,
  [SMALL_STATE(43)] = 356,
  [SMALL_STATE(44)] = 369,
  [SMALL_STATE(45)] = 382,
  [SMALL_STATE(46)] = 391,
  [SMALL_STATE(47)] = 400,
  [SMALL_STATE(48)] = 413,
  [SMALL_STATE(49)] = 422,
  [SMALL_STATE(50)] = 435,
  [SMALL_STATE(51)] = 448,
  [SMALL_STATE(52)] = 461,
  [SMALL_STATE(53)] = 474,
  [SMALL_STATE(54)] = 483,
  [SMALL_STATE(55)] = 491,
  [SMALL_STATE(56)] = 501,
  [SMALL_STATE(57)] = 509,
  [SMALL_STATE(58)] = 517,
  [SMALL_STATE(59)] = 525,
  [SMALL_STATE(60)] = 532,
  [SMALL_STATE(61)] = 539,
  [SMALL_STATE(62)] = 546,
  [SMALL_STATE(63)] = 553,
  [SMALL_STATE(64)] = 560,
  [SMALL_STATE(65)] = 567,
  [SMALL_STATE(66)] = 574,
  [SMALL_STATE(67)] = 581,
  [SMALL_STATE(68)] = 588,
  [SMALL_STATE(69)] = 595,
  [SMALL_STATE(70)] = 602,
  [SMALL_STATE(71)] = 609,
  [SMALL_STATE(72)] = 616,
  [SMALL_STATE(73)] = 623,
  [SMALL_STATE(74)] = 630,
  [SMALL_STATE(75)] = 637,
  [SMALL_STATE(76)] = 644,
  [SMALL_STATE(77)] = 651,
  [SMALL_STATE(78)] = 658,
  [SMALL_STATE(79)] = 665,
  [SMALL_STATE(80)] = 672,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 26),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 26), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_permission_repeat1, 2, .production_id = 26), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permissions, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permissions, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 15),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 1, .production_id = 15),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 21),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, .production_id = 21),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_repeat1, 1, .production_id = 20),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_permission_repeat1, 1, .production_id = 20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 22),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 22), SHIFT_REPEAT(20),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 2, .production_id = 22), SHIFT_REPEAT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 15),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_repeat1, 1, .production_id = 15),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 3, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 7, .production_id = 24),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_declaration, 7, .production_id = 24),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_declaration, 5, .production_id = 10),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role_declaration, 5, .production_id = 10),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_declaration, 4, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_declaration, 4, .production_id = 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_usage, 4, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_usage, 4, .production_id = 9),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 19),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 18),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 18), SHIFT_REPEAT(69),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 18), SHIFT_REPEAT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 14),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 14), SHIFT_REPEAT(63),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 14), SHIFT_REPEAT(53),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, .production_id = 16),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, .production_id = 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1, .production_id = 4),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 12), SHIFT_REPEAT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 12),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, .production_id = 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, .production_id = 11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 17),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 1, .production_id = 20),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 2, .production_id = 23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 25),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 5, .production_id = 27),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
