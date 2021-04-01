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
  YYSYMBOL_COMMA = 12,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_NOT_OP = 14,                    /* NOT_OP  */
  YYSYMBOL_L_OP = 15,                      /* L_OP  */
  YYSYMBOL_G_OP = 16,                      /* G_OP  */
  YYSYMBOL_READ = 17,                      /* READ  */
  YYSYMBOL_WRITE = 18,                     /* WRITE  */
  YYSYMBOL_WRITELN = 19,                   /* WRITELN  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_EMPTY = 21,                     /* EMPTY  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_FORALL = 24,                    /* FORALL  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_IN = 26,                        /* IN  */
  YYSYMBOL_IS_SET = 27,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 28,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 29,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 30,                    /* EXISTS  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_EQ_OP = 34,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 35,                     /* NE_OP  */
  YYSYMBOL_LE_OP = 36,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 37,                     /* GE_OP  */
  YYSYMBOL_OR_OP = 38,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 39,                    /* AND_OP  */
  YYSYMBOL_INTEGER = 40,                   /* INTEGER  */
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_FLOAT = 42,                     /* FLOAT  */
  YYSYMBOL_UMINUS = 43,                    /* UMINUS  */
  YYSYMBOL_THEN = 44,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_stmts = 47,                     /* stmts  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_func_stmt = 49,                 /* func_stmt  */
  YYSYMBOL_var_decl_stmt = 50,             /* var_decl_stmt  */
  YYSYMBOL_param_list = 51,                /* param_list  */
  YYSYMBOL_simple_param_list = 52,         /* simple_param_list  */
  YYSYMBOL_flex_block_struct = 53,         /* flex_block_struct  */
  YYSYMBOL_compound_block_stmt = 54,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 55,               /* block_stmts  */
  YYSYMBOL_block_stmt = 56,                /* block_stmt  */
  YYSYMBOL_flow_control = 57,              /* flow_control  */
  YYSYMBOL_opt_param = 58,                 /* opt_param  */
  YYSYMBOL_for_expression = 59,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 60,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 61,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 62,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 63,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 64,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 65,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 66,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 67,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 68,                   /* rel_ops  */
  YYSYMBOL_set_expr = 69,                  /* set_expr  */
  YYSYMBOL_func_call = 70,                 /* func_call  */
  YYSYMBOL_set_func_call = 71,             /* set_func_call  */
  YYSYMBOL_simple_expr = 72,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 73,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 74,                 /* func_expr  */
  YYSYMBOL_arith_expr = 75,                /* arith_expr  */
  YYSYMBOL_term = 76,                      /* term  */
  YYSYMBOL_factor = 77                     /* factor  */
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
#define YYLAST   5213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  614

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    54,    55,    56,    59,    60,    63,    69,
      75,    79,    83,    86,    89,    90,    93,    94,    97,    98,
     101,   104,   107,   108,   109,   110,   111,   115,   119,   123,
     126,   130,   136,   140,   144,   148,   152,   158,   159,   162,
     163,   168,   169,   174,   179,   183,   186,   190,   193,   196,
     199,   202,   205,   209,   215,   218,   221,   222,   226,   229,
     230,   231,   235,   239,   245,   251,   256,   260,   264,   268,
     274,   275,   278,   282,   286,   287,   290,   291,   292,   295,
     298,   301,   304,   307,   310,   311,   316,   317,   318,   319
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
  "MULT", "DIV", "COMMA", "ASSIGN", "NOT_OP", "L_OP", "G_OP", "READ",
  "WRITE", "WRITELN", "TYPE", "EMPTY", "STRING", "RETURN", "FORALL", "FOR",
  "IN", "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF", "ELSE", "CHAR",
  "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER", "ID",
  "FLOAT", "UMINUS", "THEN", "$accept", "program", "stmts", "stmt",
  "func_stmt", "var_decl_stmt", "param_list", "simple_param_list",
  "flex_block_struct", "compound_block_stmt", "block_stmts", "block_stmt",
  "flow_control", "opt_param", "for_expression", "decl_or_cond_expr",
  "or_cond_expr", "and_cond_expr", "unary_cond_expr", "eq_cond_expr",
  "equal_ops", "rel_cond_expr", "rel_cond_stmt", "rel_ops", "set_expr",
  "func_call", "set_func_call", "simple_expr", "func_cte_expr",
  "func_expr", "arith_expr", "term", "factor", YY_NULLPTR
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -18,    36,    82,   148,   273,   410,   412,  -252,   415,
     473,    13,   479,    -2,    55,   199,    37,    25,  1363,   494,
      23,  1524,   507,    66,    83,    86,    64,   943,   116,   129,
     138,   161,   181,   186,   204,    87,  2072,  2103,  2134,  2165,
     147,   206,   255,    89,  3015,  3015,   217,  3015,    54,   221,
     229,   239,  1430,  1107,  1491,   278,   288,   302,   324,   328,
     679,  1569,  1851,  3041,   160,   175,  3041,  3041,  3041,   741,
      73,   943,   559,  2196,  2227,  2258,   219,   262,   285,   332,
     367,     9,  2075,  2101,  2289,    33,    33,    54,    54,   340,
     321,   697,  1219,   315,  4934,   416,  1467,   437,   485,   125,
     134,   426,   499,  4940,  4973,  4979,  4901,   353,   358,   379,
     386,    14,   318,   339,   399,   402,   440,   441,   449,  2107,
    2132,  2138,  2163,  2169,  2320,  3015,   484,   380,  3067,  2906,
    2923,  3096,  1219,  1219,  3176,  3193,  3210,  3227,  3244,  3261,
    3278,  3295,  3210,   451,   475,   476,   514,  2351,   521,   491,
    2382,  2413,  2444,  2475,  2506,  2537,  2568,   434,  3067,   505,
    2320,   372,   585,   503,   513,  5012,  5018,   653,   388,   600,
    2599,  2320,  2320,  2630,  2661,  3015,   179,   529,   533,   538,
     544,   552,   578,   567,  1080,  1123,  1163,   590,   593,   641,
     663,   984,  1444,  1821,  2692,  3015,   257,   674,   693,   715,
     723,   736,   737,   727,   537,   545,   607,   728,   730,   738,
     750,   149,   617,   797,  3015,   261,   758,   767,   775,   788,
    4556,  4589,  5051,  5057,  4622,  4655,  3015,   266,   741,  1249,
     794,   795,   796,   809,  3839,  3451,  3873,    18,   202,   158,
    4352,  4366,  4393,  4400,  4407,  1409,  3887,  3921,     9,     9,
       9,  1845,  3402,    73,  2952,   632,    57,    57,   741,  2723,
    3015,   271,   644,   691,   819,   829,   841,   847,   772,  1201,
     655,  1282,   813,   814,   821,   838,   803,  1628,  1772,  3015,
     279,  3159,   638,  1149,   850,   855,   859,   866,  3485,  3367,
    3519,   433,     3,    31,    72,   466,  4113,  4120,  4154,  4161,
    4195,  1335,  3553,  3587,   812,  2754,   874,   875,   878,   688,
     943,   887,   894,   911,   123,   877,   993,  1046,  1079,   810,
     856,  3113,   913,   992,  1877,   902,  3041,  3041,  3041,    73,
     179,   179,   944,  1024,     9,   848,   858,   908,  3041,  3041,
    3041,    73,    98,    98,   257,   257,   945,  1073,     9,  4688,
    4721,   915,  3041,  3041,  3041,   261,   261,   947,  1113,     9,
    3935,  3969,   284,   917,  3041,  3041,  3041,    73,   741,  3312,
    3312,   120,   120,   266,   266,  1909,  1941,   465,  2969,  4754,
    4787,   343,  2785,  2816,   957,  1172,     9,  1782,  1883,   928,
    3041,  3041,  3041,    73,   190,   190,   271,   271,   969,  1213,
       9,  3621,  3655,  3437,   139,   965,   939,  3041,  3041,  3041,
      73,  3130,  3159,  3159,  3329,  3329,   209,   209,   279,   279,
    1122,  2847,   941,  3015,  3015,   996,   998,  3041,   160,   741,
     943,  1175,  1602,   518,  1001,  1973,  1003,  1013,  1025,  1030,
     563,  2005,  2037,   973,   912,  1031,  1034,  1039,  1042,   568,
     916,   951,   978,  1018,  5090,  4820,  1045,  1049,  1055,  1056,
    4853,  4886,  4434,  3983,  1061,  1066,  1095,  1119,   594,   352,
    4441,  4448,  4017,  4031,  4065,  4079,  5096,  2878,   842,  1915,
    1121,  1124,  1129,  1131,   602,  1947,  1979,  2011,  2043,  4202,
    3689,  3130,  1137,  1138,  1142,  1150,   618,  3015,   287,   628,
     629,  1108,  1152,  1157,  1177,   646,  1262,  1048,  1305,   649,
     662,   683,   684,   685,   581,  1400,  1504,   242,   276,  4236,
    4243,  3723,  3757,  3791,  3825,  1645,  1171,  1184,  1190,  1686,
    1746,  1195,  1467,    81,  1211,  1221,  1223,  1224,  1226,  1229,
    1210,  1212,  1216,  1228,  1230,  5129,  5135,  5168,  5174,  4475,
    4482,  4489,  4516,  4523,   863,   870,   886,   903,   932,   695,
    4277,  4284,  4318,  4325,  4359,  1231,  1217,     9,  1552,  1563,
    1202,  3041,  3041,  3041,    73,   218,   218,   287,   287,  1238,
    1243,  1250,  2351,  2998,  2351,  1784,   702,  1605,  1257,  1261,
    1270,  1271,   703,  1647,  1672,  1683,  1714,  1816,  1848,  1880,
    1912,  2351,   704,  1944,   724,   745,   746,   782,   783,  1976,
    2351,  2351,  2008,  2040
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,  1294,  -252,     0,  -252,  -240,  -125,    11,
    -251,   115,  -141,   -86,   -95,   -99,   -57,   -64,   -11,   -25,
    -232,   -43,   -52,  -236,   395,   -16,   208,    79,  1308,  1331,
    1170,   910,   517
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    36,    14,   113,   154,   316,
      37,   317,    39,    96,    97,    98,    99,   100,   101,   102,
     136,   103,   104,   142,    89,   207,   208,    90,   209,   210,
     211,   212,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   255,    40,     6,   370,   237,   318,   369,   383,   -41,
     129,    55,   111,   377,   250,   -41,     1,   241,   176,   -12,
     147,    40,   167,     7,   -45,   -12,   240,    19,   187,   187,
     291,   187,   162,    13,   161,   170,     8,   -45,    81,    15,
      18,   412,    48,   -45,   239,    20,   173,   174,   222,   184,
     251,   186,   258,   242,   421,    55,   -45,   368,   238,    81,
     415,    16,   348,   414,    42,   293,   215,    17,   163,   -45,
     413,    43,   292,    52,    82,    54,   222,   297,   -47,   -15,
     222,   126,    -2,     9,   -47,   -15,   296,   584,    44,   440,
     166,    45,    70,   165,    52,    82,    54,   220,   349,   221,
      71,   449,     1,   334,   295,    46,    57,   196,    40,   187,
     -47,   -47,   272,   298,   112,   222,   222,   222,   294,   258,
     222,    63,   164,    77,    78,   359,   222,   468,    70,   227,
      76,   319,   -41,    38,    64,   155,   430,   -41,   204,   335,
     206,   -45,   272,    65,    40,   -48,   -45,   315,    -5,    -5,
     114,   -48,    73,   484,    74,    40,    40,   342,   343,   187,
     234,   360,   236,   132,   -49,   214,    66,    91,    -5,   215,
     496,   155,   -45,   133,    92,   -70,   241,   -48,   -48,   187,
      93,    94,   155,   155,   250,   240,    67,   216,   217,   218,
     219,    68,   134,   135,   381,   386,   -49,   -49,   187,   261,
     220,    95,   221,   239,   157,   -11,   241,   159,   -47,    69,
     187,   -11,   242,    75,   400,   240,   107,   362,   280,   184,
     251,   186,   433,   567,   194,   115,    41,   498,   -72,   297,
     269,   387,   271,   239,   370,    56,   -73,   169,   296,   156,
     -47,   -47,   242,    40,   187,    41,   -74,   238,   -44,   288,
     401,   290,   188,   188,   -44,   188,   295,   293,   506,   568,
     508,   -10,   334,   187,   292,   298,   348,   -10,   116,   297,
     404,   359,   223,    -6,    -6,   156,   386,   243,   296,    56,
     -44,   413,   -46,   415,   400,   -76,   156,   156,   -46,    40,
     -48,   117,   567,    -6,    55,   -77,   295,   204,   335,   206,
     223,   220,   349,   221,   223,   298,   234,   360,   236,    84,
     294,   269,   387,   271,   -46,   -46,   241,   241,   471,   288,
     401,   290,   -48,   -48,   -14,   240,   470,   506,   568,   508,
     -14,   -71,    41,   188,   592,   -75,   273,   299,   118,   223,
     223,   223,   532,   239,   223,   148,   124,   125,   517,   -44,
     223,   149,   242,   242,   242,   320,   127,   469,   -46,   143,
     297,   297,   297,   520,   144,   237,   273,    40,    41,   296,
     296,   519,   533,   119,    38,   248,   249,   241,   171,    41,
      41,   -44,   368,   188,   321,   145,   240,   295,   295,   426,
     -46,   -46,   146,   158,   -13,   509,   298,   298,   298,   298,
     -13,   294,   518,   188,   239,    40,   150,   187,   187,   151,
      -7,    -7,   222,   242,    55,    -4,    -4,    11,   238,    12,
      38,   253,   188,   -88,   -88,   -88,   -88,   -88,   -88,   128,
      -7,   -88,   -88,   -47,   188,    -4,   243,   255,   -47,   -39,
     -64,   318,   -88,   318,   130,   -39,   583,   152,   153,   131,
     -88,   -88,   -88,   -88,   -88,   -88,   -78,   600,   -66,   603,
     318,   108,   109,   110,   -47,   -47,   243,    41,   188,   318,
     318,   476,   -49,    -3,    -3,   509,   609,   149,   -49,    -9,
      -9,   187,   -67,   -68,   291,   612,   613,   188,   602,   299,
     511,   -48,   -39,    -3,    -8,    -8,   -48,   -39,    73,    -9,
     134,   135,   527,   528,   -49,   -49,   -49,   -19,   -19,   534,
     -44,   -49,   -43,    41,    -8,   -44,   222,   -43,    56,   293,
     -46,   -69,   -48,   -48,   -40,   -46,   292,   -19,   -65,   299,
     -40,   297,   168,   134,   135,   -72,    73,   -49,   -49,   -73,
     296,   -44,   133,   325,    62,   -86,   -86,   -86,   -86,   326,
     341,   -46,   -46,   -88,   -88,   -88,   -88,   327,   295,   -18,
     -18,   193,   193,   -86,   193,    83,   319,   298,   319,   539,
     559,   -88,   294,   -74,   544,   149,   243,   243,   243,   -18,
     149,   225,   315,   328,   315,   319,   247,   -70,    62,   575,
     576,    41,   -40,   -70,   319,   319,   -76,   -40,   193,   -77,
     553,   315,    62,    62,   122,   123,   149,   -42,   558,   225,
     315,   315,   -42,   225,   149,   -87,   -87,   -87,   -87,   510,
     299,   299,   299,   299,   564,   -81,   -81,   344,   345,    41,
     149,   188,   188,   -87,   -72,   -73,   223,   243,    56,   378,
     -72,   -73,   193,   -81,   131,   278,   303,   -71,   225,   225,
     225,   -72,   -74,   225,   -32,   -76,   -72,   -32,   -74,   225,
     393,   -76,   -88,   -88,   -88,   -88,   -88,   -88,   -77,   -75,
     -32,   -32,   -32,   -32,   -77,   278,   -32,   -32,   -32,   405,
     -32,   -32,   -32,   -32,   -32,   172,   -70,    85,    86,   -43,
     -71,   -75,   193,   324,   -32,   -43,   -71,   -75,   -73,   510,
     -72,   -42,   -37,   -73,   -37,   188,   -37,   -42,   -78,   608,
     610,   -37,   193,   336,   -78,   149,   321,   -37,   -37,   -73,
     337,   437,   438,   439,   -37,   -37,   -37,   -37,   338,   425,
     -66,   193,   350,   446,   447,   448,   -66,   -37,   -37,   -37,
     223,   339,   340,   193,   361,   247,   226,   457,   458,   459,
     227,   -67,   -68,   -74,   -76,   228,   -77,   -67,   -68,   465,
     466,   467,   229,   351,   -71,   193,   193,   193,   230,   231,
     232,   233,   352,   225,   225,   247,   -75,   193,   388,   -74,
     353,   234,   235,   236,   -74,   481,   482,   483,   -69,   -65,
     320,   299,   320,   354,   -69,   -65,   193,   402,   303,   363,
     364,   365,   493,   494,   495,   -84,   -84,   -84,   -84,   320,
     -70,   394,   395,   -31,   366,   -70,   -31,   431,   320,   320,
     -76,   -77,   531,   -84,   389,   -76,   -77,    62,   -71,   -31,
     -31,   -31,   -31,   -71,   390,   -31,   -31,   -31,   303,   -31,
     -31,   -31,   -31,   -31,   -31,   -75,   391,   441,   442,   -78,
     -75,   193,   392,   -31,   -78,   406,   -88,   -88,   -88,   -88,
     407,   452,   453,   432,   408,   193,   -85,   -85,   -85,   -85,
     -66,   409,   460,   461,   -88,   -66,   193,   -67,   -22,   422,
     423,   -22,   -67,   424,   -85,   247,   247,   247,   247,   247,
     474,   475,   427,   -68,   -22,   -22,   -22,   -22,   -68,   428,
     -22,   -22,   -22,   193,   -22,   -22,   -22,   -22,   -22,   -22,
     -69,   278,   278,   487,   488,   -69,   429,   193,   -22,   434,
     -89,   -89,   -89,   -89,   -79,   -79,   344,   345,   516,   303,
     303,   303,   303,   303,   303,   523,   524,    61,   -89,   -65,
     193,   193,   -79,   436,   -65,   225,   247,    62,    47,   445,
     443,   454,    48,   462,   192,   192,   456,   192,   464,   -80,
     -80,   344,   345,   478,    49,    50,   589,   590,   591,   480,
      30,    31,    32,    33,   224,   489,    51,   -80,   491,   246,
     492,    61,   526,    52,    53,    54,   -82,   -82,   -82,   -82,
     -70,   192,   248,   249,   -16,   120,   121,   -16,   435,   -78,
     248,   249,   224,   529,   -82,   530,   224,   -78,   516,   535,
     -16,   -16,   -16,   -16,   193,   569,   -16,   -16,   -16,   536,
     -16,   -16,   -16,   -16,   -16,   -16,   -83,   -83,   -83,   -83,
     444,   537,   248,   249,   -16,   192,   538,   540,   277,   302,
     541,   224,   224,   224,   -83,   542,   224,   -17,   543,   225,
     -17,   545,   224,   574,   -88,   546,   -88,   -88,   -88,   -88,
     -88,   547,   548,   -17,   -17,   -17,   -17,   549,   277,   -17,
     -17,   -17,   550,   -17,   -17,   -17,   -17,   -17,   -17,   455,
     -25,   248,   249,   -25,   193,   192,   -86,   -17,   -86,   -86,
     -86,   -86,   516,   516,   595,   596,   -25,   -25,   -25,   -25,
     303,   551,   -25,   -25,   -25,   192,   -25,   -25,   -25,   -25,
     -25,   -25,    70,   570,   -88,   -88,   -88,   -88,   -88,   463,
     -25,   248,   249,   -19,   192,   552,   -19,   554,   329,   -88,
     555,   -88,   -88,   -88,   -88,   556,   192,   557,   246,   -19,
     -19,   -19,   -19,   560,   561,   -19,   -19,   -19,   562,   -19,
     -19,   -19,   -19,   -19,   -19,   -57,   563,   571,   375,   376,
     192,   -57,   572,   -19,   -57,   -57,   379,   380,   246,   -87,
     192,   -87,   -87,   -87,   -87,   -57,   -23,   579,   479,   -23,
     248,   249,   573,   -57,   -57,   -57,   -57,   -57,   -57,   192,
     580,   302,   -23,   -23,   -23,   -23,   581,    60,   -23,   -23,
     -23,   582,   -23,   -23,   -23,   -23,   -23,   -23,   -86,   -86,
     -86,   -86,   -86,   -86,   191,   191,   -23,    80,   585,   490,
      61,   248,   249,   587,   214,   248,   249,   -66,   215,   -67,
     -68,   302,   -69,    92,   106,   -65,   -66,   586,   -67,   245,
      94,    60,   -68,   588,   192,   597,   216,   217,   218,   219,
     598,    80,   450,   451,   -69,   -57,   -65,   599,   192,   220,
     252,   221,   106,   604,   -57,   -57,   106,   605,   -86,   192,
     -86,   -86,   -86,   -86,   -86,   -57,   606,   607,   246,   246,
     246,   472,   473,   -57,   -57,   -57,   -57,   -57,   -57,   -87,
     -87,   -87,   -87,   -87,   -87,   191,   192,    10,   276,   301,
       0,   106,   106,   106,   485,   486,   106,     0,     0,     0,
     192,   -87,   106,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,   515,   302,   302,   302,   302,   521,   522,   276,     0,
       0,     0,     0,   192,   192,    58,     0,     0,   224,   246,
      61,   -56,     0,   416,   417,   323,     0,   -56,     0,     0,
     -56,   -56,   189,   189,     0,    79,     0,     0,    59,     0,
       0,   -56,     0,     0,    21,   333,     0,    22,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   190,   190,     0,   190,    58,
      23,    24,    25,    26,   347,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,   105,   358,     0,   245,     0,
     244,   515,    59,     0,    35,     0,   -81,   192,   -81,   -81,
     577,   578,   -81,     0,     0,   -56,     0,   371,   372,     0,
     323,     0,     0,   105,   -56,   -56,     0,   105,   245,     0,
     385,     0,     0,   189,     0,   -56,   274,   -86,   -86,   -86,
     -86,   -86,   224,   -56,   -56,   -56,   -56,   -56,   -56,   399,
     -81,   301,   -81,   -81,   330,   331,   190,     0,     0,   275,
     300,     0,   105,   105,   105,     0,   274,   105,     0,     0,
       0,     0,   214,   105,   254,     0,   215,   192,     0,     0,
      60,    92,     0,   322,     0,   593,   594,    93,    94,   275,
       0,   301,     0,   302,   216,   217,   218,   219,   -87,   -87,
     -87,   -87,   -87,   332,   333,     0,   190,   220,    95,   221,
     -84,     0,   -84,   -84,   -84,   -84,   -84,     0,   347,     0,
       0,     0,   346,     0,     0,   -31,   190,     0,   -31,   358,
       0,     0,     0,     0,   357,     0,     0,     0,   245,   245,
     245,   -31,   -31,   -31,   -31,   190,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   385,   190,   -88,   244,
     -88,   -88,   -88,   -88,   -88,   -31,     0,     0,   384,   -85,
     399,   -85,   -85,   -85,   -85,   -85,   -81,   -81,   -81,    87,
      88,   514,   301,   301,   301,   301,     0,   398,     0,   244,
       0,   190,     0,   191,   191,     0,     0,     0,   106,   245,
      60,     0,     0,   -24,     0,     0,   -24,     0,     0,     0,
     190,   -89,   300,   -89,   -89,   -89,   -89,   -89,    58,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -81,   -81,   -81,   396,   397,
     -81,    59,     0,   -24,     0,     0,   -18,     0,     0,   -18,
       0,     0,   300,   -79,     0,   -79,   -79,   577,   578,   -79,
       0,   514,   -18,   -18,   -18,   -18,     0,   566,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -80,     0,
     -80,   -80,   577,   578,   -80,     0,   -18,    -9,     0,   -82,
      -9,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,   244,
     244,   244,   106,    -9,    -9,    -9,    -9,     0,     0,    -9,
      -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,   512,
     -83,     0,   -83,   -83,   -83,   -83,   -83,    -9,     0,     0,
       0,   189,   189,     0,     0,     0,     0,   566,    58,     0,
       0,     0,   513,   300,   300,   300,   300,   -30,     0,     0,
     -30,     0,     0,   301,   190,   190,     0,     0,     0,   105,
     244,    59,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -84,
     -84,   -84,   -84,   -84,   -84,   -29,     0,   -30,   -29,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,   512,
       0,   -29,   -29,   -29,   -29,   565,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -26,     0,     0,
     -26,     0,   513,     0,     0,   -29,     0,   -84,   190,   -84,
     -84,   -84,   -84,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,
       0,   -88,   -27,   -88,   -88,   -88,   -88,   -26,   -84,   -84,
     -84,   -84,   -84,   105,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -28,     0,   -85,   -28,   -85,   -85,   -85,   -85,   -27,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -34,   300,   -79,   -34,   -79,   -79,   330,
     331,   -28,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -32,     0,   -80,   -32,   -80,
     -80,   330,   331,   -34,   -79,   -79,   -79,   396,   397,   -79,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   611,   -35,     0,   -89,
     -35,   -89,   -89,   -89,   -89,   -32,   -80,   -80,   -80,   396,
     397,   -80,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -36,
       0,   -82,   -36,   -82,   -82,   -82,   -82,   -35,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -33,     0,   -83,   -33,   -83,   -83,   -83,   -83,   -36,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -22,     0,     0,   -22,     0,     0,     0,
       0,   -33,   -88,   -88,   -88,   -88,   -88,     0,     0,   -22,
     -22,   -22,   -22,     0,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,    21,     0,     0,    72,   -85,   -85,
     -85,   -85,   -85,   -22,   -89,   -89,   -89,   -89,   -89,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,   -21,     0,     0,   -21,   -79,
     -79,   -79,    87,    88,    35,   -80,   -80,   -80,    87,    88,
       0,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -25,     0,     0,   -25,
     -82,   -82,   -82,   -82,   -82,   -21,   -83,   -83,   -83,   -83,
     -83,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -20,     0,     0,
     -20,     0,     0,     0,     0,     0,   -25,     0,     0,     0,
       0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -23,     0,
       0,   -23,     0,     0,     0,     0,     0,   -20,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -24,
       0,     0,   -24,     0,     0,     0,     0,     0,   -23,     0,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -30,     0,     0,   -30,     0,     0,     0,     0,     0,   -24,
       0,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,    21,     0,   259,     0,     0,     0,     0,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,    27,    28,    29,     0,    30,    31,    32,
      33,    34,   304,     0,   305,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,   306,   307,
     308,   309,     0,     0,   310,   311,   312,     0,    30,    31,
      32,    33,   313,   -29,     0,     0,   -29,     0,     0,     0,
       0,     0,   314,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,     0,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -26,     0,     0,   -26,     0,     0,
       0,     0,     0,   -29,     0,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -27,     0,     0,   -27,     0,
       0,     0,     0,     0,   -26,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -28,     0,     0,   -28,
       0,     0,     0,     0,     0,   -27,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -34,     0,     0,
     -34,     0,     0,     0,     0,     0,   -28,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -16,     0,
       0,   -16,     0,     0,     0,     0,     0,   -34,     0,     0,
       0,     0,     0,     0,   -16,   -16,   -16,   -16,     0,     0,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -17,
       0,     0,   -17,     0,     0,     0,     0,     0,   -16,     0,
       0,     0,     0,     0,     0,   -17,   -17,   -17,   -17,     0,
       0,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,
     -35,     0,     0,   -35,     0,     0,     0,     0,     0,   -17,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -36,     0,     0,   -36,     0,     0,     0,     0,     0,
     -35,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -33,     0,     0,   -33,     0,     0,     0,     0,
       0,   -36,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,    -9,     0,     0,    -9,     0,     0,     0,
       0,     0,   -33,     0,     0,     0,     0,     0,     0,    -9,
      -9,    -9,    -9,     0,     0,    -9,    -9,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    21,     0,     0,   382,     0,     0,
       0,     0,     0,    -9,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,    21,     0,     0,   420,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,    27,    28,    29,
       0,    30,    31,    32,    33,    34,   -19,     0,     0,   -19,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,    21,     0,     0,
     477,     0,     0,     0,     0,     0,   -19,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,    27,
      28,    29,     0,    30,    31,    32,    33,    34,    21,     0,
       0,   525,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
      27,    28,    29,     0,    30,    31,    32,    33,    34,   -18,
       0,     0,   -18,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,   -18,   -18,   -18,   -18,     0,
       0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
       0,   279,   160,     0,     0,   280,     0,     0,     0,   -18,
     281,     0,     0,     0,     0,     0,   282,   283,   -38,     0,
     -38,     0,   -38,   284,   285,   286,   287,   -38,     0,     0,
       0,     0,     0,   -38,   -38,     0,   288,   289,   290,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -37,   -37,     0,
       0,   -37,     0,   -38,   -38,   -38,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -38,   -38,     0,     0,   -38,   -37,
     -37,   -37,   -37,   -38,     0,     0,     0,     0,     0,   -38,
     -38,     0,   -37,   -37,   -37,     0,   -38,   -38,   -38,   -38,
       0,     0,     0,   279,   601,     0,     0,   280,     0,   -38,
     -38,   -38,   281,     0,     0,     0,     0,     0,   282,   283,
     175,     0,     0,     0,   176,   284,   285,   286,   287,     0,
       0,     0,     0,     0,     0,     0,   177,   178,   288,   289,
     290,     0,   179,   180,   181,   182,   195,     0,   183,     0,
     196,     0,     0,     0,     0,   184,   185,   186,     0,     0,
       0,     0,   197,   198,     0,     0,     0,     0,   199,   200,
     201,   202,   260,     0,   203,     0,   261,     0,     0,     0,
       0,   204,   205,   206,     0,     0,     0,     0,   262,   263,
       0,     0,     0,     0,   264,   265,   266,   267,     0,     0,
     268,   214,     0,     0,     0,   215,     0,   269,   270,   271,
      92,     0,     0,     0,     0,     0,    93,    94,   279,     0,
       0,     0,   280,   216,   217,   218,   219,   281,     0,     0,
       0,     0,     0,   282,   283,   497,   220,    95,   221,   498,
     284,   285,   286,   287,     0,     0,     0,     0,     0,     0,
       0,   499,   500,   288,   289,   290,     0,   501,   502,   503,
     504,     0,     0,   505,   279,     0,     0,     0,   280,     0,
     506,   507,   508,   281,     0,     0,     0,     0,     0,     0,
     283,   -52,     0,     0,     0,   -52,   284,   285,   286,   287,
       0,     0,     0,     0,     0,     0,     0,   -52,   -53,   288,
     403,   290,   -53,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,   -53,   214,   -52,   -52,   -52,   215,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,     0,
       0,    94,   -59,   -53,   -53,   -53,   -59,   216,   217,   218,
     219,     0,     0,     0,     0,     0,     0,     0,   -59,   -60,
     220,   252,   221,   -60,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,   -60,   -63,   -59,   -59,   -59,
     -63,   -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,
       0,     0,   -63,   -61,   -60,   -60,   -60,   -61,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,   -61,
     -62,   -63,   -63,   -63,   -62,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,     0,     0,   -62,   226,   -61,   -61,
     -61,   227,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,   229,   279,   -62,   -62,   -62,   280,   230,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
     283,     0,   234,   235,   236,     0,   284,   285,   286,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
     403,   290,   410,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     411,     0,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   253,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   410,   -88,     0,   -88,   -88,   -88,   -88,   -88,
       0,     0,   -88,   -88,     0,     0,   367,   -88,     0,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -88,   -88,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -86,     0,   -86,   -86,   -86,   -86,   -86,     0,     0,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,   -87,   -87,
     -87,   -87,     0,     0,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -81,
       0,   -81,   -81,   418,   419,   -81,     0,     0,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -84,     0,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -88,     0,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -89,     0,   -89,   -89,   -89,
     -89,   -89,     0,     0,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -79,
       0,   -79,   -79,   418,   419,   -79,     0,     0,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -80,     0,   -80,   -80,   418,   419,   -80,
       0,     0,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -82,     0,   -82,
     -82,   -82,   -82,   -82,     0,     0,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,     0,
     -83,   -83,     0,     0,     0,   -86,     0,   -86,   -86,   -86,
     -86,   -83,     0,     0,   -86,   -86,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -86,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,   -87,   -87,   -87,   -87,     0,     0,     0,   -87,   -87,
       0,     0,     0,   -81,     0,   -81,   -81,   373,   374,   -87,
       0,     0,   -81,   -81,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -81,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -84,     0,   -84,
     -84,   -84,   -84,     0,     0,     0,   -84,   -84,     0,     0,
       0,   -88,     0,   -88,   -88,   -88,   -88,   -84,     0,     0,
     -88,   -88,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -88,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -85,     0,   -85,   -85,   -85,
     -85,     0,     0,     0,   -85,   -85,     0,     0,     0,   -89,
       0,   -89,   -89,   -89,   -89,   -85,     0,     0,   -89,   -89,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -89,
       0,     0,     0,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -79,     0,   -79,   -79,   373,   374,     0,
       0,     0,   -79,   -79,     0,     0,     0,   -80,     0,   -80,
     -80,   373,   374,   -79,     0,     0,   -80,   -80,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -82,     0,   -82,   -82,   -82,   -82,     0,     0,     0,
     -82,   -82,     0,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,   -82,     0,     0,   -83,   -83,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -51,
       0,     0,     0,     0,     0,   -51,   -55,     0,   137,   138,
       0,     0,   -55,     0,     0,   -55,   -55,     0,     0,   139,
       0,     0,     0,     0,     0,     0,   -55,   -51,   -51,   140,
     141,   -51,   -51,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -76,     0,     0,     0,     0,     0,   -76,   -77,     0,   -76,
     -76,     0,     0,   -77,     0,     0,   -77,   -77,     0,     0,
     -76,     0,     0,     0,     0,     0,     0,   -77,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -58,     0,     0,     0,     0,     0,   -58,   -78,     0,
     -58,   -58,     0,     0,   -78,     0,     0,   -78,   -78,     0,
       0,   -58,     0,     0,     0,     0,     0,     0,   -78,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -50,     0,     0,     0,     0,     0,   -50,   -54,
       0,   137,   138,     0,     0,   -54,     0,     0,   -54,   -54,
       0,     0,   139,     0,     0,     0,     0,     0,     0,   -54,
     -50,   -50,   140,   141,   -50,   -50,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -66,     0,     0,     0,     0,     0,   -66,
     -67,     0,   -66,   -66,     0,     0,   -67,     0,     0,   -67,
     -67,     0,     0,   -66,     0,     0,     0,     0,     0,     0,
     -67,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,     0,     0,
     -68,   -69,     0,   -68,   -68,     0,     0,   -69,     0,     0,
     -69,   -69,     0,     0,   -68,     0,     0,     0,     0,     0,
       0,   -69,   -68,   -68,   -68,   -68,   -68,   -68,   -51,   -69,
     -69,   -69,   -69,   -69,   -69,   -65,     0,   137,   138,     0,
       0,   -65,   -55,     0,   -65,   -65,     0,     0,   139,     0,
       0,   -55,   -55,     0,     0,   -65,   -51,   -51,   140,   141,
     -51,   -51,   -55,   -65,   -65,   -65,   -65,   -65,   -65,   -76,
     -55,   -55,   -55,   -55,   -55,   -55,   -77,     0,   -76,   -76,
       0,     0,     0,   -58,     0,   -77,   -77,     0,     0,   -76,
       0,     0,   -58,   -58,     0,     0,   -77,   -76,   -76,   -76,
     -76,   -76,   -76,   -58,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,   -58,   -58,   -58,   -58,   -58,   -58,   -50,     0,   -78,
     -78,     0,     0,     0,   -54,     0,   137,   138,     0,     0,
     -78,     0,     0,   -54,   -54,     0,     0,   139,   -78,   -78,
     -78,   -78,   -78,   -78,   -54,   -50,   -50,   140,   141,   -50,
     -50,   -66,   -54,   -54,   -54,   -54,   -54,   -54,   -67,     0,
     -66,   -66,     0,     0,     0,   -68,     0,   -67,   -67,     0,
       0,   -66,     0,     0,   -68,   -68,     0,     0,   -67,   -66,
     -66,   -66,   -66,   -66,   -66,   -68,   -67,   -67,   -67,   -67,
     -67,   -67,   -69,   -68,   -68,   -68,   -68,   -68,   -68,   -65,
       0,   -69,   -69,     0,     0,     0,     0,     0,   -65,   -65,
       0,     0,   -69,     0,     0,     0,     0,     0,     0,   -65,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -81,
     -81,   -81,   355,   356,   -81,     0,     0,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -79,   -79,   -79,   355,   356,   -79,     0,     0,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -80,   -80,   -80,   355,   356,   -80,
       0,     0,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,   -89,   -89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,   -83,   -83,     0,     0,     0,     0,     0,   -56,   256,
     257,     0,   -83,   -56,     0,     0,   -56,   -56,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -56,     0,     0,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -57,     0,     0,     0,     0,   -57,   -51,     0,   -57,
     -57,     0,   -51,     0,     0,   137,   138,     0,     0,     0,
     -57,     0,     0,     0,     0,     0,   139,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -51,   -51,   140,   141,   -51,   -51,
     -55,     0,     0,     0,     0,   -55,   -58,     0,   -55,   -55,
       0,   -58,     0,     0,   -58,   -58,     0,     0,     0,   -55,
       0,     0,     0,     0,     0,   -58,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -58,   -58,   -58,   -58,   -58,   -58,   -50,
       0,     0,     0,     0,   -50,   -54,     0,   137,   138,     0,
     -54,     0,     0,   -54,   -54,     0,     0,     0,   139,     0,
       0,     0,     0,     0,   -54,     0,   -50,   -50,   140,   141,
     -50,   -50,   -54,   -54,   -54,   -54,   -54,   -54,   -76,     0,
       0,     0,     0,   -76,   -77,     0,   -76,   -76,     0,   -77,
       0,     0,   -77,   -77,     0,     0,     0,   -76,     0,     0,
       0,     0,     0,   -77,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,     0,
       0,     0,   -78,   -65,     0,   -78,   -78,     0,   -65,     0,
       0,   -65,   -65,     0,     0,     0,   -78,     0,     0,     0,
       0,     0,   -65,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,     0,     0,
       0,   -66,   -67,     0,   -66,   -66,     0,   -67,     0,     0,
     -67,   -67,     0,     0,     0,   -66,     0,     0,     0,     0,
       0,   -67,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,     0,     0,     0,     0,
     -68,   -69,     0,   -68,   -68,     0,   -69,     0,     0,   -69,
     -69,     0,     0,     0,   -68,     0,     0,     0,     0,     0,
     -69,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,   -69,   -69
};

