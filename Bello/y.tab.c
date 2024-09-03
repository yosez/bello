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
  YYSYMBOL_execute_statement = 75,         /* execute_statement  */
  YYSYMBOL_single_statement = 76,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 77, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 78,            /* null_statement  */
  YYSYMBOL_statement_block = 79,           /* statement_block  */
  YYSYMBOL_block_list = 80,                /* block_list  */
  YYSYMBOL_expression_statement = 81,      /* expression_statement  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 83, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 84,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 85, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 86,          /* unary_expression  */
  YYSYMBOL_binary_expression = 87,         /* binary_expression  */
  YYSYMBOL_value_expression = 88,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 89,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 90,          /* array_expression  */
  YYSYMBOL_new_array_expression = 91,      /* new_array_expression  */
  YYSYMBOL_element_list = 92,              /* element_list  */
  YYSYMBOL_var_statement = 93,             /* var_statement  */
  YYSYMBOL_global_statement = 94,          /* global_statement  */
  YYSYMBOL_assign_list = 95,               /* assign_list  */
  YYSYMBOL_function_expression = 96,       /* function_expression  */
  YYSYMBOL_argument_list = 97,             /* argument_list  */
  YYSYMBOL_evaluate_list = 98,             /* evaluate_list  */
  YYSYMBOL_if_statement = 99,              /* if_statement  */
  YYSYMBOL_for_statement = 100,            /* for_statement  */
  YYSYMBOL_while_statement = 101,          /* while_statement  */
  YYSYMBOL_do_while_statement = 102,       /* do_while_statement  */
  YYSYMBOL_break_statement = 103,          /* break_statement  */
  YYSYMBOL_continue_statement = 104,       /* continue_statement  */
  YYSYMBOL_structure_statement = 105,      /* structure_statement  */
  YYSYMBOL_function_define_statement = 106, /* function_define_statement  */
  YYSYMBOL_parameter_list = 107,           /* parameter_list  */
  YYSYMBOL_return_statement = 108          /* return_statement  */
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
#define YYLAST   1431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

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
     248,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   296,   297,   298,   299,   300,   301,
     305,   308,   309,   312,   317,   324,   330,   331,   332,   333,
     334,   335,   338,   339,   342,   343,   344,   345,   346,   347,
     351,   352,   353,   354,   357,   358,   359,   360,   361,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   383,   384,   385,   386,   387,
     388,   389,   392,   393,   401,   405,   411,   417,   422,   430,
     433,   436,   441,   446,   451,   462,   466,   472,   477,   485,
     490,   495,   500,   505,   510,   515,   520,   525,   530,   535,
     540,   545,   550,   555,   560,   565,   570,   575,   580,   585,
     590,   608,   625,   637,   643,   649,   650,   653,   654,   657,
     658,   661,   669,   677,   685,   696,   701,   708,   709
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
  "build_statement", "execute_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "statement_block",
  "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement",
  "global_statement", "assign_list", "function_expression",
  "argument_list", "evaluate_list", "if_statement", "for_statement",
  "while_statement", "do_while_statement", "break_statement",
  "continue_statement", "structure_statement", "function_define_statement",
  "parameter_list", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-31)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     105,  -167,    32,  -167,  -167,   253,   253,  -167,  -167,  -167,
    -167,  -167,  -167,    -3,    22,    22,   956,   592,   956,   956,
     956,   956,    24,    24,    18,    20,    33,   315,    35,    40,
      54,   956,    44,    66,  -167,  -167,  1331,  -167,  -167,  -167,
    -167,  -167,  -167,     8,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,    96,   622,    88,
      71,    71,   986,  -167,  1331,   -17,  -167,  -167,  -167,  -167,
    -167,    84,    84,   956,   496,   956,   377,  -167,  -167,    60,
     956,   956,    95,  1331,   956,  -167,   956,   956,   956,   956,
     956,   956,   956,   956,   956,   956,   956,   956,   956,   956,
     956,   956,   956,   956,   956,   956,   956,   956,   653,  -167,
    -167,    97,  -167,  -167,  1331,   -13,   956,   109,  -167,  -167,
     956,  1008,    93,  -167,  -167,  -167,  -167,  -167,  -167,   100,
    -167,  -167,   439,   102,  1030,  1052,     7,  1074,  -167,     3,
       3,  -167,  -167,  -167,    61,    61,    61,    61,    61,    61,
    1365,  1348,    12,  1382,   193,  1331,  1331,  1331,  1331,  1331,
    1331,   684,  1094,   715,  -167,  -167,   956,  1331,   113,  1331,
    -167,   956,  -167,  -167,  -167,   956,  -167,  -167,  -167,   191,
      -2,  -167,  -167,   101,  1114,  -167,   531,   746,  1134,  -167,
    1331,   956,    99,   107,  -167,  -167,   191,   120,  -167,  -167,
     776,  -167,   806,  1154,   108,  1174,  -167,   562,  -167,  1331,
     496,   103,  -167,  -167,  -167,  -167,  1214,  -167,  1234,  -167,
     836,  -167,  -167,   866,  -167,   896,  1194,   111,  -167,  -167,
    -167,  -167,  1254,  -167,  1274,  -167,  1294,  -167,   926,  -167,
    -167,  -167,  -167,  -167,  1314,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     2,     1,     5,     0,     0,    23,    75,    77,
      76,    78,    79,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   125,
       0,   137,     0,     0,    20,    11,    35,    37,    42,    43,
      38,    39,    36,    81,    40,    41,    21,    22,    80,    12,
      13,    14,    15,    16,    17,    19,    18,     0,     0,    91,
      89,    90,     0,    85,    87,     0,    55,    54,    57,    58,
      82,    50,    51,     0,    30,     0,     0,   129,   130,     0,
       0,     0,     0,   138,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    83,     8,    96,    97,     0,     0,     0,    56,    84,
       0,     0,     0,    29,    24,    25,    26,    27,    28,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     9,    59,
      60,    61,    62,    63,    66,    67,    68,    69,    70,    71,
      64,    65,    72,    73,    74,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     9,    95,     0,    92,    93,    88,
     121,     0,   123,    31,    34,     0,   128,   126,   135,     0,
       0,    86,     4,     0,     0,    99,     0,     0,     0,    10,
      98,     0,     0,     0,   134,   132,     0,     0,   109,   106,
       0,   103,     0,     0,     0,     0,   110,     0,     3,    94,
      30,     0,   133,   131,   136,   107,     0,   104,     0,   100,
       0,   120,   117,     0,   114,     0,     0,     0,   124,   108,
     105,   101,     0,   118,     0,   115,     0,   111,     0,   122,
     102,   119,   116,   112,     0,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,    25,   -28,  -167,    17,   -70,   -66,  -166,
    -167,   -68,   -16,  -167,  -167,  -167,  -167,  -167,  -167,    39,
    -167,  -167,  -167,  -167,  -167,   126,  -167,  -167,  -167,   -64,
     -62,   -58,   -57,  -167,  -167,  -167,  -167,  -167,  -167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,   138,   182,   208,    33,   122,    34,    78,
     132,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    65,    46,    47,    60,    48,   115,   111,    49,
      50,    51,    52,    53,    54,    79,    55,   180,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    64,    66,    67,    68,    69,   124,   129,   123,   119,
     125,   165,   126,   195,   120,    83,   127,   128,   166,   178,
      58,   102,   196,    57,   103,   104,   105,   106,   107,   197,
     213,   179,     3,   108,    59,     4,    70,     5,    88,    89,
      90,    73,   114,    74,    77,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    75,   121,    80,   109,
     110,    71,    72,    81,   134,   135,    82,    84,   137,    85,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   162,   131,    86,    87,    88,    89,    90,   112,
     167,   116,   117,   192,   169,    -7,     1,   193,    -7,   108,
      -7,    -7,    -7,    -7,    -7,    -7,   133,    -7,   136,    -7,
      -7,   168,   163,   171,   172,   175,   191,   198,    -7,   210,
      -7,   211,   214,   228,   221,   239,   189,   164,    -7,    -7,
     227,    61,   124,     0,   123,   184,   125,   188,   126,   174,
     190,    -7,   127,   128,     0,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,
     203,   205,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,   218,     0,     0,     0,
       0,   226,     7,     0,   -30,     0,   194,     8,     9,    10,
      11,    12,     0,    13,   232,    14,    15,   234,     0,   236,
       0,     0,     0,   212,    16,     0,    17,     0,    76,   -30,
       0,     0,   244,     0,    18,    19,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    20,     0,     0,
      99,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,    30,    31,    32,     7,     0,   -30,     0,     0,     8,
       9,    10,    11,    12,     0,    13,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    16,     0,    17,     0,
       0,     0,     0,     0,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,    30,    31,    32,     7,     0,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    16,     0,
      17,     0,    76,     0,     0,     0,     0,     0,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,    21,    22,    23,    24,     0,
      25,    26,    27,    28,    29,    30,    31,    32,     7,     0,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,   130,     0,     0,     0,     0,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,    30,    31,    32,
       7,     0,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,   173,     0,     0,
       0,     0,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,    30,
      31,    32,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    17,     0,     0,     0,     0,     0,     0,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    20,    13,     0,     0,    21,    22,    23,    24,
       0,    25,    26,    27,    16,     0,    17,   201,    32,     0,
       0,     0,     0,   202,    18,    19,     0,     0,     8,     9,
      10,    11,    12,     0,    13,     0,     0,    20,     0,     0,
       0,    21,    22,    23,     0,    16,     0,    17,   224,     0,
       0,     0,     0,    32,   225,    18,    19,     0,     8,     9,
      10,    11,    12,     0,    13,     0,     0,     0,    20,     0,
       0,     0,    21,    22,    23,    16,     0,    17,    63,     0,
       0,     0,     0,     0,    32,    18,    19,     0,     8,     9,
      10,    11,    12,     0,    13,     0,     0,     0,    20,     0,
       0,     0,    21,    22,    23,    16,   113,    17,     0,     0,
       0,     0,     0,     0,    32,    18,    19,     0,     0,     8,
       9,    10,    11,    12,     0,    13,     0,     0,    20,     0,
       0,     0,    21,    22,    23,     0,    16,     0,    17,     0,
       0,     0,     0,     0,    32,   161,    18,    19,     0,     0,
       8,     9,    10,    11,    12,     0,    13,     0,     0,    20,
       0,     0,     0,    21,    22,    23,     0,    16,     0,    17,
       0,     0,     0,     0,     0,    32,   183,    18,    19,     0,
       0,     8,     9,    10,    11,    12,     0,    13,     0,     0,
      20,     0,     0,     0,    21,    22,    23,     0,    16,     0,
      17,     0,     0,     0,     0,     0,    32,   187,    18,    19,
       0,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,    20,     0,     0,     0,    21,    22,    23,     0,    16,
       0,    17,     0,     0,     0,     0,     0,    32,   204,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,   215,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,   217,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,   231,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,   233,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,   235,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,   243,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,    16,
       0,    17,     0,     0,     0,     0,     0,     0,    32,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,    21,    22,    23,     0,
     118,     0,     0,     0,     0,     0,     0,     0,    32,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   170,    99,   100,   101,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   176,    99,   100,   101,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   177,    99,   100,   101,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   181,    99,
     100,   101,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     185,    99,   100,   101,     0,     0,   186,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     199,    99,   100,   101,     0,     0,   200,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     206,    99,   100,   101,     0,     0,   207,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     219,    99,   100,   101,     0,     0,   220,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     222,    99,   100,   101,     0,     0,   223,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     237,    99,   100,   101,     0,     0,   238,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     229,    99,   100,   101,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     230,    99,   100,   101,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     240,    99,   100,   101,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     241,    99,   100,   101,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     242,    99,   100,   101,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     245,    99,   100,   101,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,   100,   101,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,    99,   100,
     101,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,    99,   100,   101,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
       0,     0,    99,   100,   101,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,     0,    99,
       0,   101
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    20,    21,    74,    75,    74,    26,
      74,    24,    74,   179,    31,    31,    74,    74,    31,    12,
      23,    13,    24,     6,    16,    17,    18,    19,    20,    31,
     196,    24,     0,    25,    12,     3,    12,     5,    35,    36,
      37,    23,    58,    23,    27,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    23,    73,    23,    51,
      52,    22,    23,    23,    80,    81,    12,    23,    84,     3,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    76,    33,    34,    35,    36,    37,     3,
     116,    13,    31,   171,   120,     0,     1,   175,     3,    25,
       5,     6,     7,     8,     9,    10,    56,    12,    23,    14,
      15,    12,    25,    30,    24,    23,    13,    26,    23,    30,
      25,    24,    12,    30,    26,    24,   164,   112,    33,    34,
     210,    15,   210,    -1,   210,   161,   210,   163,   210,   132,
     166,    46,   210,   210,    -1,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
     186,   187,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,   202,    -1,    -1,    -1,
      -1,   207,     1,    -1,     3,    -1,   179,     6,     7,     8,
       9,    10,    -1,    12,   220,    14,    15,   223,    -1,   225,
      -1,    -1,    -1,   196,    23,    -1,    25,    -1,    27,    28,
      -1,    -1,   238,    -1,    33,    34,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    46,    -1,    -1,
      47,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,     1,    -1,     3,    -1,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,     1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,     1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
       1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    10,    46,    12,    -1,    -1,    50,    51,    52,    53,
      -1,    55,    56,    57,    23,    -1,    25,    26,    62,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    62,    32,    33,    34,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    62,    33,    34,    -1,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    33,    34,    -1,    -1,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    62,    32,    33,    34,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    62,    32,    33,    34,    -1,
      -1,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    62,    32,    33,    34,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    62,    32,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    24,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    24,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    24,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    24,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      26,    47,    48,    49,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    49,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    47,
      -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    71,     0,     3,     5,    72,     1,     6,     7,
       8,     9,    10,    12,    14,    15,    23,    25,    33,    34,
      46,    50,    51,    52,    53,    55,    56,    57,    58,    59,
      60,    61,    62,    76,    78,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    93,    94,    96,    99,
     100,   101,   102,   103,   104,   106,   108,    76,    23,    12,
      95,    95,    82,    26,    82,    92,    82,    82,    82,    82,
      12,    89,    89,    23,    23,    23,    27,    76,    79,   105,
      23,    23,    12,    82,    23,     3,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    47,
      48,    49,    13,    16,    17,    18,    19,    20,    25,    51,
      52,    98,     3,    24,    82,    97,    13,    31,    24,    26,
      31,    82,    77,    78,    81,    99,   100,   101,   102,    81,
      28,    76,    80,    56,    82,    82,    23,    82,    73,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    32,    82,    25,    73,    24,    31,    82,    12,    82,
      24,    30,    24,    28,    76,    23,    24,    24,    12,    24,
     107,    24,    74,    32,    82,    26,    32,    32,    82,    74,
      82,    13,    81,    81,    76,    79,    24,    31,    26,    26,
      32,    26,    32,    82,    32,    82,    26,    32,    75,    82,
      30,    24,    76,    79,    12,    26,    82,    26,    82,    26,
      32,    26,    26,    32,    26,    32,    82,    77,    30,    26,
      26,    26,    82,    26,    82,    26,    82,    26,    32,    24,
      26,    26,    26,    26,    82,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    72,    71,    71,    71,    71,    71,    73,    74,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    79,    79,    80,    80,    81,    82,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    90,    90,    91,    92,    92,    93,
      94,    95,    95,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,   100,   101,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   108
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     6,     2,     1,     0,     0,     0,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     4,     1,     3,     2,
       2,     1,     3,     3,     5,     4,     3,     1,     3,     3,
       5,     6,     7,     4,     5,     6,     4,     5,     6,     4,
       4,     6,     7,     8,     5,     6,     7,     5,     6,     7,
       5,     4,     8,     4,     7,     1,     4,     1,     4,     1,
       1,     6,     5,     6,     5,     1,     3,     1,     2
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
#line 1842 "y.tab.c"
    break;

  case 6: /* statement: error  */
