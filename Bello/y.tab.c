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

    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

    void fldStmt(int indt);


#line 129 "y.tab.c"

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
    NULL_STRING = 258,             /* NULL_STRING  */
    LF = 259,                      /* LF  */
    END_FILE = 260,                /* END_FILE  */
    NOP = 261,                     /* NOP  */
    CLASS = 262,                   /* CLASS  */
    INDENT = 263,                  /* INDENT  */
    INT_VALUE = 264,               /* INT_VALUE  */
    BOOLEAN_VALUE = 265,           /* BOOLEAN_VALUE  */
    FLOAT_VALUE = 266,             /* FLOAT_VALUE  */
    STRING_VALUE = 267,            /* STRING_VALUE  */
    NULL_VALUE = 268,              /* NULL_VALUE  */
    ARRAY_VALUE = 269,             /* ARRAY_VALUE  */
    IDENTIFER = 270,               /* IDENTIFER  */
    ASSIGN = 271,                  /* ASSIGN  */
    VAR = 272,                     /* VAR  */
    GLOBAL = 273,                  /* GLOBAL  */
    ADD_ASSIGN = 274,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 275,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 276,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 277,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 278,              /* MOD_ASSIGN  */
    PRINT = 279,                   /* PRINT  */
    PRINTLN = 280,                 /* PRINTLN  */
    LEFT_PAREN = 281,              /* LEFT_PAREN  */
    RIGHT_PAREN = 282,             /* RIGHT_PAREN  */
    LEFT_QUAD = 283,               /* LEFT_QUAD  */
    RIGHT_QUAD = 284,              /* RIGHT_QUAD  */
    LEFT_BRACE = 285,              /* LEFT_BRACE  */
    RIGHT_BRACE = 286,             /* RIGHT_BRACE  */
    SEMICOLON_OPTIONAL = 287,      /* SEMICOLON_OPTIONAL  */
    SEMICOLON = 288,               /* SEMICOLON  */
    COMMA = 289,                   /* COMMA  */
    COLON = 290,                   /* COLON  */
    ADD = 291,                     /* ADD  */
    SUB = 292,                     /* SUB  */
    MUL = 293,                     /* MUL  */
    DIV = 294,                     /* DIV  */
    MOD = 295,                     /* MOD  */
    EQ = 296,                      /* EQ  */
    NE = 297,                      /* NE  */
    GT = 298,                      /* GT  */
    GE = 299,                      /* GE  */
    LT = 300,                      /* LT  */
    LE = 301,                      /* LE  */
    AND = 302,                     /* AND  */
    OR = 303,                      /* OR  */
    NOT = 304,                     /* NOT  */
    BIT_AND = 305,                 /* BIT_AND  */
    BIT_OR = 306,                  /* BIT_OR  */
    BIT_XOR = 307,                 /* BIT_XOR  */
    BIT_NOT = 308,                 /* BIT_NOT  */
    INCREMENT = 309,               /* INCREMENT  */
    DECREMENT = 310,               /* DECREMENT  */
    IF = 311,                      /* IF  */
    ELSE = 312,                    /* ELSE  */
    FOR = 313,                     /* FOR  */
    WHILE = 314,                   /* WHILE  */
    DO = 315,                      /* DO  */
    CONTINUE = 316,                /* CONTINUE  */
    BREAK = 317,                   /* BREAK  */
    FUNC = 318,                    /* FUNC  */
    RETURN = 319,                  /* RETURN  */
    NEW_ARRAY = 320,               /* NEW_ARRAY  */
    MINUS_SIGN = 321,              /* MINUS_SIGN  */
    PLUS_SIGN = 322,               /* PLUS_SIGN  */
    READ_INT = 323,                /* READ_INT  */
    READ_FLOAT = 324,              /* READ_FLOAT  */
    READ = 325,                    /* READ  */
    READ_BOOL = 326,               /* READ_BOOL  */
    READ_LINE = 327                /* READ_LINE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NULL_STRING 258
#define LF 259
#define END_FILE 260
#define NOP 261
#define CLASS 262
#define INDENT 263
#define INT_VALUE 264
#define BOOLEAN_VALUE 265
#define FLOAT_VALUE 266
#define STRING_VALUE 267
#define NULL_VALUE 268
#define ARRAY_VALUE 269
#define IDENTIFER 270
#define ASSIGN 271
#define VAR 272
#define GLOBAL 273
#define ADD_ASSIGN 274
#define SUB_ASSIGN 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define PRINT 279
#define PRINTLN 280
#define LEFT_PAREN 281
#define RIGHT_PAREN 282
#define LEFT_QUAD 283
#define RIGHT_QUAD 284
#define LEFT_BRACE 285
#define RIGHT_BRACE 286
#define SEMICOLON_OPTIONAL 287
#define SEMICOLON 288
#define COMMA 289
#define COLON 290
#define ADD 291
#define SUB 292
#define MUL 293
#define DIV 294
#define MOD 295
#define EQ 296
#define NE 297
#define GT 298
#define GE 299
#define LT 300
#define LE 301
#define AND 302
#define OR 303
#define NOT 304
#define BIT_AND 305
#define BIT_OR 306
#define BIT_XOR 307
#define BIT_NOT 308
#define INCREMENT 309
#define DECREMENT 310
#define IF 311
#define ELSE 312
#define FOR 313
#define WHILE 314
#define DO 315
#define CONTINUE 316
#define BREAK 317
#define FUNC 318
#define RETURN 319
#define NEW_ARRAY 320
#define MINUS_SIGN 321
#define PLUS_SIGN 322
#define READ_INT 323
#define READ_FLOAT 324
#define READ 325
#define READ_BOOL 326
#define READ_LINE 327

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 60 "bello.y"

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

#line 348 "y.tab.c"

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
  YYSYMBOL_NULL_STRING = 3,                /* NULL_STRING  */
  YYSYMBOL_LF = 4,                         /* LF  */
  YYSYMBOL_END_FILE = 5,                   /* END_FILE  */
  YYSYMBOL_NOP = 6,                        /* NOP  */
  YYSYMBOL_CLASS = 7,                      /* CLASS  */
  YYSYMBOL_INDENT = 8,                     /* INDENT  */
  YYSYMBOL_INT_VALUE = 9,                  /* INT_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 10,             /* BOOLEAN_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 11,               /* FLOAT_VALUE  */
  YYSYMBOL_STRING_VALUE = 12,              /* STRING_VALUE  */
  YYSYMBOL_NULL_VALUE = 13,                /* NULL_VALUE  */
  YYSYMBOL_ARRAY_VALUE = 14,               /* ARRAY_VALUE  */
  YYSYMBOL_IDENTIFER = 15,                 /* IDENTIFER  */
  YYSYMBOL_ASSIGN = 16,                    /* ASSIGN  */
  YYSYMBOL_VAR = 17,                       /* VAR  */
  YYSYMBOL_GLOBAL = 18,                    /* GLOBAL  */
  YYSYMBOL_ADD_ASSIGN = 19,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 20,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 21,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 22,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 23,                /* MOD_ASSIGN  */
  YYSYMBOL_PRINT = 24,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 25,                   /* PRINTLN  */
  YYSYMBOL_LEFT_PAREN = 26,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 27,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_QUAD = 28,                 /* LEFT_QUAD  */
  YYSYMBOL_RIGHT_QUAD = 29,                /* RIGHT_QUAD  */
  YYSYMBOL_LEFT_BRACE = 30,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 31,               /* RIGHT_BRACE  */
  YYSYMBOL_SEMICOLON_OPTIONAL = 32,        /* SEMICOLON_OPTIONAL  */
  YYSYMBOL_SEMICOLON = 33,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 34,                     /* COMMA  */
  YYSYMBOL_COLON = 35,                     /* COLON  */
  YYSYMBOL_ADD = 36,                       /* ADD  */
  YYSYMBOL_SUB = 37,                       /* SUB  */
  YYSYMBOL_MUL = 38,                       /* MUL  */
  YYSYMBOL_DIV = 39,                       /* DIV  */
  YYSYMBOL_MOD = 40,                       /* MOD  */
  YYSYMBOL_EQ = 41,                        /* EQ  */
  YYSYMBOL_NE = 42,                        /* NE  */
  YYSYMBOL_GT = 43,                        /* GT  */
  YYSYMBOL_GE = 44,                        /* GE  */
  YYSYMBOL_LT = 45,                        /* LT  */
  YYSYMBOL_LE = 46,                        /* LE  */
  YYSYMBOL_AND = 47,                       /* AND  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_NOT = 49,                       /* NOT  */
  YYSYMBOL_BIT_AND = 50,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 51,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 52,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 53,                   /* BIT_NOT  */
  YYSYMBOL_INCREMENT = 54,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 55,                 /* DECREMENT  */
  YYSYMBOL_IF = 56,                        /* IF  */
  YYSYMBOL_ELSE = 57,                      /* ELSE  */
  YYSYMBOL_FOR = 58,                       /* FOR  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_DO = 60,                        /* DO  */
  YYSYMBOL_CONTINUE = 61,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 62,                     /* BREAK  */
  YYSYMBOL_FUNC = 63,                      /* FUNC  */
  YYSYMBOL_RETURN = 64,                    /* RETURN  */
  YYSYMBOL_NEW_ARRAY = 65,                 /* NEW_ARRAY  */
  YYSYMBOL_MINUS_SIGN = 66,                /* MINUS_SIGN  */
  YYSYMBOL_PLUS_SIGN = 67,                 /* PLUS_SIGN  */
  YYSYMBOL_READ_INT = 68,                  /* READ_INT  */
  YYSYMBOL_READ_FLOAT = 69,                /* READ_FLOAT  */
  YYSYMBOL_READ = 70,                      /* READ  */
  YYSYMBOL_READ_BOOL = 71,                 /* READ_BOOL  */
  YYSYMBOL_READ_LINE = 72,                 /* READ_LINE  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_75_1 = 75,                      /* @1  */
  YYSYMBOL_check_indent = 76,              /* check_indent  */
  YYSYMBOL_build_statement = 77,           /* build_statement  */
  YYSYMBOL_close_execute_statement = 78,   /* close_execute_statement  */
  YYSYMBOL_close_execute_last_statement = 79, /* close_execute_last_statement  */
  YYSYMBOL_execute_statement = 80,         /* execute_statement  */
  YYSYMBOL_single_statement = 81,          /* single_statement  */
  YYSYMBOL_single_statement_no_semicolon = 82, /* single_statement_no_semicolon  */
  YYSYMBOL_null_statement = 83,            /* null_statement  */
  YYSYMBOL_nop_statement = 84,             /* nop_statement  */
  YYSYMBOL_statement_block = 85,           /* statement_block  */
  YYSYMBOL_block_list = 86,                /* block_list  */
  YYSYMBOL_expression_statement = 87,      /* expression_statement  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_lvalue_operation_expression = 89, /* lvalue_operation_expression  */
  YYSYMBOL_assign_expression = 90,         /* assign_expression  */
  YYSYMBOL_self_operation_expression = 91, /* self_operation_expression  */
  YYSYMBOL_unary_expression = 92,          /* unary_expression  */
  YYSYMBOL_binary_expression = 93,         /* binary_expression  */
  YYSYMBOL_value_expression = 94,          /* value_expression  */
  YYSYMBOL_lvalue_expression = 95,         /* lvalue_expression  */
  YYSYMBOL_array_expression = 96,          /* array_expression  */
  YYSYMBOL_new_array_expression = 97,      /* new_array_expression  */
  YYSYMBOL_element_list = 98,              /* element_list  */
  YYSYMBOL_var_statement = 99,             /* var_statement  */
  YYSYMBOL_global_statement = 100,         /* global_statement  */
  YYSYMBOL_assign_list = 101,              /* assign_list  */
  YYSYMBOL_function_expression = 102,      /* function_expression  */
  YYSYMBOL_argument_list = 103,            /* argument_list  */
  YYSYMBOL_evaluate_list = 104,            /* evaluate_list  */
  YYSYMBOL_if_statement = 105,             /* if_statement  */
  YYSYMBOL_else_statement = 106,           /* else_statement  */
  YYSYMBOL_for_statement = 107,            /* for_statement  */
  YYSYMBOL_while_statement = 108,          /* while_statement  */
  YYSYMBOL_do_while_statement = 109,       /* do_while_statement  */
  YYSYMBOL_break_statement = 110,          /* break_statement  */
  YYSYMBOL_continue_statement = 111,       /* continue_statement  */
  YYSYMBOL_structure_statement = 112,      /* structure_statement  */
  YYSYMBOL_function_define_statement = 113, /* function_define_statement  */
  YYSYMBOL_class_define_statement = 114,   /* class_define_statement  */
  YYSYMBOL_parameter_list = 115,           /* parameter_list  */
  YYSYMBOL_return_statement = 116          /* return_statement  */
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
#define YYLAST   1397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  251

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   154,   154,   154,   155,   156,   157,   158,   159,   163,
     173,   250,   303,   356,   397,   398,   399,   400,   401,   403,
     404,   405,   406,   408,   409,   410,   411,   412,   422,   423,
     424,   425,   426,   427,   431,   434,   437,   438,   441,   446,
     453,   459,   460,   461,   462,   463,   464,   467,   468,   471,
     472,   473,   474,   475,   476,   480,   481,   482,   483,   486,
     487,   488,   489,   490,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     512,   513,   514,   515,   516,   517,   518,   521,   522,   530,
     534,   540,   546,   551,   559,   562,   565,   570,   575,   580,
     591,   595,   601,   606,   614,   619,   624,   629,   634,   639,
     644,   649,   654,   659,   664,   669,   674,   679,   684,   689,
     694,   699,   704,   709,   714,   719,   737,   748,   761,   773,
     779,   785,   786,   789,   790,   793,   794,   831,   839,   849,
     858,   863,   870,   871
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
  "\"end of file\"", "error", "\"invalid token\"", "NULL_STRING", "LF",
  "END_FILE", "NOP", "CLASS", "INDENT", "INT_VALUE", "BOOLEAN_VALUE",
  "FLOAT_VALUE", "STRING_VALUE", "NULL_VALUE", "ARRAY_VALUE", "IDENTIFER",
  "ASSIGN", "VAR", "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE",
  "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL",
  "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT",
  "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT", "DECREMENT",
  "IF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE", "BREAK", "FUNC",
  "RETURN", "NEW_ARRAY", "MINUS_SIGN", "PLUS_SIGN", "READ_INT",
  "READ_FLOAT", "READ", "READ_BOOL", "READ_LINE", "$accept", "statement",
  "@1", "check_indent", "build_statement", "close_execute_statement",
  "close_execute_last_statement", "execute_statement", "single_statement",
  "single_statement_no_semicolon", "null_statement", "nop_statement",
  "statement_block", "block_list", "expression_statement", "expression",
  "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "value_expression", "lvalue_expression", "array_expression",
  "new_array_expression", "element_list", "var_statement",
  "global_statement", "assign_list", "function_expression",
  "argument_list", "evaluate_list", "if_statement", "else_statement",
  "for_statement", "while_statement", "do_while_statement",
  "break_statement", "continue_statement", "structure_statement",
  "function_define_statement", "class_define_statement", "parameter_list",
  "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     216,   -78,    92,   -78,   -78,   -78,   476,   -78,   -78,   -78,
     -78,   -78,    -9,   -78,   -78,   -78,   -78,   -78,    -1,     9,
       9,   958,   594,   958,   958,   958,   958,    12,    12,    24,
     -78,    25,    34,    35,    38,    50,   958,    41,    89,   -78,
     -78,  1311,   -78,   -78,   -78,   -78,   -78,   -78,    -2,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   476,   -78,   624,    78,    62,    62,    -5,
     -78,  1311,    20,   -78,   -78,   -78,   -78,   -78,    71,    71,
     958,    99,   958,   958,   958,    75,  1311,   958,   -78,   958,
     958,   958,   958,   958,   958,   958,   958,   958,   958,   958,
     958,   958,   958,   958,   958,   958,   958,   958,   958,   958,
     958,   655,   -78,   -78,    77,   102,   -78,  1311,    -4,   958,
      88,   -78,   -78,   958,   988,   281,    74,   -78,   -78,   -78,
     -78,   -78,   -78,    86,  1010,  1032,     1,  1054,   -78,    18,
      18,   -78,   -78,   -78,    79,    79,    79,    79,    79,    79,
    1345,  1328,   283,   153,   218,  1311,  1311,  1311,  1311,  1311,
    1311,   686,  1074,   717,   -78,   -78,   958,  1311,   104,  1311,
     -78,   346,   -78,   -78,    63,   958,   -78,   -78,   -78,   -78,
     -78,    21,   -78,   -78,    94,  1094,   -78,   533,   748,  1114,
     -78,  1311,   958,   -78,   -78,   411,    95,    91,   -78,   111,
     -78,   -78,   778,   -78,   808,  1134,   100,  1154,   -78,   564,
     -78,  1311,   -78,   -78,   958,    99,   -78,   -78,  1194,   -78,
    1214,   -78,   838,   -78,   -78,   868,   -78,   898,  1174,   -78,
     101,   103,   -78,   -78,   -78,  1234,   -78,  1254,   -78,  1274,
     -78,   928,    98,   -78,   -78,   -78,   -78,   -78,  1294,   -78,
     -78
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      27,    35,     0,    80,    82,    81,    83,    84,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,     0,     0,   133,   131,     0,   142,     0,     0,    23,
      14,    40,    42,    47,    48,    43,    44,    41,    86,    45,
      46,    24,    25,    85,    15,    16,    17,    18,    19,    20,
      22,    26,    21,     0,   139,     0,    96,    94,    95,     0,
      90,    92,     0,    60,    59,    62,    63,    87,    55,    56,
       0,    34,     0,     0,     0,     0,   143,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    88,     0,   101,   102,     0,     0,
       0,    61,    89,     0,     0,     0,     0,    33,    28,    29,
      30,    31,    32,     0,     0,     0,     0,     0,    10,    64,
      65,    66,    67,    68,    71,    72,    73,    74,    75,    76,
      69,    70,    77,    78,    79,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     9,   100,     0,    97,    98,    93,
     126,     0,   135,   136,     0,     0,   129,   134,   132,   140,
     138,     0,    91,     4,     0,     0,   104,     0,     0,     0,
      10,   103,     0,    37,    38,     0,     0,     0,   137,     0,
     114,   111,     0,   108,     0,     0,     0,     0,   115,     0,
      13,    99,    36,    39,     0,    34,   141,   112,     0,   109,
       0,   105,     0,   125,   122,     0,   119,     0,     0,     3,
       0,     0,   113,   110,   106,     0,   123,     0,   120,     0,
     116,     0,     0,   128,   107,   124,   121,   117,     0,   130,
     118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   -32,   -57,   -78,   129,   -78,   -34,   -77,
     -78,   -78,   -78,   -78,   -71,   -21,   -78,   -78,   -78,   -78,
     -78,   -78,   -19,   -78,   -78,   -78,   -78,   -78,   119,   -78,
     -78,   -78,   -74,   -78,   -69,   -68,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    63,   138,   183,     8,     7,   229,    38,   126,
     127,    39,   173,   195,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    72,    51,    52,    67,    53,
     118,   114,    54,    55,    56,    57,   132,    58,    59,   174,
      60,    61,   181,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    71,    73,    74,    75,    76,    64,   129,    78,    79,
     128,   133,   130,   131,   105,    86,   179,   106,   107,   108,
     109,   110,   121,   165,    66,    65,   111,    77,   180,   115,
     166,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   117,   102,   103,   104,   198,   122,
      80,    81,   112,   113,   123,   199,    91,    92,    93,   124,
      82,    83,   134,   135,    84,    85,   137,    87,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     162,   172,     3,    88,   119,     4,   120,     5,   167,   111,
       6,   136,   169,   168,   197,   163,   164,   175,    13,    14,
      15,    16,    17,   176,    18,    89,    90,    91,    92,    93,
     192,   214,   196,   200,   215,    21,   216,    22,   242,   223,
     243,   249,   190,   210,     9,    23,    24,   194,   231,    68,
     185,   129,   189,   230,   128,   191,   130,   131,    25,     0,
       0,     0,    26,    27,    28,    29,     0,    31,    32,   125,
       0,   213,     0,     0,    37,     0,   205,   207,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   220,     0,     0,     0,     0,   228,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,   235,     0,   102,   237,   104,   239,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -7,     1,     0,    -7,
     248,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,    -7,     0,    -7,    -7,     0,     0,     0,     0,     0,
       0,     0,    -7,     0,    -7,     0,     0,     0,     0,     0,
       0,     0,    -7,    -7,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -7,     0,     0,   102,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    10,     0,     0,     0,     0,    11,    12,     0,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
       0,   171,     0,     0,     0,     0,     0,    23,    24,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      25,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    10,     0,     0,
       0,     0,    11,    12,     0,    13,    14,    15,    16,    17,
       0,    18,     0,    19,    20,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    22,     0,     0,   193,     0,     0,
       0,     0,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    10,     0,     0,     0,     0,    11,    12,     0,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
       0,     0,   212,     0,     0,     0,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    10,     0,     0,
       0,     0,    11,    12,     0,    13,    14,    15,    16,    17,
       0,    18,     0,    19,    20,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    13,    14,    15,    16,    17,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,   203,     0,     0,     0,     0,     0,   204,    23,
      24,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,     0,    25,     0,     0,     0,    26,    27,    28,     0,
      21,     0,    22,   226,     0,     0,     0,     0,    37,   227,
      23,    24,     0,    13,    14,    15,    16,    17,     0,    18,
       0,     0,     0,    25,     0,     0,     0,    26,    27,    28,
      21,     0,    22,    70,     0,     0,     0,     0,     0,    37,
      23,    24,     0,    13,    14,    15,    16,    17,     0,    18,
       0,     0,     0,    25,     0,     0,     0,    26,    27,    28,
      21,   116,    22,     0,     0,     0,     0,     0,     0,    37,
      23,    24,     0,     0,    13,    14,    15,    16,    17,     0,
      18,     0,     0,    25,     0,     0,     0,    26,    27,    28,
       0,    21,     0,    22,     0,     0,     0,     0,     0,    37,
     161,    23,    24,     0,     0,    13,    14,    15,    16,    17,
       0,    18,     0,     0,    25,     0,     0,     0,    26,    27,
      28,     0,    21,     0,    22,     0,     0,     0,     0,     0,
      37,   184,    23,    24,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,     0,    25,     0,     0,     0,    26,
      27,    28,     0,    21,     0,    22,     0,     0,     0,     0,
       0,    37,   188,    23,    24,     0,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,    25,     0,     0,     0,
      26,    27,    28,     0,    21,     0,    22,     0,     0,     0,
       0,     0,    37,   206,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,   217,     0,     0,
       0,     0,     0,    37,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,   219,     0,     0,
       0,     0,     0,    37,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,   234,     0,     0,
       0,     0,     0,    37,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,   236,     0,     0,
       0,     0,     0,    37,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,   238,     0,     0,
       0,     0,     0,    37,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,   247,     0,     0,
       0,     0,     0,    37,    23,    24,     0,    13,    14,    15,
      16,    17,     0,    18,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    21,     0,    22,     0,     0,     0,
       0,     0,     0,    37,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,     0,   170,     0,     0,     0,     0,
       0,     0,     0,    37,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   177,   102,   103,
     104,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   178,
     102,   103,   104,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   182,   102,   103,   104,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   186,   102,   103,   104,     0,     0,   187,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   201,   102,   103,   104,     0,     0,   202,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   208,   102,   103,   104,     0,     0,   209,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   221,   102,   103,   104,     0,     0,   222,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   224,   102,   103,   104,     0,     0,   225,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   240,   102,   103,   104,     0,     0,   241,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   232,   102,   103,   104,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   233,   102,   103,   104,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   244,   102,   103,   104,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   245,   102,   103,   104,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   246,   102,   103,   104,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   250,   102,   103,   104,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,   102,   103,   104,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,   102,   103,   104,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,   102,   103,
     104,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,     0,   102,   103,   104
};

