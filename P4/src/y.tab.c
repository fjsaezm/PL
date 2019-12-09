/* A Bison parser, made by GNU Bison 3.4.1.  */

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
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/semantico.y"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

#define YYDEBUG 0

  int yylex();  // Para evitar warning al compilar
  void yyerror(const char * msg);

  

#line 84 "src/y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

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
       0,    50,    50,    53,    53,    56,    57,    60,    61,    64,
      64,    67,    67,    70,    70,    71,    74,    74,    75,    77,
      78,    81,    81,    82,    85,    85,    86,    86,    89,    90,
      91,    92,    93,    94,    95,    96,    99,   110,   116,   124,
     133,   136,   139,   139,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   159,   160,   161,
     162,   163,   165,   166,   169,   170,   173,   181,   182,   183,
     186,   194,   195,   198,   199,   200,   203,   206,   211,   212
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
  "interiorBloque", "dec_subprogs", "dec_subprog", "$@2", "cabe_subprog",
  "$@3", "cabe2", "$@4", "dec_var_loc", "$@5", "var_loc", "cuerpo_dec_var",
  "$@6", "sentencias", "$@7", "$@8", "sentencia", "sentencia_asig",
  "sentencia_if", "sentencia_do_until", "sentencia_entrada",
  "sentencia_salida", "sentencia_return", "@9", "expresion", "constante",
  "funcion", "lista_identificador", "ident_array", "array_ident",
  "lista_parametros", "identificador", "num", "lista_expr", YY_NULLPTR
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

#define YYPACT_NINF -62

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    16,    14,   -62,   -62,   -62,    28,   -62,    46,   -62,
      64,   -62,     8,   -62,   -62,    63,   -62,    51,   -62,   -62,
      79,   122,     6,   -62,   -62,   -62,   -62,    16,   122,   -62,
      78,    72,     6,    72,    16,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   101,    83,   -62,    90,   -62,   108,    98,
     -62,   -62,    72,   -62,    72,   -62,   -62,   -62,   -62,    72,
      72,   129,   -62,   -62,   -62,    33,   159,   129,   161,   109,
      72,    72,   -62,     6,   117,    26,    21,    67,   125,   -62,
      72,    72,    72,    72,    72,    72,    72,   131,     9,   -62,
     -62,    72,   143,   121,    61,   -62,   -62,   155,   -62,     6,
     -62,   123,   122,   -62,   136,    96,   107,    76,    12,   125,
     -62,   -62,   -62,    10,   129,    72,   -62,   165,   166,   -62,
     163,   -62,   164,   158,   -62,    88,    72,   117,     6,   -62,
       6,   122,   -62,    68,   169,   -62,   -62,   -62,   -62,   -62
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     2,     1,    18,    16,     0,     8,
       0,     4,    26,    23,    21,     0,    20,     0,     7,     9,
      24,     0,     0,    17,    19,    76,    11,     0,     0,    35,
       0,     0,     0,     0,     0,    28,    27,    29,    30,    31,
      32,    33,    34,     0,    70,    69,     0,    65,    66,     0,
      10,    25,     0,    56,     0,    61,    57,    59,    60,     0,
       0,    42,    55,    54,    58,    70,     0,    79,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,    64,    77,     0,    15,     0,
      12,     0,     0,    44,    47,    48,    49,    52,    50,    51,
      53,    43,    63,     0,    78,     0,    36,    71,    67,    74,
       0,    13,     0,    37,    62,     0,     0,     0,     0,    14,
       0,     0,    39,     0,     0,    75,    73,    38,    72,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,     5,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   167,   -62,   -62,   -62,   -62,
     -27,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -23,   -62,
     -62,   149,   -61,   -19,   -62,   -17,    56,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,     6,     8,    12,    18,    27,    19,    49,
     100,   129,     9,    10,    15,    16,    22,    20,    28,    21,
      36,    37,    38,    39,    40,    41,    42,    87,    67,    62,
      63,    46,    47,    64,   101,    65,    97,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    51,    43,     1,    44,    48,     4,    45,    61,    43,
      53,    44,    95,    -6,     5,    48,    94,    54,   112,   124,
       3,    25,    17,    91,    25,    55,    56,    57,    58,    76,
     102,    77,    50,   113,     7,    98,    78,    79,   119,    69,
      99,    88,    59,    71,    60,    85,    86,    93,    80,    81,
      82,    11,    83,    84,    85,    86,    48,   104,   105,   106,
     107,   108,   109,   110,    13,    13,    25,   135,   114,   136,
      23,   133,   117,    53,    91,   123,   103,    14,    14,   138,
      54,    91,    48,    43,    -5,    44,    52,    25,    55,    56,
      57,    58,   125,    71,    80,    81,    82,   132,    83,    84,
      85,    86,    72,    73,   137,    59,    75,    60,    84,    85,
      86,    48,    43,    48,    44,    80,    81,    82,    74,    83,
      84,    85,    86,    29,   120,    82,     3,    83,    84,    85,
      86,    70,   121,   116,    96,    92,   122,    25,    83,    84,
      85,    86,    30,   111,    31,    32,    33,    34,    80,    81,
      82,   115,    83,    84,    85,    86,    80,    81,    82,    86,
      83,    84,    85,    86,    81,    82,   118,    83,    84,    85,
      86,    89,    73,    90,    91,   126,   127,   128,   130,   131,
     139,    66,    24,   134
};

