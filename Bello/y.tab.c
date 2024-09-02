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
#line 1 "bello.y"

    //#pragma once
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    //#include "dftn.h"
    #ifndef DFTN_H
    #define DFTN_H
    #endif
    #include "vrb.h"
    #include "cnst.h"
    #ifndef EXP_H
    #define EXP_H
    #endif
    #ifndef STMT_H
    #define STMT_H
    #endif
    #include "arr.h"
    #include "exp.h"
    #include "stmt.h"
    #include "fcn.h"
    #include "envr.h"
    #include "err.h"
    #ifndef LEX_YY_C
    #define LEX_YY_C
    #endif
    #include "ntv.h"


    extern char* yytext;

    extern int yylex();

    void yyerror(const char *s,...)
    {
        printf("Syntax error.\n");
        
    }

    //#define YYERROR_VERBOSE 1

    extern int lstIndt;

    extern struct StmtStkItemStrc;

    extern std::vector<StmtStkItmStrc*> stmtStk;

    extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);


#line 124 "y.tab.c"

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
    LF = 258,                      /* LF  */
    NOP = 259,                     /* NOP  */
    INDENT = 260,                  /* INDENT  */
    INT_VALUE = 261,               /* INT_VALUE  */
    BOOLEAN_VALUE = 262,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 263,             /* FLOAT_VALUE  */
    STRING_VALUE = 264,            /* STRING_VALUE  */
    NULL_VALUE = 265,              /* NULL_VALUE  */
    ARRAY_VALUE = 266,             /* ARRAY_VALUE  */
    IDENTIFER = 267,               /* IDENTIFER  */
    ASSIGN = 268,                  /* ASSIGN  */
    VAR = 269,                     /* VAR  */
    GLOBAL = 270,                  /* GLOBAL  */
    ADD_ASSIGN = 271,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 272,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    PRINT = 276,                   /* PRINT  */
    PRINTLN = 277,                 /* PRINTLN  */
    LEFT_PAREN = 278,              /* LEFT_PAREN  */
    RIGHT_PAREN = 279,             /* RIGHT_PAREN  */
    LEFT_QUAD = 280,               /* LEFT_QUAD  */
    RIGHT_QUAD = 281,              /* RIGHT_QUAD  */
    LEFT_BRACE = 282,              /* LEFT_BRACE  */
    RIGHT_BRACE = 283,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 284,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 285,               /* SEMICOLON  */
    COMMA = 286,                   /* COMMA  */
    COLON = 287,                   /* COLON  */
    ADD = 288,                     /* ADD  */
    SUB = 289,                     /* SUB  */
    MUL = 290,                     /* MUL  */
    DIV = 291,                     /* DIV  */
    MOD = 292,                     /* MOD  */
    EQ = 293,                      /* EQ  */
    NE = 294,                      /* NE  */
    GT = 295,                      /* GT  */
    GE = 296,                      /* GE  */
    LT = 297,                      /* LT  */
    LE = 298,                      /* LE  */
    AND = 299,                     /* AND  */
    OR = 300,                      /* OR  */
    NOT = 301,                     /* NOT  */
    BIT_AND = 302,                 /* BIT_AND  */
    BIT_OR = 303,                  /* BIT_OR  */
    BIT_XOR = 304,                 /* BIT_XOR  */
    BIT_NOT = 305,                 /* BIT_NOT  */
    INCREMENT = 306,               /* INCREMENT  */
    DECREMENT = 307,               /* DECREMENT  */
    IF = 308,                      /* IF  */
    ELSE = 309,                    /* ELSE  */
    FOR = 310,                     /* FOR  */
    WHILE = 311,                   /* WHILE  */
    DO = 312,                      /* DO  */
    CONTINUE = 313,                /* CONTINUE  */
    BREAK = 314,                   /* BREAK  */
    FUNC = 315,                    /* FUNC  */
    RETURN = 316,                  /* RETURN  */
    READ_INT = 317,                /* READ_INT  */
    READ_FLOAT = 318,              /* READ_FLOAT  */
    READ = 319,                    /* READ  */
    READ_BOOL = 320,               /* READ_BOOL  */
    READ_LINE = 321,               /* READ_LINE  */
    NEW_ARRAY = 322,               /* NEW_ARRAY  */
    MINUS_SIGN = 323,              /* MINUS_SIGN  */
    PLUS_SIGN = 324                /* PLUS_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LF 258
#define NOP 259
#define INDENT 260
#define INT_VALUE 261
#define BOOLEAN_VALUE 262
#define FLOAT_VALUE 263
#define STRING_VALUE 264
#define NULL_VALUE 265
#define ARRAY_VALUE 266
#define IDENTIFER 267
#define ASSIGN 268
#define VAR 269
#define GLOBAL 270
#define ADD_ASSIGN 271
#define SUB_ASSIGN 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define PRINT 276
#define PRINTLN 277
#define LEFT_PAREN 278
#define RIGHT_PAREN 279
#define LEFT_QUAD 280
#define RIGHT_QUAD 281
#define LEFT_BRACE 282
#define RIGHT_BRACE 283
#define SEMICOLON_OPTIONAL 284
#define SEMICOLON 285
#define COMMA 286
#define COLON 287
#define ADD 288
#define SUB 289
#define MUL 290
#define DIV 291
#define MOD 292
#define EQ 293
#define NE 294
#define GT 295
#define GE 296
#define LT 297
#define LE 298
#define AND 299
#define OR 300
#define NOT 301
#define BIT_AND 302
#define BIT_OR 303
#define BIT_XOR 304
#define BIT_NOT 305
#define INCREMENT 306
#define DECREMENT 307
#define IF 308
#define ELSE 309
#define FOR 310
#define WHILE 311
#define DO 312
#define CONTINUE 313
#define BREAK 314
#define FUNC 315
#define RETURN 316
#define READ_INT 317
#define READ_FLOAT 318
#define READ 319
#define READ_BOOL 320
#define READ_LINE 321
#define NEW_ARRAY 322
#define MINUS_SIGN 323
#define PLUS_SIGN 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "bello.y"

    int blnVl;
    int intVl;
    float fltVl;
    char *strVl;

    struct VrbStrc *vrb;
    struct ExpStrc *exp;
    struct StmtStrc *stmt;
    struct FcnStrc *fcn;
    struct PrmLstStrc *prmLst;
    struct ArgLstStrc *argLst;
    struct VrbLstStrc *vrbLst;
    struct AsgnLstStrc *asgnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;

    char *idtf;
    //string idtf;

#line 337 "y.tab.c"

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
  YYSYMBOL_LF = 3,                         /* LF  */
  YYSYMBOL_NOP = 4,                        /* NOP  */
  YYSYMBOL_INDENT = 5,                     /* INDENT  */
  YYSYMBOL_INT_VALUE = 6,                  /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 7,              /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 8,                /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 9,               /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 10,                /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 11,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 12,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_GLOBAL = 15,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 16,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 17,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 21,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 22,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 23,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 24,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 25,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 26,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 27,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 28,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 29,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 30,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_COLON = 32,                     /* COLON  */
  YYSYMBOL_ADD = 33,                       /* ADD  */
  YYSYMBOL_SUB = 34,                       /* SUB  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_NE = 39,                        /* NE  */
  YYSYMBOL_GT = 40,                        /* GT  */
  YYSYMBOL_GE = 41,                        /* GE  */
  YYSYMBOL_LT = 42,                        /* LT  */
  YYSYMBOL_LE = 43,                        /* LE  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_OR = 45,                        /* OR  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_BIT_AND = 47,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 48,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 49,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 50,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 51,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 52,                 /* DECREMENT  */
  YYSYMBOL_IF = 53,                        /* IF  */
  YYSYMBOL_ELSE = 54,                      /* ELSE  */
  YYSYMBOL_FOR = 55,                       /* FOR  */
  YYSYMBOL_WHILE = 56,                     /* WHILE  */
  YYSYMBOL_DO = 57,                        /* DO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_FUNC = 60,                      /* FUNC  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_READ_INT = 62,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 63,                /* READ_FLOAT  */
  YYSYMBOL_READ = 64,                      /* READ  */
  YYSYMBOL_READ_BOOL = 65,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 66,                 /* READ_LINE  */
  YYSYMBOL_NEW_ARRAY = 67,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 68,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 69,                 /* PLUS_SIGN  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_statement = 71,                 /* statement  */
  YYSYMBOL_check_indent = 72,              /* check_indent  */
  YYSYMBOL_build_statement = 73,           /* build_statement  */
  YYSYMBOL_execute_statement = 74,         /* execute_statement  */
  YYSYMBOL_single_statement = 75,          /* single_statement  */
  YYSYMBOL_expression_statement = 76,      /* expression_statement  */
  YYSYMBOL_expression = 77,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 78, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 79,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 80, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 81,          /* unary_expression  */
  YYSYMBOL_binary_expression = 82,         /* binary_expression  */
  YYSYMBOL_value_expression = 83,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 84,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 85,          /* array_expression  */
  YYSYMBOL_new_array_expression = 86,      /* new_array_expression  */
  YYSYMBOL_element_list = 87,              /* element_list  */
  YYSYMBOL_function_expression = 88,       /* function_expression  */
  YYSYMBOL_argument_list = 89,             /* argument_list  */
  YYSYMBOL_evaluate_list = 90,             /* evaluate_list  */
  YYSYMBOL_if_statement = 91               /* if_statement  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1061

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   147,   147,   148,   149,   150,   151,   154,   166,   247,
     253,   254,   266,   304,   310,   311,   312,   313,   314,   315,
     318,   319,   322,   323,   324,   325,   326,   327,   331,   332,
     333,   334,   337,   338,   339,   340,   341,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   363,   364,   365,   366,   367,   368,   369,
     372,   373,   381,   385,   391,   397,   402,   442,   446,   452,
     457,   465,   470,   475,   480,   485,   490,   495,   500,   505,
     510,   515,   520,   525,   530,   535,   540,   545,   550,   555,
     560,   565,   570,   588
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
  "\"end of file\"", "error", "\"invalid token\"", "LF", "NOP", "INDENT",
  "INT_VALUE", "BOOLEAN_VALUE", "FLOAT_VALUE", "STRING_VALUE",
  "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER", "ASSIGN", "VAR", "GLOBAL",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD",
  "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON_OPTIONAL",
  "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ",
  "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT", "BIT_AND", "BIT_OR",
  "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT", "IF", "ELSE", "FOR",
  "WHILE", "DO", "CONTINUE", "BREAK", "FUNC", "RETURN", "READ_INT",
  "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "NEW_ARRAY",
  "MINUS_SIGN", "PLUS_SIGN", "$accept", "statement", "check_indent",
  "build_statement", "execute_statement", "single_statement",
  "expression_statement", "expression", "lvalue_operation_expression",
  "assign_expression", "self_operation_expression", "unary_expression",
  "binary_expression", "value_expression", "lvalue_expression",
  "array_expression", "new_array_expression", "element_list",
  "function_expression", "argument_list", "evaluate_list", "if_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-7)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,   -28,   168,   -28,   -28,   -28,   203,   -28,   -28,   -28,
     -28,   -28,    -4,   637,   265,   637,   637,   637,   637,    27,
      27,    40,    48,    71,   -28,   -27,   -28,   -28,   -28,   -28,
     -28,   -28,   659,   -28,   -28,   -28,   -28,    72,   296,   658,
     -28,   -27,    47,   -28,   -28,   -28,   -28,   -28,    54,    54,
     637,   637,   -28,   637,   637,   637,   637,   637,   637,   637,
     637,   637,   637,   637,   637,   637,   637,   637,   637,   637,
     637,   637,   637,   637,   637,   327,   -28,   -28,    55,   -28,
     -28,   -27,    45,   -28,   -28,   637,   684,   706,   -28,    59,
      59,   -28,   -28,   -28,    52,    52,    52,    52,    52,    52,
     980,   963,    -7,   997,  1014,   -27,   -27,   -27,   -27,   -27,
     -27,   358,   726,   389,   -28,   -28,   637,   -27,   -28,   -28,
     -28,    51,   746,   -28,    58,   420,   766,   -28,   -27,   -28,
     -28,   -28,   451,   -28,   482,   786,    56,   806,   -28,   234,
     -28,   846,   -28,   866,   -28,   513,   -28,   -28,   544,   -28,
     575,   826,   -28,   -28,   -28,   886,   -28,   906,   -28,   926,
     -28,   606,   -28,   -28,   -28,   -28,   946,   -28
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     0,     1,    12,     4,     0,    53,    55,    54,
      56,    57,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    13,    15,    20,    21,    16,
      17,    14,    59,    18,    19,    58,    11,     0,     0,     0,
      63,    65,     0,    33,    32,    35,    36,    60,    28,    29,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    61,     7,
      68,    69,     0,    34,    62,     0,     0,     0,     8,    37,
      38,    39,    40,    41,    44,    45,    46,    47,    48,    49,
      42,    43,    50,    51,    52,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     8,    67,     0,    66,    93,    64,
       9,     0,     0,    71,     0,     0,     0,     3,    70,     2,
      81,    78,     0,    75,     0,     0,     0,     0,    82,     0,
      79,     0,    76,     0,    72,     0,    92,    89,     0,    86,
       0,     0,    80,    77,    73,     0,    90,     0,    87,     0,
      83,     0,    74,    91,    88,    84,     0,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,    14,   -17,   -28,    93,   -28,   -13,   -28,   -28,
     -28,   -28,   -28,   -28,     4,   -28,   -28,   -28,   -28,   -28,
     -28,   -28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    88,   120,   129,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    42,    35,    82,
      78,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    41,    43,    44,    45,    46,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    38,
      66,    67,    68,    48,    49,    81,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    86,    87,    47,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   112,    50,     7,     8,     9,    10,    11,   115,
      12,    51,   117,    84,    52,    79,   116,   130,    85,    75,
     113,    13,   146,    14,   133,    53,    54,    55,    56,    57,
     134,    15,    16,   114,    55,    56,    57,   127,   122,    37,
     126,     0,     0,   128,    17,     0,     0,     0,    18,    19,
      20,   135,   137,     0,     0,     0,     0,     0,     0,   141,
       0,   143,     0,     0,     0,    22,   151,     0,     0,     0,
       0,     0,   155,    -6,     1,   157,    -6,   159,    -6,    -6,
      -6,    -6,    -6,    -6,     0,    -6,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,    -6,     0,    -6,     0,
       0,     0,     0,     0,     0,     0,    -6,    -6,     3,     4,
       0,     5,     0,     6,     7,     8,     9,    10,    11,    -6,
      12,     0,     0,    -6,    -6,    -6,    -6,     0,     0,     0,
       0,    13,     0,    14,     0,     0,     0,     0,     0,     0,
      -6,    15,    16,     0,     4,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    17,    12,     0,     0,    18,    19,
      20,    21,     0,     0,     0,     0,    13,     0,    14,     0,
       0,     0,     0,     0,     0,    22,    15,    16,     0,     0,
       7,     8,     9,    10,    11,     0,    12,     0,     0,    17,
       0,     0,     0,    18,    19,    20,    21,    13,     0,    14,
     149,     0,     0,     0,     0,     0,   150,    15,    16,     0,
      22,     7,     8,     9,    10,    11,     0,    12,     0,     0,
      17,     0,     0,     0,    18,    19,    20,     0,    13,     0,
      14,    40,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    22,     7,     8,     9,    10,    11,     0,    12,     0,
       0,    17,     0,     0,     0,    18,    19,    20,     0,    13,
      80,    14,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,    22,     7,     8,     9,    10,    11,     0,    12,
       0,     0,    17,     0,     0,     0,    18,    19,    20,     0,
      13,     0,    14,     0,     0,     0,     0,     0,     0,   111,
      15,    16,     0,    22,     7,     8,     9,    10,    11,     0,
      12,     0,     0,    17,     0,     0,     0,    18,    19,    20,
       0,    13,     0,    14,     0,     0,     0,     0,     0,     0,
     121,    15,    16,     0,    22,     7,     8,     9,    10,    11,
       0,    12,     0,     0,    17,     0,     0,     0,    18,    19,
      20,     0,    13,     0,    14,     0,     0,     0,     0,     0,
       0,   125,    15,    16,     0,    22,     7,     8,     9,    10,
      11,     0,    12,     0,     0,    17,     0,     0,     0,    18,
      19,    20,     0,    13,     0,    14,     0,     0,     0,     0,
       0,     0,   136,    15,    16,     0,    22,     7,     8,     9,
      10,    11,     0,    12,     0,     0,    17,     0,     0,     0,
      18,    19,    20,     0,    13,     0,    14,   140,     0,     0,
       0,     0,     0,     0,    15,    16,     0,    22,     7,     8,
       9,    10,    11,     0,    12,     0,     0,    17,     0,     0,
       0,    18,    19,    20,     0,    13,     0,    14,   142,     0,
       0,     0,     0,     0,     0,    15,    16,     0,    22,     7,
       8,     9,    10,    11,     0,    12,     0,     0,    17,     0,
       0,     0,    18,    19,    20,     0,    13,     0,    14,   154,
       0,     0,     0,     0,     0,     0,    15,    16,     0,    22,
       7,     8,     9,    10,    11,     0,    12,     0,     0,    17,
       0,     0,     0,    18,    19,    20,     0,    13,     0,    14,
     156,     0,     0,     0,     0,     0,     0,    15,    16,     0,
      22,     7,     8,     9,    10,    11,     0,    12,     0,     0,
      17,     0,     0,     0,    18,    19,    20,     0,    13,     0,
      14,   158,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    22,     7,     8,     9,    10,    11,     0,    12,     0,
       0,    17,     0,     0,     0,    18,    19,    20,     0,    13,
       0,    14,   165,     0,     0,     0,     0,     0,     0,    15,
      16,     0,    22,     7,     8,     9,    10,    11,     0,    12,
       0,     0,    17,     0,     0,     0,    18,    19,    20,     0,
      13,     0,    14,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    69,    22,     0,    70,    71,    72,    73,    74,
       0,     0,    83,    17,    75,     0,     0,    18,    19,    20,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    22,    66,    67,    68,   118,     0,
      76,    77,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     119,    66,    67,    68,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   123,    66,    67,    68,     0,     0,   124,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   131,    66,    67,    68,     0,     0,   132,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   138,    66,    67,    68,     0,     0,   139,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   144,    66,    67,    68,     0,     0,   145,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   147,    66,    67,    68,     0,     0,   148,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   160,    66,    67,    68,     0,     0,   161,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   152,    66,    67,    68,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   153,    66,    67,    68,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   162,    66,    67,    68,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   163,    66,    67,    68,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   164,    66,    67,    68,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   167,    66,    67,    68,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,    66,    67,    68,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
      66,    67,    68,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,     0,     0,    66,    67,    68,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,    66,     0,    68,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,    66
};

static const yytype_int16 yycheck[] =
{
      13,    14,    15,    16,    17,    18,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    23,
      47,    48,    49,    19,    20,    38,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    50,    51,    12,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    23,     6,     7,     8,     9,    10,    24,
      12,    23,    85,    26,     3,     3,    31,    26,    31,    25,
      25,    23,    26,    25,    26,    33,    34,    35,    36,    37,
      32,    33,    34,    79,    35,    36,    37,   114,   111,     6,
     113,    -1,    -1,   116,    46,    -1,    -1,    -1,    50,    51,
      52,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,   134,    -1,    -1,    -1,    67,   139,    -1,    -1,    -1,
      -1,    -1,   145,     0,     1,   148,     3,   150,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,     0,     1,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    46,
      12,    -1,    -1,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    33,    34,    -1,     1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    46,    12,    -1,    -1,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    33,    34,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      67,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    67,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    67,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    67,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    67,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
      52,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    67,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    -1,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    67,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    67,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    67,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    67,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      67,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    67,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    67,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    13,    67,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    24,    46,    25,    -1,    -1,    50,    51,    52,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    67,    47,    48,    49,    24,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      24,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    26,    47,    48,    49,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    49,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    47,    -1,    49,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    71,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    12,    23,    25,    33,    34,    46,    50,    51,
      52,    53,    67,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    88,    91,    75,    23,    77,
      26,    77,    87,    77,    77,    77,    77,    12,    84,    84,
      23,    23,     3,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    47,    48,    49,    13,
      16,    17,    18,    19,    20,    25,    51,    52,    90,     3,
      24,    77,    89,    24,    26,    31,    77,    77,    72,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    32,    77,    25,    72,    24,    31,    77,    24,    24,
      73,    32,    77,    26,    32,    32,    77,    73,    77,    74,
      26,    26,    32,    26,    32,    77,    32,    77,    26,    32,
      26,    77,    26,    77,    26,    32,    26,    26,    32,    26,
      32,    77,    26,    26,    26,    77,    26,    77,    26,    77,
      26,    32,    26,    26,    26,    26,    77,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    71,    72,    73,    74,
      75,    75,    75,    76,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    85,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     6,     2,     1,     0,     0,     0,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     4,     1,     3,     4,     3,     1,
       3,     3,     5,     6,     7,     4,     5,     6,     4,     5,
       6,     4,     4,     6,     7,     8,     5,     6,     7,     5,
       6,     7,     5,     4
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
  case 5: /* statement: error  */