static const yytype_int16 yycheck[] =
{
      21,    22,    23,    24,    25,    26,    15,    81,    27,    28,
      81,    82,    81,    81,    16,    36,    15,    19,    20,    21,
      22,    23,    27,    27,    15,    26,    28,    15,    27,    63,
      34,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    65,    50,    51,    52,    27,    29,
      26,    26,    54,    55,    34,    34,    38,    39,    40,    80,
      26,    26,    83,    84,    26,    15,    87,    26,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   125,     0,     4,    16,     3,    34,     5,   119,    28,
       8,    26,   123,    15,   175,    28,     4,    33,     9,    10,
      11,    12,    13,    27,    15,    36,    37,    38,    39,    40,
      16,    26,    59,    29,    33,    26,    15,    28,    27,    29,
      27,    33,   164,   190,     5,    36,    37,   171,   215,    20,
     161,   215,   163,   214,   215,   166,   215,   215,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    60,
      -1,   195,    -1,    -1,    65,    -1,   187,   188,    -1,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    -1,   204,    -1,    -1,    -1,    -1,   209,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,   222,    -1,    50,   225,    52,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,     3,
     241,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    49,    -1,    -1,    50,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      49,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    55,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    65,    35,
      36,    37,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    65,
      36,    37,    -1,     9,    10,    11,    12,    13,    -1,    15,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      36,    37,    -1,    -1,     9,    10,    11,    12,    13,    -1,
      15,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    65,
      35,    36,    37,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      55,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      65,    35,    36,    37,    -1,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    55,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    65,    35,    36,    37,    -1,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    55,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    65,    35,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,     9,    10,    11,
      12,    13,    -1,    15,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    27,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    27,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    27,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    29,    50,    51,    52,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    74,     0,     3,     5,     8,    79,    78,    79,
       1,     6,     7,     9,    10,    11,    12,    13,    15,    17,
      18,    26,    28,    36,    37,    49,    53,    54,    55,    56,
      57,    58,    59,    61,    62,    63,    64,    65,    81,    84,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    99,   100,   102,   105,   106,   107,   108,   110,   111,
     113,   114,   116,    75,    15,    26,    15,   101,   101,    88,
      29,    88,    98,    88,    88,    88,    88,    15,    95,    95,
      26,    26,    26,    26,    26,    15,    88,    26,     4,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    50,    51,    52,    16,    19,    20,    21,    22,
      23,    28,    54,    55,   104,    81,    27,    88,   103,    16,
      34,    27,    29,    34,    88,    60,    82,    83,    87,   105,
     107,   108,   109,    87,    88,    88,    26,    88,    76,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    35,    88,    28,     4,    27,    34,    88,    15,    88,
      27,    30,    81,    85,   112,    33,    27,    27,    27,    15,
      27,   115,    27,    77,    35,    88,    29,    35,    35,    88,
      76,    88,    16,    31,    81,    86,    59,    87,    27,    34,
      29,    29,    35,    29,    35,    88,    35,    88,    29,    35,
      77,    88,    31,    81,    26,    33,    15,    29,    88,    29,
      88,    29,    35,    29,    29,    35,    29,    35,    88,    80,
      87,    82,    29,    29,    29,    88,    29,    88,    29,    88,
      29,    35,    27,    27,    29,    29,    29,    29,    88,    33,
      29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    75,    74,    74,    74,    74,    74,    74,    76,
      77,    78,    79,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    84,    85,    85,    86,    86,
      87,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      96,    97,    98,    98,    99,   100,   101,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   106,   107,   108,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     4,     1,     3,     2,     2,     1,     3,     3,     5,
       4,     3,     1,     3,     3,     5,     6,     7,     4,     5,
       6,     4,     5,     6,     4,     4,     6,     7,     8,     5,
       6,     7,     5,     6,     7,     5,     4,     1,     8,     4,
       7,     1,     4,     1,     4,     1,     1,     5,     4,     2,
       1,     3,     1,     2
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
#line 154 "bello.y"
                                             {(yyval.intVl) = 0; }
#line 1863 "y.tab.c"
    break;

  case 6: /* statement: statement END_FILE close_execute_last_statement  */
#line 157 "bello.y"
                                                       { return 0; }
#line 1869 "y.tab.c"
    break;

  case 8: /* statement: error  */
#line 159 "bello.y"
            { yyerrok; }
#line 1875 "y.tab.c"
    break;

  case 9: /* check_indent: %empty  */
#line 163 "bello.y"
      { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
#line 1887 "y.tab.c"
    break;

  case 10: /* build_statement: %empty  */
#line 173 "bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);
        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈

        //printf("indt: %d lstIndt: %d\n",indt, lstIndt);
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

                //printf("--->>>stmt in stk: %d\n", stmtStk.size());
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

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            fldStmt(nowIndt);

            //如果当前输入的语句是else语句，检查同级缩进的上1个语句是不是if语句

            if (((yyvsp[(-2) - (0)].stmt))->typ == ELSE_STATEMENT)
            {
                if (stmtStk.back()->stmt->typ == IF_STATEMENT)
                {
                    
                }
                else
                {
                    yyclearin;
                    yyerrok;
                }

            }

            //输入的句子入栈

            StmtStkItmStrc* itm =new StmtStkItmStrc;
            itm->indt = nowIndt;
            itm->stmt = (yyvsp[(-2) - (0)].stmt);
            itm->alwSubStmt = chkStmtAlwSubStmt((yyvsp[(-2) - (0)].stmt));

            stmtStk.push_back(itm);
        }

        lstIndt = indt;
    }
