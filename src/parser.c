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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         KAFEL_YYSTYPE
#define YYLTYPE         KAFEL_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         kafel_yyparse
#define yylex           kafel_yylex
#define yyerror         kafel_yyerror
#define yydebug         kafel_yydebug
#define yynerrs         kafel_yynerrs


/* Copy the first part of user declarations.  */
#line 26 "parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "parser.h"
#include "lexer.h"

void yyerror(YYLTYPE * loc, struct kafel_ctxt* ctxt, yyscan_t scanner,
             const char *msg);

#define emit_error(loc, fmt, ...)                          \
    do {                                                   \
        append_error(ctxt, "%d:%d: "fmt, (loc).first_line, \
                    (loc).first_column, ##__VA_ARGS__);    \
    } while(0)                                             \

#define INVALID_ARG_SIZE -1

#line 94 "parser.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_KAFEL_YY_PARSER_H_INCLUDED
# define YY_KAFEL_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef KAFEL_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define KAFEL_YYDEBUG 1
#  else
#   define KAFEL_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define KAFEL_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined KAFEL_YYDEBUG */
#if KAFEL_YYDEBUG
extern int kafel_yydebug;
#endif
/* "%code requires" blocks.  */
#line 46 "parser.y" /* yacc.c:355  */

#include <stdint.h>

#include "context.h"
#include "expression.h"
#include "policy.h"
#include "syscall.h"

#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

#line 146 "parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef KAFEL_YYTOKENTYPE
# define KAFEL_YYTOKENTYPE
  enum kafel_yytokentype
  {
    BIT_AND = 258,
    BIT_OR = 259,
    LOGIC_OR = 260,
    LOGIC_AND = 261,
    IDENTIFIER = 262,
    NUMBER = 263,
    POLICY = 264,
    USE = 265,
    DEFAULT = 266,
    SYSCALL = 267,
    DEFINE = 268,
    ALLOW = 269,
    KILL = 270,
    DENY = 271,
    ERRNO = 272,
    TRAP = 273,
    TRACE = 274,
    GT = 275,
    LT = 276,
    GE = 277,
    LE = 278,
    EQ = 279,
    NEQ = 280
  };
#endif

/* Value type.  */
#if ! defined KAFEL_YYSTYPE && ! defined KAFEL_YYSTYPE_IS_DECLARED

union KAFEL_YYSTYPE
{
#line 82 "parser.y" /* yacc.c:355  */

    char *id;
    uint32_t syscall_nr;
    uint32_t action;
    uint64_t number;
    struct expr_tree *expr;
    struct syscall_descriptor* syscall_desc;
    struct syscall_filter *filter;
    struct filterslist filters;
    struct policy_entry *entry;
    struct entrieslist entries;
    struct policy *policy;

#line 198 "parser.c" /* yacc.c:355  */
};

typedef union KAFEL_YYSTYPE KAFEL_YYSTYPE;
# define KAFEL_YYSTYPE_IS_TRIVIAL 1
# define KAFEL_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined KAFEL_YYLTYPE && ! defined KAFEL_YYLTYPE_IS_DECLARED
typedef struct KAFEL_YYLTYPE KAFEL_YYLTYPE;
struct KAFEL_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define KAFEL_YYLTYPE_IS_DECLARED 1
# define KAFEL_YYLTYPE_IS_TRIVIAL 1
#endif



int kafel_yyparse (struct kafel_ctxt* ctxt, yyscan_t scanner);
/* "%code provides" blocks.  */
#line 60 "parser.y" /* yacc.c:355  */

#define YYSTYPE KAFEL_YYSTYPE
typedef union YYSTYPE YYSTYPE;

#define YYLTYPE KAFEL_YYLTYPE
typedef struct YYLTYPE YYLTYPE;

#define YY_DECL \
      int kafel_yylex(YYSTYPE* yylval_param, YYLTYPE* yylloc_param, \
                      struct kafel_ctxt* ctxt, yyscan_t yyscanner)
YY_DECL;

#line 237 "parser.c" /* yacc.c:355  */

#endif /* !YY_KAFEL_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 243 "parser.c" /* yacc.c:358  */

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
         || (defined KAFEL_YYLTYPE_IS_TRIVIAL && KAFEL_YYLTYPE_IS_TRIVIAL \
             && defined KAFEL_YYSTYPE_IS_TRIVIAL && KAFEL_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   116

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  109

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
      29,    30,     2,     2,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      25
};

#if KAFEL_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   132,   136,   140,   152,   167,   168,   176,
     177,   186,   187,   191,   205,   206,   210,   211,   212,   213,
     221,   229,   240,   241,   250,   251,   252,   256,   272,   279,
     285,   291,   307,   312,   329,   330,   334,   336,   340,   342,
     346,   347,   348,   349,   350,   351,   352,   353,   357,   358,
     359,   363,   364,   383,   384,   388,   389,   393
};
#endif

