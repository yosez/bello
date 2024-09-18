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
    NEW_ARRAY = 317,               /* NEW_ARRAY  */
    MINUS_SIGN = 318,              /* MINUS_SIGN  */
    PLUS_SIGN = 319,               /* PLUS_SIGN  */
    READ_INT = 320,                /* READ_INT  */
    READ_FLOAT = 321,              /* READ_FLOAT  */
    READ = 322,                    /* READ  */
    READ_BOOL = 323,               /* READ_BOOL  */
    READ_LINE = 324                /* READ_LINE  */
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
#define NEW_ARRAY 317
#define MINUS_SIGN 318
#define PLUS_SIGN 319
#define READ_INT 320
#define READ_FLOAT 321
#define READ 322
#define READ_BOOL 323
#define READ_LINE 324

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
  YYSYMBOL_NEW_ARRAY = 62,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 63,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 64,                 /* PLUS_SIGN  */
  YYSYMBOL_READ_INT = 65,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 66,                /* READ_FLOAT  */
  YYSYMBOL_READ = 67,                      /* READ  */
  YYSYMBOL_READ_BOOL = 68,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 69,                 /* READ_LINE  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_statement = 71,                 /* statement  */
  YYSYMBOL_72_1 = 72,                      /* @1  */
  YYSYMBOL_check_indent = 73,              /* check_indent  */
  YYSYMBOL_build_statement = 74,           /* build_statement  */
  YYSYMBOL_close_execute_statement = 75,   /* close_execute_statement  */
  YYSYMBOL_execute_statement = 76,         /* execute_statement  */
  YYSYMBOL_single_statement = 77,          /* single_statement  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_expression = 79,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 80, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 81,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 82, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 83,          /* unary_expression  */
  YYSYMBOL_binary_expression = 84,         /* binary_expression  */
  YYSYMBOL_value_expression = 85,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 86,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 87,          /* array_expression  */
  YYSYMBOL_new_array_expression = 88,      /* new_array_expression  */
  YYSYMBOL_element_list = 89,              /* element_list  */
  YYSYMBOL_function_expression = 90,       /* function_expression  */
  YYSYMBOL_argument_list = 91,             /* argument_list  */
  YYSYMBOL_evaluate_list = 92,             /* evaluate_list  */
  YYSYMBOL_if_statement = 93,              /* if_statement  */
  YYSYMBOL_while_statement = 94            /* while_statement  */
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
#define YYLAST   1020

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

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
       0,   146,   146,   146,   147,   148,   149,   150,   153,   163,
     258,   351,   392,   393,   395,   404,   442,   448,   449,   450,
     451,   452,   453,   456,   457,   460,   461,   462,   463,   464,
     465,   469,   470,   471,   472,   475,   476,   477,   478,   479,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   501,   502,   503,   504,
     505,   506,   507,   510,   511,   519,   523,   529,   535,   540,
     580,   584,   590,   595,   603,   608,   613,   618,   623,   628,
     633,   638,   643,   648,   653,   658,   663,   668,   673,   678,
     683,   688,   693,   698,   703,   708,   726,   755
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
  "WHILE", "DO", "CONTINUE", "BREAK", "FUNC", "RETURN", "NEW_ARRAY",
  "MINUS_SIGN", "PLUS_SIGN", "READ_INT", "READ_FLOAT", "READ", "READ_BOOL",
  "READ_LINE", "$accept", "statement", "@1", "check_indent",
  "build_statement", "close_execute_statement", "execute_statement",
  "single_statement", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "function_expression",
  "argument_list", "evaluate_list", "if_statement", "while_statement", YY_NULLPTR
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

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      76,   -28,    68,   -28,   -28,   138,   138,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   595,   231,   595,   595,   595,
     595,    13,    13,     7,    19,    49,    71,   -28,   -27,   -28,
     -28,   -28,   -28,   -28,   -28,    15,   -28,   -28,   -28,   -28,
     -28,    75,   261,   625,   -28,   -27,    -2,   -28,   -28,   -28,
     -28,   -28,    55,    55,   595,   595,   595,   -28,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     292,   -28,   -28,    62,   -28,   -28,   -27,    -5,   -28,   -28,
     595,   647,    70,   669,   -28,     1,     1,   -28,   -28,   -28,
      56,    56,    56,    56,    56,    56,   943,   926,   977,   960,
     597,   -27,   -27,   -27,   -27,   -27,   -27,   323,   689,   354,
     -28,   -28,   595,   -27,   -28,   -28,   -28,   -28,    69,   709,
     -28,   170,   385,   729,   -28,   -27,   -28,   -28,   415,   -28,
     445,   749,    72,   769,   -28,   201,   -28,   -28,   809,   -28,
     829,   -28,   475,   -28,   -28,   505,   -28,   535,   789,   -28,
     -28,   -28,   849,   -28,   869,   -28,   889,   -28,   565,   -28,
     -28,   -28,   -28,   909,   -28
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     2,     1,    10,     0,     0,     5,    15,    56,
      58,    57,    59,    60,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    16,    18,
      23,    24,    19,    20,    17,    62,    21,    22,    61,    13,
      14,     0,     0,     0,    66,    68,     0,    36,    35,    38,
      39,    63,    31,    32,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    64,     8,    71,    72,     0,    37,    65,
       0,     0,     0,     0,     9,    40,    41,    42,    43,    44,
      47,    48,    49,    50,    51,    52,    45,    46,    53,    54,
      55,    25,    26,    27,    28,    29,    30,     0,     0,     0,
       9,    70,     0,    69,    96,    97,    67,     4,     0,     0,
      74,     0,     0,     0,    11,    73,    84,    81,     0,    78,
       0,     0,     0,     0,    85,     0,     3,    82,     0,    79,
       0,    75,     0,    95,    92,     0,    89,     0,     0,    83,
      80,    76,     0,    93,     0,    90,     0,    86,     0,    77,
      94,    91,    87,     0,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,   -28,    12,   -23,   -28,   -28,    94,    50,   -15,
     -28,   -28,   -28,   -28,   -28,   -28,    48,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,    94,   127,     7,   146,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    46,
      38,    87,    83,    39,    40
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    45,    47,    48,    49,    50,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   121,
      71,    72,    73,    42,    89,    51,   122,    86,    74,    90,
      54,    75,    76,    77,    78,    79,    60,    61,    62,    91,
      80,    93,    55,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   118,    81,    82,     3,    52,
      53,     4,    56,     5,    57,   123,    -7,     1,    84,    -7,
      80,    -7,    -7,    -7,    -7,    -7,    -7,   119,    -7,    58,
      59,    60,    61,    62,   125,   136,   120,   134,   153,    -7,
      41,    -7,   129,     0,   133,    92,     0,   135,     0,    -7,
      -7,     0,     0,     0,     0,     0,   141,   143,     0,     0,
       0,     0,    -7,   148,     0,   150,    -7,    -7,    -7,    -7,
     158,     0,    -7,     0,     0,     0,     0,   162,    -7,     8,
     164,     0,   166,     0,     9,    10,    11,    12,    13,     0,
      14,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,    15,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,    18,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,     0,    19,     0,     0,     0,    20,    21,
      22,    23,     0,    15,    24,    16,   139,     0,     0,     0,
      25,     0,   140,    17,    18,     0,     0,     9,    10,    11,
      12,    13,     0,    14,     0,     0,    19,     0,     0,     0,
      20,    21,    22,     0,    15,     0,    16,   156,     0,     0,
       0,     0,    25,   157,    17,    18,     0,     9,    10,    11,
      12,    13,     0,    14,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    15,     0,    16,    44,     0,     0,
       0,     0,     0,    25,    17,    18,     0,     9,    10,    11,
      12,    13,     0,    14,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    15,    85,    16,     0,     0,     0,
       0,     0,     0,    25,    17,    18,     0,     0,     9,    10,
      11,    12,    13,     0,    14,     0,     0,    19,     0,     0,
       0,    20,    21,    22,     0,    15,     0,    16,     0,     0,
       0,     0,     0,    25,   117,    17,    18,     0,     0,     9,
      10,    11,    12,    13,     0,    14,     0,     0,    19,     0,
       0,     0,    20,    21,    22,     0,    15,     0,    16,     0,
       0,     0,     0,     0,    25,   128,    17,    18,     0,     0,
       9,    10,    11,    12,    13,     0,    14,     0,     0,    19,
       0,     0,     0,    20,    21,    22,     0,    15,     0,    16,
       0,     0,     0,     0,     0,    25,   132,    17,    18,     0,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
      19,     0,     0,     0,    20,    21,    22,     0,    15,     0,
      16,     0,     0,     0,     0,     0,    25,   142,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,   147,     0,     0,     0,     0,     0,    25,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,   149,     0,     0,     0,     0,     0,    25,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,   161,     0,     0,     0,     0,     0,    25,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,   163,     0,     0,     0,     0,     0,    25,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,   165,     0,     0,     0,     0,     0,    25,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,   172,     0,     0,     0,     0,     0,    25,    17,    18,
       0,     9,    10,    11,    12,    13,     0,    14,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    15,     0,
      16,     0,     0,     0,     0,     0,     0,    25,    17,    18,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    19,     0,     0,    71,    20,    21,    22,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    25,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   124,    71,    72,    73,     0,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   126,    71,    72,    73,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   130,    71,    72,    73,     0,
       0,   131,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   137,    71,    72,    73,     0,
       0,   138,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   144,    71,    72,    73,     0,
       0,   145,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   151,    71,    72,    73,     0,
       0,   152,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   154,    71,    72,    73,     0,
       0,   155,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   167,    71,    72,    73,     0,
       0,   168,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   159,    71,    72,    73,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   160,    71,    72,    73,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   169,    71,    72,    73,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   170,    71,    72,    73,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   171,    71,    72,    73,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   174,    71,    72,    73,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,    73,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,     0,     0,    71,    72,    73,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
      71,    72,    73,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,    71,     0,    73,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68
};

