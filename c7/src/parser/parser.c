/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser/c7.y"

    #include <stdlib.h>
    #include <stdio.h>
    #include "ast.h"

    int yylex();
    void yyerror(const char *s);

#line 80 "parser/parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BRACK_LEFT = 3,                 /* BRACK_LEFT  */
  YYSYMBOL_BRACK_RIGHT = 4,                /* BRACK_RIGHT  */
  YYSYMBOL_PARENT_LEFT = 5,                /* PARENT_LEFT  */
  YYSYMBOL_PARENT_RIGHT = 6,               /* PARENT_RIGHT  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_ADD = 8,                        /* ADD  */
  YYSYMBOL_SUB = 9,                        /* SUB  */
  YYSYMBOL_MULT = 10,                      /* MULT  */
  YYSYMBOL_DIV = 11,                       /* DIV  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_WRITELN = 17,                   /* WRITELN  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_EMPTY = 20,                     /* EMPTY  */
  YYSYMBOL_STRING = 21,                    /* STRING  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_FORALL = 23,                    /* FORALL  */
  YYSYMBOL_IN = 24,                        /* IN  */
  YYSYMBOL_IS_SET = 25,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 26,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 27,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 28,                    /* EXISTS  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_NOT_OP = 31,                    /* NOT_OP  */
  YYSYMBOL_L_OP = 32,                      /* L_OP  */
  YYSYMBOL_G_OP = 33,                      /* G_OP  */
  YYSYMBOL_EQ_OP = 34,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 35,                     /* NE_OP  */
  YYSYMBOL_LE_OP = 36,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 37,                     /* GE_OP  */
  YYSYMBOL_OR_OP = 38,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 39,                    /* AND_OP  */
  YYSYMBOL_INTEGER = 40,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_THEN = 42,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_stmts = 45,                     /* stmts  */
  YYSYMBOL_stmt = 46,                      /* stmt  */
  YYSYMBOL_func_stmt = 47,                 /* func_stmt  */
  YYSYMBOL_var_decl_stmt = 48,             /* var_decl_stmt  */
  YYSYMBOL_param_list = 49,                /* param_list  */
  YYSYMBOL_simple_param_list = 50,         /* simple_param_list  */
  YYSYMBOL_flex_block_struct = 51,         /* flex_block_struct  */
  YYSYMBOL_compound_block_stmt = 52,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 53,               /* block_stmts  */
  YYSYMBOL_block_stmt = 54,                /* block_stmt  */
  YYSYMBOL_flow_control = 55,              /* flow_control  */
  YYSYMBOL_or_cond_expr = 56,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 57,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 58,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 59,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 60,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 61,             /* rel_cond_expr  */
  YYSYMBOL_rel_ops = 62,                   /* rel_ops  */
  YYSYMBOL_set_expr = 63,                  /* set_expr  */
  YYSYMBOL_func_call = 64,                 /* func_call  */
  YYSYMBOL_set_func_call = 65,             /* set_func_call  */
  YYSYMBOL_simple_expr = 66,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 67,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 68,                 /* func_expr  */
  YYSYMBOL_arith_expr = 69,                /* arith_expr  */
  YYSYMBOL_term = 70,                      /* term  */
  YYSYMBOL_factor = 71                     /* factor  */
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
typedef yytype_int16 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  397

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    41,    42,    45,    46,    49,    52,    55,
      56,    57,    60,    61,    62,    65,    66,    69,    70,    73,
      74,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      88,    89,    90,    91,    94,    95,    98,    99,   102,   103,
     106,   107,   110,   111,   114,   115,   116,   117,   120,   121,
     122,   123,   124,   127,   130,   133,   134,   135,   136,   139,
     140,   143,   144,   145,   146,   149,   150,   151,   154,   155,
     156,   159,   160,   161,   164,   165,   166,   167
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BRACK_LEFT",
  "BRACK_RIGHT", "PARENT_LEFT", "PARENT_RIGHT", "SEMICOLON", "ADD", "SUB",
  "MULT", "DIV", "CHAR", "COMMA", "ASSIGN", "READ", "WRITE", "WRITELN",
  "TYPE", "ID", "EMPTY", "STRING", "RETURN", "FORALL", "IN", "IS_SET",
  "ADD_SET", "REMOVE", "EXISTS", "IF", "ELSE", "NOT_OP", "L_OP", "G_OP",
  "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER",
  "FLOAT", "THEN", "$accept", "program", "stmts", "stmt", "func_stmt",
  "var_decl_stmt", "param_list", "simple_param_list", "flex_block_struct",
  "compound_block_stmt", "block_stmts", "block_stmt", "flow_control",
  "or_cond_expr", "and_cond_expr", "unary_cond_expr", "eq_cond_expr",
  "equal_ops", "rel_cond_expr", "rel_ops", "set_expr", "func_call",
  "set_func_call", "simple_expr", "func_cte_expr", "func_expr",
  "arith_expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