#line 150 "bello.y"
            { yyerrok; }
#line 1707 "y.tab.c"
    break;

  case 7: /* check_indent: %empty  */
#line 154 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }


      }
#line 1721 "y.tab.c"
    break;

  case 8: /* build_statement: %empty  */
#line 166 "bello.y"
    {
        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈
        if ((yyvsp[(-3) - (0)].intVl) == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                StmtStkItmStrc * sktItm = new StmtStkItmStrc;

                sktItm->indt = (yyvsp[(-3) - (0)].intVl);
                sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
                sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

                stmtStk.push_back(sktItm);
            }
            else
            {
                yyerrok;
            }
        }
        else if ((yyvsp[(-3) - (0)].intVl) == lstIndt)
        {
            //语句入栈
            StmtStkItmStrc * sktItm = new StmtStkItmStrc;

            sktItm->indt = (yyvsp[(-3) - (0)].intVl);
            sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
            sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

            stmtStk.push_back(sktItm);
        }
        else if ((yyvsp[(-3) - (0)].intVl) < lstIndt)
        {
            int nowIndt = (yyvsp[(-3) - (0)].intVl);

            int idx;

            while (stmtStk.back()->indt < nowIndt)
            {
                idx = stmtStk.size()-1;
                while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                {
                    idx--;
                }

                int i = idx;

                StmtStrc* blk = bldStmtBlk();

                while (i < stmtStk.size())
                {
                    stmtBlkAdd(blk, stmtStk.at(i)->stmt);
                }

                //语句出栈
                int nbrPop = stmtStk.size() - idx;

                for (i=0;i<nbrPop;i++)
                {
                    stmtStk.pop_back();
                }

                //将语句体附加到上1级语句中

                switch(stmtStk.back()->stmt->typ)
                {
                    case IF_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                        break;
                    }
                }

            }
        }

        lstIndt = (yyvsp[(-2) - (0)].intVl);
    }
