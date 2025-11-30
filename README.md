# tree-sitter-toon

Tree-sitter grammar for [TOON](https://github.com/toon-format/spec) (Token-Oriented Object Notation).

## Features

- Full TOON spec compliance (v3.0)
- External scanner for indentation-sensitive parsing
- Support for all TOON constructs:
  - Objects with nested structures
  - Tabular arrays with field lists
  - List arrays with mixed content
  - All delimiter types (comma, tab, pipe)
  - Dotted keys (`a.b.c: value`)
  - Quoted keys and strings with escape sequences

## Installation

### Neovim (with nvim-treesitter)

#### lazy.nvim

```lua
{
  "nvim-treesitter/nvim-treesitter",
  build = ":TSUpdate",
  config = function()
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.toon = {
      install_info = {
        url = "https://github.com/DanEscher98/tree-sitter-toon",
        files = { "src/parser.c", "src/scanner.c" },
        branch = "main",
      },
      filetype = "toon",
    }

    require("nvim-treesitter.configs").setup({
      ensure_installed = { "toon" },
      highlight = { enable = true },
    })
  end,
}
```

#### packer.nvim

```lua
use {
  "nvim-treesitter/nvim-treesitter",
  run = ":TSUpdate",
  config = function()
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.toon = {
      install_info = {
        url = "https://github.com/DanEscher98/tree-sitter-toon",
        files = { "src/parser.c", "src/scanner.c" },
        branch = "main",
      },
      filetype = "toon",
    }

    require("nvim-treesitter.configs").setup({
      ensure_installed = { "toon" },
      highlight = { enable = true },
    })
  end,
}
```

#### vim-plug

```vim
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
```

Then in your init.lua:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.toon = {
  install_info = {
    url = "https://github.com/DanEscher98/tree-sitter-toon",
    files = { "src/parser.c", "src/scanner.c" },
    branch = "main",
  },
  filetype = "toon",
}

require("nvim-treesitter.configs").setup({
  ensure_installed = { "toon" },
  highlight = { enable = true },
})
```

### File Type Detection

Add to your Neovim config:

```lua
vim.filetype.add({
  extension = {
    toon = "toon",
  },
})
```

### Manual Installation (CLI)

```bash
npm install
npm run generate
npm test
```

## Usage

### Parsing a File

```bash
npx tree-sitter parse example.toon
```

### Running Tests

```bash
npm test
```

## Example

```toon
# Simple object
name: Alice
age: 30
active: true

# Tabular array
users[3]{id,name,role}:
  1,Alice,admin
  2,Bob,user
  3,Charlie,guest

# Nested object
config:
  database:
    host: localhost
    port: 5432
  features:
    - logging
    - metrics
```

## Query Files

The grammar includes query files for full nvim-treesitter integration:

### highlights.scm

Syntax highlighting with standard Neovim capture groups:

| Node Type | Capture Group |
|-----------|---------------|
| `null`, `true`, `false` | `@constant.builtin`, `@boolean` |
| `number`, `integer` | `@number` |
| `quoted_string`, `unquoted_string` | `@string` |
| `escape_sequence` | `@string.escape` |
| `identifier` (in keys) | `@property` |
| `:`, `,`, `\|`, `.` | `@punctuation.delimiter` |
| `[`, `]`, `{`, `}` | `@punctuation.bracket` |
| `-` (list marker) | `@punctuation.special` |

### folds.scm

Code folding support for:
- Nested objects (`pair` with `object` value)
- Array declarations with content
- Root arrays with content
- List items with nested objects

### indents.scm

Auto-indentation for:
- Nested objects
- Array content blocks
- List items with nested content

### locals.scm

Scope and definition tracking for:
- Objects as scopes
- Keys as local definitions
- Field names as definitions

## License

MIT
