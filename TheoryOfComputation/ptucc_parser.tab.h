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
#line 19 "ptucc_parser.y" /* yacc.c:1909  */

	char* crepr;

#line 106 "ptucc_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */
