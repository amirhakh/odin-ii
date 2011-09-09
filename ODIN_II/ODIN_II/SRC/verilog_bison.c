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
     vSYMBOL_ID = 258,
     vNUMBER_ID = 259,
     vDELAY_ID = 260,
     vALWAYS = 261,
     vAND = 262,
     vASSIGN = 263,
     vBEGIN = 264,
     vCASE = 265,
     vDEFAULT = 266,
     vDEFINE = 267,
     vELSE = 268,
     vEND = 269,
     vENDCASE = 270,
     vENDMODULE = 271,
     vIF = 272,
     vINOUT = 273,
     vINPUT = 274,
     vMODULE = 275,
     vNAND = 276,
     vNEGEDGE = 277,
     vNOR = 278,
     vNOT = 279,
     vOR = 280,
     vOUTPUT = 281,
     vPARAMETER = 282,
     vPOSEDGE = 283,
     vREG = 284,
     vWIRE = 285,
     vXNOR = 286,
     vXOR = 287,
     vDEFPARAM = 288,
     voANDAND = 289,
     voOROR = 290,
     voLTE = 291,
     voGTE = 292,
     voSLEFT = 293,
     voSRIGHT = 294,
     voEQUAL = 295,
     voNOTEQUAL = 296,
     voCASEEQUAL = 297,
     voCASENOTEQUAL = 298,
     voXNOR = 299,
     voNAND = 300,
     voNOR = 301,
     vNOT_SUPPORT = 302,
     LOWER_THAN_ELSE = 303
   };
#endif
/* Tokens.  */
#define vSYMBOL_ID 258
#define vNUMBER_ID 259
#define vDELAY_ID 260
#define vALWAYS 261
#define vAND 262
#define vASSIGN 263
#define vBEGIN 264
#define vCASE 265
#define vDEFAULT 266
#define vDEFINE 267
#define vELSE 268
#define vEND 269
#define vENDCASE 270
#define vENDMODULE 271
#define vIF 272
#define vINOUT 273
#define vINPUT 274
#define vMODULE 275
#define vNAND 276
#define vNEGEDGE 277
#define vNOR 278
#define vNOT 279
#define vOR 280
#define vOUTPUT 281
#define vPARAMETER 282
#define vPOSEDGE 283
#define vREG 284
#define vWIRE 285
#define vXNOR 286
#define vXOR 287
#define vDEFPARAM 288
#define voANDAND 289
#define voOROR 290
#define voLTE 291
#define voGTE 292
#define voSLEFT 293
#define voSRIGHT 294
#define voEQUAL 295
#define voNOTEQUAL 296
#define voCASEEQUAL 297
#define voCASENOTEQUAL 298
#define voXNOR 299
#define voNAND 300
#define voNOR 301
#define vNOT_SUPPORT 302
#define LOWER_THAN_ELSE 303




/* Copy the first part of user declarations.  */
#line 1 "SRC/verilog_bison.y"

/*
Copyright (c) 2009 Peter Andrew Jamieson (jamieson.peter@gmail.com)

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/ 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "parse_making_ast.h"
 
#define PARSE {printf("here\n");}

#ifndef YYLINENO
int yylineno;
#define YYLINENO yylineno
#else
extern int yylineno;
#endif

void yyerror(const char *str);
int yywrap();
int yyparse();
int yylex(void);

 // RESPONCE in an error
void yyerror(const char *str)
{
	fprintf(stderr,"error in parsing: %s - on line number %d\n",str, yylineno);
	exit(-1);
}
 
// point of continued file reading
int yywrap()
{
	return 1;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 61 "SRC/verilog_bison.y"
{
	char *id_name;
	char *num_value;
	ast_node_t *node;
}
/* Line 193 of yacc.c.  */
#line 258 "SRC/verilog_bison.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 271 "SRC/verilog_bison.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,    72,     2,    59,    52,     2,
      60,    61,    57,    55,    70,    56,    73,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    69,
      53,    71,    54,    48,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    50,    63,    66,     2,     2,     2,
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
      45,    46,    47,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    15,    19,    28,
      38,    46,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,    73,    77,    81,    85,    89,    93,    97,
      99,   101,   108,   120,   129,   133,   137,   141,   145,   149,
     153,   157,   161,   165,   174,   182,   189,   195,   198,   204,
     214,   219,   228,   232,   234,   240,   242,   246,   248,   254,
     256,   260,   262,   265,   268,   274,   282,   289,   291,   295,
     300,   304,   309,   312,   314,   318,   322,   326,   329,   331,
     336,   340,   342,   344,   347,   350,   352,   355,   358,   361,
     364,   367,   370,   373,   376,   379,   382,   386,   390,   394,
     398,   402,   406,   410,   414,   418,   422,   426,   430,   434,
     438,   442,   446,   450,   454,   458,   462,   466,   470,   474,
     480,   484,   491,   498,   500,   502,   507,   514,   518,   522
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    -1,    77,    79,    -1,    77,    78,
      -1,    79,    -1,    78,    -1,    12,     3,     4,    -1,    20,
       3,    60,    87,    61,    69,    80,    16,    -1,    20,     3,
      60,    87,    70,    61,    69,    80,    16,    -1,    20,     3,
      60,    61,    69,    80,    16,    -1,    80,    81,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    89,    -1,    90,    -1,    92,    -1,    98,    -1,    27,
      87,    69,    -1,    19,    87,    69,    -1,    26,    87,    69,
      -1,    18,    87,    69,    -1,    30,    87,    69,    -1,    29,
      87,    69,    -1,    87,    70,    88,    -1,    88,    -1,     3,
      -1,    64,   109,    49,   109,    65,     3,    -1,    64,   109,
      49,   109,    65,     3,    64,   109,    49,   109,    65,    -1,
      64,   109,    49,   109,    65,     3,    71,   110,    -1,     3,
      71,   110,    -1,     8,   100,    69,    -1,     7,    91,    69,
      -1,    21,    91,    69,    -1,    23,    91,    69,    -1,    24,
      91,    69,    -1,    25,    91,    69,    -1,    31,    91,    69,
      -1,    32,    91,    69,    -1,     3,    60,   109,    70,   109,
      70,   109,    61,    -1,    60,   109,    70,   109,    70,   109,
      61,    -1,     3,    60,   109,    70,   109,    61,    -1,    60,
     109,    70,   109,    61,    -1,     3,    93,    -1,     3,    60,
      94,    61,    69,    -1,    72,    60,    96,    61,     3,    60,
      94,    61,    69,    -1,     3,    60,    61,    69,    -1,    72,
      60,    96,    61,     3,    60,    61,    69,    -1,    94,    70,
      95,    -1,    95,    -1,    73,     3,    60,   109,    61,    -1,
     109,    -1,    96,    70,    97,    -1,    97,    -1,    73,     3,
      60,   109,    61,    -1,   109,    -1,     6,   106,    99,    -1,
     104,    -1,   100,    69,    -1,   101,    69,    -1,    17,    60,
     109,    61,    99,    -1,    17,    60,   109,    61,    99,    13,
      99,    -1,    10,    60,   109,    61,   102,    15,    -1,    69,
      -1,   110,    71,   109,    -1,   110,    71,     5,   109,    -1,
     110,    36,   109,    -1,   110,    36,     5,   109,    -1,   102,
     103,    -1,   103,    -1,   109,    49,    99,    -1,    11,    49,
      99,    -1,     9,   105,    14,    -1,   105,    99,    -1,    99,
      -1,    74,    60,   107,    61,    -1,   107,    25,   108,    -1,
     108,    -1,   110,    -1,    28,     3,    -1,    22,     3,    -1,
     110,    -1,    55,   109,    -1,    56,   109,    -1,    66,   109,
      -1,    52,   109,    -1,    50,   109,    -1,    45,   109,    -1,
      46,   109,    -1,    44,   109,    -1,    67,   109,    -1,    51,
     109,    -1,   109,    51,   109,    -1,   109,    57,   109,    -1,
     109,    58,   109,    -1,   109,    59,   109,    -1,   109,    55,
     109,    -1,   109,    56,   109,    -1,   109,    52,   109,    -1,
     109,    50,   109,    -1,   109,    45,   109,    -1,   109,    46,
     109,    -1,   109,    44,   109,    -1,   109,    53,   109,    -1,
     109,    54,   109,    -1,   109,    39,   109,    -1,   109,    38,
     109,    -1,   109,    40,   109,    -1,   109,    41,   109,    -1,
     109,    36,   109,    -1,   109,    37,   109,    -1,   109,    42,
     109,    -1,   109,    43,   109,    -1,   109,    35,   109,    -1,
     109,    34,   109,    -1,   109,    48,   109,    49,   109,    -1,
      60,   109,    61,    -1,    62,   109,    62,   109,    63,    63,
      -1,    62,   109,    62,   111,    63,    63,    -1,     4,    -1,
       3,    -1,     3,    64,   109,    65,    -1,     3,    64,   109,
      49,   109,    65,    -1,    62,   111,    63,    -1,   111,    70,
     109,    -1,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   111,   121,   122,   123,   126,   129,   130,
     131,   134,   135,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   150,   153,   156,   159,   162,   163,   166,   167,
     170,   171,   172,   173,   174,   177,   181,   182,   183,   184,
     185,   186,   187,   190,   191,   192,   193,   197,   200,   201,
     202,   203,   206,   207,   210,   211,   214,   215,   218,   219,
     223,   226,   227,   228,   229,   230,   231,   232,   235,   236,
     239,   240,   243,   244,   247,   248,   251,   254,   255,   258,
     262,   263,   266,   267,   268,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   310,   311,   314,   315,   316,   317,   318,   321,   322
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "vSYMBOL_ID", "vNUMBER_ID", "vDELAY_ID",
  "vALWAYS", "vAND", "vASSIGN", "vBEGIN", "vCASE", "vDEFAULT", "vDEFINE",
  "vELSE", "vEND", "vENDCASE", "vENDMODULE", "vIF", "vINOUT", "vINPUT",
  "vMODULE", "vNAND", "vNEGEDGE", "vNOR", "vNOT", "vOR", "vOUTPUT",
  "vPARAMETER", "vPOSEDGE", "vREG", "vWIRE", "vXNOR", "vXOR", "vDEFPARAM",
  "voANDAND", "voOROR", "voLTE", "voGTE", "voSLEFT", "voSRIGHT", "voEQUAL",
  "voNOTEQUAL", "voCASEEQUAL", "voCASENOTEQUAL", "voXNOR", "voNAND",
  "voNOR", "vNOT_SUPPORT", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'{'", "'}'", "'['",
  "']'", "'~'", "'!'", "LOWER_THAN_ELSE", "';'", "','", "'='", "'#'",
  "'.'", "'@'", "$accept", "source_text", "items", "define", "module",
  "list_of_module_items", "module_item", "parameter_declaration",
  "input_declaration", "output_declaration", "inout_declaration",
  "net_declaration", "variable_list", "variable", "continuous_assign",
  "gate_declaration", "gate_instance", "module_instantiation",
  "module_instance", "list_of_module_connections", "module_connection",
  "list_of_module_parameters", "module_parameter", "always", "statement",
  "blocking_assignment", "non_blocking_assignment", "case_item_list",
  "case_items", "seq_block", "stmt_list", "delay_control",
  "event_expression_list", "event_expression", "expression", "primary",
  "expression_list", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,    63,    58,
     124,    94,    38,    60,    62,    43,    45,    42,    47,    37,
      40,    41,   123,   125,    91,    93,   126,    33,   303,    59,
      44,    61,    35,    46,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    77,    77,    78,    79,    79,
      79,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    83,    84,    85,    86,    86,    87,    87,
      88,    88,    88,    88,    88,    89,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    92,    93,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   105,   105,   106,
     107,   107,   108,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   110,   110,   110,   111,   111
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     3,     8,     9,
       7,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     6,    11,     8,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     8,     7,     6,     5,     2,     5,     9,
       4,     8,     3,     1,     5,     1,     3,     1,     5,     1,
       3,     1,     2,     2,     5,     7,     6,     1,     3,     4,
       3,     4,     2,     1,     3,     3,     3,     2,     1,     4,
       3,     1,     1,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     6,     6,     1,     1,     4,     6,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     6,     5,     0,     0,     1,
       4,     3,     7,     0,    30,     0,     0,     0,    29,     0,
       0,   124,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    93,
      91,    92,    90,    95,    89,    86,    87,     0,   129,     0,
      88,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
     129,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,   120,     0,   127,     0,
     118,   117,   113,   114,   110,   109,   111,   112,   115,   116,
     106,   104,   105,     0,     0,   103,    96,   102,   107,   108,
     100,   101,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    60,     0,     0,    61,     0,     0,
       0,    36,    35,     0,    25,     0,    23,    37,    38,    39,
      40,    24,    22,    27,    26,    41,    42,     0,   125,   129,
       0,   128,     0,     0,     8,     0,     0,     0,     0,    53,
      55,     0,     0,    57,    59,     0,     0,     0,    81,    82,
      78,     0,     0,     0,    62,    63,     0,     0,     0,     0,
      68,     0,     0,     0,   119,    31,     9,    50,     0,     0,
       0,     0,     0,     0,    84,    83,     0,    79,    76,    77,
       0,     0,     0,    70,     0,     0,    69,   126,   121,   122,
       0,     0,     0,    48,    52,     0,     0,    56,    80,     0,
       0,    71,     0,    46,     0,     0,    33,     0,     0,     0,
       0,     0,    73,     0,    64,    45,     0,     0,     0,    54,
      58,     0,     0,     0,    66,    72,     0,     0,     0,    44,
       0,    51,     0,    75,    74,    65,    43,    32,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    57,    58,    59,    60,    61,
      62,    63,    17,    18,    64,    65,   118,    66,   113,   208,
     209,   212,   213,    67,   174,   175,   176,   281,   282,   177,
     221,   115,   217,   218,   210,    36,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -168
static const yytype_int16 yypact[] =
{
      25,    30,    41,    61,    25,  -168,  -168,    43,     4,  -168,
    -168,  -168,  -168,     2,    24,    38,   391,   -30,  -168,     3,
     849,    55,  -168,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,  1073,  -168,    56,    47,   391,
    -168,    20,    49,    53,     3,    29,    29,    53,    53,    53,
      53,    29,    29,    29,    29,    53,    53,   759,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   391,  1275,
    1299,  1275,  1251,  1275,  1299,    86,    86,   877,   848,   -11,
    -168,  -168,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   849,    98,  -168,
    1177,   111,   115,  -168,   117,   130,   121,   391,   122,   124,
      75,    96,   100,   129,   131,   143,   148,   116,   127,   140,
     146,   149,   150,  -168,  -168,   573,  -168,   391,  -168,   391,
    1227,  1203,    99,    99,   104,   104,   167,   167,   167,   167,
    1275,  1299,  1275,  1099,   605,  1251,  1275,  1299,    99,    99,
      86,    86,  -168,  -168,  -168,   789,   849,    54,   237,   114,
     130,   169,   170,  -168,  -168,   162,   163,  -168,   -16,   391,
     499,  -168,  -168,   315,  -168,    29,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   391,  -168,   701,
      65,  1177,   391,   230,  -168,   819,   165,   232,   -27,  -168,
    1177,   233,   -22,  -168,  1177,   235,   240,     1,  -168,  -168,
    -168,    32,   391,   391,  -168,  -168,   341,   536,   391,   391,
    1177,   637,   181,   183,  1177,    77,  -168,  -168,   188,   180,
     261,   192,   250,   237,  -168,  -168,   114,  -168,  -168,  -168,
     905,   933,   391,  1177,   391,   425,  1177,  -168,  -168,  -168,
     391,     3,   391,  -168,  -168,   391,   195,  -168,  -168,   365,
     130,  1177,   462,  -168,   391,  1125,  -168,   961,   989,   128,
     207,   287,  -168,  1151,   244,  -168,   391,  1017,   391,  -168,
    -168,   189,   -10,   130,  -168,  -168,   130,   130,  1045,  -168,
     669,  -168,   198,  -168,  -168,  -168,  -168,  -168,  -168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,   266,   268,   -69,   -53,  -168,  -168,  -168,
    -168,  -168,   -24,   -36,  -168,  -168,   213,  -168,  -168,    -4,
      36,  -168,    37,  -168,  -167,   241,  -168,  -168,    -2,  -168,
    -168,  -168,  -168,    40,   -15,   -19,   147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      40,    35,   109,   220,   134,    14,    21,    22,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    80,    81,
     226,   121,   122,   111,   110,   120,   246,   127,   128,   129,
     130,    37,    14,     7,   239,    21,    22,     1,   165,   242,
      38,   170,   171,   240,     8,     2,   248,    12,   243,   172,
      14,   302,   138,   135,   249,   183,   116,    21,    22,   139,
     240,     9,   247,    15,    13,    39,    16,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   112,    16,    39,    19,   178,   205,    23,    24,
      25,   173,   180,   284,    26,    27,    28,    20,   108,    29,
      30,    16,   134,   117,    31,   206,    32,    21,    22,    68,
      33,    34,   199,   114,   201,   107,   303,   207,   233,   304,
     305,    21,    22,    21,    22,   139,   215,    86,    87,   170,
     171,   260,   216,   104,   105,   106,   183,   172,   261,   109,
     219,   178,   134,   214,   102,   103,   104,   105,   106,   102,
     103,   104,   105,   106,   227,   184,   185,   166,   230,   186,
     185,   167,    23,    24,    25,   168,    39,   169,    26,    27,
      28,   179,   231,    29,    30,   191,   185,   234,    31,   291,
      32,   181,    39,   182,    33,    34,   192,   185,   187,   173,
     188,   207,   178,    84,    85,    86,    87,   250,   251,   193,
     185,   253,   189,   255,   256,   194,   185,   190,   195,   196,
     100,   101,   102,   103,   104,   105,   106,   219,   214,   222,
     223,   224,   225,   235,   237,   238,   241,   271,   244,   272,
      21,    22,   276,   245,   258,   275,   259,   277,   262,   263,
     278,   178,   265,   266,   283,   279,   293,   297,   301,   287,
     123,   124,   125,   126,    21,    22,   283,   308,   131,   132,
      10,   298,    11,   300,   178,   292,   264,   178,   178,   295,
     267,    23,    24,    25,   200,   119,   268,    26,    27,    28,
      21,    22,    29,    30,     0,     0,     0,    31,   280,    32,
       0,     0,   294,    33,    34,    23,    24,    25,     0,     0,
     211,    26,    27,    28,     0,     0,    29,    30,    21,    22,
     229,    31,     0,    32,     0,     0,     0,    33,    34,     0,
       0,    23,    24,    25,   207,     0,     0,    26,    27,    28,
       0,     0,    29,    30,    21,    22,   252,    31,     0,    32,
       0,     0,     0,    33,    34,     0,     0,     0,     0,    23,
      24,    25,     0,     0,     0,    26,    27,    28,    21,    22,
      29,    30,     0,     0,     0,    31,   280,    32,     0,     0,
       0,    33,    34,     0,     0,    23,    24,    25,     0,     0,
       0,    26,    27,    28,    21,    22,    29,    30,     0,     0,
       0,    31,     0,    32,     0,     0,     0,    33,    34,    23,
      24,    25,     0,     0,     0,    26,    27,    28,     0,     0,
      29,    30,     0,     0,     0,    31,     0,    32,     0,     0,
       0,    33,    34,     0,     0,    23,    24,    25,     0,     0,
       0,    26,    27,    28,     0,     0,    29,    30,     0,     0,
       0,    31,     0,    32,     0,     0,     0,    33,    34,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   274,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     0,
      95,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     0,   285,     0,     0,     0,     0,     0,     0,
       0,     0,   286,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    95,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     0,    95,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   254,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,    95,   197,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,     0,     0,     0,     0,   198,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
     203,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    95,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,   257,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    95,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,     0,   307,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,    95,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     0,    41,     0,   232,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,   133,     0,    45,    46,     0,
      47,     0,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    56,    41,     0,     0,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,   204,     0,    45,    46,     0,
      47,     0,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    56,    41,     0,     0,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,   236,     0,    45,    46,     0,
      47,     0,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    56,    41,     0,     0,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    46,     0,
      47,     0,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    56,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,     0,    95,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,     0,     0,
     137,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    95,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,   136,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     0,   269,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,    95,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   270,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,    95,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     0,   289,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    95,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
     290,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    95,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     0,   299,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     0,   306,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    95,   202,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,   288,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,    95,
     296,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    95,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    82,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    84,    85,    86,    87,    88,    89,    90,    91,     0,
      93,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   105,   106,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,   106
};

