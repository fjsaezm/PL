/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/semantico.y" /* yacc.c:337  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

#define YYDEBUG 0

  int yylex();  // Para evitar warning al compilar
  void yyerror(const char * msg);

  

#line 84 "src/y.tab.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINCIPAL = 258,
    INI_BLOQUE = 259,
    FIN_BLOQUE = 260,
    INI_VAR = 261,
    FIN_VAR = 262,
    INI_EXPR = 263,
    FIN_EXPR = 264,
    INI_TAM = 265,
    FIN_TAM = 266,
    PTCOMA = 267,
    COMA = 268,
    TIPO_BASICO = 269,
    CADENA = 270,
    CTE_CARACTER = 271,
    CTE_ENTERA = 272,
    CTE_LOGICA = 273,
    CTE_REAL = 274,
    SI = 275,
    SI_NO = 276,
    RETORNO = 277,
    ENTRADA = 278,
    SALIDA = 279,
    HACER = 280,
    HASTA = 281,
    OR = 282,
    AND = 283,
    XOR = 284,
    ASIG = 285,
    OPREL = 286,
    OPIGUAL = 287,
    SUMARESTA = 288,
    OPMUL = 289,
    OPUNARIO = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

#define YYUNDEFTOK  2
#define YYMAXUTOK   290

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    53,    52,    61,    60,    68,    69,    72,
      72,    75,    75,    78,    78,    79,    83,    82,    87,    89,
      90,    93,    93,    94,    97,    97,    98,    98,   101,   102,
     103,   104,   105,   106,   107,   108,   111,   122,   128,   136,
     145,   148,   151,   151,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   172,   173,
     174,   175,   176,   178,   179,   182,   185,   186,   189,   190,
     193,   201,   202,   205,   206,   209,   210,   213,   214,   215,
     218,   221,   226,   227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINCIPAL", "INI_BLOQUE", "FIN_BLOQUE",
  "INI_VAR", "FIN_VAR", "INI_EXPR", "FIN_EXPR", "INI_TAM", "FIN_TAM",
  "PTCOMA", "COMA", "TIPO_BASICO", "CADENA", "CTE_CARACTER", "CTE_ENTERA",
  "CTE_LOGICA", "CTE_REAL", "SI", "SI_NO", "RETORNO", "ENTRADA", "SALIDA",
  "HACER", "HASTA", "OR", "AND", "XOR", "ASIG", "OPREL", "OPIGUAL",
  "SUMARESTA", "OPMUL", "OPUNARIO", "$accept", "programa", "bloque", "$@1",
  "$@2", "dec_subprogs", "dec_subprog", "$@3", "cabe_subprog", "$@4",
  "cabe2", "$@5", "dec_var_loc", "$@6", "var_loc", "cuerpo_dec_var", "$@7",
  "sentencias", "$@8", "$@9", "sentencia", "sentencia_asig",
  "sentencia_if", "sentencia_do_until", "sentencia_entrada",
  "sentencia_salida", "sentencia_return", "@10", "expresion", "constante",
  "funcion", "tipo_basico", "lista_identificador", "idarray",
  "ident_array", "array", "array_ident", "lista_parametros",
  "identificador", "num", "lista_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -6

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    46,    72,    79,   -92,    96,    97,   -92,   109,   109,
     -92,   -92,   -92,    22,   110,    20,   -92,   -92,     8,   -92,
     102,   -92,   -92,   128,   137,   -92,     1,   -92,   -92,   -92,
     -92,    96,   -92,   137,   -92,   131,    66,     1,     1,    96,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   112,
     130,   -92,    -5,   -92,   -92,   133,   139,   -92,   -92,    66,
     -92,    66,   -92,   -92,   -92,   -92,    66,    66,   136,   -92,
     -92,   -92,    43,    19,    67,   127,    66,    66,   -92,     1,
     138,    29,    77,    94,   120,   -92,    66,    66,    66,    66,
      66,    66,    66,   144,    11,   -92,   -92,   150,   117,   136,
      58,   -92,   -92,   155,   -92,   -92,   -92,     1,    36,   137,
     -92,   143,   149,    60,    24,    63,   120,   -92,   -92,   -92,
      39,    66,   -92,   163,    66,   169,   -92,   170,   -92,   170,
     164,   -92,   103,    66,   136,   138,     1,   -92,     1,   137,
     -92,    62,   175,   -92,   -92,   -92,   -92,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     2,    18,    18,
      16,     8,     8,     0,    26,     0,    23,    21,     0,    20,
       0,     7,     9,    24,     0,     6,     0,    17,    19,    80,
      11,     0,     4,     0,    35,     0,     0,     0,     0,     0,
      28,    27,    29,    30,    31,    32,    33,    34,    75,     0,
      76,    72,     0,    71,    67,    70,     0,    10,    25,     0,
      57,     0,    62,    58,    60,    61,     0,     0,    42,    56,
      55,    59,    76,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    45,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,    83,
       0,    66,    81,     0,    15,    65,    12,     0,     0,     0,
      44,    47,    48,    49,    53,    51,    52,    54,    43,    64,
       0,     0,    36,    73,     0,    68,    78,     0,    13,     0,
      37,    63,     0,     0,    82,     0,     0,    14,     0,     0,
      39,     0,     0,    79,    77,    38,    74,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,    16,   -92,   -92,   176,   -92,   -92,   -92,   -92,
     -92,   -92,   178,   -92,   -92,   171,   -92,   -92,   -92,   -92,
     -32,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -26,   -92,
     -92,   -51,    76,   -92,   -68,   -92,   -19,   -92,   -20,    55,
     -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    40,     8,     9,    14,    21,    31,    22,    56,
     106,   137,    11,    13,    18,    19,    26,    23,    33,    24,
      41,    42,    43,    44,    45,    46,    47,    93,    99,    69,
      70,   107,    52,    53,    54,    48,    71,   108,    72,   103,
     100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    58,    51,   120,    50,    49,    55,    78,    79,    16,
      68,   101,    60,    50,    49,    27,    29,    55,    55,    61,
     119,     7,    17,    16,     1,    25,    29,    62,    63,    64,
      65,    95,    79,    82,    20,    83,    17,   127,   104,   126,
      84,    85,   141,   105,    66,   128,    67,    57,   131,   129,
      98,    94,   124,    77,     3,    75,    90,    91,    92,    55,
     111,   112,   113,   114,   115,   116,   117,    60,   143,   123,
     144,   124,     4,   146,    61,   124,   136,   130,   138,    96,
      79,    29,    62,    63,    64,    65,   109,    55,     5,    50,
      49,    89,    90,    91,    92,   132,    91,    92,   134,    66,
       6,    67,    -5,   110,    86,    87,    88,   145,    89,    90,
      91,    92,   140,    73,    74,    10,    55,    29,    55,    50,
      49,    86,    87,    88,    20,    89,    90,    91,    92,   122,
      86,    87,    88,    32,    89,    90,    91,    92,    34,    59,
      77,     6,    76,    80,    86,    87,    88,    81,    89,    90,
      91,    92,    29,    97,    92,   102,   118,    35,   121,    36,
      37,    38,    39,    86,    87,    88,   125,    89,    90,    91,
      92,    87,    88,   133,    89,    90,    91,    92,    88,   135,
      89,    90,    91,    92,   105,   139,   147,    12,    15,    28,
     142
};

