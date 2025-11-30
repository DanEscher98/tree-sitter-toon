import treesitter from "eslint-config-treesitter";

export default [
  ...treesitter,
  {
    rules: {
      // Allow tabs in regex patterns - needed for tab delimiter matching in grammar
      "no-tabs": "off",
    },
  },
];
