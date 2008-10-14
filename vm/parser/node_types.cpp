/* This file is generated by node_types.rb. Do not edit. */

#include "node_types.hpp"

namespace rubinius {
  namespace parser {

    static const char node_types[] = {
      "method\0"
      "fbody\0"
      "cfunc\0"
      "scope\0"
      "block\0"
      "if\0"
      "case\0"
      "when\0"
      "opt_n\0"
      "while\0"
      "until\0"
      "iter\0"
      "for\0"
      "break\0"
      "next\0"
      "redo\0"
      "retry\0"
      "begin\0"
      "rescue\0"
      "resbody\0"
      "ensure\0"
      "and\0"
      "or\0"
      "not\0"
      "masgn\0"
      "lasgn\0"
      "dasgn\0"
      "dasgn_curr\0"
      "gasgn\0"
      "iasgn\0"
      "cdecl\0"
      "cvasgn\0"
      "cvdecl\0"
      "op_asgn1\0"
      "op_asgn2\0"
      "op_asgn_and\0"
      "op_asgn_or\0"
      "call\0"
      "fcall\0"
      "vcall\0"
      "super\0"
      "zsuper\0"
      "array\0"
      "zarray\0"
      "hash\0"
      "return\0"
      "yield\0"
      "lvar\0"
      "dvar\0"
      "gvar\0"
      "ivar\0"
      "const\0"
      "cvar\0"
      "nth_ref\0"
      "back_ref\0"
      "match\0"
      "match2\0"
      "match3\0"
      "lit\0"
      "str\0"
      "dstr\0"
      "xstr\0"
      "dxstr\0"
      "evstr\0"
      "dregx\0"
      "dregx_once\0"
      "args\0"
      "argscat\0"
      "argspush\0"
      "splat\0"
      "to_ary\0"
      "svalue\0"
      "block_arg\0"
      "block_pass\0"
      "defn\0"
      "defs\0"
      "alias\0"
      "valias\0"
      "undef\0"
      "class\0"
      "module\0"
      "sclass\0"
      "colon2\0"
      "colon3\0"
      "cref\0"
      "dot2\0"
      "dot3\0"
      "flip2\0"
      "flip3\0"
      "attrset\0"
      "self\0"
      "nil\0"
      "true\0"
      "false\0"
      "defined\0"
      "newline\0"
      "postexe\0"
      "dmethod\0"
      "bmethod\0"
      "memo\0"
      "ifunc\0"
      "dsym\0"
      "attrasgn\0"
      "regex\0"
      "fixnum\0"
      "number\0"
      "hexnum\0"
      "binnum\0"
      "octnum\0"
      "float\0"
      "negate\0"
      "last\0"
      "file\0"
    };

    static const unsigned short node_types_offsets[] = {
      0,
      7,
      13,
      19,
      25,
      31,
      34,
      39,
      44,
      50,
      56,
      62,
      67,
      71,
      77,
      82,
      87,
      93,
      99,
      106,
      114,
      121,
      125,
      128,
      132,
      138,
      144,
      150,
      161,
      167,
      173,
      179,
      186,
      193,
      202,
      211,
      223,
      234,
      239,
      245,
      251,
      257,
      264,
      270,
      277,
      282,
      289,
      295,
      300,
      305,
      310,
      315,
      321,
      326,
      334,
      343,
      349,
      356,
      363,
      367,
      371,
      376,
      381,
      387,
      393,
      399,
      410,
      415,
      423,
      432,
      438,
      445,
      452,
      462,
      473,
      478,
      483,
      489,
      496,
      502,
      508,
      515,
      522,
      529,
      536,
      541,
      546,
      551,
      557,
      563,
      571,
      576,
      580,
      585,
      591,
      599,
      607,
      615,
      623,
      631,
      636,
      642,
      647,
      656,
      662,
      669,
      676,
      683,
      690,
      697,
      703,
      710,
      715
    };

    const char *get_node_type_string(enum node_type nt) {
      return node_types + node_types_offsets[nt];
    }

  };  // namespace parser
};  // namespace rubinius
