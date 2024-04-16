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
    // highlit of `'. Match?

    // TODO:
    // interface macro
    // type_transition (should work for domains and objects)
    // User statements
    // Role statements: role, attribute_role, roleattribute, allow, role_transition
    // Type statements: type, attribute, expandattribute, typeattribute, typealias, permissive, tye_transition,
    //                  type_change, type_member
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
        // ...
        $.role_declaration,
        $.rule_declaration,
        $.boolean_declaration,
      ),

    comment: ($) => token(seq("#", /.*/)),

    /*
     * Type statements
     */
    // TODO: add tests for type statements. See examples in the SELinux notebook
    // Improve the highlights

    type_declaration: ($) =>
      seq(
        "type",
        field("type_id", $.identifier),
        // TODO: add support for multiple alias, separated by {}
        optional(seq("alias", field("alias_id", $.identifier))),
        // TODO: add support for multiple attributes
        optional(seq(",", field("attribute_id", $.identifier))),
        ";",
      ),

    attribute_declaration: ($) =>
      seq("attribute", field("attribute_id", $.identifier), ";"),

    expandattribute_declaration: ($) =>
      // TODO: add support for multiple attributes
      seq(
        "expandattribute",
        field("attribute_id", $.identifier),
        field("expand_value", $.boolean),
        ";",
      ),

    typeattribute_declaration: ($) =>
      seq(
        "typeattribute",
        field("type_id", $.identifier),
        // TODO: add support for multiple attributes
        field("attribute_id", $.identifier),
        ";",
      ),

    typealias_declaration: ($) =>
      seq(
        "typealias",
        field("type_id", $.identifier),
        "alias",
        // TODO: add support for multiple alias
        field("alias_id", $.identifier),
        ";",
      ),

    permissive_declaration: ($) =>
      seq("permissive", field("type_id", $.identifier), ";"),

    type_transition_declaration: ($) =>
      seq(
        "type_transition",
        // TODO: add support for multiple types
        field("source_type", $.identifier),
        // TODO: add support for multiple types
        field("target_type", $.identifier),
        ":",
        // TODO: add support for multiple classes
        field("class", $.classes),
        field("default_type", $.identifier),
        // WARN: This is causing conflict
        // optional(field("object_name", $.identifier)),
      ),

    type_change_declaration: ($) =>
      seq(
        "type_change",
        // TODO: add support for multiple types
        field("source_type", $.identifier),
        // TODO: add support for multiple types
        field("target_type", $.identifier),
        ":",
        // TODO: add support for multiple classes
        field("class", $.classes),
        field("change_type", $.identifier),
      ),

    type_member_declaration: ($) =>
      seq(
        "type_member",
        // TODO: add support for multiple types
        field("source_type", $.identifier),
        // TODO: add support for multiple types
        field("target_type", $.identifier),
        ":",
        // TODO: add support for multiple classes
        field("class", $.classes),
        field("member_type", $.identifier),
      ),

    /*
     * ...
     */
    role_declaration: ($) =>
      seq(
        "role",
        field("name", $.identifier),
        "types",
        field("type", $.identifier),
        ";",
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
    // https://selinuxproject.org/page/ObjectClassesPerms
    classes: ($) =>
      choice(
        "appletalk_socket",
        "association",
        "blk_file",
        "bpf",
        "cap_userns",
        "cap2_userns",
        "capability",
        "capability2",
        "chr_file",
        "dccp_socket",
        "dgram_socket_class_set",
        "dir",
        "fd",
        "fifo_file",
        "file",
        "filesystem",
        "ipc",
        "kernel_service",
        "key",
        "key_socket",
        "lnk_file",
        "memprotect",
        "msg",
        "msgq",
        "netif",
        "netlink_socket",
        "netlink_audit_socket",
        "netlink_dnrt_socket",
        "netlink_firewall_socket",
        "netlink_ip6fw_socket",
        "netlink_kobject_uevent_socket",
        "netlink_nflog_socket",
        "netlink_route_socket",
        "netlink_selinux_socket",
        "netlink_tcpdiag_socket",
        "netlink_xfrm_socket",
        "node",
        "packet",
        "packet_socket",
        "peer",
        "process",
        "process2",
        "rawip_socket",
        "security",
        "service",
        "sem",
        "shm",
        "sock_file",
        "socket",
        "system",
        "tcp_socket",
        "tun_socket",
        "udp_socket",
        "unix_dgram_socket",
        "unix_stream_socket",
        "db_blob",
        "db_column",
        "db_database",
        "db_procedure",
        "db_table",
        "db_tuple",
        "dbus",
        "context",
        "nscd",
        "passwd",
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