#line 1804 "y.tab.c"
    break;

  case 9: /* execute_statement: %empty  */
#line 247 "bello.y"
    { 
        exctStmt(envr, (yyvsp[(-3) - (0)].stmt)); 
    }
#line 1812 "y.tab.c"
    break;

  case 10: /* single_statement: expression_statement  */
#line 253 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1818 "y.tab.c"
    break;

  case 11: /* single_statement: if_statement  */
#line 254 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1824 "y.tab.c"
    break;

  case 12: /* single_statement: error  */
#line 267 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 1834 "y.tab.c"
    break;

  case 13: /* expression_statement: expression  */
#line 305 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 1842 "y.tab.c"
    break;

  case 16: /* expression: unary_expression  */
#line 312 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1848 "y.tab.c"
    break;

  case 17: /* expression: binary_expression  */
#line 313 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 1854 "y.tab.c"
    break;

  case 18: /* expression: array_expression  */
#line 314 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1860 "y.tab.c"
    break;

  case 19: /* expression: new_array_expression  */
#line 315 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 1866 "y.tab.c"
    break;

  case 22: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 322 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1872 "y.tab.c"
    break;

  case 23: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 323 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1878 "y.tab.c"
    break;

  case 24: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 324 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1884 "y.tab.c"
    break;

  case 25: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 325 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1890 "y.tab.c"
    break;

  case 26: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 326 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1896 "y.tab.c"
    break;

  case 27: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 327 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 1902 "y.tab.c"
    break;

  case 28: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 331 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 1908 "y.tab.c"
    break;

  case 29: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 332 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 1914 "y.tab.c"
    break;

  case 30: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 333 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 1920 "y.tab.c"
    break;

  case 31: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 334 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 1926 "y.tab.c"
    break;

  case 32: /* unary_expression: SUB expression  */