static const yytype_int16 yycheck[] =
{
      15,    16,    17,    18,    19,    20,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    24,
      47,    48,    49,    23,    26,    12,    31,    42,    13,    31,
      23,    16,    17,    18,    19,    20,    35,    36,    37,    54,
      25,    56,    23,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    51,    52,     0,    21,
      22,     3,    23,     5,     3,    90,     0,     1,     3,     3,
      25,     5,     6,     7,     8,     9,    10,    25,    12,    33,
      34,    35,    36,    37,    24,    26,    84,   120,    26,    23,
       6,    25,   117,    -1,   119,    55,    -1,   122,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    46,   138,    -1,   140,    50,    51,    52,    53,
     145,    -1,    56,    -1,    -1,    -1,    -1,   152,    62,     1,
     155,    -1,   157,    -1,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    12,    -1,    46,    -1,    -1,    -1,    50,    51,
      52,    53,    -1,    23,    56,    25,    26,    -1,    -1,    -1,
      62,    -1,    32,    33,    34,    -1,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    62,    32,    33,    34,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    62,    33,    34,    -1,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    33,    34,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    62,    32,    33,    34,    -1,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    62,    32,    33,    34,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    62,    32,    33,    34,    -1,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    62,    32,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    46,    -1,    -1,    47,    50,    51,    52,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    24,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    24,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    26,    47,    48,    49,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    49,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    47,    -1,    49,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    71,     0,     3,     5,    72,    75,     1,     6,
       7,     8,     9,    10,    12,    23,    25,    33,    34,    46,
      50,    51,    52,    53,    56,    62,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    90,    93,
      94,    77,    23,    79,    26,    79,    89,    79,    79,    79,
      79,    12,    86,    86,    23,    23,    23,     3,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    47,    48,    49,    13,    16,    17,    18,    19,    20,
      25,    51,    52,    92,     3,    24,    79,    91,    24,    26,
      31,    79,    78,    79,    73,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    32,    79,    25,
      73,    24,    31,    79,    24,    24,    24,    74,    32,    79,
      26,    32,    32,    79,    74,    79,    26,    26,    32,    26,
      32,    79,    32,    79,    26,    32,    76,    26,    79,    26,
      79,    26,    32,    26,    26,    32,    26,    32,    79,    26,
      26,    26,    79,    26,    79,    26,    79,    26,    32,    26,
      26,    26,    26,    79,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    72,    71,    71,    71,    71,    71,    73,    74,
      75,    76,    77,    77,    77,    77,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     6,     3,     1,     0,     0,     0,
       0,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     4,     1,     3,
       4,     3,     1,     3,     3,     5,     6,     7,     4,     5,
       6,     4,     5,     6,     4,     4,     6,     7,     8,     5,
       6,     7,     5,     6,     7,     5,     4,     4
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
  case 2: /* @1: %empty  */
#line 146 "bello.y"
                {(yyval.intVl) = 0; }
#line 1706 "y.tab.c"
    break;

  case 6: /* statement: error  */
#line 149 "bello.y"
            { yyerrok; }
#line 1712 "y.tab.c"
    break;

  case 8: /* check_indent: %empty  */
#line 153 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 1724 "y.tab.c"
    break;

  case 9: /* build_statement: %empty  */
#line 163 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);
        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈

        printf("indt: %d lstIndt: %d\n",indt, lstIndt);
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                StmtStkItmStrc * sktItm = new StmtStkItmStrc;

                sktItm->indt = indt;
                sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
                sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

                stmtStk.push_back(sktItm);

                printf("--->>>stmt in stk: %d\n", stmtStk.size());
            }
            else
            {
                yyerrok;
            }
        }
        else if (indt == lstIndt)
        {
            //语句入栈
            StmtStkItmStrc * sktItm = new StmtStkItmStrc;

            sktItm->indt = indt;
            sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
            sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

            stmtStk.push_back(sktItm);

            printf("stk lyr: %d\n", stmtStk.size());
        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            while (stmtStk.back()->indt > nowIndt)
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

                    i++;
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
                    case WHILE_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                        break;
                    }
                }

            }
        }

        lstIndt = indt;
    }