static const yytype_int16 yycheck[] =
{
       0,    96,    18,     3,   240,    69,   147,   239,   259,     6,
      96,    27,    69,   253,     5,    12,    20,    69,     9,     6,
       6,    37,   147,    41,     6,    12,    69,    16,    44,    45,
     129,    47,   131,    20,   129,   160,     0,     6,     5,    41,
       3,    38,     9,    12,    69,    20,   171,   172,    64,    40,
      41,    42,    38,    69,   305,    71,    38,    39,    69,     5,
     296,     6,     5,   295,    41,   129,     9,    12,   132,    38,
      39,     5,   129,    40,    41,    42,    92,   129,     6,     6,
      96,    92,     0,     1,    12,    12,   129,     6,     5,   329,
     142,     5,     5,   136,    40,    41,    42,    40,    41,    42,
      13,   341,    20,     5,   129,    41,    27,     9,   124,   125,
      38,    39,   128,   129,    41,   131,   132,   133,   129,    38,
     136,     5,   133,    44,    45,     5,   142,   367,     5,     9,
      41,   147,     7,    18,     5,   124,    13,    12,    40,    41,
      42,     7,   158,     5,   160,     6,    12,   147,     0,     1,
      71,    12,    37,   393,     7,   171,   172,     8,     9,   175,
      40,    41,    42,    38,     6,     5,     5,     7,    20,     9,
     410,   160,    38,    39,    14,    26,   228,    38,    39,   195,
      20,    21,   171,   172,     5,   228,     5,    27,    28,    29,
      30,     5,    34,    35,   258,     5,    38,    39,   214,     9,
      40,    41,    42,   228,   125,     6,   258,   128,     6,     5,
     226,    12,   228,     7,     5,   258,    41,   228,     9,    40,
      41,    42,   321,     5,     7,     6,    18,     9,     7,   281,
      40,    41,    42,   258,   470,    27,     7,   158,   281,   124,
      38,    39,   258,   259,   260,    37,     7,   258,     6,    40,
      41,    42,    44,    45,    12,    47,   281,   321,    40,    41,
      42,     6,     5,   279,   321,   281,     5,    12,     6,   321,
     281,     5,    64,     0,     1,   160,     5,    69,   321,    71,
      38,    39,     6,   519,     5,     7,   171,   172,    12,   305,
       6,     6,     5,    20,   310,     7,   321,    40,    41,    42,
      92,    40,    41,    42,    96,   321,    40,    41,    42,     7,
     321,    40,    41,    42,    38,    39,   368,   369,   370,    40,
      41,    42,    38,    39,     6,   368,   369,    40,    41,    42,
      12,     7,   124,   125,   574,     7,   128,   129,     6,   131,
     132,   133,   428,   368,   136,     6,     6,    26,   412,     6,
     142,    12,   368,   369,   370,   147,    41,   368,     6,     6,
     412,   413,   414,   415,     6,   429,   158,   383,   160,   412,
     413,   414,   429,     6,   259,     8,     9,   429,     6,   171,
     172,    38,    39,   175,    12,     6,   429,   412,   413,   310,
      38,    39,     6,    13,     6,   411,   412,   413,   414,   415,
      12,   412,   413,   195,   429,   421,     7,   423,   424,     7,
       0,     1,   428,   429,   430,     0,     1,     5,   429,     7,
     305,     5,   214,     7,     8,     9,    10,    11,    12,    13,
      20,    15,    16,     7,   226,    20,   228,   532,    12,     6,
       6,   582,    26,   584,     7,    12,   532,     7,     7,    12,
      34,    35,    36,    37,    38,    39,     7,   582,     7,   584,
     601,    66,    67,    68,    38,    39,   258,   259,   260,   610,
     611,     6,     6,     0,     1,   491,   601,    12,    12,     0,
       1,   497,     7,     7,   583,   610,   611,   279,   583,   281,
     411,     7,     7,    20,     0,     1,    12,    12,   383,    20,
      34,    35,   423,   424,    38,    39,     7,     0,     1,   430,
       7,    12,     7,   305,    20,    12,   532,    12,   310,   583,
       7,     7,    38,    39,     6,    12,   583,    20,     7,   321,
      12,   583,    41,    34,    35,     6,   421,    38,    39,     6,
     583,    38,    39,     5,    27,     8,     9,    10,    11,     5,
       5,    38,    39,     8,     9,    10,    11,     5,   583,     0,
       1,    44,    45,    26,    47,    48,   582,   583,   584,     6,
     491,    26,   583,     6,     6,    12,   368,   369,   370,    20,
      12,    64,   582,     5,   584,   601,    69,     6,    71,     8,
       9,   383,     7,    12,   610,   611,     6,    12,    81,     6,
       6,   601,    85,    86,    87,    88,    12,     7,     6,    92,
     610,   611,    12,    96,    12,     8,     9,    10,    11,   411,
     412,   413,   414,   415,     6,     8,     9,    10,    11,   421,
      12,   423,   424,    26,     6,     6,   428,   429,   430,     7,
      12,    12,   125,    26,    12,   128,   129,     6,   131,   132,
     133,     7,     6,   136,     1,     6,    12,     4,    12,   142,
       5,    12,     7,     8,     9,    10,    11,    12,     6,     6,
      17,    18,    19,    20,    12,   158,    23,    24,    25,    41,
      27,    28,    29,    30,    31,    32,     7,     8,     9,     6,
       6,     6,   175,   176,    41,    12,    12,    12,     7,   491,
      26,     6,     5,    12,     7,   497,     9,    12,     6,     6,
       6,    14,   195,   196,    12,    12,    12,    20,    21,    26,
       5,   326,   327,   328,    27,    28,    29,    30,     5,    41,
       6,   214,   215,   338,   339,   340,    12,    40,    41,    42,
     532,     5,     5,   226,   227,   228,     5,   352,   353,   354,
       9,     6,     6,    26,    26,    14,    26,    12,    12,   364,
     365,   366,    21,     5,    26,   248,   249,   250,    27,    28,
      29,    30,     5,   256,   257,   258,    26,   260,   261,     7,
       5,    40,    41,    42,    12,   390,   391,   392,     6,     6,
     582,   583,   584,     5,    12,    12,   279,   280,   281,     5,
       5,     5,   407,   408,   409,     8,     9,    10,    11,   601,
       7,     8,     9,     1,     5,    12,     4,     7,   610,   611,
       7,     7,   427,    26,     5,    12,    12,   310,     7,    17,
      18,    19,    20,    12,     5,    23,    24,    25,   321,    27,
      28,    29,    30,    31,    32,     7,     5,   330,   331,     7,
      12,   334,     5,    41,    12,     5,     8,     9,    10,    11,
       5,   344,   345,     7,     5,   348,     8,     9,    10,    11,
       7,     5,   355,   356,    26,    12,   359,     7,     1,     5,
       5,     4,    12,     5,    26,   368,   369,   370,   371,   372,
     373,   374,     5,     7,    17,    18,    19,    20,    12,     5,
      23,    24,    25,   386,    27,    28,    29,    30,    31,    32,
       7,   394,   395,   396,   397,    12,     5,   400,    41,     6,
       8,     9,    10,    11,     8,     9,    10,    11,   411,   412,
     413,   414,   415,   416,   417,   418,   419,    27,    26,     7,
     423,   424,    26,    41,    12,   428,   429,   430,     5,    41,
       6,     6,     9,     6,    44,    45,    41,    47,    41,     8,
       9,    10,    11,     6,    21,    22,   571,   572,   573,    41,
      27,    28,    29,    30,    64,     6,    33,    26,    13,    69,
      41,    71,    41,    40,    41,    42,     8,     9,    10,    11,
       6,    81,     8,     9,     1,    85,    86,     4,     6,    26,
       8,     9,    92,     7,    26,     7,    96,     6,   491,     6,
      17,    18,    19,    20,   497,   498,    23,    24,    25,     6,
      27,    28,    29,    30,    31,    32,     8,     9,    10,    11,
       6,     6,     8,     9,    41,   125,     6,     6,   128,   129,
       6,   131,   132,   133,    26,     6,   136,     1,     6,   532,
       4,     6,   142,     5,     6,     6,     8,     9,    10,    11,
      12,     6,     6,    17,    18,    19,    20,     6,   158,    23,
      24,    25,     6,    27,    28,    29,    30,    31,    32,     6,
       1,     8,     9,     4,   567,   175,     6,    41,     8,     9,
      10,    11,   575,   576,   577,   578,    17,    18,    19,    20,
     583,     6,    23,    24,    25,   195,    27,    28,    29,    30,
      31,    32,     5,     5,     7,     8,     9,    10,    11,     6,
      41,     8,     9,     1,   214,     6,     4,     6,     5,     6,
       6,     8,     9,    10,    11,     6,   226,     6,   228,    17,
      18,    19,    20,     6,     6,    23,    24,    25,     6,    27,
      28,    29,    30,    31,    32,     6,     6,     5,   248,   249,
     250,    12,     5,    41,    15,    16,   256,   257,   258,     6,
     260,     8,     9,    10,    11,    26,     1,     6,     6,     4,
       8,     9,     5,    34,    35,    36,    37,    38,    39,   279,
       6,   281,    17,    18,    19,    20,     6,    27,    23,    24,
      25,     6,    27,    28,    29,    30,    31,    32,     7,     8,
       9,    10,    11,    12,    44,    45,    41,    47,     7,     6,
     310,     8,     9,     6,     5,     8,     9,     6,     9,     6,
       6,   321,     6,    14,    64,     6,    26,     6,    26,    69,
      21,    71,    26,    41,   334,     7,    27,    28,    29,    30,
       7,    81,   342,   343,    26,     6,    26,     7,   348,    40,
      41,    42,    92,     6,    15,    16,    96,     6,     6,   359,
       8,     9,    10,    11,    12,    26,     6,     6,   368,   369,
     370,   371,   372,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,   125,   386,     3,   128,   129,
      -1,   131,   132,   133,   394,   395,   136,    -1,    -1,    -1,
     400,     6,   142,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   411,   412,   413,   414,   415,   416,   417,   158,    -1,
      -1,    -1,    -1,   423,   424,    27,    -1,    -1,   428,   429,
     430,     6,    -1,     8,     9,   175,    -1,    12,    -1,    -1,
      15,    16,    44,    45,    -1,    47,    -1,    -1,    27,    -1,
      -1,    26,    -1,    -1,     1,   195,    -1,     4,    -1,    34,
      35,    36,    37,    38,    39,    44,    45,    -1,    47,    71,
      17,    18,    19,    20,   214,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    64,   226,    -1,   228,    -1,
      69,   491,    71,    -1,    41,    -1,     6,   497,     8,     9,
      10,    11,    12,    -1,    -1,     6,    -1,     8,     9,    -1,
     250,    -1,    -1,    92,    15,    16,    -1,    96,   258,    -1,
     260,    -1,    -1,   125,    -1,    26,   128,     7,     8,     9,
      10,    11,   532,    34,    35,    36,    37,    38,    39,   279,
       6,   281,     8,     9,    10,    11,   125,    -1,    -1,   128,
     129,    -1,   131,   132,   133,    -1,   158,   136,    -1,    -1,
      -1,    -1,     5,   142,     7,    -1,     9,   567,    -1,    -1,
     310,    14,    -1,   175,    -1,   575,   576,    20,    21,   158,
      -1,   321,    -1,   583,    27,    28,    29,    30,     7,     8,
       9,    10,    11,   195,   334,    -1,   175,    40,    41,    42,
       6,    -1,     8,     9,    10,    11,    12,    -1,   348,    -1,
      -1,    -1,   214,    -1,    -1,     1,   195,    -1,     4,   359,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   368,   369,
     370,    17,    18,    19,    20,   214,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,   386,   226,     6,   228,
       8,     9,    10,    11,    12,    41,    -1,    -1,   260,     6,
     400,     8,     9,    10,    11,    12,     7,     8,     9,    10,
      11,   411,   412,   413,   414,   415,    -1,   279,    -1,   258,
      -1,   260,    -1,   423,   424,    -1,    -1,    -1,   428,   429,
     430,    -1,    -1,     1,    -1,    -1,     4,    -1,    -1,    -1,
     279,     6,   281,     8,     9,    10,    11,    12,   310,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,     7,     8,     9,    10,    11,
      12,   310,    -1,    41,    -1,    -1,     1,    -1,    -1,     4,
      -1,    -1,   321,     6,    -1,     8,     9,    10,    11,    12,
      -1,   491,    17,    18,    19,    20,    -1,   497,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,     6,    -1,
       8,     9,    10,    11,    12,    -1,    41,     1,    -1,     6,
       4,     8,     9,    10,    11,    12,    -1,    -1,    -1,   368,
     369,   370,   532,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,   411,
       6,    -1,     8,     9,    10,    11,    12,    41,    -1,    -1,
      -1,   423,   424,    -1,    -1,    -1,    -1,   567,   430,    -1,
      -1,    -1,   411,   412,   413,   414,   415,     1,    -1,    -1,
       4,    -1,    -1,   583,   423,   424,    -1,    -1,    -1,   428,
     429,   430,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,     7,
       8,     9,    10,    11,    12,     1,    -1,    41,     4,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,   491,
      -1,    17,    18,    19,    20,   497,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,   491,    -1,    -1,    41,    -1,     6,   497,     8,
       9,    10,    11,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,     1,
      -1,     6,     4,     8,     9,    10,    11,    41,     7,     8,
       9,    10,    11,   532,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,     1,    -1,     6,     4,     8,     9,    10,    11,    41,
       7,     8,     9,    10,    11,    12,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,     1,   583,     6,     4,     8,     9,    10,
      11,    41,     7,     8,     9,    10,    11,    12,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,     1,    -1,     6,     4,     8,
       9,    10,    11,    41,     7,     8,     9,    10,    11,    12,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,     1,    -1,     6,
       4,     8,     9,    10,    11,    41,     7,     8,     9,    10,
      11,    12,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,     1,
      -1,     6,     4,     8,     9,    10,    11,    41,     7,     8,
       9,    10,    11,    12,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,     1,    -1,     6,     4,     8,     9,    10,    11,    41,
       7,     8,     9,    10,    11,    12,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,    -1,     4,     7,     8,
       9,    10,    11,    41,     7,     8,     9,    10,    11,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,    -1,     4,     7,
       8,     9,    10,    11,    41,     7,     8,     9,    10,    11,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,    -1,     4,
       7,     8,     9,    10,    11,    41,     7,     8,     9,    10,
      11,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
       1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,     1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,     1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,     1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      -1,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    41,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,     5,    -1,
       7,    -1,     9,    27,    28,    29,    30,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    40,    41,    42,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,     5,     6,    -1,
      -1,     9,    -1,    40,    41,    42,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,     5,     6,    -1,    -1,     9,    27,
      28,    29,    30,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    40,    41,    42,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,     5,     6,    -1,    -1,     9,    -1,    40,
      41,    42,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
       5,    -1,    -1,    -1,     9,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    40,    41,
      42,    -1,    27,    28,    29,    30,     5,    -1,    33,    -1,
       9,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     5,    -1,    33,    -1,     9,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      33,     5,    -1,    -1,    -1,     9,    -1,    40,    41,    42,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,     5,    -1,
      -1,    -1,     9,    27,    28,    29,    30,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,     5,    40,    41,    42,     9,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    40,    41,    42,    -1,    27,    28,    29,
      30,    -1,    -1,    33,     5,    -1,    -1,    -1,     9,    -1,
      40,    41,    42,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,     5,    -1,    -1,    -1,     9,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     5,    40,
      41,    42,     9,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,     5,    40,    41,    42,     9,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,     5,    40,    41,    42,     9,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,     5,
      40,    41,    42,     9,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,     5,    40,    41,    42,
       9,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,     5,    40,    41,    42,     9,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
       5,    40,    41,    42,     9,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,     5,    40,    41,
      42,     9,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,     5,    40,    41,    42,     9,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    40,    41,    42,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     5,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,     5,     6,    -1,     8,
       9,    10,    11,    26,    -1,    -1,    15,    16,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    26,    -1,    -1,    15,    16,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,    26,
      -1,    -1,    15,    16,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    26,    -1,    -1,
      15,    16,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    26,    -1,    -1,    15,    16,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    26,    -1,    -1,    15,    16,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    26,    -1,    -1,    15,    16,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,    -1,    -1,    -1,    -1,    12,     6,    -1,    15,    16,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    34,    35,    36,
      37,    38,    39,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,    12,     6,    -1,    15,
      16,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    26,    34,    35,
      36,    37,    38,    39,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,    -1,    -1,    -1,    -1,    12,     6,    -1,
      15,    16,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    26,    34,
      35,    36,    37,    38,    39,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,     6,
      -1,    15,    16,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      34,    35,    36,    37,    38,    39,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,
       6,    -1,    15,    16,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    34,    35,    36,    37,    38,    39,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,
      12,     6,    -1,    15,    16,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    34,    35,    36,    37,    38,    39,     6,    34,
      35,    36,    37,    38,    39,     6,    -1,    15,    16,    -1,
      -1,    12,     6,    -1,    15,    16,    -1,    -1,    26,    -1,
      -1,    15,    16,    -1,    -1,    26,    34,    35,    36,    37,
      38,    39,    26,    34,    35,    36,    37,    38,    39,     6,
      34,    35,    36,    37,    38,    39,     6,    -1,    15,    16,
      -1,    -1,    -1,     6,    -1,    15,    16,    -1,    -1,    26,
      -1,    -1,    15,    16,    -1,    -1,    26,    34,    35,    36,
      37,    38,    39,    26,    34,    35,    36,    37,    38,    39,
       6,    34,    35,    36,    37,    38,    39,     6,    -1,    15,
      16,    -1,    -1,    -1,     6,    -1,    15,    16,    -1,    -1,
      26,    -1,    -1,    15,    16,    -1,    -1,    26,    34,    35,
      36,    37,    38,    39,    26,    34,    35,    36,    37,    38,
      39,     6,    34,    35,    36,    37,    38,    39,     6,    -1,
      15,    16,    -1,    -1,    -1,     6,    -1,    15,    16,    -1,
      -1,    26,    -1,    -1,    15,    16,    -1,    -1,    26,    34,
      35,    36,    37,    38,    39,    26,    34,    35,    36,    37,
      38,    39,     6,    34,    35,    36,    37,    38,    39,     6,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      34,    35,    36,    37,    38,    39,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    -1,    26,    12,    -1,    -1,    15,    16,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,
      16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    26,    -1,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39,     7,
      -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    34,    35,    36,    37,
      38,    39,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    34,    35,    36,    37,    38,
      39,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
      -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    34,    35,    36,    37,    38,    39,    34,
      35,    36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,
      12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    34,    35,    36,    37,    38,    39,    34,    35,
      36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    46,    47,    48,    49,    50,    41,     0,     1,
      48,     5,     7,    20,    51,    41,     6,    12,     3,    54,
      20,     1,     4,    17,    18,    19,    20,    23,    24,    25,
      27,    28,    29,    30,    31,    41,    50,    55,    56,    57,
      70,    71,    41,     5,     5,     5,    41,     5,     9,    21,
      22,    33,    40,    41,    42,    70,    71,    72,    73,    74,
      75,    76,    77,     5,     5,     5,     5,     5,     5,     5,
       5,    13,     4,    56,     7,     7,    41,    72,    72,    73,
      75,     5,    41,    77,     7,     8,     9,    10,    11,    69,
      72,     7,    14,    20,    21,    41,    58,    59,    60,    61,
      62,    63,    64,    66,    67,    74,    75,    41,    69,    69,
      69,    61,    41,    52,    72,     6,     6,     6,     6,     6,
      76,    76,    77,    77,     6,    26,    63,    41,    13,    58,
       7,    12,    38,    39,    34,    35,    65,    15,    16,    26,
      36,    37,    68,     6,     6,     6,     6,     6,     6,    12,
       7,     7,     7,     7,    53,    54,    56,    72,    13,    72,
       6,    59,    60,    62,    63,    66,    67,    53,    41,    72,
      53,     6,    32,    53,    53,     5,     9,    21,    22,    27,
      28,    29,    30,    33,    40,    41,    42,    70,    71,    73,
      74,    75,    76,    77,     7,     5,     9,    21,    22,    27,
      28,    29,    30,    33,    40,    41,    42,    70,    71,    73,
      74,    75,    76,    77,     5,     9,    27,    28,    29,    30,
      40,    42,    70,    71,    76,    77,     5,     9,    14,    21,
      27,    28,    29,    30,    40,    41,    42,    62,    63,    64,
      66,    67,    70,    71,    74,    75,    76,    77,     8,     9,
       5,    41,    41,     5,     7,    59,     8,     9,    38,     3,
       5,     9,    21,    22,    27,    28,    29,    30,    33,    40,
      41,    42,    70,    71,    73,    74,    75,    76,    77,     5,
       9,    14,    20,    21,    27,    28,    29,    30,    40,    41,
      42,    60,    61,    62,    63,    64,    66,    67,    70,    71,
      74,    75,    76,    77,     1,     3,    17,    18,    19,    20,
      23,    24,    25,    31,    41,    50,    54,    56,    57,    70,
      71,    12,    73,    75,    77,     5,     5,     5,     5,     5,
      10,    11,    73,    75,     5,    41,    77,     5,     5,     5,
       5,     5,     8,     9,    10,    11,    73,    75,     5,    41,
      77,     5,     5,     5,     5,    10,    11,    73,    75,     5,
      41,    77,    63,     5,     5,     5,     5,     5,    39,    65,
      68,     8,     9,    10,    11,    76,    76,    52,     7,    76,
      76,    62,     4,    55,    73,    75,     5,    41,    77,     5,
       5,     5,     5,     5,     8,     9,    10,    11,    73,    75,
       5,    41,    77,    41,    63,    41,     5,     5,     5,     5,
       5,    13,    38,    39,    65,    68,     8,     9,    10,    11,
       4,    55,     5,     5,     5,    41,    72,     5,     5,     5,
      13,     7,     7,    60,     6,     6,    41,    69,    69,    69,
      52,    77,    77,     6,     6,    41,    69,    69,    69,    52,
      76,    76,    77,    77,     6,     6,    41,    69,    69,    69,
      77,    77,     6,     6,    41,    69,    69,    69,    52,    63,
      66,    67,    76,    76,    77,    77,     6,     4,     6,     6,
      41,    69,    69,    69,    52,    76,    76,    77,    77,     6,
       6,    13,    41,    69,    69,    69,    52,     5,     9,    21,
      22,    27,    28,    29,    30,    33,    40,    41,    42,    70,
      71,    72,    73,    74,    75,    76,    77,    62,    63,    66,
      67,    76,    76,    77,    77,     4,    41,    72,    72,     7,
       7,    69,    58,    61,    72,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,    72,
       6,     6,     6,     6,     6,    73,    75,     5,    41,    77,
       5,     5,     5,     5,     5,     8,     9,    10,    11,     6,
       6,     6,     6,    58,     6,     7,     6,     6,    41,    69,
      69,    69,    52,    76,    76,    77,    77,     7,     7,     7,
      53,     6,    59,    53,     6,     6,     6,     6,     6,    53,
       6,    32,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    50,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    59,
      59,    60,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    68,
      68,    68,    68,    68,    69,    70,    71,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    74,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     6,     3,
       4,     2,     0,     3,     1,     0,     1,     1,     3,     2,
       2,     1,     1,     2,     2,     1,     5,     5,     5,     4,
       3,     1,     5,     7,     5,     6,     7,     1,     2,     1,
       3,     1,     4,     3,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     2,     1,     1,     1,     3
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
  case 4: /* stmts: stmts error  */
#line 55 "parser/c7.y"
                      { yyerrok; }
#line 2682 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 59 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2688 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 60 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2694 "parser/parser.c"
    break;

  case 8: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 63 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-5].str_value));
            }
