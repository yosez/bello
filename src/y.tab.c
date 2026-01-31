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
     NOP = 262,
     DOT = 263,
     CLASS = 264,
     SHARED = 265,
     THIS = 266,
     INDENT = 267,
     INT_LTR = 268,
     BLN_LTR = 269,
     FLT_LTR = 270,
     STR_LTR = 271,
     OBJECT_VALUE = 272,
     NLL_LTR = 273,
     ARRAY_VALUE = 274,
     SHORTCUT_PRINTLN = 275,
     IDENTIFER = 276,
     ASSIGN = 277,
     VAR = 278,
     GLOBAL = 279,
     ADD_ASSIGN = 280,
     SUB_ASSIGN = 281,
     MUL_ASSIGN = 282,
     DIV_ASSIGN = 283,
     MOD_ASSIGN = 284,
     PRINT = 285,
     PRINTLN = 286,
     LEFT_PAREN = 287,
     RIGHT_PAREN = 288,
     LEFT_QUAD = 289,
     RIGHT_QUAD = 290,
     LEFT_BRACE = 291,
     RIGHT_BRACE = 292,
     SEMICOLON_OPTIONAL = 293,
     SEMICOLON = 294,
     COMMA = 295,
     COLON = 296,
     ADD = 297,
     SUB = 298,
     MUL = 299,
     DIV = 300,
     MOD = 301,
     EQ = 302,
     NE = 303,
     GT = 304,
     GE = 305,
     LT = 306,
     LE = 307,
     AND = 308,
     OR = 309,
     NOT = 310,
     XOR = 311,
     BIT_AND = 312,
     BIT_OR = 313,
     BIT_XOR = 314,
     BIT_NOT = 315,
     INCREMENT = 316,
     DECREMENT = 317,
     IF = 318,
     ELSEIF = 319,
     ELSE = 320,
     FOR = 321,
     WHILE = 322,
     DO = 323,
     CONTINUE = 324,
     BREAK = 325,
     FUNC = 326,
     RETURN = 327,
     NEW_ARRAY = 328,
     PLUS_SIGN = 329,
     MINUS_SIGN = 330,
     QM = 331
   };
#endif
/* Tokens.  */
#define NULL_STRING 258
#define LF 259
#define END_FILE 260
#define NEW 261
#define NOP 262
#define DOT 263
#define CLASS 264
#define SHARED 265
#define THIS 266
#define INDENT 267
#define INT_LTR 268
#define BLN_LTR 269
#define FLT_LTR 270
#define STR_LTR 271
#define OBJECT_VALUE 272
#define NLL_LTR 273
#define ARRAY_VALUE 274
#define SHORTCUT_PRINTLN 275
#define IDENTIFER 276
#define ASSIGN 277
#define VAR 278
#define GLOBAL 279
#define ADD_ASSIGN 280
#define SUB_ASSIGN 281
#define MUL_ASSIGN 282
#define DIV_ASSIGN 283
#define MOD_ASSIGN 284
#define PRINT 285
#define PRINTLN 286
#define LEFT_PAREN 287
#define RIGHT_PAREN 288
#define LEFT_QUAD 289
#define RIGHT_QUAD 290
#define LEFT_BRACE 291
#define RIGHT_BRACE 292
#define SEMICOLON_OPTIONAL 293
#define SEMICOLON 294
#define COMMA 295
#define COLON 296
#define ADD 297
#define SUB 298
#define MUL 299
#define DIV 300
#define MOD 301
#define EQ 302
#define NE 303
#define GT 304
#define GE 305
#define LT 306
#define LE 307
#define AND 308
#define OR 309
#define NOT 310
#define XOR 311
#define BIT_AND 312
#define BIT_OR 313
#define BIT_XOR 314
#define BIT_NOT 315
#define INCREMENT 316
#define DECREMENT 317
#define IF 318
#define ELSEIF 319
#define ELSE 320
#define FOR 321
#define WHILE 322
#define DO 323
#define CONTINUE 324
#define BREAK 325
#define FUNC 326
#define RETURN 327
#define NEW_ARRAY 328
#define PLUS_SIGN 329
#define MINUS_SIGN 330
#define QM 331