#line 1966 "y.tab.c"
    break;

  case 11: /* close_execute_statement: %empty  */
#line 250 "bello.y"
    { 
        //如果是从源代码输入，则不执行此动作
        if (prsStt==2)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {

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
            if (stmtStk.back()->indt > 0)
            {
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                fldStmt(0);

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }

    }
#line 2021 "y.tab.c"
    break;

  case 12: /* close_execute_last_statement: %empty  */
#line 303 "bello.y"
    {
        //如果是标准输入读取数据，则退出此动作
        if (prsStt==1)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            //如果存在上1条语句，该语句允许子语句
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                yyclearin;
                yyerrok;
                
            }

            // //如果上1条语句为顶级语句且不允许子语句，则执行上一条语句
            // if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            // {
            //     //执行上一条顶级语句
            //     exctStmt(envr, stmtStk.back()->stmt);
            //     stmtStk.pop_back();
            // }

            //如果上1条语句为子语句，则闭合上1条顶级语句，并执行该顶级语句
            if (stmtStk.back()->indt > 0)
            {
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                fldStmt(0);
                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }
    }
#line 2076 "y.tab.c"
    break;

  case 13: /* execute_statement: %empty  */
#line 356 "bello.y"
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            //YYABORT;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();

            //printf("exct stmt\n");
        }
  
    }