#line 2703 "parser/parser.c"
    break;

  case 9: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 69 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    free((yyvsp[-2].str_value));
                }
#line 2712 "parser/parser.c"
    break;

  case 10: /* param_list: param_list COMMA TYPE ID  */
#line 75 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                free((yyvsp[-1].str_value));
            }
#line 2721 "parser/parser.c"
    break;

  case 11: /* param_list: TYPE ID  */
#line 79 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                free((yyvsp[-1].str_value));
            }
#line 2730 "parser/parser.c"
    break;

  case 12: /* param_list: %empty  */
#line 83 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2736 "parser/parser.c"
    break;

  case 13: /* simple_param_list: simple_param_list COMMA ID  */
#line 86 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                    }
#line 2744 "parser/parser.c"
    break;

  case 14: /* simple_param_list: ID  */
#line 89 "parser/c7.y"
                            { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2750 "parser/parser.c"
    break;

  case 15: /* simple_param_list: %empty  */
#line 90 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2756 "parser/parser.c"
    break;

  case 16: /* flex_block_struct: compound_block_stmt  */
#line 93 "parser/c7.y"
                                             { (yyval.expression) = (yyvsp[0].expression); }
#line 2762 "parser/parser.c"
    break;

  case 17: /* flex_block_struct: block_stmt  */
#line 94 "parser/c7.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2768 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 97 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2774 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 98 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2780 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_stmt  */
#line 101 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2788 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_stmt  */
#line 104 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2794 "parser/parser.c"
    break;

  case 22: /* block_stmt: var_decl_stmt  */
#line 107 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2800 "parser/parser.c"
    break;

  case 23: /* block_stmt: func_call SEMICOLON  */
#line 108 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2806 "parser/parser.c"
    break;

  case 24: /* block_stmt: set_func_call SEMICOLON  */
#line 109 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2812 "parser/parser.c"
    break;

  case 25: /* block_stmt: flow_control  */
#line 110 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2818 "parser/parser.c"
    break;

  case 26: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 111 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                free((yyvsp[-4].str_value));
            }
