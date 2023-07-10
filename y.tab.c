/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "BMM_Parser.y"

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    int yylex();
    void yyerror(char* const);
    void print();
    int search(char *);
    extern FILE *yyin,*yyout;
    extern char *yytext;
    extern int yylineno;
    FILE *out;
    int lineno,i,let,lines[10000],k,let,exprs,p;
    struct node{
        int type;
        char name[3];
    }var[286];
    


#line 92 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 217 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_END = 3,                        /* END  */
  YYSYMBOL_PRINT = 4,                      /* PRINT  */
  YYSYMBOL_LINE = 5,                       /* LINE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_THEN = 7,                       /* THEN  */
  YYSYMBOL_INPUT = 8,                      /* INPUT  */
  YYSYMBOL_LET = 9,                        /* LET  */
  YYSYMBOL_DEF = 10,                       /* DEF  */
  YYSYMBOL_DIM = 11,                       /* DIM  */
  YYSYMBOL_DATA = 12,                      /* DATA  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_TO = 14,                        /* TO  */
  YYSYMBOL_REM = 15,                       /* REM  */
  YYSYMBOL_NEXT = 16,                      /* NEXT  */
  YYSYMBOL_STEP = 17,                      /* STEP  */
  YYSYMBOL_GOSUB = 18,                     /* GOSUB  */
  YYSYMBOL_GOTO = 19,                      /* GOTO  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_STOP = 21,                      /* STOP  */
  YYSYMBOL_NEQ = 22,                       /* NEQ  */
  YYSYMBOL_LEQ = 23,                       /* LEQ  */
  YYSYMBOL_GEQ = 24,                       /* GEQ  */
  YYSYMBOL_FUNCTION = 25,                  /* FUNCTION  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_STR = 27,                       /* STR  */
  YYSYMBOL_FLOAT = 28,                     /* FLOAT  */
  YYSYMBOL_VAR = 29,                       /* VAR  */
  YYSYMBOL_VAR_STR = 30,                   /* VAR_STR  */
  YYSYMBOL_VAR_SP = 31,                    /* VAR_SP  */
  YYSYMBOL_VAR_DP = 32,                    /* VAR_DP  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_34_ = 34,                       /* '-'  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_37_ = 37,                       /* '^'  */
  YYSYMBOL_38_n_ = 38,                     /* '\n'  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '<'  */
  YYSYMBOL_44_ = 44,                       /* '>'  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_line_no = 50,                   /* line_no  */
  YYSYMBOL_line = 51,                      /* line  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_56_7 = 56,                      /* $@7  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_58_9 = 58,                      /* $@9  */
  YYSYMBOL_59_10 = 59,                     /* $@10  */
  YYSYMBOL_60_11 = 60,                     /* $@11  */
  YYSYMBOL_61_12 = 61,                     /* $@12  */
  YYSYMBOL_62_13 = 62,                     /* $@13  */
  YYSYMBOL_63_14 = 63,                     /* $@14  */
  YYSYMBOL_64_15 = 64,                     /* $@15  */
  YYSYMBOL_65_16 = 65,                     /* $@16  */
  YYSYMBOL_inbdy = 66,                     /* inbdy  */
  YYSYMBOL_67_17 = 67,                     /* $@17  */
  YYSYMBOL_int = 68,                       /* int  */
  YYSYMBOL_step = 69,                      /* step  */
  YYSYMBOL_70_18 = 70,                     /* $@18  */
  YYSYMBOL_Dbdy = 71,                      /* Dbdy  */
  YYSYMBOL_72_19 = 72,                     /* $@19  */
  YYSYMBOL_73_20 = 73,                     /* $@20  */
  YYSYMBOL_74_21 = 74,                     /* $@21  */
  YYSYMBOL_75_22 = 75,                     /* $@22  */
  YYSYMBOL_76_23 = 76,                     /* $@23  */
  YYSYMBOL_fbody = 77,                     /* fbody  */
  YYSYMBOL_78_24 = 78,                     /* $@24  */
  YYSYMBOL_79_25 = 79,                     /* $@25  */
  YYSYMBOL_80_26 = 80,                     /* $@26  */
  YYSYMBOL_81_27 = 81,                     /* $@27  */
  YYSYMBOL_val = 82,                       /* val  */
  YYSYMBOL_83_28 = 83,                     /* $@28  */
  YYSYMBOL_prin = 84,                      /* prin  */
  YYSYMBOL_var_stmnt = 85,                 /* var_stmnt  */
  YYSYMBOL_86_29 = 86,                     /* $@29  */
  YYSYMBOL_cndtn = 87,                     /* cndtn  */
  YYSYMBOL_88_30 = 88,                     /* $@30  */
  YYSYMBOL_expr = 89,                      /* expr  */
  YYSYMBOL_90_31 = 90,                     /* $@31  */
  YYSYMBOL_91_32 = 91,                     /* $@32  */
  YYSYMBOL_92_33 = 92,                     /* $@33  */
  YYSYMBOL_93_34 = 93,                     /* $@34  */
  YYSYMBOL_94_35 = 94,                     /* $@35  */
  YYSYMBOL_95_36 = 95,                     /* $@36  */
  YYSYMBOL_96_37 = 96,                     /* $@37  */
  YYSYMBOL_97_38 = 97,                     /* $@38  */
  YYSYMBOL_98_39 = 98,                     /* $@39  */
  YYSYMBOL_99_40 = 99,                     /* $@40  */
  YYSYMBOL_100_41 = 100,                   /* $@41  */
  YYSYMBOL_variable = 101,                 /* variable  */
  YYSYMBOL_102_42 = 102,                   /* $@42  */
  YYSYMBOL_print_exp = 103,                /* print_exp  */
  YYSYMBOL_delimiter = 104,                /* delimiter  */
  YYSYMBOL_data = 105                      /* data  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    35,    33,    40,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      43,    39,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    37,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    39,    39,    40,    40,    43,    45,    46,
      47,    47,    48,    48,    49,    49,    50,    50,    50,    51,
      51,    52,    52,    52,    52,    53,    53,    54,    54,    55,
      56,    56,    57,    57,    58,    58,    59,    60,    64,    65,
      65,    68,    69,    70,    72,    73,    73,    75,    75,    75,
      75,    76,    76,    76,    80,    80,    81,    81,    81,    81,
      83,    83,    84,    86,    87,    88,    89,    91,    92,    92,
      95,    96,    96,    98,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   115,   116,   117,
     118,   119,   119,   122,   123,   127,   128,   131,   132,   133
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "END", "PRINT", "LINE",
  "IF", "THEN", "INPUT", "LET", "DEF", "DIM", "DATA", "FOR", "TO", "REM",
  "NEXT", "STEP", "GOSUB", "GOTO", "RETURN", "STOP", "NEQ", "LEQ", "GEQ",
  "FUNCTION", "INT", "STR", "FLOAT", "VAR", "VAR_STR", "VAR_SP", "VAR_DP",
  "'+'", "'-'", "'*'", "'/'", "'^'", "'\\n'", "'='", "','", "'('", "')'",
  "'<'", "'>'", "';'", "$accept", "program", "$@1", "$@2", "line_no",
  "line", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "inbdy", "$@17", "int", "step",
  "$@18", "Dbdy", "$@19", "$@20", "$@21", "$@22", "$@23", "fbody", "$@24",
  "$@25", "$@26", "$@27", "val", "$@28", "prin", "var_stmnt", "$@29",
  "cndtn", "$@30", "expr", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "$@41", "variable", "$@42", "print_exp",
  "delimiter", "data", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-118)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      50,  -118,  -118,     2,  -118,    50,  -118,   203,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,    50,    20,    20,    61,    61,    17,
     -16,    51,    61,    61,    34,    34,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,   103,    22,   199,  -118,
      74,   127,    76,    22,  -118,    46,  -118,  -118,    77,    81,
    -118,    55,    22,  -118,  -118,    20,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,    75,    34,  -118,  -118,  -118,    62,    45,  -118,  -118,
    -118,   145,    20,    20,    20,    20,    20,    20,    20,    20,
      20,    20,    33,  -118,  -118,  -118,    20,    61,    20,  -118,
    -118,  -118,  -118,    66,    51,    20,  -118,   161,   161,   161,
     -12,   -12,    -3,    -3,   130,   161,   161,  -118,    90,    72,
     161,    22,   161,    20,    99,    51,  -118,  -118,    -7,   104,
    -118,   161,  -118,    60,    88,  -118,  -118,    89,  -118,  -118,
      20,  -118,    51,    21,    94,    64,  -118,  -118,    20,  -118,
      20,   161,   161
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     7,     5,     0,     3,     2,     1,     8,     6,     9,
      10,    32,    34,    12,    16,    19,    14,    21,    37,    25,
      27,    30,    36,    29,     2,    63,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     4,   107,   109,   108,
      97,   100,    99,    98,    95,    11,    64,    74,     0,    73,
       0,    70,    35,    38,    13,     0,    17,    51,    20,    15,
      62,     0,    26,    28,    31,     0,    93,    89,    91,    75,
      77,    79,    81,    83,   106,    85,    87,   105,   104,   101,
      65,     0,     0,    71,    39,    68,     0,     0,    47,    60,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,   103,    33,     0,     0,     0,    54,
      56,    18,    52,     0,     0,     0,    96,    94,    90,    92,
      76,    78,    80,    82,    84,    86,    88,    41,    42,     0,
      72,    40,    69,     0,     0,     0,    48,    61,     0,     0,
     102,    55,    57,     0,     0,    23,    43,     0,    53,    49,
       0,    58,     0,    44,     0,     0,    45,    24,     0,    50,
       0,    59,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -118,     9,  -118,  -118,   -29,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -117,  -118,  -118,  -118,
    -118,  -118,  -118,   -26,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,   -24,  -118,  -118,    54,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     7,     5,     4,    24,    25,    28,    31,    29,
      86,    30,    32,   115,   150,    33,    34,    35,    26,    27,
      52,   107,   129,   157,   160,    58,   113,   144,   152,    87,
     135,   111,   133,   134,   147,   154,    59,   114,    45,    54,
     108,    50,   106,    46,    95,    96,    97,    98,    99,   100,
     101,    93,    94,    92,    65,    47,   102,    48,    78,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    60,     6,    53,    55,    63,    64,   145,    61,    62,
      66,    67,    68,    57,     8,    66,    67,    68,   143,    66,
      67,    68,    81,    71,    72,    73,    69,    70,    71,    72,
      73,    75,    76,    36,    73,   155,    75,    76,   156,    91,
      75,    76,    56,    66,    67,    68,    37,    38,    39,    40,
      41,    42,    43,   105,    69,    70,    71,    72,    73,   127,
       1,    44,   128,    79,    75,    76,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     1,    37,    38,    39,
     130,    82,   132,   131,   137,    85,   112,    79,     2,   138,
      40,    41,    42,    43,    90,   136,    79,    66,    67,    68,
      89,   109,   148,   110,    89,    60,   159,   141,    69,    70,
      71,    72,    73,   103,   140,    74,    84,    88,    75,    76,
      77,    89,    60,   139,   153,    66,    67,    68,   142,   149,
     146,   151,   161,   158,   162,   104,    69,    70,    71,    72,
      73,     0,     0,    74,     0,     0,    75,    76,    77,    66,
      67,    68,    66,    67,    68,     0,     0,     0,     0,     0,
      69,    70,    71,    72,    73,     0,    83,    66,    67,    68,
      75,    76,     0,    75,    76,     0,     0,     0,    69,    70,
      71,    72,    73,    66,    67,    68,     0,   116,    75,    76,
       0,     0,     0,     0,    69,    70,    71,    72,    73,     0,
       0,     0,     0,     0,    75,    76,     9,    10,     0,    11,
       0,    12,    13,    14,    15,    16,    17,     0,    18,    19,
       0,    20,    21,    22,    23,    37,    38,    39,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    80,     0,     0,
      44
};

static const yytype_int16 yycheck[] =
{
      26,    31,     0,    27,    28,    34,    35,    14,    32,    33,
      22,    23,    24,    29,     5,    22,    23,    24,   135,    22,
      23,    24,    48,    35,    36,    37,    33,    34,    35,    36,
      37,    43,    44,    24,    37,   152,    43,    44,    17,    65,
      43,    44,    25,    22,    23,    24,    26,    27,    28,    29,
      30,    31,    32,    82,    33,    34,    35,    36,    37,    26,
      26,    41,    29,    41,    43,    44,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    26,    26,    27,    28,
     106,     7,   108,   107,   114,    39,    41,    41,    38,   115,
      29,    30,    31,    32,    39,    29,    41,    22,    23,    24,
      40,    39,    42,    41,    40,   135,    42,   133,    33,    34,
      35,    36,    37,    38,    42,    40,    40,    40,    43,    44,
      45,    40,   152,    33,   150,    22,    23,    24,    29,    41,
      26,    42,   158,    39,   160,    81,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    22,
      23,    24,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    22,    23,    24,
      43,    44,    -1,    43,    44,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    22,    23,    24,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    44,     3,     4,    -1,     6,
      -1,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    18,    19,    20,    21,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    38,    47,    50,    49,     0,    48,    47,     3,
       4,     6,     8,     9,    10,    11,    12,    13,    15,    16,
      18,    19,    20,    21,    51,    52,    64,    65,    53,    55,
      57,    54,    58,    61,    62,    63,    47,    26,    27,    28,
      29,    30,    31,    32,    41,    84,    89,   101,   103,   105,
      87,    89,    66,   101,    85,   101,    25,    29,    71,    82,
     105,   101,   101,    50,    50,   100,    22,    23,    24,    33,
      34,    35,    36,    37,    40,    43,    44,    45,   104,    41,
      38,    89,     7,    39,    40,    39,    56,    75,    40,    40,
      39,    89,    99,    97,    98,    90,    91,    92,    93,    94,
      95,    96,   102,    38,   104,    50,    88,    67,    86,    39,
      41,    77,    41,    72,    83,    59,    42,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    26,    29,    68,
      89,   101,    89,    78,    79,    76,    29,   105,    89,    33,
      42,    89,    29,    82,    73,    14,    26,    80,    42,    41,
      60,    42,    74,    89,    81,    82,    17,    69,    39,    42,
      70,    89,    89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    47,    49,    47,    50,    51,    51,
      52,    51,    53,    51,    54,    51,    55,    56,    51,    57,
      51,    58,    59,    60,    51,    61,    51,    62,    51,    51,
      63,    51,    64,    51,    65,    51,    51,    51,    66,    67,
      66,    68,    68,    68,    69,    70,    69,    72,    73,    74,
      71,    75,    76,    71,    78,    77,    79,    80,    81,    77,
      83,    82,    82,    84,    84,    84,    84,    85,    86,    85,
      87,    88,    87,    89,    89,    90,    89,    91,    89,    92,
      89,    93,    89,    94,    89,    95,    89,    96,    89,    97,
      89,    98,    89,    99,    89,   100,    89,   101,   101,   101,
     101,   102,   101,   103,   103,   104,   104,   105,   105,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     3,     1,     0,     1,
       0,     3,     0,     3,     0,     3,     0,     0,     5,     0,
       3,     0,     0,     0,    10,     0,     3,     0,     3,     1,
       0,     3,     0,     5,     0,     3,     1,     1,     1,     0,
       4,     1,     1,     3,     0,     0,     3,     0,     0,     0,
       9,     0,     0,     6,     0,     3,     0,     0,     0,     8,
       0,     4,     1,     0,     1,     2,     3,     0,     0,     4,
       1,     0,     4,     1,     1,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     1,     1,
       1,     0,     5,     3,     2,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3: /* $@1: %empty  */