#line 337 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 1932 "y.tab.c"
    break;

  case 33: /* unary_expression: ADD expression  */
#line 338 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 1938 "y.tab.c"
    break;

  case 34: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 339 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 1944 "y.tab.c"
    break;

  case 35: /* unary_expression: NOT expression  */
#line 340 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 1950 "y.tab.c"
    break;

  case 36: /* unary_expression: BIT_NOT expression  */
#line 341 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 1956 "y.tab.c"
    break;

  case 37: /* binary_expression: expression ADD expression  */
#line 344 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1962 "y.tab.c"
    break;

  case 38: /* binary_expression: expression SUB expression  */
#line 345 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1968 "y.tab.c"
    break;

  case 39: /* binary_expression: expression MUL expression  */
#line 346 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1974 "y.tab.c"
    break;

  case 40: /* binary_expression: expression DIV expression  */
#line 347 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1980 "y.tab.c"
    break;

  case 41: /* binary_expression: expression MOD expression  */
#line 348 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1986 "y.tab.c"
    break;

  case 42: /* binary_expression: expression AND expression  */
#line 349 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1992 "y.tab.c"
    break;

  case 43: /* binary_expression: expression OR expression  */
#line 350 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1998 "y.tab.c"
    break;

  case 44: /* binary_expression: expression EQ expression  */