static const yytype_uint8 yycheck[] =
{
      20,    33,     1,    94,    24,    24,    26,    12,    13,     1,
      36,    79,     1,    33,    33,     7,    15,    37,    38,     8,
       9,     5,    14,     1,     3,     5,    15,    16,    17,    18,
      19,    12,    13,    59,    14,    61,    14,     1,     9,   107,
      66,    67,   133,    14,    33,     9,    35,    31,     9,    13,
      76,     8,    13,    10,     8,    39,    32,    33,    34,    79,
      86,    87,    88,    89,    90,    91,    92,     1,   136,    11,
     138,    13,     0,    11,     8,    13,   127,   109,   129,    12,
      13,    15,    16,    17,    18,    19,     9,   107,     9,   109,
     109,    31,    32,    33,    34,   121,    33,    34,   124,    33,
       4,    35,     5,     9,    27,    28,    29,   139,    31,    32,
      33,    34,     9,    37,    38,     6,   136,    15,   138,   139,
     139,    27,    28,    29,    14,    31,    32,    33,    34,    12,
      27,    28,    29,     5,    31,    32,    33,    34,     1,     8,
      10,     4,    30,    10,    27,    28,    29,     8,    31,    32,
      33,    34,    15,    26,    34,    17,    12,    20,     8,    22,
      23,    24,    25,    27,    28,    29,    11,    31,    32,    33,
      34,    28,    29,    10,    31,    32,    33,    34,    29,    10,
      31,    32,    33,    34,    14,    21,    11,     9,    12,    18,
     135
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    37,     8,     0,     9,     4,    38,    39,    40,
       6,    48,    48,    49,    41,    41,     1,    14,    50,    51,
      14,    42,    44,    53,    55,     5,    52,     7,    51,    15,
      74,    43,     5,    54,     1,    20,    22,    23,    24,    25,
      38,    56,    57,    58,    59,    60,    61,    62,    71,    72,
      74,     1,    68,    69,    70,    74,    45,    38,    56,     8,
       1,     8,    16,    17,    18,    19,    33,    35,    64,    65,
      66,    72,    74,    68,    68,    38,    30,    10,    12,    13,
      10,     8,    64,    64,    64,    64,    27,    28,    29,    31,
      32,    33,    34,    63,     8,    12,    12,    26,    64,    64,
      76,    70,    17,    75,     9,    14,    46,    67,    73,     9,
       9,    64,    64,    64,    64,    64,    64,    64,    12,     9,
      76,     8,    12,    11,    13,    11,    70,     1,     9,    13,
      56,     9,    64,    10,    64,    10,    67,    47,    67,    21,
       9,    76,    75,    70,    70,    56,    11,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    39,    38,    40,    38,    41,    41,    43,
      42,    45,    44,    47,    46,    46,    49,    48,    48,    50,
      50,    52,    51,    51,    54,    53,    55,    53,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    58,    58,    59,
      60,    61,    63,    62,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    67,    68,    68,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      74,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     6,     0,     5,     2,     0,     0,
       3,     0,     5,     0,     3,     1,     0,     4,     0,     2,
       1,     0,     4,     1,     0,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     7,     6,
       3,     3,     0,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     3,     1,     4,     7,
       1,     1,     1,     4,     7,     1,     1,     4,     2,     4,
       1,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 3:
#line 53 "src/semantico.y" /* yacc.c:1652  */
    { tsAddMark();}
#line 1368 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 58 "src/semantico.y" /* yacc.c:1652  */
    { tsCleanIn();}
#line 1374 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 61 "src/semantico.y" /* yacc.c:1652  */
    {tsAddMark();}
#line 1380 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 65 "src/semantico.y" /* yacc.c:1652  */
    {tsCleanIn();}
#line 1386 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 72 "src/semantico.y" /* yacc.c:1652  */
    { subProg = 1;}
#line 1392 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 72 "src/semantico.y" /* yacc.c:1652  */
    { subProg = 0;}
#line 1398 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 75 "src/semantico.y" /* yacc.c:1652  */
    {decParam = 1; tsAddSubprog(yyvsp[0]);}
#line 1404 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 78 "src/semantico.y" /* yacc.c:1652  */
    { tsUpdateNparam(yyvsp[-1]); nParam = 0; decParam = 0; }
#line 1410 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 78 "src/semantico.y" /* yacc.c:1652  */
    {yyvsp[-2].nDim=0;}
#line 1416 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 83 "src/semantico.y" /* yacc.c:1652  */
    {decVar = 1;}
#line 1422 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 86 "src/semantico.y" /* yacc.c:1652  */
    {decVar = 0;}
#line 1428 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 93 "src/semantico.y" /* yacc.c:1652  */
    {setType(yyvsp[0]);}
#line 1434 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 97 "src/semantico.y" /* yacc.c:1652  */
    {decVar = 2;}
#line 1440 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 98 "src/semantico.y" /* yacc.c:1652  */
    {decVar = 2;}
#line 1446 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 112 "src/semantico.y" /* yacc.c:1652  */
    {
	  if(yyvsp[-3].type != yyvsp[-1].type){
	    printf("Error semántico(%d),los tipos no coinciden.\n",line,yyvsp[-3].type,yyvsp[-1].type);
	  }
	  if(!equalSize(yyvsp[-3],yyvsp[-1])){
	    printf("Error semántico(%d),los tamaños no coinciden.\n",line);
	  }
	}
#line 1459 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 123 "src/semantico.y" /* yacc.c:1652  */
    {
  	  if(yyvsp[-2].type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",line);
  	  }
	}
#line 1469 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 129 "src/semantico.y" /* yacc.c:1652  */
    {
  	  if(yyvsp[-4].type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",line);
  	  }
	}
#line 1479 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 137 "src/semantico.y" /* yacc.c:1652  */
    {
  if(yyvsp[-1].type != BOOLEANO){
    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",line);
  }
}
#line 1489 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 151 "src/semantico.y" /* yacc.c:1652  */
    { tsCheckReturn(yyvsp[0],&yyval); }
#line 1495 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 154 "src/semantico.y" /* yacc.c:1652  */
    { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; }
#line 1501 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 155 "src/semantico.y" /* yacc.c:1652  */
    {tsOpSign(yyvsp[-1], yyvsp[0], &yyval); }
#line 1507 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 156 "src/semantico.y" /* yacc.c:1652  */
    {tsOpUnary(yyvsp[-1], yyvsp[0], &yyval); }
#line 1513 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 157 "src/semantico.y" /* yacc.c:1652  */
    {tsOpOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1519 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 158 "src/semantico.y" /* yacc.c:1652  */
    {tsOpAnd(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1525 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 159 "src/semantico.y" /* yacc.c:1652  */
    {tsOpXor(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1531 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 160 "src/semantico.y" /* yacc.c:1652  */
    {tsOpXor(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1537 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 161 "src/semantico.y" /* yacc.c:1652  */
    {tsOpEqual(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1543 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 162 "src/semantico.y" /* yacc.c:1652  */
    {tsOpSign(yyvsp[-2], yyvsp[-1], &yyval); }
#line 1549 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 163 "src/semantico.y" /* yacc.c:1652  */
    {tsOpRel(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1555 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 164 "src/semantico.y" /* yacc.c:1652  */
    {tsOpMul(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval);}
#line 1561 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 165 "src/semantico.y" /* yacc.c:1652  */
    {yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; currentFunction = -1;}
#line 1567 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 166 "src/semantico.y" /* yacc.c:1652  */
    {yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; }
#line 1573 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 172 "src/semantico.y" /* yacc.c:1652  */
    { yyval.type = ENTERO; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1579 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 173 "src/semantico.y" /* yacc.c:1652  */
    { aux = 1; yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; }
#line 1585 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 174 "src/semantico.y" /* yacc.c:1652  */
    { yyval.type = BOOLEANO; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1591 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 175 "src/semantico.y" /* yacc.c:1652  */
    { yyval.type = FLOTANTE; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1597 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 176 "src/semantico.y" /* yacc.c:1652  */
    { yyval.type = CARACTER; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1603 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 178 "src/semantico.y" /* yacc.c:1652  */
    { tsFunctionCall(yyvsp[-3], &yyval); }
#line 1609 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 189 "src/semantico.y" /* yacc.c:1652  */
    { if(decVar == 1) { yyvsp[-3].nDim=1; yyvsp[-3].tDim1=atoi(yyvsp[-1].lex); yyvsp[-3].tDim2=0; tsAddId(yyvsp[-3]); } }
#line 1615 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 190 "src/semantico.y" /* yacc.c:1652  */
    { if(decVar == 1) { yyvsp[-6].nDim=2; yyvsp[-6].tDim1=atoi(yyvsp[-4].lex); yyvsp[-6].tDim2=atoi(yyvsp[-1].lex); tsAddId(yyvsp[-6]); } }
#line 1621 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 193 "src/semantico.y" /* yacc.c:1652  */
    { if(decVar == 1){
				yyvsp[0].nDim=0; yyvsp[0].tDim1 = 0; yyvsp[0].tDim2 = 0; tsAddId(yyvsp[0]);
			      } 
		             else{
				if(decParam == 0)
				   tsGetId(yyvsp[0], &yyval);
			     }
			    }
#line 1634 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 205 "src/semantico.y" /* yacc.c:1652  */
    { if(decVar == 2){ tsGetId(yyvsp[-3], &yyval); yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; yyval.nDim = yyval.nDim -1; } }
#line 1640 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 206 "src/semantico.y" /* yacc.c:1652  */
    { if(decVar == 2){ tsGetId(yyvsp[-6], &yyval); yyval.tDim1 = yyvsp[-4].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; yyval.nDim = yyval.nDim -2;} }
#line 1646 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 213 "src/semantico.y" /* yacc.c:1652  */
    { yyvsp[0].nDim=0; nParam++; setType(yyvsp[-1]); tsAddParam(yyvsp[0]); }
#line 1652 "src/y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 214 "src/semantico.y" /* yacc.c:1652  */
    { yyvsp[0].nDim=0; nParam++; setType(yyvsp[-1]); tsAddParam(yyvsp[0]); }
#line 1658 "src/y.tab.c" /* yacc.c:1652  */
    break;


#line 1662 "src/y.tab.c" /* yacc.c:1652  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
  return yyresult;
}
#line 232 "src/semantico.y" /* yacc.c:1918  */



#include "lex.yy.c"

void yyerror(const char * msg) {
  printf("\n(Línea %d) %s\n", yylineno, msg);
}