#line 39 "BMM_Parser.y"
             {lineno = (yyvsp[0].dat).value;fprintf(out,"Keyword : ");}
#line 1437 "y.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 40 "BMM_Parser.y"
         {fprintf(yyout,"\n");}
#line 1443 "y.tab.c"
    break;

  case 7: /* line_no: INT  */
#line 43 "BMM_Parser.y"
         {  fprintf(out,"\nLine no: %d\n",(yyvsp[0].dat).value);}
#line 1449 "y.tab.c"
    break;

  case 9: /* line: END  */
#line 46 "BMM_Parser.y"
            {k++;fprintf(out,"EXIT\n");}
#line 1455 "y.tab.c"
    break;

  case 10: /* $@3: %empty  */
#line 47 "BMM_Parser.y"
            {p =1;fprintf(out,"PRINT\n");}
#line 1461 "y.tab.c"
    break;

  case 11: /* line: PRINT $@3 prin  */
#line 47 "BMM_Parser.y"
                                                   {p = 0;}
#line 1467 "y.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 48 "BMM_Parser.y"
            {let = 1;fprintf(out,"LET\n");}
#line 1473 "y.tab.c"
    break;

  case 14: /* $@5: %empty  */
#line 49 "BMM_Parser.y"
            {fprintf(out,"DATA\n");}
