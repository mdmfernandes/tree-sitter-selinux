module.exports = grammar({
  name: "selinux",

  extras: ($) => [
    /\s|\\r?\\n/, // whitespace
    $.comment,
  ],

  word: ($) => $.word,

  // externals: ($) => [
  //     // Mark comments as external tokens so that the external scanner is always
  //     // invoked, even if no external token is expected. This allows for better
  //     // error recovery, because the external scanner can maintain the overall
  //     // structure by returning dedent tokens whenever a dedent occurs, even
  //     // if no dedent is expected.
  //     $.comment,
  //
  //     // Allow the external scanner to check for the validity of closing brackets
  //     // so that it can avoid returning dedent tokens between brackets.
  //     "]",
  //     ")",
  //     "}",
  // ],
  rules: {
    // INFO:
    // gen_require inside macros
    // highlight of `'. Match?

    // TODO:
    // interface macro
    // User statements
    // Role statements: role, attribute_role, roleattribute, allow, role_transition
    // Bounds rules: typebounds
    // Extended rules
    // Object class
    // Conditional statements: bool, if/else
    // Constraint statements: constrain, validatetrans, mlsconstrain, mlsvalidatetrans
    // MLS statements. Good for Android
    // SID statement
    // Filesystem labeling statements
    // Modular policy support statements: module, require, optional
    // File context configuration files (*.fc)

    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.macro_declaration,
        $.macro_usage,
        // Type statements
        $.type_declaration,
        $.attribute_declaration,
        $.expandattribute_declaration,
        $.typeattribute_declaration,
        $.typealias_declaration,
        $.permissive_declaration,
        $.type_transition_declaration,
        $.type_change_declaration,
        $.type_member_declaration,
        // Role statements
        $.role_declaration,
        $.attribute_role_declaration,
        $.roleattribute_declaration,
        //$.allow_declaration,
        $.role_transition_declaration,
        // ...
        $.rule_declaration,
        $.boolean_declaration,
      ),

    comment: ($) => token(seq("#", /.*/)),

    /*
     * Type statements
     */
    type_declaration: ($) =>
      seq(
        "type",
        field("type_id", $.identifier),
        optional(seq("alias", field("alias_id", $.alias))),
        repeat(seq(",", field("attribute_id", $.identifier))),
        ";",
      ),

    attribute_declaration: ($) =>
      seq("attribute", field("attribute_id", $.identifier), ";"),

    expandattribute_declaration: ($) =>
      seq(
        "expandattribute",
        field("attribute_id", $.attribute),
        field("expand_value", $.boolean),
        ";",
      ),

    typeattribute_declaration: ($) =>
      seq(
        "typeattribute",
        field("type_id", $.identifier),
        field("attribute_id", $.identifier),
        repeat(seq(",", field("attribute_id", $.identifier))),
        ";",
      ),

    typealias_declaration: ($) =>
      seq(
        "typealias",
        field("type_id", $.identifier),
        "alias",
        field("alias_id", $.alias),
        ";",
      ),

    permissive_declaration: ($) =>
      seq("permissive", field("type_id", $.identifier), ";"),

    type_transition_declaration: ($) =>
      seq(
        "type_transition",
        field("source_type", $.type),
        field("target_type", $.type),
        ":",
        field("class", $.class),
        field("default_type", $.identifier),
        optional(field("object_name", $.identifier)),
        ";",
      ),

    type_change_declaration: ($) =>
      seq(
        "type_change",
        field("source_type", $.type),
        field("target_type", $.type),
        ":",
        field("class", $.class),
        field("change_type", $.identifier),
        ";",
      ),

    type_member_declaration: ($) =>
      seq(
        "type_member",
        field("source_type", $.type),
        field("target_type", $.type),
        ":",
        field("class", $.class),
        field("member_type", $.identifier),
        ";",
      ),

    /*
     * Role statements
     */
    role_declaration: ($) =>
      seq(
        "role",
        field("role_id", $.identifier),
        optional(seq("types", field("type_id", $.type))),
        ";",
      ),

    attribute_role_declaration: ($) =>
      seq("attribute_role", field("attribute_id", $.identifier), ";"),

    roleattribute_declaration: ($) =>
      seq(
        "roleattribute",
        field("role_id", $.identifier),
        field("attribute_id", $.identifier),
        repeat(seq(",", field("attribute_id", $.identifier))),
        ";",
      ),

    // INFO: Commented for now since it conflicts with the allow AV rule
    //allow_declaration: ($) =>
    //  seq(
    //    "allow",
    //    field("from_role_id", $.roles),
    //    field("to_role_id", $.roles),
    //    ";",
    //  ),

    // TODO: add more test-cases
    role_transition_declaration: ($) =>
      seq(
        "role_transition",
        field("current_role_id", $.roles),
        field("type_id", $.type),
        optional(seq(":", field("class", $.classes))),
        field("new_role_id", $.identifier),
        ";",
      ),

    /*
     * ...
     */

    roles: ($) =>
      choice(
        seq("{", repeat1(field("role", $.identifier)), "}"),
        field("role", $.identifier),
      ),

    class: ($) =>
      choice(
        seq("{", repeat1(field("class", $.classes)), "}"),
        field("class", $.classes),
      ),

    type: ($) =>
      choice(
        seq(
          optional($.complement),
          "{",
          seq(
            field("type", $.identifier),
            repeat1(seq(optional($.negative), field("type", $.identifier))),
          ),
          "}",
        ),
        seq(optional($.complement), field("type", $.identifier)),
      ),

    // TODO: Maybe simplify this since I have multiple identical definitions
    // (only difference is the name, which is not that relevant)
    alias: ($) =>
      choice(
        seq("{", seq(repeat1(field("alias", $.identifier))), "}"),
        field("alias", $.identifier),
      ),

    attribute: ($) =>
      choice(
        seq("{", seq(repeat1(field("attribute", $.identifier))), "}"),
        field("attribute", $.identifier),
      ),

    permission: ($) =>
      choice(
        seq(
          optional($.complement),
          "{",
          seq(
            field("perm_set", $.permissions),
            repeat1(field("perm_set", $.permissions)),
          ),
          "}",
        ),
        seq(optional($.complement), field("perm_set", $.permissions)),
      ),

    // https://selinuxproject.org/page/AVCRules
    rule_declaration: ($) =>
      seq(
        field("rule_name", $.rule_name),
        field("source_type", $.type),
        field("target_type", $.type),
        ":",
        field("class", $.class),
        field("perm_set", $.permission),
        ";",
      ),

    boolean_declaration: ($) =>
      seq("bool", field("name", $.word), field("value", $.boolean), ";"),

    argument: ($) =>
      choice(
        seq(
          "{",
          seq(
            field("arg", $.identifier),
            repeat1(seq(optional($.negative), field("arg", $.identifier))),
          ),
          "}",
        ),
        field("arg", $.identifier),
      ),

    arguments: ($) =>
      seq(
        field("argument", $.argument),
        repeat(seq(",", field("argument", $.argument))),
      ),

    macro_declaration: ($) =>
      seq(
        "interface",
        "(",
        "`",
        field("name", $.word),
        "'",
        ",",
        "`",
        field(
          "body",
          choice(
            $.type_declaration,
            $.typeattribute_declaration,
            $.rule_declaration,
            $.macro_usage,
          ),
        ),
        "'",
        ")",
      ),

    macro_usage: ($) =>
      seq(
        field("name", $.word),
        "(",
        field("arguments", optional($.arguments)),
        ")",
      ),

    negative: ($) => "-",
    complement: ($) => "~",
    boolean: ($) => choice("true", "false"),

    word: ($) => /[a-zA-Z][a-zA-Z0-9_-]*/,
    expansion: ($) => seq("$", /[0-9]+/),
    identifier: ($) => choice($.word, $.expansion),

    permissions: ($) => choice($.identifier, "*"),

    rule_name: ($) => choice("allow", "auditallow", "dontaudit", "neverallow"),

    // I guess this is a bit overkill, but allows me to know if I'm using a valid class
    // From the SELinux Notebook
    classes: ($) =>
      choice(
        "anon_inode",
        "appletalk_socket",
        "association",
        "binder",
        "blk_file",
        "bpf",
        "cap2_userns",
        "cap_userns",
        "capability",
        "capability2",
        "chr_file",
        "context",
        "db_blob",
        "db_column",
        "db_database",
        "db_language",
        "db_procedure",
        "db_schema",
        "db_sequence",
        "db_table",
        "db_tuple",
        "db_view",
        "dbus",
        "dccp_socket",
        "dir",
        "fd",
        "fifo_file",
        "file",
        "filesystem",
        "icmp_socket",
        "infiniband_endport",
        "infiniband_pkey",
        "io_uring",
        "ipc",
        "kernel_service",
        "key",
        "key_socket",
        "lnk_file",
        "lockdown",
        "memprotect",
        "msg",
        "msgq",
        "netif",
        "netlink_audit_socket",
        "netlink_connector_socket",
        "netlink_crypto_socket",
        "netlink_dnrt_socket",
        "netlink_fib_lookup_socket",
        "netlink_firewall_socket",
        "netlink_generic_socket",
        "netlink_ip6fw_socket",
        "netlink_iscsi_socket",
        "netlink_kobject_uevent_socket",
        "netlink_netfilter_socket",
        "netlink_nflog_socket",
        "netlink_rdma_socket",
        "netlink_route_socket",
        "netlink_scsitransport_socket",
        "netlink_selinux_socket",
        "netlink_socket",
        "netlink_tcpdiag_socket",
        "netlink_xfrm_socket",
        "node",
        "nscd",
        "packet",
        "packet_socket",
        "passwd",
        "peer",
        "perf_event",
        "process",
        "process2",
        "proxy",
        "rawip_socket",
        "sctp_socket",
        "security",
        "sem",
        "service",
        "shm",
        "sock_file",
        "socket",
        "system",
        "tcp_socket",
        "tun_socket",
        "udp_socket",
        "unix_dgram_socket",
        "unix_stream_socket",
        "user_namespace",
        "x_application_data",
        "x_client",
        "x_colormap",
        "x_cursor",
        "x_device",
        "x_drawable",
        "x_event",
        "x_extension",
        "x_font",
        "x_gc",
        "x_keyboard",
        "x_pointer",
        "x_property",
        "x_resource",
        "x_screen",
        "x_selection",
        "x_server",
        "x_synthetic_event",
      ),
  },
});
