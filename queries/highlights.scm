; The order matters!!!

(comment) @comment @spell

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ";"
] @punctuation.delimiter

[
 ":"
 "~"
 "-"
 ; "--"
] @operator

[
  "true"
  "false"
] @boolean

[
  ; "alias"
  ; "attribute"
  "bool"
  ; "dominance"
  "role"
  ; "roles"
  "type"
  ; "type_change"
  ; "type_transition"
  ; "typealias"
  ; "typeattribute"
  "types"
  ; "user"
] @keyword


(classes) @type.builtin
(permissions) @attribute
(rule_name) @keyword

(type
  (identifier) @variable)

((type
  (identifier) @variable.builtin)
  (#eq? @variable.builtin "self"))

(macro_usage
    name: (identifier) @function)

(arguments
    argument: (argument) @variable)

(type_declaration
    name: (identifier) @variable)

(boolean_declaration
    name: (identifier) @variable)