static const yytype_uint8 yycheck[] =
{
      17,    28,    21,     3,    21,    22,     1,     1,    31,    28,
       1,    28,    73,     5,     0,    32,    71,     8,     9,     9,
       4,    15,    14,    13,    15,    16,    17,    18,    19,    52,
       9,    54,    27,    88,     6,     9,    59,    60,    99,    34,
      14,     8,    33,    10,    35,    33,    34,    70,    27,    28,
      29,     5,    31,    32,    33,    34,    73,    80,    81,    82,
      83,    84,    85,    86,     1,     1,    15,   128,    91,   130,
       7,   126,    11,     1,    13,   102,     9,    14,    14,    11,
       8,    13,    99,   102,     5,   102,     8,    15,    16,    17,
      18,    19,   115,    10,    27,    28,    29,     9,    31,    32,
      33,    34,    12,    13,   131,    33,     8,    35,    32,    33,
      34,   128,   131,   130,   131,    27,    28,    29,    10,    31,
      32,    33,    34,     1,     1,    29,     4,    31,    32,    33,
      34,    30,     9,    12,    17,    26,    13,    15,    31,    32,
      33,    34,    20,    12,    22,    23,    24,    25,    27,    28,
      29,     8,    31,    32,    33,    34,    27,    28,    29,    34,
      31,    32,    33,    34,    28,    29,    11,    31,    32,    33,
      34,    12,    13,    12,    13,    10,    10,    14,    14,    21,
      11,    32,    15,   127
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    37,     4,    38,     0,    39,     6,    40,    48,
      49,     5,    41,     1,    14,    50,    51,    14,    42,    44,
      53,    55,    52,     7,    51,    15,    71,    43,    54,     1,
      20,    22,    23,    24,    25,    38,    56,    57,    58,    59,
      60,    61,    62,    69,    71,     1,    67,    68,    71,    45,
      38,    56,     8,     1,     8,    16,    17,    18,    19,    33,
      35,    64,    65,    66,    69,    71,    67,    64,    73,    38,
      30,    10,    12,    13,    10,     8,    64,    64,    64,    64,
      27,    28,    29,    31,    32,    33,    34,    63,     8,    12,
      12,    13,    26,    64,    73,    68,    17,    72,     9,    14,
      46,    70,     9,     9,    64,    64,    64,    64,    64,    64,
      64,    12,     9,    73,    64,     8,    12,    11,    11,    68,
       1,     9,    13,    56,     9,    64,    10,    10,    14,    47,
      14,    21,     9,    73,    72,    68,    68,    56,    11,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    39,    38,    40,    40,    41,    41,    43,
      42,    45,    44,    47,    46,    46,    49,    48,    48,    50,
      50,    52,    51,    51,    54,    53,    55,    53,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    58,    58,    59,
      60,    61,    63,    62,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    71,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     3,     2,     2,     0,     0,
       3,     0,     5,     0,     3,     1,     0,     4,     0,     2,
       1,     0,     4,     1,     0,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     7,     6,
       3,     3,     0,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     1,     1,     4,     7,     1,
       1,     4,     7,     4,     2,     4,     1,     1,     3,     1
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
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
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
#line 53 "src/semantico.y"
    {tsAddMark();}
#line 1359 "src/y.tab.c"
    break;

  case 4:
#line 53 "src/semantico.y"
    {tsCleanIn(); /*printTS();*/}
#line 1365 "src/y.tab.c"
    break;

  case 9:
#line 64 "src/semantico.y"
    { subProg = 1;}
#line 1371 "src/y.tab.c"
    break;

  case 10:
#line 64 "src/semantico.y"
    { subProg = 0;}
#line 1377 "src/y.tab.c"
    break;

  case 11:
#line 67 "src/semantico.y"
    {decParam = 1; tsAddSubprog(yyvsp[0]);}
#line 1383 "src/y.tab.c"
    break;

  case 13:
#line 70 "src/semantico.y"
    { tsUpdateNparam(yyvsp[-1]); nParam = 0; decParam = 0; }
#line 1389 "src/y.tab.c"
    break;

  case 14:
#line 70 "src/semantico.y"
    {yyvsp[-2].nDim=0;}
#line 1395 "src/y.tab.c"
    break;

  case 16:
#line 74 "src/semantico.y"
    {decVar = 1;}
#line 1401 "src/y.tab.c"
    break;

  case 17:
#line 74 "src/semantico.y"
    {decVar = 0;}
#line 1407 "src/y.tab.c"
    break;

  case 21:
#line 81 "src/semantico.y"
    {setType(yyvsp[0]);}
#line 1413 "src/y.tab.c"
    break;

  case 24:
#line 85 "src/semantico.y"
    {decVar = 2;}
#line 1419 "src/y.tab.c"
    break;

  case 26:
#line 86 "src/semantico.y"
    {decVar = 2;}
#line 1425 "src/y.tab.c"
    break;

  case 36:
#line 100 "src/semantico.y"
    {
	  if(yyvsp[-3].type != yyvsp[-1].type){
	    printf("Error semántico(%d),los tipos no coinciden.\n",line,yyvsp[-3].type,yyvsp[-1].type);
	  }
	  if(!equalSize(yyvsp[-3],yyvsp[-1])){
	    printf("Error semántico(%d),los tamaños no coinciden.\n",line);
	  }
	}
#line 1438 "src/y.tab.c"
    break;

  case 37:
#line 111 "src/semantico.y"
    {
  	  if(yyvsp[-2].type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",line);
  	  }
	}
#line 1448 "src/y.tab.c"
    break;

  case 38:
#line 117 "src/semantico.y"
    {
  	  if(yyvsp[-4].type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",line);
  	  }
	}
#line 1458 "src/y.tab.c"
    break;

  case 39:
#line 125 "src/semantico.y"
    {
  if(yyvsp[-1].type != BOOLEANO){
    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",line);
  }
}
#line 1468 "src/y.tab.c"
    break;

  case 41:
#line 136 "src/semantico.y"
    {nParam = 0;}
#line 1474 "src/y.tab.c"
    break;

  case 42:
#line 139 "src/semantico.y"
    { tsCheckReturn(yyvsp[0],&yyval);/* printTS();*/}
#line 1480 "src/y.tab.c"
    break;

  case 44:
#line 142 "src/semantico.y"
    { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; }
#line 1486 "src/y.tab.c"
    break;

  case 45:
#line 143 "src/semantico.y"
    {tsOpSign(yyvsp[-1], yyvsp[0], &yyval); }
#line 1492 "src/y.tab.c"
    break;

  case 46:
#line 144 "src/semantico.y"
    {tsOpUnary(yyvsp[-1], yyvsp[0], &yyval); }
#line 1498 "src/y.tab.c"
    break;

  case 47:
#line 145 "src/semantico.y"
    {tsOpOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1504 "src/y.tab.c"
    break;

  case 48:
#line 146 "src/semantico.y"
    {tsOpAnd(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1510 "src/y.tab.c"
    break;

  case 49:
#line 147 "src/semantico.y"
    {tsOpXor(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1516 "src/y.tab.c"
    break;

  case 50:
#line 148 "src/semantico.y"
    {tsOpEqual(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1522 "src/y.tab.c"
    break;

  case 51:
#line 149 "src/semantico.y"
    {tsOpSign(yyvsp[-2], yyvsp[-1], &yyval); }
#line 1528 "src/y.tab.c"
    break;

  case 52:
#line 150 "src/semantico.y"
    {tsOpRel(yyvsp[-2], yyvsp[-1],yyvsp[0], &yyval); }
#line 1534 "src/y.tab.c"
    break;

  case 53:
#line 151 "src/semantico.y"
    {tsOpMul(yyvsp[-2],yyvsp[-1],yyvsp[0],&yyval);}
#line 1540 "src/y.tab.c"
    break;

  case 54:
#line 152 "src/semantico.y"
    {yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; currentFunction = -1;}
#line 1546 "src/y.tab.c"
    break;

  case 55:
#line 153 "src/semantico.y"
    {yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; }
#line 1552 "src/y.tab.c"
    break;

  case 57:
#line 159 "src/semantico.y"
    { yyval.type = ENTERO; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1558 "src/y.tab.c"
    break;

  case 58:
#line 160 "src/semantico.y"
    {printf("Leido array ident!(%s)\n\n",yyvsp[0].lex); yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; yyval.tDim1 = yyvsp[0].tDim1; yyval.tDim2 = yyvsp[0].tDim2; }
#line 1564 "src/y.tab.c"
    break;

  case 59:
#line 161 "src/semantico.y"
    { yyval.type = BOOLEANO; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1570 "src/y.tab.c"
    break;

  case 60:
#line 162 "src/semantico.y"
    {printf("Leida ct real!\(%s)\n\n",yyvsp[0].lex); yyval.type = REAL; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1576 "src/y.tab.c"
    break;

  case 61:
#line 163 "src/semantico.y"
    { yyval.type = CARACTER; yyval.nDim = 0; yyval.tDim1 = 0; yyval.tDim2 = 0; }
#line 1582 "src/y.tab.c"
    break;

  case 62:
#line 165 "src/semantico.y"
    { tsFunctionCall(yyvsp[-3], &yyval); nParam = 0; }
#line 1588 "src/y.tab.c"
    break;

  case 63:
#line 166 "src/semantico.y"
    { tsFunctionCall(yyvsp[-2], &yyval); nParam = 0;}
#line 1594 "src/y.tab.c"
    break;

  case 66:
#line 173 "src/semantico.y"
    { if(decVar == 1){
				yyvsp[0].nDim=0; yyvsp[0].tDim1 = 0; yyvsp[0].tDim2 = 0; tsAddId(yyvsp[0]);
			      } 
		             else{
				if(decParam == 0)
				   tsGetId(yyvsp[0], &yyval);
			     }
			    }
#line 1607 "src/y.tab.c"
    break;

  case 67:
#line 181 "src/semantico.y"
    { if(decVar == 1) { yyvsp[-3].nDim=1; yyvsp[-3].tDim1=atoi(yyvsp[-1].lex); yyvsp[-3].tDim2=0; tsAddId(yyvsp[-3]); } }
#line 1613 "src/y.tab.c"
    break;

  case 68:
#line 182 "src/semantico.y"
    { if(decVar == 1) { yyvsp[-6].nDim=2; yyvsp[-6].tDim1=atoi(yyvsp[-4].lex); yyvsp[-6].tDim2=atoi(yyvsp[-1].lex); tsAddId(yyvsp[-6]); } }
#line 1619 "src/y.tab.c"
    break;

  case 70:
#line 186 "src/semantico.y"
    { if(decVar == 1){
				yyvsp[0].nDim=0; yyvsp[0].tDim1 = 0; yyvsp[0].tDim2 = 0; tsAddId(yyvsp[0]);
			      } 
		             else{
				if(decParam == 0)
				   tsGetId(yyvsp[0], &yyval);
			     }
			    }
#line 1632 "src/y.tab.c"
    break;

  case 71:
#line 194 "src/semantico.y"
    { if(decVar == 2){ tsGetId(yyvsp[-3], &yyval); yyval.tDim1 = yyvsp[-1].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; yyval.nDim = yyval.nDim -1; } }
#line 1638 "src/y.tab.c"
    break;

  case 72:
#line 195 "src/semantico.y"
    { if(decVar == 2){ tsGetId(yyvsp[-6], &yyval); yyval.tDim1 = yyvsp[-4].tDim1; yyval.tDim2 = yyvsp[-1].tDim2; yyval.nDim = yyval.nDim -2;} }
#line 1644 "src/y.tab.c"
    break;

  case 73:
#line 198 "src/semantico.y"
    { yyvsp[0].nDim=0; nParam++; setType(yyvsp[-1]); tsAddParam(yyvsp[0]); }
#line 1650 "src/y.tab.c"
    break;

  case 74:
#line 199 "src/semantico.y"
    { yyvsp[0].nDim=0; nParam++; setType(yyvsp[-1]); tsAddParam(yyvsp[0]); }
#line 1656 "src/y.tab.c"
    break;

  case 78:
#line 211 "src/semantico.y"
    {nParam++;}
#line 1662 "src/y.tab.c"
    break;

  case 79:
#line 212 "src/semantico.y"
    {nParam++;}
#line 1668 "src/y.tab.c"
    break;


#line 1672 "src/y.tab.c"

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
#line 217 "src/semantico.y"



#include "lex.yy.c"

void yyerror(const char * msg) {
  printf("\n(Línea %d) %s\n", yylineno, msg);
}
