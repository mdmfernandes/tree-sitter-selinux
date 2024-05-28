; The order matters!!!

(comment) @comment @spell

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket


";" @punctuation.delimiter

[
  "true"
  "false"
] @boolean

[
  "alias"
  "allow"
  "attribute"
  "attribute_role"
  "bool"
  "expandattribute"
  "permissive"
  "role"
  "role_transition"
  "roleattribute"
  "type"
  "type_change"
  "type_member"
  "type_transition"
  "typealias"
  "typeattribute"
  "types"
] @keyword

"interface" @keyword.function

[
 ":"
 (complement)
 (negative)
] @operator

(expansion) @variable.parameter
; "$" @punctuation.special) @none


(classes) @type.builtin
(permissions) @attribute
(rule_name) @keyword

(macro_declaration
  name: (word) @function)

(type
  (identifier) @variable)

((type
  (identifier) @variable.builtin)
  (#eq? @variable.builtin "self"))

(macro_usage
    name: (word) @function)

(arguments
    argument: (argument) @variable)

(type_declaration
    (identifier) @variable)

(attribute_declaration
    attribute_id: (identifier) @variable)

(permissive_declaration
    type_id: (identifier) @variable)

(boolean_declaration
    (boolean) @variable)
