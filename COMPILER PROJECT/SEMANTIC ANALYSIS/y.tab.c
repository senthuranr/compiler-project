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
     INT = 258,
     FLOAT = 259,
     VOID = 260,
     ID = 261,
     NUM = 262,
     REAL = 263,
     WHILE = 264,
     IF = 265,
     RETURN = 266,
     MAIN = 267,
     LE = 268,
     STRING = 269,
     PRINT = 270,
     FUNCTION = 271,
     DO = 272,
     ARRAY = 273,
     ELSE = 274,
     STRUCT = 275,
     STRUCT_VAR = 276,
     FOR = 277,
     GE = 278,
     EQ = 279,
     NE = 280,
     INC = 281,
     DEC = 282
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define VOID 260
#define ID 261
#define NUM 262
#define REAL 263
#define WHILE 264
#define IF 265
#define RETURN 266
#define MAIN 267
#define LE 268
#define STRING 269
#define PRINT 270
#define FUNCTION 271
#define DO 272
#define ARRAY 273
#define ELSE 274
#define STRUCT 275
#define STRUCT_VAR 276
#define FOR 277
#define GE 278
#define EQ 279
#define NE 280
#define INC 281
#define DEC 282




/* Copy the first part of user declarations.  */
#line 1 "semantic.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SymbolTable.c"
int i=1,k=-1,l=-1;
int j=0;
char curfunc[100];
int stack[100];
int top=0;
int plist[100],flist[100];
int end[100];
int arr[10];
int ct=0,c=0,b;
int loop = 0;
int errc=0;
int type=0;
extern int yylineno;


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
#line 30 "semantic.y"
{
	int ival;
	char *str;
}
/* Line 187 of yacc.c.  */
#line 175 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 188 "y.tab.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    39,    37,    31,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
      36,    28,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    13,    19,    26,    30,
      32,    35,    37,    39,    41,    45,    48,    50,    51,    53,
      55,    57,    59,    61,    65,    68,    72,    74,    80,    82,
      90,    96,   104,   105,   106,   120,   121,   122,   132,   136,
     140,   144,   148,   151,   154,   158,   162,   164,   168,   172,
     176,   180,   182,   184,   188,   192,   194,   198,   200,   207,
     212,   214,   218,   220,   222,   226,   232,   234,   238,   242,
     246,   250,   256,   262,   268,   274,   276,   278,   280,   286,
     289,   293
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    44,    -1,    12,    44,    -1,    67,
      44,    -1,    -1,    48,     6,    29,    30,    49,    -1,    48,
       6,    29,    46,    30,    49,    -1,    46,    31,    47,    -1,
      47,    -1,    48,     6,    -1,     3,    -1,     4,    -1,     5,
      -1,    32,    50,    33,    -1,    50,    51,    -1,    49,    -1,
      -1,    67,    -1,    53,    -1,    54,    -1,    57,    -1,    52,
      -1,    11,    66,    34,    -1,    11,    34,    -1,    11,     6,
      34,    -1,    34,    -1,    15,    29,    14,    30,    34,    -1,
      49,    -1,    17,    49,     9,    29,    60,    30,    34,    -1,
      10,    29,    60,    30,    49,    -1,    10,    29,    60,    30,
      49,    19,    49,    -1,    -1,    -1,    22,    29,    60,    34,
      60,    34,    60,    30,    32,    55,    50,    56,    33,    -1,
      -1,    -1,     9,    29,    60,    30,    32,    58,    50,    59,
      33,    -1,    60,    13,    60,    -1,    60,    23,    60,    -1,
      60,    25,    60,    -1,    60,    24,    60,    -1,    60,    26,
      -1,    60,    27,    -1,    60,    35,    60,    -1,    60,    36,
      60,    -1,    62,    -1,     6,    28,    66,    -1,     6,    37,
      61,    -1,     6,    31,    61,    -1,    66,    31,    61,    -1,
       6,    -1,    66,    -1,     6,    28,    62,    -1,     6,    31,
      62,    -1,    64,    -1,    66,    31,    62,    -1,     6,    -1,
       6,    28,     6,    29,    46,    30,    -1,     6,    29,    46,
      30,    -1,    66,    -1,    46,    31,    63,    -1,    63,    -1,
       6,    -1,     6,    28,    65,    -1,     6,    28,    29,    65,
      30,    -1,     6,    -1,    65,    37,    65,    -1,    65,    38,
      65,    -1,    65,    39,    65,    -1,    65,    40,    65,    -1,
      29,    65,    37,    65,    30,    -1,    29,    65,    38,    65,
      30,    -1,    29,    65,    39,    65,    30,    -1,    29,    65,
      40,    65,    30,    -1,    66,    -1,     7,    -1,     8,    -1,
      48,     6,    28,    66,    34,    -1,    64,    34,    -1,    48,
       6,    34,    -1,    48,     6,    41,    61,    42,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    40,    43,    59,    81,    82,
      85,    88,    89,    90,    93,    96,    97,    98,   101,   102,
     103,   104,   105,   106,   113,   114,   121,   122,   123,   126,
     129,   130,   133,   133,   133,   136,   136,   136,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   150,   151,   152,
     153,   154,   155,   158,   180,   184,   185,   186,   190,   214,
     237,   240,   241,   244,   259,   260,   263,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   289,   290,   293,   328,
     347,   370
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "VOID", "ID", "NUM",
  "REAL", "WHILE", "IF", "RETURN", "MAIN", "LE", "STRING", "PRINT",
  "FUNCTION", "DO", "ARRAY", "ELSE", "STRUCT", "STRUCT_VAR", "FOR", "GE",
  "EQ", "NE", "INC", "DEC", "'='", "'('", "')'", "','", "'{'", "'}'",
  "';'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'['", "']'", "$accept",
  "START", "FUNC", "PARALIST", "PARA", "TYPE", "CSTMT", "STMTLIST",
  "STATEMENT", "dowhile", "if", "for", "@1", "@2", "while", "@3", "@4",
  "EXPR1", "ASSIGN", "ASSIGN1", "PARAM", "ASSIGN2", "E", "CONSTTYPE",
  "DECLARE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    61,    40,
      41,    44,   123,   125,    59,    62,    60,    43,    45,    42,
      47,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    45,    45,    46,    46,
      47,    48,    48,    48,    49,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    55,    56,    54,    58,    59,    57,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    46,    46,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    67,    67,
      67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     5,     6,     3,     1,
       2,     1,     1,     1,     3,     2,     1,     0,     1,     1,
       1,     1,     1,     3,     2,     3,     1,     5,     1,     7,
       5,     7,     0,     0,    13,     0,     0,     9,     3,     3,
       3,     3,     2,     2,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     1,     6,     4,
       1,     3,     1,     1,     3,     5,     1,     3,     3,     3,
       3,     5,     5,     5,     5,     1,     1,     1,     5,     2,
       3,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    11,    12,    13,     0,     5,     0,     5,     0,     0,
       5,     0,     3,     1,     2,     0,    79,     4,    66,    76,
      77,     0,    64,    75,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     9,     0,
      62,    51,     0,    52,     0,    65,     0,     0,     0,     0,
      67,    68,    69,    70,    78,    17,     6,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     7,     8,    61,    47,    49,    48,    81,    50,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,    14,
      26,     0,    28,    15,    22,    19,    20,    21,    18,     0,
       0,     0,    24,     0,     0,     0,     0,     0,    57,     0,
      46,    55,    60,     0,    25,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    53,    60,     0,
      54,    38,    39,    41,    40,    35,    44,    45,    56,    30,
      27,     0,     0,     0,    59,    17,     0,     0,     0,     0,
      36,    31,    29,     0,    58,     0,     0,    37,    32,    17,
      33,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    37,    38,     8,    69,    70,    93,    94,
      95,    96,   169,   171,    97,   155,   165,   109,    42,   110,
      40,   111,    22,   112,    10
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
     292,  -152,  -152,  -152,   -20,   292,    29,   292,    27,     6,
     292,    42,  -152,  -152,  -152,    57,  -152,  -152,  -152,  -152,
    -152,    59,   155,  -152,     5,   104,  -152,    45,    59,   138,
      59,    59,    59,    59,    26,  -152,    40,    89,  -152,    73,
    -152,   272,    48,    53,   170,  -152,    59,    59,    59,    59,
     155,   155,   155,   155,  -152,    40,  -152,    40,   234,  -152,
       5,    45,    45,    61,    45,   183,   213,   243,   254,  -152,
      72,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,    64,    82,    24,    97,    40,    99,  -152,
    -152,   107,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   133,
     133,   101,  -152,   113,   145,   144,   133,    84,     7,   161,
    -152,  -152,   132,   176,  -152,  -152,   142,   140,   191,   109,
     234,   133,   133,   133,   133,   133,  -152,  -152,   147,   133,
     133,   133,    40,   156,   133,   133,    93,  -152,   268,   121,
    -152,   251,   251,   251,   251,  -152,   251,   251,  -152,   179,
    -152,   206,   221,   234,  -152,    40,    40,   171,   133,   127,
     139,  -152,  -152,   236,  -152,   195,   192,  -152,  -152,    40,
     139,   202,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,    10,  -152,  -106,   196,   -24,   -33,  -151,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,   -61,    39,  -110,
     200,     0,   134,    -5,   -68
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
       9,    39,    98,    56,   160,     9,    23,     9,    11,   137,
       9,   140,    19,    20,   139,    12,    23,    14,   170,    34,
      17,   148,    43,    23,    71,    23,    23,    23,    23,    13,
     101,    19,    20,    15,    39,   119,   120,    92,   121,   113,
      16,    23,    23,    23,    23,   118,    91,   159,    18,    19,
      20,    41,    19,    20,   105,    74,    43,    43,   102,    43,
      54,   141,   142,   143,   144,    18,    19,    20,   146,   147,
       9,    21,    55,   151,   152,     1,     2,     3,     4,    59,
     103,    83,    84,    85,    64,    24,    25,    86,    28,    87,
      63,    26,    98,    99,    88,    77,    39,   163,    27,   149,
      75,    76,    98,    78,    55,    89,    90,     1,     2,     3,
      35,   100,    24,   107,   138,   136,    19,    20,    26,    57,
      58,   119,   153,   161,   121,    27,   104,    92,   106,    39,
     -66,   -66,   -66,   -66,    36,   114,    91,    92,    21,   108,
      19,    20,     1,     2,     3,     4,    91,   115,    83,    84,
      85,   154,    58,   117,    86,    29,    87,   164,    58,   116,
       9,    88,    44,   131,    50,    51,    52,    53,    45,   134,
       9,    55,   133,    90,   122,    46,    47,    48,    49,   145,
      65,    66,    67,    68,   123,   124,   125,   126,   127,   122,
     150,   128,    30,    31,    32,    33,   129,   130,   156,   123,
     124,   125,   126,   127,   122,   162,   132,    46,    47,    48,
      49,   129,   130,    79,   123,   124,   125,   126,   127,   122,
      30,    31,    32,    33,   168,   135,   129,   130,   167,   123,
     124,   125,   126,   127,   122,   172,   157,     1,     2,     3,
      35,   129,   130,    80,   123,   124,   125,   126,   127,   122,
      30,    31,    32,    33,    72,   158,   129,   130,    73,   123,
     124,   125,   126,   127,   122,     0,   166,     0,     0,     0,
       0,   129,   130,    81,   123,   124,   125,   126,   127,     0,
      30,    31,    32,    33,    82,     0,   129,   130,     0,     0,
       0,    30,    31,    32,    33,     1,     2,     3,     4,   131,
      60,     0,     0,    61,     5,   -75,   -75,   -75,   -75,    62
};