#line 2827 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 115 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2836 "parser/parser.c"
    break;

  case 28: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 119 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2845 "parser/parser.c"
    break;

  case 29: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 123 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression)); 
            }
#line 2853 "parser/parser.c"
    break;

  case 30: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 126 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2862 "parser/parser.c"
    break;

  case 31: /* block_stmt: error  */
#line 130 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2871 "parser/parser.c"
    break;

  case 32: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct  */
#line 136 "parser/c7.y"
                                                                                                   {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2880 "parser/parser.c"
    break;

  case 33: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct  */
#line 140 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-6].str_value)); free((yyvsp[-1].str_value));
                }
#line 2889 "parser/parser.c"
    break;

  case 34: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT flex_block_struct  */
#line 144 "parser/c7.y"
                                                                                        {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2898 "parser/parser.c"
    break;

  case 35: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT flex_block_struct  */
#line 148 "parser/c7.y"
                                                                                                    {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2907 "parser/parser.c"
    break;

  case 36: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT flex_block_struct  */
#line 152 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2916 "parser/parser.c"
    break;

  case 37: /* opt_param: SEMICOLON  */
#line 158 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2922 "parser/parser.c"
    break;

  case 38: /* opt_param: for_expression SEMICOLON  */
#line 159 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2928 "parser/parser.c"
    break;

  case 39: /* for_expression: decl_or_cond_expr  */
#line 162 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2934 "parser/parser.c"
    break;

  case 40: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 163 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2942 "parser/parser.c"
    break;

  case 41: /* decl_or_cond_expr: or_cond_expr  */
#line 168 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2948 "parser/parser.c"
    break;

  case 42: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 169 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                        free((yyvsp[-3].str_value));
                    }
#line 2958 "parser/parser.c"
    break;

  case 43: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 174 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                    }