#endif

#define YYPACT_NINF (-226)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    -6,    20,    91,   101,   103,   134,   168,  -226,   149,
     296,   158,    16,   111,   313,    60,    53,  1765,   192,    81,
     224,   117,   122,   123,   141,   180,    -3,   207,   210,   213,
     238,   244,   269,  1781,  1797,  1813,  1829,   272,   275,   319,
     216,    34,    34,   292,    15,    -3,    34,   304,   612,   309,
     310,   655,   764,   314,   315,   339,   340,   349,    89,   805,
     838,    67,   301,    67,    67,    67,    85,   228,  1845,  1861,
    1877,   193,   346,   355,   325,   327,   359,   356,   255,  1893,
       7,     7,     7,     7,   363,   252,   364,   366,   369,   370,
     787,    85,     5,    44,   165,    46,  1080,  1097,   446,   381,
     385,   404,   406,   362,  1909,   408,  1098,    26,  1115,  1132,
    1149,  1166,  1183,  1664,    34,   411,   412,   421,   429,   175,
    1681,    85,    85,   113,   137,   267,    37,   110,   142,   161,
     179,   186,  1925,  1941,  1957,   331,  1973,  1989,  2005,   399,
    1275,   183,   194,  1114,   637,  1698,  1303,  2021,   392,  1664,
    2037,    34,   431,   681,   435,   439,   444,   448,   460,   471,
     458,   693,   480,   484,   487,   489,   374,   714,   728,  2053,
      34,   453,   257,   474,   475,   495,   497,   505,   506,   280,
     390,   490,   496,   501,   508,   230,   415,   464,    34,   424,
     528,   529,   537,   540,   851,   899,  1131,  1148,   916,   961,
      26,    26,   186,   186,    26,   734,  2069,  2085,   548,   550,
     556,   494,   236,    -3,   557,   558,  1319,  1335,  1351,  1367,
     539,   563,    26,   978,  2101,   566,   567,   569,   516,   270,
      -3,   575,   584,   560,   561,   565,   572,   589,   590,   592,
     398,    15,   585,    67,    67,    67,    26,    26,   599,   434,
      15,   591,    67,    67,    67,   204,   204,   204,   204,   600,
     499,    15,   593,    67,    67,    67,   186,   186,   891,   908,
     995,  1012,  2117,  2133,  1383,  2149,   595,    34,    34,   604,
      -3,   608,    67,    85,  1399,  1415,   596,  2165,   610,    34,
      34,   623,    -3,   624,    67,    85,   603,   606,   631,   933,
     342,   632,   633,   635,   636,   950,  1082,   620,   507,   345,
     641,   643,   648,   651,    26,   513,   530,   541,   549,   568,
    1165,  1029,   351,   652,   671,   673,   674,  1046,  1063,  2181,
    1431,   675,   678,   687,  1447,   689,  1463,   692,    13,   677,
     704,   707,   708,   691,   710,   699,   729,    35,   735,   746,
     747,   748,   756,   739,   740,   753,   754,   757,  1182,  1199,
    1216,  1233,  1250,   789,   794,   796,  1479,  1681,  1681,   797,
     798,   801,   779,  1715,  1715,  1495,  1511,  1527,  1543,  1559,
     788,   799,   803,   804,   807,  1732,  1749,  1587,  1603,  1631,
     808,   823,   824,  1681,  1715,  1647,   826
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,  -226,   825,  -226,     0,  -226,   -71,  -116,   -14,
    -192,    10,   -44,  -225,   737,   -86,  -226,  -226,   738,  -226,
     -57,    23,   214,   502,   614,   685,   405,   587,   503
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    33,    13,    75,   136,   234,
      34,   235,    36,    92,    93,    94,    95,   125,    96,   131,
      84,   181,   182,    85,   183,   184,   185,   167,   168
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    18,    46,     6,   140,   119,    87,    88,    89,    47,
       1,   120,   107,     7,   273,   275,    48,    49,    50,   368,
       8,   -14,    28,    29,    30,    31,   108,    35,   -14,   147,
     148,   204,   287,   150,    74,    14,   142,    51,    52,   151,
      37,   374,   -52,   121,    68,   205,   152,    51,    52,    53,
     -35,   121,   -39,   153,   154,   155,   -52,    37,   338,   156,
     157,   158,   159,    17,   162,   162,   160,   161,    53,   162,
     347,    19,   170,   121,   160,   161,   219,   -52,   -52,   171,
     123,   124,   -35,   122,   -39,   -39,   172,   173,   174,   196,
     188,    -2,   175,   176,   177,   178,   -59,    80,    81,   137,
      39,    -4,   236,    -5,   189,    90,   217,   179,   180,     1,
     190,   191,   192,   193,   196,   -48,    91,    15,   -42,    -4,
     216,    -5,    40,   138,    16,   194,   195,    41,    42,   -48,
     218,   137,   -42,   -42,    -6,   137,    37,   162,   -42,   -42,
     -42,   -42,   -43,   220,   196,   196,   233,   -49,   196,    -3,
     -48,   -48,    -6,   -42,   -42,   138,   -43,   -43,    -8,   138,
      43,   -49,   -43,   -43,   -43,   -43,   -50,    -3,    37,   237,
     300,   -37,    37,    10,   162,    11,    -8,   -43,   -43,   309,
     -50,   -38,   -49,   -49,   -51,    44,   302,   303,   304,   -34,
     322,   222,    -7,   162,    45,   311,   312,   313,   -51,    99,
     -36,   -50,   -50,   -37,   -37,   223,   324,   325,   326,   314,
      -7,   162,    61,   -38,   -38,    62,    35,    35,    63,   -51,
     -51,   -34,   122,   315,   -18,   337,   194,   195,   -17,    37,
      37,    38,   -36,   -36,    35,    71,    53,   346,   255,   256,
      54,    44,   -18,    64,   179,   180,   -17,    37,    38,    65,
     280,   378,   379,    53,   -59,   163,   163,   383,   384,    54,
     163,   106,   250,   200,   201,   -76,   -76,   -76,   -76,   388,
     390,   391,   188,   392,    66,    44,   114,   395,   396,    69,
     197,   -76,    70,    68,   292,    68,   189,    90,   -74,   -74,
     -74,   -74,   190,   191,   192,   193,    37,    68,    37,   169,
     162,   162,   -11,    53,   -74,   197,   196,   194,   195,   -11,
      37,   -63,   162,   162,    12,    53,   -61,   -62,   196,   -10,
      86,   -65,   -66,   219,   219,    -9,   -10,    38,   163,   236,
     236,   -13,    -9,   102,   221,   197,   197,   -12,   -13,   197,
     103,   219,   236,   236,   -12,   236,    79,   -60,   348,   219,
     236,   353,   100,   217,   217,   103,   -64,   358,   103,    38,
     238,   101,   105,    38,   103,   163,   104,   216,   216,   113,
     115,   217,   116,   233,   233,   117,   118,   218,   218,   217,
     -59,   135,   200,   201,   163,   216,   233,   233,   132,   233,
     220,   220,   133,   216,   233,   218,   237,   237,   -75,   -75,
     -75,   -75,   163,   218,   299,   -53,   200,   201,   220,   237,
     237,   134,   237,   -54,   -75,   -67,   220,   237,   -55,   -56,
      38,    38,   149,   -70,   -70,   257,   258,    54,   -57,   261,
     -76,    58,   -76,   -76,   -76,   -76,   -58,   -63,    38,   -70,
     308,   -61,   200,   201,    54,   -62,   166,   166,   -76,   242,
      58,    78,   -45,   243,   202,   203,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -74,   244,   -74,   -74,   -74,   -74,
     -45,    98,   -73,   -73,   -73,   -73,   245,   -63,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -65,    38,   -73,    38,
     -66,   163,   163,   -60,    54,   -64,    98,   197,   -61,   -62,
     251,    38,   252,   163,   163,   321,    54,   200,   201,   197,
     253,   254,    78,   279,   -65,   -77,   -77,   -77,   -77,   166,
     -66,   -76,   -76,   -76,   -76,   -60,    98,    98,    55,    60,
      98,   -77,   -64,   262,   263,   291,   144,   -76,   -68,   -68,
     257,   258,   264,    72,    73,   265,   284,    76,    60,   -69,
     -69,   257,   258,   276,   -68,   277,   240,   -71,   -71,   -71,
     -71,   278,   282,   283,   187,   -69,   187,   187,   187,   199,
     285,   288,   289,   -71,   290,   249,   -72,   -72,   -72,   -72,
     294,   221,   221,    60,    60,   111,   112,   238,   238,   295,
     -21,   -15,   -72,   260,   199,   -16,   296,   297,   298,   221,
     238,   238,   -24,   238,   301,   307,   320,   221,   238,   240,
     310,   334,   323,    59,   331,   336,   139,    44,    58,   -76,
     -76,   -76,   -76,   -76,   199,   199,   -18,   260,   199,   340,
     343,   345,    59,   -22,   199,    58,   -23,   -67,   349,   350,
      56,   351,   352,   -44,   -67,   202,   203,   354,   186,   355,
     186,   186,   186,   198,   356,   164,   164,   357,   359,    56,
      77,   -44,   -74,   -74,   -74,   -74,   -74,   109,   110,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   360,   198,   361,
     362,   363,   166,   166,   364,    58,   241,   -76,    98,   -76,
     -76,   -76,   -76,   365,   166,   166,   366,    58,   367,   -75,
      98,   -75,   -75,   -75,   -75,   199,   199,   -17,   198,   198,
     369,    57,   198,   370,   371,   281,    60,   372,   198,   249,
     -70,    -8,   -70,   -70,   246,   247,   165,   165,   164,   -29,
      57,   165,   293,    60,   -73,   373,   -73,   -73,   -73,   -73,
     -76,   -54,   -76,   -76,   -76,   -76,   187,   187,   187,   305,
     306,    97,   -55,   -56,   -57,   187,   187,   187,   187,   187,
     318,   319,   -58,   -54,   -55,   239,   187,   187,   187,   327,
     328,   -75,   -75,   -75,   -75,   -75,    97,   -56,   -57,   332,
     333,   -58,   335,    60,   248,   187,   199,   268,   269,   270,
     271,   341,   342,   -46,   344,    60,   375,   187,   199,   165,
      59,   376,   259,   377,   380,   381,    97,    97,   382,   -28,
      97,   -46,   -70,   -70,   -70,    82,    83,    59,   -25,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,    56,     9,   -26,
     186,   186,   186,   -27,   -33,     0,   165,   386,   -31,   186,
     186,   186,   316,   317,    56,   -73,   -73,   -73,   -73,   -73,
     186,   186,   186,   393,   394,   165,   -32,   -74,   141,   -74,
     -74,   -74,   -74,   143,     0,     0,     0,    59,     0,   186,
     198,     0,     0,   165,     0,   -74,     0,     0,     0,    59,
       0,   186,   198,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   164,   164,     0,    56,     0,     0,   -68,    57,   -68,
     -68,   246,   247,   164,   164,   -75,    56,   -75,   -75,   -75,
     -75,     0,     0,     0,   -69,    57,   -69,   -69,   246,   247,
       0,     0,   -70,   -75,   -70,   -70,   266,   267,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -77,
     -70,   -77,   -77,   -77,   -77,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,
     -71,   -71,   165,   165,     0,    57,     0,   -73,    97,   -73,
     -73,   -73,   -73,     0,   165,   165,     0,    57,     0,     0,
      97,     0,     0,     0,   -76,   -73,   -76,   -76,   -76,   -76,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -68,   -76,   -68,   -68,   266,   267,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -69,   -68,
     -69,   -69,   266,   267,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -77,   -69,   -77,   -77,   -77,
     -77,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -71,   -77,   -71,   -71,   -71,   -71,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -72,
     -71,   -72,   -72,   -72,   -72,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -41,   -72,   -72,     0,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -47,   126,   -77,   -77,   -77,   -77,   -77,
       0,     0,   127,   128,   -41,   -41,   129,   130,   -41,   -41,
     -40,   -47,   -76,   -76,   -76,   -76,   -76,     0,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -65,   126,   -68,
     -68,   -68,    82,    83,     0,     0,   127,   128,   -40,   -40,
     129,   130,   -40,   -40,   -66,   -65,   -69,   -69,   -69,    82,
      83,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -67,   -66,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -54,   -67,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -55,   -54,     0,     0,     0,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -56,   -55,     0,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -57,
     -56,     0,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -58,   -57,     0,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,   -58,     0,     0,     0,     0,   -30,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   145,   224,     0,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   226,
     227,   228,   229,   -21,     0,   230,   231,     0,    28,    29,
      30,    31,   232,     0,   -21,   -21,   -21,   -21,   -21,   -15,
       0,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
     -15,   -15,   -15,   -15,   -15,   -16,     0,   -15,   -15,     0,
     -15,   -15,   -15,   -15,   -15,   -15,   -16,   -16,   -16,   -16,
     -16,   -24,     0,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -16,   -24,   -24,   -24,   -24,   -24,   -18,     0,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -18,   -18,
     -18,   -18,   -18,   -22,     0,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,   -22,   -22,   -22,   -22,   -22,   -23,
       0,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,
     -23,   -23,   -23,   -23,   -23,   -17,     0,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -17,   -17,   -17,   -17,
     -17,    -8,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,
     -17,   -17,    -8,    -8,    -8,    -8,    -8,   -29,     0,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,   -29,   -29,
     -29,   -29,   -29,   -28,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -28,   -28,   -28,   -28,   -28,   -25,
       0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -25,   -25,   -25,   -25,   -25,   -26,     0,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -26,   -26,   -26,   -26,
     -26,   -27,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -27,   -27,   -27,   -27,   -27,   -33,     0,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -33,   -33,
     -33,   -33,   -33,   -30,     0,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   385,
     224,     0,   283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   226,   227,   228,   229,   -31,     0,   230,
     231,     0,    28,    29,    30,    31,   232,     0,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   224,     0,   295,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   226,   227,   228,
     229,   -32,     0,   230,   231,     0,    28,    29,    30,    31,
     232,     0,   -32,   -32,   -32,   -32,   -32,   206,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,    21,
      22,    23,    24,    25,   207,     0,    26,    27,     0,    28,
      29,    30,    31,    32,     0,     0,   208,   209,   210,   211,
     212,   206,     0,   213,   214,     0,    28,    29,    30,    31,
     215,     0,     0,    21,    22,    23,    24,    25,   224,     0,
      26,    27,     0,    28,    29,    30,    31,   146,     0,     0,
     225,   226,   227,   228,   229,   207,     0,   230,   231,     0,
      28,    29,    30,    31,   232,     0,     0,   208,   209,   210,
     211,   212,   224,     0,   213,   214,     0,    28,    29,    30,
      31,   387,     0,     0,   225,   226,   227,   228,   229,    20,
       0,   230,   231,     0,    28,    29,    30,    31,   389,     0,
      21,    22,    23,    24,    25,   -21,     0,    26,    27,     0,
      28,    29,    30,    31,    32,     0,   -21,   -21,   -21,   -21,
     -21,    67,     0,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,     0,    21,    22,    23,    24,    25,   -20,     0,    26,
      27,     0,    28,    29,    30,    31,    32,     0,   -20,   -20,
     -20,   -20,   -20,   -24,     0,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -24,   -24,   -24,   -24,   -24,   -19,
       0,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -19,   -19,   -19,   -19,   -19,   -22,     0,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -22,   -22,   -22,   -22,
     -22,   -23,     0,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,     0,   -23,   -23,   -23,   -23,   -23,   -29,     0,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   -23,     0,   -29,   -29,
     -29,   -29,   -29,   -28,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -28,   -28,   -28,   -28,   -28,   -25,
       0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -25,   -25,   -25,   -25,   -25,   -26,     0,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -26,   -26,   -26,   -26,
     -26,   -27,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -27,   -27,   -27,   -27,   -27,   -33,     0,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -33,   -33,
     -33,   -33,   -33,   -15,     0,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,     0,   -15,   -15,   -15,   -15,   -15,   -16,
       0,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,     0,
     -16,   -16,   -16,   -16,   -16,   -31,     0,   -16,   -16,     0,
     -16,   -16,   -16,   -16,   -16,     0,   -31,   -31,   -31,   -31,
     -31,   -32,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,     0,   -32,   -32,   -32,   -32,   -32,    -8,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,    -8,    -8,
      -8,    -8,    -8,   272,     0,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,     0,    21,    22,    23,    24,    25,   274,
       0,    26,    27,     0,    28,    29,    30,    31,    32,     0,
      21,    22,    23,    24,    25,   286,     0,    26,    27,     0,
      28,    29,    30,    31,    32,     0,    21,    22,    23,    24,
      25,   -18,     0,    26,    27,     0,    28,    29,    30,    31,
      32,     0,   -18,   -18,   -18,   -18,   -18,   329,     0,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,     0,    21,    22,
      23,    24,    25,   330,     0,    26,    27,     0,    28,    29,
      30,    31,    32,     0,    21,    22,    23,    24,    25,   339,
       0,    26,    27,     0,    28,    29,    30,    31,    32,     0,
      21,    22,    23,    24,    25,   -17,     0,    26,    27,     0,
      28,    29,    30,    31,    32,     0,   -17,   -17,   -17,   -17,
     -17,     0,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,
     -17
};

