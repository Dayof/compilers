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
  YYSYMBOL_EMPTY = 19,                     /* EMPTY  */
  YYSYMBOL_STRING = 20,                    /* STRING  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_FORALL = 22,                    /* FORALL  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
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
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_FLOAT = 42,                     /* FLOAT  */
  YYSYMBOL_THEN = 43,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_stmts = 46,                     /* stmts  */
  YYSYMBOL_stmt = 47,                      /* stmt  */
  YYSYMBOL_func_stmt = 48,                 /* func_stmt  */
  YYSYMBOL_var_decl_stmt = 49,             /* var_decl_stmt  */
  YYSYMBOL_param_list = 50,                /* param_list  */
  YYSYMBOL_simple_param_list = 51,         /* simple_param_list  */
  YYSYMBOL_flex_block_struct = 52,         /* flex_block_struct  */
  YYSYMBOL_compound_block_stmt = 53,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 54,               /* block_stmts  */
  YYSYMBOL_block_stmt = 55,                /* block_stmt  */
  YYSYMBOL_flow_control = 56,              /* flow_control  */
  YYSYMBOL_opt_param = 57,                 /* opt_param  */
  YYSYMBOL_for_expression = 58,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 59,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 60,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 61,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 62,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 63,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 64,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 65,             /* rel_cond_expr  */
  YYSYMBOL_rel_ops = 66,                   /* rel_ops  */
  YYSYMBOL_set_expr = 67,                  /* set_expr  */
  YYSYMBOL_func_call = 68,                 /* func_call  */
  YYSYMBOL_set_func_call = 69,             /* set_func_call  */
  YYSYMBOL_simple_expr = 70,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 71,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 72,                 /* func_expr  */
  YYSYMBOL_arith_expr = 73,                /* arith_expr  */
  YYSYMBOL_term = 74,                      /* term  */
  YYSYMBOL_factor = 75                     /* factor  */
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
#define YYLAST   4832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  662

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    50,    51,    54,    55,    58,    63,    68,
      71,    74,    77,    80,    81,    84,    85,    88,    89,    92,
      95,    98,    99,   100,   101,   102,   105,   108,   111,   114,
     119,   120,   121,   122,   123,   124,   127,   128,   131,   132,
     135,   136,   137,   140,   141,   144,   145,   148,   149,   152,
     153,   156,   157,   160,   161,   162,   163,   166,   167,   168,
     169,   170,   173,   178,   183,   184,   187,   188,   191,   192,
     195,   196,   197,   198,   201,   202,   203,   206,   207,   208,
     211,   212,   213,   216,   217,   218,   219
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
  "TYPE", "EMPTY", "STRING", "RETURN", "FORALL", "FOR", "IN", "IS_SET",
  "ADD_SET", "REMOVE", "EXISTS", "IF", "ELSE", "NOT_OP", "L_OP", "G_OP",
  "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER", "ID",
  "FLOAT", "THEN", "$accept", "program", "stmts", "stmt", "func_stmt",
  "var_decl_stmt", "param_list", "simple_param_list", "flex_block_struct",
  "compound_block_stmt", "block_stmts", "block_stmt", "flow_control",
  "opt_param", "for_expression", "decl_or_cond_expr", "or_cond_expr",
  "and_cond_expr", "unary_cond_expr", "eq_cond_expr", "equal_ops",
  "rel_cond_expr", "rel_ops", "set_expr", "func_call", "set_func_call",
  "simple_expr", "func_cte_expr", "func_expr", "arith_expr", "term",
  "factor", YY_NULLPTR
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
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-247)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -26,    35,    13,    97,   108,   148,   224,  -247,   263,
      10,   293,    -3,    93,   121,    51,    52,  2006,   310,    50,
     332,   149,   150,   179,   163,   554,   210,   223,   243,   256,
     277,   313,   322,    64,  2737,  2764,  2791,  2818,   350,   353,
     212,   165,   742,   742,   362,   742,   367,   382,   404,   984,
    1277,  1284,   406,   440,   463,   472,   476,   772,  1522,  1744,
    1500,    15,   324,  1500,  1500,  1500,   145,     6,   554,   358,
    2845,  2872,  2899,   409,   446,   491,   501,   394,  2926,    32,
      32,    32,    32,   505,   492,    91,   474,  4605,   311,  3519,
     247,    17,   100,   302,    14,    82,   442,  4623,  4639,  4571,
     513,   545,   557,   558,   161,   292,   379,   560,   579,   581,
     592,   631,  1866,    40,  2075,  2083,  2094,  2120,  2125,  1120,
     742,   626,   136,  1693,   391,   593,  1763,   311,   311,   565,
     971,  2206,    43,    60,    83,    98,   141,   204,   635,   645,
     673,   675,  1481,   682,   628,  2953,  2980,  3007,  3034,  3061,
    3088,  3115,   691,  1693,   283,  1120,   408,   421,   195,   479,
    4657,  4589,  1795,   432,   709,  3142,  1120,  1582,  3169,   507,
    3196,   669,  1120,  3223,   742,   695,   698,   705,   716,   721,
     725,   735,  1008,  1417,  1402,   737,   738,   749,   750,   459,
    1449,  1545,  3250,   742,   727,   739,   747,   771,   797,   816,
     824,   396,   617,   652,   789,   798,   810,   815,   369,   676,
     683,   742,   854,   861,   868,   869,  4391,  4409,  4673,  4691,
    4427,  4445,   742,  4186,   880,   890,   891,   902,   145,  3778,
    3591,  3795,    20,    38,   356,  4203,  4220,  4237,  4254,  1965,
    3812,  3829,    40,    40,  3554,     6,   912,   712,   204,   204,
     145,    40,  1675,  3277,   742,   745,   752,   753,   904,   909,
     916,   918,  1466,  1066,  1567,   765,   788,   799,   807,   844,
    1639,  1715,   742,   884,  3982,   923,   927,   928,   929,  1411,
    3608,  3536,  3625,   445,    12,   123,   201,   286,  3999,  4016,
    4033,  4050,   700,  3642,  3659,    40,  4463,  3304,   937,   944,
     945,   910,   554,   956,   957,   958,   151,  1875,  2048,  2096,
    2187,   842,   962,  1939,  3331,   966,   969,   970,   939,   554,
     980,   982,   995,   207,   974,   975,   976,   978,   994,  1003,
    1009,   608,   983,  1500,  1500,  1500,     6,    40,    40,  1028,
     647,   998,  1500,  1500,  1500,     6,   215,   215,   215,   215,
    1030,   784,   999,  1500,  1500,  1500,   204,   204,  1035,   973,
    1005,  1500,  1500,  1500,   188,     6,   145,  3471,   218,   218,
     218,   218,   218,  1842,  1916,   451,  1175,  4481,  4499,   265,
    3358,  3385,  1044,  1024,  1012,  1500,  1500,  1500,     6,   227,
     227,   227,   227,  1049,  1039,  1045,  1025,  1500,  1500,  1500,
    3571,   295,     6,  2153,  1411,  1411,  3495,   244,   244,   244,
     244,   244,  2235,  3412,  1029,   742,   742,  1073,  1074,  1500,
      15,   145,   554,  2310,  2340,   465,  1052,  3439,  1055,   742,
     742,  1079,  1090,  1500,    15,   145,   554,  1068,  1078,  1097,
    1931,  1098,  1114,  1116,  1121,   487,  1976,  2040,  1102,   808,
    1122,  1123,  1125,  1126,   489,    40,   853,   860,   889,   936,
     948,  4707,  4517,  1127,  1133,  1134,  1138,  4535,  4553,  4271,
    3846,  1151,  1153,  1154,  1156,   495,   325,  4288,    40,  3863,
    3965,  3880,  3897,  3914,  3931,  4725,  3466,   817,  1729,  1158,
    1159,  1161,  1165,   500,    40,  1831,  1849,  1873,  1899,  1910,
    4067,  3676,  2153,  1172,  1173,  1176,  1181,   514,   742,   525,
     531,   533,  1191,  1192,  1193,  1194,   832,  1145,  1082,   537,
     539,   548,   556,   570,   435,  1108,  1164,   341,   424,  4084,
      40,  3693,  3948,  3710,  3727,  3744,  3761,  2376,  1198,  1208,
    1212,  2408,  2435,  1213,   247,   172,  1214,  1196,  1216,  1221,
    1222,  1203,  1204,  1223,   247,   199,  1234,  1238,  1240,  1247,
    1249,  1250,  1233,  1235,  1237,  1241,  1245,  4741,  4759,  4775,
    4793,  4305,  4322,  4339,  4356,  4373,   818,   874,   875,   876,
     897,   572,  4101,  4118,  4135,  4152,  4169,  1256,  1054,  1231,
    1500,  1500,  1500,     6,   272,   272,   272,   272,  1257,  1267,
    1268,  1481,  1297,  1481,  2466,  1270,  1276,  1292,  1612,  1363,
    1612,  1271,   591,  1199,  1294,  1298,  1299,  1300,   596,    40,
    1229,  1239,  1480,  1608,  1665,  2494,  2521,  2548,  2575,  1481,
     624,  2602,  1288,  1289,  1290,  1291,  1612,   637,  1296,   660,
     662,   668,   689,   690,  2629,  1481,  1641,  1304,  1612,  1674,
    2656,   782,  2683,  1305,  1084,  1310,  1311,  1312,  1481,  1612,
    2710,  1313
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,  -247,  -247,  1324,  -247,     0,  -247,  -185,   257,   -14,
    -246,   128,   319,   -85,   -88,  -115,   -62,   -34,   -49,   -37,
    -224,   -60,  -227,   493,    69,   622,    24,  1143,  1888,  1741,
    1341,   941
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    34,    13,   106,   149,   325,
      35,   326,    37,    90,    91,    92,    93,    94,    95,    96,
     131,    97,   137,    83,   204,   205,    84,   206,   207,   208,
     209,   210
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    18,   247,     6,   104,   124,   235,   381,   368,   283,
     367,   157,   -14,    -2,     1,     7,   -11,   233,   -40,   -14,
     211,   -44,    85,   -11,   125,   -40,   -44,   -44,    12,   234,
     126,     1,   232,    86,    87,     8,   156,   113,    14,   122,
     212,   213,   214,   215,   -46,   251,    88,   105,   -61,    54,
     404,   413,   -44,   128,    17,   216,    89,   217,   -44,   366,
     375,   407,   284,   406,   288,   -57,    74,    75,   427,    67,
      19,   160,    49,   114,    51,   286,   -46,   -46,    68,   159,
     182,   252,   184,   -61,   -61,   -61,    38,   287,   -58,   -46,
     285,    40,   107,   158,    52,   -46,   -36,    -4,   -36,    15,
     -57,   -57,   -57,   -59,    38,   150,    16,   -38,    -5,   -36,
     -36,   185,   185,   -38,   185,    -4,   -36,   -36,   -36,   -36,
     -46,   -46,   -36,   -58,   -58,   -58,    -5,   -10,   308,   -44,
     218,   -36,   -36,   -36,   -10,   236,   -44,    52,   -59,   -59,
     -59,   150,   307,   -47,   152,    36,   -60,   154,    -6,   -47,
     222,   445,   150,   150,    41,    42,    67,   218,   150,   218,
     454,   -44,   405,    70,   223,   422,    -6,   142,   235,   324,
     224,   225,   226,   227,   -47,   -47,   228,   164,   603,   364,
     475,   -60,   -60,   -60,    43,   229,   230,   231,    38,   185,
     235,   234,   265,   289,   -47,   218,   218,   218,   425,   250,
     218,   233,   -43,   493,    44,   610,    73,   -46,   -43,   295,
     250,   311,    67,   234,   -46,    60,   379,   507,    -9,   288,
     455,   436,   265,   478,    38,    -9,   -47,   -47,    61,    10,
     401,    11,   494,   -43,   128,    38,    38,   250,   328,   -46,
     -46,    38,   287,   185,   216,   296,   217,   151,    62,   530,
     368,   284,   211,   288,   246,   201,   456,   203,   229,   479,
     231,    63,   185,    -3,   286,    86,    87,   262,   495,   264,
     309,   -43,   212,   213,   214,   215,   287,   619,    88,   285,
     185,    -3,    64,   151,   280,   531,   282,   216,    89,   217,
     -42,   185,   -48,    -8,   151,   151,   -42,   236,   -13,   -48,
     151,   -47,   407,   -43,   366,   -13,   235,   477,   -47,   -40,
      -7,    -8,   516,   620,   518,   -40,   211,   476,    65,   236,
     129,   130,    38,   185,   -48,   -48,   418,    66,    -7,   234,
      87,   -45,   -18,   -47,   -47,   544,   212,   213,   214,   215,
     127,   185,    88,   432,   288,   288,   529,   -43,   289,   554,
     -18,   216,   244,   217,   -43,   286,   528,    71,   -17,   545,
      72,   235,   -48,   -45,   -45,   100,    38,   287,   287,   192,
     527,    52,   233,   555,   -72,   235,   -17,   346,   347,   -43,
     405,    36,   289,    38,   234,   143,   233,   232,    52,   -70,
     129,   130,   144,   -68,   -48,   -48,   272,   155,   234,   162,
     112,   232,   242,   243,   -83,   -83,   -83,   -83,   618,   273,
     274,   -71,   165,   -74,   166,   108,   275,   276,   277,   278,
     -83,   313,   279,   168,   170,    36,   171,   521,   -39,   173,
     -45,   280,   281,   282,   -39,   236,   236,   -45,   -12,   539,
     540,   -68,    36,   594,   595,   -12,   546,   -75,   -68,   -48,
      38,   -38,   109,   549,   550,   -48,   247,   485,   -38,   602,
     556,   310,   -45,   -45,   144,   -68,   247,   242,   243,   609,
      78,   -39,   519,   289,   289,   289,   129,   130,   -39,   -69,
     -48,   -48,    38,   -73,   185,   185,   -45,   283,   327,   218,
     236,    52,   -45,   561,   283,   566,    38,   110,   185,   185,
     144,   575,   144,   218,   236,    52,   580,   111,   144,    70,
     314,   119,    66,   144,   630,   121,   120,   -45,   -45,   138,
     586,   637,   315,   316,   317,   318,   581,   144,   319,   320,
     321,   -72,    28,    29,    30,    31,   322,   -70,   -72,   -71,
     284,    70,   288,   -74,   -70,   -75,   -71,   284,   323,   288,
     -74,   139,   -75,   286,   -42,    70,   101,   102,   103,    45,
     286,   -42,   -69,   140,   141,   287,    46,   145,   285,   -69,
     -51,   519,   287,    47,    48,   285,   -73,   185,   -41,    28,
      29,    30,    31,   -73,   -51,   -41,   146,   308,   147,   308,
     -51,   -51,   -51,   -51,    49,    50,    51,   -76,   -37,   148,
     -37,   307,   643,   307,   -76,   -51,   -51,   -51,   324,   144,
     324,   -37,   -37,   218,   440,   308,   242,   243,   -37,   -37,
     -37,   -37,   345,   218,   -37,   -85,   -85,   -85,   -85,   307,
     645,   308,   308,   -37,   -37,   -37,   324,   313,   -76,    39,
     153,   -85,   -64,   648,   308,   307,   307,    53,   324,   324,
     313,   324,   -65,   449,   324,   242,   243,    39,   307,   324,
     -84,   -84,   -84,   -84,   186,   186,   -64,   186,   -65,   163,
     311,   289,   311,   -64,   -66,   -65,   -84,   328,   289,   328,
     -66,   -66,   -67,   219,   -79,   -79,   348,   349,   237,   -63,
      53,   -82,   -82,   -82,   -82,   -67,   -63,   -62,   311,   172,
     -79,   -72,   -67,   -63,   -70,   328,   -54,   -82,   408,   409,
     219,   -71,   219,   -54,   311,   311,   -41,   328,   328,   376,
     328,   332,   -41,   328,   -54,   126,   333,   311,   328,   309,
     334,   309,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     335,    39,   186,   -74,   -75,   266,   290,   174,   219,   219,
     219,   -72,   -72,   219,   175,   -69,   -73,   309,   -72,   -70,
     -71,   176,   177,   -70,   312,   -70,   -71,   178,   179,   180,
     181,   -71,   -74,   309,   309,   266,   341,    39,   -74,   -68,
      79,    80,   182,   183,   184,   314,   309,   421,    39,    39,
     462,   329,   242,   243,    39,   -75,   186,   315,   316,   317,
     318,   -75,   342,   319,   320,   321,   -69,    28,    29,    30,
      31,   322,   -69,   -74,   -73,   186,   -86,   -86,   -86,   -86,
     -73,   343,   -75,   323,   -76,   -64,   442,   443,   444,   344,
     -76,   -64,   -86,   186,   -69,   451,   452,   453,   -83,   -73,
     -83,   -83,   -83,   -83,   186,   -83,   464,   465,   466,   423,
     237,   -68,   389,   390,   472,   473,   474,   -68,   628,   352,
     631,   -85,   -85,   -85,   -85,   635,   353,   638,   -77,   -77,
     348,   349,   237,   354,   355,    39,   186,   -85,   490,   491,
     492,   -65,   -66,   -67,   -77,   360,   644,   -65,   -66,   -67,
     504,   505,   506,   647,   186,   361,   362,   -78,   -78,   348,
     349,   290,   650,   652,   -63,   653,   655,   363,   656,   384,
     -63,   657,   543,   -78,   385,   660,   661,   -36,   -36,    39,
     310,   386,   310,   387,    53,   395,   553,   327,   396,   327,
     -36,   -36,   397,   398,   399,   290,    39,   -36,   -36,   -36,
     -36,    53,   414,   -36,   -80,   -80,   -80,   -80,   310,   415,
     416,   417,   -36,   -36,   -36,   327,   -81,   -81,   -81,   -81,
     -80,   419,   420,   421,   310,   310,    59,   327,   327,   424,
     327,   428,   -81,   327,   429,   430,   -52,   310,   327,   470,
     431,   242,   243,   191,   191,   433,   191,   434,   237,   237,
     -52,   -83,   -83,   -83,   -83,   -83,   -52,   -52,   -52,   -52,
     435,   437,   221,    39,   -21,   -15,   -16,   241,   -24,    59,
     438,   -52,   -52,   -52,   -83,   439,   -83,   -83,   -83,   -83,
      59,    59,   117,   118,   441,   520,   290,   290,   290,   221,
     488,   221,   242,   243,   448,    39,   461,   186,   186,   450,
     463,   469,   219,   237,    53,   501,   471,   242,   243,    39,
     487,   186,   186,   489,   191,   500,   219,   237,    53,   502,
     613,   191,   242,   243,   271,   294,   503,   221,   221,   221,
     538,   388,   221,   -85,   -85,   -85,   -85,   -85,   221,   -85,
     541,   542,   -18,   615,   616,   617,   551,   314,   -84,   435,
     -84,   -84,   -84,   -84,   271,   -84,   548,   552,   -22,   315,
     316,   317,   318,   -76,   557,   319,   320,   321,   -23,    28,
      29,    30,    31,   322,   -79,   191,   -79,   -79,   596,   597,
     558,   -79,   559,   253,   520,   323,   -76,   560,   562,   563,
     186,   564,   565,   567,   191,    21,    22,    23,    24,   568,
     569,    25,    26,    27,   570,    28,    29,    30,    31,    32,
     593,   -85,   191,   -85,   -85,   -85,   -85,   571,   -85,   572,
     573,    33,   574,   191,   576,   577,   219,   578,    55,   241,
     -82,   579,   -82,   -82,   -82,   -82,   219,   -82,   582,   583,
     -37,   -37,   584,   191,   191,   187,   187,   585,    76,   221,
     221,   241,   191,   -37,   -37,   191,   589,   590,   591,   592,
     -37,   -37,   -37,   -37,   598,   -86,   -37,   -86,   -86,   -86,
     -86,    55,   -86,   191,   599,   -37,   -37,   -37,   600,   601,
     294,   604,   605,   312,   290,   312,   -17,   606,   607,   608,
     329,   290,   329,    -8,   -29,   -85,   191,   -85,   -85,   -85,
     -85,   611,   -85,    59,   -64,   -77,   -65,   -77,   -77,   596,
     597,   312,   -77,   -66,   294,   -67,   -63,   -64,   329,   -65,
      59,   -66,   612,   187,   625,   -67,   267,   312,   312,   -63,
     329,   329,   614,   329,   626,   627,   329,   632,   446,   447,
     312,   329,    67,   633,   -85,   -85,   -85,   -85,   -85,   459,
     460,   -84,   -84,   -84,   -84,   -84,   267,   467,   468,   634,
     639,   -28,   272,   629,   640,   641,   642,   241,   241,   241,
     241,   241,   483,   484,     0,   273,   274,   330,   -25,   -26,
     -27,   -33,   275,   276,   277,   278,   649,     9,   279,     0,
     271,   271,   498,   499,   -34,   -35,   339,   280,   281,   282,
     -31,   658,   659,   -32,   526,   294,   294,   294,   294,   294,
     294,   535,   536,     0,   350,     0,   191,   191,     0,     0,
       0,   221,   241,    59,     0,   358,    58,     0,   272,   636,
     191,   191,     0,     0,     0,   221,   241,    59,     0,     0,
       0,   273,   274,   190,   190,     0,   190,     0,   275,   276,
     277,   278,     0,     0,   279,     0,   191,   382,     0,     0,
       0,     0,   220,   280,   281,   282,     0,   240,   -84,    58,
     -84,   -84,   -84,   -84,     0,   393,   272,     0,     0,   191,
     115,   116,   336,   -85,     0,   -85,   -85,   -85,   -85,   220,
     274,   220,     0,     0,     0,   191,   275,   276,   277,   278,
       0,     0,   279,   526,     0,    55,     0,     0,     0,   191,
       0,   280,   400,   282,   190,   -79,     0,   -79,   -79,   337,
     338,   190,    55,     0,   270,   293,     0,   220,   220,   220,
       0,   191,   220,   -83,   -83,   -83,   -83,   -83,   220,   -83,
       0,     0,     0,     0,   297,   221,   -78,     0,   -78,   -78,
     596,   597,     0,   -78,   270,   221,   298,   299,   300,   301,
       0,     0,   302,   303,   304,   193,    28,    29,    30,    31,
     305,     0,   194,     0,     0,   190,     0,     0,     0,   195,
     196,     0,   306,     0,     0,   197,   198,   199,   200,   -79,
     -79,   -79,    81,    82,   190,   526,   526,   623,   624,     0,
     201,   202,   203,   294,     0,     0,   522,     0,     0,     0,
     294,   -82,   190,   -82,   -82,   -82,   -82,     0,   187,   187,
     191,     0,     0,   190,     0,    55,     0,     0,     0,   240,
       0,     0,   187,   187,   -84,   -84,   -84,   -84,   -84,    55,
     -84,     0,     0,   373,   374,   253,     0,     0,     0,   377,
     378,   240,   190,     0,     0,   190,     0,    21,    22,    23,
      24,     0,     0,    25,    26,    27,     0,    28,    29,    30,
      31,   169,     0,   190,   -80,   314,   -80,   -80,   -80,   -80,
     293,   -80,     0,    33,     0,     0,     0,   315,   316,   317,
     318,     0,     0,   319,   320,   321,   190,    28,    29,    30,
      31,   322,     0,    58,   297,   522,   -79,   -79,   -79,   391,
     392,   587,   -79,   323,   293,     0,   298,   299,   300,   301,
      58,     0,   302,   303,   304,     0,    28,    29,    30,    31,
     651,   -81,     0,   -81,   -81,   -81,   -81,   314,   -81,     0,
       0,   -85,   306,   -85,   -85,   -85,   -85,   457,   458,   315,
     316,   317,   318,     0,     0,   319,   320,   321,   254,    28,
      29,    30,    31,   654,     0,   255,     0,   240,   240,   240,
     481,   482,   256,   257,     0,   323,     0,     0,   258,   259,
     260,   261,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,
     496,   497,     0,   262,   263,   264,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,   525,   293,   293,   293,   293,   533,
     534,   -82,   -82,   -82,   -82,   -82,   190,   190,     0,     0,
       0,   220,   240,    58,     0,     0,    57,     0,   211,     0,
     190,   190,     0,     0,     0,   220,   240,    58,     0,     0,
       0,    86,    87,   189,   189,     0,    77,     0,   212,   213,
     214,   215,     0,     0,    88,     0,   190,     0,     0,   -30,
       0,     0,    99,   216,    89,   217,     0,   239,     0,    57,
     -30,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   190,
     -30,   -30,   -30,   -30,   -30,   167,     0,     0,     0,    99,
       0,    99,     0,     0,     0,   190,   -30,     0,   -85,   -85,
     -85,   -85,   -85,   525,   -85,     0,     0,     0,   -77,   190,
     -77,   -77,   337,   338,    77,     0,   -77,   -77,   -77,   391,
     392,   189,   -77,     0,   269,   292,     0,    99,    99,    99,
       0,   190,    99,   -86,   -86,   -86,   -86,   -86,   161,   -21,
     -78,   -78,   -78,   391,   392,   220,   -78,     0,     0,     0,
     -21,   -21,   -21,   -21,   269,   220,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,   -80,   -80,   -80,   -80,
     -80,     0,   -80,    56,     0,   331,   -21,   -81,   -81,   -81,
     -81,   -81,   -78,   -81,   -78,   -78,   337,   338,     0,     0,
     188,   188,     0,   188,   340,   621,   622,   -86,     0,   -86,
     -86,   -86,   -86,   293,   272,     0,     0,     0,     0,    98,
     293,     0,   351,     0,   238,     0,    56,   273,   274,     0,
     190,     0,     0,   359,   275,   276,   277,   278,     0,   239,
     279,   -54,     0,   369,   370,     0,    98,     0,    98,   280,
     281,   282,   -80,     0,   -80,   -80,   -80,   -80,     0,   -54,
       0,   239,   331,     0,     0,   383,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,     0,     0,   188,     0,
      20,   268,   291,   394,    98,    98,    98,     0,     0,    98,
     292,    21,    22,    23,    24,     0,     0,    25,    26,    27,
       0,    28,    29,    30,    31,    32,   351,     0,     0,     0,
       0,   268,     0,    57,     0,     0,   -81,    33,   -81,   -81,
     -81,   -81,   -15,     0,   292,     0,     0,     0,     0,     0,
      57,     0,   188,   -15,   -15,   -15,   -15,     0,     0,   -15,
     -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,   188,   -85,   -85,   -85,   -85,   -85,     0,     0,   -15,
     -77,   -77,   -77,    81,    82,     0,     0,     0,     0,   188,
     -16,   -78,   -78,   -78,    81,    82,     0,   239,   239,   480,
     188,   -16,   -16,   -16,   -16,     0,   238,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   -16,   -16,   -16,   -80,   -80,   -80,
     -80,   -80,   -81,   -81,   -81,   -81,   -81,   -16,   238,     0,
       0,     0,   188,     0,   524,   292,   292,   292,   532,     0,
       0,     0,     0,     0,     0,     0,   189,   189,   508,     0,
     188,    99,   239,    57,     0,   509,     0,   291,     0,     0,
     189,   189,   510,   511,     0,    99,   239,    57,   512,   513,
     514,   515,     0,     0,     0,     0,     0,     0,     0,     0,
      56,   -24,     0,   516,   517,   518,   340,     0,     0,     0,
       0,   291,   -24,   -24,   -24,   -24,     0,    56,   -24,   -24,
     -24,   211,   -24,   -24,   -24,   -24,   -24,   -24,     0,   359,
       0,     0,     0,     0,     0,    87,     0,     0,   -24,     0,
       0,   212,   213,   214,   215,   383,     0,     0,     0,   -18,
       0,     0,     0,   524,     0,     0,   216,   244,   217,   588,
     -18,   -18,   -18,   -18,   238,   238,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,     0,     0,     0,     0,
       0,   394,     0,     0,     0,     0,   -18,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   523,   291,   291,   291,    99,     0,     0,     0,     0,
       0,     0,     0,   188,   188,     0,     0,     0,    98,   238,
      56,     0,     0,     0,   -22,     0,     0,   188,   188,     0,
       0,     0,    98,   238,    56,   -22,   -22,   -22,   -22,     0,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,   292,   -23,     0,     0,     0,     0,     0,
     292,   -22,     0,     0,     0,   -23,   -23,   -23,   -23,     0,
     588,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -17,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
     523,   -17,   -17,   -17,   -17,     0,   188,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,
       0,     0,    -8,     0,     0,     0,     0,   -17,     0,     0,
       0,     0,     0,    -8,    -8,    -8,    -8,     0,     0,    -8,
      -8,    -8,    98,    -8,    -8,    -8,    -8,    -8,    -8,   -29,
       0,     0,    98,     0,     0,     0,     0,     0,     0,    -8,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -28,     0,     0,     0,     0,     0,   -29,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     291,   -28,   -28,   -28,   -28,   -28,   -28,   291,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -26,   -26,   -26,   -26,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   646,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -21,    21,
      22,    23,    24,     0,     0,    25,    26,    27,     0,    28,
      29,    30,    31,    32,     0,   -20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,   -20,   -20,   -20,   -20,
       0,     0,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,     0,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -19,   -19,   -19,   -19,     0,     0,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -19,   -22,   -22,   -22,
     -22,     0,     0,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,     0,   -23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -22,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
       0,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -33,   -15,   -15,   -15,   -15,     0,     0,   -15,
     -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,     0,   -16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -15,
     -16,   -16,   -16,   -16,     0,     0,   -16,   -16,   -16,     0,
     -16,   -16,   -16,   -16,   -16,     0,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -16,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,    -8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,    -8,    -8,    -8,    -8,     0,
       0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
       0,   380,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -8,    21,    22,    23,    24,     0,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     0,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    21,
      22,    23,    24,     0,     0,    25,    26,    27,     0,    28,
      29,    30,    31,    32,     0,   426,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    21,    22,    23,    24,
       0,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,   -18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,   486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -18,
      21,    22,    23,    24,     0,     0,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,   537,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    21,    22,    23,
      24,     0,     0,    25,    26,    27,     0,    28,    29,    30,
      31,    32,     0,   547,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    21,    22,    23,    24,     0,     0,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     0,
     -17,     0,     0,     0,     0,     0,   222,     0,     0,     0,
      33,   -17,   -17,   -17,   -17,     0,     0,   -17,   -17,   -17,
     223,   -17,   -17,   -17,   -17,   -17,   224,   225,   226,   227,
     272,     0,     0,     0,     0,     0,     0,   -17,     0,     0,
       0,   229,   230,   231,   274,     0,     0,     0,     0,     0,
     275,   276,   277,   278,   245,     0,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   123,     0,   280,   400,   282,     0,     0,
       0,   402,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     403,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   245,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   402,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   365,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   -83,   -85,   -83,   -83,   -83,   -83,
       0,   -83,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -84,   -83,   -84,   -84,   -84,   -84,     0,   -84,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -79,   -84,
     -79,   -79,   410,   411,     0,   -79,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -82,   -79,   -82,   -82,   -82,
     -82,     0,   -82,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -86,   -82,   -86,   -86,   -86,   -86,     0,   -86,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -85,
     -86,   -85,   -85,   -85,   -85,     0,   -85,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -77,   -85,   -77,   -77,
     410,   411,     0,   -77,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -78,   -77,   -78,   -78,   410,   411,     0,
     -78,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -80,   -78,   -80,   -80,   -80,   -80,     0,   -80,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -81,   -80,   -81,
     -81,   -81,   -81,     0,   -81,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -83,   -81,   -83,   -83,   -83,   -83,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -84,   -83,   -84,   -84,   -84,   -84,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -79,   -84,
     -79,   -79,   371,   372,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -82,   -79,   -82,   -82,   -82,
     -82,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -86,   -82,   -86,   -86,   -86,   -86,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -85,
     -86,   -85,   -85,   -85,   -85,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -77,   -85,   -77,   -77,
     371,   372,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -78,   -77,   -78,   -78,   371,   372,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -80,   -78,   -80,   -80,   -80,   -80,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -81,   -80,   -81,
     -81,   -81,   -81,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -53,   -81,   408,   409,     0,     0,
       0,   -53,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -53,   -53,   369,   370,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -55,   -53,
       0,     0,     0,     0,     0,   -55,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -50,   -55,     0,     0,     0,
       0,     0,   -50,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -74,   132,     0,     0,     0,     0,     0,   -74,
       0,   133,   134,   -50,   -50,   135,   136,   -50,   -50,   -75,
     -74,     0,     0,     0,     0,     0,   -75,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -56,   -75,     0,     0,
       0,     0,     0,   -56,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -56,     0,     0,     0,     0,     0,
     -76,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -49,   -76,     0,     0,     0,     0,     0,   -49,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -64,   132,     0,
       0,     0,     0,     0,   -64,     0,   133,   134,   -49,   -49,
     135,   136,   -49,   -49,   -65,   -64,     0,     0,     0,     0,
       0,   -65,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -66,   -65,     0,     0,     0,     0,     0,   -66,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -67,   -66,
       0,     0,     0,     0,     0,   -67,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -63,   -67,     0,     0,     0,
       0,     0,   -63,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -55,   -63,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -50,
     -55,     0,     0,     0,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -74,   132,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   -50,   -50,   135,
     136,   -50,   -50,   -75,   -74,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -56,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -56,     0,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -49,   -76,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -64,   132,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   -49,   -49,   135,   136,   -49,   -49,   -65,   -64,
       0,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -65,     0,     0,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -67,   -66,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -63,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -63,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,   -83,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,   -84,   -79,   -79,   -79,   356,   357,     0,
     -79,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -79,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -82,
     -85,   -85,   -85,   -85,   -85,     0,   -85,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,   -85,   -77,   -77,
     -77,   356,   357,     0,   -77,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,   -77,   -78,   -78,   -78,   356,
     357,     0,   -78,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,   -78,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,   -86,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -80,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,   -81,   -54,   248,
     249,     0,     0,     0,   -54,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,   -54,   -53,   248,   249,     0,
       0,     0,   -53,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   -55,   -53,     0,     0,     0,     0,   -55,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -55,
     -50,     0,     0,     0,     0,     0,   -50,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,     0,   -56,   132,     0,     0,
       0,     0,   -56,     0,     0,   133,   134,   -50,   -50,   135,
     136,   -50,   -50,   -56,   -49,     0,     0,     0,     0,     0,
     -49,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -74,   132,     0,     0,     0,     0,   -74,     0,     0,   133,
     134,   -49,   -49,   135,   136,   -49,   -49,   -74,   -75,     0,
       0,     0,     0,     0,   -75,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -76,   -75,     0,     0,     0,     0,
     -76,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,   -63,     0,     0,     0,     0,     0,   -63,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -64,   -63,
       0,     0,     0,     0,   -64,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -64,   -65,     0,     0,     0,
       0,     0,   -65,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -66,   -65,     0,     0,     0,     0,   -66,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,
     -67,     0,     0,     0,     0,     0,   -67,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,   -67,     0,     0,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67
};

