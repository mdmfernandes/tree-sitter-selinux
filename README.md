# Tree-sitter grammar for SELinux

## Set in Neovim

### Install

Add the following content to the tree-sitter Neovim config:

```lua
init = function()
    -- Tree-sitter selinux parser
    local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
    parser_config.selinux = {
        install_info = {
            url = "~/src/tree-sitter-selinux",
            files = { "src/parser.c" },
            -- optional entries:
            branch = "main",
            generate_requires_npm = false,
            requires_generate_from_grammar = false,
        },
    }
end,
```

See [nvim-treesitter -> adding
parsers](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#adding-parsers) for details.

### Highlights

The queries must be added to the Neovim runtime directory:

```bash
cd ~/.local/share/nvim/lazy/nvim-treesitter/queries
ln -s ~/src/tree-sitter-selinux/queries ./selinux
```