#line 2966 "parser/parser.c"
    break;

  case 44: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 179 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2975 "parser/parser.c"
    break;

  case 45: /* or_cond_expr: and_cond_expr  */
#line 183 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2981 "parser/parser.c"
    break;

  case 46: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 186 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2990 "parser/parser.c"
    break;

  case 47: /* and_cond_expr: unary_cond_expr  */
#line 190 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2996 "parser/parser.c"
    break;

  case 48: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 193 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 3004 "parser/parser.c"
    break;

  case 49: /* unary_cond_expr: eq_cond_expr  */
#line 196 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3010 "parser/parser.c"
    break;

  case 50: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 199 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3018 "parser/parser.c"
    break;

  case 51: /* eq_cond_expr: rel_cond_expr  */
#line 202 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3024 "parser/parser.c"
    break;

  case 52: /* equal_ops: EQ_OP  */
#line 205 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3033 "parser/parser.c"
    break;

  case 53: /* equal_ops: NE_OP  */
#line 209 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3042 "parser/parser.c"
    break;

  case 54: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 215 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3050 "parser/parser.c"
    break;

  case 55: /* rel_cond_expr: rel_cond_stmt  */
#line 218 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3056 "parser/parser.c"
    break;

  case 56: /* rel_cond_stmt: arith_expr  */