#line 149 "bello.y"
            { yyerrok; }
#line 1848 "y.tab.c"
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
#line 1860 "y.tab.c"
    break;

  case 9: /* build_statement: %empty  */
#line 163 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);
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
            printf("stk\n");
            //语句入栈
            StmtStkItmStrc * sktItm = new StmtStkItmStrc;

            sktItm->indt = (yyvsp[(-3) - (0)].intVl);
            sktItm->stmt = (yyvsp[(-2) - (0)].stmt);
            sktItm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

            stmtStk.push_back(sktItm);

            printf("stk #2\n");
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

        lstIndt = indt;
    }
#line 1947 "y.tab.c"
    break;

  case 10: /* execute_statement: %empty  */
#line 248 "bello.y"
    { 
        printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);
        //只在无缩进的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            //YYABORT;
        }
        else
        {
            // exctStmt(envr, $<stmt>-3);
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();
        }

        printf("exct stmt\n");

        // if (stmtStk.back()->alwSubStmt == 1)
        // {
        //     YYABORT;            
        // }

         
    }
#line 1975 "y.tab.c"
    break;

  case 11: /* single_statement: expression_statement  */
#line 274 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1981 "y.tab.c"
    break;

  case 12: /* single_statement: if_statement  */
#line 275 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1987 "y.tab.c"
    break;

  case 13: /* single_statement: for_statement  */