#line 1479 "y.tab.c"
    break;

  case 16: /* $@6: %empty  */
#line 50 "BMM_Parser.y"
            {fprintf(out,"DEF\n");}
#line 1485 "y.tab.c"
    break;

  case 17: /* $@7: %empty  */
#line 50 "BMM_Parser.y"
                                                 {fprintf(out,"function : %s\n",yytext);}
#line 1491 "y.tab.c"
    break;

  case 18: /* line: DEF $@6 FUNCTION $@7 fbody  */
#line 50 "BMM_Parser.y"
                                                                                                 {fprintf(out,"function defined above\n");}
#line 1497 "y.tab.c"
    break;

  case 19: /* $@8: %empty  */
#line 51 "BMM_Parser.y"
            {fprintf(out,"DIM\n");}
#line 1503 "y.tab.c"
    break;

  case 21: /* $@9: %empty  */
#line 52 "BMM_Parser.y"
            {let = 1;fprintf(out,"FOR\n");}
#line 1509 "y.tab.c"
    break;

  case 22: /* $@10: %empty  */
#line 52 "BMM_Parser.y"
                                                        {fprintf(out,"Assignment : '='\n");}
#line 1515 "y.tab.c"
    break;

  case 23: /* $@11: %empty  */
#line 52 "BMM_Parser.y"
                                                                                                     {fprintf(out,"Keyword : TO\n");}