/* Copy the first part of user declarations.  */
#line 1 "bello.y"

    #pragma once

    #ifndef Y_TAB_C
    #define Y_TAB_C
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
#line 64 "bello.y"
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
    struct AsgnLstStrc *asgnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;
    
    char *idtf;
    //string idtf;
}
/* Line 193 of yacc.c.  */
#line 333 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 346 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1831

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNRULES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

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
      75,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    13,    20,    24,    28,    29,    31,
      32,    33,    34,    35,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    76,    78,    79,    81,    85,    88,
      90,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     111,   113,   117,   121,   125,   129,   133,   137,   140,   143,
     146,   149,   152,   155,   159,   162,   165,   169,   173,   177,
     181,   185,   189,   193,   197,   201,   205,   209,   213,   217,
     221,   225,   229,   233,   239,   242,   244,   246,   248,   250,
     252,   254,   256,   259,   261,   265,   268,   272,   276,   279,
     284,   286,   290,   293,   297,   300,   302,   306,   310,   316,
     321,   325,   327,   331,   335,   341,   343,   347,   351,   357,
     361,   367,   374,   382,   387,   393,   400,   405,   411,   418,
     423,   428,   435,   443,   452,   458,   465,   473,   479,   486,
     494,   500,   503,   505,   508,   517,   520,   522,   530,   532,
     537,   539,   544,   546,   548,   554,   559,   566,   572,   575,
     577
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    -1,    78,    83,    79,    85,     4,    80,
      81,    84,    -1,    78,    12,    85,     4,    80,    81,    -1,
      78,     4,    82,    -1,    78,     5,    83,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,   111,    -1,
     112,    -1,   113,    -1,   114,    -1,   115,    -1,   117,    -1,
     118,    -1,   122,    -1,   120,    -1,    88,    -1,   104,    -1,
     105,    -1,   121,    -1,     1,    -1,    91,    -1,   111,    -1,
     114,    -1,   115,    -1,   116,    -1,    87,    -1,    -1,     7,
      -1,    36,    90,    37,    -1,    36,    37,    -1,    85,    -1,
      90,    85,    -1,    92,    -1,    99,    -1,    93,    -1,    96,
      -1,    97,    -1,   101,    -1,   102,    -1,    98,    -1,    94,
      -1,    95,    -1,   100,    22,    92,    -1,   100,    25,    92,
      -1,   100,    26,    92,    -1,   100,    27,    92,    -1,   100,
      28,    92,    -1,   100,    29,    92,    -1,    61,   100,    -1,
      62,   100,    -1,   100,    61,    -1,   100,    62,    -1,    43,
      92,    -1,    42,    92,    -1,    32,    92,    33,    -1,    55,
      92,    -1,    60,    92,    -1,    92,    42,    92,    -1,    92,
      43,    92,    -1,    92,    44,    92,    -1,    92,    45,    92,
      -1,    92,    46,    92,    -1,    92,    53,    92,    -1,    92,
      54,    92,    -1,    92,    56,    92,    -1,    92,    47,    92,
      -1,    92,    48,    92,    -1,    92,    49,    92,    -1,    92,
      50,    92,    -1,    92,    51,    92,    -1,    92,    52,    92,
      -1,    92,    57,    92,    -1,    92,    58,    92,    -1,    92,
      59,    92,    -1,    92,    76,    92,    41,    92,    -1,    20,
     103,    -1,    13,    -1,    15,    -1,    14,    -1,    16,    -1,
      18,    -1,   107,    -1,   100,    -1,     6,    21,    -1,    21,
      -1,   100,     8,    21,    -1,   100,   110,    -1,   100,     8,
     107,    -1,    34,   103,    35,    -1,    34,    35,    -1,    73,
      32,    92,    33,    -1,    92,    -1,   103,    40,    92,    -1,
      23,   106,    -1,    10,    23,   106,    -1,    24,   106,    -1,
      21,    -1,    21,    22,    92,    -1,   106,    40,    21,    -1,
     106,    40,    21,    22,    92,    -1,    21,    32,   108,    33,
      -1,    21,    32,    33,    -1,    92,    -1,    21,    41,    92,
      -1,   108,    40,    92,    -1,   108,    40,    21,    41,    92,
      -1,    21,    -1,    21,    22,    92,    -1,   109,    40,    21,
      -1,   109,    40,    21,    22,    92,    -1,    34,    92,    35,
      -1,    34,    92,    41,    92,    35,    -1,    34,    92,    41,
      92,    41,    35,    -1,    34,    92,    41,    92,    41,    92,
      35,    -1,    34,    92,    41,    35,    -1,    34,    92,    41,
      41,    35,    -1,    34,    92,    41,    41,    92,    35,    -1,
      34,    41,    92,    35,    -1,    34,    41,    92,    41,    35,
      -1,    34,    41,    92,    41,    92,    35,    -1,    34,    41,
      41,    35,    -1,   110,    34,    92,    35,    -1,   110,    34,
      92,    41,    92,    35,    -1,   110,    34,    92,    41,    92,
      41,    35,    -1,   110,    34,    92,    41,    92,    41,    92,
      35,    -1,   110,    34,    92,    41,    35,    -1,   110,    34,
      92,    41,    41,    35,    -1,   110,    34,    92,    41,    41,
      92,    35,    -1,   110,    34,    41,    92,    35,    -1,   110,
      34,    41,    92,    41,    35,    -1,   110,    34,    41,    92,
      41,    92,    35,    -1,   110,    34,    41,    41,    35,    -1,
      63,    92,    -1,    65,    -1,    64,    92,    -1,    66,    32,
      86,    39,    91,    39,    86,    33,    -1,    67,    92,    -1,
      67,    -1,    68,   119,    67,    32,    91,    33,    39,    -1,
      70,    -1,    70,    32,    92,    33,    -1,    69,    -1,    69,
      32,    92,    33,    -1,    85,    -1,    89,    -1,    71,    21,
      32,   109,    33,    -1,    71,    21,    32,    33,    -1,    10,
      71,    21,    32,   109,    33,    -1,    10,    71,    21,    32,
      33,    -1,     9,    21,    -1,    72,    -1,    72,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   166,   168,   170,   172,   173,   174,   178,
     188,   234,   283,   330,   348,   349,   350,   351,   352,   353,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   373,
     374,   375,   376,   377,   378,   382,   385,   388,   389,   392,
     397,   404,   410,   411,   412,   413,   414,   415,   416,   419,
     420,   423,   424,   425,   426,   427,   428,   432,   433,   434,
     435,   438,   439,   440,   441,   442,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   465,   471,   472,   473,   474,   475,
     476,   477,   478,   481,   482,   497,   502,   566,   570,   576,
     582,   587,   595,   607,   622,   625,   630,   635,   640,   651,
     655,   661,   666,   671,   676,   683,   688,   693,   698,   707,
     712,   717,   722,   727,   732,   737,   742,   747,   752,   757,
     762,   767,   772,   777,   782,   787,   792,   797,   802,   807,
     812,   830,   846,   852,   868,   880,   888,   894,   900,   901,
     904,   905,   908,   909,   946,   954,   962,   979,   989,  1003,
    1004
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NULL_STRING", "LF", "END_FILE", "NEW",
  "NOP", "DOT", "CLASS", "SHARED", "THIS", "INDENT", "INT_LTR", "BLN_LTR",
  "FLT_LTR", "STR_LTR", "OBJECT_VALUE", "NLL_LTR", "ARRAY_VALUE",
  "SHORTCUT_PRINTLN", "IDENTIFER", "ASSIGN", "VAR", "GLOBAL", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "PRINT",
  "PRINTLN", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_QUAD", "RIGHT_QUAD",
  "LEFT_BRACE", "RIGHT_BRACE", "SEMICOLON_OPTIONAL", "SEMICOLON", "COMMA",
  "COLON", "ADD", "SUB", "MUL", "DIV", "MOD", "EQ", "NE", "GT", "GE", "LT",
  "LE", "AND", "OR", "NOT", "XOR", "BIT_AND", "BIT_OR", "BIT_XOR",
  "BIT_NOT", "INCREMENT", "DECREMENT", "IF", "ELSEIF", "ELSE", "FOR",
  "WHILE", "DO", "CONTINUE", "BREAK", "FUNC", "RETURN", "NEW_ARRAY",
  "PLUS_SIGN", "MINUS_SIGN", "QM", "$accept", "statement", "@1",
  "check_indent", "build_statement_stack", "close_execute_statement",
  "close_execute_last_statement", "execute_single_statement",
  "single_statement", "single_statement_no_semicolon", "null_statement",
  "nop_statement", "statement_block", "block_list", "expression_statement",
  "expression", "lvalue_operation_expression", "assign_expression",
  "self_operation_expression", "unary_expression", "binary_expression",
  "shortcut_expression", "value_expression", "lvalue_expression",
  "array_expression", "new_array_expression", "element_list",
  "var_statement", "global_statement", "assign_list",
  "function_expression", "argument_list", "parameter_list",
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
     325,   326,   327,   328,   329,   330,   331
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    79,    78,    78,    78,    78,    78,    78,    80,
      81,    82,    83,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    87,    88,    89,    89,    90,
      90,    91,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   102,
     103,   103,   104,   104,   105,   106,   106,   106,   106,   107,
     107,   108,   108,   108,   108,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   112,   113,   114,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   121,   122,
     122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     6,     3,     3,     0,     1,     0,
       0,     0,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     3,     3,     2,     4,
       1,     3,     2,     3,     2,     1,     3,     3,     5,     4,
       3,     1,     3,     3,     5,     1,     3,     3,     5,     3,
       5,     6,     7,     4,     5,     6,     4,     5,     6,     4,
       4,     6,     7,     8,     5,     6,     7,     5,     6,     7,
       5,     2,     1,     2,     8,     2,     1,     7,     1,     4,
       1,     4,     1,     1,     5,     4,     6,     5,     2,     1,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    12,     1,    11,    12,     0,     2,     5,     6,
      28,     0,    36,     0,     0,    85,    87,    86,    88,    89,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,   146,   150,   148,     0,
     159,     0,     0,    24,    14,    41,    43,    49,    50,    44,
      45,    48,    42,    91,    46,    47,    25,    26,    90,    15,
      16,    17,    18,    19,    20,    21,    23,    27,    22,     0,
      92,   158,     0,     0,   100,    84,     0,   105,   102,   104,
       0,    98,     0,    62,    61,    64,    65,    93,    57,    58,
     141,   143,    35,   145,     0,     0,     0,   160,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    95,     0,
     103,     0,     0,    93,   110,   111,     0,     0,     0,    63,
      97,     0,     0,    34,    29,    30,    31,    32,    33,     0,
       0,     0,     0,    10,    66,    67,    68,    69,    70,    74,
      75,    76,    77,    78,    79,    71,    72,    73,    80,    81,
      82,     0,    94,    96,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     9,     0,   101,     0,   109,     0,   106,
     107,     0,   152,   153,     0,     0,   151,   149,   115,   155,
       0,    99,     4,     0,     0,     0,   119,     0,     0,     0,
      10,   157,     0,   112,    93,   113,     0,    38,    39,     0,
       0,     0,     0,   154,     0,    83,   129,   126,     0,   123,
       0,     0,     0,     0,   130,     0,    13,   156,     0,   108,
      37,    40,     0,    35,   116,   117,   127,     0,   124,     0,
     120,     0,   140,   137,     0,   134,     0,     0,     3,   114,
       0,     0,     0,   128,   125,   121,     0,   138,     0,   135,
       0,   131,     0,     0,   144,   118,   122,   139,   136,   132,
       0,   147,   133
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    69,   153,   202,     8,     7,   258,    42,   142,
     143,    43,   193,   219,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    75,    56,    57,    78,
      58,   136,   200,   128,    59,    60,    61,    62,    63,   148,
      64,    65,   194,    66,    67,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     244,   -92,   146,   -92,   -92,   -92,   536,   -92,   -92,   -92,
     -92,    -2,   -92,    13,    -8,   -92,   -92,   -92,   -92,   -92,
    1114,     4,    40,    40,  1114,   726,  1114,  1114,  1114,  1114,
      47,    47,  1114,  1114,   -92,    39,  1114,    44,    82,    58,
    1114,    83,   112,   -92,   -92,    -4,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     3,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   536,
     -92,   -92,    40,    97,    -4,    79,   758,    98,   100,   100,
      80,   -92,    27,     1,     1,     1,     1,   -92,    25,    25,
      -4,    -4,   598,    -4,  1114,  1114,   115,    -4,  1114,   -92,
    1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,
    1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,   128,  1114,
    1114,  1114,  1114,  1114,  1114,   791,   -92,   -92,   123,   155,
     100,   131,  1114,   -14,   -92,    -4,   -16,  1114,   143,   -92,
     -92,   317,   130,   -92,   -92,   -92,   -92,   -92,   -92,  1178,
    1213,     2,  1248,   -92,    99,    99,     1,     1,     1,    65,
      65,    65,    65,    65,    65,  1737,  1716,    -4,   319,  1755,
     246,  1695,     4,   -92,    -4,    -4,    -4,    -4,    -4,    -4,
     824,  1284,   857,   -92,    37,    -4,  1114,   -92,  1146,    -4,
     145,   390,   -92,   -92,   103,  1114,   -92,   -92,   149,   -92,
      33,   -92,   -92,  1114,   137,  1320,   -92,   661,   890,  1356,
     -92,   -92,   102,    -4,    28,    -4,  1114,   -92,   -92,   463,
     141,   135,  1114,   -92,   156,    -4,   -92,   -92,   922,   -92,
     954,  1392,   144,  1428,   -92,   694,   -92,   -92,  1114,    -4,
     -92,   -92,  1114,   598,    -4,   158,   -92,  1499,   -92,  1534,
     -92,   986,   -92,   -92,  1018,   -92,  1050,  1464,   -92,    -4,
     148,   151,  1114,   -92,   -92,   -92,  1569,   -92,  1604,   -92,
    1639,   -92,  1082,   139,   -92,    -4,   -92,   -92,   -92,   -92,
    1674,   -92,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,    -1,   -25,   -92,   181,   -92,   -43,   -54,
     -92,   -92,   -92,   -92,   -89,   -20,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    -9,   -92,   -92,   165,   -92,   -92,   -21,
      73,   -92,     8,   -92,   -91,   -92,   -92,   -82,   -78,   -92,
     -92,   -92,   -92,   -92,   -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -8
