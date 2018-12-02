/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 8 "ptucc_parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;

#line 75 "ptucc_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ptucc_parser.tab.h".  */
#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    POSINT = 259,
    KW_INT = 260,
    REAL = 261,
    STRING = 262,
    KW_PROGRAM = 263,
    KW_BEGIN = 264,
    KW_END = 265,
    KW_AND = 266,
    KW_DIV = 267,
    KW_FUNC = 268,
    KW_MOD = 269,
    KW_PROC = 270,
    KW_RESULT = 271,
    KW_ARRAY = 272,
    KW_DO = 273,
    KW_GOTO = 274,
    KW_NOT = 275,
    KW_RETURN = 276,
    KW_BOOLEAN = 277,
    KW_ELSE = 278,
    KW_IF = 279,
    KW_OF = 280,
    KW_THEN = 281,
    KW_CHAR = 282,
    KW_FOR = 283,
    KW_OR = 284,
    KW_REPEAT = 285,
    KW_UNTIL = 286,
    KW_VAR = 287,
    KW_WHILE = 288,
    KW_TO = 289,
    KW_DOWNTO = 290,
    OP_ASS = 291,
    KW_TYPE = 292,
    KW_REAL = 293,
    KW_TRUE = 294,
    KW_FALSE = 295,
    OP_OR = 296,
    OP_AND = 297,
    OP_GRE = 298,
    OP_LESE = 299,
    OP_NE = 300,
    USIGN = 301,
    UNOT = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 167 "ptucc_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 184 "ptucc_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   333

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,     2,     2,     2,
      60,    61,    51,    49,    62,    50,    55,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    56,
      45,    43,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    46,    47,
      48,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   138,   138,   141,   163,   165,   173,   174,   177,   180,
     181,   184,   193,   194,   197,   198,   201,   202,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   217,   218,   221,
     224,   225,   228,   229,   233,   234,   238,   239,   243,   244,
     252,   253,   256,   257,   258,   259,   262,   263,   264,   265,
     268,   269,   273,   276,   277,   278,   281,   282,   290,   290,
     293,   296,   297,   300,   308,   311,   312,   313,   316,   317,
     318,   321,   322,   323,   324,   325,   326,   327,   329,   330,
     331,   334,   335,   336,   337,   338,   341,   342,   345,   346,
     347,   350,   351,   352,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   374,   375,   379,   381,   386,   387,   388,
     392,   400,   403,   404,   407,   408,   409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "POSINT", "KW_INT", "REAL",
  "STRING", "KW_PROGRAM", "KW_BEGIN", "KW_END", "KW_AND", "KW_DIV",
  "KW_FUNC", "KW_MOD", "KW_PROC", "KW_RESULT", "KW_ARRAY", "KW_DO",
  "KW_GOTO", "KW_NOT", "KW_RETURN", "KW_BOOLEAN", "KW_ELSE", "KW_IF",
  "KW_OF", "KW_THEN", "KW_CHAR", "KW_FOR", "KW_OR", "KW_REPEAT",
  "KW_UNTIL", "KW_VAR", "KW_WHILE", "KW_TO", "KW_DOWNTO", "OP_ASS",
  "KW_TYPE", "KW_REAL", "KW_TRUE", "KW_FALSE", "OP_OR", "OP_AND", "'='",
  "'>'", "'<'", "OP_GRE", "OP_LESE", "OP_NE", "'+'", "'-'", "'*'", "'/'",
  "USIGN", "UNOT", "'.'", "';'", "':'", "'['", "']'", "'('", "')'", "','",
  "'!'", "$accept", "empty", "program", "program_decl", "body",
  "type_def_optional", "type_def", "typedef_list", "typedef_statement",
  "statements", "statement_list", "statement", "instruction", "command",
  "array_assign", "expression_with_array", "if_statement", "for_statement",
  "while_statement", "flow_control_body", "data_type",
  "data_type_without_ident", "basic_data_type", "array_dimension",
  "function_type", "param_list", "identifier_list",
  "variable_decl_optional", "variable_decl", "variable_decl_list",
  "variable_declaration", "expression", "expression_logical_or",
  "expression_logical_and", "expression_relational", "expression_term",
  "expression_factor", "expression_cast", "expression_sign",
  "expression_not", "main_expression", "subprograms_decl_list",
  "subprograms_decl", "parameters_list", "parameters_decl", "proc_call",
  "arguments_optional", "arguments_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    61,    62,    60,   298,   299,   300,    43,
      45,    42,    47,   301,   302,    46,    59,    58,    91,    93,
      40,    41,    44,    33
};
# endif