static const yytype_int16 yycheck[] =
{
       0,    15,    90,     3,    66,    90,    66,   253,   235,   124,
     234,   126,     6,     0,    18,    41,     6,    66,     6,    13,
       5,     7,     7,    13,     7,    13,     6,    13,    18,    66,
      13,    18,    66,    18,    19,     0,   124,     5,    41,    88,
      25,    26,    27,    28,     6,     5,    31,    41,     5,    25,
      38,   297,    38,    39,     3,    40,    41,    42,    38,    39,
     245,   288,   124,   287,   124,     5,    42,    43,   314,     5,
      18,   131,    40,    41,    42,   124,    38,    39,    14,   128,
      40,    41,    42,    40,    41,    42,    17,   124,     5,     7,
     124,    41,    68,   127,    25,    13,     5,     0,     7,     6,
      40,    41,    42,     5,    35,   119,    13,     7,     0,    18,
      19,    42,    43,    13,    45,    18,    25,    26,    27,    28,
      38,    39,    31,    40,    41,    42,    18,     6,   142,     6,
      61,    40,    41,    42,    13,    66,    13,    68,    40,    41,
      42,   155,   142,     7,   120,    17,     5,   123,     0,    13,
       5,   336,   166,   167,     5,     5,     5,    88,   172,    90,
     345,    38,    39,    35,    19,    14,    18,     6,   228,   169,
      25,    26,    27,    28,    38,    39,    31,   153,     6,   228,
     365,    40,    41,    42,     5,    40,    41,    42,   119,   120,
     250,   228,   123,   124,     6,   126,   127,   128,   313,    38,
     131,   250,     7,   388,    41,     6,    41,     6,    13,     5,
      38,   142,     5,   250,    13,     5,   250,   402,     6,   279,
       5,    14,   153,     5,   155,    13,    38,    39,     5,     5,
     279,     7,     5,    38,    39,   166,   167,    38,   169,    38,
      39,   172,   279,   174,    40,    41,    42,   119,     5,     5,
     477,   313,     5,   313,     7,    40,    41,    42,    40,    41,
      42,     5,   193,     0,   313,    18,    19,    40,    41,    42,
     142,     6,    25,    26,    27,    28,   313,     5,    31,   313,
     211,    18,     5,   155,    40,    41,    42,    40,    41,    42,
       7,   222,     6,     0,   166,   167,    13,   228,     6,    13,
     172,     6,   529,    38,    39,    13,   366,   367,    13,     7,
       0,    18,    40,    41,    42,    13,     5,   366,     5,   250,
      34,    35,   253,   254,    38,    39,   302,     5,    18,   366,
      19,     6,     0,    38,    39,   420,    25,    26,    27,    28,
      38,   272,    31,   319,   404,   405,   406,     6,   279,   434,
      18,    40,    41,    42,    13,   404,   405,     7,     0,   421,
       7,   421,     6,    38,    39,    41,   297,   404,   405,     7,
     404,   302,   421,   435,     7,   435,    18,     8,     9,    38,
      39,   253,   313,   314,   421,     6,   435,   421,   319,     7,
      34,    35,    13,    24,    38,    39,     5,     6,   435,   142,
       6,   435,     8,     9,     8,     9,    10,    11,   593,    18,
      19,     7,   155,     7,     6,     6,    25,    26,    27,    28,
      24,    13,    31,   166,   167,   297,   169,   403,     7,   172,
       6,    40,    41,    42,    13,   366,   367,    13,     6,   415,
     416,     6,   314,     8,     9,    13,   422,     7,    13,     7,
     381,     6,     6,   429,   430,    13,   544,     6,    13,   544,
     436,   142,    38,    39,    13,     6,   554,     8,     9,   554,
       7,     6,   403,   404,   405,   406,    34,    35,    13,     7,
      38,    39,   413,     7,   415,   416,     7,   602,   169,   420,
     421,   422,    13,     6,   609,     6,   427,     6,   429,   430,
      13,     6,    13,   434,   435,   436,     6,     6,    13,   381,
       3,     6,     5,    13,   602,    41,    24,    38,    39,     6,
       6,   609,    15,    16,    17,    18,   502,    13,    21,    22,
      23,     6,    25,    26,    27,    28,    29,     6,    13,     6,
     602,   413,   602,     6,    13,     6,    13,   609,    41,   609,
      13,     6,    13,   602,     6,   427,    63,    64,    65,     5,
     609,    13,     6,     6,     6,   602,    12,     7,   602,    13,
       5,   502,   609,    19,    20,   609,     6,   508,     6,    25,
      26,    27,    28,    13,    19,    13,     7,   601,     7,   603,
      25,    26,    27,    28,    40,    41,    42,     6,     5,     7,
       7,   601,     6,   603,    13,    40,    41,    42,   608,    13,
     610,    18,    19,   544,     6,   629,     8,     9,    25,    26,
      27,    28,     5,   554,    31,     8,     9,    10,    11,   629,
       6,   645,   646,    40,    41,    42,   636,    13,     7,    17,
      14,    24,     7,     6,   658,   645,   646,    25,   648,   649,
      13,   651,     7,     6,   654,     8,     9,    35,   658,   659,
       8,     9,    10,    11,    42,    43,     6,    45,     6,    41,
     601,   602,   603,    13,     6,    13,    24,   608,   609,   610,
       7,    13,     7,    61,     8,     9,    10,    11,    66,     7,
      68,     8,     9,    10,    11,     6,     6,     6,   629,    30,
      24,     6,    13,    13,     6,   636,     6,    24,     8,     9,
      88,     6,    90,    13,   645,   646,     7,   648,   649,     7,
     651,     5,    13,   654,    24,    13,     5,   658,   659,   601,
       5,   603,    32,    33,    34,    35,    36,    37,    38,    39,
       5,   119,   120,     6,     6,   123,   124,     5,   126,   127,
     128,    24,     7,   131,    12,     6,     6,   629,    13,     7,
       7,    19,    20,    24,   142,    13,    13,    25,    26,    27,
      28,    24,     7,   645,   646,   153,     5,   155,    13,     7,
       8,     9,    40,    41,    42,     3,   658,     5,   166,   167,
       6,   169,     8,     9,   172,     7,   174,    15,    16,    17,
      18,    13,     5,    21,    22,    23,     7,    25,    26,    27,
      28,    29,    13,    24,     7,   193,     8,     9,    10,    11,
      13,     5,    24,    41,     7,     7,   333,   334,   335,     5,
      13,    13,    24,   211,    24,   342,   343,   344,     6,    24,
       8,     9,    10,    11,   222,    13,   353,   354,   355,     7,
     228,     7,     8,     9,   361,   362,   363,    13,   601,     5,
     603,     8,     9,    10,    11,   608,     5,   610,     8,     9,
      10,    11,   250,     5,     5,   253,   254,    24,   385,   386,
     387,     7,     7,     7,    24,     5,   629,    13,    13,    13,
     397,   398,   399,   636,   272,     5,     5,     8,     9,    10,
      11,   279,   645,   646,     7,   648,   649,     5,   651,     5,
      13,   654,   419,    24,     5,   658,   659,     5,     6,   297,
     601,     5,   603,     5,   302,    41,   433,   608,     5,   610,
      18,    19,     5,     5,     5,   313,   314,    25,    26,    27,
      28,   319,     5,    31,     8,     9,    10,    11,   629,     5,
       5,    41,    40,    41,    42,   636,     8,     9,    10,    11,
      24,     5,     5,     5,   645,   646,    25,   648,   649,     7,
     651,     5,    24,   654,     5,     5,     5,   658,   659,     6,
      41,     8,     9,    42,    43,     5,    45,     5,   366,   367,
      19,     7,     8,     9,    10,    11,    25,    26,    27,    28,
       5,     7,    61,   381,    30,    30,    30,    66,    30,    68,
       7,    40,    41,    42,     6,     6,     8,     9,    10,    11,
      79,    80,    81,    82,    41,   403,   404,   405,   406,    88,
       6,    90,     8,     9,     6,   413,     6,   415,   416,    41,
      41,     6,   420,   421,   422,     6,    41,     8,     9,   427,
       6,   429,   430,    41,   113,     6,   434,   435,   436,    14,
       6,   120,     8,     9,   123,   124,    41,   126,   127,   128,
      41,     5,   131,     7,     8,     9,    10,    11,   137,    13,
       7,     7,    30,   590,   591,   592,     7,     3,     6,     5,
       8,     9,    10,    11,   153,    13,    41,     7,    30,    15,
      16,    17,    18,     6,     6,    21,    22,    23,    30,    25,
      26,    27,    28,    29,     6,   174,     8,     9,    10,    11,
       6,    13,     6,     3,   502,    41,    24,     6,     6,     6,
     508,     6,     6,     6,   193,    15,    16,    17,    18,     6,
       6,    21,    22,    23,     6,    25,    26,    27,    28,    29,
       5,     6,   211,     8,     9,    10,    11,     6,    13,     6,
       6,    41,     6,   222,     6,     6,   544,     6,    25,   228,
       6,     6,     8,     9,    10,    11,   554,    13,     6,     6,
       5,     6,     6,   242,   243,    42,    43,     6,    45,   248,
     249,   250,   251,    18,    19,   254,     5,     5,     5,     5,
      25,    26,    27,    28,     6,     6,    31,     8,     9,    10,
      11,    68,    13,   272,     6,    40,    41,    42,     6,     6,
     279,     7,     6,   601,   602,   603,    30,     6,     6,     6,
     608,   609,   610,    30,    30,     6,   295,     8,     9,    10,
      11,     7,    13,   302,     6,     6,     6,     8,     9,    10,
      11,   629,    13,     6,   313,     6,     6,    24,   636,    24,
     319,    24,     6,   120,     7,    24,   123,   645,   646,    24,
     648,   649,    41,   651,     7,     7,   654,     7,   337,   338,
     658,   659,     5,     7,     7,     8,     9,    10,    11,   348,
     349,     7,     8,     9,    10,    11,   153,   356,   357,     7,
       6,    30,     5,     6,     6,     6,     6,   366,   367,   368,
     369,   370,   371,   372,    -1,    18,    19,   174,    30,    30,
      30,    30,    25,    26,    27,    28,    30,     3,    31,    -1,
     389,   390,   391,   392,    30,    30,   193,    40,    41,    42,
      30,    30,    30,    30,   403,   404,   405,   406,   407,   408,
     409,   410,   411,    -1,   211,    -1,   415,   416,    -1,    -1,
      -1,   420,   421,   422,    -1,   222,    25,    -1,     5,     6,
     429,   430,    -1,    -1,    -1,   434,   435,   436,    -1,    -1,
      -1,    18,    19,    42,    43,    -1,    45,    -1,    25,    26,
      27,    28,    -1,    -1,    31,    -1,   455,   254,    -1,    -1,
      -1,    -1,    61,    40,    41,    42,    -1,    66,     6,    68,
       8,     9,    10,    11,    -1,   272,     5,    -1,    -1,   478,
      79,    80,     5,     6,    -1,     8,     9,    10,    11,    88,
      19,    90,    -1,    -1,    -1,   494,    25,    26,    27,    28,
      -1,    -1,    31,   502,    -1,   302,    -1,    -1,    -1,   508,
      -1,    40,    41,    42,   113,     6,    -1,     8,     9,    10,
      11,   120,   319,    -1,   123,   124,    -1,   126,   127,   128,
      -1,   530,   131,     7,     8,     9,    10,    11,   137,    13,
      -1,    -1,    -1,    -1,     3,   544,     6,    -1,     8,     9,
      10,    11,    -1,    13,   153,   554,    15,    16,    17,    18,
      -1,    -1,    21,    22,    23,     5,    25,    26,    27,    28,
      29,    -1,    12,    -1,    -1,   174,    -1,    -1,    -1,    19,
      20,    -1,    41,    -1,    -1,    25,    26,    27,    28,     7,
       8,     9,    10,    11,   193,   594,   595,   596,   597,    -1,
      40,    41,    42,   602,    -1,    -1,   403,    -1,    -1,    -1,
     609,     6,   211,     8,     9,    10,    11,    -1,   415,   416,
     619,    -1,    -1,   222,    -1,   422,    -1,    -1,    -1,   228,
      -1,    -1,   429,   430,     7,     8,     9,    10,    11,   436,
      13,    -1,    -1,   242,   243,     3,    -1,    -1,    -1,   248,
     249,   250,   251,    -1,    -1,   254,    -1,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,   272,     6,     3,     8,     9,    10,    11,
     279,    13,    -1,    41,    -1,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,   295,    25,    26,    27,
      28,    29,    -1,   302,     3,   502,     7,     8,     9,    10,
      11,   508,    13,    41,   313,    -1,    15,    16,    17,    18,
     319,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,     6,    -1,     8,     9,    10,    11,     3,    13,    -1,
      -1,     6,    41,     8,     9,    10,    11,   346,   347,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,     5,    25,
      26,    27,    28,    29,    -1,    12,    -1,   366,   367,   368,
     369,   370,    19,    20,    -1,    41,    -1,    -1,    25,    26,
      27,    28,     7,     8,     9,    10,    11,    -1,    13,    -1,
     389,   390,    -1,    40,    41,    42,     7,     8,     9,    10,
      11,    -1,    13,    -1,   403,   404,   405,   406,   407,   408,
     409,     7,     8,     9,    10,    11,   415,   416,    -1,    -1,
      -1,   420,   421,   422,    -1,    -1,    25,    -1,     5,    -1,
     429,   430,    -1,    -1,    -1,   434,   435,   436,    -1,    -1,
      -1,    18,    19,    42,    43,    -1,    45,    -1,    25,    26,
      27,    28,    -1,    -1,    31,    -1,   455,    -1,    -1,     4,
      -1,    -1,    61,    40,    41,    42,    -1,    66,    -1,    68,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,   478,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    88,
      -1,    90,    -1,    -1,    -1,   494,    41,    -1,     7,     8,
       9,    10,    11,   502,    13,    -1,    -1,    -1,     6,   508,
       8,     9,    10,    11,   113,    -1,     7,     8,     9,    10,
      11,   120,    13,    -1,   123,   124,    -1,   126,   127,   128,
      -1,   530,   131,     7,     8,     9,    10,    11,   137,     4,
       7,     8,     9,    10,    11,   544,    13,    -1,    -1,    -1,
      15,    16,    17,    18,   153,   554,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,     7,     8,     9,    10,
      11,    -1,    13,    25,    -1,   174,    41,     7,     8,     9,
      10,    11,     6,    13,     8,     9,    10,    11,    -1,    -1,
      42,    43,    -1,    45,   193,   594,   595,     6,    -1,     8,
       9,    10,    11,   602,     5,    -1,    -1,    -1,    -1,    61,
     609,    -1,   211,    -1,    66,    -1,    68,    18,    19,    -1,
     619,    -1,    -1,   222,    25,    26,    27,    28,    -1,   228,
      31,     6,    -1,     8,     9,    -1,    88,    -1,    90,    40,
      41,    42,     6,    -1,     8,     9,    10,    11,    -1,    24,
      -1,   250,   251,    -1,    -1,   254,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,   120,    -1,
       4,   123,   124,   272,   126,   127,   128,    -1,    -1,   131,
     279,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,   295,    -1,    -1,    -1,
      -1,   153,    -1,   302,    -1,    -1,     6,    41,     8,     9,
      10,    11,     4,    -1,   313,    -1,    -1,    -1,    -1,    -1,
     319,    -1,   174,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,   193,     7,     8,     9,    10,    11,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,   211,
       4,     7,     8,     9,    10,    11,    -1,   366,   367,   368,
     222,    15,    16,    17,    18,    -1,   228,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,     7,     8,     9,
      10,    11,     7,     8,     9,    10,    11,    41,   250,    -1,
      -1,    -1,   254,    -1,   403,   404,   405,   406,   407,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   415,   416,     5,    -1,
     272,   420,   421,   422,    -1,    12,    -1,   279,    -1,    -1,
     429,   430,    19,    20,    -1,   434,   435,   436,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,     4,    -1,    40,    41,    42,   455,    -1,    -1,    -1,
      -1,   313,    15,    16,    17,    18,    -1,   319,    21,    22,
      23,     5,    25,    26,    27,    28,    29,    30,    -1,   478,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    41,    -1,
      -1,    25,    26,    27,    28,   494,    -1,    -1,    -1,     4,
      -1,    -1,    -1,   502,    -1,    -1,    40,    41,    42,   508,
      15,    16,    17,    18,   366,   367,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   530,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   544,    -1,    -1,    -1,    -1,
      -1,   403,   404,   405,   406,   554,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   415,   416,    -1,    -1,    -1,   420,   421,
     422,    -1,    -1,    -1,     4,    -1,    -1,   429,   430,    -1,
      -1,    -1,   434,   435,   436,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    -1,   602,     4,    -1,    -1,    -1,    -1,    -1,
     609,    41,    -1,    -1,    -1,    15,    16,    17,    18,    -1,
     619,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     502,    15,    16,    17,    18,    -1,   508,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,   544,    25,    26,    27,    28,    29,    30,     4,
      -1,    -1,   554,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
     602,    25,    26,    27,    28,    29,    30,   609,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    15,    16,    17,    18,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    15,    16,    17,    18,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    15,    16,    17,    18,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
       4,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      41,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      19,    25,    26,    27,    28,    29,    25,    26,    27,    28,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    40,    41,    42,    -1,    -1,
      -1,     5,     6,    24,     8,     9,    10,    11,    -1,    13,
      14,    32,    33,    34,    35,    36,    37,    38,    39,     5,
      24,     7,     8,     9,    10,    11,    -1,    13,    32,    33,
      34,    35,    36,    37,    38,    39,     5,     6,    24,     8,
       9,    10,    11,    -1,    13,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    24,     5,     6,    -1,     8,
       9,    10,    11,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,     6,    24,     8,     9,    10,    11,
      -1,    13,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     8,     9,    10,    11,    -1,    13,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
       8,     9,    10,    11,    -1,    13,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,     8,     9,    10,
      11,    -1,    13,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,     8,     9,    10,    11,    -1,    13,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,     8,     9,    10,    11,    -1,    13,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,     8,     9,
      10,    11,    -1,    13,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,     8,     9,    10,    11,    -1,
      13,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
       6,    24,     8,     9,    10,    11,    -1,    13,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,     6,    24,     8,
       9,    10,    11,    -1,    13,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    24,     8,     9,    10,    11,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     8,     9,    10,    11,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
       8,     9,    10,    11,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,     8,     9,    10,
      11,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,     8,     9,    10,    11,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,     8,     9,    10,    11,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,     8,     9,
      10,    11,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,     8,     9,    10,    11,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
       6,    24,     8,     9,    10,    11,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,     6,    24,     8,
       9,    10,    11,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    24,     8,     9,    -1,    -1,
      -1,    13,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     8,     9,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,    -1,    -1,    -1,    -1,    -1,    13,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
       6,    24,    -1,    -1,    -1,    -1,    -1,    13,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,     6,    24,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    24,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
       6,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,     6,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    24,     7,     8,
       9,    10,    11,    -1,    13,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    24,     7,     8,     9,    10,
      11,    -1,    13,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    24,     7,     8,     9,    10,    11,    -1,
      13,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    24,     7,     8,     9,    10,    11,    -1,    13,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    24,
       7,     8,     9,    10,    11,    -1,    13,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    24,     7,     8,
       9,    10,    11,    -1,    13,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    24,     7,     8,     9,    10,
      11,    -1,    13,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    24,     7,     8,     9,    10,    11,    -1,
      13,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    24,     7,     8,     9,    10,    11,    -1,    13,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    24,
       7,     8,     9,    10,    11,    -1,    13,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    24,     7,     8,
       9,    -1,    -1,    -1,    13,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    24,     7,     8,     9,    -1,
      -1,    -1,    13,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,     7,    24,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    24,
       7,    -1,    -1,    -1,    -1,    -1,    13,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,     7,    24,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    24,     7,    -1,    -1,    -1,    -1,    -1,
      13,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
       7,    24,    -1,    -1,    -1,    -1,    13,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    24,     7,    -1,
      -1,    -1,    -1,    -1,    13,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,     7,    24,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    24,     7,    -1,    -1,    -1,    -1,    -1,    13,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,     7,    24,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    24,     7,    -1,    -1,    -1,
      -1,    -1,    13,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,     7,    24,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    24,
       7,    -1,    -1,    -1,    -1,    -1,    13,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    45,    46,    47,    48,    49,    41,     0,    47,
       5,     7,    18,    50,    41,     6,    13,     3,    53,    18,
       4,    15,    16,    17,    18,    21,    22,    23,    25,    26,
      27,    28,    29,    41,    49,    54,    55,    56,    68,    69,
      41,     5,     5,     5,    41,     5,    12,    19,    20,    40,
      41,    42,    68,    69,    70,    71,    72,    73,    74,    75,
       5,     5,     5,     5,     5,     5,     5,     5,    14,     4,
      55,     7,     7,    41,    70,    70,    71,    73,     7,     8,
       9,    10,    11,    67,    70,     7,    18,    19,    31,    41,
      57,    58,    59,    60,    61,    62,    63,    65,    72,    73,
      41,    67,    67,    67,    60,    41,    51,    70,     6,     6,
       6,     6,     6,     5,    41,    74,    74,    75,    75,     6,
      24,    41,    62,    14,    57,     7,    13,    38,    39,    34,
      35,    64,    24,    32,    33,    36,    37,    66,     6,     6,
       6,     6,     6,     6,    13,     7,     7,     7,     7,    52,
      53,    55,    70,    14,    70,     6,    58,    59,    61,    62,
      65,    73,    52,    41,    70,    52,     6,    30,    52,    29,
      52,    52,    30,    52,     5,    12,    19,    20,    25,    26,
      27,    28,    40,    41,    42,    68,    69,    71,    72,    73,
      74,    75,     7,     5,    12,    19,    20,    25,    26,    27,
      28,    40,    41,    42,    68,    69,    71,    72,    73,    74,
      75,     5,    25,    26,    27,    28,    40,    42,    68,    69,
      74,    75,     5,    19,    25,    26,    27,    28,    31,    40,
      41,    42,    61,    62,    63,    65,    68,    69,    72,    73,
      74,    75,     8,     9,    41,     5,     7,    58,     8,     9,
      38,     5,    41,     3,     5,    12,    19,    20,    25,    26,
      27,    28,    40,    41,    42,    68,    69,    71,    72,    73,
      74,    75,     5,    18,    19,    25,    26,    27,    28,    31,
      40,    41,    42,    59,    60,    61,    62,    63,    65,    68,
      69,    72,    73,    74,    75,     5,    41,     3,    15,    16,
      17,    18,    21,    22,    23,    29,    41,    49,    53,    55,
      56,    68,    69,    13,     3,    15,    16,    17,    18,    21,
      22,    23,    29,    41,    49,    53,    55,    56,    68,    69,
      71,    73,     5,     5,     5,     5,     5,    10,    11,    71,
      73,     5,     5,     5,     5,     5,     8,     9,    10,    11,
      71,    73,     5,     5,     5,     5,    10,    11,    71,    73,
       5,     5,     5,     5,    62,     5,    39,    64,    66,     8,
       9,    10,    11,    74,    74,    51,     7,    74,    74,    61,
       4,    54,    71,    73,     5,     5,     5,     5,     5,     8,
       9,    10,    11,    71,    73,    41,     5,     5,     5,     5,
      41,    62,     5,    14,    38,    39,    64,    66,     8,     9,
      10,    11,     4,    54,     5,     5,     5,    41,    70,     5,
       5,     5,    14,     7,     7,    59,     4,    54,     5,     5,
       5,    41,    70,     5,     5,     5,    14,     7,     7,     6,
       6,    41,    67,    67,    67,    51,    75,    75,     6,     6,
      41,    67,    67,    67,    51,     5,    41,    74,    74,    75,
      75,     6,     6,    41,    67,    67,    67,    75,    75,     6,
       6,    41,    67,    67,    67,    51,    62,    65,     5,    41,
      73,    74,    74,    75,    75,     6,     4,     6,     6,    41,
      67,    67,    67,    51,     5,    41,    74,    74,    75,    75,
       6,     6,    14,    41,    67,    67,    67,    51,     5,    12,
      19,    20,    25,    26,    27,    28,    40,    41,    42,    68,
      69,    70,    71,    72,    73,    74,    75,    61,    62,    65,
       5,    41,    73,    74,    74,    75,    75,     4,    41,    70,
      70,     7,     7,    67,    57,    60,    70,     4,    41,    70,
      70,     7,     7,    67,    57,    60,    70,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,    70,     6,     6,     6,     6,     6,    71,    73,     5,
       5,     5,     5,     5,     8,     9,    10,    11,     6,     6,
       6,     6,    57,     6,     7,     6,     6,     6,     6,    57,
       6,     7,     6,     6,    41,    67,    67,    67,    51,     5,
      41,    74,    74,    75,    75,     7,     7,     7,    52,     6,
      58,    52,     7,     7,     7,    52,     6,    58,    52,     6,
       6,     6,     6,     6,    52,     6,    30,    52,     6,    30,
      52,    29,    52,    52,    29,    52,    52,    52,    30,    30,
      52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    56,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    67,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     2,
       1,     1,     2,     2,     1,     5,     5,     5,     4,     3,
       5,     7,    10,     5,     6,     7,     1,     2,     1,     3,
       1,     4,     3,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     3
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
  case 5: /* stmt: func_stmt  */
#line 54 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2619 "parser/parser.c"
    break;

  case 6: /* stmt: var_decl_stmt  */
#line 55 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2625 "parser/parser.c"
    break;

  case 7: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 58 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
            }