#line 1821 "y.tab.c"
    break;

  case 10: /* close_execute_statement: %empty  */
#line 258 "bello.y"
    { 

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            printf("close_execute_statement\n");

            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                yyclearin;
                yyerrok;
                
            }

            //如果上1条语句为顶级语句且不允许子语句，则无动作
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            {
                
            }

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt>0)
            {
                printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                while (stmtStk.back()->indt > nowIndt)
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

                        i++;
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
                            printf("if statement\n");
                            stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                            break;
                        }
                        case WHILE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                            break;
                        }
                    }

                }

                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }

    }
#line 1916 "y.tab.c"
    break;

  case 11: /* execute_statement: %empty  */
#line 351 "bello.y"
    { 
        printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            //YYABORT;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();

            printf("exct stmt\n");
        }
  
    }
#line 1938 "y.tab.c"
    break;

  case 12: /* single_statement: expression_statement  */
#line 392 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1944 "y.tab.c"
    break;

  case 13: /* single_statement: if_statement  */
#line 393 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1950 "y.tab.c"
    break;

  case 14: /* single_statement: while_statement  */
#line 395 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1956 "y.tab.c"
    break;

  case 15: /* single_statement: error  */
#line 405 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 1966 "y.tab.c"
    break;

  case 16: /* expression_statement: expression  */