#define YYPACT_NINF -205

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-205)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    32,    53,    24,     7,  -205,    89,  -205,    42,  -205,
    -205,    57,    89,  -205,   125,  -205,  -205,  -205,    33,  -205,
    -205,    22,   125,  -205,  -205,    97,  -205,  -205,    95,     1,
    -205,  -205,  -205,   106,  -205,  -205,  -205,    33,   167,  -205,
     130,   171,   201,   152,  -205,   125,    18,   204,     4,  -205,
     153,  -205,    44,   179,   213,  -205,   235,   214,    66,   235,
    -205,   208,   163,  -205,  -205,   185,  -205,  -205,  -205,  -205,
     165,   166,  -205,  -205,     9,    29,  -205,   164,    18,   226,
    -205,   235,   300,   235,   132,   175,   235,  -205,   176,  -205,
    -205,  -205,     8,  -205,  -205,   262,   262,   207,     8,   217,
      -4,    10,   140,    81,     6,  -205,  -205,  -205,   182,  -205,
     212,   130,  -205,   218,   232,  -205,   130,   235,   125,   125,
     125,   187,    33,  -205,  -205,   192,   300,   -14,  -205,    17,
    -205,  -205,  -205,   191,   196,   235,  -205,   235,   182,  -205,
    -205,   193,   198,   182,    66,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   243,   235,    66,  -205,   300,  -205,    31,
      71,  -205,    86,    88,    33,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,   235,    75,   257,  -205,   239,    10,    10,   140,
     140,    81,    81,    81,    81,    81,    81,     6,     6,  -205,
    -205,  -205,  -205,   219,   109,  -205,  -205,  -205,  -205,    33,
     125,   215,   220,    33,  -205,  -205,  -205,  -205,    66,  -205,
     235,   235,  -205,  -205,    33,    24,  -205,  -205,   253,   255,
     223,    42,    66,    66,    24,  -205,  -205,  -205,    42,   144,
    -205,   130,   160,   270,   130,   225,   273,  -205,   230,  -205
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     6,     2,     7,
       4,     0,     8,     9,     0,    58,     2,    59,     0,    10,
      56,     0,    60,    61,   103,     0,    41,    46,     0,     0,
      47,    49,    48,     0,    40,    42,    45,     0,     0,    62,
       2,     0,     0,     0,   104,     2,     0,     0,     0,    11,
       0,    57,     0,     0,     0,    26,     0,     0,     0,     0,
      12,     0,    13,    14,    17,     0,    21,    22,    23,    16,
       0,     0,     3,    53,     0,     0,    43,     0,     0,     0,
      63,     0,     0,     0,     2,    29,     0,    25,    97,    94,
      95,    96,     0,   101,   102,     0,     0,     0,     0,     0,
      64,    65,    68,    71,    78,    81,    86,    88,    91,   100,
       0,     2,    38,     0,     0,     5,     0,     0,     2,     2,
       0,     0,     0,    50,    44,     0,     2,     0,    24,     0,
     116,   112,   114,     0,   113,     0,    20,     0,    93,    89,
      90,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     2,   107,     0,
       0,   108,     0,     0,     0,    54,    51,    27,    28,    18,
      30,   111,     0,     0,     0,    99,    32,    66,    67,    69,
      70,    72,    75,    74,    77,    76,    73,    79,    80,    84,
      85,    82,    83,     0,     0,    39,    37,    36,    19,     0,
       0,     0,     0,     0,    52,   115,    31,    87,     0,    98,
       0,     0,   110,   109,     0,     2,    55,    33,     0,     0,
       0,     2,     0,     0,     2,     2,    34,    35,     2,     0,
       2,     2,     0,     0,     2,     0,     0,   106,     0,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,    -3,  -205,  -205,  -205,  -193,  -205,  -205,   275,  -104,
    -205,   -38,   -72,   121,  -205,  -205,  -205,  -205,  -205,  -135,
     -33,   194,   -29,  -205,  -205,  -205,    -6,  -204,  -205,  -205,
     267,   -53,  -205,    20,    30,   -32,    34,    39,   108,   105,
      15,   -79,  -205,   174,    80,   -39,  -205,  -205
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,     2,     3,    43,     8,     9,    12,    13,    61,
      62,   112,    64,   179,    65,    85,    66,    67,    68,   113,
      33,    34,    35,    48,    36,    74,   169,    16,    17,    22,
      23,   142,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    25,    44,   170,   171,   109,   133,   134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       7,    69,    63,    99,    50,    15,   114,   163,    21,   186,
     128,    88,    89,    24,    90,    91,    21,    76,   157,    69,
     158,   147,    81,    27,     1,   145,    46,   235,   126,    78,
     207,   132,   231,   136,   240,     4,    26,   146,    27,    75,
      30,   238,    73,    82,    83,    31,    28,    93,    94,   124,
      29,   129,   148,     5,   178,    30,    32,   159,   160,    47,
      31,     6,    79,    10,   167,   120,   155,   156,   137,    52,
     121,    32,    69,    63,    14,   111,   180,    69,   166,    37,
      81,   131,    53,   227,    38,    54,   122,    55,   209,   175,
      56,    38,    11,    38,    57,   178,    58,   236,   237,    59,
      18,    82,    83,   183,    84,    69,    40,   138,   203,   204,
      41,   206,    42,   143,   173,   168,   168,   191,   192,   193,
     194,   195,   196,   177,   155,   156,    69,   210,    20,   215,
     155,   156,   211,    52,   216,    88,    89,   243,    90,    91,
     246,   214,   210,   220,   221,   213,    53,   212,   130,    54,
      38,    55,    92,   241,    56,    45,   239,    41,    57,    42,
      58,   242,    49,    59,   177,   187,   188,   228,   229,   244,
      51,    93,    94,    41,    70,    42,   222,   189,   190,    69,
     226,    95,    96,   149,   150,   151,   152,   153,   154,   197,
     198,   230,    97,    69,    69,    98,   199,   200,   201,   202,
     139,   140,    69,    63,    71,    69,    63,    72,    77,    80,
      88,    89,    27,    90,    91,    86,    87,   110,   115,   116,
      28,   117,     7,   123,    29,   118,   119,    92,    15,    30,
     125,     7,    24,   135,    31,    15,    84,    24,    88,    89,
     161,    90,    91,   144,   174,    32,    93,    94,   162,   164,
     165,   176,   181,   205,   184,    92,    95,    96,   182,   185,
      88,    89,   218,    90,    91,    88,    89,    97,    90,    91,
      98,   232,   224,   233,    93,    94,   225,    92,   219,   234,
     245,   247,    92,   248,    95,    96,   249,    19,   208,    39,
     223,   141,   217,   172,     0,    97,    93,    94,    98,     0,
       0,    93,    94,   127,     0,     0,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,    53,   137,     0,    54,
      98,    55,   137,     0,    56,    98,     0,     0,    57,     0,
      58,     0,     0,    59
};