#line 2633 "parser/parser.c"
    break;

  case 8: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 63 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                }
#line 2641 "parser/parser.c"
    break;

  case 9: /* param_list: param_list COMMA TYPE ID  */
#line 68 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
            }
#line 2649 "parser/parser.c"
    break;

  case 10: /* param_list: TYPE ID  */
#line 71 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
            }
#line 2657 "parser/parser.c"
    break;

  case 11: /* param_list: %empty  */
#line 74 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2663 "parser/parser.c"
    break;

  case 12: /* simple_param_list: simple_param_list COMMA ID  */
#line 77 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                    }
#line 2671 "parser/parser.c"
    break;

  case 13: /* simple_param_list: ID  */
#line 80 "parser/c7.y"
                            { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2677 "parser/parser.c"
    break;

  case 17: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 88 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2683 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 89 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2689 "parser/parser.c"
    break;

  case 19: /* block_stmts: block_stmts block_stmt  */
#line 92 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2697 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmt  */
#line 95 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2703 "parser/parser.c"
    break;

  case 23: /* block_stmt: set_func_call SEMICOLON  */
#line 100 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2709 "parser/parser.c"
    break;

  case 25: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 102 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
            }
#line 2717 "parser/parser.c"
    break;

  case 26: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 105 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
            }
