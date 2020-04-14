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
     MAIN = 264,
     WHILE = 265,
     IF = 266,
     RETURN = 267,
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
     DEC = 282,
     AND = 283,
     OR = 284,
     NEQ = 285,
     UMINUS = 286
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define VOID 260
#define ID 261
#define NUM 262
#define REAL 263
#define MAIN 264
#define WHILE 265
#define IF 266
#define RETURN 267
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
#define AND 283
#define OR 284
#define NEQ 285
#define UMINUS 286




/* Copy the first part of user declarations.  */
#line 1 "icg.y"

#include <stdio.h>
#include <stdlib.h>
#include "SymbolTable.c"

int g_addr = 100;
int i=1,lnum1=0;
int stack[100],index1=0,end[100],arr[10],ct,c,b,fl,top=0,label[20],label_num=0,ltop=0;
char st1[100][10];
char temp_count[2]="0";
int plist[100],flist[100],k=-1,errc=0,j=0;
char temp[2]="t";
char null[2]=" ";
void yyerror(char *s);
int printline();
extern int yylineno;
void scope_start()
{
	stack[index1]=i;
	i++;
	index1++;
	return;
}
void scope_end()
{
	index1--;
	end[stack[index1]]=1;
	stack[index1]=0;
	return;
}
void if1()
{
	label_num++;
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("\n%s = not %s\n",temp,st1[top]);
 	printf("if %s goto L%d\n",temp,label_num);
	temp_count[0]++;
	label[++ltop]=label_num;

}
void if2()
{
	label_num++;
	printf("\ngoto L%d\n",label_num);
	printf("L%d: \n",label[ltop--]);
	label[++ltop]=label_num;
}
void if3()
{
	printf("\nL%d:\n",label[ltop--]);
}
void while1()
{
	label_num++;
	label[++ltop]=label_num;
	printf("\nL%d:\n",label_num);
}
void while2()
{
	label_num++;
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("\n%s = not %s\n",temp,st1[top--]);
 	printf("if %s goto L%d\n",temp,label_num);
	temp_count[0]++;
	label[++ltop]=label_num;
}
void while3()
{
	int y=label[ltop--];
	printf("\ngoto L%d\n",label[ltop--]);
	printf("L%d:\n",y);
}
void dowhile1()
{
	label_num++;
	label[++ltop]=label_num;
	printf("\nL%d:\n",label_num);
}
void dowhile2()
{
 	printf("\nif %s goto L%d\n",st1[top--],label[ltop--]);
}
void for1()
{
	label_num++;
	label[++ltop]=label_num;
	printf("\nL%d:\n",label_num);
}
void for2()
{
	label_num++;
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("\n%s = not %s\n",temp,st1[top--]);
 	printf("if %s goto L%d\n",temp,label_num);
	temp_count[0]++;
	label[++ltop]=label_num;
	label_num++;
	printf("goto L%d\n",label_num);
	label[++ltop]=label_num;
	label_num++;
	printf("L%d:\n",label_num);
	label[++ltop]=label_num;
}
void for3()
{
	printf("\ngoto L%d\n",label[ltop-3]);
	printf("L%d:\n",label[ltop-1]);
}
void for4()
{
	printf("\ngoto L%d\n",label[ltop]);
	printf("L%d:\n",label[ltop-2]);
	ltop-=4;
}
void push(char *a)
{
	strcpy(st1[++top],a);
}
void array1()
{
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("\n%s = %s\n",temp,st1[top]);
	strcpy(st1[top],temp);
	temp_count[0]++;
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("%s = %s [ %s ] \n",temp,st1[top-1],st1[top]);
	top--;
	strcpy(st1[top],temp);
	temp_count[0]++;
}
void codegen()
{
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("\n%s = %s %s %s\n",temp,st1[top-2],st1[top-1],st1[top]);
	top-=2;
	strcpy(st1[top],temp);
	temp_count[0]++;
}
void codegen_umin()
{
	strcpy(temp,"t");
	strcat(temp,temp_count);
	printf("\n%s = -%s\n",temp,st1[top]);
	top--;
	strcpy(st1[top],temp);
	temp_count[0]++;
}
void codegen_assign()
{
	printf("\n%s = %s\n",st1[top-2],st1[top]);
	top-=2;
}


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
#line 172 "icg.y"
{
		int ival;
		char *str;
	}
/* Line 187 of yacc.c.  */
#line 323 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 336 "y.tab.c"

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,    37,    35,    41,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      30,    33,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    32,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    13,    19,    26,    30,
      32,    35,    37,    39,    41,    45,    48,    49,    51,    53,
      58,    60,    62,    64,    68,    71,    75,    77,    83,    85,
      86,    87,    97,    98,    99,   100,   113,   114,   115,   124,
     127,   128,   129,   130,   138,   142,   146,   150,   154,   156,
     158,   159,   160,   161,   168,   172,   176,   178,   180,   182,
     184,   185,   186,   187,   196,   199,   206,   212,   219,   224,
     226,   227,   233,   234,   239,   240,   245,   247,   248,   249,
     255,   256,   257,   263,   264,   265,   271,   272,   273,   279,
     280,   281,   287,   288,   289,   295,   296,   297,   303,   304,
     305,   311,   312,   313,   319,   321,   322,   327,   328,   333,
     335,   339,   340,   344,   346
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    48,    -1,     9,    48,    -1,    76,
      48,    -1,    -1,    52,     6,    39,    40,    53,    -1,    52,
       6,    39,    50,    40,    53,    -1,    50,    41,    51,    -1,
      51,    -1,    52,     6,    -1,     3,    -1,     4,    -1,     5,
      -1,    42,    54,    43,    -1,    54,    55,    -1,    -1,    76,
      -1,    63,    -1,     6,    39,    40,    44,    -1,    67,    -1,
      56,    -1,    59,    -1,    12,    75,    44,    -1,    12,    44,
      -1,    12,     6,    44,    -1,    44,    -1,    15,    39,    14,
      40,    44,    -1,    53,    -1,    -1,    -1,    17,    57,    53,
      10,    39,    82,    40,    58,    44,    -1,    -1,    -1,    -1,
      22,    39,    82,    60,    44,    82,    61,    44,    82,    62,
      40,    53,    -1,    -1,    -1,    11,    39,    82,    40,    64,
      53,    65,    66,    -1,    19,    53,    -1,    -1,    -1,    -1,
      10,    68,    39,    82,    40,    69,    53,    -1,     6,    33,
      75,    -1,     6,    35,    70,    -1,     6,    41,    70,    -1,
      75,    41,    70,    -1,     6,    -1,    75,    -1,    -1,    -1,
      -1,     6,    72,    33,    73,    82,    74,    -1,     6,    41,
      71,    -1,    75,    41,    71,    -1,     6,    -1,    75,    -1,
       7,    -1,     8,    -1,    -1,    -1,    -1,    52,     6,    77,
      33,    78,    82,    79,    44,    -1,    71,    44,    -1,    52,
       6,    45,    70,    46,    44,    -1,     6,    45,    71,    46,
      44,    -1,    20,     6,    42,    76,    43,    44,    -1,    20,
       6,     6,    44,    -1,     1,    -1,    -1,     6,    81,    45,
      82,    46,    -1,    -1,    82,    35,    83,   103,    -1,    -1,
      82,    36,    84,   103,    -1,   103,    -1,    -1,    -1,     6,
      85,    13,    86,    82,    -1,    -1,    -1,     6,    87,    23,
      88,    82,    -1,    -1,    -1,     6,    89,    24,    90,    82,
      -1,    -1,    -1,     6,    91,    32,    92,    82,    -1,    -1,
      -1,     6,    93,    28,    94,    82,    -1,    -1,    -1,     6,
      95,    29,    96,    82,    -1,    -1,    -1,     6,    97,    30,
      98,    82,    -1,    -1,    -1,     6,    99,    31,   100,    82,
      -1,    -1,    -1,     6,   101,    33,   102,    82,    -1,    80,
      -1,    -1,   103,    37,   104,   106,    -1,    -1,   103,    38,
     105,   106,    -1,   106,    -1,    39,    82,    40,    -1,    -1,
      36,   107,   106,    -1,     6,    -1,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   179,   180,   181,   184,   203,   227,   228,
     231,   234,   235,   236,   239,   242,   243,   246,   247,   248,
     249,   250,   251,   252,   258,   259,   268,   269,   270,   273,
     273,   273,   276,   276,   276,   276,   279,   279,   279,   282,
     283,   286,   286,   286,   289,   290,   291,   292,   293,   294,
     297,   297,   297,   297,   314,   318,   319,   323,   326,   327,
     330,   330,   330,   330,   361,   373,   403,   404,   408,   412,
     415,   415,   418,   418,   419,   419,   420,   421,   421,   421,
     422,   422,   422,   423,   423,   423,   424,   424,   424,   425,
     425,   425,   426,   426,   426,   427,   427,   427,   428,   428,
     428,   429,   429,   429,   430,   432,   432,   433,   433,   434,
     436,   437,   437,   438,   439
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "VOID", "ID", "NUM",
  "REAL", "MAIN", "WHILE", "IF", "RETURN", "LE", "STRING", "PRINT",
  "FUNCTION", "DO", "ARRAY", "ELSE", "STRUCT", "STRUCT_VAR", "FOR", "GE",
  "EQ", "NE", "INC", "DEC", "AND", "OR", "'<'", "'>'", "NEQ", "'='",
  "UMINUS", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "','", "'{'", "'}'",
  "';'", "'['", "']'", "$accept", "START", "FUNC", "PLIST", "PARAMETER",
  "TYPE", "CSTMT", "STMTLIST", "STMT", "DOWHILE", "@1", "@2", "for", "@3",
  "@4", "@5", "if", "@6", "@7", "else", "while", "@8", "@9", "ASSIGN",
  "ASSIGN1", "@10", "@11", "@12", "CONSTTYPE", "DECLARE", "@13", "@14",
  "@15", "array", "@16", "E", "@17", "@18", "@19", "@20", "@21", "@22",
  "@23", "@24", "@25", "@26", "@27", "@28", "@29", "@30", "@31", "@32",
  "@33", "@34", "@35", "@36", "T", "@37", "@38", "F", "@39", 0
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
      60,    62,   285,    61,   286,    43,    45,    42,    47,    40,
      41,    44,   123,   125,    59,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    49,    49,    50,    50,
      51,    52,    52,    52,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    57,
      58,    56,    60,    61,    62,    59,    64,    65,    63,    66,
      66,    68,    69,    67,    70,    70,    70,    70,    70,    70,
      72,    73,    74,    71,    71,    71,    71,    71,    75,    75,
      77,    78,    79,    76,    76,    76,    76,    76,    76,    76,
      81,    80,    83,    82,    84,    82,    82,    85,    86,    82,
      87,    88,    82,    89,    90,    82,    91,    92,    82,    93,
      94,    82,    95,    96,    82,    97,    98,    82,    99,   100,
      82,   101,   102,    82,    82,   104,   103,   105,   103,   103,
     106,   107,   106,   106,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     5,     6,     3,     1,
       2,     1,     1,     1,     3,     2,     0,     1,     1,     4,
       1,     1,     1,     3,     2,     3,     1,     5,     1,     0,
       0,     9,     0,     0,     0,    12,     0,     0,     8,     2,
       0,     0,     0,     7,     3,     3,     3,     3,     1,     1,
       0,     0,     0,     6,     3,     3,     1,     1,     1,     1,
       0,     0,     0,     8,     2,     6,     5,     6,     4,     1,
       0,     5,     0,     4,     0,     4,     1,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     1,     0,     4,     0,     4,     1,
       3,     0,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    69,    11,    12,    13,    50,    58,    59,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     3,
       0,     1,     2,    60,    64,     0,     4,    56,    54,     0,
      51,     0,     0,     0,     0,     0,    55,     0,     0,    68,
       0,     0,     0,     0,     9,     0,    48,     0,    49,    61,
      66,   113,   111,     0,   114,   104,    52,    76,   109,    60,
       0,    16,     6,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    74,    53,   105,   107,    67,
       0,     7,     8,    44,    45,    46,    65,    47,    62,     0,
      78,    81,    84,    87,    90,    93,    96,    99,   102,   113,
     112,   110,     0,     0,     0,     0,    50,    41,     0,     0,
       0,    29,     0,    14,    26,    28,    15,    21,    22,    18,
      20,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    75,   106,   108,     0,     0,     0,
       0,    24,     0,     0,     0,     0,    63,    71,    79,    82,
      85,    88,    91,    94,    97,   100,   103,     0,     0,     0,
      25,    23,     0,     0,    32,    19,     0,    36,     0,     0,
       0,    42,     0,    27,     0,     0,     0,    37,     0,    33,
      43,    40,    30,     0,     0,    38,     0,     0,    39,    31,
      34,     0,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    43,    44,    12,    62,    90,   126,   127,
     154,   196,   128,   180,   193,   201,   129,   182,   191,   195,
     130,   148,   186,    47,    13,    18,    38,    86,    54,    15,
      35,    71,   132,    55,    72,    56,   112,   113,    73,   134,
      74,   135,    75,   136,    76,   137,    77,   138,    78,   139,
      79,   140,    80,   141,    81,   142,    57,   114,   115,    58,
      82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int16 yypact[] =
{
     167,   -66,   -66,   -66,   -66,    82,   -66,   -66,   167,    20,
      31,   167,    42,    10,    23,   167,    70,    70,    58,   -66,
       3,   -66,   -66,    -3,   -66,    70,   -66,    25,   -66,    71,
     -66,    55,   187,     7,   129,    95,   -66,    98,    17,   -66,
     145,   115,   118,    28,   -66,   155,    22,   117,   124,   -66,
     -66,    77,   -66,    17,   -66,   -66,    44,    66,   -66,   121,
     125,   -66,   -66,   118,   135,   -66,   112,   129,   129,   133,
     129,    17,   134,   165,   157,   158,   149,   161,   154,   166,
     168,   164,    26,   -21,   -66,   -66,   -66,   -66,   -66,   -66,
     142,   -66,   -66,   -66,   -66,   -66,   -66,   -66,    44,    17,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,    26,    26,    26,    26,    53,   -66,   159,     0,
     162,   -66,   163,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   156,    -8,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    66,    66,   -66,   -66,   169,   171,    17,
     160,   -66,   170,   189,   118,    17,   -66,   -66,    44,    44,
      44,    44,    44,    44,    44,    44,    44,   172,    17,    76,
     -66,   -66,   173,   195,    44,   -66,    78,   -66,   174,   176,
     175,   -66,   118,   -66,    17,    17,   118,   -66,    94,    44,
     -66,   192,   -66,   177,   118,   -66,   178,    17,   -66,   -66,
      44,   180,   118,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,    59,   -66,   -66,   144,   -29,   -61,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -27,    35,   -66,   -66,   -66,     5,   -31,
     -66,   -66,   -66,   -66,   -66,   -53,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,    43,   -66,   -66,   -65,
     -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -102
static const yytype_int16 yytable[] =
{
      83,    41,    91,    40,    45,    14,   150,     6,     7,    31,
       2,     3,     4,    14,    84,    85,    14,   110,    98,   111,
      14,    14,    14,    51,     6,     7,    20,    84,    85,   125,
      14,    21,   109,     6,     7,    45,    33,    14,   157,    48,
      94,    95,    34,    97,   151,    32,   133,    42,    23,   145,
     146,    28,    29,    52,    24,    66,    53,    67,   -50,   131,
      36,    40,    52,    68,    25,    53,    16,    19,    63,    64,
      22,    93,    48,    48,    26,    48,    27,     6,     7,    84,
      85,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     -77,    30,   147,   173,    16,    14,   169,   -56,    17,    39,
     -80,   -83,   174,    87,    88,   -89,   -92,   -95,   -98,   -86,
    -101,    84,    85,    84,    85,   176,   177,    37,   181,     6,
       7,   187,   -70,    16,   152,   190,   -56,    17,    49,    84,
      85,   188,   189,   198,   192,    46,     6,     7,     2,     3,
       4,   203,    50,     1,   200,     2,     3,     4,   116,     6,
       7,    59,   117,   118,   119,   143,   144,   120,    60,   121,
      61,    65,     9,    69,   122,    70,    34,    -5,     1,    89,
       2,     3,     4,     5,     6,     7,     8,    96,   100,    99,
     101,   103,   102,   105,    61,   123,   124,     9,     1,   104,
       2,     3,     4,     5,     6,     7,   106,   108,   149,   107,
     156,   153,   155,   172,   170,   179,     0,     9,    92,   167,
     168,   194,     0,   178,   171,   184,   175,     0,   183,   185,
     202,   197,   199
};

static const yytype_int16 yycheck[] =
{
      53,    32,    63,    32,    33,     0,     6,     7,     8,     6,
       3,     4,     5,     8,    35,    36,    11,    82,    71,    40,
      15,    16,    17,     6,     7,     8,     6,    35,    36,    90,
      25,     0,     6,     7,     8,    64,    39,    32,    46,    34,
      67,    68,    45,    70,    44,    42,    99,    40,     6,   114,
     115,    16,    17,    36,    44,    33,    39,    35,    33,    90,
      25,    90,    36,    41,    41,    39,    41,     8,    40,    41,
      11,    66,    67,    68,    15,    70,     6,     7,     8,    35,
      36,   134,   135,   136,   137,   138,   139,   140,   141,   142,
      13,    33,    39,   154,    41,    90,   149,    44,    45,    44,
      23,    24,   155,    37,    38,    28,    29,    30,    31,    32,
      33,    35,    36,    35,    36,   168,    40,    46,    40,     7,
       8,   182,    45,    41,   119,   186,    44,    45,    33,    35,
      36,   184,   185,   194,    40,     6,     7,     8,     3,     4,
       5,   202,    44,     1,   197,     3,     4,     5,     6,     7,
       8,     6,    10,    11,    12,   112,   113,    15,    43,    17,
      42,     6,    20,    46,    22,    41,    45,     0,     1,    44,
       3,     4,     5,     6,     7,     8,     9,    44,    13,    45,
      23,    32,    24,    29,    42,    43,    44,    20,     1,    28,
       3,     4,     5,     6,     7,     8,    30,    33,    39,    31,
      44,    39,    39,    14,    44,    10,    -1,    20,    64,    40,
      39,    19,    -1,    40,    44,    39,    44,    -1,    44,    44,
      40,    44,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    20,
      48,    49,    52,    71,    75,    76,    41,    45,    72,    48,
       6,     0,    48,     6,    44,    41,    48,     6,    71,    71,
      33,     6,    42,    39,    45,    77,    71,    46,    73,    44,
      52,    76,    40,    50,    51,    52,     6,    70,    75,    33,
      44,     6,    36,    39,    75,    80,    82,   103,   106,     6,
      43,    42,    53,    40,    41,     6,    33,    35,    41,    46,
      41,    78,    81,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   107,    82,    35,    36,    74,    37,    38,    44,
      54,    53,    51,    75,    70,    70,    44,    70,    82,    45,
      13,    23,    24,    32,    28,    29,    30,    31,    33,     6,
     106,    40,    83,    84,   104,   105,     6,    10,    11,    12,
      15,    17,    22,    43,    44,    53,    55,    56,    59,    63,
      67,    76,    79,    82,    86,    88,    90,    92,    94,    96,
      98,   100,   102,   103,   103,   106,   106,    39,    68,    39,
       6,    44,    75,    39,    57,    39,    44,    46,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    40,    39,    82,
      44,    44,    14,    53,    82,    44,    82,    40,    40,    10,
      60,    40,    64,    44,    39,    44,    69,    53,    82,    82,
      53,    65,    40,    61,    19,    66,    58,    44,    53,    44,
      82,    62,    40,    53
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
#line 184 "icg.y"
    {
	  if(strcmp((yyvsp[(2) - (5)].str),"main")!=0)
	  {
		printf("goto F%d\n",lnum1);
	  }
	  if ((yyvsp[(1) - (5)].ival)!=returntype_func(ct))
	  {
		printf("\nError : Type mismatch : Line %d\n",printline());
	  }

	  if (!(strcmp((yyvsp[(2) - (5)].str),"printf") && strcmp((yyvsp[(2) - (5)].str),"scanf") && strcmp((yyvsp[(2) - (5)].str),"getc") && strcmp((yyvsp[(2) - (5)].str),"gets") && strcmp((yyvsp[(2) - (5)].str),"getchar") && strcmp((yyvsp[(2) - (5)].str),"puts") &&    strcmp((yyvsp[(2) - (5)].str),"putchar") && strcmp((yyvsp[(2) - (5)].str),"clearerr") && strcmp((yyvsp[(2) - (5)].str),"getw") && strcmp((yyvsp[(2) - (5)].str),"putw") && strcmp((yyvsp[(2) - (5)].str),"putc") && strcmp((yyvsp[(2) - (5)].str),"rewind") && strcmp((yyvsp[(2) - (5)].str),"sprint") && strcmp((yyvsp[(2) - (5)].str),"sscanf") && strcmp((yyvsp[(2) - (5)].str),"remove") && strcmp((yyvsp[(2) - (5)].str),"fflush")))
		printf("Error : Type mismatch in redeclaration of %s : Line %d\n",(yyvsp[(2) - (5)].str),printline());
	  else
	  {
		insert((yyvsp[(2) - (5)].str),FUNCTION);
		insert((yyvsp[(2) - (5)].str),(yyvsp[(1) - (5)].ival));
		g_addr+=4;
	  }
	  }
    break;

  case 7:
#line 203 "icg.y"
    {
	  if ((yyvsp[(1) - (6)].ival)!=returntype_func(ct))
	  {
		printf("\nError : Type mismatch : Line %d\n",printline()); errc++;
	  }

	  if (!(strcmp((yyvsp[(2) - (6)].str),"printf") && strcmp((yyvsp[(2) - (6)].str),"scanf") && strcmp((yyvsp[(2) - (6)].str),"getc") && strcmp((yyvsp[(2) - (6)].str),"gets") && strcmp((yyvsp[(2) - (6)].str),"getchar") && strcmp	((yyvsp[(2) - (6)].str),"puts") && strcmp((yyvsp[(2) - (6)].str),"putchar") && strcmp((yyvsp[(2) - (6)].str),"clearerr") && strcmp((yyvsp[(2) - (6)].str),"getw") && strcmp((yyvsp[(2) - (6)].str),"putw") && strcmp((yyvsp[(2) - (6)].str),"putc") && strcmp((yyvsp[(2) - (6)].str),"rewind") && strcmp((yyvsp[(2) - (6)].str),"sprint") && strcmp((yyvsp[(2) - (6)].str),"sscanf") && strcmp((yyvsp[(2) - (6)].str),"remove") && strcmp((yyvsp[(2) - (6)].str),"fflush")))
	  {
		printf("Error : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (6)].str),printline());
		errc++;
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
#line 231 "icg.y"
    {plist[++k]=(yyvsp[(1) - (2)].ival);insert((yyvsp[(2) - (2)].str),(yyvsp[(1) - (2)].ival));insertscope((yyvsp[(2) - (2)].str),i);}
    break;

  case 23:
#line 252 "icg.y"
    {
				if(!(strspn((yyvsp[(2) - (3)].str),"0123456789")==strlen((yyvsp[(2) - (3)].str))))
					storereturn(ct,FLOAT);
				else
					storereturn(ct,INT); ct++;
          		    }
    break;

  case 24:
#line 258 "icg.y"
    { storereturn(ct,VOID); ct++; }
    break;

  case 25:
#line 259 "icg.y"
    {
                       int sct=returnscope((yyvsp[(2) - (3)].str),stack[top-1]);
		       int type=returntype((yyvsp[(2) - (3)].str),sct);
                       if(type==259) 
				storereturn(ct,FLOAT);
          	       else 
				storereturn(ct,INT);
          	       ct++;
                     }
    break;

  case 29:
#line 273 "icg.y"
    { dowhile1(); }
    break;

  case 30:
#line 273 "icg.y"
    { dowhile2(); }
    break;

  case 32:
#line 276 "icg.y"
    { for1(); }
    break;

  case 33:
#line 276 "icg.y"
    { for2(); }
    break;

  case 34:
#line 276 "icg.y"
    { for3(); }
    break;

  case 35:
#line 276 "icg.y"
    { for4(); }
    break;

  case 36:
#line 279 "icg.y"
    { if1(); }
    break;

  case 37:
#line 279 "icg.y"
    { if2(); }
    break;

  case 39:
#line 282 "icg.y"
    { if3(); }
    break;

  case 41:
#line 286 "icg.y"
    { while1(); }
    break;

  case 42:
#line 286 "icg.y"
    { while2(); }
    break;

  case 43:
#line 286 "icg.y"
    { while3(); }
    break;

  case 50:
#line 297 "icg.y"
    { push((yyvsp[(1) - (1)].str)); }
    break;

  case 51:
#line 297 "icg.y"
    { strcpy(st1[++top],"="); }
    break;

  case 52:
#line 297 "icg.y"
    { codegen_assign(); }
    break;

  case 53:
#line 298 "icg.y"
    {
		    int sct=returnscope((yyvsp[(1) - (6)].str),stack[index1-1]);
		    int type=returntype((yyvsp[(1) - (6)].str),sct);
		    if((!(strspn((yyvsp[(5) - (6)].str),"0123456789")==strlen((yyvsp[(5) - (6)].str)))) && type==258 && fl==0)
			  printf("\nError : Type Mismatch : Line %d\n",printline());
		    if(!lookup((yyvsp[(1) - (6)].str)))
		    {
			  int currscope=stack[index1-1];
			  int scope=returnscope((yyvsp[(1) - (6)].str),currscope);
			  if((scope<=currscope && end[scope]==0) && !(scope==0))
			  {
				check_scope_update((yyvsp[(1) - (6)].str),(yyvsp[(5) - (6)].str),currscope);
			  }
		    }
		}
    break;

  case 54:
#line 314 "icg.y"
    {
				if(lookup((yyvsp[(1) - (3)].str)))
					printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[(1) - (3)].str),printline());
			    }
    break;

  case 56:
#line 319 "icg.y"
    {
		if(lookup((yyvsp[(1) - (1)].str)))
			printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[(1) - (1)].str),printline());
	      }
    break;

  case 60:
#line 330 "icg.y"
    { push((yyvsp[(2) - (2)].str)); }
    break;

  case 61:
#line 330 "icg.y"
    { strcpy(st1[++top],"="); }
    break;

  case 62:
#line 330 "icg.y"
    { codegen_assign(); }
    break;

  case 63:
#line 331 "icg.y"
    {
		if((!(strspn((yyvsp[(6) - (8)].str),"0123456789")==strlen((yyvsp[(6) - (8)].str)))) && (yyvsp[(1) - (8)].ival)==258 && (fl==0))
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			fl=1;
		}
		if(!lookup((yyvsp[(2) - (8)].str)))
		{
			int currscope=stack[index1-1];
			int previous_scope=returnscope((yyvsp[(2) - (8)].str),currscope);
			if(currscope==previous_scope)
				printf("\nError : Redeclaration of %s : Line %d\n",(yyvsp[(2) - (8)].str),printline());
			else
			{
				insert_dup((yyvsp[(2) - (8)].str),(yyvsp[(1) - (8)].ival),currscope);
				check_scope_update((yyvsp[(2) - (8)].str),(yyvsp[(6) - (8)].str),stack[index1-1]);
				int sg=returnscope((yyvsp[(2) - (8)].str),stack[index1-1]);
				g_addr+=4;
			}
		}
		else
		{
			int scope=stack[index1-1];
			insert((yyvsp[(2) - (8)].str),(yyvsp[(1) - (8)].ival));
			insertscope((yyvsp[(2) - (8)].str),scope);
			check_scope_update((yyvsp[(2) - (8)].str),(yyvsp[(6) - (8)].str),stack[index1-1]);
			g_addr+=4;
		}
	  }
    break;

  case 64:
#line 361 "icg.y"
    {
				if(!lookup((yyvsp[(1) - (2)].str)))
				{
					int currscope=stack[index1-1];
					int scope=returnscope((yyvsp[(1) - (2)].str),currscope);
					if(!(scope<=currscope && end[scope]==0) || scope==0)
						printf("\nError : Variable %s out of scope : Line %d\n",(yyvsp[(1) - (2)].str),printline());
				}
				else
					printf("\nError : Undeclared Variable %s : Line %d\n",(yyvsp[(1) - (2)].str),printline());
			}
    break;

  case 65:
#line 373 "icg.y"
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

  case 67:
#line 404 "icg.y"
    {
						insert((yyvsp[(2) - (6)].str),STRUCT);
						g_addr+=4;
						}
    break;

  case 68:
#line 408 "icg.y"
    {
				insert((yyvsp[(3) - (4)].str),STRUCT_VAR);
				g_addr+=4;
				}
    break;

  case 70:
#line 415 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 72:
#line 418 "icg.y"
    {strcpy(st1[++top],"+");}
    break;

  case 73:
#line 418 "icg.y"
    {codegen();}
    break;

  case 74:
#line 419 "icg.y"
    {strcpy(st1[++top],"-");}
    break;

  case 75:
#line 419 "icg.y"
    {codegen();}
    break;

  case 77:
#line 421 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 78:
#line 421 "icg.y"
    {strcpy(st1[++top],"<=");}
    break;

  case 79:
#line 421 "icg.y"
    {codegen();}
    break;

  case 80:
#line 422 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 81:
#line 422 "icg.y"
    {strcpy(st1[++top],">=");}
    break;

  case 82:
#line 422 "icg.y"
    {codegen();}
    break;

  case 83:
#line 423 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 84:
#line 423 "icg.y"
    {strcpy(st1[++top],"==");}
    break;

  case 85:
#line 423 "icg.y"
    {codegen();}
    break;

  case 86:
#line 424 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 87:
#line 424 "icg.y"
    {strcpy(st1[++top],"!=");}
    break;

  case 88:
#line 424 "icg.y"
    {codegen();}
    break;

  case 89:
#line 425 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 90:
#line 425 "icg.y"
    {strcpy(st1[++top],"&&");}
    break;

  case 91:
#line 425 "icg.y"
    {codegen();}
    break;

  case 92:
#line 426 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 93:
#line 426 "icg.y"
    {strcpy(st1[++top],"||");}
    break;

  case 94:
#line 426 "icg.y"
    {codegen();}
    break;

  case 95:
#line 427 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 96:
#line 427 "icg.y"
    {strcpy(st1[++top],"<");}
    break;

  case 97:
#line 427 "icg.y"
    {codegen();}
    break;

  case 98:
#line 428 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 99:
#line 428 "icg.y"
    {strcpy(st1[++top],">");}
    break;

  case 100:
#line 428 "icg.y"
    {codegen();}
    break;

  case 101:
#line 429 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;

  case 102:
#line 429 "icg.y"
    {strcpy(st1[++top],"=");}
    break;

  case 103:
#line 429 "icg.y"
    {codegen_assign();}
    break;

  case 104:
#line 430 "icg.y"
    {array1();}
    break;

  case 105:
#line 432 "icg.y"
    {strcpy(st1[++top],"*");}
    break;

  case 106:
#line 432 "icg.y"
    {codegen();}
    break;

  case 107:
#line 433 "icg.y"
    {strcpy(st1[++top],"/");}
    break;

  case 108:
#line 433 "icg.y"
    {codegen();}
    break;

  case 110:
#line 436 "icg.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 111:
#line 437 "icg.y"
    {strcpy(st1[++top],"-");}
    break;

  case 112:
#line 437 "icg.y"
    {codegen_umin();}
    break;

  case 113:
#line 438 "icg.y"
    {push((yyvsp[(1) - (1)].str));fl=1;}
    break;

  case 114:
#line 439 "icg.y"
    {push((yyvsp[(1) - (1)].str));}
    break;


/* Line 1267 of yacc.c.  */
#line 2240 "y.tab.c"
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


#line 442 "icg.y"


#include "lex.yy.c"
int main(int argc, char *argv[])
{
	yyin =fopen(argv[1],"r");
	yyparse();
	if(!yyparse())
	{
		printf("Parsing done\n");
		print();
	}
	else
	{
		printf("Error\n");
	}
	fclose(yyin);
	return 0;
}

void yyerror(char *s)
{
	printf("\nLine %d : %s %s\n",yylineno,s,yytext);
}
int printline()
{
	return yylineno;
}