static const yytype_int16 yycheck[] =
{
       3,    40,    40,    56,    37,     8,    59,   111,    14,   144,
      82,     3,     4,    16,     6,     7,    22,    46,    12,    58,
      14,    11,    36,     5,     8,    29,    25,   231,    81,    25,
     165,    84,   225,    86,   238,     3,     3,    41,     5,    45,
      22,   234,    45,    57,    58,    27,    13,    39,    40,    78,
      17,    83,    42,     0,   126,    22,    38,    51,    52,    58,
      27,    37,    58,    56,   117,    56,    49,    50,    60,     3,
      61,    38,   111,   111,    32,     9,    59,   116,   116,    57,
      36,    84,    16,   218,    62,    19,    57,    21,    57,   122,
      24,    62,     3,    62,    28,   167,    30,   232,   233,    33,
      43,    57,    58,   135,    60,   144,     9,    92,   161,   162,
      13,   164,    15,    98,   120,   118,   119,   149,   150,   151,
     152,   153,   154,   126,    49,    50,   165,    56,     3,   182,
      49,    50,    61,     3,    59,     3,     4,   241,     6,     7,
     244,   174,    56,    34,    35,    57,    16,    61,    16,    19,
      62,    21,    20,     9,    24,    60,   235,    13,    28,    15,
      30,   240,    56,    33,   167,   145,   146,   220,   221,     9,
       3,    39,    40,    13,     3,    15,   209,   147,   148,   218,
     213,    49,    50,    43,    44,    45,    46,    47,    48,   155,
     156,   224,    60,   232,   233,    63,   157,   158,   159,   160,
      95,    96,   241,   241,     3,   244,   244,    55,     4,    56,
       3,     4,     5,     6,     7,    36,     3,     3,    10,    56,
      13,    36,   225,    59,    17,    60,    60,    20,   231,    22,
       4,   234,   235,    58,    27,   238,    60,   240,     3,     4,
      58,     6,     7,    26,    57,    38,    39,    40,    36,    31,
      18,    59,    61,    10,    61,    20,    49,    50,    62,    61,
       3,     4,    23,     6,     7,     3,     4,    60,     6,     7,
      63,    18,    57,    18,    39,    40,    56,    20,    59,    56,
      10,    56,    20,    10,    49,    50,    56,    12,   167,    22,
     210,    97,   184,   119,    -1,    60,    39,    40,    63,    -1,
      -1,    39,    40,     3,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    60,    -1,    19,
      63,    21,    60,    -1,    24,    63,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    66,    67,     3,     0,    37,    65,    69,    70,
      56,     3,    71,    72,    32,    65,    91,    92,    43,    72,
       3,    90,    93,    94,    65,   105,     3,     5,    13,    17,
      22,    27,    38,    84,    85,    86,    88,    57,    62,    94,
       9,    13,    15,    68,   106,    60,    25,    58,    87,    56,
      84,     3,     3,    16,    19,    21,    24,    28,    30,    33,
      65,    73,    74,    75,    76,    78,    80,    81,    82,   109,
       3,     3,    55,    65,    89,    90,    86,     4,    25,    58,
      56,    36,    57,    58,    60,    79,    36,     3,     3,     4,
       6,     7,    20,    39,    40,    49,    50,    60,    63,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   109,
       3,     9,    75,    83,    95,    10,    56,    36,    60,    60,
      56,    61,    57,    59,    86,     4,    95,     3,    76,    99,
      16,    65,    95,   110,   111,    58,    95,    60,   104,   103,
     103,    85,    95,   104,    26,    29,    41,    11,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    12,    14,    51,
      52,    58,    36,    73,    31,    18,    75,    95,    65,    90,
     107,   108,   107,    90,    57,    84,    59,    65,    76,    77,
      59,    61,    62,    99,    61,    61,    83,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   101,   101,    95,    95,    10,    95,    83,    77,    57,
      56,    61,    61,    57,    84,    95,    59,   102,    23,    59,
      34,    35,    84,   108,    57,    56,    84,    83,    95,    95,
      84,    69,    18,    18,    56,    91,    83,    83,    69,   105,
      91,     9,   105,    73,     9,    10,    73,    56,    10,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    67,    68,    69,    69,    70,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    85,    85,    86,    86,    86,    86,
      87,    87,    88,    89,    89,    89,    90,    90,    91,    91,
      92,    93,    93,    94,    95,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   107,
     108,   109,   110,   110,   111,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     3,     3,     1,     1,     2,     1,
       2,     4,     1,     1,     1,     3,     1,     1,     4,     4,
       3,     1,     1,     1,     3,     2,     1,     1,     1,     2,
       3,     4,     4,     6,     8,     8,     4,     4,     1,     3,
       1,     1,     1,     3,     4,     1,     1,     1,     1,     1,
       3,     4,     6,     1,     3,     5,     1,     3,     1,     1,
       2,     1,     2,     4,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     4,     1,     2,
       2,     1,     2,     2,     1,     1,     1,     1,     4,     3,
       1,     1,     1,     1,     2,    15,    13,     1,     1,     3,
       3,     4,     1,     1,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 138 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "";}