#line 221 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3062 "parser/parser.c"
    break;

  case 57: /* rel_cond_stmt: EMPTY  */
#line 222 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3071 "parser/parser.c"
    break;

  case 58: /* rel_cond_stmt: func_expr  */
#line 226 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3077 "parser/parser.c"
    break;

  case 59: /* rel_ops: L_OP  */
#line 229 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3083 "parser/parser.c"
    break;

  case 60: /* rel_ops: G_OP  */
#line 230 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3089 "parser/parser.c"
    break;

  case 61: /* rel_ops: LE_OP  */
#line 231 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3098 "parser/parser.c"
    break;

  case 62: /* rel_ops: GE_OP  */
#line 235 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3107 "parser/parser.c"
    break;

  case 63: /* rel_ops: IN  */
#line 239 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3116 "parser/parser.c"
    break;

  case 64: /* set_expr: simple_expr IN simple_expr  */
#line 245 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3125 "parser/parser.c"
    break;

  case 65: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 251 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 3133 "parser/parser.c"
    break;

  case 66: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 256 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    free((yyvsp[-3].str_value));
                }
#line 3142 "parser/parser.c"
    break;

  case 67: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 260 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3151 "parser/parser.c"
    break;

  case 68: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 264 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3160 "parser/parser.c"
    break;

  case 69: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 268 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3169 "parser/parser.c"
    break;

  case 70: /* simple_expr: arith_expr  */