#line 443 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 1974 "y.tab.c"
    break;

  case 19: /* expression: unary_expression  */
#line 450 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1980 "y.tab.c"
    break;

  case 20: /* expression: binary_expression  */
#line 451 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 1986 "y.tab.c"
    break;

  case 21: /* expression: array_expression  */
#line 452 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 1992 "y.tab.c"
    break;

  case 22: /* expression: new_array_expression  */
#line 453 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 1998 "y.tab.c"
    break;

  case 25: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 460 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2004 "y.tab.c"
    break;

  case 26: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 461 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2010 "y.tab.c"
    break;

  case 27: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 462 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2016 "y.tab.c"
    break;

  case 28: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 463 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2022 "y.tab.c"
    break;

  case 29: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 464 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2028 "y.tab.c"
    break;

  case 30: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 465 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2034 "y.tab.c"
    break;

  case 31: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 469 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2040 "y.tab.c"
    break;

  case 32: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 470 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2046 "y.tab.c"
    break;

  case 33: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 471 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2052 "y.tab.c"
    break;

  case 34: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 472 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2058 "y.tab.c"
    break;

  case 35: /* unary_expression: SUB expression  */
#line 475 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2064 "y.tab.c"
    break;

  case 36: /* unary_expression: ADD expression  */
#line 476 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2070 "y.tab.c"
    break;

  case 37: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 477 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2076 "y.tab.c"
    break;

  case 38: /* unary_expression: NOT expression  */
#line 478 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2082 "y.tab.c"
    break;

  case 39: /* unary_expression: BIT_NOT expression  */
#line 479 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2088 "y.tab.c"
    break;

  case 40: /* binary_expression: expression ADD expression  */
#line 482 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2094 "y.tab.c"
    break;

  case 41: /* binary_expression: expression SUB expression  */
#line 483 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2100 "y.tab.c"
    break;

  case 42: /* binary_expression: expression MUL expression  */
#line 484 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2106 "y.tab.c"
    break;

  case 43: /* binary_expression: expression DIV expression  */
#line 485 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2112 "y.tab.c"
    break;

  case 44: /* binary_expression: expression MOD expression  */
#line 486 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2118 "y.tab.c"
    break;

  case 45: /* binary_expression: expression AND expression  */