#line 351 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2004 "y.tab.c"
    break;

  case 45: /* binary_expression: expression NE expression  */
#line 352 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2010 "y.tab.c"
    break;

  case 46: /* binary_expression: expression GT expression  */
#line 353 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2016 "y.tab.c"
    break;

  case 47: /* binary_expression: expression GE expression  */
#line 354 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2022 "y.tab.c"
    break;

  case 48: /* binary_expression: expression LT expression  */
#line 355 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2028 "y.tab.c"
    break;

  case 49: /* binary_expression: expression LE expression  */
#line 356 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2034 "y.tab.c"
    break;

  case 50: /* binary_expression: expression BIT_AND expression  */
#line 357 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2040 "y.tab.c"
    break;

  case 51: /* binary_expression: expression BIT_OR expression  */
#line 358 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2046 "y.tab.c"
    break;

  case 52: /* binary_expression: expression BIT_XOR expression  */
#line 359 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2052 "y.tab.c"
    break;

  case 53: /* value_expression: INT_VALUE  */
#line 363 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2058 "y.tab.c"
    break;

  case 54: /* value_expression: FLOAT_VALUE  */
#line 364 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2064 "y.tab.c"
    break;

  case 55: /* value_expression: BOOLEAN_VALUE  */
#line 365 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2070 "y.tab.c"
    break;

  case 56: /* value_expression: STRING_VALUE  */