static const yytype_int16 yycheck[] =
{
      19,    16,    38,   170,    57,     3,     3,     4,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      36,    45,    46,     3,    39,    44,    25,    51,    52,    53,
      54,    61,     3,     3,    61,     3,     4,    12,   107,    61,
      70,     9,    10,    70,     3,    20,    14,     4,    70,    17,
       3,    61,    63,    68,   221,    71,     3,     3,     4,    70,
      70,     0,    61,    61,    60,    62,    64,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    72,    64,    62,    71,   115,   166,    44,    45,
      46,    69,   117,   270,    50,    51,    52,    69,    61,    55,
      56,    64,   165,    60,    60,    61,    62,     3,     4,    64,
      66,    67,   137,    74,   139,    69,   293,    73,    63,   296,
     297,     3,     4,     3,     4,    70,    22,    38,    39,     9,
      10,    64,    28,    57,    58,    59,    71,    17,    71,   185,
     169,   170,   205,   168,    55,    56,    57,    58,    59,    55,
      56,    57,    58,    59,   179,    69,    70,    69,   183,    69,
      70,    60,    44,    45,    46,    60,    62,    60,    50,    51,
      52,    60,   197,    55,    56,    69,    70,   202,    60,    61,
      62,    69,    62,    69,    66,    67,    69,    70,    69,    69,
      69,    73,   221,    36,    37,    38,    39,   222,   223,    69,
      70,   226,    69,   228,   229,    69,    70,    69,    69,    69,
      53,    54,    55,    56,    57,    58,    59,   246,   243,    60,
      60,    69,    69,     3,    69,     3,     3,   252,     3,   254,
       3,     4,   261,     3,    63,   260,    63,   262,    60,    69,
     265,   270,    60,     3,   269,    60,    49,    13,    69,   274,
      47,    48,    49,    50,     3,     4,   281,    69,    55,    56,
       4,   286,     4,   288,   293,   279,   240,   296,   297,   281,
     243,    44,    45,    46,   137,    44,   246,    50,    51,    52,
       3,     4,    55,    56,    -1,    -1,    -1,    60,    11,    62,
      -1,    -1,    15,    66,    67,    44,    45,    46,    -1,    -1,
      73,    50,    51,    52,    -1,    -1,    55,    56,     3,     4,
       5,    60,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,    44,    45,    46,    73,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    56,     3,     4,     5,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    50,    51,    52,     3,     4,
      55,    56,    -1,    -1,    -1,    60,    11,    62,    -1,    -1,
      -1,    66,    67,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    50,    51,    52,     3,     4,    55,    56,    -1,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    67,    44,
      45,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,
      -1,    66,    67,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    67,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      65,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    65,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    65,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,     3,    -1,    63,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,     3,    -1,    -1,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,     3,    -1,    -1,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,     3,    -1,    -1,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    20,    76,    77,    78,    79,     3,     3,     0,
      78,    79,     4,    60,     3,    61,    64,    87,    88,    71,
      69,     3,     4,    44,    45,    46,    50,    51,    52,    55,
      56,    60,    62,    66,    67,   109,   110,    61,    70,    62,
     110,     3,     6,     7,     8,    18,    19,    21,    23,    24,
      25,    26,    27,    29,    30,    31,    32,    80,    81,    82,
      83,    84,    85,    86,    89,    90,    92,    98,    64,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   111,
     109,   109,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    69,    61,    88,
     109,     3,    72,    93,    74,   106,     3,    60,    91,   100,
     110,    87,    87,    91,    91,    91,    91,    87,    87,    87,
      87,    91,    91,    16,    81,   109,    61,    62,    63,    70,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,    80,    69,    60,    60,    60,
       9,    10,    17,    69,    99,   100,   101,   104,   110,    60,
     109,    69,    69,    71,    69,    70,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    49,    65,   109,
     111,   109,    49,    65,    16,    80,    61,    73,    94,    95,
     109,    73,    96,    97,   109,    22,    28,   107,   108,   110,
      99,   105,    60,    60,    69,    69,    36,   109,    70,     5,
     109,   109,    63,    63,   109,     3,    16,    69,     3,    61,
      70,     3,    61,    70,     3,     3,    25,    61,    14,    99,
     109,   109,     5,   109,    70,   109,   109,    65,    63,    63,
      64,    71,    60,    69,    95,    60,     3,    97,   108,    61,
      61,   109,   109,    61,    70,   109,   110,   109,   109,    60,
      11,   102,   103,   109,    99,    61,    70,   109,    49,    61,
      61,    61,    94,    49,    15,   103,    49,    13,   109,    61,
     109,    69,    61,    99,    99,    99,    61,    65,    69
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
#line 108 "SRC/verilog_bison.y"
    {next_parsed_verilog_file((yyvsp[(1) - (1)].node));;}
    break;

  case 3:
#line 111 "SRC/verilog_bison.y"
    {
											if ((yyvsp[(1) - (2)].node) != NULL)
											{
												(yyval.node) = newList_entry((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
											}
											else
											{
												(yyval.node) = newList(FILE_ITEMS, (yyvsp[(2) - (2)].node));
											}
										;}
    break;

  case 4:
#line 121 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (2)].node);;}
    break;

  case 5:
#line 122 "SRC/verilog_bison.y"
    {(yyval.node) = newList(FILE_ITEMS, (yyvsp[(1) - (1)].node));;}
    break;

  case 6:
#line 123 "SRC/verilog_bison.y"
    {(yyval.node) = NULL;;}
    break;

  case 7:
#line 126 "SRC/verilog_bison.y"
    {(yyval.node) = NULL; newConstant((yyvsp[(2) - (3)].id_name), (yyvsp[(3) - (3)].num_value), yylineno);;}
    break;

  case 8:
#line 129 "SRC/verilog_bison.y"
    {(yyval.node) = newModule((yyvsp[(2) - (8)].id_name), (yyvsp[(4) - (8)].node), (yyvsp[(7) - (8)].node), yylineno);;}
    break;

  case 9:
#line 130 "SRC/verilog_bison.y"
    {(yyval.node) = newModule((yyvsp[(2) - (9)].id_name), (yyvsp[(4) - (9)].node), (yyvsp[(8) - (9)].node), yylineno);;}
    break;

  case 10:
#line 131 "SRC/verilog_bison.y"
    {(yyval.node) = newModule((yyvsp[(2) - (7)].id_name), NULL, (yyvsp[(6) - (7)].node), yylineno);;}
    break;

  case 11:
#line 134 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 12:
#line 135 "SRC/verilog_bison.y"
    {(yyval.node) = newList(MODULE_ITEMS, (yyvsp[(1) - (1)].node));;}
    break;

  case 13:
#line 138 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 14:
#line 139 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 15:
#line 140 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 16:
#line 141 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 17:
#line 142 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 18:
#line 143 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 19:
#line 144 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 20:
#line 145 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 21:
#line 146 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 22:
#line 150 "SRC/verilog_bison.y"
    {(yyval.node) = markAndProcessSymbolListWith(PARAMETER, (yyvsp[(2) - (3)].node));;}
    break;

  case 23:
#line 153 "SRC/verilog_bison.y"
    {(yyval.node) = markAndProcessSymbolListWith(INPUT, (yyvsp[(2) - (3)].node));;}
    break;

  case 24:
#line 156 "SRC/verilog_bison.y"
    {(yyval.node) = markAndProcessSymbolListWith(OUTPUT, (yyvsp[(2) - (3)].node));;}
    break;

  case 25:
#line 159 "SRC/verilog_bison.y"
    {(yyval.node) = markAndProcessSymbolListWith(INOUT, (yyvsp[(2) - (3)].node));;}
    break;

  case 26:
#line 162 "SRC/verilog_bison.y"
    {(yyval.node) = markAndProcessSymbolListWith(WIRE, (yyvsp[(2) - (3)].node));;}
    break;

  case 27:
#line 163 "SRC/verilog_bison.y"
    {(yyval.node) = markAndProcessSymbolListWith(REG, (yyvsp[(2) - (3)].node));;}
    break;

  case 28:
#line 166 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 29:
#line 167 "SRC/verilog_bison.y"
    {(yyval.node) = newList(VAR_DECLARE_LIST, (yyvsp[(1) - (1)].node));;}
    break;

  case 30:
#line 170 "SRC/verilog_bison.y"
    {(yyval.node) = newVarDeclare((yyvsp[(1) - (1)].id_name), NULL, NULL, NULL, NULL, NULL, yylineno);;}
    break;

  case 31:
#line 171 "SRC/verilog_bison.y"
    {(yyval.node) = newVarDeclare((yyvsp[(6) - (6)].id_name), (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node), NULL, NULL, NULL, yylineno);;}
    break;

  case 32:
#line 172 "SRC/verilog_bison.y"
    {(yyval.node) = newVarDeclare((yyvsp[(6) - (11)].id_name), (yyvsp[(2) - (11)].node), (yyvsp[(4) - (11)].node), (yyvsp[(8) - (11)].node), (yyvsp[(10) - (11)].node), NULL, yylineno);;}
    break;

  case 33:
#line 173 "SRC/verilog_bison.y"
    {(yyval.node) = newVarDeclare((yyvsp[(6) - (8)].id_name), (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL, NULL, (yyvsp[(8) - (8)].node), yylineno);;}
    break;

  case 34:
#line 174 "SRC/verilog_bison.y"
    {(yyval.node) = newVarDeclare((yyvsp[(1) - (3)].id_name), NULL, NULL, NULL, NULL, (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 35:
#line 177 "SRC/verilog_bison.y"
    {(yyval.node) = newAssign((yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 36:
#line 181 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_AND, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 37:
#line 182 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_NAND, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 38:
#line 183 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_NOR, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 39:
#line 184 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_NOT, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 40:
#line 185 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_OR, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 41:
#line 186 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_XNOR, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 42:
#line 187 "SRC/verilog_bison.y"
    {(yyval.node) = newGate(BITWISE_XOR, (yyvsp[(2) - (3)].node), yylineno);;}
    break;

  case 43:
#line 190 "SRC/verilog_bison.y"
    {(yyval.node) = newGateInstance((yyvsp[(1) - (8)].id_name), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].node), (yyvsp[(7) - (8)].node), yylineno);;}
    break;

  case 44:
#line 191 "SRC/verilog_bison.y"
    {(yyval.node) = newGateInstance(NULL, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(6) - (7)].node), yylineno);;}
    break;

  case 45:
#line 192 "SRC/verilog_bison.y"
    {(yyval.node) = newGateInstance((yyvsp[(1) - (6)].id_name), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL, yylineno);;}
    break;

  case 46:
#line 193 "SRC/verilog_bison.y"
    {(yyval.node) = newGateInstance(NULL, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), NULL, yylineno);;}
    break;

  case 47:
#line 197 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleInstance((yyvsp[(1) - (2)].id_name), (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 48:
#line 200 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleNamedInstance((yyvsp[(1) - (5)].id_name), (yyvsp[(3) - (5)].node), NULL, yylineno);;}
    break;

  case 49:
#line 201 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleNamedInstance((yyvsp[(5) - (9)].id_name), (yyvsp[(7) - (9)].node), (yyvsp[(3) - (9)].node), yylineno); ;}
    break;

  case 50:
#line 202 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleNamedInstance((yyvsp[(1) - (4)].id_name), NULL, NULL, yylineno);;}
    break;

  case 51:
#line 203 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleNamedInstance((yyvsp[(5) - (8)].id_name), NULL, (yyvsp[(3) - (8)].node), yylineno);;}
    break;

  case 52:
#line 206 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 53:
#line 207 "SRC/verilog_bison.y"
    {(yyval.node) = newList(MODULE_CONNECT_LIST, (yyvsp[(1) - (1)].node));;}
    break;

  case 54:
#line 210 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleConnection((yyvsp[(2) - (5)].id_name), (yyvsp[(4) - (5)].node), yylineno);;}
    break;

  case 55:
#line 211 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleConnection(NULL, (yyvsp[(1) - (1)].node), yylineno);;}
    break;

  case 56:
#line 214 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 57:
#line 215 "SRC/verilog_bison.y"
    {(yyval.node) = newList(MODULE_PARAMETER_LIST, (yyvsp[(1) - (1)].node));;}
    break;

  case 58:
#line 218 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleParameter((yyvsp[(2) - (5)].id_name), (yyvsp[(4) - (5)].node), yylineno);;}
    break;

  case 59:
#line 219 "SRC/verilog_bison.y"
    {(yyval.node) = newModuleParameter(NULL, (yyvsp[(1) - (1)].node), yylineno);;}
    break;

  case 60:
#line 223 "SRC/verilog_bison.y"
    {(yyval.node) = newAlways((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 61:
#line 226 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 62:
#line 227 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (2)].node);;}
    break;

  case 63:
#line 228 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (2)].node);;}
    break;

  case 64:
#line 229 "SRC/verilog_bison.y"
    {(yyval.node) = newIf((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), NULL, yylineno);;}
    break;

  case 65:
#line 230 "SRC/verilog_bison.y"
    {(yyval.node) = newIf((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), yylineno);;}
    break;

  case 66:
#line 231 "SRC/verilog_bison.y"
    {(yyval.node) = newCase((yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), yylineno);;}
    break;

  case 67:
#line 232 "SRC/verilog_bison.y"
    {(yyval.node) = NULL;;}
    break;

  case 68:
#line 235 "SRC/verilog_bison.y"
    {(yyval.node) = newBlocking((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 69:
#line 236 "SRC/verilog_bison.y"
    {(yyval.node) = newBlocking((yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node), yylineno);;}
    break;

  case 70:
#line 239 "SRC/verilog_bison.y"
    {(yyval.node) = newNonBlocking((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 71:
#line 240 "SRC/verilog_bison.y"
    {(yyval.node) = newNonBlocking((yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node), yylineno);;}
    break;

  case 72:
#line 243 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 73:
#line 244 "SRC/verilog_bison.y"
    {(yyval.node) = newList(CASE_LIST, (yyvsp[(1) - (1)].node));;}
    break;

  case 74:
#line 247 "SRC/verilog_bison.y"
    {(yyval.node) = newCaseItem((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 75:
#line 248 "SRC/verilog_bison.y"
    {(yyval.node) = newDefaultCase((yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 76:
#line 251 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node);;}
    break;

  case 77:
#line 254 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 78:
#line 255 "SRC/verilog_bison.y"
    {(yyval.node) = newList(BLOCK, (yyvsp[(1) - (1)].node));;}
    break;

  case 79:
#line 258 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(3) - (4)].node);;}
    break;

  case 80:
#line 262 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 81:
#line 263 "SRC/verilog_bison.y"
    {(yyval.node) = newList(DELAY_CONTROL, (yyvsp[(1) - (1)].node));;}
    break;

  case 82:
#line 266 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 83:
#line 267 "SRC/verilog_bison.y"
    {(yyval.node) = newPosedgeSymbol((yyvsp[(2) - (2)].id_name), yylineno);;}
    break;

  case 84:
#line 268 "SRC/verilog_bison.y"
    {(yyval.node) = newNegedgeSymbol((yyvsp[(2) - (2)].id_name), yylineno);;}
    break;

  case 85:
#line 271 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 86:
#line 272 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(ADD, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 87:
#line 273 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(MINUS, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 88:
#line 274 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_NOT, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 89:
#line 275 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_AND, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 90:
#line 276 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_OR, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 91:
#line 277 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_NAND, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 92:
#line 278 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_NOR, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 93:
#line 279 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_XNOR, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 94:
#line 280 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(LOGICAL_NOT, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 95:
#line 281 "SRC/verilog_bison.y"
    {(yyval.node) = newUnaryOperation(BITWISE_XOR, (yyvsp[(2) - (2)].node), yylineno);;}
    break;

  case 96:
#line 282 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(BITWISE_XOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 97:
#line 283 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(MULTIPLY, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 98:
#line 284 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(DIVIDE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 99:
#line 285 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(MODULO, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 100:
#line 286 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(ADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 101:
#line 287 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 102:
#line 288 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(BITWISE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 103:
#line 289 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(BITWISE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 104:
#line 290 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(BITWISE_NAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 105:
#line 291 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(BITWISE_NOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 106:
#line 292 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(BITWISE_XNOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 107:
#line 293 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 108:
#line 294 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 109:
#line 295 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(SR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 110:
#line 296 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(SL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 111:
#line 297 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(LOGICAL_EQUAL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 112:
#line 298 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(NOT_EQUAL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 113:
#line 299 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(LTE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 114:
#line 300 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(GTE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 115:
#line 301 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(CASE_EQUAL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 116:
#line 302 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(CASE_NOT_EQUAL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 117:
#line 303 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(LOGICAL_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 118:
#line 304 "SRC/verilog_bison.y"
    {(yyval.node) = newBinaryOperation(LOGICAL_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), yylineno);;}
    break;

  case 119:
#line 305 "SRC/verilog_bison.y"
    {(yyval.node) = newIfQuestion((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node), yylineno);;}
    break;

  case 120:
#line 306 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node);;}
    break;

  case 121:
#line 310 "SRC/verilog_bison.y"
    {(yyval.node) = newListReplicate( (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node) ); ;}
    break;

  case 122:
#line 311 "SRC/verilog_bison.y"
    {(yyval.node) = newListReplicate( (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node) ); ;}
    break;

  case 123:
#line 314 "SRC/verilog_bison.y"
    {(yyval.node) = newNumberNode((yyvsp[(1) - (1)].num_value), yylineno);;}
    break;

  case 124:
#line 315 "SRC/verilog_bison.y"
    {(yyval.node) = newSymbolNode((yyvsp[(1) - (1)].id_name), yylineno);;}
    break;

  case 125:
#line 316 "SRC/verilog_bison.y"
    {(yyval.node) = newArrayRef((yyvsp[(1) - (4)].id_name), (yyvsp[(3) - (4)].node), yylineno);;}
    break;

  case 126:
#line 317 "SRC/verilog_bison.y"
    {(yyval.node) = newRangeRef((yyvsp[(1) - (6)].id_name), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), yylineno);;}
    break;

  case 127:
#line 318 "SRC/verilog_bison.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node); ((yyvsp[(2) - (3)].node))->types.concat.num_bit_strings = -1;;}
    break;

  case 128:
#line 321 "SRC/verilog_bison.y"
    {(yyval.node) = newList_entry((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); /* note this will be in order lsb = greatest to msb = 0 in the node child list */;}
    break;

  case 129:
#line 322 "SRC/verilog_bison.y"
    {(yyval.node) = newList(CONCATENATE, (yyvsp[(1) - (1)].node));;}
    break;


/* Line 1267 of yacc.c.  */
#line 2596 "SRC/verilog_bison.c"
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


#line 325 "SRC/verilog_bison.y"