#line 276 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1993 "y.tab.c"
    break;

  case 14: /* single_statement: while_statement  */
#line 277 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 1999 "y.tab.c"
    break;

  case 15: /* single_statement: do_while_statement  */
#line 278 "bello.y"
                         { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2005 "y.tab.c"
    break;

  case 16: /* single_statement: break_statement  */
#line 279 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2011 "y.tab.c"
    break;

  case 17: /* single_statement: continue_statement  */
#line 280 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2017 "y.tab.c"
    break;

  case 18: /* single_statement: return_statement  */
#line 281 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2023 "y.tab.c"
    break;

  case 19: /* single_statement: function_define_statement  */
#line 282 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2029 "y.tab.c"
    break;

  case 20: /* single_statement: null_statement  */
#line 283 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2035 "y.tab.c"
    break;

  case 21: /* single_statement: var_statement  */
#line 284 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2041 "y.tab.c"
    break;

  case 22: /* single_statement: global_statement  */
#line 285 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2047 "y.tab.c"
    break;

  case 23: /* single_statement: error  */
#line 287 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2057 "y.tab.c"
    break;

  case 30: /* null_statement: %empty  */
#line 305 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2063 "y.tab.c"
    break;

  case 31: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 308 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2069 "y.tab.c"
    break;

  case 32: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 309 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2075 "y.tab.c"
    break;

  case 33: /* block_list: single_statement  */
#line 313 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2084 "y.tab.c"
    break;

  case 34: /* block_list: block_list single_statement  */
#line 318 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2092 "y.tab.c"
    break;

  case 35: /* expression_statement: expression  */
#line 325 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2100 "y.tab.c"
    break;

  case 38: /* expression: unary_expression  */
#line 332 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2106 "y.tab.c"
    break;

  case 39: /* expression: binary_expression  */
#line 333 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2112 "y.tab.c"
    break;

  case 40: /* expression: array_expression  */
#line 334 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2118 "y.tab.c"
    break;

  case 41: /* expression: new_array_expression  */
#line 335 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2124 "y.tab.c"
    break;

  case 44: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 342 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2130 "y.tab.c"
    break;

  case 45: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 343 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2136 "y.tab.c"
    break;

  case 46: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 344 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2142 "y.tab.c"
    break;

  case 47: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 345 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2148 "y.tab.c"
    break;

  case 48: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 346 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2154 "y.tab.c"
    break;

  case 49: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 347 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2160 "y.tab.c"
    break;

  case 50: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 351 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2166 "y.tab.c"
    break;

  case 51: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 352 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2172 "y.tab.c"
    break;

  case 52: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 353 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2178 "y.tab.c"
    break;

  case 53: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 354 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2184 "y.tab.c"
    break;

  case 54: /* unary_expression: SUB expression  */
#line 357 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2190 "y.tab.c"
    break;

  case 55: /* unary_expression: ADD expression  */
#line 358 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2196 "y.tab.c"
    break;

  case 56: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 359 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2202 "y.tab.c"
    break;

  case 57: /* unary_expression: NOT expression  */
#line 360 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2208 "y.tab.c"
    break;

  case 58: /* unary_expression: BIT_NOT expression  */
#line 361 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2214 "y.tab.c"
    break;

  case 59: /* binary_expression: expression ADD expression  */
#line 364 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2220 "y.tab.c"
    break;

  case 60: /* binary_expression: expression SUB expression  */
#line 365 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2226 "y.tab.c"
    break;

  case 61: /* binary_expression: expression MUL expression  */
#line 366 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2232 "y.tab.c"
    break;

  case 62: /* binary_expression: expression DIV expression  */
#line 367 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2238 "y.tab.c"
    break;

  case 63: /* binary_expression: expression MOD expression  */
#line 368 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2244 "y.tab.c"
    break;

  case 64: /* binary_expression: expression AND expression  */
#line 369 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2250 "y.tab.c"
    break;

  case 65: /* binary_expression: expression OR expression  */
#line 370 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2256 "y.tab.c"
    break;

  case 66: /* binary_expression: expression EQ expression  */
#line 371 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2262 "y.tab.c"
    break;

  case 67: /* binary_expression: expression NE expression  */
#line 372 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2268 "y.tab.c"
    break;

  case 68: /* binary_expression: expression GT expression  */
#line 373 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2274 "y.tab.c"
    break;

  case 69: /* binary_expression: expression GE expression  */
#line 374 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2280 "y.tab.c"
    break;

  case 70: /* binary_expression: expression LT expression  */
#line 375 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2286 "y.tab.c"
    break;

  case 71: /* binary_expression: expression LE expression  */
#line 376 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2292 "y.tab.c"
    break;

  case 72: /* binary_expression: expression BIT_AND expression  */
#line 377 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2298 "y.tab.c"
    break;

  case 73: /* binary_expression: expression BIT_OR expression  */
#line 378 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2304 "y.tab.c"
    break;

  case 74: /* binary_expression: expression BIT_XOR expression  */
#line 379 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2310 "y.tab.c"
    break;

  case 75: /* value_expression: INT_VALUE  */
#line 383 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2316 "y.tab.c"
    break;

  case 76: /* value_expression: FLOAT_VALUE  */
#line 384 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2322 "y.tab.c"
    break;

  case 77: /* value_expression: BOOLEAN_VALUE  */
#line 385 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2328 "y.tab.c"
    break;

  case 78: /* value_expression: STRING_VALUE  */
#line 386 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2334 "y.tab.c"
    break;

  case 79: /* value_expression: NULL_VALUE  */
#line 387 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2340 "y.tab.c"
    break;

  case 82: /* lvalue_expression: IDENTIFER  */
#line 392 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2346 "y.tab.c"
    break;

  case 83: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 394 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2355 "y.tab.c"
    break;

  case 84: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 402 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2363 "y.tab.c"
    break;

  case 85: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 406 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2371 "y.tab.c"
    break;

  case 86: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 412 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2379 "y.tab.c"
    break;

  case 87: /* element_list: expression  */
#line 418 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2388 "y.tab.c"
    break;

  case 88: /* element_list: element_list COMMA expression  */
#line 423 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2397 "y.tab.c"
    break;

  case 89: /* var_statement: VAR assign_list  */
#line 430 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2403 "y.tab.c"
    break;

  case 90: /* global_statement: GLOBAL assign_list  */
#line 433 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2409 "y.tab.c"
    break;

  case 91: /* assign_list: IDENTIFER  */
#line 437 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2418 "y.tab.c"
    break;

  case 92: /* assign_list: IDENTIFER ASSIGN expression  */
#line 442 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2427 "y.tab.c"
    break;

  case 93: /* assign_list: assign_list COMMA IDENTIFER  */
#line 447 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2436 "y.tab.c"
    break;

  case 94: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 452 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2445 "y.tab.c"
    break;

  case 95: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 463 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2453 "y.tab.c"
    break;

  case 96: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 467 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2461 "y.tab.c"
    break;

  case 97: /* argument_list: expression  */
#line 473 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2470 "y.tab.c"
    break;

  case 98: /* argument_list: argument_list COMMA expression  */
#line 478 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2479 "y.tab.c"
    break;

  case 99: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 486 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2488 "y.tab.c"
    break;

  case 100: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 491 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2497 "y.tab.c"
    break;

  case 101: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 496 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2506 "y.tab.c"
    break;

  case 102: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 501 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2515 "y.tab.c"
    break;

  case 103: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 506 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2524 "y.tab.c"
    break;

  case 104: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 511 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2533 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 516 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2542 "y.tab.c"
    break;

  case 106: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 521 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2551 "y.tab.c"
    break;

  case 107: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 526 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2560 "y.tab.c"
    break;

  case 108: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 531 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2569 "y.tab.c"
    break;

  case 109: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 536 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2578 "y.tab.c"
    break;

  case 110: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 541 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2587 "y.tab.c"
    break;

  case 111: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 546 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2596 "y.tab.c"
    break;

  case 112: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 551 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2605 "y.tab.c"
    break;

  case 113: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 556 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2614 "y.tab.c"
    break;

  case 114: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 561 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2623 "y.tab.c"
    break;

  case 115: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 566 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2632 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 571 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2641 "y.tab.c"
    break;

  case 117: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 576 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2650 "y.tab.c"
    break;

  case 118: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 581 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2659 "y.tab.c"
    break;

  case 119: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 586 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2668 "y.tab.c"
    break;

  case 120: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 591 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2677 "y.tab.c"
    break;

  case 121: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 609 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        printf("bld if stmt\n");
    }
