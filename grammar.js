module.exports = grammar({
  name: "selinux",

  extras: ($) => [
    /\s|\\r?\\n/, // whitespace
    $.comment,
  ],

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
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.type_declaration,
        $.role_declaration,
        $.allow_rule,
        $.neverallow_rule,
        $.boolean_declaration,
        // Add more definitions here for interfaces, macros, etc.
      ),

    comment: (_) => token(seq("#", /.*/)),

    type_declaration: ($) => seq("type", field("name", $.identifier), ";"),

    role_declaration: ($) =>
      seq(
        "role",
        field("name", $.identifier),
        "types",
        field("type", $.identifier),
        ";",
      ),

    allow_rule: ($) =>
      seq(
        "allow",
        field("source_type", $.identifier),
        field("target_type", $.identifier),
        ":",
        field("class", $.identifier),
        "{",
        field("perms", $.permissions),
        "}",
        ";",
      ),

    neverallow_rule: ($) =>
      seq(
        "neverallow",
        field("source_type", $.identifier),
        field("target_type", $.identifier),
        ":",
        field("class", $.identifier),
        field("perms", $.permissions),
        ";",
      ),

    boolean_declaration: ($) =>
      seq(
        "bool",
        field("name", $.identifier),
        field("value", choice("true", "false")),
        ";",
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    permissions: ($) =>
      repeat1(
        choice(
          "read",
          "write",
          "execute",
          "unlink",
          "append",
          "getattr",
          // Add more permissions here
        ),
      ),

    // Define more complex structures like macros, conditionals, etc.
  },
});