#line 1521 "y.tab.c"
    break;

  case 25: /* $@12: %empty  */
#line 53 "BMM_Parser.y"
            {fprintf(out,"NEXT\n");}
#line 1527 "y.tab.c"
    break;

  case 27: /* $@13: %empty  */
#line 54 "BMM_Parser.y"
            {fprintf(out,"GOSUB\n");}
#line 1533 "y.tab.c"
    break;

  case 29: /* line: STOP  */
#line 55 "BMM_Parser.y"
           {fprintf(out,"STOP\n");}
#line 1539 "y.tab.c"
    break;

  case 30: /* $@14: %empty  */
#line 56 "BMM_Parser.y"
            {fprintf(out,"GOTO\n");}
#line 1545 "y.tab.c"
    break;

  case 32: /* $@15: %empty  */
#line 57 "BMM_Parser.y"
            {fprintf(out,"IF\n");}
#line 1551 "y.tab.c"
    break;

  case 34: /* $@16: %empty  */
#line 58 "BMM_Parser.y"
            {let = 1;fprintf(out,"INPUT\n");}
#line 1557 "y.tab.c"
    break;

  case 36: /* line: RETURN  */
#line 59 "BMM_Parser.y"
            {fprintf(out,"RETURN\n");}
#line 1563 "y.tab.c"
    break;

  case 37: /* line: REM  */