#line 2098 "y.tab.c"
    break;

  case 14: /* single_statement: expression_statement  */
#line 397 "bello.y"
                           { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2104 "y.tab.c"
    break;

  case 15: /* single_statement: if_statement  */
#line 398 "bello.y"
                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2110 "y.tab.c"
    break;

  case 16: /* single_statement: else_statement  */
#line 399 "bello.y"
                     {(yyval.stmt)=(yyvsp[0].stmt); }
#line 2116 "y.tab.c"
    break;

  case 17: /* single_statement: for_statement  */
#line 400 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2122 "y.tab.c"
    break;

  case 18: /* single_statement: while_statement  */
#line 401 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2128 "y.tab.c"
    break;

  case 19: /* single_statement: break_statement  */
#line 403 "bello.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2134 "y.tab.c"
    break;

  case 20: /* single_statement: continue_statement  */
#line 404 "bello.y"
                          { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2140 "y.tab.c"
    break;

  case 21: /* single_statement: return_statement  */
#line 405 "bello.y"
                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2146 "y.tab.c"
    break;

  case 22: /* single_statement: function_define_statement  */
#line 406 "bello.y"
                                { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2152 "y.tab.c"
    break;

  case 23: /* single_statement: nop_statement  */
#line 408 "bello.y"
                    { (yyval.stmt)=(yyvsp[0].stmt); }
#line 2158 "y.tab.c"
    break;

  case 24: /* single_statement: var_statement  */
#line 409 "bello.y"
                     { (yyval.stmt) = (yyvsp[0].stmt);}
#line 2164 "y.tab.c"
    break;

  case 25: /* single_statement: global_statement  */
#line 410 "bello.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2170 "y.tab.c"
    break;

  case 26: /* single_statement: class_define_statement  */
#line 411 "bello.y"
                             { (yyval.stmt)= (yyvsp[0].stmt); }
#line 2176 "y.tab.c"
    break;

  case 27: /* single_statement: error  */
#line 413 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
#line 2186 "y.tab.c"
    break;

  case 34: /* null_statement: %empty  */
#line 431 "bello.y"
      { (yyval.stmt)=bldNllStmt(); }
#line 2192 "y.tab.c"
    break;

  case 35: /* nop_statement: NOP  */
#line 434 "bello.y"
          { (yyval.stmt)=bldNllStmt(); }
#line 2198 "y.tab.c"
    break;

  case 36: /* statement_block: LEFT_BRACE block_list RIGHT_BRACE  */
#line 437 "bello.y"
                                        { (yyval.stmt)=(yyvsp[-1].stmt); }
#line 2204 "y.tab.c"
    break;

  case 37: /* statement_block: LEFT_BRACE RIGHT_BRACE  */
#line 438 "bello.y"
                             { (yyval.stmt)=bldNllStmt(); }
#line 2210 "y.tab.c"
    break;

  case 38: /* block_list: single_statement  */
#line 442 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[0].stmt)); 
    }
#line 2219 "y.tab.c"
    break;

  case 39: /* block_list: block_list single_statement  */
#line 447 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[-1].stmt) ,(yyvsp[0].stmt));
    }
#line 2227 "y.tab.c"
    break;

  case 40: /* expression_statement: expression  */
#line 454 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[0].exp)); 
    }