#line 366 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2076 "y.tab.c"
    break;

  case 57: /* value_expression: NULL_VALUE  */
#line 367 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2082 "y.tab.c"
    break;

  case 60: /* lvalue_expression: IDENTIFER  */
#line 372 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2088 "y.tab.c"
    break;

  case 61: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 374 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2097 "y.tab.c"
    break;

  case 62: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 382 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2105 "y.tab.c"
    break;

  case 63: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 386 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2113 "y.tab.c"
    break;

  case 64: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 392 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2121 "y.tab.c"
    break;

  case 65: /* element_list: expression  */
#line 398 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2130 "y.tab.c"
    break;

  case 66: /* element_list: element_list COMMA expression  */
#line 403 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2139 "y.tab.c"
    break;

  case 67: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 443 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2147 "y.tab.c"
    break;

  case 68: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 447 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2155 "y.tab.c"
    break;

  case 69: /* argument_list: expression  */
#line 453 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2164 "y.tab.c"
    break;

  case 70: /* argument_list: argument_list COMMA expression  */
#line 458 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2173 "y.tab.c"
    break;

  case 71: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 466 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2182 "y.tab.c"
    break;

  case 72: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 471 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2191 "y.tab.c"
    break;

  case 73: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 476 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2200 "y.tab.c"
    break;

  case 74: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 481 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2209 "y.tab.c"
    break;

  case 75: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 486 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2218 "y.tab.c"
    break;

  case 76: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 491 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2227 "y.tab.c"
    break;

  case 77: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 496 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2236 "y.tab.c"
    break;

  case 78: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 501 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2245 "y.tab.c"
    break;

  case 79: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 506 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2254 "y.tab.c"
    break;

  case 80: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 511 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2263 "y.tab.c"
    break;

  case 81: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 516 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2272 "y.tab.c"
    break;

  case 82: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 521 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2281 "y.tab.c"
    break;

  case 83: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 526 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2290 "y.tab.c"
    break;

  case 84: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 531 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2299 "y.tab.c"
    break;

  case 85: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 536 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2308 "y.tab.c"
    break;

  case 86: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 541 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2317 "y.tab.c"
    break;

  case 87: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 546 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2326 "y.tab.c"
    break;

  case 88: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 551 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2335 "y.tab.c"
    break;

  case 89: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 556 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2344 "y.tab.c"
    break;

  case 90: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 561 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2353 "y.tab.c"
    break;

  case 91: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 566 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2362 "y.tab.c"
    break;

  case 92: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 571 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2371 "y.tab.c"
    break;

  case 93: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 589 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
    }
#line 2379 "y.tab.c"
    break;


#line 2383 "y.tab.c"

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

#line 679 "bello.y"


int main(int argc, char * argv[])
{

    //创建全局环境

    //struct EnvrStrc* glbEnvr = new EnvrStrc;

    //envr.push_back(glbEnvr);

    initGlbEnvr(envr);

    //可以提供代码文件供读取

    FILE *f;

    extern FILE* yyin;

    if (argc==2)
    {
        f= fopen(argv[1],"r");
        yyin= f;
    }

    yyparse();
}