#line 2686 "y.tab.c"
    break;

  case 122: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 626 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 2694 "y.tab.c"
    break;

  case 123: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN  */
#line 638 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-1].stmt));
    }
#line 2702 "y.tab.c"
    break;

  case 124: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 644 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 2710 "y.tab.c"
    break;

  case 125: /* break_statement: BREAK  */
#line 649 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 2716 "y.tab.c"
    break;

  case 126: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 650 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 2722 "y.tab.c"
    break;

  case 127: /* continue_statement: CONTINUE  */
#line 653 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 2728 "y.tab.c"
    break;

  case 128: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 654 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 2734 "y.tab.c"
    break;

  case 131: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN statement_block  */
#line 662 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2746 "y.tab.c"
    break;

  case 132: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN statement_block  */
#line 670 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2758 "y.tab.c"
    break;

  case 133: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN single_statement  */
#line 678 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-4].idtf), (yyvsp[-2].prmLst), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2770 "y.tab.c"
    break;

  case 134: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN single_statement  */
#line 686 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-3].idtf), bldPrmLst(), (yyvsp[0].stmt));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2782 "y.tab.c"
    break;

  case 135: /* parameter_list: IDENTIFER  */
#line 697 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2791 "y.tab.c"
    break;

  case 136: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 702 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2800 "y.tab.c"
    break;

  case 137: /* return_statement: RETURN  */
#line 708 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 2806 "y.tab.c"
    break;

  case 138: /* return_statement: RETURN expression  */
#line 709 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 2812 "y.tab.c"
    break;


#line 2816 "y.tab.c"

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

#line 712 "bello.y"


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