#line 2235 "y.tab.c"
    break;

  case 43: /* expression: unary_expression  */
#line 461 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2241 "y.tab.c"
    break;

  case 44: /* expression: binary_expression  */
#line 462 "bello.y"
                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2247 "y.tab.c"
    break;

  case 45: /* expression: array_expression  */
#line 463 "bello.y"
                       { (yyval.exp)=(yyvsp[0].exp); }
#line 2253 "y.tab.c"
    break;

  case 46: /* expression: new_array_expression  */
#line 464 "bello.y"
                           { (yyval.exp) = (yyvsp[0].exp); }
#line 2259 "y.tab.c"
    break;

  case 49: /* assign_expression: lvalue_expression ASSIGN expression  */
#line 471 "bello.y"
                                          { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2265 "y.tab.c"
    break;

  case 50: /* assign_expression: lvalue_expression ADD_ASSIGN expression  */
#line 472 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2271 "y.tab.c"
    break;

  case 51: /* assign_expression: lvalue_expression SUB_ASSIGN expression  */
#line 473 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2277 "y.tab.c"
    break;

  case 52: /* assign_expression: lvalue_expression MUL_ASSIGN expression  */
#line 474 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2283 "y.tab.c"
    break;

  case 53: /* assign_expression: lvalue_expression DIV_ASSIGN expression  */
#line 475 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2289 "y.tab.c"
    break;

  case 54: /* assign_expression: lvalue_expression MOD_ASSIGN expression  */
#line 476 "bello.y"
                                              { (yyval.exp)=bldAsgnExp((yyvsp[-2].exp), bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp))); }