static const yytype_int16 yycheck[] =
{
       0,    25,    70,    36,   155,     5,    11,     7,    28,   119,
      10,   121,     7,     8,   120,     5,    21,     7,   169,    24,
      10,   131,    27,    28,    57,    30,    31,    32,    33,     0,
       6,     7,     8,     6,    58,    28,    29,    70,    31,   100,
      34,    46,    47,    48,    49,   106,    70,   153,     6,     7,
       8,     6,     7,     8,    87,    60,    61,    62,    34,    64,
      34,   122,   123,   124,   125,     6,     7,     8,   129,   130,
      70,    29,    32,   134,   135,     3,     4,     5,     6,     6,
      85,     9,    10,    11,    31,    28,    29,    15,    29,    17,
      42,    34,   160,    29,    22,    34,   120,   158,    41,   132,
      61,    62,   170,    64,    32,    33,    34,     3,     4,     5,
       6,    29,    28,     6,   119,     6,     7,     8,    34,    30,
      31,    28,    29,   156,    31,    41,    29,   160,    29,   153,
      37,    38,    39,    40,    30,    34,   160,   170,    29,     6,
       7,     8,     3,     4,     5,     6,   170,    34,     9,    10,
      11,    30,    31,     9,    15,    21,    17,    30,    31,    14,
     160,    22,    28,    31,    30,    31,    32,    33,    30,    29,
     170,    32,    30,    34,    13,    37,    38,    39,    40,    32,
      46,    47,    48,    49,    23,    24,    25,    26,    27,    13,
      34,    30,    37,    38,    39,    40,    35,    36,    19,    23,
      24,    25,    26,    27,    13,    34,    30,    37,    38,    39,
      40,    35,    36,    30,    23,    24,    25,    26,    27,    13,
      37,    38,    39,    40,    32,    34,    35,    36,    33,    23,
      24,    25,    26,    27,    13,    33,    30,     3,     4,     5,
       6,    35,    36,    30,    23,    24,    25,    26,    27,    13,
      37,    38,    39,    40,    58,    34,    35,    36,    58,    23,
      24,    25,    26,    27,    13,    -1,    30,    -1,    -1,    -1,
      -1,    35,    36,    30,    23,    24,    25,    26,    27,    -1,
      37,    38,    39,    40,    30,    -1,    35,    36,    -1,    -1,
      -1,    37,    38,    39,    40,     3,     4,     5,     6,    31,
      28,    -1,    -1,    31,    12,    37,    38,    39,    40,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    44,    45,    48,    64,
      67,    28,    44,     0,    44,     6,    34,    44,     6,     7,
       8,    29,    65,    66,    28,    29,    34,    41,    29,    65,
      37,    38,    39,    40,    66,     6,    30,    46,    47,    48,
      63,     6,    61,    66,    65,    30,    37,    38,    39,    40,
      65,    65,    65,    65,    34,    32,    49,    30,    31,     6,
      28,    31,    37,    42,    31,    65,    65,    65,    65,    49,
      50,    49,    47,    63,    66,    61,    61,    34,    61,    30,
      30,    30,    30,     9,    10,    11,    15,    17,    22,    33,
      34,    48,    49,    51,    52,    53,    54,    57,    67,    29,
      29,     6,    34,    66,    29,    49,    29,     6,     6,    60,
      62,    64,    66,    60,    34,    34,    14,     9,    60,    28,
      29,    31,    13,    23,    24,    25,    26,    27,    30,    35,
      36,    31,    30,    30,    29,    34,     6,    62,    66,    46,
      62,    60,    60,    60,    60,    32,    60,    60,    62,    49,
      34,    60,    60,    29,    30,    58,    19,    30,    34,    46,
      50,    49,    34,    60,    30,    59,    30,    33,    32,    55,
      50,    56,    33
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
# if YYLTYPE_IS_TRIVIAL
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
        case 6:
#line 43 "semantic.y"
    {
		if ((yyvsp[(1) - (5)].ival)!=returntype_func(ct))
		{
			printf("\nError : Type mismatch : Line %d\n",printline()); errc++;
		}

		if (!(strcmp((yyvsp[(2) - (5)].str),"printf") && strcmp((yyvsp[(2) - (5)].str),"scanf") && strcmp((yyvsp[(2) - (5)].str),"getc") && strcmp((yyvsp[(2) - (5)].str),"gets") && strcmp((yyvsp[(2) - (5)].str),"getchar") && strcmp	((yyvsp[(2) - (5)].str),"puts") && strcmp((yyvsp[(2) - (5)].str),"putchar") && strcmp((yyvsp[(2) - (5)].str),"clearerr") && strcmp((yyvsp[(2) - (5)].str),"getw") && strcmp((yyvsp[(2) - (5)].str),"putw") && strcmp((yyvsp[(2) - (5)].str),"putc") && strcmp((yyvsp[(2) - (5)].str),"rewind") && strcmp((yyvsp[(2) - (5)].str),"sprint") && strcmp((yyvsp[(2) - (5)].str),"sscanf") && strcmp((yyvsp[(2) - (5)].str),"remove") && strcmp((yyvsp[(2) - (5)].str),"fflush")))
		{
			printf("Error : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (5)].str),printline()); errc++;
		}
		else
		{
			insert((yyvsp[(2) - (5)].str),FUNCTION);
			insert((yyvsp[(2) - (5)].str),(yyvsp[(1) - (5)].ival));
		}
	}
    break;

  case 7:
#line 59 "semantic.y"
    {
		if ((yyvsp[(1) - (6)].ival)!=returntype_func(ct))
		{
			printf("\nError : Type mismatch : Line %d\n",printline()); errc++;
		}	
		if (!(strcmp((yyvsp[(2) - (6)].str),"printf") && strcmp((yyvsp[(2) - (6)].str),"scanf") && strcmp((yyvsp[(2) - (6)].str),"getc") && strcmp((yyvsp[(2) - (6)].str),"gets") && strcmp((yyvsp[(2) - (6)].str),"getchar") && strcmp	((yyvsp[(2) - (6)].str),"puts") && strcmp((yyvsp[(2) - (6)].str),"putchar") && strcmp((yyvsp[(2) - (6)].str),"clearerr") && strcmp((yyvsp[(2) - (6)].str),"getw") && strcmp((yyvsp[(2) - (6)].str),"putw") && strcmp((yyvsp[(2) - (6)].str),"putc") && strcmp((yyvsp[(2) - (6)].str),"rewind") && strcmp((yyvsp[(2) - (6)].str),"sprint") && strcmp((yyvsp[(2) - (6)].str),"sscanf") && strcmp((yyvsp[(2) - (6)].str),"remove") && strcmp((yyvsp[(2) - (6)].str),"fflush")))
		{
			printf("Error : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (6)].str),printline());errc++;
		}
		else
		{
			insert((yyvsp[(2) - (6)].str),FUNCTION);
			insert((yyvsp[(2) - (6)].str),(yyvsp[(1) - (6)].ival));
	                for(j=0;j<=k;j++)
        	        {
				insertp((yyvsp[(2) - (6)].str),plist[j]);
			}
	                k=-1;
		}
	 }
    break;

  case 10:
#line 85 "semantic.y"
    { plist[++k]=(yyvsp[(1) - (2)].ival); insert((yyvsp[(2) - (2)].str),(yyvsp[(1) - (2)].ival)); insertscope((yyvsp[(2) - (2)].str),i); }
    break;

  case 23:
#line 106 "semantic.y"
    {
					if(!(strspn((yyvsp[(2) - (3)].str),"0123456789")==strlen((yyvsp[(2) - (3)].str))))
						storereturn(ct,FLOAT);
					else
						storereturn(ct,INT);
					ct++;
				}
    break;

  case 24:
#line 113 "semantic.y"
    { storereturn(ct,VOID); ct++; }
    break;

  case 25:
#line 114 "semantic.y"
    {
                          int sct=returnscope((yyvsp[(2) - (3)].str),stack[top-1]);
		          int type=returntype((yyvsp[(2) - (3)].str),sct);
                          if (type==259) storereturn(ct,FLOAT);
                          else storereturn(ct,INT);
                          ct++;
                         }
    break;

  case 32:
#line 133 "semantic.y"
    {loop=1;}
    break;

  case 33:
#line 133 "semantic.y"
    {loop=0;}
    break;

  case 35:
#line 136 "semantic.y"
    {loop=1;}
    break;

  case 36:
#line 136 "semantic.y"
    {loop=0;}
    break;

  case 53:
#line 158 "semantic.y"
    {
				int sct=returnscope((yyvsp[(1) - (3)].str),stack[top-1]);
				int type=returntype((yyvsp[(1) - (3)].str),sct);
				if((!(strspn((yyvsp[(3) - (3)].str),"0123456789")==strlen((yyvsp[(3) - (3)].str)))) && type==258)
				{
					printf("\nError : Type Mismatch : Line %d\n",printline());
					errc++;
				}
		                else if (type==273)  
				{
					printf("\nError : Type Mismatch : Line %d\n",printline());
					errc++;
				}
				if(!lookup((yyvsp[(1) - (3)].str)))
				{
					int currscope=stack[top-1];
					int scope=returnscope((yyvsp[(1) - (3)].str),currscope);
					if((scope<=currscope && end[scope]==0) && !(scope==0))
					check_scope_update((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),currscope);
				}
		}
    break;

  case 54:
#line 180 "semantic.y"
    {
				if(lookup((yyvsp[(1) - (3)].str)))
					printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[(1) - (3)].str),printline()); errc++;
		}
    break;

  case 57:
#line 186 "semantic.y"
    {
		if(lookup((yyvsp[(1) - (1)].str)))
			{ printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[(1) - (1)].str),printline()); errc++; }
	   }
    break;

  case 58:
#line 190 "semantic.y"
    {
			                int sct=returnscope((yyvsp[(1) - (6)].str),stack[top-1]);
					int type=returntype((yyvsp[(1) - (6)].str),sct);
        			        int rtype;
        			        rtype=returntypef((yyvsp[(3) - (6)].str)); int ch=0;
					if(rtype!=type)
					{
						printf("\nError : Type Mismatch : Line %d\n",printline()); 
						errc++;
					}
					if(!lookup((yyvsp[(1) - (6)].str)))
					{
		  				for(j=0;j<=l;j++)
                  				{
							ch = ch+checkp((yyvsp[(3) - (6)].str),flist[j],j);
						}
			                	if(ch>0) 
						{	 
							printf("\nError : Parameter Type Mistake or Function undeclared : Line %d\n",printline()); 
							errc++;
						}
			                	l=-1;
					}
		}
    break;

  case 59:
#line 214 "semantic.y"
    {		
		                int sct=returnscope((yyvsp[(1) - (4)].str),stack[top-1]);
				int type=returntype((yyvsp[(1) - (4)].str),sct); int ch=0;
				if(!lookup((yyvsp[(1) - (4)].str)))
				{
				  for(j=0;j<=l;j++)
               			  {
					ch = ch+checkp((yyvsp[(1) - (4)].str),flist[j],j);
				  }
		                  if(ch>0) 
				  { 
					printf("\nError : Parameter Type Mistake or Required Function undeclared : Line %d\n",printline()); 
					errc++;
				  }
                  		  l=-1;
				}
                		else 
				{
					printf("\nUndeclared Function %s : Line %d\n",(yyvsp[(1) - (4)].str),printline());
					errc++;
				}
	}
    break;

  case 63:
#line 245 "semantic.y"
    {
                if(lookup((yyvsp[(1) - (1)].str)))
	        {
			printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[(1) - (1)].str),printline());
			errc++;
		}
                else
                {
                	int sct=returnscope((yyvsp[(1) - (1)].str),stack[top-1]);
                	flist[++l]=returntype((yyvsp[(1) - (1)].str),sct);
                }
	}
    break;

  case 64:
#line 259 "semantic.y"
    { c=0; }
    break;

  case 66:
#line 264 "semantic.y"
    {
		if(c==0)							
		{
			c=1;
			int sct=returnscope((yyvsp[(1) - (1)].str),stack[top-1]);
			b=returntype((yyvsp[(1) - (1)].str),sct);
		}
		else
		{
			int sct1=returnscope((yyvsp[(1) - (1)].str),stack[top-1]);
			if(b!=returntype((yyvsp[(1) - (1)].str),sct1)){}
				{printf("\nError : Type Mismatch : Line %d\n",printline());errc++;}
		}
	}
    break;

  case 78:
#line 294 "semantic.y"
    {
		if((!(strspn((yyvsp[(4) - (5)].str),"0123456789")==strlen((yyvsp[(4) - (5)].str)))) && (yyvsp[(1) - (5)].ival)==258)			
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			errc++;
		}
                else if ((yyvsp[(1) - (5)].ival)==273)  
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			errc++;
		}
		if(!lookup((yyvsp[(2) - (5)].str)))
		{
			int currscope=stack[top-1];
			int previous_scope=returnscope((yyvsp[(2) - (5)].str),currscope);
			if(currscope==previous_scope)
			{
				printf("\nError : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (5)].str),printline());
				errc++;
			}
			else
			{
				insert_dup((yyvsp[(2) - (5)].str),(yyvsp[(1) - (5)].ival),currscope);
				check_scope_update((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].str),stack[top-1]);
			}
		}
		else
		{
			int scope=stack[top-1];
			insert((yyvsp[(2) - (5)].str),(yyvsp[(1) - (5)].ival));
			insertscope((yyvsp[(2) - (5)].str),scope);
			check_scope_update((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].str),stack[top-1]);
		}
	}
    break;

  case 79:
#line 329 "semantic.y"
    {
		if(!lookup((yyvsp[(1) - (2)].str)))
		{
			int currscope=stack[top-1];
			int scope=returnscope((yyvsp[(1) - (2)].str),currscope);
			int type=returntype((yyvsp[(1) - (2)].str),scope);
			if(!(scope<=currscope && end[scope]==0) || scope==0 && type!=271)
			{
				printf("\nError : Variable %s out of scope : Line %d\n",(yyvsp[(1) - (2)].str),printline());
				errc++;
			}
		}
		else
		{
			printf("\nError : Undeclared Variable %s : Line %d\n",(yyvsp[(1) - (2)].str),printline());
			errc++;
		}
	}
    break;

  case 80:
#line 348 "semantic.y"
    {
        	if(!lookup((yyvsp[(2) - (3)].str)))
		{
			int currscope=stack[top-1];
			int previous_scope=returnscope((yyvsp[(2) - (3)].str),currscope);
			if(currscope==previous_scope)
			{
				printf("\nError : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (3)].str),printline());
				errc++;
			}
			else
			{
				insert_dup((yyvsp[(2) - (3)].str),(yyvsp[(1) - (3)].ival),currscope);
			}
		}
		else
		{
			int scope=stack[top-1];
			insert((yyvsp[(2) - (3)].str),(yyvsp[(1) - (3)].ival));
			insertscope((yyvsp[(2) - (3)].str),scope);
		}
	}
    break;

  case 81:
#line 370 "semantic.y"
    {
                       int itype;
                       if(!(strspn((yyvsp[(4) - (6)].str),"0123456789")==strlen((yyvsp[(4) - (6)].str)))) { itype=259; } else itype = 258;
                       if(itype!=258)
                       { printf("\nError : Array index must be of type int : Line %d\n",printline());errc++;}
                       if(atoi((yyvsp[(4) - (6)].str))<=0)
                       { printf("\nError : Array index must be of type int > 0 : Line %d\n",printline());errc++;}
                       if(!lookup((yyvsp[(2) - (6)].str)))
		       {
			int currscope=stack[top-1];
			int previous_scope=returnscope((yyvsp[(2) - (6)].str),currscope);
			if(currscope==previous_scope)
				{printf("\nError : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (6)].str),printline());errc++;}
			else
			{

				insert_dup((yyvsp[(2) - (6)].str),ARRAY,currscope);
                                insert_by_scope((yyvsp[(2) - (6)].str),(yyvsp[(1) - (6)].ival),currscope);	
                                if (itype==258) {insert_index((yyvsp[(2) - (6)].str),(yyvsp[(4) - (6)].str));}
			}
		      }
		      else
		      {
			int scope=stack[top-1];
                        insert((yyvsp[(2) - (6)].str),ARRAY);
			insert((yyvsp[(2) - (6)].str),(yyvsp[(1) - (6)].ival));
			insertscope((yyvsp[(2) - (6)].str),scope);
                        if (itype==258) {insert_index((yyvsp[(2) - (6)].str),(yyvsp[(4) - (6)].str));}
		      }

		    }
    break;


/* Line 1267 of yacc.c.  */
#line 1908 "y.tab.c"
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


#line 405 "semantic.y"


#include "lex.yy.c"
#include<ctype.h>
int main(int argc, char *argv[])
{
	yyin =fopen(argv[1],"r");
	if(!yyparse()&& errc<=0)
	{
		printf("\nParsing Completed\n");
		display();
	}
	else
	{
		printf("\nParsing Failed\n");
                display();
	}
	fclose(yyin);
	return 0;
}

yyerror(char *s)
{
	printf("\nLine %d : %s %s\n",yylineno,s,yytext);
}

int printline()
{
	return yylineno;
}
void push()
{
	stack[top]=i;
	i++;
	top++;
	return;
}
void pop()
{
	top--;
	end[stack[top]]=1;
	stack[top]=0;
	return;
}