#if KAFEL_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BIT_AND", "BIT_OR", "LOGIC_OR",
  "LOGIC_AND", "IDENTIFIER", "NUMBER", "POLICY", "USE", "DEFAULT",
  "SYSCALL", "DEFINE", "ALLOW", "KILL", "DENY", "ERRNO", "TRAP", "TRACE",
  "GT", "LT", "GE", "LE", "EQ", "NEQ", "'{'", "'}'", "','", "'('", "')'",
  "'['", "']'", "'!'", "'#'", "$accept", "program", "policies",
  "use_policy", "policy", "policy_statements", "policy_statement",
  "use_statement", "action_block", "action", "syscall_filters",
  "syscall_filter", "syscall_id", "syscall", "syscall_args", "bool_expr",
  "or_bool_expr", "and_bool_expr", "primary_bool_expr", "masked_op",
  "operand", "maybe_const_defs", "const_defs", "const_def", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   123,   125,    44,    40,
      41,    91,    93,    33,    35
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -33,    14,    10,    35,   -33,   -70,    47,   -70,    62,    67,
     -70,   -70,    48,    58,    78,   -70,   -70,   -70,    24,    76,
      79,   -70,   -70,   -70,    59,    60,    61,   -70,   -11,   -70,
     -70,   -70,    65,    49,   -70,    84,    85,    86,   -70,    43,
       2,   -70,    66,    68,    69,   -70,   -70,    64,   -70,    51,
     -70,    71,    77,   -70,   -70,   -70,    89,   -70,    -4,    -5,
      -3,    70,   -70,   -70,   -70,   -15,   -70,   -70,   -70,    -1,
      -1,    53,    96,    98,   -70,    50,   102,   -70,    99,   -70,
       7,    25,   -70,   -70,    -1,    -1,    -1,     4,     4,     4,
       4,     4,     4,    75,   -70,   -70,   -70,    96,    98,   -70,
       4,   -70,   -70,   -70,   -70,   -70,   -70,   -70,    80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      53,     0,     0,     0,    54,    55,     0,     1,     0,     2,
       4,    56,     0,     0,     0,     3,     5,    57,     0,     0,
       0,    16,    18,    17,     0,     0,     0,     7,     0,     9,
      11,    12,     0,     0,    13,     0,     0,     0,     8,     0,
       0,     6,     0,     0,     0,    10,    27,     0,    14,     0,
      22,    29,    24,    19,    21,    20,     0,    15,     0,     0,
       0,     0,    23,    32,    30,     0,    52,    51,    25,     0,
       0,     0,    35,    37,    39,     0,    49,    28,     0,    31,
       0,     0,    41,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    40,    50,    34,    36,    38,
       0,    42,    43,    44,    45,    46,    47,    48,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   100,   -70,    72,   -70,   -70,    74,
     -70,    54,   -70,   -70,   -70,    39,    29,    30,   -34,   -69,
      21,   -70,   -70,   112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     9,    15,    10,    28,    29,    30,    31,    32,
      49,    50,    51,    52,    65,    71,    72,    73,    74,    75,
      76,     3,     4,     5
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      81,     1,    63,    46,    66,    67,    66,    67,    47,    46,
       7,    66,    67,    78,    47,    79,    38,    39,   101,   102,
     103,   104,   105,   106,    68,    64,    69,     6,    69,    48,
      70,   108,    70,   100,    20,    84,    82,    95,    21,    22,
      23,    24,    25,    26,     8,    87,    88,    89,    90,    91,
      92,    27,    99,    20,    12,    96,    17,    21,    22,    23,
      24,    25,    26,    21,    22,    23,    24,    25,    26,    13,
      87,    88,    89,    90,    91,    92,     8,    14,    57,    58,
      83,    84,    66,    67,    18,    19,    34,    33,    35,    36,
      37,    40,    42,    43,    44,    56,    53,    61,    54,    55,
      59,    85,    77,    60,    86,    93,    94,    41,    80,    16,
      96,    45,    62,    97,   107,    98,    11
};

static const yytype_uint8 yycheck[] =
{
      69,    34,     7,     7,     7,     8,     7,     8,    12,     7,
       0,     7,     8,    28,    12,    30,    27,    28,    87,    88,
      89,    90,    91,    92,    27,    30,    29,    13,    29,    27,
      33,   100,    33,    29,    10,    28,    70,    30,    14,    15,
      16,    17,    18,    19,     9,    20,    21,    22,    23,    24,
      25,    27,    86,    10,     7,    30,     8,    14,    15,    16,
      17,    18,    19,    14,    15,    16,    17,    18,    19,     7,
      20,    21,    22,    23,    24,    25,     9,    10,    27,    28,
      27,    28,     7,     8,    26,     7,     7,    11,    29,    29,
      29,    26,     8,     8,     8,    31,    30,     8,    30,    30,
      29,     5,    32,    26,     6,     3,     7,    33,    69,     9,
      30,    39,    58,    84,    93,    85,     4
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    36,    56,    57,    58,    13,     0,     9,    37,
      39,    58,     7,     7,    10,    38,    39,     8,    26,     7,
      10,    14,    15,    16,    17,    18,    19,    27,    40,    41,
      42,    43,    44,    11,     7,    29,    29,    29,    27,    28,
      26,    44,     8,     8,     8,    41,     7,    12,    27,    45,
      46,    47,    48,    30,    30,    30,    31,    27,    28,    29,
      26,     8,    46,     7,    30,    49,     7,     8,    27,    29,
      33,    50,    51,    52,    53,    54,    55,    32,    28,    30,
      50,    54,    53,    27,    28,     5,     6,    20,    21,    22,
      23,    24,    25,     3,     7,    30,    30,    51,    52,    53,
      29,    54,    54,    54,    54,    54,    54,    55,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    39,    39,    40,
      40,    41,    41,    42,    43,    43,    44,    44,    44,    44,
      44,    44,    45,    45,    46,    46,    46,    47,    47,    48,
      48,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    55,    55,    56,    56,    57,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     4,     4,     5,     1,
       3,     1,     1,     2,     3,     4,     1,     1,     1,     4,
       4,     4,     1,     3,     1,     3,     4,     1,     4,     1,
       3,     4,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     0,     1,     1,     2,     4
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
      yyerror (&yylloc, ctxt, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if KAFEL_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined KAFEL_YYLTYPE_IS_TRIVIAL && KAFEL_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, ctxt, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct kafel_ctxt* ctxt, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (ctxt);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct kafel_ctxt* ctxt, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, ctxt, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, struct kafel_ctxt* ctxt, yyscan_t scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , ctxt, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, ctxt, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !KAFEL_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !KAFEL_YYDEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct kafel_ctxt* ctxt, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (ctxt);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 7: /* IDENTIFIER  */
#line 126 "parser.y" /* yacc.c:1257  */
      { free(((*yyvaluep).id)); }
#line 1215 "parser.c" /* yacc.c:1257  */
        break;

    case 39: /* policy  */
#line 119 "parser.y" /* yacc.c:1257  */
      { policy_destroy(&((*yyvaluep).policy)); }
#line 1221 "parser.c" /* yacc.c:1257  */
        break;

    case 40: /* policy_statements  */
#line 121 "parser.y" /* yacc.c:1257  */
      { policy_entries_destroy(&((*yyvaluep).entries)); }
#line 1227 "parser.c" /* yacc.c:1257  */
        break;

    case 41: /* policy_statement  */
#line 120 "parser.y" /* yacc.c:1257  */
      { policy_entry_destroy(&((*yyvaluep).entry)); }
#line 1233 "parser.c" /* yacc.c:1257  */
        break;

    case 42: /* use_statement  */
#line 120 "parser.y" /* yacc.c:1257  */
      { policy_entry_destroy(&((*yyvaluep).entry)); }
#line 1239 "parser.c" /* yacc.c:1257  */
        break;

    case 43: /* action_block  */
#line 120 "parser.y" /* yacc.c:1257  */
      { policy_entry_destroy(&((*yyvaluep).entry)); }
#line 1245 "parser.c" /* yacc.c:1257  */
        break;

    case 45: /* syscall_filters  */
#line 123 "parser.y" /* yacc.c:1257  */
      { syscall_filters_destroy(&((*yyvaluep).filters)); }
#line 1251 "parser.c" /* yacc.c:1257  */
        break;

    case 46: /* syscall_filter  */
#line 122 "parser.y" /* yacc.c:1257  */
      { syscall_filter_destroy(&((*yyvaluep).filter)); }
#line 1257 "parser.c" /* yacc.c:1257  */
        break;

    case 47: /* syscall_id  */
#line 124 "parser.y" /* yacc.c:1257  */
      { syscall_descriptor_destroy(&((*yyvaluep).syscall_desc)); }
#line 1263 "parser.c" /* yacc.c:1257  */
        break;

    case 50: /* bool_expr  */
#line 125 "parser.y" /* yacc.c:1257  */
      { expr_destroy(&((*yyvaluep).expr)); }
#line 1269 "parser.c" /* yacc.c:1257  */
        break;

    case 51: /* or_bool_expr  */
#line 125 "parser.y" /* yacc.c:1257  */
      { expr_destroy(&((*yyvaluep).expr)); }
#line 1275 "parser.c" /* yacc.c:1257  */
        break;

    case 52: /* and_bool_expr  */
#line 125 "parser.y" /* yacc.c:1257  */
      { expr_destroy(&((*yyvaluep).expr)); }
#line 1281 "parser.c" /* yacc.c:1257  */
        break;

    case 53: /* primary_bool_expr  */
#line 125 "parser.y" /* yacc.c:1257  */
      { expr_destroy(&((*yyvaluep).expr)); }
#line 1287 "parser.c" /* yacc.c:1257  */
        break;

    case 54: /* masked_op  */
#line 125 "parser.y" /* yacc.c:1257  */
      { expr_destroy(&((*yyvaluep).expr)); }
#line 1293 "parser.c" /* yacc.c:1257  */
        break;

    case 55: /* operand  */
#line 125 "parser.y" /* yacc.c:1257  */
      { expr_destroy(&((*yyvaluep).expr)); }
#line 1299 "parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (struct kafel_ctxt* ctxt, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined KAFEL_YYLTYPE_IS_TRIVIAL && KAFEL_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, ctxt, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 137 "parser.y" /* yacc.c:1646  */
    {
          register_policy(ctxt, (yyvsp[0].policy));
        }
#line 1595 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 141 "parser.y" /* yacc.c:1646  */
    {
          if (lookup_policy(ctxt, (yyvsp[0].policy)->name) != NULL) {
              emit_error((yylsp[0]), "Redefinition of policy `%s'", (yyvsp[0].policy)->name);
              policy_destroy(&(yyvsp[0].policy));
              YYERROR;
          }
          register_policy(ctxt, (yyvsp[0].policy));
        }
#line 1608 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 153 "parser.y" /* yacc.c:1646  */
    {
          struct policy* used = lookup_policy(ctxt, (yyvsp[-2].id));
          if (used == NULL) {
              emit_error((yylsp[-2]), "Undefined policy `%s'", (yyvsp[-2].id));
              free((yyvsp[-2].id)); (yyvsp[-2].id) = NULL;
              YYERROR;
          }
          ctxt->used_policy = used;
          ctxt->default_action = (yyvsp[0].action);
          free((yyvsp[-2].id));
        }
#line 1624 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.policy) = policy_create((yyvsp[-2].id), NULL); free((yyvsp[-2].id)); }
#line 1630 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 169 "parser.y" /* yacc.c:1646  */
    {
          (yyval.policy) = policy_create((yyvsp[-3].id), &(yyvsp[-1].entries));
          free((yyvsp[-3].id));
        }
#line 1639 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 176 "parser.y" /* yacc.c:1646  */
    { TAILQ_INIT(&(yyval.entries)); TAILQ_INSERT_TAIL(&(yyval.entries), (yyvsp[0].entry), entries); }
#line 1645 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "parser.y" /* yacc.c:1646  */
    {
          TAILQ_INIT(&(yyval.entries));
          TAILQ_CONCAT(&(yyval.entries), &(yyvsp[-2].entries), entries);
          TAILQ_INSERT_TAIL(&(yyval.entries), (yyvsp[0].entry), entries);
        }
#line 1655 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 192 "parser.y" /* yacc.c:1646  */
    {
            struct policy* used = lookup_policy(ctxt, (yyvsp[0].id));
            if (used == NULL) {
                emit_error((yylsp[0]), "Undefined policy `%s'", (yyvsp[0].id));
                free((yyvsp[0].id)); (yyvsp[0].id) = NULL;
                YYERROR;
            }
            (yyval.entry) = policy_use_create(used);
            free((yyvsp[0].id));
        }
#line 1670 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.entry) = policy_action_create((yyvsp[-2].action), NULL); }
#line 1676 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.entry) = policy_action_create((yyvsp[-3].action), &(yyvsp[-1].filters)); }
#line 1682 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval.action) = ACTION_ALLOW; }
#line 1688 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.action) = ACTION_KILL; }
#line 1694 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.action) = ACTION_KILL; }
#line 1700 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 214 "parser.y" /* yacc.c:1646  */
    {
          if ((yyvsp[-1].number) > 0xffff) {
            emit_error((yylsp[-1]), "Errno value %"PRIu64" out of range (0-65535)", (yyvsp[-1].number));
            YYERROR;
          }
          (yyval.action) = ACTION_ERRNO | ((yyvsp[-1].number) & 0xffff);
        }
#line 1712 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 222 "parser.y" /* yacc.c:1646  */
    {
          if ((yyvsp[-1].number) > 0xffff) {
            emit_error((yylsp[-1]), "Trace value %"PRIu64" out of range (0-65535)", (yyvsp[-1].number));
            YYERROR;
          }
          (yyval.action) = ACTION_TRACE | ((yyvsp[-1].number) & 0xffff);
        }
#line 1724 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 230 "parser.y" /* yacc.c:1646  */
    {
          if ((yyvsp[-1].number) > 0xffff) {
            emit_error((yylsp[-1]), "Trap value %"PRIu64" out of range (0-65535)", (yyvsp[-1].number));
            YYERROR;
          }
          (yyval.action) = ACTION_TRAP | ((yyvsp[-1].number) & 0xffff);
        }
#line 1736 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 240 "parser.y" /* yacc.c:1646  */
    { TAILQ_INIT(&(yyval.filters)); TAILQ_INSERT_TAIL(&(yyval.filters), (yyvsp[0].filter), filters); }
#line 1742 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 242 "parser.y" /* yacc.c:1646  */
    {
          TAILQ_INIT(&(yyval.filters));
          TAILQ_CONCAT(&(yyval.filters), &(yyvsp[-2].filters), filters);
          TAILQ_INSERT_TAIL(&(yyval.filters), (yyvsp[0].filter), filters);
        }
#line 1752 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval.filter) = syscall_filter_create((yyvsp[0].syscall_nr), NULL); }
#line 1758 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.filter) = syscall_filter_create((yyvsp[-2].syscall_nr), NULL); }
#line 1764 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.filter) = syscall_filter_create((yyvsp[-3].syscall_nr), (yyvsp[-1].expr)); }
#line 1770 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 257 "parser.y" /* yacc.c:1646  */
    {
            uint64_t value = 0;
            if (lookup_const(ctxt, (yyvsp[0].id), &value) == 0) {
                (yyval.syscall_desc) = syscall_custom(value);
            } else {
                (yyval.syscall_desc) = (struct syscall_descriptor*)
                        syscall_lookup(ctxt->syscalls, (yyvsp[0].id));
                    if ((yyval.syscall_desc) == NULL) {
                    emit_error((yylsp[0]), "Undefined syscall `%s'", (yyvsp[0].id));
                    free((yyvsp[0].id)); (yyvsp[0].id) = NULL;
                    YYERROR;
                }
            }
            free((yyvsp[0].id));
        }
#line 1790 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 273 "parser.y" /* yacc.c:1646  */
    {
            (yyval.syscall_desc) = syscall_custom((yyvsp[-1].number));
        }
#line 1798 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 280 "parser.y" /* yacc.c:1646  */
    {
          (yyval.syscall_nr) = (yyvsp[0].syscall_desc)->nr;
          register_ftrace_args(ctxt, (yyvsp[0].syscall_desc));
          syscall_descriptor_destroy(&(yyvsp[0].syscall_desc));
        }
#line 1808 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 286 "parser.y" /* yacc.c:1646  */
    {
          (yyval.syscall_nr) = (yyvsp[-2].syscall_desc)->nr;
          clean_args(ctxt);
          syscall_descriptor_destroy(&(yyvsp[-2].syscall_desc));
        }
#line 1818 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 292 "parser.y" /* yacc.c:1646  */
    {
          (yyval.syscall_nr) = (yyvsp[-3].syscall_desc)->nr;
          for (int i = 0; i < SYSCALL_MAX_ARGS; ++i) {
            if (ctxt->syscall.args[i].size == INVALID_ARG_SIZE) {
              ctxt->syscall.args[i].size = 8;
              if ((yyvsp[-3].syscall_desc)->args[i].name != NULL) {
                ctxt->syscall.args[i].size = (yyvsp[-3].syscall_desc)->args[i].size;
              }
            }
          }
          syscall_descriptor_destroy(&(yyvsp[-3].syscall_desc));
        }
#line 1835 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 308 "parser.y" /* yacc.c:1646  */
    {
          register_first_arg(ctxt, (yyvsp[0].id), INVALID_ARG_SIZE);
          free((yyvsp[0].id));
        }
#line 1844 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 313 "parser.y" /* yacc.c:1646  */
    {
          if (lookup_var(ctxt, (yyvsp[0].id)) >= 0) {
            emit_error((yylsp[0]), "Redefinition of argument `%s'", (yyvsp[0].id));
            free((yyvsp[0].id)); (yyvsp[0].id) = NULL;
            YYERROR;
          }
          if (register_arg(ctxt, (yyvsp[0].id), INVALID_ARG_SIZE)) {
            emit_error((yylsp[0]), "Too many arguments defined for syscall");
            free((yyvsp[0].id)); (yyvsp[0].id) = NULL;
            YYERROR;
          }
          free((yyvsp[0].id));
        }
#line 1862 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1868 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1874 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1880 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1886 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 341 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1892 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1898 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1904 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_unary(EXPR_NOT, (yyvsp[0].expr)); }
#line 1910 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1916 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1922 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_GE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1928 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_LE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1934 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1940 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1946 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_binary(EXPR_BIT_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1952 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1958 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1964 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = expr_create_number((yyvsp[0].number)); }
#line 1970 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 365 "parser.y" /* yacc.c:1646  */
    {
          uint64_t value = 0;
          if (lookup_const(ctxt, (yyvsp[0].id), &value) == 0) {
            (yyval.expr) = expr_create_number(value);
          } else {
            int var = lookup_var(ctxt, (yyvsp[0].id));
            if (var < 0) {
                emit_error((yylsp[0]), "Undefined argument `%s'", (yyvsp[0].id));
                free((yyvsp[0].id)); (yyvsp[0].id) = NULL;
                YYERROR;
            }
            (yyval.expr) = expr_create_var(var, ctxt->syscall.args[var].size);
          }
          free((yyvsp[0].id));
        }
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 394 "parser.y" /* yacc.c:1646  */
    {
          if (lookup_const(ctxt, (yyvsp[-1].id), NULL) == 0) {
            emit_error((yylsp[-3]), "Redefinition of constant `%s'", (yyvsp[-1].id));
          }
          register_const(ctxt, (yyvsp[-1].id), (yyvsp[0].number));
          free((yyvsp[-1].id));
        }
#line 2002 "parser.c" /* yacc.c:1646  */
    break;


#line 2006 "parser.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, ctxt, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, ctxt, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, ctxt, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, ctxt, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, ctxt, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, ctxt, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, ctxt, scanner);
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
#line 403 "parser.y" /* yacc.c:1906  */


void yyerror(YYLTYPE * loc, struct kafel_ctxt* ctxt, yyscan_t scanner,
             const char *msg) {
  if (!ctxt->lexical_error) {
    YYUSE(scanner);
    append_error(ctxt, "%d:%d: %s", loc->first_line, loc->first_column, msg);
  }
}