#line 60 "BMM_Parser.y"
            {fprintf(out,"REM\n");}
#line 1569 "y.tab.c"
    break;

  case 39: /* $@17: %empty  */
#line 65 "BMM_Parser.y"
              {let = 1;fprintf(out,"delimiter : ','\n");}
#line 1575 "y.tab.c"
    break;

  case 41: /* int: INT  */
#line 68 "BMM_Parser.y"
            {fprintf(out,"Value: %s\n",yytext);}
#line 1581 "y.tab.c"
    break;

  case 42: /* int: VAR  */
#line 69 "BMM_Parser.y"
            {fprintf(out,"Variable: %s \n",yytext);}
#line 1587 "y.tab.c"
    break;

  case 45: /* $@18: %empty  */
#line 73 "BMM_Parser.y"
           {fprintf(out,"Keyword : STEP\n");}
#line 1593 "y.tab.c"
    break;

  case 47: /* $@19: %empty  */
#line 75 "BMM_Parser.y"
              {fprintf(out,"delimiter : ','\n");}
#line 1599 "y.tab.c"
    break;

  case 48: /* $@20: %empty  */
#line 75 "BMM_Parser.y"
                                                      {fprintf(out,"Variable: %s \n",yytext);}
#line 1605 "y.tab.c"
    break;

  case 49: /* $@21: %empty  */
