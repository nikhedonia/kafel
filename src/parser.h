/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 46 "parser.y" /* yacc.c:1909  */

#include <stdint.h>

#include "context.h"
#include "expression.h"
#include "policy.h"
#include "syscall.h"

#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

#line 66 "parser.h" /* yacc.c:1909  */

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
#line 82 "parser.y" /* yacc.c:1909  */

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

#line 118 "parser.h" /* yacc.c:1909  */
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
#line 60 "parser.y" /* yacc.c:1909  */

#define YYSTYPE KAFEL_YYSTYPE
typedef union YYSTYPE YYSTYPE;

#define YYLTYPE KAFEL_YYLTYPE
typedef struct YYLTYPE YYLTYPE;

#define YY_DECL \
      int kafel_yylex(YYSTYPE* yylval_param, YYLTYPE* yylloc_param, \
                      struct kafel_ctxt* ctxt, yyscan_t yyscanner)
YY_DECL;

#line 157 "parser.h" /* yacc.c:1909  */

#endif /* !YY_KAFEL_YY_PARSER_H_INCLUDED  */
