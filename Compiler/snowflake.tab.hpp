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

#ifndef YY_YY_SNOWFLAKE_TAB_HPP_INCLUDED
# define YY_YY_SNOWFLAKE_TAB_HPP_INCLUDED
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
    IF = 258,
    ELSE = 259,
    LOOP = 260,
    FUNC = 261,
    OUT = 262,
    VAR = 263,
    INTEGER = 264,
    FLOAT = 265,
    CHAR = 266,
    STRING = 267,
    EQ = 268,
    NOT_EQ = 269,
    LTE = 270,
    GTE = 271,
    AND = 272,
    OR = 273,
    RNG = 274,
    NOT_INIT = 275,
    BOOLEAN = 276,
    ARRAY_INIT = 277,
    INT_NAME = 278,
    FLOAT_NAME = 279,
    CHAR_NAME = 280,
    STRING_NAME = 281
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "snowflake.ypp" /* yacc.c:1909  */
 
    Node* node;
    Code* code;
    Function * function;
    Block* block;
    Statement* statement;
    Expression* expression;
    Assignment* assignment;
    AssignmentBasic* assignmentBasic;
    Identifier* identifier;
    Variable* variable;
    Integer* integer;
    Parameters* params;
    Parameter* param;
    TypeName* typeName;
    string* s;

#line 99 "snowflake.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SNOWFLAKE_TAB_HPP_INCLUDED  */