#line 75 "BMM_Parser.y"
                                                                                                   {fprintf(out,"operator : '('\n");}
#line 1611 "y.tab.c"
    break;

  case 50: /* Dbdy: Dbdy ',' $@19 VAR $@20 '(' $@21 val ')'  */
#line 75 "BMM_Parser.y"
                                                                                                                                              {fprintf(out,"operator : ')' \n");}
#line 1617 "y.tab.c"
    break;

  case 51: /* $@22: %empty  */
#line 76 "BMM_Parser.y"
          {fprintf(out,"Variable: %s \n",yytext);}
#line 1623 "y.tab.c"
    break;

  case 52: /* $@23: %empty  */
#line 76 "BMM_Parser.y"
                                                       {fprintf(out,"operator : '('\n");}
#line 1629 "y.tab.c"
    break;

  case 53: /* Dbdy: VAR $@22 '(' $@23 val ')'  */
#line 76 "BMM_Parser.y"
                                                                                                  {fprintf(out,"operator : ')' \n");}
#line 1635 "y.tab.c"
    break;

  case 54: /* $@24: %empty  */
#line 80 "BMM_Parser.y"
         {fprintf(out,"Assignment : '='\n");}
#line 1641 "y.tab.c"
    break;

  case 56: /* $@25: %empty  */
#line 81 "BMM_Parser.y"
        {fprintf(out,"operator : '('\n");}
#line 1647 "y.tab.c"
    break;

  case 57: /* $@26: %empty  */
#line 81 "BMM_Parser.y"
                                               {fprintf(out,"parameter : %s\n",yytext);}
#line 1653 "y.tab.c"
    break;

  case 58: /* $@27: %empty  */
#line 81 "BMM_Parser.y"
                                                                                              {fprintf(out,"operator : ')' \n");}
#line 1659 "y.tab.c"
    break;

  case 60: /* $@28: %empty  */
#line 83 "BMM_Parser.y"
           {fprintf(out,"Delimiter : ','\n");}
#line 1665 "y.tab.c"
    break;

  case 61: /* val: val ',' $@28 data  */
#line 83 "BMM_Parser.y"
                                                    {fprintf(out,"Value: %s\n",yytext);}
#line 1671 "y.tab.c"
    break;

  case 62: /* val: data  */
#line 84 "BMM_Parser.y"
            {fprintf(out,"Value: %s\n",yytext);}
#line 1677 "y.tab.c"
    break;

  case 65: /* prin: print_exp '\n'  */
#line 88 "BMM_Parser.y"
                    {fprintf(yyout,"\n");}
#line 1683 "y.tab.c"
    break;

  case 66: /* prin: print_exp expr '\n'  */
#line 89 "BMM_Parser.y"
                         {fprintf(yyout,"\n");}
#line 1689 "y.tab.c"
    break;

  case 68: /* $@29: %empty  */
#line 92 "BMM_Parser.y"
                   {fprintf(out,"Assignment : '='\n");}
#line 1695 "y.tab.c"
    break;

  case 71: /* $@30: %empty  */
#line 96 "BMM_Parser.y"
             {fprintf(out,"relation : '='\n");}
#line 1701 "y.tab.c"
    break;

  case 73: /* expr: data  */
