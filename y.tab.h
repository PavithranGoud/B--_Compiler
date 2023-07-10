/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    END = 258,                     /* END  */
    PRINT = 259,                   /* PRINT  */
    LINE = 260,                    /* LINE  */
    IF = 261,                      /* IF  */
    THEN = 262,                    /* THEN  */
    INPUT = 263,                   /* INPUT  */
    LET = 264,                     /* LET  */
    DEF = 265,                     /* DEF  */
    DIM = 266,                     /* DIM  */
    DATA = 267,                    /* DATA  */
    FOR = 268,                     /* FOR  */
    TO = 269,                      /* TO  */
    REM = 270,                     /* REM  */
    NEXT = 271,                    /* NEXT  */
    STEP = 272,                    /* STEP  */
    GOSUB = 273,                   /* GOSUB  */
    GOTO = 274,                    /* GOTO  */
    RETURN = 275,                  /* RETURN  */
    STOP = 276,                    /* STOP  */
    NEQ = 277,                     /* NEQ  */
    LEQ = 278,                     /* LEQ  */
    GEQ = 279,                     /* GEQ  */
    FUNCTION = 280,                /* FUNCTION  */
    INT = 281,                     /* INT  */
    STR = 282,                     /* STR  */
    FLOAT = 283,                   /* FLOAT  */
    VAR = 284,                     /* VAR  */
    VAR_STR = 285,                 /* VAR_STR  */
    VAR_SP = 286,                  /* VAR_SP  */
    VAR_DP = 287                   /* VAR_DP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define END 258
#define PRINT 259
#define LINE 260
#define IF 261
#define THEN 262
#define INPUT 263
#define LET 264
#define DEF 265
#define DIM 266
#define DATA 267
#define FOR 268
#define TO 269
#define REM 270
#define NEXT 271
#define STEP 272
#define GOSUB 273
#define GOTO 274
#define RETURN 275
#define STOP 276
#define NEQ 277
#define LEQ 278
#define GEQ 279
#define FUNCTION 280
#define INT 281
#define STR 282
#define FLOAT 283
#define VAR 284
#define VAR_STR 285
#define VAR_SP 286
#define VAR_DP 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "BMM_Parser.y"

    struct varnme{
    int type;
    int value;
    char *id;
    }dat;

#line 139 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
