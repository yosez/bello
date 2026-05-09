/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NULL_STRING = 258,
     LF = 259,
     END_FILE = 260,
     NEW = 261,
     IMPORT = 262,
     NOP = 263,
     DOT = 264,
     CLASS = 265,
     SHARED = 266,
     THIS = 267,
     AT = 268,
     INDENT = 269,
     INT_LTR = 270,
     BLN_LTR = 271,
     FLT_LTR = 272,
     STR_LTR = 273,
     OBJECT_VALUE = 274,
     NLL_LTR = 275,
     ARRAY_VALUE = 276,
     SHORTCUT_PRINTLN = 277,
     IDENTIFER = 278,
     ASSIGN = 279,
     VAR = 280,
     GLOBAL = 281,
     ADD_ASSIGN = 282,
     SUB_ASSIGN = 283,
     MUL_ASSIGN = 284,
     DIV_ASSIGN = 285,
     MOD_ASSIGN = 286,
     PRINT = 287,
     PRINTLN = 288,
     LEFT_PAREN = 289,
     RIGHT_PAREN = 290,
     LEFT_QUAD = 291,
     RIGHT_QUAD = 292,
     LEFT_BRACE = 293,
     RIGHT_BRACE = 294,
     SEMICOLON_OPTIONAL = 295,
     SEMICOLON = 296,
     COMMA = 297,
     COLON = 298,
     ADD = 299,
     SUB = 300,
     MUL = 301,
     DIV = 302,
     MOD = 303,
     EQ = 304,
     NE = 305,
     GT = 306,
     GE = 307,
     LT = 308,
     LE = 309,
     AND = 310,
     OR = 311,
     NOT = 312,
     XOR = 313,
     BIT_AND = 314,
     BIT_OR = 315,
     BIT_XOR = 316,
     BIT_NOT = 317,
     INCREMENT = 318,
     DECREMENT = 319,
     IF = 320,
     ELSEIF = 321,
     ELSE = 322,
     FOR = 323,
     WHILE = 324,
     DO = 325,
     CONTINUE = 326,
     BREAK = 327,
     FUNC = 328,
     RETURN = 329,
     NEW_ARRAY = 330,
     SPACE = 331,
     PACKAGE = 332,
     PLUS_SIGN = 333,
     MINUS_SIGN = 334,
     QM = 335
   };
#endif
/* Tokens.  */
#define NULL_STRING 258
#define LF 259
#define END_FILE 260
#define NEW 261
#define IMPORT 262
#define NOP 263
#define DOT 264
#define CLASS 265
#define SHARED 266
#define THIS 267
#define AT 268
#define INDENT 269
#define INT_LTR 270
#define BLN_LTR 271
#define FLT_LTR 272
#define STR_LTR 273
#define OBJECT_VALUE 274
#define NLL_LTR 275
#define ARRAY_VALUE 276
#define SHORTCUT_PRINTLN 277
#define IDENTIFER 278
#define ASSIGN 279
#define VAR 280
#define GLOBAL 281
#define ADD_ASSIGN 282
#define SUB_ASSIGN 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define MOD_ASSIGN 286
#define PRINT 287
#define PRINTLN 288
#define LEFT_PAREN 289
#define RIGHT_PAREN 290
#define LEFT_QUAD 291
#define RIGHT_QUAD 292
#define LEFT_BRACE 293
#define RIGHT_BRACE 294
#define SEMICOLON_OPTIONAL 295
#define SEMICOLON 296
#define COMMA 297
#define COLON 298
#define ADD 299
#define SUB 300
#define MUL 301
#define DIV 302
#define MOD 303
#define EQ 304
#define NE 305
#define GT 306
#define GE 307
#define LT 308
#define LE 309
#define AND 310
#define OR 311
#define NOT 312
#define XOR 313
#define BIT_AND 314
#define BIT_OR 315
#define BIT_XOR 316
#define BIT_NOT 317
#define INCREMENT 318
#define DECREMENT 319
#define IF 320
#define ELSEIF 321
#define ELSE 322
#define FOR 323
#define WHILE 324
#define DO 325
#define CONTINUE 326
#define BREAK 327
#define FUNC 328
#define RETURN 329
#define NEW_ARRAY 330
#define SPACE 331
#define PACKAGE 332
#define PLUS_SIGN 333
#define MINUS_SIGN 334
#define QM 335




/* Copy the first part of user declarations.  */
#line 1 "./bello.y"

    #pragma once

    #ifndef Y_TAB_C
    #define Y_TAB_C
    #include <iostream>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    #include "dftn.h"
    #include "vrb.h"
    #include "val.h"
    #include "exp.h"
    #include "stmt.h"
    #include "arr.h"
    #include "stmt.h"
    #include "fcn.h"
    #include "cls.h"
    #include "envr.h"
    #include "err.h"
    #include "ntv.h"
    #include "lex.yy.c"



    extern char* yytext;

    extern int yylex();

    void yyerror(const char *s,...)
    {
        printf("Syntax error.\n");
        
    }

    //#define YYERROR_VERBOSE 1

    extern int lstIndt;

    //extern struct StmtStkItemStrc;

    extern std::vector<StmtStkItmStrc*> stmtStk;

    extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);

    extern int chkStmtAlwScndStmt(struct StmtStrc* stmt);


    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

    void fldStmt(int indt);
    void pshStmt(int indt, StmtStrc* stmt);
    void prtStmtStk();

    //类定义语句的标志，0为不是类定义的状态，1为类定义的状态
    int blnDfnCls=0;

    struct StmtStrc* lstStmt;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 65 "./bello.y"
{
    int blnVl;
    int intVl;
    float fltVl;
    char *strVl;
    struct ObjStrc* objVl;

    struct VrbStrc *vrb;
    struct ExpStrc *exp;
    struct StmtStrc *stmt;
    struct FcnStrc *fcn;
    struct PrmLstStrc *prmLst;
    struct ArgLstStrc *argLst;
    struct VrbLstStrc *vrbLst;
    struct AsnLstStrc *asnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;
}
/* Line 193 of yacc.c.  */
#line 342 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 355 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1768

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNRULES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    16,    23,    27,    31,    33,
      34,    36,    37,    38,    39,    40,    41,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    65,    67,
      69,    71,    73,    75,    77,    79,    81,    83,    84,    86,
      90,    93,    95,    98,   100,   102,   104,   106,   108,   110,
     112,   114,   116,   120,   124,   128,   132,   136,   140,   143,
     146,   149,   152,   155,   158,   162,   165,   168,   172,   176,
     180,   184,   188,   192,   196,   200,   204,   208,   212,   216,
     220,   224,   228,   232,   236,   242,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   265,   268,   272,   276,   279,
     281,   285,   288,   292,   295,   297,   301,   305,   311,   316,
     320,   322,   326,   330,   336,   338,   342,   346,   352,   356,
     362,   369,   377,   382,   388,   395,   400,   406,   413,   418,
     423,   430,   438,   447,   453,   460,   468,   474,   481,   489,
     495,   498,   500,   503,   510,   517,   520,   522,   530,   532,
     537,   539,   544,   546,   548,   554,   559,   566,   572,   575,
     577
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      82,     0,    -1,     7,    18,    -1,    -1,    82,    87,    83,
      89,     4,    84,    85,    88,    -1,    82,    14,    89,     4,
      84,    85,    -1,    82,     4,    86,    -1,    82,     5,    87,
      -1,     1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,   114,    -1,   115,    -1,   116,    -1,   117,
      -1,   118,    -1,   120,    -1,   121,    -1,   125,    -1,   123,
      -1,    92,    -1,   107,    -1,   108,    -1,   124,    -1,     1,
      -1,    95,    -1,   114,    -1,   117,    -1,   118,    -1,   119,
      -1,    91,    -1,    -1,     8,    -1,    38,    94,    39,    -1,
      38,    39,    -1,    89,    -1,    94,    89,    -1,    96,    -1,
     103,    -1,    97,    -1,   100,    -1,   101,    -1,   105,    -1,
     102,    -1,    98,    -1,    99,    -1,   104,    24,    96,    -1,
     104,    27,    96,    -1,   104,    28,    96,    -1,   104,    29,
      96,    -1,   104,    30,    96,    -1,   104,    31,    96,    -1,
      63,   104,    -1,    64,   104,    -1,   104,    63,    -1,   104,
      64,    -1,    45,    96,    -1,    44,    96,    -1,    34,    96,
      35,    -1,    57,    96,    -1,    62,    96,    -1,    96,    44,
      96,    -1,    96,    45,    96,    -1,    96,    46,    96,    -1,
      96,    47,    96,    -1,    96,    48,    96,    -1,    96,    55,
      96,    -1,    96,    56,    96,    -1,    96,    58,    96,    -1,
      96,    49,    96,    -1,    96,    50,    96,    -1,    96,    51,
      96,    -1,    96,    52,    96,    -1,    96,    53,    96,    -1,
      96,    54,    96,    -1,    96,    59,    96,    -1,    96,    60,
      96,    -1,    96,    61,    96,    -1,    96,    80,    96,    43,
      96,    -1,    22,   106,    -1,    15,    -1,    17,    -1,    16,
      -1,    18,    -1,    20,    -1,   110,    -1,   104,    -1,    23,
      -1,   104,     9,    23,    -1,   104,   113,    -1,   104,     9,
     110,    -1,    36,   106,    37,    -1,    36,    37,    -1,    96,
      -1,   106,    42,    96,    -1,    25,   109,    -1,    11,    25,
     109,    -1,    26,   109,    -1,    23,    -1,    23,    24,    96,
      -1,   109,    42,    23,    -1,   109,    42,    23,    24,    96,
      -1,    23,    34,   111,    35,    -1,    23,    34,    35,    -1,
      96,    -1,    23,    43,    96,    -1,   111,    42,    96,    -1,
     111,    42,    23,    43,    96,    -1,    23,    -1,    23,    24,
      96,    -1,   112,    42,    23,    -1,   112,    42,    23,    24,
      96,    -1,    36,    96,    37,    -1,    36,    96,    43,    96,
      37,    -1,    36,    96,    43,    96,    43,    37,    -1,    36,
      96,    43,    96,    43,    96,    37,    -1,    36,    96,    43,
      37,    -1,    36,    96,    43,    43,    37,    -1,    36,    96,
      43,    43,    96,    37,    -1,    36,    43,    96,    37,    -1,
      36,    43,    96,    43,    37,    -1,    36,    43,    96,    43,
      96,    37,    -1,    36,    43,    43,    37,    -1,   113,    36,
      96,    37,    -1,   113,    36,    96,    43,    96,    37,    -1,
     113,    36,    96,    43,    96,    43,    37,    -1,   113,    36,
      96,    43,    96,    43,    96,    37,    -1,   113,    36,    96,
      43,    37,    -1,   113,    36,    96,    43,    43,    37,    -1,
     113,    36,    96,    43,    43,    96,    37,    -1,   113,    36,
      43,    96,    37,    -1,   113,    36,    43,    96,    43,    37,
      -1,   113,    36,    43,    96,    43,    96,    37,    -1,   113,
      36,    43,    43,    37,    -1,    65,    96,    -1,    67,    -1,
      66,    96,    -1,    68,    90,    41,    95,    41,    90,    -1,
      68,    90,    43,    95,    43,    90,    -1,    69,    96,    -1,
      69,    -1,    70,   122,    69,    34,    95,    35,    41,    -1,
      72,    -1,    72,    34,    96,    35,    -1,    71,    -1,    71,
      34,    96,    35,    -1,    89,    -1,    93,    -1,    73,    23,
      34,   112,    35,    -1,    73,    23,    34,    35,    -1,    11,
      73,    23,    34,   112,    35,    -1,    11,    73,    23,    34,
      35,    -1,    10,    23,    -1,    74,    -1,    74,    96,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   170,   170,   187,   187,   189,   191,   193,   194,   195,
     196,   206,   216,   262,   311,   358,   376,   377,   378,   379,
     380,   381,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   401,   402,   403,   404,   405,   406,   410,   413,   416,
     417,   420,   425,   432,   438,   439,   440,   441,   442,   443,
     446,   447,   450,   451,   452,   453,   454,   455,   459,   460,
     461,   462,   465,   466,   467,   468,   469,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   492,   498,   499,   500,   501,
     502,   503,   504,   508,   509,   524,   529,   593,   597,   605,
     610,   618,   630,   645,   648,   653,   658,   663,   674,   678,
     684,   689,   694,   699,   706,   711,   716,   721,   730,   735,
     740,   745,   750,   755,   760,   765,   770,   775,   780,   785,
     790,   795,   800,   805,   810,   815,   820,   825,   830,   835,
     853,   869,   875,   891,   895,   918,   926,   932,   938,   939,
     942,   943,   946,   947,   984,   992,  1000,  1017,  1027,  1041,
    1042
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NULL_STRING", "LF", "END_FILE", "NEW",
  "IMPORT", "NOP", "DOT", "CLASS", "SHARED", "THIS", "AT", "INDENT",
  "INT_LTR", "BLN_LTR", "FLT_LTR", "STR_LTR", "OBJECT_VALUE", "NLL_LTR",
  "ARRAY_VALUE", "SHORTCUT_PRINTLN", "IDENTIFER", "ASSIGN", "VAR",
  "GLOBAL", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "PRINT", "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_QUAD", "RIGHT_QUAD", "LEFT_BRACE", "RIGHT_BRACE",
  "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA", "COLON", "ADD", "SUB", "MUL",
  "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT", "LE", "AND", "OR", "NOT",
  "XOR", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "INCREMENT",
  "DECREMENT", "IF", "ELSEIF", "ELSE", "FOR", "WHILE", "DO", "CONTINUE",
  "BREAK", "FUNC", "RETURN", "NEW_ARRAY", "SPACE", "PACKAGE", "PLUS_SIGN",
  "MINUS_SIGN", "QM", "$accept", "statement", "@1", "check_indent",
  "build_statement_stack", "close_execute_statement",
  "close_execute_last_statement", "execute_single_statement",
  "single_statement", "single_statement_no_semicolon", "null_statement",
  "nop_statement", "statement_block", "block_list", "expression_statement",
  "expression", "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "shortcut_expression", "value_expression", "lvalue_expression",
  "array_expression", "element_list", "var_statement", "global_statement",
  "assign_list", "function_expression", "argument_list", "parameter_list",
  "evaluate_list", "if_statement", "else_statement", "elseif_statement",
  "for_statement", "while_statement", "do_while_statement",
  "break_statement", "continue_statement", "structure_statement",
  "function_statement", "class_statement", "return_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    82,    82,    82,    82,    82,    82,
      82,    84,    85,    86,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    92,    93,
      93,    94,    94,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   112,   112,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   115,   116,   117,   117,   118,   118,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   124,   125,
     125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     8,     6,     3,     3,     1,     0,
       1,     0,     0,     0,     0,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     3,     2,     1,
       3,     2,     3,     2,     1,     3,     3,     5,     4,     3,
       1,     3,     3,     5,     1,     3,     3,     5,     3,     5,
       6,     7,     4,     5,     6,     4,     5,     6,     4,     4,
       6,     7,     8,     5,     6,     7,     5,     6,     7,     5,
       2,     1,     2,     6,     6,     2,     1,     7,     1,     4,
       1,     4,     1,     1,     5,     4,     6,     5,     2,     1,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    10,     0,    14,     2,     1,    13,    14,     0,
       3,     6,     7,    30,    38,     0,     0,    86,    88,    87,
      89,    90,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,    37,   146,   150,
     148,     0,   159,     0,    26,    16,    43,    45,    50,    51,
      46,    47,    49,    44,    92,    48,    27,    28,    91,    17,
      18,    19,    20,    21,    22,    23,    25,    29,    24,     0,
     158,     0,     0,    99,    85,     0,   104,   101,   103,     0,
      98,     0,    63,    62,    65,    66,    93,    58,    59,   140,
     142,     0,     0,    36,    31,    32,    33,    34,    35,   145,
       0,     0,     0,   160,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    95,     0,   102,     0,     0,    93,   109,
     110,     0,     0,     0,    64,    97,     0,   152,   153,     0,
       0,     0,     0,     0,     0,    12,    67,    68,    69,    70,
      71,    75,    76,    77,    78,    79,    80,    72,    73,    74,
      81,    82,    83,     0,    94,    96,    52,    53,    54,    55,
      56,    57,     0,     0,     0,    11,     0,   100,     0,   108,
       0,   105,   106,    40,    41,     0,     0,     0,     0,   151,
     149,   114,   155,     0,     5,     0,     0,     0,   118,     0,
       0,     0,    12,   157,     0,   111,    93,   112,     0,    39,
      42,     0,    37,    37,     0,   154,     0,    84,   128,   125,
       0,   122,     0,     0,     0,     0,   129,     0,    15,   156,
       0,   107,     0,   143,   144,   115,   116,   126,     0,   123,
       0,   119,     0,   139,   136,     0,   133,     0,     0,     4,
     113,     0,     0,   127,   124,   120,     0,   137,     0,   134,
       0,   130,     0,   147,   117,   121,   138,   135,   131,     0,
     132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    69,   155,   204,    11,    10,   259,    43,    92,
      93,    44,   148,   195,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    74,    56,    57,    77,    58,
     141,   203,   133,    59,    60,    61,    62,    63,    98,    64,
      65,   149,    66,    67,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -196
static const yytype_int16 yypact[] =
{
     237,  -196,  -196,     4,    43,  -196,  -196,  -196,  -196,   513,
    -196,  -196,  -196,  -196,  -196,     8,   -24,  -196,  -196,  -196,
    -196,  -196,  1010,    28,    41,    41,  1010,   638,  1010,  1010,
    1010,  1010,    45,    45,  1010,  1010,  -196,   573,  1010,    37,
      39,    51,  1010,    71,  -196,  -196,  1627,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,     6,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,   513,
    -196,    41,    53,  1627,    35,   669,    57,    40,    40,  1062,
    -196,    23,   -39,   -39,   -39,   -39,  -196,    -7,    -7,  1627,
    1627,   306,    20,  -196,  -196,  -196,  -196,  -196,  -196,  1627,
    1010,  1010,    67,  1627,  -196,  1010,  1010,  1010,  1010,  1010,
    1010,  1010,  1010,  1010,  1010,  1010,  1010,  1010,  1010,  1010,
    1010,  1010,  1010,    86,  1010,  1010,  1010,  1010,  1010,  1010,
     700,  -196,  -196,    74,   107,    40,    78,  1010,    11,  -196,
    1627,   -18,  1010,    90,  -196,  -196,   375,  -196,  -196,    56,
    1010,  1010,  1099,  1136,   -12,  -196,    -8,    -8,   -39,   -39,
     -39,    95,    95,    95,    95,    95,    95,  1668,  1650,  1627,
     308,  1688,   239,  1609,    28,  -196,  1627,  1627,  1627,  1627,
    1627,  1627,   731,  1174,   762,  -196,     9,  1627,  1010,  -196,
    1041,  1627,    98,  -196,  -196,   444,    80,    85,    87,  -196,
    -196,   108,  -196,    16,  -196,  1010,    94,  1212,  -196,   101,
     793,  1250,  -196,  -196,    17,  1627,    12,  1627,  1010,  -196,
    -196,  1010,   573,   573,  1010,  -196,   110,  1627,  -196,  -196,
     824,  -196,   855,  1288,    97,  1326,  -196,   588,  -196,  -196,
    1010,  1627,   112,  -196,  -196,  1627,   124,  -196,  1401,  -196,
    1438,  -196,   886,  -196,  -196,   917,  -196,   948,  1364,  -196,
    1627,   109,  1010,  -196,  -196,  -196,  1475,  -196,  1512,  -196,
    1549,  -196,   979,  -196,  1627,  -196,  -196,  -196,  -196,  1586,
    -196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,   -49,   -63,  -196,   143,  -196,   -66,  -195,
    -196,  -196,  -196,  -196,   -23,   -22,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,    34,  -196,   125,  -196,  -196,   -15,    31,
    -196,   -31,  -196,   -19,  -196,  -196,   -16,   -11,  -196,  -196,
    -196,  -196,  -196,  -196,  -196
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -10
static const yytype_int16 yytable[] =
{
      73,    71,   123,   134,    79,    73,    82,    83,    84,    85,
      78,   201,    89,    90,    94,   123,    99,   189,    95,   118,
     103,    96,     5,   202,   190,   147,    97,   243,   244,   130,
     124,    70,   201,   125,   126,   127,   128,   129,   107,   108,
     109,   122,   130,     6,   213,    75,    75,     7,     8,    72,
     118,   225,   239,   140,   188,   240,   135,     9,   226,   226,
     145,   150,    75,   151,    76,   137,    87,    88,    86,   131,
     132,   100,   122,   101,   102,   104,   136,   137,   152,   153,
     194,   142,   143,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   154,   176,   177,   178,   179,   180,   181,   183,   174,
     184,   185,   186,   192,   221,   187,    17,    18,    19,    20,
     191,    21,   218,    22,    23,   196,   222,   197,   198,   220,
     223,   228,   224,   246,   253,    26,   212,    27,   231,   105,
     106,   107,   108,   109,   232,    28,    29,   261,   262,   238,
     273,    12,    81,   118,   175,   214,     0,     0,    30,     0,
     207,     0,   211,    31,    32,    33,   215,     0,   217,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,   233,   235,     0,
       0,     0,     0,     0,     0,     0,   241,     0,   242,    94,
      94,     0,   245,    95,    95,     0,    96,    96,   248,     0,
     250,    97,    97,     0,     0,   258,     0,     0,   260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     266,     0,     0,   268,     0,   270,     0,    -9,     1,     0,
     274,    -9,     2,     0,     3,    -9,     0,    -9,    -9,     0,
     279,    -9,    -9,    -9,    -9,    -9,     0,    -9,     0,    -9,
      -9,     0,    -9,    -9,     0,     0,     0,     0,     0,     0,
       0,    -9,     0,    -9,     0,     0,     0,     0,     0,     0,
       0,    -9,    -9,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -9,     0,     0,   118,   119,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    13,    -9,    -9,
      -9,    -9,     0,     0,    14,     0,    15,    16,     0,   122,
       0,    17,    18,    19,    20,     0,    21,     0,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,   146,     0,     0,     0,     0,     0,
      28,    29,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    30,     0,     0,   118,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    13,    39,    40,    41,
      42,     0,     0,    14,     0,    15,    16,     0,   122,     0,
      17,    18,    19,    20,     0,    21,     0,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,     0,   193,     0,     0,     0,     0,    28,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    13,    39,    40,    41,    42,
       0,     0,    14,     0,    15,    16,     0,     0,     0,    17,
      18,    19,    20,     0,    21,     0,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,   219,     0,     0,     0,     0,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    13,    39,    40,    41,    42,     0,
       0,    14,     0,    15,    16,     0,     0,     0,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,     0,    39,    40,    41,    42,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,     0,     0,
       0,     0,     0,    17,    18,    19,    20,    26,    21,    27,
      22,    23,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,    26,     0,    27,   256,     0,     0,     0,     0,
      30,   257,    28,    29,     0,    31,    32,    33,    34,     0,
       0,    37,    38,    91,     0,    30,     0,     0,     0,     0,
      31,    32,    33,    17,    18,    19,    20,     0,    21,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,    80,     0,     0,     0,     0,
       0,     0,    28,    29,    17,    18,    19,    20,     0,    21,
       0,    22,   138,     0,     0,    30,     0,     0,     0,     0,
      31,    32,    33,    26,   139,    27,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    17,    18,    19,    20,     0,
      21,     0,    22,    23,     0,     0,    30,     0,     0,     0,
       0,    31,    32,    33,    26,     0,    27,     0,     0,     0,
       0,     0,     0,   182,    28,    29,    17,    18,    19,    20,
       0,    21,     0,    22,    23,     0,     0,    30,     0,     0,
       0,     0,    31,    32,    33,    26,     0,    27,     0,     0,
       0,     0,     0,     0,   206,    28,    29,    17,    18,    19,
      20,     0,    21,     0,    22,    23,     0,     0,    30,     0,
       0,     0,     0,    31,    32,    33,    26,     0,    27,     0,
       0,     0,     0,     0,     0,   210,    28,    29,    17,    18,
      19,    20,     0,    21,     0,    22,    23,     0,     0,    30,
       0,     0,     0,     0,    31,    32,    33,    26,     0,    27,
       0,     0,     0,     0,     0,     0,   234,    28,    29,    17,
      18,    19,    20,     0,    21,     0,    22,    23,     0,     0,
      30,     0,     0,     0,     0,    31,    32,    33,    26,     0,
      27,   247,     0,     0,     0,     0,     0,     0,    28,    29,
      17,    18,    19,    20,     0,    21,     0,    22,    23,     0,
       0,    30,     0,     0,     0,     0,    31,    32,    33,    26,
       0,    27,   249,     0,     0,     0,     0,     0,     0,    28,
      29,    17,    18,    19,    20,     0,    21,     0,    22,    23,
       0,     0,    30,     0,     0,     0,     0,    31,    32,    33,
      26,     0,    27,   265,     0,     0,     0,     0,     0,     0,
      28,    29,    17,    18,    19,    20,     0,    21,     0,    22,
      23,     0,     0,    30,     0,     0,     0,     0,    31,    32,
      33,    26,     0,    27,   267,     0,     0,     0,     0,     0,
       0,    28,    29,    17,    18,    19,    20,     0,    21,     0,
      22,    23,     0,     0,    30,     0,     0,     0,     0,    31,
      32,    33,    26,     0,    27,   269,     0,     0,     0,     0,
       0,     0,    28,    29,    17,    18,    19,    20,     0,    21,
       0,    22,    23,     0,     0,    30,     0,     0,     0,     0,
      31,    32,    33,    26,     0,    27,   278,     0,     0,     0,
       0,     0,     0,    28,    29,    17,    18,    19,    20,     0,
      21,     0,    22,    23,     0,     0,    30,     0,     0,     0,
       0,    31,    32,    33,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,    28,    29,    17,    18,    19,    20,
       0,    21,     0,    22,   216,     0,     0,    30,     0,     0,
       0,     0,    31,    32,    33,    26,     0,    27,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,    30,     0,
       0,     0,     0,    31,    32,    33,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,     0,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,   122,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,   122,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,     0,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,   122,   209,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,     0,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,   122,   230,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,     0,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,     0,
       0,     0,   122,   237,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,     0,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
     122,   252,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,     0,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   254,     0,     0,     0,     0,   122,   255,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,     0,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   271,     0,     0,     0,     0,   122,   272,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,     0,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,     0,     0,   122,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,     0,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,   122,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,     0,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   275,     0,     0,     0,     0,     0,   122,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,     0,     0,     0,     0,   122,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,     0,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,     0,     0,
       0,     0,   122,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,   122,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,     0,   118,   119,   120,   121,     0,     0,
       0,     0,   205,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   122,   118,   119,   120,
     121,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,   118,   119,   120,   121,   122,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,   122,   118,   119,
     120,   121,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,     0,   118,   119,   120,   121,
     122,     0,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,     0,   118,   119,   122,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122
};

static const yytype_int16 yycheck[] =
{
      22,    25,     9,    69,    26,    27,    28,    29,    30,    31,
      25,    23,    34,    35,    37,     9,    38,    35,    37,    58,
      42,    37,    18,    35,    42,    91,    37,   222,   223,    36,
      24,    23,    23,    27,    28,    29,    30,    31,    46,    47,
      48,    80,    36,     0,    35,    34,    34,     4,     5,    73,
      58,    35,    35,    75,    43,    43,    71,    14,    42,    42,
      37,    41,    34,    43,    23,    42,    32,    33,    23,    63,
      64,    34,    80,    34,    23,     4,    23,    42,   100,   101,
     146,    24,    42,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    34,   124,   125,   126,   127,   128,   129,   130,    23,
      36,     4,    34,    23,    34,   137,    15,    16,    17,    18,
     142,    20,    24,    22,    23,    69,    41,   150,   151,   195,
      43,    37,    24,    23,    37,    34,   185,    36,    37,    44,
      45,    46,    47,    48,    43,    44,    45,    35,    24,   212,
      41,     8,    27,    58,   123,   186,    -1,    -1,    57,    -1,
     182,    -1,   184,    62,    63,    64,   188,    -1,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,   221,   222,
     223,    -1,   224,   222,   223,    -1,   222,   223,   230,    -1,
     232,   222,   223,    -1,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     252,    -1,    -1,   255,    -1,   257,    -1,     0,     1,    -1,
     262,     4,     5,    -1,     7,     8,    -1,    10,    11,    -1,
     272,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    57,    -1,    -1,    58,    59,    62,
      63,    64,    65,    66,    67,    68,    69,     1,    71,    72,
      73,    74,    -1,    -1,     8,    -1,    10,    11,    -1,    80,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    45,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    57,    -1,    -1,    58,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,     1,    71,    72,    73,
      74,    -1,    -1,     8,    -1,    10,    11,    -1,    80,    -1,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,     1,    71,    72,    73,    74,
      -1,    -1,     8,    -1,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,     1,    71,    72,    73,    74,    -1,
      -1,     8,    -1,    10,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    34,    20,    36,
      22,    23,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      57,    43,    44,    45,    -1,    62,    63,    64,    65,    -1,
      -1,    68,    69,    70,    -1,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    63,    64,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    63,    64,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    63,    64,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    63,    64,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,    63,    64,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    63,    64,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    63,
      64,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      63,    64,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    63,    64,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    63,    64,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    80,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    80,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    80,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      80,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    80,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    80,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    80,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    80,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    80,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    80,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    80,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    80,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    80,    58,    59,    60,
      61,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    80,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    80,    58,    59,
      60,    61,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      80,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    80,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     7,    82,    18,     0,     4,     5,    14,
      87,    86,    87,     1,     8,    10,    11,    15,    16,    17,
      18,    20,    22,    23,    25,    26,    34,    36,    44,    45,
      57,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    74,    89,    92,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   107,   108,   110,   114,
     115,   116,   117,   118,   120,   121,   123,   124,   125,    83,
      23,    25,    73,    96,   106,    34,    23,   109,   109,    96,
      37,   106,    96,    96,    96,    96,    23,   104,   104,    96,
      96,    70,    90,    91,    95,   114,   117,   118,   119,    96,
      34,    34,    23,    96,     4,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    58,    59,
      60,    61,    80,     9,    24,    27,    28,    29,    30,    31,
      36,    63,    64,   113,    89,   109,    23,    42,    23,    35,
      96,   111,    24,    42,    35,    37,    38,    89,    93,   122,
      41,    43,    96,    96,    34,    84,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    23,   110,    96,    96,    96,    96,
      96,    96,    43,    96,    36,     4,    34,    96,    43,    35,
      42,    96,    23,    39,    89,    94,    69,    95,    95,    35,
      35,    23,    35,   112,    85,    43,    43,    96,    37,    43,
      43,    96,    84,    35,   112,    96,    23,    96,    24,    39,
      89,    34,    41,    43,    24,    35,    42,    96,    37,    37,
      43,    37,    43,    96,    43,    96,    37,    43,    85,    35,
      43,    96,    95,    90,    90,    96,    23,    37,    96,    37,
      96,    37,    43,    37,    37,    43,    37,    43,    96,    88,
      96,    35,    24,    37,    37,    37,    96,    37,    96,    37,
      96,    37,    43,    41,    96,    37,    37,    37,    37,    96,
      37
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 171 "./bello.y"
    {

        FILE* f = fopen((yyvsp[(2) - (2)].strVl), "r");

        //创建buffer
        YY_BUFFER_STATE stt = YY_CURRENT_BUFFER;

        //use file pointer to create new buffer
        YY_BUFFER_STATE sttNew = yy_create_buffer(f, YY_BUF_SIZE);

        //switch buffer
        yypush_buffer_state(sttNew);


    }
    break;

  case 3:
#line 187 "./bello.y"
    {(yyval.intVl) = 0; }
    break;

  case 7:
#line 193 "./bello.y"
    { return 0; }
    break;

  case 8:
#line 194 "./bello.y"
    { yyerrok; }
    break;

  case 10:
#line 197 "./bello.y"
    {
        yypop_buffer_state();
    }
    break;

  case 11:
#line 206 "./bello.y"
    { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
    break;

  case 12:
#line 216 "./bello.y"
    {   
        int indt = (yyvsp[(-3) - (0)].intVl);

        StmtStrc* stmt=(yyvsp[(-2) - (0)].stmt);

        stmt->indt= indt;

        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                pshStmt(indt, stmt);
            }
            else
            {
                yyerrok;
            }
        }
        else if (indt == lstIndt)
        {
            //语句入栈
            pshStmt(indt, stmt);

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            fldStmt(nowIndt);

            //输入的句子入栈
            pshStmt(indt, stmt);
            
        }

        lstIndt = indt;
    }
    break;

  case 13:
#line 262 "./bello.y"
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

            printf("执行语句 %d\n", stmtStk.size());

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt > 0)
            {
                fldStmt(0);
            }

            for (int i=0;i<stmtStk.size();i++)
            {
                exctStmt(envr, stmtStk.at(i)->stmt);

                lstStmt = stmtStk.at(i)->stmt;
                //stmtStk.pop_back();
            }

            stmtStk.clear();

        }

    }
    break;

  case 14:
#line 311 "./bello.y"
    {
        //如果是命令行读取数据，则退出此动作
        if (prsStt==1)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            //需要闭合上1条顶级语句的子语句，并执行该顶级语句

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

                fldStmt(0);

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

            }

        }
    }
    break;

  case 15:
#line 358 "./bello.y"
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进且不允许第2主句的情况下执行语句
        if ((yyvsp[(-4) - (0)].intVl) != 0 || stmtStk.back()->alwSubStmt == 1 || chkStmtAlwScndStmt(stmtStk.back()->stmt) )
        {
            break;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();
        }
  
    }
    break;

  case 16:
#line 376 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 17:
#line 377 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 18:
#line 378 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 19:
#line 379 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 20:
#line 380 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 21:
#line 381 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 22:
#line 383 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 23:
#line 384 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 24:
#line 385 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 25:
#line 386 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 26:
#line 387 "./bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 27:
#line 388 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt);}
    break;

  case 28:
#line 389 "./bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 29:
#line 390 "./bello.y"
    { (yyval.stmt)= (yyvsp[(1) - (1)].stmt); }
    break;

  case 30:
#line 392 "./bello.y"
    { 
        (yyval.stmt)=bldNlStmt();
        yyclearin; 
        yyerrok; 
    }
    break;

  case 37:
#line 410 "./bello.y"
    { (yyval.stmt)=bldNlStmt(); }
    break;

  case 38:
#line 413 "./bello.y"
    { (yyval.stmt)=bldNlStmt(); }
    break;

  case 39:
#line 416 "./bello.y"
    { (yyval.stmt)=(yyvsp[(2) - (3)].stmt); }
    break;

  case 40:
#line 417 "./bello.y"
    { (yyval.stmt)=bldNlStmt(); }
    break;

  case 41:
#line 421 "./bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[(1) - (1)].stmt)); 
    }
    break;

  case 42:
#line 426 "./bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[(1) - (2)].stmt) ,(yyvsp[(2) - (2)].stmt));
    }
    break;

  case 43:
#line 433 "./bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 44:
#line 438 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 46:
#line 440 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 47:
#line 441 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 48:
#line 442 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 49:
#line 443 "./bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 52:
#line 450 "./bello.y"
    { printf("asn %s %d\n",  (dynamic_cast<LvlExpStrc*>((yyvsp[(1) - (3)].exp)))->vrb->nm.c_str(),  (dynamic_cast<ValExpStrc*>((yyvsp[(3) - (3)].exp))->val->v.int_)); (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 53:
#line 451 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Add, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 54:
#line 452 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Sub, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 55:
#line 453 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Mul, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 56:
#line 454 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Div, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 57:
#line 455 "./bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OpEnm::Asn, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 58:
#line 459 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::PfxInc, (yyvsp[(2) - (2)].exp)); }
    break;

  case 59:
#line 460 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::PfxDec, (yyvsp[(2) - (2)].exp)); }
    break;

  case 60:
#line 461 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::SfxInc, (yyvsp[(1) - (2)].exp)); }
    break;

  case 61:
#line 462 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::SfxDec, (yyvsp[(1) - (2)].exp)); }
    break;

  case 62:
#line 465 "./bello.y"
    { (yyval.exp) = bldUnrExp(OpEnm::Ngtv, (yyvsp[(2) - (2)].exp)); }
    break;

  case 63:
#line 466 "./bello.y"
    { (yyval.exp) = bldUnrExp(OpEnm::Pstv, (yyvsp[(2) - (2)].exp)); }
    break;

  case 64:
#line 467 "./bello.y"
    { (yyval.exp)=(yyvsp[(2) - (3)].exp); }
    break;

  case 65:
#line 468 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::Not, (yyvsp[(2) - (2)].exp)); }
    break;

  case 66:
#line 469 "./bello.y"
    { (yyval.exp)=bldUnrExp(OpEnm::BNot, (yyvsp[(2) - (2)].exp)); }
    break;

  case 67:
#line 472 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Add, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 68:
#line 473 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Sub, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 69:
#line 474 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Mul, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 70:
#line 475 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Div, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 71:
#line 476 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Mod, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 72:
#line 477 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::And, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 73:
#line 478 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Or, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 74:
#line 479 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Xor, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 75:
#line 480 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Eq, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 76:
#line 481 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Ne, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 77:
#line 482 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Gt, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 78:
#line 483 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Ge, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 79:
#line 484 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Lt, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 80:
#line 485 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::Le, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 81:
#line 486 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::BAnd, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 82:
#line 487 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::BOr, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 83:
#line 488 "./bello.y"
    { (yyval.exp)=bldBnrExp(OpEnm::BXor, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 84:
#line 489 "./bello.y"
    { (yyval.exp) = bldTnrExp(OpEnm::Tnr, (yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp)); }
    break;

  case 85:
#line 493 "./bello.y"
    {
        
    }
    break;

  case 86:
#line 498 "./bello.y"
    { (yyval.exp)=bldIntValExp((yyvsp[(1) - (1)].intVl)); }
    break;

  case 87:
#line 499 "./bello.y"
    { (yyval.exp)=bldFltValExp((yyvsp[(1) - (1)].fltVl)); }
    break;

  case 88:
#line 500 "./bello.y"
    { (yyval.exp)=bldBlnValExp((yyvsp[(1) - (1)].blnVl)); }
    break;

  case 89:
#line 501 "./bello.y"
    { (yyval.exp)=bldStrValExp((yyvsp[(1) - (1)].strVl)); }
    break;

  case 90:
#line 502 "./bello.y"
    { (yyval.exp)=bldNlValExp(); }
    break;

  case 93:
#line 508 "./bello.y"
    { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[(1) - (1)].idtf))); }
    break;

  case 94:
#line 510 "./bello.y"
    {
        LvlExpStrc* lvl = static_cast<LvlExpStrc*>((yyvsp[(1) - (3)].exp));
        (yyval.exp) = lvl;

        //寻找LvlExpStrc链最末尾的结构体
        while (lvl->hasAtb==1)
        {
            lvl= static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasAtb=1;
        lvl->atb=static_cast<LvlExpStrc*>(bldLvlExp(bldVrbExp((yyvsp[(3) - (3)].idtf))));

    }
    break;

  case 95:
#line 525 "./bello.y"
    { 
        (yyval.exp)=(yyvsp[(1) - (2)].exp); 
        bldLvlExpAdd((yyvsp[(1) - (2)].exp), (yyvsp[(2) - (2)].evlLst)); 
    }
    break;

  case 96:
#line 530 "./bello.y"
    {

        printf("bld obj ivk exp\n");

        LvlExpStrc* lvl = static_cast<LvlExpStrc*>((yyvsp[(1) - (3)].exp));

        (yyval.exp) = (yyvsp[(1) - (3)].exp);

        //左值表达式设置调用对象方法的标志
        lvl->blnIvk = 1;

        while (lvl->hasAtb==1)
        {
            lvl = static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasFcn=1;
        lvl->fcn=static_cast<FcnExpStrc*>((yyvsp[(3) - (3)].exp));

    }
    break;

  case 97:
#line 594 "./bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[(2) - (3)].elmtLst));
    }
    break;

  case 98:
#line 598 "./bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
    break;

  case 99:
#line 606 "./bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 100:
#line 611 "./bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[(1) - (3)].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[(3) - (3)].exp)); 
    }
    break;

  case 101:
#line 619 "./bello.y"
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            (yyval.stmt)=bldVarStmt((yyvsp[(2) - (2)].asnLst)); 
        }
        else
        {
            //$$=bldVarStmt(StmtEnm::ClsVar, $2);
        }
    }
    break;

  case 102:
#line 631 "./bello.y"
    {
        //需要是类定义状态
        if (blnDfnCls==1)
        {
            //$$ = bldVarStmt(StmtEnm::ClsShrVar, $3);
        } 
        else
        {
            yyclearin;   
            yyerrok;
        }
    }
    break;

  case 103:
#line 645 "./bello.y"
    { (yyval.stmt)=bldGlbStmt((yyvsp[(2) - (2)].asnLst)); }
    break;

  case 104:
#line 649 "./bello.y"
    {
        (yyval.asnLst)= bldAsnLst();
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(1) - (1)].idtf)), bldNlExp());
    }
    break;

  case 105:
#line 654 "./bello.y"
    {
        (yyval.asnLst)= bldAsnLst();
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 106:
#line 659 "./bello.y"
    {
        (yyval.asnLst)=(yyvsp[(1) - (3)].asnLst);
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(3) - (3)].idtf)), bldNlExp());
    }
    break;

  case 107:
#line 664 "./bello.y"
    {
        (yyval.asnLst)=(yyvsp[(1) - (5)].asnLst);
        asnLstAdd((yyval.asnLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 108:
#line 675 "./bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (4)].idtf), (yyvsp[(3) - (4)].argLst));
    }
    break;

  case 109:
#line 679 "./bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (3)].idtf), bldArgLst());
    }
    break;

  case 110:
#line 685 "./bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[(1) - (1)].exp));
    }
    break;

  case 111:
#line 690 "./bello.y"
    {
        (yyval.argLst) = bldArgLst();
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 112:
#line 695 "./bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (3)].argLst);
        argLstAdd((yyval.argLst), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 113:
#line 700 "./bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (5)].argLst);
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 114:
#line 707 "./bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (1)].idtf)));
    }
    break;

  case 115:
#line 712 "./bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 116:
#line 717 "./bello.y"
    { 
        (yyval.prmLst) = (yyvsp[(1) - (3)].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (3)].idtf)));
    }
    break;

  case 117:
#line 722 "./bello.y"
    {
        (yyval.prmLst) = (yyvsp[(1) - (5)].prmLst);
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 118:
#line 731 "./bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[(2) - (3)].exp));
    }
    break;

  case 119:
#line 736 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 120:
#line 741 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 121:
#line 746 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 122:
#line 751 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (4)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 123:
#line 756 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 124:
#line 761 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), bldIntValExp(-1), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 125:
#line 766 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (4)].exp), bldIntValExp(1));
    }
    break;

  case 126:
#line 771 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 127:
#line 776 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 128:
#line 781 "./bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 129:
#line 786 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (4)].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[(3) - (4)].exp));
    }
    break;

  case 130:
#line 791 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 131:
#line 796 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].exp), bldIntValExp(1));
    }
    break;

  case 132:
#line 801 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (8)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (8)].exp), (yyvsp[(5) - (8)].exp), (yyvsp[(7) - (8)].exp));
    }
    break;

  case 133:
#line 806 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (5)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 134:
#line 811 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 135:
#line 816 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), bldIntValExp(-1), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 136:
#line 821 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 137:
#line 826 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 138:
#line 831 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 139:
#line 836 "./bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 140:
#line 854 "./bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[(2) - (2)].exp));
        //printf("bld if stmt\n");
    }
    break;

  case 141:
#line 870 "./bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
    break;

  case 142:
#line 876 "./bello.y"
    {
        (yyval.stmt) = bldElifStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 143:
#line 892 "./bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(2) - (6)].stmt), (yyvsp[(4) - (6)].stmt), (yyvsp[(6) - (6)].stmt));
    }
    break;

  case 144:
#line 896 "./bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(2) - (6)].stmt), (yyvsp[(4) - (6)].stmt), (yyvsp[(6) - (6)].stmt));
    }
    break;

  case 145:
#line 919 "./bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 146:
#line 927 "./bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
    break;

  case 147:
#line 933 "./bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[(5) - (7)].stmt), (yyvsp[(2) - (7)].stmt));
    }
    break;

  case 148:
#line 938 "./bello.y"
    { (yyval.stmt)= bldBrkStmt(bldIntValExp(1)); }
    break;

  case 149:
#line 939 "./bello.y"
    { (yyval.stmt)= bldBrkStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 150:
#line 942 "./bello.y"
    { (yyval.stmt)= bldCntnStmt(bldIntValExp(1)); }
    break;

  case 151:
#line 943 "./bello.y"
    { (yyval.stmt)= bldCntnStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 154:
#line 985 "./bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(2) - (5)].idtf), (yyvsp[(4) - (5)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 155:
#line 993 "./bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(2) - (4)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 156:
#line 1001 "./bello.y"
    {
        if (blnDfnCls==false)
        {
            yyclearin;
            yyerrok;

            break;
        }

        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(3) - (6)].idtf), (yyvsp[(5) - (6)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
        
    }
    break;

  case 157:
#line 1018 "./bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(3) - (5)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 158:
#line 1028 "./bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[(2) - (2)].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
    break;

  case 159:
#line 1041 "./bello.y"
    { (yyval.stmt)=bldRtnStmt(NULL); }
    break;

  case 160:
#line 1042 "./bello.y"
    { (yyval.stmt)=bldRtnStmt((yyvsp[(2) - (2)].exp)); }
    break;


/* Line 1267 of yacc.c.  */
#line 3256 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1045 "./bello.y"


#endif