#line 487 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2124 "y.tab.c"
    break;

  case 46: /* binary_expression: expression OR expression  */
#line 488 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2130 "y.tab.c"
    break;

  case 47: /* binary_expression: expression EQ expression  */
#line 489 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2136 "y.tab.c"
    break;

  case 48: /* binary_expression: expression NE expression  */
#line 490 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2142 "y.tab.c"
    break;

  case 49: /* binary_expression: expression GT expression  */
#line 491 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2148 "y.tab.c"
    break;

  case 50: /* binary_expression: expression GE expression  */
#line 492 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2154 "y.tab.c"
    break;

  case 51: /* binary_expression: expression LT expression  */
#line 493 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2160 "y.tab.c"
    break;

  case 52: /* binary_expression: expression LE expression  */
#line 494 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2166 "y.tab.c"
    break;

  case 53: /* binary_expression: expression BIT_AND expression  */
#line 495 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2172 "y.tab.c"
    break;

  case 54: /* binary_expression: expression BIT_OR expression  */
#line 496 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2178 "y.tab.c"
    break;

  case 55: /* binary_expression: expression BIT_XOR expression  */
#line 497 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2184 "y.tab.c"
    break;

  case 56: /* value_expression: INT_VALUE  */
#line 501 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2190 "y.tab.c"
    break;

  case 57: /* value_expression: FLOAT_VALUE  */
#line 502 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2196 "y.tab.c"
    break;

  case 58: /* value_expression: BOOLEAN_VALUE  */
#line 503 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2202 "y.tab.c"
    break;

  case 59: /* value_expression: STRING_VALUE  */
#line 504 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2208 "y.tab.c"
    break;

  case 60: /* value_expression: NULL_VALUE  */
#line 505 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2214 "y.tab.c"
    break;

  case 63: /* lvalue_expression: IDENTIFER  */
#line 510 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2220 "y.tab.c"
    break;

  case 64: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 512 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2229 "y.tab.c"
    break;

  case 65: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 520 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2237 "y.tab.c"
    break;

  case 66: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 524 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2245 "y.tab.c"
    break;

  case 67: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 530 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2253 "y.tab.c"
    break;

  case 68: /* element_list: expression  */
#line 536 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2262 "y.tab.c"
    break;

  case 69: /* element_list: element_list COMMA expression  */
#line 541 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2271 "y.tab.c"
    break;

  case 70: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 581 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2279 "y.tab.c"
    break;

  case 71: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 585 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2287 "y.tab.c"
    break;

  case 72: /* argument_list: expression  */
#line 591 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2296 "y.tab.c"
    break;

  case 73: /* argument_list: argument_list COMMA expression  */
#line 596 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2305 "y.tab.c"
    break;

  case 74: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 604 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2314 "y.tab.c"
    break;

  case 75: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 609 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2323 "y.tab.c"
    break;

  case 76: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 614 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2332 "y.tab.c"
    break;

  case 77: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 619 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2341 "y.tab.c"
    break;

  case 78: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 624 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2350 "y.tab.c"
    break;

  case 79: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 629 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2359 "y.tab.c"
    break;

  case 80: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 634 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2368 "y.tab.c"
    break;

  case 81: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 639 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2377 "y.tab.c"
    break;

  case 82: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 644 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2386 "y.tab.c"
    break;

  case 83: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 649 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2395 "y.tab.c"
    break;

  case 84: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 654 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2404 "y.tab.c"
    break;

  case 85: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 659 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2413 "y.tab.c"
    break;

  case 86: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 664 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2422 "y.tab.c"
    break;

  case 87: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 669 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2431 "y.tab.c"
    break;

  case 88: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 674 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2440 "y.tab.c"
    break;

  case 89: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 679 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2449 "y.tab.c"
    break;

  case 90: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 684 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2458 "y.tab.c"
    break;

  case 91: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 689 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2467 "y.tab.c"
    break;

  case 92: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 694 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2476 "y.tab.c"
    break;

  case 93: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 699 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2485 "y.tab.c"
    break;

  case 94: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 704 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2494 "y.tab.c"
    break;

  case 95: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 709 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2503 "y.tab.c"
    break;

  case 96: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 727 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        printf("bld if stmt\n");
    }
#line 2512 "y.tab.c"
    break;

  case 97: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN  */
#line 756 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-1].stmt));
    }
#line 2520 "y.tab.c"
    break;


#line 2524 "y.tab.c"

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

#line 830 "bello.y"


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