static const yytype_int16 yytable[] =
{
      74,   145,    79,   144,    80,    74,    83,    84,    85,    86,
     146,   118,    90,    91,   147,    72,    93,   187,    76,    70,
      97,    88,    89,   198,   188,   119,   129,   186,   120,   121,
     122,   123,   124,   118,    71,   199,    76,   125,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   130,   113,   114,   115,   116,   135,   113,   198,   125,
      76,    77,   140,    73,   126,   127,   223,   132,    87,   238,
     211,    92,   117,   224,   149,   150,    94,   117,   152,    96,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   192,   174,
     175,   176,   177,   178,   179,   181,   221,   100,   101,   102,
     103,   104,   185,   139,    95,    98,    99,   189,   131,   132,
     137,   113,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   237,   113,   114,   115,   116,
     138,   117,   224,   102,   103,   104,     3,   151,   218,   172,
       4,     5,   145,   260,   144,   113,   117,   182,     6,   183,
     205,   146,   209,   184,   190,   147,   213,   216,   215,   195,
     220,   222,   226,   242,   243,   117,   241,   245,   281,   252,
     262,   273,   210,   225,   274,   236,     9,   231,   233,   261,
      82,   173,   212,     0,     0,     0,   239,     0,     0,     0,
       0,     0,   244,     0,     0,     0,     0,     0,   247,     0,
     249,     0,     0,     0,     0,   257,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,   268,     0,   270,     0,     0,     0,
       0,     0,   275,     0,    -7,     1,     0,     0,    -7,    -7,
      -7,    -7,   280,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,     0,    -7,     0,    -7,    -7,     0,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,    -7,     0,    -7,     0,
       0,     0,     0,     0,     0,     0,    -7,    -7,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -7,
       0,     0,   113,   114,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    10,     0,
       0,     0,   117,    11,    12,     0,    13,    14,     0,     0,
      15,    16,    17,    18,     0,    19,     0,    20,    21,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,    24,
       0,    25,     0,   191,     0,     0,     0,     0,     0,    26,
      27,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    28,     0,     0,   113,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    10,     0,     0,     0,   117,    11,    12,     0,    13,
      14,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,   217,     0,     0,
       0,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
      38,    39,    40,    41,    10,     0,     0,     0,     0,    11,
      12,     0,    13,    14,     0,     0,    15,    16,    17,    18,
       0,    19,     0,    20,    21,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    25,     0,     0,
     240,     0,     0,     0,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    10,     0,     0,
       0,     0,    11,    12,     0,    13,    14,     0,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,    11,    37,    38,    39,    40,    41,
       0,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,    35,    36,   141,    11,     0,     0,
       0,    41,     0,     0,    15,    16,    17,    18,     0,    19,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    25,   229,     0,     0,     0,
      11,     0,   230,    26,    27,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    24,     0,    25,   255,
       0,     0,    11,     0,    41,   256,    26,    27,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,    81,     0,     0,    11,     0,     0,    41,    26,    27,
       0,    15,    16,    17,    18,     0,    19,     0,    20,   133,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
      24,   134,    25,     0,     0,     0,     0,    11,     0,    41,
      26,    27,     0,     0,    15,    16,    17,    18,     0,    19,
       0,    20,    21,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,    24,     0,    25,     0,     0,     0,     0,
      11,    41,   180,    26,    27,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,    24,     0,    25,     0,
       0,     0,     0,    11,    41,   204,    26,    27,     0,     0,
      15,    16,    17,    18,     0,    19,     0,    20,    21,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,    24,
       0,    25,     0,     0,     0,     0,    11,    41,   208,    26,
      27,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,    24,     0,    25,     0,     0,     0,    11,     0,
      41,   232,    26,    27,     0,    15,    16,    17,    18,     0,
      19,     0,    20,    21,     0,    28,     0,     0,     0,     0,
      29,    30,    31,     0,    24,     0,    25,   246,     0,     0,
      11,     0,     0,    41,    26,    27,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,     0,    28,     0,     0,
       0,     0,    29,    30,    31,     0,    24,     0,    25,   248,
       0,     0,    11,     0,     0,    41,    26,    27,     0,    15,
      16,    17,    18,     0,    19,     0,    20,    21,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,   265,     0,     0,    11,     0,     0,    41,    26,    27,
       0,    15,    16,    17,    18,     0,    19,     0,    20,    21,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
      24,     0,    25,   267,     0,     0,    11,     0,     0,    41,
      26,    27,     0,    15,    16,    17,    18,     0,    19,     0,
      20,    21,     0,    28,     0,     0,     0,     0,    29,    30,
      31,     0,    24,     0,    25,   269,     0,     0,    11,     0,
       0,    41,    26,    27,     0,    15,    16,    17,    18,     0,
      19,     0,    20,    21,     0,    28,     0,     0,     0,     0,
      29,    30,    31,     0,    24,     0,    25,   279,     0,     0,
      11,     0,     0,    41,    26,    27,     0,    15,    16,    17,
      18,     0,    19,     0,    20,    21,     0,    28,     0,     0,
       0,     0,    29,    30,    31,     0,    24,     0,    25,     0,
       0,     0,    11,     0,     0,    41,    26,    27,     0,    15,
      16,    17,    18,     0,    19,     0,    20,   214,     0,    28,
       0,     0,     0,     0,    29,    30,    31,     0,    24,     0,
      25,     0,     0,     0,     0,     0,     0,    41,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,   196,     0,     0,     0,     0,     0,     0,     0,    41,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   117,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,   117,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
       0,     0,     0,     0,   117,   207,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
     117,   228,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,     0,     0,     0,     0,   117,   235,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,   117,   251,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   253,     0,     0,     0,     0,   117,   254,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   271,
       0,     0,     0,     0,   117,   272,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
     117,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,   117,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   276,     0,     0,     0,     0,     0,
     117,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
       0,     0,     0,     0,     0,   117,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,     0,     0,     0,     0,
     117,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,   117,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,     0,     0,   203,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     117,   113,   114,   115,   116,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,   117,   113,   114,   115,   116,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   117,   113,   114,   115,   116,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,   113,   114,   117,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117
};