static const yytype_int16 yycheck[] =
{
       0,    15,     5,     3,   120,    91,    63,    64,    65,    12,
      18,     6,     5,    19,   206,   207,    19,    20,    21,     6,
       0,     6,    25,    26,    27,    28,    19,    17,    13,   145,
     146,     5,   224,   149,    19,    19,   122,    40,    41,     5,
      17,     6,     5,    38,    34,    19,    12,    40,    41,    26,
       6,    38,     6,    19,    20,    21,    19,    34,   283,    25,
      26,    27,    28,     3,    41,    42,    40,    41,    45,    46,
     295,    18,     5,    38,    40,    41,   120,    40,    41,    12,
      34,    35,    38,    39,    38,    39,    19,    20,    21,    66,
       5,     0,    25,    26,    27,    28,     7,     8,     9,   113,
      19,     0,   146,     0,    19,    20,   120,    40,    41,    18,
      25,    26,    27,    28,    91,     5,    31,     6,     5,    18,
     120,    18,     5,   113,    13,    40,    41,     5,     5,    19,
     120,   145,    19,    20,     0,   149,   113,   114,    25,    26,
      27,    28,     5,   120,   121,   122,   146,     5,   125,     0,
      40,    41,    18,    40,    41,   145,    19,    20,     0,   149,
      19,    19,    25,    26,    27,    28,     5,    18,   145,   146,
     241,     6,   149,     5,   151,     7,    18,    40,    41,   250,
      19,     6,    40,    41,     5,     5,   243,   244,   245,     6,
     261,     5,     0,   170,    14,   252,   253,   254,    19,     6,
       6,    40,    41,    38,    39,    19,   263,   264,   265,     5,
      18,   188,     5,    38,    39,     5,   206,   207,     5,    40,
      41,    38,    39,    19,     0,   282,    40,    41,     0,   206,
     207,    17,    38,    39,   224,    19,   213,   294,     8,     9,
      26,     5,    18,     5,    40,    41,    18,   224,    34,     5,
      14,   367,   368,   230,    24,    41,    42,   373,   374,    45,
      46,     6,     5,     8,     9,     8,     9,    10,    11,   385,
     386,   387,     5,   389,     5,     5,    24,   393,   394,     7,
      66,    24,     7,   273,    14,   275,    19,    20,     8,     9,
      10,    11,    25,    26,    27,    28,   273,   287,   275,     7,
     277,   278,     6,   280,    24,    91,   283,    40,    41,    13,
     287,     7,   289,   290,    18,   292,     7,     7,   295,     6,
      19,     7,     7,   367,   368,     6,    13,   113,   114,   373,
     374,     6,    13,     6,   120,   121,   122,     6,    13,   125,
      13,   385,   386,   387,    13,   389,     7,     7,     6,   393,
     394,     6,     6,   367,   368,    13,     7,     6,    13,   145,
     146,     6,     6,   149,    13,   151,     7,   367,   368,     6,
       6,   385,     6,   373,   374,     6,     6,   367,   368,   393,
       6,    19,     8,     9,   170,   385,   386,   387,     7,   389,
     367,   368,     7,   393,   394,   385,   373,   374,     8,     9,
      10,    11,   188,   393,     6,     6,     8,     9,   385,   386,
     387,     7,   389,     7,    24,     7,   393,   394,     7,     7,
     206,   207,    30,     8,     9,    10,    11,   213,     7,     5,
       6,    26,     8,     9,    10,    11,     7,     6,   224,    24,
       6,     6,     8,     9,   230,     6,    41,    42,    24,     5,
      45,    46,     6,     5,     8,     9,    32,    33,    34,    35,
      36,    37,    38,    39,     6,     5,     8,     9,    10,    11,
      24,    66,     8,     9,    10,    11,     5,    24,    32,    33,
      34,    35,    36,    37,    38,    39,     6,   273,    24,   275,
       6,   277,   278,     6,   280,     6,    91,   283,    24,    24,
       5,   287,     5,   289,   290,     6,   292,     8,     9,   295,
       5,     5,   107,    19,    24,     8,     9,    10,    11,   114,
      24,     8,     9,    10,    11,    24,   121,   122,    26,    26,
     125,    24,    24,     5,     5,    19,   131,    24,     8,     9,
      10,    11,     5,    41,    42,     5,     7,    45,    45,     8,
       9,    10,    11,     5,    24,     5,   151,     8,     9,    10,
      11,     5,     5,     5,    61,    24,    63,    64,    65,    66,
       7,     5,     5,    24,     5,   170,     8,     9,    10,    11,
       5,   367,   368,    80,    81,    82,    83,   373,   374,     5,
      30,    30,    24,   188,    91,    30,     7,     7,     6,   385,
     386,   387,    30,   389,    19,     6,     6,   393,   394,   204,
      19,     7,    19,    26,    19,     7,   114,     5,   213,     7,
       8,     9,    10,    11,   121,   122,    30,   222,   125,    19,
       7,     7,    45,    30,   131,   230,    30,     6,     6,     6,
      26,     6,     6,     6,    24,     8,     9,     6,    61,     6,
      63,    64,    65,    66,     6,    41,    42,     6,     6,    45,
      46,    24,     7,     8,     9,    10,    11,    80,    81,    32,
      33,    34,    35,    36,    37,    38,    39,     6,    91,     6,
       6,     6,   277,   278,     6,   280,     5,     6,   283,     8,
       9,    10,    11,     6,   289,   290,     7,   292,     6,     6,
     295,     8,     9,    10,    11,   202,   203,    30,   121,   122,
       6,    26,   125,     6,     6,   213,   213,     7,   131,   314,
       6,    30,     8,     9,    10,    11,    41,    42,   114,    30,
      45,    46,   230,   230,     6,     6,     8,     9,    10,    11,
       6,     6,     8,     9,    10,    11,   243,   244,   245,   246,
     247,    66,     6,     6,     6,   252,   253,   254,   255,   256,
     257,   258,     6,    24,    24,   151,   263,   264,   265,   266,
     267,     7,     8,     9,    10,    11,    91,    24,    24,   277,
     278,    24,   280,   280,   170,   282,   283,   200,   201,   202,
     203,   289,   290,     6,   292,   292,     7,   294,   295,   114,
     213,     7,   188,     7,     7,     7,   121,   122,     7,    30,
     125,    24,     7,     8,     9,    10,    11,   230,    30,    32,
      33,    34,    35,    36,    37,    38,    39,   213,     3,    30,
     243,   244,   245,    30,    30,    -1,   151,    30,    30,   252,
     253,   254,   255,   256,   230,     7,     8,     9,    10,    11,
     263,   264,   265,    30,    30,   170,    30,     6,   121,     8,
       9,    10,    11,   125,    -1,    -1,    -1,   280,    -1,   282,
     283,    -1,    -1,   188,    -1,    24,    -1,    -1,    -1,   292,
      -1,   294,   295,    32,    33,    34,    35,    36,    37,    38,
      39,   277,   278,    -1,   280,    -1,    -1,     6,   213,     8,
       9,    10,    11,   289,   290,     6,   292,     8,     9,    10,
      11,    -1,    -1,    -1,     6,   230,     8,     9,    10,    11,
      -1,    -1,     6,    24,     8,     9,    10,    11,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,     8,     9,    10,    11,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,   277,   278,    -1,   280,    -1,     6,   283,     8,
       9,    10,    11,    -1,   289,   290,    -1,   292,    -1,    -1,
     295,    -1,    -1,    -1,     6,    24,     8,     9,    10,    11,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     8,     9,    10,    11,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
       8,     9,    10,    11,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,     8,     9,    10,
      11,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,     8,     9,    10,    11,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,     8,     9,    10,    11,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,     6,    -1,
       8,     9,    10,    11,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,     7,     8,     9,    10,    11,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
       6,    24,     7,     8,     9,    10,    11,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,     6,    24,     7,
       8,     9,    10,    11,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    24,     7,     8,     9,    10,
      11,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     7,     8,     9,    10,    11,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
       7,     8,     9,    10,    11,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    24,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,     3,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,     3,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    15,    16,    17,    18,    19,     3,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    15,
      16,    17,    18,    19,     3,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    15,    16,    17,    18,
      19,     3,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    -1,    15,    16,    17,    18,    19,     3,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    -1,
      15,    16,    17,    18,    19,     3,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    -1,    15,    16,    17,
      18,    19,     3,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    15,    16,    17,    18,
      19,     4,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,    15,    16,    17,    18,    19,     4,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,    15,    16,
      17,    18,    19,     4,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,    15,    16,    17,    18,    19,     4,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      15,    16,    17,    18,    19,     4,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    44,    45,    46,    47,    48,    19,     0,    46,
       5,     7,    18,    49,    19,     6,    13,     3,    52,    18,
       4,    15,    16,    17,    18,    19,    22,    23,    25,    26,
      27,    28,    29,    48,    53,    54,    55,    64,    65,    19,
       5,     5,     5,    19,     5,    14,     5,    12,    19,    20,
      21,    40,    41,    64,    65,    66,    67,    68,    69,    70,
      71,     5,     5,     5,     5,     5,     5,     4,    54,     7,
       7,    19,    66,    66,    19,    50,    66,    67,    69,     7,
       8,     9,    10,    11,    63,    66,    19,    63,    63,    63,
      20,    31,    56,    57,    58,    59,    61,    68,    69,     6,
       6,     6,     6,    13,     7,     6,     6,     5,    19,    70,
      70,    71,    71,     6,    24,     6,     6,     6,     6,    58,
       6,    38,    39,    34,    35,    60,    24,    32,    33,    36,
      37,    62,     7,     7,     7,    19,    51,    52,    54,    66,
      51,    57,    58,    61,    69,    30,    29,    51,    51,    30,
      51,     5,    12,    19,    20,    21,    25,    26,    27,    28,
      40,    41,    64,    65,    67,    68,    69,    70,    71,     7,
       5,    12,    19,    20,    21,    25,    26,    27,    28,    40,
      41,    64,    65,    67,    68,    69,    70,    71,     5,    19,
      25,    26,    27,    28,    40,    41,    64,    65,    70,    71,
       8,     9,     8,     9,     5,    19,     3,     3,    15,    16,
      17,    18,    19,    22,    23,    29,    48,    52,    54,    55,
      64,    65,     5,    19,     3,    15,    16,    17,    18,    19,
      22,    23,    29,    48,    52,    54,    55,    64,    65,    67,
      69,     5,     5,     5,     5,     5,    10,    11,    67,    69,
       5,     5,     5,     5,     5,     8,     9,    10,    11,    67,
      69,     5,     5,     5,     5,     5,    10,    11,    70,    70,
      70,    70,     4,    53,     4,    53,     5,     5,     5,    19,
      14,    66,     5,     5,     7,     7,     4,    53,     5,     5,
       5,    19,    14,    66,     5,     5,     7,     7,     6,     6,
      50,    19,    63,    63,    63,    71,    71,     6,     6,    50,
      19,    63,    63,    63,     5,    19,    70,    70,    71,    71,
       6,     6,    50,    19,    63,    63,    63,    71,    71,     4,
       4,    19,    66,    66,     7,    66,     7,    63,    56,     4,
      19,    66,    66,     7,    66,     7,    63,    56,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     7,     6,     6,     6,
       6,     6,     7,     6,     6,     7,     7,     7,    51,    51,
       7,     7,     7,    51,    51,    30,    30,    29,    51,    29,
      51,    51,    51,    30,    30,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    47,    48,    49,
      49,    49,    50,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      62,    62,    62,    63,    64,    65,    65,    65,    65,    66,
      66,    67,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     2,
       1,     1,     2,     2,     1,     5,     5,     5,     4,     3,
       5,     7,    10,     5,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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

#line 2002 "parser/parser.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 170 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