#line 2725 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 108 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
            }
#line 2733 "parser/parser.c"
    break;

  case 28: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 111 "parser/c7.y"
                                                    {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 2741 "parser/parser.c"
    break;

  case 29: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 114 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
            }
#line 2749 "parser/parser.c"
    break;

  case 62: /* set_expr: simple_expr IN simple_expr  */
#line 173 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
            }
#line 2757 "parser/parser.c"
    break;

  case 63: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 178 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 2765 "parser/parser.c"
    break;

  case 65: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 184 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2773 "parser/parser.c"
    break;

  case 68: /* simple_expr: arith_expr  */
#line 191 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2779 "parser/parser.c"
    break;

  case 69: /* simple_expr: func_cte_expr  */
#line 192 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2785 "parser/parser.c"
    break;

  case 70: /* func_cte_expr: EMPTY  */
#line 195 "parser/c7.y"
                           { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2791 "parser/parser.c"
    break;

  case 71: /* func_cte_expr: STRING  */
#line 196 "parser/c7.y"
                            { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2797 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: CHAR  */
#line 197 "parser/c7.y"
                          { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2803 "parser/parser.c"
    break;

  case 73: /* func_cte_expr: func_expr  */
#line 198 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2809 "parser/parser.c"
    break;

  case 74: /* func_expr: func_call  */
#line 201 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2815 "parser/parser.c"
    break;

  case 77: /* arith_expr: arith_expr ADD term  */
#line 206 "parser/c7.y"
                                           { (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); }
#line 2821 "parser/parser.c"
    break;

  case 78: /* arith_expr: arith_expr SUB term  */
#line 207 "parser/c7.y"
                                           { (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); }
#line 2827 "parser/parser.c"
    break;

  case 79: /* arith_expr: term  */
#line 208 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2833 "parser/parser.c"
    break;

  case 80: /* term: term MULT factor  */
#line 211 "parser/c7.y"
                                    { (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); }
#line 2839 "parser/parser.c"
    break;

  case 81: /* term: term DIV factor  */
#line 212 "parser/c7.y"
                                   { (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); }
#line 2845 "parser/parser.c"
    break;

  case 82: /* term: factor  */
#line 213 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2851 "parser/parser.c"
    break;

  case 83: /* factor: INTEGER  */
#line 216 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 2857 "parser/parser.c"
    break;

  case 84: /* factor: FLOAT  */
#line 217 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 2863 "parser/parser.c"
    break;

  case 85: /* factor: ID  */
#line 218 "parser/c7.y"
                { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2869 "parser/parser.c"
    break;


#line 2873 "parser/parser.c"

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

#line 222 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