static const yytype_int16 yycheck[] =
{
      20,    92,    23,    92,    24,    25,    26,    27,    28,    29,
      92,     8,    32,    33,    92,    23,    36,    33,    32,    21,
      40,    30,    31,    21,    40,    22,    69,    41,    25,    26,
      27,    28,    29,     8,    21,    33,    32,    34,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    72,    56,    57,    58,    59,    76,    56,    21,    34,
      32,    21,    35,    71,    61,    62,    33,    40,    21,    41,
      33,    32,    76,    40,    94,    95,    32,    76,    98,    21,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   141,   119,
     120,   121,   122,   123,   124,   125,   195,    42,    43,    44,
      45,    46,   132,    33,    32,    32,     4,   137,    21,    40,
      22,    56,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    33,    56,    57,    58,    59,
      40,    76,    40,    44,    45,    46,     0,    32,   191,    21,
       4,     5,   243,   242,   243,    56,    76,    34,    12,     4,
     180,   243,   182,    32,    21,   243,   186,    22,   188,    39,
      67,    22,    35,    32,    39,    76,   219,    21,    39,    35,
      22,    33,   183,   203,    33,   210,     5,   207,   208,   243,
      25,   118,   184,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,   228,    -1,
     230,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,   254,    -1,   256,    -1,    -1,    -1,
      -1,    -1,   262,    -1,     0,     1,    -1,    -1,     4,     5,
       6,     7,   272,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    55,
      -1,    -1,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,     1,    -1,
      -1,    -1,    76,     6,     7,    -1,     9,    10,    -1,    -1,
      13,    14,    15,    16,    -1,    18,    -1,    20,    21,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    55,    -1,    -1,    56,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,     1,    -1,    -1,    -1,    76,     6,     7,    -1,     9,
      10,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,     1,    -1,    -1,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    13,    14,    15,    16,
      -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,     1,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,     6,    69,    70,    71,    72,    73,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    66,    67,    68,     6,    -1,    -1,
      -1,    73,    -1,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,
       6,    -1,    41,    42,    43,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,    32,    -1,    34,    35,
      -1,    -1,     6,    -1,    73,    41,    42,    43,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    32,    -1,
      34,    35,    -1,    -1,     6,    -1,    -1,    73,    42,    43,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,     6,    -1,    73,
      42,    43,    -1,    -1,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
       6,    73,    41,    42,    43,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,     6,    73,    41,    42,    43,    -1,    -1,
      13,    14,    15,    16,    -1,    18,    -1,    20,    21,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,     6,    73,    41,    42,
      43,    -1,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    55,    -1,    -1,    -1,    -1,    60,    61,    62,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,     6,    -1,
      73,    41,    42,    43,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    21,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    32,    -1,    34,    35,    -1,    -1,
       6,    -1,    -1,    73,    42,    43,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    32,    -1,    34,    35,
      -1,    -1,     6,    -1,    -1,    73,    42,    43,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    32,    -1,
      34,    35,    -1,    -1,     6,    -1,    -1,    73,    42,    43,
      -1,    13,    14,    15,    16,    -1,    18,    -1,    20,    21,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      32,    -1,    34,    35,    -1,    -1,     6,    -1,    -1,    73,
      42,    43,    -1,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    32,    -1,    34,    35,    -1,    -1,     6,    -1,
      -1,    73,    42,    43,    -1,    13,    14,    15,    16,    -1,
      18,    -1,    20,    21,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    32,    -1,    34,    35,    -1,    -1,
       6,    -1,    -1,    73,    42,    43,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    20,    21,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    32,    -1,    34,    -1,
      -1,    -1,     6,    -1,    -1,    73,    42,    43,    -1,    13,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    73,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    76,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      76,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    76,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    76,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    76,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    76,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      76,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      76,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      76,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      76,    56,    57,    58,    59,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    76,    56,    57,    58,    59,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    76,    56,    57,    58,    59,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    76,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    78,     0,     4,     5,    12,    83,    82,    83,
       1,     6,     7,     9,    10,    13,    14,    15,    16,    18,
      20,    21,    23,    24,    32,    34,    42,    43,    55,    60,
      61,    62,    63,    64,    65,    66,    67,    69,    70,    71,
      72,    73,    85,    88,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   104,   105,   107,   111,
     112,   113,   114,   115,   117,   118,   120,   121,   122,    79,
      21,    21,    23,    71,    92,   103,    32,    21,   106,   106,
      92,    35,   103,    92,    92,    92,    92,    21,   100,   100,
      92,    92,    32,    92,    32,    32,    21,    92,    32,     4,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    56,    57,    58,    59,    76,     8,    22,
      25,    26,    27,    28,    29,    34,    61,    62,   110,    85,
     106,    21,    40,    21,    33,    92,   108,    22,    40,    33,
      35,    68,    86,    87,    91,   111,   114,   115,   116,    92,
      92,    32,    92,    80,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    21,   107,    92,    92,    92,    92,    92,    92,
      41,    92,    34,     4,    32,    92,    41,    33,    40,    92,
      21,    36,    85,    89,   119,    39,    33,    33,    21,    33,
     109,    33,    81,    41,    41,    92,    35,    41,    41,    92,
      80,    33,   109,    92,    21,    92,    22,    37,    85,    90,
      67,    91,    22,    33,    40,    92,    35,    35,    41,    35,
      41,    92,    41,    92,    35,    41,    81,    33,    41,    92,
      37,    85,    32,    39,    92,    21,    35,    92,    35,    92,
      35,    41,    35,    35,    41,    35,    41,    92,    84,    92,
      91,    86,    22,    35,    35,    35,    92,    35,    92,    35,
      92,    35,    41,    33,    33,    92,    35,    35,    35,    35,
      92,    39,    35
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
#line 166 "bello.y"
    {(yyval.intVl) = 0; }
    break;

  case 6:
#line 172 "bello.y"
    { return 0; }
    break;

  case 8:
#line 174 "bello.y"
    { yyerrok; }
    break;

  case 9:
#line 178 "bello.y"
    { 
        if (((yyvsp[(-2) - (0)].intVl))>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }
    break;

  case 10:
#line 188 "bello.y"
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

  case 11:
#line 234 "bello.y"
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

  case 12:
#line 283 "bello.y"
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

  case 13:
#line 330 "bello.y"
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

  case 14:
#line 348 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 15:
#line 349 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 16:
#line 350 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 17:
#line 351 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 18:
#line 352 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 19:
#line 353 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 20:
#line 355 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 21:
#line 356 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 22:
#line 357 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 23:
#line 358 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 24:
#line 359 "bello.y"
    { (yyval.stmt)=(yyvsp[(1) - (1)].stmt); }
    break;

  case 25:
#line 360 "bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt);}
    break;

  case 26:
#line 361 "bello.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 27:
#line 362 "bello.y"
    { (yyval.stmt)= (yyvsp[(1) - (1)].stmt); }
    break;

  case 28:
#line 364 "bello.y"
    { 
        (yyval.stmt)=bldNllStmt(); 
        yyclearin; 
        yyerrok; 
    }
    break;

  case 35:
#line 382 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 36:
#line 385 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 37:
#line 388 "bello.y"
    { (yyval.stmt)=(yyvsp[(2) - (3)].stmt); }
    break;

  case 38:
#line 389 "bello.y"
    { (yyval.stmt)=bldNllStmt(); }
    break;

  case 39:
#line 393 "bello.y"
    { 
        (yyval.stmt)=bldStmtBlk(); 
        stmtBlkAdd((yyval.stmt), (yyvsp[(1) - (1)].stmt)); 
    }
    break;

  case 40:
#line 398 "bello.y"
    {
        (yyval.stmt) = stmtBlkAdd((yyvsp[(1) - (2)].stmt) ,(yyvsp[(2) - (2)].stmt));
    }
    break;

  case 41:
#line 405 "bello.y"
    { 
        (yyval.stmt)=bldExpStmt((yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 42:
#line 410 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 44:
#line 412 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 45:
#line 413 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 46:
#line 414 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 47:
#line 415 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 48:
#line 416 "bello.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 51:
#line 423 "bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 52:
#line 424 "bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OprEnm::Add, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 53:
#line 425 "bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OprEnm::Sub, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 54:
#line 426 "bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OprEnm::Mul, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 55:
#line 427 "bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OprEnm::Div, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 56:
#line 428 "bello.y"
    { (yyval.exp)=bldAsnExp((yyvsp[(1) - (3)].exp), bldBnrExp(OprEnm::Asn, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp))); }
    break;

  case 57:
#line 432 "bello.y"
    { (yyval.exp)=bldUnrExp(OprEnm::PfxInc, (yyvsp[(2) - (2)].exp)); }
    break;

  case 58:
#line 433 "bello.y"
    { (yyval.exp)=bldUnrExp(OprEnm::PfxDec, (yyvsp[(2) - (2)].exp)); }
    break;

  case 59:
#line 434 "bello.y"
    { (yyval.exp)=bldUnrExp(OprEnm::SfxInc, (yyvsp[(1) - (2)].exp)); }
    break;

  case 60:
#line 435 "bello.y"
    { (yyval.exp)=bldUnrExp(OprEnm::SfxDec, (yyvsp[(1) - (2)].exp)); }
    break;

  case 61:
#line 438 "bello.y"
    { (yyval.exp) = bldUnrExp(OprEnm::Ngtv, (yyvsp[(2) - (2)].exp)); }
    break;

  case 62:
#line 439 "bello.y"
    { (yyval.exp) = bldUnrExp(OprEnm::Pstv, (yyvsp[(2) - (2)].exp)); }
    break;

  case 63:
#line 440 "bello.y"
    { (yyval.exp)=(yyvsp[(2) - (3)].exp); }
    break;

  case 64:
#line 441 "bello.y"
    { (yyval.exp)=bldUnrExp(OprEnm::Not, (yyvsp[(2) - (2)].exp)); }
    break;

  case 65:
#line 442 "bello.y"
    { (yyval.exp)=bldUnrExp(OprEnm::BNot, (yyvsp[(2) - (2)].exp)); }
    break;

  case 66:
#line 445 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Add, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 67:
#line 446 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Sub, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 68:
#line 447 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Mul, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 69:
#line 448 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Div, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 70:
#line 449 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Mod, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 71:
#line 450 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::And, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 72:
#line 451 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Or, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 73:
#line 452 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Xor, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 74:
#line 453 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Eq, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 75:
#line 454 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Ne, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 76:
#line 455 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Gt, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 77:
#line 456 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Ge, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 78:
#line 457 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Lt, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 79:
#line 458 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::Le, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 80:
#line 459 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::BAnd, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 81:
#line 460 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::BOr, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 82:
#line 461 "bello.y"
    { (yyval.exp)=bldBnrExp(OprEnm::BXor, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); }
    break;

  case 83:
#line 462 "bello.y"
    { (yyval.exp) = bldTnrExp(OprEnm::Tnr, (yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp)); }
    break;

  case 84:
#line 466 "bello.y"
    {
        
    }
    break;

  case 85:
#line 471 "bello.y"
    { (yyval.exp)=bldIntValExp((yyvsp[(1) - (1)].intVl)); }
    break;

  case 86:
#line 472 "bello.y"
    { (yyval.exp)=bldFltValExp((yyvsp[(1) - (1)].fltVl)); }
    break;

  case 87:
#line 473 "bello.y"
    { (yyval.exp)=bldBlnValExp((yyvsp[(1) - (1)].blnVl)); }
    break;

  case 88:
#line 474 "bello.y"
    { (yyval.exp)=bldStrValExp((yyvsp[(1) - (1)].strVl)); }
    break;

  case 89:
#line 475 "bello.y"
    { (yyval.exp)=bldNllValExp(); }
    break;

  case 92:
#line 478 "bello.y"
    { (yyval.exp)= bldNewExp((yyvsp[(2) - (2)].idtf)); }
    break;

  case 93:
#line 481 "bello.y"
    { (yyval.exp)= bldLvlExp(bldVrbExp((yyvsp[(1) - (1)].idtf))); }
    break;

  case 94:
#line 483 "bello.y"
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
#line 498 "bello.y"
    { 
        (yyval.exp)=(yyvsp[(1) - (2)].exp); 
        bldLvlExpAdd((yyvsp[(1) - (2)].exp), (yyvsp[(2) - (2)].evlLst)); 
    }
    break;

  case 96:
#line 503 "bello.y"
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
#line 567 "bello.y"
    {
        (yyval.exp)= bldArrExp((yyvsp[(2) - (3)].elmtLst));
    }
    break;

  case 98:
#line 571 "bello.y"
    {
        (yyval.exp)= bldArrExp(bldElmtLst());
    }
    break;

  case 99:
#line 577 "bello.y"
    {
        (yyval.exp) = bldNewArrExp((yyvsp[(3) - (4)].exp));
    }
    break;

  case 100:
#line 583 "bello.y"
    { 
        (yyval.elmtLst)= bldElmtLst(); 
        elmtLstAdd((yyval.elmtLst), (yyvsp[(1) - (1)].exp)); 
    }
    break;

  case 101:
#line 588 "bello.y"
    {  
        (yyval.elmtLst)=(yyvsp[(1) - (3)].elmtLst);  
        elmtLstAdd((yyval.elmtLst), (yyvsp[(3) - (3)].exp)); 
    }
    break;

  case 102:
#line 596 "bello.y"
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            (yyval.stmt)=bldVarStmt((yyvsp[(2) - (2)].asgnLst)); 
        }
        else
        {
            //$$=bldVarStmt(StmtEnm::ClsVar, $2);
        }
    }
    break;

  case 103:
#line 608 "bello.y"
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

  case 104:
#line 622 "bello.y"
    { (yyval.stmt)=bldGlbStmt((yyvsp[(2) - (2)].asgnLst)); }
    break;

  case 105:
#line 626 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(1) - (1)].idtf)), bldNllExp());
    }
    break;

  case 106:
#line 631 "bello.y"
    {
        (yyval.asgnLst)= bldAsgnLst();
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 107:
#line 636 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[(1) - (3)].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(3) - (3)].idtf)), bldNllExp());
    }
    break;

  case 108:
#line 641 "bello.y"
    {
        (yyval.asgnLst)=(yyvsp[(1) - (5)].asgnLst);
        asgnLstAdd((yyval.asgnLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 109:
#line 652 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (4)].idtf), (yyvsp[(3) - (4)].argLst));
    }
    break;

  case 110:
#line 656 "bello.y"
    {
        (yyval.exp)=bldFcnExp((yyvsp[(1) - (3)].idtf), bldArgLst());
    }
    break;

  case 111:
#line 662 "bello.y"
    {
        (yyval.argLst)=bldArgLst();
        argLstAdd((yyval.argLst), (yyvsp[(1) - (1)].exp));
    }
    break;

  case 112:
#line 667 "bello.y"
    {
        (yyval.argLst) = bldArgLst();
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 113:
#line 672 "bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (3)].argLst);
        argLstAdd((yyval.argLst), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 114:
#line 677 "bello.y"
    {
        (yyval.argLst) = (yyvsp[(1) - (5)].argLst);
        argLstAdd((yyval.argLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 115:
#line 684 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (1)].idtf)));
    }
    break;

  case 116:
#line 689 "bello.y"
    {
        (yyval.prmLst) = bldPrmLst();
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(1) - (3)].idtf)), (yyvsp[(3) - (3)].exp));
    }
    break;

  case 117:
#line 694 "bello.y"
    { 
        (yyval.prmLst) = (yyvsp[(1) - (3)].prmLst);  
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (3)].idtf)));
    }
    break;

  case 118:
#line 699 "bello.y"
    {
        (yyval.prmLst) = (yyvsp[(1) - (5)].prmLst);
        prmLstAdd((yyval.prmLst), bldVrbExp((yyvsp[(3) - (5)].idtf)), (yyvsp[(5) - (5)].exp));
    }
    break;

  case 119:
#line 708 "bello.y"
    {
        (yyval.evlLst) = bldAcsLst();
        acsLstIdxAdd((yyval.evlLst), (yyvsp[(2) - (3)].exp));
    }
    break;

  case 120:
#line 713 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), (yyvsp[(4) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 121:
#line 718 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 122:
#line 723 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 123:
#line 728 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (4)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 124:
#line 733 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (5)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 125:
#line 738 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(2) - (6)].exp), bldIntValExp(-1), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 126:
#line 743 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (4)].exp), bldIntValExp(1));
    }
    break;

  case 127:
#line 748 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 128:
#line 753 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp));
    }
    break;

  case 129:
#line 758 "bello.y"
    {
        (yyval.evlLst)= bldAcsLst();
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 130:
#line 763 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (4)].evlLst);
        acsLstIdxAdd((yyval.evlLst),(yyvsp[(3) - (4)].exp));
    }
    break;

  case 131:
#line 768 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), (yyvsp[(5) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 132:
#line 773 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].exp), bldIntValExp(1));
    }
    break;

  case 133:
#line 778 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (8)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (8)].exp), (yyvsp[(5) - (8)].exp), (yyvsp[(7) - (8)].exp));
    }
    break;

  case 134:
#line 783 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (5)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 135:
#line 788 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (6)].exp), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 136:
#line 793 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), (yyvsp[(3) - (7)].exp), bldIntValExp(-1), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 137:
#line 798 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (5)].exp), bldIntValExp(1));
    }
    break;

  case 138:
#line 803 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (6)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (6)].exp), bldIntValExp(1));
    }
    break;

  case 139:
#line 808 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (7)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), (yyvsp[(4) - (7)].exp), (yyvsp[(6) - (7)].exp));
    }
    break;

  case 140:
#line 813 "bello.y"
    {
        (yyval.evlLst)=(yyvsp[(1) - (5)].evlLst);
        acsLstSlcAdd((yyval.evlLst), bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    break;

  case 141:
#line 831 "bello.y"
    {
        (yyval.stmt)=bldIfStmt((yyvsp[(2) - (2)].exp));
        //printf("bld if stmt\n");
    }
    break;

  case 142:
#line 847 "bello.y"
    {
        (yyval.stmt) = bldElsStmt();
    }
    break;

  case 143:
#line 853 "bello.y"
    {
        (yyval.stmt) = bldElifStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 144:
#line 869 "bello.y"
    {
        (yyval.stmt)= bldForStmt((yyvsp[(3) - (8)].stmt), (yyvsp[(5) - (8)].stmt), (yyvsp[(7) - (8)].stmt));  
    }
    break;

  case 145:
#line 881 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt((yyvsp[(2) - (2)].exp));
    }
    break;

  case 146:
#line 889 "bello.y"
    {
        (yyval.stmt) = bldWhlStmt();
    }
    break;

  case 147:
#line 895 "bello.y"
    {
        (yyval.stmt)= bldDoWhlStmt((yyvsp[(5) - (7)].stmt), (yyvsp[(2) - (7)].stmt));
    }
    break;

  case 148:
#line 900 "bello.y"
    { (yyval.stmt)= bldBrkStmt(bldIntValExp(1)); }
    break;

  case 149:
#line 901 "bello.y"
    { (yyval.stmt)= bldBrkStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 150:
#line 904 "bello.y"
    { (yyval.stmt)= bldCntnStmt(bldIntValExp(1)); }
    break;

  case 151:
#line 905 "bello.y"
    { (yyval.stmt)= bldCntnStmt((yyvsp[(3) - (4)].exp)); }
    break;

  case 154:
#line 947 "bello.y"
    {
        struct FcnStrc* fcn;

        fcn=bldFcn((yyvsp[(2) - (5)].idtf), (yyvsp[(4) - (5)].prmLst));

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 155:
#line 955 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(2) - (4)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 156:
#line 963 "bello.y"
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
#line 980 "bello.y"
    {
        struct FcnStrc *fcn;

        fcn=bldFcn((yyvsp[(3) - (5)].idtf), bldPrmLst());

        (yyval.stmt) = bldFcnStmt(fcn);
    }
    break;

  case 158:
#line 990 "bello.y"
    {
        struct ClsStrc* cls;

        cls = bldCls((yyvsp[(2) - (2)].idtf));

        (yyval.stmt) = bldClsStmt(cls);

        //blnDfnCls = 1;
    }
    break;

  case 159:
#line 1003 "bello.y"
    { (yyval.stmt)=bldRtnStmt(NULL); }
    break;

  case 160:
#line 1004 "bello.y"
    { (yyval.stmt)=bldRtnStmt((yyvsp[(2) - (2)].exp)); }
    break;


/* Line 1267 of yacc.c.  */
#line 3244 "y.tab.c"
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


#line 1007 "bello.y"


#endif




