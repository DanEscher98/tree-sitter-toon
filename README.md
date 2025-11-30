# tree-sitter-toon

[![CI](https://github.com/DanEscher98/tree-sitter-toon/actions/workflows/ci.yml/badge.svg)](https://github.com/DanEscher98/tree-sitter-toon/actions/workflows/ci.yml)
[![npm](https://img.shields.io/npm/v/@danyiel-colin/tree-sitter-toon)](https://www.npmjs.com/package/@danyiel-colin/tree-sitter-toon)

Tree-sitter grammar for [TOON](https://github.com/toon-format/spec) (Token-Oriented Object Notation).

> **Beta Testing** - This parser is in beta. Please try it out and [report any issues](https://github.com/DanEscher98/tree-sitter-toon/issues)!

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

Add the custom parser configuration to your Neovim config:

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
```

Then install the parser:

```vim
:TSInstall toon
```

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

#### File Type Detection

Add to your Neovim config:

```lua
vim.filetype.add({
  extension = {
    toon = "toon",
  },
})
```

#### Query Files

Copy the query files to your Neovim config for highlighting, folding, and indentation:

```bash
mkdir -p ~/.config/nvim/queries/toon
cp queries/*.scm ~/.config/nvim/queries/toon/
```

Or with lazy.nvim, create a small plugin:

```lua
-- ~/.config/nvim/lua/plugins/toon.lua
return {
  dir = "~/.config/nvim/queries/toon",
  name = "toon-queries",
  ft = "toon",
}
```

### Node.js

```bash
npm install @danyiel-colin/tree-sitter-toon
```

```javascript
const Parser = require("tree-sitter");
const Toon = require("@danyiel-colin/tree-sitter-toon");

const parser = new Parser();
parser.setLanguage(Toon);

const tree = parser.parse(`
name: Alice
age: 30
`);
console.log(tree.rootNode.toString());
```

### Rust

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-toon = { git = "https://github.com/DanEscher98/tree-sitter-toon" }
```

```rust
use tree_sitter::Parser;

fn main() {
    let mut parser = Parser::new();
    parser.set_language(&tree_sitter_toon::LANGUAGE.into()).unwrap();

    let tree = parser.parse("name: hello\n", None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

### CLI

```bash
git clone https://github.com/DanEscher98/tree-sitter-toon
cd tree-sitter-toon
npm install
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

### Playground

```bash
npm run start
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

The grammar includes query files for full editor integration:

| File | Purpose |
|------|---------|
| `highlights.scm` | Syntax highlighting |
| `folds.scm` | Code folding |
| `indents.scm` | Auto-indentation |
| `locals.scm` | Scope/definition tracking |

### Highlight Captures

| Node Type | Capture Group |
|-----------|---------------|
| `null`, `true`, `false` | `@constant.builtin`, `@boolean` |
| `number` | `@number` |
| `quoted_string`, `unquoted_string` | `@string` |
| `escape_sequence` | `@string.escape` |
| `identifier` (in keys) | `@property` |
| `:`, `,`, `\|`, `.` | `@punctuation.delimiter` |
| `[`, `]`, `{`, `}` | `@punctuation.bracket` |
| `-` (list marker) | `@punctuation.special` |

## Contributing

Issues and PRs welcome! Please [report any parsing issues](https://github.com/DanEscher98/tree-sitter-toon/issues) you encounter.

## License

MIT