#line 98 "BMM_Parser.y"
                {if(p == 0)fprintf(out,"Value: %s\n",yytext); else fprintf(out,"Expression: %s\n",yytext); (yyval.dat) = (yyvsp[0].dat); }
#line 1707 "y.tab.c"
    break;

  case 74: /* expr: variable  */
#line 99 "BMM_Parser.y"
              {(yyval.dat) = (yyvsp[0].dat);}
#line 1713 "y.tab.c"
    break;

  case 75: /* $@31: %empty  */
#line 100 "BMM_Parser.y"
              {fprintf(out,"operator : '+'\n");}
#line 1719 "y.tab.c"
    break;

  case 76: /* expr: expr '+' $@31 expr  */
#line 100 "BMM_Parser.y"
                                                      {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Operation '+' between two different data types");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1725 "y.tab.c"
    break;

  case 77: /* $@32: %empty  */
#line 101 "BMM_Parser.y"
              {fprintf(out,"operator : '-'\n");}
#line 1731 "y.tab.c"
    break;

  case 78: /* expr: expr '-' $@32 expr  */
#line 101 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Operation '-' between two different data types");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1737 "y.tab.c"
    break;

  case 79: /* $@33: %empty  */
#line 102 "BMM_Parser.y"
              {fprintf(out,"operator : '*'\n");}
#line 1743 "y.tab.c"
    break;

  case 80: /* expr: expr '*' $@33 expr  */
#line 102 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Operation '*' between two different data types");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1749 "y.tab.c"
    break;

  case 81: /* $@34: %empty  */
#line 103 "BMM_Parser.y"
              {fprintf(out,"operator : '/'\n");}
#line 1755 "y.tab.c"
    break;

  case 82: /* expr: expr '/' $@34 expr  */
#line 103 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Operation '/' between two different data types");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1761 "y.tab.c"
    break;

  case 83: /* $@35: %empty  */
#line 104 "BMM_Parser.y"
              {fprintf(out,"operator : '^'\n");}
#line 1767 "y.tab.c"
    break;

  case 84: /* expr: expr '^' $@35 expr  */
#line 104 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Operation '/' between two different data types");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1773 "y.tab.c"
    break;

  case 85: /* $@36: %empty  */
#line 106 "BMM_Parser.y"
              {fprintf(out,"operator : '<'\n");}
#line 1779 "y.tab.c"
    break;

  case 86: /* expr: expr '<' $@36 expr  */
#line 106 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1785 "y.tab.c"
    break;

  case 87: /* $@37: %empty  */
#line 107 "BMM_Parser.y"
              {fprintf(out,"operator : '>'\n");}
#line 1791 "y.tab.c"
    break;

  case 88: /* expr: expr '>' $@37 expr  */
#line 107 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1797 "y.tab.c"
    break;

  case 89: /* $@38: %empty  */
#line 108 "BMM_Parser.y"
              {fprintf(out,"operator : '<='\n");}
#line 1803 "y.tab.c"
    break;

  case 90: /* expr: expr LEQ $@38 expr  */
#line 108 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1809 "y.tab.c"
    break;

  case 91: /* $@39: %empty  */
#line 109 "BMM_Parser.y"
              {fprintf(out,"operator : '>='\n");}
#line 1815 "y.tab.c"
    break;

  case 92: /* expr: expr GEQ $@39 expr  */
#line 109 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1821 "y.tab.c"
    break;

  case 93: /* $@40: %empty  */
#line 110 "BMM_Parser.y"
              {fprintf(out,"operator : '<>'\n");}
#line 1827 "y.tab.c"
    break;

  case 94: /* expr: expr NEQ $@40 expr  */
#line 110 "BMM_Parser.y"
                                                        {if((yyvsp[-3].dat).type != (yyvsp[0].dat).type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",(yyvsp[-3].dat).id,(yyvsp[0].dat).id);}else (yyval.dat) = (yyvsp[-3].dat);}
#line 1833 "y.tab.c"
    break;

  case 95: /* $@41: %empty  */
#line 111 "BMM_Parser.y"
         {fprintf(out,"operator : '('\n");}
#line 1839 "y.tab.c"
    break;

  case 96: /* expr: '(' $@41 expr ')'  */
#line 111 "BMM_Parser.y"
                                                     {fprintf(out,"operator : ')'\n");}
#line 1845 "y.tab.c"
    break;

  case 97: /* variable: VAR  */
#line 115 "BMM_Parser.y"
             {if(let == 1) {var[i].type = 1;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}(yyval.dat) = (yyvsp[0].dat);fprintf(out,"Variable: %s \n",yytext);}
#line 1851 "y.tab.c"
    break;

  case 98: /* variable: VAR_DP  */
#line 116 "BMM_Parser.y"
            {if(let == 1)  {var[i].type = 2;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}(yyval.dat) = (yyvsp[0].dat);fprintf(out,"Variable: %s \n",yytext);}
#line 1857 "y.tab.c"
    break;

  case 99: /* variable: VAR_SP  */
#line 117 "BMM_Parser.y"
            {if(let == 1)  {var[i].type = 2;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}(yyval.dat) = (yyvsp[0].dat);fprintf(out,"Variable: %s \n",yytext);}
#line 1863 "y.tab.c"
    break;

  case 100: /* variable: VAR_STR  */
#line 118 "BMM_Parser.y"
             {if(let == 1) {var[i].type = 3;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}(yyval.dat) = (yyvsp[0].dat);fprintf(out,"Variable: %s \n",yytext);}
#line 1869 "y.tab.c"
    break;

  case 101: /* $@42: %empty  */
#line 119 "BMM_Parser.y"
                 {fprintf(out,"operator : '('\n");}
#line 1875 "y.tab.c"
    break;

  case 102: /* variable: variable '(' $@42 int ')'  */
#line 119 "BMM_Parser.y"
                                                           {fprintf(out,"operator : ')'\n");(yyval.dat)=(yyvsp[-4].dat);}
#line 1881 "y.tab.c"
    break;

  case 105: /* delimiter: ';'  */
#line 127 "BMM_Parser.y"
           {fprintf(out,"Delimiter : ';'\n");}
#line 1887 "y.tab.c"
    break;

  case 106: /* delimiter: ','  */
#line 128 "BMM_Parser.y"
            {fprintf(out,"Delimiter : ','\n");}
#line 1893 "y.tab.c"
    break;

  case 107: /* data: INT  */
#line 131 "BMM_Parser.y"
           {(yyval.dat) = (yyvsp[0].dat);}
#line 1899 "y.tab.c"
    break;

  case 108: /* data: FLOAT  */
#line 132 "BMM_Parser.y"
           {(yyval.dat) = (yyvsp[0].dat);}
#line 1905 "y.tab.c"
    break;

  case 109: /* data: STR  */
#line 133 "BMM_Parser.y"
            {(yyval.dat) = (yyvsp[0].dat);}
#line 1911 "y.tab.c"
    break;


#line 1915 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 135 "BMM_Parser.y"

int yywrap(){
	return 1;
}
void yyerror(char* const y){
    printf("In line no %d | %s :    ",lineno,y);
}
int main(int argv,char *argc[])
{ 
    out = fopen("./parser.txt","w");
    yyin=fopen(argc[1],"r");
    yyout=fopen("./lexer.txt","w");
    yyparse();
    if(k==0)
    {
        printf(" error :   NO END keyword\n");
    }
    else if(k>1)
    {
         printf("error :  END repeated %d times\n",k);
    }
    return 0;
}
void print()
{
   
    for(int i = 1;i<strlen(yytext)-1;i++)
    {
        printf("%c",yytext[i]);
    }
     printf("\n");
}
int search(char *x){
    int n = i;
    for(n = n-1;n>=0;n--)
    {
        if(x[0] == var[n].name[0])
        {
            
            if(x[1] >= '0' && x[1] <='9')
            {
                if(x[1] == var[n].name[1])
                return 0;
            }
            else if(!(var[n].name[1] >= '0' && var[n].name[1] <='9'))
            {
                    return 0;
            }
           
        }
    }
    return 1;
}
