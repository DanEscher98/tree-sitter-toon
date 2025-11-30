# Development Log

## v0.1.0 - Initial Release

- Implemented tree-sitter grammar for TOON (Token-Oriented Object Notation) v3.0 spec
- External scanner for indentation-sensitive parsing
- Support for objects, tabular arrays, list arrays, dotted keys, all delimiter types

## v0.1.1 - nvim-treesitter Query Files

- Added `highlights.scm` for syntax highlighting
- Added `folds.scm` for code folding
- Added `indents.scm` for auto-indentation
- Added `locals.scm` for scope tracking
- Added MIT LICENSE
- Submitted PR to nvim-treesitter (#8305) - closed with feedback to beta-test first

## v0.1.2 - CI/CD and Language Bindings

- Added GitHub Actions workflows (CI, Lint, Publish)
- Generated language bindings (Node.js, Rust, Go, Python, Swift)
- Upgraded to tree-sitter v0.25 (ABI version 15)
- Fixed Rust bindings to include external scanner
- Added ESLint configuration

## v0.1.3 - npm Publishing

- Published to npm as `@danyiel-colin/tree-sitter-toon`
  - Unscoped name `tree-sitter-toon` was already taken
- Simplified publish workflow (upstream tree-sitter/workflows had ABI compatibility issues)
- Updated README with installation guides and beta testing notice
- Added Dependabot for GitHub Actions updates

## Current Status

- **CI**: Passing (Ubuntu, Windows, macOS)
- **npm**: [@danyiel-colin/tree-sitter-toon](https://www.npmjs.com/package/@danyiel-colin/tree-sitter-toon)
- **Tests**: 53 parser tests passing

## Next Steps

1. Beta test with real users via custom nvim-treesitter config
2. Collect feedback and fix parsing issues
3. Re-submit PR to nvim-treesitter once stable