#line 1460 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    {
	/* We have a successful parse!
		Check for any errors and generate output.
	*/
	if(yyerror_count==0) {
		printf("/* program  %s */\n", (yyvsp[-5].crepr));
		puts(c_prologue);
		printf("%s", (yyvsp[-4].crepr));
	    printf("%s", (yyvsp[-3].crepr));
		printf("%s", (yyvsp[-2].crepr));
		printf("\n\nint main() %s ", (yyvsp[-1].crepr));
	}
}
#line 1478 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[-1].crepr);}
#line 1484 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{\n%s\treturn 0;\n}\n", (yyvsp[-1].crepr)); }
#line 1490 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1496 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 181 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1502 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 184 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("typedef %s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1508 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1514 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 201 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\t%s;\n", (yyvsp[0].crepr)); }
#line 1520 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\t%s = %s;\n%s", (yyvsp[-3].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1526 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\t%s = %s;\n%s", (yyvsp[-3].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1532 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 207 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tresult = %s;\n",(yyvsp[0].crepr));}
#line 1538 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 208 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1544 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 209 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1550 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1556 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\t%s:%s\n", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1562 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 212 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tgoto %s\n", (yyvsp[0].crepr));}
#line 1568 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\treturn result;\n"); }
#line 1574 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1580 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 224 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("[%s]", (yyvsp[-1].crepr));}
#line 1586 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1592 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tif(%s)\n\t%s\t\n", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1598 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tif(%s)\n%s\telse\n%s\t\n", (yyvsp[-4].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1604 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tfor(%s=%s; %s<=%s; %s++)\n%s\t\n", (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr));}
#line 1610 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 234 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tfor(%s=%s; %s>=%s; %s--)\n%s\t\n", (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr));}
#line 1616 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\twhile(%s)\n%s\t\n", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1622 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\tdo\n%s\n\twhile(%s)\n", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1628 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\t{\n%s\t}\n", (yyvsp[-1].crepr));}
#line 1634 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 257 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*", (yyvsp[0].crepr)); }
#line 1640 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 258 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typeof(%s %s)", (yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1646 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 262 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "int";}
#line 1652 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 263 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "int";}
#line 1658 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 264 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "double";}
#line 1664 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 265 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "char";}
#line 1670 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 268 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("[%s]", (yyvsp[-1].crepr));}
#line 1676 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 269 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1682 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 273 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s(*)(%s)", (yyvsp[0].crepr), (yyvsp[-3].crepr));}
#line 1688 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 277 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1694 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s, %s %s", (yyvsp[-4].crepr), (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1700 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1706 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 293 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s", (yyvsp[0].crepr));}
#line 1712 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 297 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1718 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 300 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));}
#line 1724 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 312 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1730 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 313 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1736 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 317 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1742 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 318 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1748 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 322 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1754 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 323 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1760 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 324 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1766 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 325 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s > %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1772 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 326 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1778 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 327 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s >= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1784 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 330 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1790 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 331 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1796 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 335 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1802 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 336 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1808 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 337 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1814 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 338 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1820 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 342 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("(%s) %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1826 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 346 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1832 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 347 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1838 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 351 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("!%s", (yyvsp[0].crepr));}
#line 1844 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 352 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("!%s", (yyvsp[0].crepr));}
#line 1850 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 357 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = string_ptuc2c((yyvsp[0].crepr));}
#line 1856 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 359 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr));}
#line 1862 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 360 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("(%s)", (yyvsp[-1].crepr));}
#line 1868 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 362 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "1"; }
#line 1874 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 363 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "0"; }
#line 1880 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 375 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));}
#line 1886 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 380 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s(%s){\n%s\t%s result;\n%s%s%s}\n", (yyvsp[-8].crepr), (yyvsp[-13].crepr), (yyvsp[-11].crepr), (yyvsp[-6].crepr), (yyvsp[-8].crepr), (yyvsp[-5].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr));}
#line 1892 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 382 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("void %s(%s){\n%s%s%s%s}\n", (yyvsp[-11].crepr), (yyvsp[-9].crepr), (yyvsp[-6].crepr), (yyvsp[-5].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr));}
#line 1898 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 388 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1904 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 392 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));}
#line 1910 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 400 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1916 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 404 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1922 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 407 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1928 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 408 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1934 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 409 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "result"; }
#line 1940 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1944 "ptucc_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 415 "ptucc_parser.y" /* yacc.c:1906  */
 				/* 		USER CODE		*/

/*
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}

*/