#line 2295 "y.tab.c"
    break;

  case 55: /* self_operation_expression: INCREMENT lvalue_expression  */
#line 480 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_INCREMENT, (yyvsp[0].exp)); }
#line 2301 "y.tab.c"
    break;

  case 56: /* self_operation_expression: DECREMENT lvalue_expression  */
#line 481 "bello.y"
                                  { (yyval.exp)=bldUnrExp(PREFIX_DECREMENT, (yyvsp[0].exp)); }
#line 2307 "y.tab.c"
    break;

  case 57: /* self_operation_expression: lvalue_expression INCREMENT  */
#line 482 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_INCREMENT, (yyvsp[-1].exp)); }
#line 2313 "y.tab.c"
    break;

  case 58: /* self_operation_expression: lvalue_expression DECREMENT  */
#line 483 "bello.y"
                                  { (yyval.exp)=bldUnrExp(SUFFIX_DECREMENT, (yyvsp[-1].exp)); }
#line 2319 "y.tab.c"
    break;

  case 59: /* unary_expression: SUB expression  */
#line 486 "bello.y"
                                      { (yyval.exp) = bldUnrExp(SUB, (yyvsp[0].exp)); }
#line 2325 "y.tab.c"
    break;

  case 60: /* unary_expression: ADD expression  */
#line 487 "bello.y"
                                     { (yyval.exp) = bldUnrExp(ADD, (yyvsp[0].exp)); }
#line 2331 "y.tab.c"
    break;

  case 61: /* unary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 488 "bello.y"
                                        { (yyval.exp)=(yyvsp[-1].exp); }
#line 2337 "y.tab.c"
    break;

  case 62: /* unary_expression: NOT expression  */
#line 489 "bello.y"
                     { (yyval.exp)=bldUnrExp(NOT, (yyvsp[0].exp)); }
#line 2343 "y.tab.c"
    break;

  case 63: /* unary_expression: BIT_NOT expression  */
#line 490 "bello.y"
                         { (yyval.exp)=bldUnrExp(BIT_NOT, (yyvsp[0].exp)); }
#line 2349 "y.tab.c"
    break;

  case 64: /* binary_expression: expression ADD expression  */