#line 274 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3175 "parser/parser.c"
    break;

  case 71: /* simple_expr: func_cte_expr  */
#line 275 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3181 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: EMPTY  */
#line 278 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3190 "parser/parser.c"
    break;

  case 73: /* func_cte_expr: STRING  */
#line 282 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3199 "parser/parser.c"
    break;

  case 74: /* func_cte_expr: CHAR  */
#line 286 "parser/c7.y"
                          { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 3205 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: func_expr  */
#line 287 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3211 "parser/parser.c"
    break;

  case 76: /* func_expr: func_call  */
#line 290 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3217 "parser/parser.c"
    break;

  case 77: /* func_expr: set_func_call  */
#line 291 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3223 "parser/parser.c"
    break;

  case 78: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 292 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3229 "parser/parser.c"
    break;

  case 79: /* arith_expr: arith_expr ADD term  */
#line 295 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3237 "parser/parser.c"
    break;

  case 80: /* arith_expr: arith_expr SUB term  */
#line 298 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3245 "parser/parser.c"
    break;

  case 81: /* arith_expr: term  */
#line 301 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3251 "parser/parser.c"
    break;

  case 82: /* term: term MULT factor  */
#line 304 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3259 "parser/parser.c"
    break;

  case 83: /* term: term DIV factor  */
#line 307 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3267 "parser/parser.c"
    break;

  case 84: /* term: factor  */
#line 310 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3273 "parser/parser.c"
    break;

  case 85: /* term: SUB factor  */
#line 311 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
        }
#line 3281 "parser/parser.c"
    break;

  case 86: /* factor: INTEGER  */
#line 316 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3287 "parser/parser.c"
    break;

  case 87: /* factor: FLOAT  */
#line 317 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3293 "parser/parser.c"
    break;

  case 88: /* factor: ID  */
#line 318 "parser/c7.y"
                { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 3299 "parser/parser.c"
    break;

  case 89: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 319 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3305 "parser/parser.c"
    break;


#line 3309 "parser/parser.c"

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

#line 322 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