#line 493 "bello.y"
                                { (yyval.exp)=bldBnrExp(ADD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2355 "y.tab.c"
    break;

  case 65: /* binary_expression: expression SUB expression  */
#line 494 "bello.y"
                                { (yyval.exp)=bldBnrExp(SUB, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2361 "y.tab.c"
    break;

  case 66: /* binary_expression: expression MUL expression  */
#line 495 "bello.y"
                                { (yyval.exp)=bldBnrExp(MUL, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2367 "y.tab.c"
    break;

  case 67: /* binary_expression: expression DIV expression  */
#line 496 "bello.y"
                                { (yyval.exp)=bldBnrExp(DIV, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2373 "y.tab.c"
    break;

  case 68: /* binary_expression: expression MOD expression  */
#line 497 "bello.y"
                                { (yyval.exp)=bldBnrExp(MOD, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2379 "y.tab.c"
    break;

  case 69: /* binary_expression: expression AND expression  */
#line 498 "bello.y"
                                { (yyval.exp)=bldBnrExp(AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2385 "y.tab.c"
    break;

  case 70: /* binary_expression: expression OR expression  */
#line 499 "bello.y"
                               { (yyval.exp)=bldBnrExp(OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2391 "y.tab.c"
    break;

  case 71: /* binary_expression: expression EQ expression  */
#line 500 "bello.y"
                               { (yyval.exp)=bldBnrExp(EQ, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2397 "y.tab.c"
    break;

  case 72: /* binary_expression: expression NE expression  */
#line 501 "bello.y"
                               { (yyval.exp)=bldBnrExp(NE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2403 "y.tab.c"
    break;

  case 73: /* binary_expression: expression GT expression  */
#line 502 "bello.y"
                               { (yyval.exp)=bldBnrExp(GT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2409 "y.tab.c"
    break;

  case 74: /* binary_expression: expression GE expression  */
#line 503 "bello.y"
                               { (yyval.exp)=bldBnrExp(GE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2415 "y.tab.c"
    break;

  case 75: /* binary_expression: expression LT expression  */
#line 504 "bello.y"
                               { (yyval.exp)=bldBnrExp(LT, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2421 "y.tab.c"
    break;

  case 76: /* binary_expression: expression LE expression  */
#line 505 "bello.y"
                               { (yyval.exp)=bldBnrExp(LE, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2427 "y.tab.c"
    break;

  case 77: /* binary_expression: expression BIT_AND expression  */
#line 506 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2433 "y.tab.c"
    break;

  case 78: /* binary_expression: expression BIT_OR expression  */
#line 507 "bello.y"
                                   { (yyval.exp)=bldBnrExp(BIT_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2439 "y.tab.c"
    break;

  case 79: /* binary_expression: expression BIT_XOR expression  */
#line 508 "bello.y"
                                    { (yyval.exp)=bldBnrExp(BIT_XOR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2445 "y.tab.c"
    break;

  case 80: /* value_expression: INT_VALUE  */
#line 512 "bello.y"
                { (yyval.exp)=bldCnstIntExp((yyvsp[0].intVl)); /*printf("Get data: %d\n",$1);*/ }
#line 2451 "y.tab.c"
    break;

  case 81: /* value_expression: FLOAT_VALUE  */
#line 513 "bello.y"
                  { (yyval.exp)=bldCnstFltExp((yyvsp[0].fltVl)); }
#line 2457 "y.tab.c"
    break;

  case 82: /* value_expression: BOOLEAN_VALUE  */
#line 514 "bello.y"
                    { (yyval.exp)=bldCnstBlnExp((yyvsp[0].blnVl)); }
#line 2463 "y.tab.c"
    break;

  case 83: /* value_expression: STRING_VALUE  */
#line 515 "bello.y"
                   { (yyval.exp)=bldCnstStrExp((yyvsp[0].strVl)); }
#line 2469 "y.tab.c"
    break;

  case 84: /* value_expression: NULL_VALUE  */
#line 516 "bello.y"
                 { (yyval.exp)=bldCnstNllExp(); }
#line 2475 "y.tab.c"
    break;

  case 87: /* lvalue_expression: IDENTIFER  */
#line 521 "bello.y"
                { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[0].idtf))); }
#line 2481 "y.tab.c"
    break;

  case 88: /* lvalue_expression: lvalue_expression evaluate_list  */
#line 523 "bello.y"
    { 
        (yyval.exp)=(yyvsp[-1].exp); 
        bldLvlExpAdd((yyvsp[-1].exp), (yyvsp[0].evlLst)); 
    }
#line 2490 "y.tab.c"
    break;

  case 89: /* array_expression: LEFT_QUAD element_list RIGHT_QUAD  */
#line 531 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[-1].elmtLst));
    }
#line 2498 "y.tab.c"
    break;

  case 90: /* array_expression: LEFT_QUAD RIGHT_QUAD  */
#line 535 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
#line 2506 "y.tab.c"
    break;

  case 91: /* new_array_expression: NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN  */
#line 541 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[-1].exp));
    }
#line 2514 "y.tab.c"
    break;

  case 92: /* element_list: expression  */
#line 547 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2523 "y.tab.c"
    break;

  case 93: /* element_list: element_list COMMA expression  */
#line 552 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[-2].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[0].exp)); 
    }
#line 2532 "y.tab.c"
    break;

  case 94: /* var_statement: VAR assign_list  */
#line 559 "bello.y"
                      { (yyval.stmt)=bldVarStmt((yyvsp[0].asgnLst)); }
#line 2538 "y.tab.c"
    break;

  case 95: /* global_statement: GLOBAL assign_list  */
#line 562 "bello.y"
                         { (yyval.stmt)=bldGlbStmt((yyvsp[0].asgnLst)); }
#line 2544 "y.tab.c"
    break;

  case 96: /* assign_list: IDENTIFER  */
#line 566 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2553 "y.tab.c"
    break;

  case 97: /* assign_list: IDENTIFER ASSIGN expression  */
#line 571 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2562 "y.tab.c"
    break;

  case 98: /* assign_list: assign_list COMMA IDENTIFER  */
#line 576 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-2].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[0].idtf)), bldNllExp());
    }
#line 2571 "y.tab.c"
    break;

  case 99: /* assign_list: assign_list COMMA IDENTIFER ASSIGN expression  */
#line 581 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[-4].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[-2].idtf)), (yyvsp[0].exp));
    }
#line 2580 "y.tab.c"
    break;

  case 100: /* function_expression: IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN  */
#line 592 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-3].idtf), (yyvsp[-1].argLst));
    }
#line 2588 "y.tab.c"
    break;

  case 101: /* function_expression: IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 596 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[-2].idtf), bldArgLst());
    }
#line 2596 "y.tab.c"
    break;

  case 102: /* argument_list: expression  */
#line 602 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2605 "y.tab.c"
    break;

  case 103: /* argument_list: argument_list COMMA expression  */
#line 607 "bello.y"
    {
        (yyval.argLst)=(yyvsp[-2].argLst);
        argLstAdd((yyval.argLst), (yyvsp[0].exp));
    }
#line 2614 "y.tab.c"
    break;

  case 104: /* evaluate_list: LEFT_QUAD expression RIGHT_QUAD  */
#line 615 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[-1].exp));
    }
#line 2623 "y.tab.c"
    break;

  case 105: /* evaluate_list: LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 620 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2632 "y.tab.c"
    break;

  case 106: /* evaluate_list: LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 625 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2641 "y.tab.c"
    break;

  case 107: /* evaluate_list: LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 630 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2650 "y.tab.c"
    break;

  case 108: /* evaluate_list: LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 635 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2659 "y.tab.c"
    break;

  case 109: /* evaluate_list: LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 640 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2668 "y.tab.c"
    break;

  case 110: /* evaluate_list: LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 645 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2677 "y.tab.c"
    break;

  case 111: /* evaluate_list: LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 650 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2686 "y.tab.c"
    break;

  case 112: /* evaluate_list: LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 655 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2695 "y.tab.c"
    break;

  case 113: /* evaluate_list: LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 660 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2704 "y.tab.c"
    break;

  case 114: /* evaluate_list: LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 665 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2713 "y.tab.c"
    break;

  case 115: /* evaluate_list: evaluate_list LEFT_QUAD expression RIGHT_QUAD  */
#line 670 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-3].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[-1].exp));
    }
#line 2722 "y.tab.c"
    break;

  case 116: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  */
#line 675 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2731 "y.tab.c"
    break;

  case 117: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  */
#line 680 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2740 "y.tab.c"
    break;

  case 118: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD  */
#line 685 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-7].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-5].exp), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2749 "y.tab.c"
    break;

  case 119: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD  */
#line 690 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-2].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2758 "y.tab.c"
    break;

  case 120: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD  */
#line 695 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-3].exp), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2767 "y.tab.c"
    break;

  case 121: /* evaluate_list: evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD  */
#line 700 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[-4].exp), bldCnstIntExp(-1), (yyvsp[-1].exp));
    }
#line 2776 "y.tab.c"
    break;

  case 122: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD  */
#line 705 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-1].exp), bldCnstIntExp(1));
    }
#line 2785 "y.tab.c"
    break;

  case 123: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD  */
#line 710 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-5].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-2].exp), bldCnstIntExp(1));
    }
#line 2794 "y.tab.c"
    break;

  case 124: /* evaluate_list: evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD  */
#line 715 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-6].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), (yyvsp[-3].exp), (yyvsp[-1].exp));
    }
#line 2803 "y.tab.c"
    break;

  case 125: /* evaluate_list: evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD  */
#line 720 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[-4].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
#line 2812 "y.tab.c"
    break;

  case 126: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN  */
#line 738 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[-1].exp));
        //printf("bld if stmt\n");
    }
#line 2821 "y.tab.c"
    break;

  case 127: /* else_statement: ELSE  */
#line 749 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
#line 2829 "y.tab.c"
    break;

  case 128: /* for_statement: FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN  */
#line 762 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[-5].stmt), (yyvsp[-3].stmt), (yyvsp[-1].stmt));  
    }
#line 2837 "y.tab.c"
    break;

  case 129: /* while_statement: WHILE LEFT_PAREN expression_statement RIGHT_PAREN  */
#line 774 "bello.y"
    {
        (yyval.stmt)= bldWhlStmt((yyvsp[-1].stmt));
    }
#line 2845 "y.tab.c"
    break;

  case 130: /* do_while_statement: DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON  */
#line 780 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[-2].stmt), (yyvsp[-5].stmt));
    }
#line 2853 "y.tab.c"
    break;

  case 131: /* break_statement: BREAK  */
#line 785 "bello.y"
            { (yyval.stmt)= bldBrkStmt(bldCnstIntExp(1)); }
#line 2859 "y.tab.c"
    break;

  case 132: /* break_statement: BREAK LEFT_PAREN expression RIGHT_PAREN  */
#line 786 "bello.y"
                                              { (yyval.stmt)= bldBrkStmt((yyvsp[-1].exp)); }
#line 2865 "y.tab.c"
    break;

  case 133: /* continue_statement: CONTINUE  */
#line 789 "bello.y"
               { (yyval.stmt)= bldCntnStmt(bldCnstIntExp(1)); }
#line 2871 "y.tab.c"
    break;

  case 134: /* continue_statement: CONTINUE LEFT_PAREN expression RIGHT_PAREN  */
#line 790 "bello.y"
                                                 { (yyval.stmt)= bldCntnStmt((yyvsp[-1].exp)); }
#line 2877 "y.tab.c"
    break;

  case 137: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN  */
#line 832 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[-3].idtf), (yyvsp[-1].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2889 "y.tab.c"
    break;

  case 138: /* function_define_statement: FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN  */
#line 840 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[-2].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
#line 2901 "y.tab.c"
    break;

  case 139: /* class_define_statement: CLASS IDENTIFER  */
#line 850 "bello.y"
    {
        struct ClsStrc* cls;

        (yyval.stmt) = bldCls((yyvsp[0].char*));
    }
#line 2911 "y.tab.c"
    break;

  case 140: /* parameter_list: IDENTIFER  */
#line 859 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2920 "y.tab.c"
    break;

  case 141: /* parameter_list: parameter_list COMMA IDENTIFER  */
#line 864 "bello.y"
    { 
        (yyval.prmLst)=(yyvsp[-2].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[0].idtf)));
    }
#line 2929 "y.tab.c"
    break;

  case 142: /* return_statement: RETURN  */
#line 870 "bello.y"
             { (yyval.stmt)=bldRtnStmt(NULL); }
#line 2935 "y.tab.c"
    break;

  case 143: /* return_statement: RETURN expression  */
#line 871 "bello.y"
                        { (yyval.stmt)=bldRtnStmt((yyvsp[0].exp)); }
#line 2941 "y.tab.c"
    break;


#line 2945 "y.tab.c"

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

#line 874 "bello.y"



void fldStmt(int indt=0)
{
    int idx;

    while (stmtStk.back()->indt > indt)
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

        //子语句出栈
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
                stmtStk.back()->stmt->stmt.ifStmt->els = NULL;
                break;
            }
            case WHILE_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                break;
            }
            case FOR_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                break;
            }
            case FUNCTION_DEFINE_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                break;
            }
            case ELSE_STATEMENT:
            {
                stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                //将else语句添加到其上的if语句结构体中
                StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                stmtStk.pop_back();
                stmtStk.back()->stmt->stmt.ifStmt->els =els;
            }
        }

    }

}


int main(int argc, char * argv[])
{

    //创建全局环境

    //struct EnvrStrc* glbEnvr = new EnvrStrc;

    //envr.push_back(glbEnvr);

    initGlbEnvr(envr);

    //可以提供代码文件供读取

    FILE *f;

    extern FILE* yyin;

    prsStt=1;

    if (argc==2)
    {
        prsStt = 2;
        f= fopen(argv[1],"r");
        yyin= f;
    }

    yyparse();
}


