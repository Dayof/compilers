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
#define YYLAST   4073

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  592

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
       0,    49,    49,    52,    53,    56,    57,    60,    65,    70,
      73,    76,    79,    82,    83,    86,    87,    90,    91,    94,
      97,   100,   101,   102,   103,   104,   107,   110,   113,   116,
     121,   124,   127,   130,   131,   134,   135,   138,   139,   142,
     143,   144,   147,   150,   153,   156,   159,   160,   163,   166,
     169,   170,   173,   174,   175,   176,   179,   180,   181,   182,
     183,   186,   191,   196,   199,   202,   205,   210,   211,   214,
     215,   216,   217,   220,   221,   222,   225,   228,   231,   234,
     237,   240,   243,   244,   245,   246
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

#define YYPACT_NINF (-243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,   -25,    38,    15,    23,    68,   130,   357,  -243,   135,
       4,   227,    22,    71,    81,   110,   145,   830,   260,   103,
     281,   187,   188,   202,   176,  2534,   256,   259,   270,   271,
     285,   328,   337,   129,  1851,  1878,  1905,  1932,   231,   258,
     199,   273,  2558,  2558,   344,  2558,   354,   366,   390,  1006,
     828,  1282,   394,   398,   409,   413,   428,   804,  1907,  1934,
    2568,   509,   351,  2568,  2568,  2568,   590,    29,  2534,   284,
    1959,  1986,  2013,   432,   467,   490,   513,   572,  2040,    39,
      39,    39,    39,   514,   497,   691,   489,  3846,  1225,  2743,
     930,    54,   134,   139,   197,   365,   459,  3864,  3880,  3812,
     533,   535,   539,   555,   126,   279,   282,   559,   563,   575,
     584,   598,  1961,    55,  1988,  2015,  2042,  2069,  2092,   462,
    2558,   551,   389,  2592,   957,  1085,  2596,  1225,  1225,   527,
    2673,  2691,    59,    77,    83,    87,   115,   140,   617,   646,
     659,   719,   726,   720,   637,  2067,  2094,  2121,  2148,  2175,
    2202,  2229,   662,  2592,   340,   462,   290,   380,   612,   626,
    3898,  3830,   768,   309,   417,  2256,   462,   462,  2283,  2310,
    2558,   724,   732,   739,   753,   754,   769,   775,   856,  1343,
    1420,   767,   781,   782,   786,   705,  1544,  1902,  2337,  2558,
     757,   784,   794,   814,   826,   827,   837,   638,   633,   696,
     819,   820,   839,   851,    97,   942,   994,  2558,   849,   871,
     872,   884,  3632,  3650,  3914,  3932,  3668,  3686,  2558,  1200,
     885,   889,   903,   909,   590,  3002,  2815,  3019,     8,    37,
     127,  3444,  3461,  3478,  3495,  3206,  3036,  3053,    55,    55,
    2778,    29,  1351,   439,   140,   140,   590,    55,  1929,  2364,
    2558,   447,   449,   468,   920,   921,   924,   925,   755,  1267,
    1031,   479,   549,   597,   616,   797,  1302,  1376,  2558,   868,
    3240,   926,   931,   933,   934,  2663,  2832,  2760,  2849,   350,
      -2,   193,   203,    19,  3257,  3274,  3291,  3308,  3172,  2866,
    2883,    55,  3704,  2391,   935,   954,   959,   906,  2534,   963,
     964,   968,   234,   799,   870,  1033,  1166,   967,   973,  2621,
     975,   793,   945,  2568,  2568,  2568,    29,    55,    55,   984,
     864,   950,  2568,  2568,  2568,    29,   144,   144,   144,   144,
     990,   904,   965,  2568,  2568,  2568,   140,   140,  1014,   937,
     980,  2568,  2568,  2568,   219,    29,   590,  2701,   154,   154,
     154,   154,   154,  1956,  1983,   370,  1415,  3722,  3740,   280,
    2418,  2445,  1022,   986,  1004,  2568,  2568,  2568,    29,   182,
     182,   182,   182,  1029,  1070,  1032,  1012,  2568,  2568,  2568,
    2795,   215,    29,  2639,  2663,  2663,  2719,   265,   265,   265,
     265,   265,  1301,  2472,  1016,  2558,  2558,   993,  1074,  2568,
     509,   590,  2534,  1386,  1478,   376,  1076,  2010,  1081,  1083,
    1087,  1092,   385,  2037,  2064,  1072,  1000,  1093,  1094,  1096,
    1103,   404,    55,  1023,  1056,  1131,  1152,  1191,  3948,  3758,
    1108,  1112,  1113,  1115,  3776,  3794,  3512,  3070,  1116,  1118,
    1122,  1123,   423,   298,  3529,    55,  3087,  3223,  3104,  3121,
    3138,  3155,  3966,  2499,   627,  1515,  1124,  1125,  1128,  1130,
     451,    55,  1569,  1633,  1822,  1849,  1876,  3325,  2900,  2639,
    1141,  1142,  1144,  1146,   494,  2558,   496,   498,   499,  1148,
    1149,  1154,  1159,  1062,  1454,  1353,   502,   512,   516,   525,
     558,   405,  1505,  1603,   274,   368,  3342,    55,  2917,  3189,
    2934,  2951,  2968,  2985,  1516,  1151,  1160,  1162,  1545,  1577,
    1163,   930,   241,  1158,  1165,  1167,  1171,  1173,  1179,  1174,
    1180,  1185,  1187,  1188,  3982,  4000,  4016,  4034,  3546,  3563,
    3580,  3597,  3614,   682,   690,   721,   733,   762,   570,  3359,
    3376,  3393,  3410,  3427,  1213,  1099,  1145,  2568,  2568,  2568,
      29,   268,   268,   268,   268,  1216,  1221,  1222,   726,  2524,
     726,  1604,   586,  1661,  1214,  1234,  1236,  1248,   622,    55,
    1688,  1715,  1742,  1769,  1796,  1635,  1662,  1689,  1716,   726,
     648,  1743,   661,   671,   673,   677,   702,  1770,   726,   726,
    1797,  1824
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -243,  -243,  -243,  1228,  -243,     0,  -243,  -185,  -118,     3,
    -242,   233,  -121,   -56,   -85,   -96,   -53,   -58,   -26,   -35,
    -228,   -46,  -225,   358,   -16,    48,   292,  1052,   201,  1090,
     899,   532
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    34,    13,   106,   149,   304,
      35,   305,    37,    90,    91,    92,    93,    94,    95,    96,
     131,    97,   137,    83,   200,   201,    84,   202,   203,   204,
     205,   206
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    38,   347,     6,   -39,   243,   348,   361,   228,    52,
     -11,   -39,     1,   104,   -43,    -2,     7,   -11,    18,    38,
     231,   306,    12,    -4,   162,   -47,   181,   181,   279,   181,
     157,   230,   -47,     1,   124,   -14,   384,   165,     8,   156,
     229,    -4,   -14,   -45,   113,   214,   -43,   346,   168,   169,
     232,   393,    52,   129,   130,   386,   355,   -47,   -47,   387,
     247,   125,   122,    14,   -60,    39,   281,   126,    -5,   158,
     105,   280,   214,    53,   214,   -45,   -45,    15,   284,    49,
     114,    51,   -56,    39,    16,   160,    -5,   -10,   -57,   283,
     182,   182,   -58,   182,   -10,   178,   248,   180,   282,   -60,
     -60,   -60,   159,    38,   181,   326,   327,   261,   285,   215,
     214,   214,   214,    17,   233,   214,    53,   -56,   -56,   -56,
     -59,   -67,   150,   -57,   -57,   -57,   307,   -58,   -58,   -58,
      -6,   412,   142,   -47,    67,    -3,   215,   261,   215,    38,
     421,   -37,   303,    68,    40,   291,   -39,   -37,    -6,   422,
      38,    38,   -39,    -3,   181,   -59,   -59,   -59,   150,   445,
     442,   129,   130,    19,   246,   -47,   -47,    39,   182,   150,
     150,   262,   286,   181,   215,   215,   215,   127,   231,   215,
     212,   292,   213,   460,   197,   423,   199,   461,   359,   230,
     308,   181,    41,    42,   225,   446,   227,   474,   344,   -43,
     231,   262,   181,    39,   -43,    -9,   -43,    43,   232,   -45,
     -43,   230,    -9,   405,    39,    39,   -45,    44,   182,   348,
     229,   -46,   258,   462,   260,   -46,    56,    -8,   -46,   284,
     232,   -43,   385,    38,   181,   -43,   128,   182,    71,    67,
     283,   -45,   -45,   184,   184,    -8,   184,   560,   402,   381,
      36,   281,   181,   -46,   -46,   182,   280,   -46,   -46,   285,
      -7,    60,    98,   284,    61,    72,   182,   234,    70,    56,
     497,   387,   233,   569,   283,    62,    63,    38,    -7,   246,
     -42,   -18,    52,   282,   -17,   -13,   -42,   -42,   143,    98,
      64,    98,   -13,   285,   233,   144,   166,    39,   182,   -18,
     231,   444,   -17,   309,   -44,   276,   498,   278,   483,   570,
     485,   230,   -42,   385,    73,   -12,   182,    54,   -42,   346,
     443,   184,   -12,   286,   264,   287,   494,    98,    98,    98,
     232,   232,    98,    65,    74,    75,   -44,   -44,   284,   284,
     496,    39,    66,   228,   511,    38,    53,   -41,   512,   283,
     283,   188,   151,   -41,   264,   231,   -37,   286,   282,   495,
     107,   -71,    10,   -37,    11,   568,   230,   486,   285,   285,
     285,   184,   -45,   -69,   -44,   229,   452,    38,   -45,   181,
     181,   -44,   -38,   144,   214,   232,    52,   -38,   151,   -38,
     184,   518,   100,   -38,   233,   233,   -46,   -70,   144,   151,
     151,   -73,   -46,   -45,   -45,   -74,   -44,   -44,   184,    39,
     523,   -67,   152,   551,   552,   154,    78,   144,   -67,   184,
     -68,   101,   102,   103,   -40,   234,   243,   -46,   -46,   532,
     -40,   487,   286,   286,   286,   -72,   144,   306,   108,   306,
     578,    39,   581,   182,   182,   164,   356,   234,   215,   233,
      53,   184,   126,   486,   -71,   559,   -69,   537,   306,   181,
     -71,   587,   -69,   279,   144,   249,   -47,   306,   306,   184,
     590,   591,   -47,   109,   580,   -70,   287,    21,    22,    23,
      24,   -70,    36,    25,    26,    27,   -73,    28,    29,    30,
      31,    32,   -73,   129,   130,   214,   110,   -47,   -47,    56,
     543,   281,   -71,    33,   -69,   -70,   280,   144,   -73,   -71,
     287,   -69,   -70,   284,   207,   -73,    85,   487,   -74,   111,
     119,   120,   -41,   182,   283,   -74,    36,    86,    87,   -41,
     121,   -68,   -50,   282,   208,   209,   210,   211,   -68,   138,
      88,   139,   307,   285,   307,   140,   -50,   234,   234,   212,
      89,   213,   -50,   -50,   -50,   -50,   -74,    59,   303,   215,
     303,   141,   -74,   307,   -72,   153,   145,   -50,   -50,   -50,
     146,   -72,   307,   307,   187,   187,   -40,   187,   112,   303,
     238,   239,   147,   -40,   490,   287,   287,   287,   303,   303,
     398,   148,   -75,   217,    70,   218,   184,   184,   237,   -75,
      59,    98,   234,    56,   -68,   -75,   308,   286,   308,   219,
     -68,    59,    59,   117,   118,   220,   221,   222,   223,   -42,
     217,   224,   217,   -72,   -63,   -42,    70,   308,   586,   -72,
     225,   226,   227,   -44,   -75,   144,   308,   308,   325,   -44,
     -75,   -84,   -84,   -84,   -84,   187,   -82,   -82,   -82,   -82,
     -42,   128,   187,   -64,   588,   267,   290,   -84,   217,   217,
     217,   309,   -82,   217,   -44,   -44,   -65,   -63,   -61,   217,
     490,   409,   410,   411,   -63,   488,   184,   -64,   163,   -65,
     418,   419,   420,   -66,   -64,   267,   -65,   506,   507,   -63,
     -66,   431,   432,   433,   513,   -63,   -35,   -64,   -35,   439,
     440,   441,   187,   -64,   -83,   -83,   -83,   -83,   -62,   -35,
     -35,   -67,    98,   238,   239,   -62,   -35,   -35,   -35,   -35,
     -83,   187,   -35,   457,   458,   459,   -66,   -62,   -65,   293,
     -71,   -35,   -35,   -35,   -65,   471,   472,   473,   -69,   187,
     -66,   294,   295,   296,   297,   -70,   -66,   298,   299,   300,
     187,    28,    29,    30,    31,   301,   237,   510,   312,   313,
     287,   538,   -82,   -82,   -82,   -82,   -82,   302,   -82,   -62,
     187,   187,   -30,   -73,   314,   -62,   217,   217,   237,   187,
     315,   -71,   187,   -30,   -30,   -30,   -30,   -74,   -68,   -30,
     -30,   -30,   -72,   -30,   -30,   -30,   -30,   -30,   167,   407,
     187,   238,   239,   -21,   -67,   369,   370,   290,   -69,   -30,
     -67,   -67,    79,    80,   -21,   -21,   -21,   -21,   -70,   321,
     -21,   -21,   -21,   187,   -21,   -21,   -21,   -21,   -21,   -21,
      59,   322,   323,    67,    20,   -84,   -84,   -84,   -84,   -84,
     -21,   290,   324,   -73,   -74,    21,    22,    23,    24,   413,
     414,    25,    26,    27,   332,    28,    29,    30,    31,    32,
     426,   427,   -82,   -68,   -82,   -82,   -82,   -82,   434,   435,
     416,    33,   238,   239,   -15,   -72,   333,   334,   237,   237,
     237,   237,   237,   450,   451,   -15,   -15,   -15,   -15,   335,
     340,   -15,   -15,   -15,   341,   -15,   -15,   -15,   -15,   -15,
     -15,   267,   267,   465,   466,   565,   566,   567,   342,   375,
     429,   -15,   238,   239,   343,   493,   290,   290,   290,   290,
     290,   290,   502,   503,    58,   364,   365,   187,   187,   366,
     367,   376,   217,   237,    59,   207,   377,   242,   378,   379,
     394,   186,   186,   437,   186,   238,   239,   397,    86,    87,
     -78,   -78,   328,   329,   187,   208,   209,   210,   211,   395,
     216,    88,   268,   155,   396,   236,   -78,    58,   399,   400,
     212,    89,   213,   401,   403,   269,   270,   187,   115,   116,
     404,   406,   271,   272,   273,   274,   408,   216,   275,   216,
     415,   417,   455,   187,   238,   239,   428,   276,   277,   278,
     508,   493,   -81,   -81,   -81,   -81,   430,   187,   -85,   -85,
     -85,   -85,   186,   -82,   -82,   -82,   -82,   -82,   -81,   186,
     436,   438,   266,   289,   -85,   216,   216,   216,   454,   187,
     216,   -84,   -84,   -84,   -84,   467,   216,   -16,   -83,   -83,
     -83,   -83,   -83,   217,   -83,   456,   469,   -84,   -16,   -16,
     -16,   -16,   266,   470,   -16,   -16,   -16,   505,   -16,   -16,
     -16,   -16,   -16,   -16,   -76,   -76,   328,   329,   -82,   186,
     -82,   -82,   -82,   -82,   -16,   -82,   468,    55,   238,   239,
     -76,   509,   -75,   493,   493,   573,   574,   514,   186,   515,
     -36,   290,   -36,   516,   183,   183,   -75,    76,   517,   519,
     520,   187,   521,   -36,   -36,   563,   186,   238,   239,   522,
     -36,   -36,   -36,   -36,   524,    57,   -36,   186,   525,   526,
      55,   527,   528,   236,   529,   -36,   -36,   -36,   530,   531,
     533,   534,   185,   185,   535,    77,   536,   353,   354,   -77,
     -77,   328,   329,   357,   358,   236,   186,   539,   540,   186,
     541,    99,   542,   546,   547,   -77,   235,   555,    57,   548,
     -79,   -79,   -79,   -79,   549,   561,   556,   186,   557,   558,
     -24,   -63,   183,   -64,   289,   263,   -79,   -65,    99,   -66,
      99,   -24,   -24,   -24,   -24,   -62,   564,   -24,   -24,   -24,
     186,   -24,   -24,   -24,   -24,   -24,   -24,    58,   -63,   -80,
     -80,   -80,   -80,    77,   -64,   263,   -54,   -24,   289,   -65,
     185,   -66,   -62,   265,   288,   -80,    99,    99,    99,   562,
     582,    99,   310,   575,   -54,   424,   425,   161,   576,   577,
     207,     9,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     583,   319,   584,   265,    87,   236,   236,   236,   448,   449,
     208,   209,   210,   211,   585,     0,    88,     0,     0,   330,
     311,     0,     0,     0,     0,   212,   240,   213,   463,   464,
     338,     0,   368,     0,   -84,   -84,   -84,   -84,   -84,   320,
     -84,     0,   492,   289,   289,   289,   289,   500,   501,   -83,
     -83,   -83,   -83,   -83,   186,   186,     0,   331,     0,   216,
     236,    58,   362,     0,     0,   -18,     0,     0,   339,   -78,
     -78,   -78,   371,   372,   235,   -78,   -18,   -18,   -18,   -18,
     373,   186,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,   235,   311,     0,     0,
     363,     0,   -18,     0,   186,     0,     0,     0,   316,   -84,
      55,   -84,   -84,   -84,   -84,     0,   -35,   -35,   374,   -83,
     186,   -83,   -83,   -83,   -83,   288,   -83,     0,   492,   -35,
     -35,     0,     0,     0,   186,     0,   -35,   -35,   -35,   -35,
       0,   331,   -35,   -81,   -81,   -81,   -81,   -81,    57,   -81,
     -22,   -35,   -35,   -35,     0,     0,   186,     0,     0,   288,
       0,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
     216,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,
     -36,   -36,     0,     0,     0,     0,   -83,   -22,   -83,   -83,
     -83,   -83,     0,   -36,   -36,   489,   235,   235,   447,     0,
     -36,   -36,   -36,   -36,     0,     0,   -36,   183,   183,     0,
     571,   572,     0,     0,    55,   -36,   -36,   -36,   289,   550,
     -84,     0,   -84,   -84,   -84,   -84,     0,   -84,   186,     0,
       0,     0,     0,   491,   288,   288,   288,   499,     0,     0,
       0,     0,   -23,     0,     0,   185,   185,     0,     0,     0,
      99,   235,    57,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -78,   320,   -78,   -78,   553,   554,     0,   -78,   -23,
     -17,   489,   -85,   -85,   -85,   -85,   -85,   544,   -85,     0,
       0,   -17,   -17,   -17,   -17,   339,     0,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,    -8,
     -78,   363,   -78,   -78,   317,   318,     0,   -17,     0,   491,
      -8,    -8,    -8,    -8,     0,   545,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,    -8,    -8,   -84,   -84,   -84,   -84,
     -84,   -29,   -84,     0,     0,     0,    -8,   374,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,    99,   -29,   -29,   -29,   -29,   -29,   -29,   -28,   -81,
       0,   -81,   -81,   -81,   -81,     0,   -81,     0,   -29,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,   -25,
     -76,   -76,   -76,   371,   372,   -28,   -76,     0,     0,   288,
     -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,   545,
     -25,   -25,   -25,   -25,   -25,   -25,   -26,   -85,     0,   -85,
     -85,   -85,   -85,     0,   -85,     0,   -25,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -27,   -84,     0,   -84,   -84,   -84,   -84,
       0,   -84,     0,   -26,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -32,   -76,     0,   -76,   -76,   553,   554,     0,   -76,     0,
     -27,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -30,   -77,     0,
     -77,   -77,   553,   554,     0,   -77,     0,   -32,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   589,   -33,   -79,     0,   -79,   -79,   -79,
     -79,     0,   -79,     0,   -30,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -34,   -80,     0,   -80,   -80,   -80,   -80,     0,   -80,
       0,   -33,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -31,   -77,
     -77,   -77,   371,   372,     0,   -77,     0,     0,   -34,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -21,   -79,   -79,   -79,   -79,
     -79,     0,   -79,     0,     0,   -31,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,     0,    69,   -80,   -80,   -80,   -80,   -80,     0,   -80,
       0,     0,   -21,    21,    22,    23,    24,     0,     0,    25,
      26,    27,     0,    28,    29,    30,    31,    32,   -81,   -20,
     -81,   -81,   -81,   -81,   -78,   -78,   -78,    81,    82,    33,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -84,   -24,   -84,   -84,   -84,
     -84,   -81,   -81,   -81,   -81,   -81,   -20,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -76,   -19,   -76,   -76,   317,   318,   -85,   -85,
     -85,   -85,   -85,   -24,   -19,   -19,   -19,   -19,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -77,
     -22,   -77,   -77,   317,   318,   -84,   -84,   -84,   -84,   -84,
     -19,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -85,   -23,   -85,   -85,
     -85,   -85,   -76,   -76,   -76,    81,    82,   -22,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -79,   -29,   -79,   -79,   -79,   -79,   -77,
     -77,   -77,    81,    82,   -23,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -80,   -28,   -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,
     -79,   -29,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -25,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,   -28,   -25,
     -25,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,     0,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -26,   -26,   -26,   -26,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -15,   -15,   -15,
     -15,     0,     0,   -15,   -15,   -15,     0,   -15,   -15,   -15,
     -15,   -15,     0,   -16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -15,   -16,   -16,   -16,   -16,     0,     0,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,     0,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -16,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,    -8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,    -8,    -8,    -8,    -8,     0,     0,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -8,    21,
      22,    23,    24,     0,     0,    25,    26,    27,     0,    28,
      29,    30,    31,    32,     0,   392,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    21,    22,    23,    24,
       0,     0,    25,    26,    27,     0,    28,    29,    30,    31,
      32,     0,   -18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,   453,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -18,
      21,    22,    23,    24,     0,     0,    25,    26,    27,     0,
      28,    29,    30,    31,    32,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    21,    22,    23,
      24,     0,     0,    25,    26,    27,     0,    28,    29,    30,
      31,    32,     0,   -17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,   -17,   -17,   -17,   -17,     0,     0,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   268,
     579,     0,     0,     0,     0,     0,     0,     0,     0,    45,
     -17,     0,   269,   270,     0,     0,    46,     0,     0,   271,
     272,   273,   274,    47,    48,   275,     0,     0,     0,    28,
      29,    30,    31,   170,   276,   277,   278,     0,     0,     0,
     171,     0,     0,   189,    49,    50,    51,   172,   173,     0,
     190,     0,     0,   174,   175,   176,   177,   191,   192,     0,
       0,     0,     0,   193,   194,   195,   196,   250,   178,   179,
     180,   207,     0,     0,   251,     0,     0,     0,   197,   198,
     199,   252,   253,     0,    86,    87,     0,   254,   255,   256,
     257,   208,   209,   210,   211,     0,   268,    88,     0,     0,
       0,     0,   258,   259,   260,     0,   212,    89,   213,   269,
     270,     0,     0,     0,   475,     0,   271,   272,   273,   274,
       0,   476,   275,     0,     0,     0,     0,     0,   477,   478,
       0,   276,   277,   278,   479,   480,   481,   482,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -51,   483,
     484,   485,   270,     0,     0,     0,     0,     0,   271,   272,
     273,   274,   -51,     0,   275,     0,   207,     0,   -51,   -51,
     -51,   -51,     0,   276,   380,   278,   218,     0,     0,     0,
      87,     0,     0,   -51,   -51,   -51,   208,   209,   210,   211,
     219,     0,     0,     0,   268,     0,   220,   221,   222,   223,
       0,   212,   240,   213,     0,     0,     0,     0,   270,     0,
       0,   225,   226,   227,   271,   272,   273,   274,   241,     0,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   123,     0,   276,
     380,   278,     0,     0,     0,   382,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   383,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   241,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     382,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     345,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,   -82,   -84,
     -82,   -82,   -82,   -82,     0,   -82,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -83,   -82,   -83,   -83,   -83,
     -83,     0,   -83,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -78,   -83,   -78,   -78,   390,   391,     0,   -78,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,
     -78,   -81,   -81,   -81,   -81,     0,   -81,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -85,   -81,   -85,   -85,
     -85,   -85,     0,   -85,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -84,   -85,   -84,   -84,   -84,   -84,     0,
     -84,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -76,   -84,   -76,   -76,   390,   391,     0,   -76,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -77,   -76,   -77,
     -77,   390,   391,     0,   -77,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -79,   -77,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -80,   -79,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -82,   -80,
     -82,   -82,   -82,   -82,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -83,   -82,   -83,   -83,   -83,
     -83,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -78,   -83,   -78,   -78,   351,   352,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,
     -78,   -81,   -81,   -81,   -81,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -85,   -81,   -85,   -85,
     -85,   -85,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -84,   -85,   -84,   -84,   -84,   -84,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -76,   -84,   -76,   -76,   351,   352,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -77,   -76,   -77,
     -77,   351,   352,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -79,   -77,   -79,   -79,   -79,   -79,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -80,   -79,   -80,   -80,   -80,   -80,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -53,   -80,
     388,   389,     0,     0,     0,   -53,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -52,   -53,   388,   389,     0,
       0,     0,   -52,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -52,   349,   350,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -53,   349,   350,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -54,   -52,     0,     0,
       0,     0,     0,   -54,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -49,   -54,     0,     0,     0,     0,     0,
     -49,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -73,   132,     0,     0,     0,     0,     0,   -73,     0,   133,
     134,   -49,   -49,   135,   136,   -49,   -49,   -74,   -73,     0,
       0,     0,     0,     0,   -74,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -55,   -74,     0,     0,     0,     0,
       0,   -55,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,   -55,     0,     0,     0,     0,     0,   -75,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -48,   -75,
       0,     0,     0,     0,     0,   -48,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -63,   132,     0,     0,     0,
       0,     0,   -63,     0,   133,   134,   -48,   -48,   135,   136,
     -48,   -48,   -64,   -63,     0,     0,     0,     0,     0,   -64,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -65,
     -64,     0,     0,     0,     0,     0,   -65,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -66,   -65,     0,     0,
       0,     0,     0,   -66,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -62,   -66,     0,     0,     0,     0,     0,
     -62,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -49,   -62,     0,     0,     0,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -73,   132,     0,
       0,     0,     0,     0,     0,     0,   133,   134,   -49,   -49,
     135,   136,   -49,   -49,   -74,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -55,   -74,     0,     0,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,   -55,
       0,     0,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -48,   -75,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -63,   132,     0,     0,     0,     0,     0,     0,
       0,   133,   134,   -48,   -48,   135,   136,   -48,   -48,   -64,
     -63,     0,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -65,   -64,     0,     0,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -66,   -65,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -62,   -66,     0,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -62,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -82,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -83,   -78,   -78,   -78,   336,   337,
       0,   -78,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -78,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
     -81,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -84,   -76,
     -76,   -76,   336,   337,     0,   -76,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -76,   -77,   -77,   -77,
     336,   337,     0,   -77,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,   -77,   -85,   -85,   -85,   -85,   -85,
       0,   -85,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -85,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -79,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -80,   -53,
     244,   245,     0,     0,     0,   -53,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,   -53,   -52,   244,   245,
       0,     0,     0,   -52,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,   -54,   -52,     0,     0,     0,     0,   -54,
       0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -54,   -49,     0,     0,     0,     0,     0,   -49,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,     0,   -55,   132,     0,
       0,     0,     0,   -55,     0,     0,   133,   134,   -49,   -49,
     135,   136,   -49,   -49,   -55,   -48,     0,     0,     0,     0,
       0,   -48,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -73,   132,     0,     0,     0,     0,   -73,     0,     0,
     133,   134,   -48,   -48,   135,   136,   -48,   -48,   -73,   -74,
       0,     0,     0,     0,     0,   -74,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -75,   -74,     0,     0,     0,
       0,   -75,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,   -62,     0,     0,     0,     0,     0,   -62,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -63,
     -62,     0,     0,     0,     0,   -63,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -63,   -64,     0,     0,
       0,     0,     0,   -64,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -65,   -64,     0,     0,     0,     0,   -65,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,   -66,     0,     0,     0,     0,     0,   -66,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -66,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66
};

static const yytype_int16 yycheck[] =
{
       0,    17,   230,     3,     6,    90,   231,   249,    66,    25,
       6,    13,    18,    66,     6,     0,    41,    13,    15,    35,
      66,   142,    18,     0,   142,     6,    42,    43,   124,    45,
     126,    66,    13,    18,    90,     6,    38,   155,     0,   124,
      66,    18,    13,     6,     5,    61,    38,    39,   166,   167,
      66,   293,    68,    34,    35,   283,   241,    38,    39,   284,
       5,     7,    88,    41,     5,    17,   124,    13,     0,   127,
      41,   124,    88,    25,    90,    38,    39,     6,   124,    40,
      41,    42,     5,    35,    13,   131,    18,     6,     5,   124,
      42,    43,     5,    45,    13,    40,    41,    42,   124,    40,
      41,    42,   128,   119,   120,     8,     9,   123,   124,    61,
     126,   127,   128,     3,    66,   131,    68,    40,    41,    42,
       5,    24,   119,    40,    41,    42,   142,    40,    41,    42,
       0,   316,     6,     6,     5,     0,    88,   153,    90,   155,
     325,     7,   142,    14,    41,     5,     7,    13,    18,     5,
     166,   167,    13,    18,   170,    40,    41,    42,   155,     5,
     345,    34,    35,    18,    38,    38,    39,   119,   120,   166,
     167,   123,   124,   189,   126,   127,   128,    38,   224,   131,
      40,    41,    42,   368,    40,    41,    42,     5,   246,   224,
     142,   207,     5,     5,    40,    41,    42,   382,   224,     6,
     246,   153,   218,   155,     7,     6,    13,     5,   224,     6,
      13,   246,    13,   309,   166,   167,    13,    41,   170,   444,
     246,     6,    40,    41,    42,     6,    25,     0,    13,   275,
     246,    38,    39,   249,   250,    38,    39,   189,     7,     5,
     275,    38,    39,    42,    43,    18,    45,     6,    14,   275,
      17,   309,   268,    38,    39,   207,   309,    38,    39,   275,
       0,     5,    61,   309,     5,     7,   218,    66,    35,    68,
       5,   496,   224,     5,   309,     5,     5,   293,    18,    38,
       6,     0,   298,   309,     0,     6,     6,    13,     6,    88,
       5,    90,    13,   309,   246,    13,     6,   249,   250,    18,
     346,   347,    18,    13,     6,    40,    41,    42,    40,    41,
      42,   346,    38,    39,    41,     6,   268,    25,    38,    39,
     346,   120,    13,   275,   123,   124,   384,   126,   127,   128,
     346,   347,   131,     5,    42,    43,    38,    39,   384,   385,
     386,   293,     5,   401,   400,   361,   298,     7,   401,   384,
     385,     7,   119,    13,   153,   401,     6,   309,   384,   385,
      68,     7,     5,    13,     7,   550,   401,   383,   384,   385,
     386,   170,     7,     7,     6,   401,     6,   393,    13,   395,
     396,    13,     6,    13,   400,   401,   402,     7,   155,    13,
     189,     6,    41,    13,   346,   347,     7,     7,    13,   166,
     167,     7,    13,    38,    39,     7,    38,    39,   207,   361,
       6,     6,   120,     8,     9,   123,     7,    13,    13,   218,
       7,    63,    64,    65,     7,   224,   511,    38,    39,     6,
      13,   383,   384,   385,   386,     7,    13,   558,     6,   560,
     558,   393,   560,   395,   396,   153,     7,   246,   400,   401,
     402,   250,    13,   469,     7,   511,     7,     6,   579,   475,
      13,   579,    13,   559,    13,     3,     7,   588,   589,   268,
     588,   589,    13,     6,   559,     7,   275,    15,    16,    17,
      18,    13,   249,    21,    22,    23,     7,    25,    26,    27,
      28,    29,    13,    34,    35,   511,     6,    38,    39,   298,
       6,   559,     6,    41,     6,     6,   559,    13,     6,    13,
     309,    13,    13,   559,     5,    13,     7,   469,     6,     6,
       6,    24,     6,   475,   559,    13,   293,    18,    19,    13,
      41,     6,     5,   559,    25,    26,    27,    28,    13,     6,
      31,     6,   558,   559,   560,     6,    19,   346,   347,    40,
      41,    42,    25,    26,    27,    28,     7,    25,   558,   511,
     560,     6,    13,   579,     6,    14,     7,    40,    41,    42,
       7,    13,   588,   589,    42,    43,     6,    45,     6,   579,
       8,     9,     7,    13,   383,   384,   385,   386,   588,   589,
     298,     7,     6,    61,   361,     5,   395,   396,    66,    13,
      68,   400,   401,   402,     7,     7,   558,   559,   560,    19,
      13,    79,    80,    81,    82,    25,    26,    27,    28,     7,
      88,    31,    90,     7,     7,    13,   393,   579,     6,    13,
      40,    41,    42,     7,     7,    13,   588,   589,     5,    13,
      13,     8,     9,    10,    11,   113,     8,     9,    10,    11,
      38,    39,   120,     7,     6,   123,   124,    24,   126,   127,
     128,    13,    24,   131,    38,    39,     7,     6,     6,   137,
     469,   313,   314,   315,    13,   383,   475,     6,    41,     6,
     322,   323,   324,     6,    13,   153,    13,   395,   396,     7,
      13,   333,   334,   335,   402,    13,     5,     7,     7,   341,
     342,   343,   170,    13,     8,     9,    10,    11,     6,    18,
      19,     6,   511,     8,     9,    13,    25,    26,    27,    28,
      24,   189,    31,   365,   366,   367,     7,     7,     7,     3,
       6,    40,    41,    42,    13,   377,   378,   379,     6,   207,
       7,    15,    16,    17,    18,     6,    13,    21,    22,    23,
     218,    25,    26,    27,    28,    29,   224,   399,     5,     5,
     559,   469,     7,     8,     9,    10,    11,    41,    13,     7,
     238,   239,     4,     6,     5,    13,   244,   245,   246,   247,
       5,    24,   250,    15,    16,    17,    18,     6,     6,    21,
      22,    23,     6,    25,    26,    27,    28,    29,    30,     6,
     268,     8,     9,     4,     7,     8,     9,   275,    24,    41,
      13,     7,     8,     9,    15,    16,    17,    18,    24,     5,
      21,    22,    23,   291,    25,    26,    27,    28,    29,    30,
     298,     5,     5,     5,     4,     7,     8,     9,    10,    11,
      41,   309,     5,    24,    24,    15,    16,    17,    18,   317,
     318,    21,    22,    23,     5,    25,    26,    27,    28,    29,
     328,   329,     6,    24,     8,     9,    10,    11,   336,   337,
       6,    41,     8,     9,     4,    24,     5,     5,   346,   347,
     348,   349,   350,   351,   352,    15,    16,    17,    18,     5,
       5,    21,    22,    23,     5,    25,    26,    27,    28,    29,
      30,   369,   370,   371,   372,   547,   548,   549,     5,    41,
       6,    41,     8,     9,     5,   383,   384,   385,   386,   387,
     388,   389,   390,   391,    25,     5,     5,   395,   396,     5,
       5,     5,   400,   401,   402,     5,     5,     7,     5,     5,
       5,    42,    43,     6,    45,     8,     9,    41,    18,    19,
       8,     9,    10,    11,   422,    25,    26,    27,    28,     5,
      61,    31,     5,     6,     5,    66,    24,    68,     5,     5,
      40,    41,    42,     5,     7,    18,    19,   445,    79,    80,
       7,     6,    25,    26,    27,    28,    41,    88,    31,    90,
       6,    41,     6,   461,     8,     9,     6,    40,    41,    42,
       7,   469,     8,     9,    10,    11,    41,   475,     8,     9,
      10,    11,   113,     7,     8,     9,    10,    11,    24,   120,
       6,    41,   123,   124,    24,   126,   127,   128,     6,   497,
     131,     8,     9,    10,    11,     6,   137,     4,     7,     8,
       9,    10,    11,   511,    13,    41,    14,    24,    15,    16,
      17,    18,   153,    41,    21,    22,    23,    41,    25,    26,
      27,    28,    29,    30,     8,     9,    10,    11,     6,   170,
       8,     9,    10,    11,    41,    13,     6,    25,     8,     9,
      24,     7,     6,   551,   552,   553,   554,     6,   189,     6,
       5,   559,     7,     6,    42,    43,    24,    45,     6,     6,
       6,   569,     6,    18,    19,     6,   207,     8,     9,     6,
      25,    26,    27,    28,     6,    25,    31,   218,     6,     6,
      68,     6,     6,   224,     6,    40,    41,    42,     6,     6,
       6,     6,    42,    43,     6,    45,     6,   238,   239,     8,
       9,    10,    11,   244,   245,   246,   247,     6,     6,   250,
       6,    61,     6,     5,     5,    24,    66,     6,    68,     5,
       8,     9,    10,    11,     5,     7,     6,   268,     6,     6,
       4,     6,   120,     6,   275,   123,    24,     6,    88,     6,
      90,    15,    16,    17,    18,     6,    41,    21,    22,    23,
     291,    25,    26,    27,    28,    29,    30,   298,    24,     8,
       9,    10,    11,   113,    24,   153,     6,    41,   309,    24,
     120,    24,    24,   123,   124,    24,   126,   127,   128,     6,
       6,   131,   170,     7,    24,   326,   327,   137,     7,     7,
       5,     3,    32,    33,    34,    35,    36,    37,    38,    39,
       6,   189,     6,   153,    19,   346,   347,   348,   349,   350,
      25,    26,    27,    28,     6,    -1,    31,    -1,    -1,   207,
     170,    -1,    -1,    -1,    -1,    40,    41,    42,   369,   370,
     218,    -1,     5,    -1,     7,     8,     9,    10,    11,   189,
      13,    -1,   383,   384,   385,   386,   387,   388,   389,     7,
       8,     9,    10,    11,   395,   396,    -1,   207,    -1,   400,
     401,   402,   250,    -1,    -1,     4,    -1,    -1,   218,     7,
       8,     9,    10,    11,   224,    13,    15,    16,    17,    18,
     268,   422,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,   246,   247,    -1,    -1,
     250,    -1,    41,    -1,   445,    -1,    -1,    -1,     5,     6,
     298,     8,     9,    10,    11,    -1,     5,     6,   268,     6,
     461,     8,     9,    10,    11,   275,    13,    -1,   469,    18,
      19,    -1,    -1,    -1,   475,    -1,    25,    26,    27,    28,
      -1,   291,    31,     7,     8,     9,    10,    11,   298,    13,
       4,    40,    41,    42,    -1,    -1,   497,    -1,    -1,   309,
      -1,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
     511,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    -1,     6,    41,     8,     9,
      10,    11,    -1,    18,    19,   383,   346,   347,   348,    -1,
      25,    26,    27,    28,    -1,    -1,    31,   395,   396,    -1,
     551,   552,    -1,    -1,   402,    40,    41,    42,   559,     5,
       6,    -1,     8,     9,    10,    11,    -1,    13,   569,    -1,
      -1,    -1,    -1,   383,   384,   385,   386,   387,    -1,    -1,
      -1,    -1,     4,    -1,    -1,   395,   396,    -1,    -1,    -1,
     400,   401,   402,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,     6,   422,     8,     9,    10,    11,    -1,    13,    41,
       4,   469,     7,     8,     9,    10,    11,   475,    13,    -1,
      -1,    15,    16,    17,    18,   445,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    -1,    -1,     4,
       6,   461,     8,     9,    10,    11,    -1,    41,    -1,   469,
      15,    16,    17,    18,    -1,   475,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,     7,     8,     9,    10,
      11,     4,    13,    -1,    -1,    -1,    41,   497,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    21,    22,
      23,   511,    25,    26,    27,    28,    29,    30,     4,     6,
      -1,     8,     9,    10,    11,    -1,    13,    -1,    41,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,     4,
       7,     8,     9,    10,    11,    41,    13,    -1,    -1,   559,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,   569,
      25,    26,    27,    28,    29,    30,     4,     6,    -1,     8,
       9,    10,    11,    -1,    13,    -1,    41,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,     4,     6,    -1,     8,     9,    10,    11,
      -1,    13,    -1,    41,    15,    16,    17,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
       4,     6,    -1,     8,     9,    10,    11,    -1,    13,    -1,
      41,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,     4,     6,    -1,
       8,     9,    10,    11,    -1,    13,    -1,    41,    15,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,     4,     6,    -1,     8,     9,    10,
      11,    -1,    13,    -1,    41,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,     4,     6,    -1,     8,     9,    10,    11,    -1,    13,
      -1,    41,    15,    16,    17,    18,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,     4,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    41,    15,
      16,    17,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,     4,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    41,    15,    16,    17,    18,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    -1,     4,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    41,    15,    16,    17,    18,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,     6,     4,
       8,     9,    10,    11,     7,     8,     9,    10,    11,    41,
      15,    16,    17,    18,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,     6,     4,     8,     9,    10,
      11,     7,     8,     9,    10,    11,    41,    15,    16,    17,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,     6,     4,     8,     9,    10,    11,     7,     8,
       9,    10,    11,    41,    15,    16,    17,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,     6,
       4,     8,     9,    10,    11,     7,     8,     9,    10,    11,
      41,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,     6,     4,     8,     9,
      10,    11,     7,     8,     9,    10,    11,    41,    15,    16,
      17,    18,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,     6,     4,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    41,    15,    16,    17,    18,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
       6,     4,     8,     9,    10,    11,     7,     8,     9,    10,
      11,    41,    15,    16,    17,    18,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    -1,     4,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    41,    15,
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
      21,    22,    23,    -1,    25,    26,    27,    28,    29,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      41,    -1,    18,    19,    -1,    -1,    12,    -1,    -1,    25,
      26,    27,    28,    19,    20,    31,    -1,    -1,    -1,    25,
      26,    27,    28,     5,    40,    41,    42,    -1,    -1,    -1,
      12,    -1,    -1,     5,    40,    41,    42,    19,    20,    -1,
      12,    -1,    -1,    25,    26,    27,    28,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,     5,    40,    41,
      42,     5,    -1,    -1,    12,    -1,    -1,    -1,    40,    41,
      42,    19,    20,    -1,    18,    19,    -1,    25,    26,    27,
      28,    25,    26,    27,    28,    -1,     5,    31,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    40,    41,    42,    18,
      19,    -1,    -1,    -1,     5,    -1,    25,    26,    27,    28,
      -1,    12,    31,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    40,    41,    42,    25,    26,    27,    28,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    19,    -1,    31,    -1,     5,    -1,    25,    26,
      27,    28,    -1,    40,    41,    42,     5,    -1,    -1,    -1,
      19,    -1,    -1,    40,    41,    42,    25,    26,    27,    28,
      19,    -1,    -1,    -1,     5,    -1,    25,    26,    27,    28,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    40,    41,    42,    25,    26,    27,    28,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    40,
      41,    42,    -1,    -1,    -1,     5,     6,    24,     8,     9,
      10,    11,    -1,    13,    14,    32,    33,    34,    35,    36,
      37,    38,    39,     5,    24,     7,     8,     9,    10,    11,
      -1,    13,    32,    33,    34,    35,    36,    37,    38,    39,
       5,     6,    24,     8,     9,    10,    11,    -1,    13,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    24,
       5,     6,    -1,     8,     9,    10,    11,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,     6,    24,
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
      -1,    13,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     8,     9,    10,    11,    -1,    13,    -1,
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
      36,    37,    38,    39,     6,    24,     8,     9,    10,    11,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,     6,    24,     8,     9,    10,    11,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
       8,     9,    -1,    -1,    -1,    13,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     6,    24,     8,     9,    -1,
      -1,    -1,    13,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     6,    24,     8,     9,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,     8,     9,    -1,    -1,    -1,    -1,    -1,    32,    33,
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
      38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,     6,
      24,    -1,    -1,    -1,    -1,    -1,    13,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     6,    24,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
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
      34,    35,    36,    37,    38,    39,     6,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     6,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
       6,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    24,     7,
       8,     9,    10,    11,    -1,    13,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    24,     7,     8,     9,
      10,    11,    -1,    13,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    24,     7,     8,     9,    10,    11,
      -1,    13,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    24,     7,     8,     9,    10,    11,    -1,    13,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      24,     7,     8,     9,    10,    11,    -1,    13,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    24,     7,
       8,     9,    10,    11,    -1,    13,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    24,     7,     8,     9,
      10,    11,    -1,    13,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    24,     7,     8,     9,    10,    11,
      -1,    13,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    24,     7,     8,     9,    10,    11,    -1,    13,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      24,     7,     8,     9,    10,    11,    -1,    13,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    24,     7,
       8,     9,    -1,    -1,    -1,    13,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    24,     7,     8,     9,
      -1,    -1,    -1,    13,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,     7,    24,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      24,     7,    -1,    -1,    -1,    -1,    -1,    13,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,     7,    24,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    24,     7,    -1,    -1,    -1,    -1,
      -1,    13,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,     7,    24,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    24,     7,
      -1,    -1,    -1,    -1,    -1,    13,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,     7,    24,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    24,     7,    -1,    -1,    -1,    -1,    -1,    13,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,     7,
      24,    -1,    -1,    -1,    -1,    13,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    24,     7,    -1,    -1,
      -1,    -1,    -1,    13,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,     7,    24,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      24,     7,    -1,    -1,    -1,    -1,    -1,    13,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39
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
      65,    73,    52,    41,    70,    52,     6,    30,    52,    52,
       5,    12,    19,    20,    25,    26,    27,    28,    40,    41,
      42,    68,    69,    71,    72,    73,    74,    75,     7,     5,
      12,    19,    20,    25,    26,    27,    28,    40,    41,    42,
      68,    69,    71,    72,    73,    74,    75,     5,    25,    26,
      27,    28,    40,    42,    68,    69,    74,    75,     5,    19,
      25,    26,    27,    28,    31,    40,    41,    42,    61,    62,
      63,    65,    68,    69,    72,    73,    74,    75,     8,     9,
      41,     5,     7,    58,     8,     9,    38,     5,    41,     3,
       5,    12,    19,    20,    25,    26,    27,    28,    40,    41,
      42,    68,    69,    71,    72,    73,    74,    75,     5,    18,
      19,    25,    26,    27,    28,    31,    40,    41,    42,    59,
      60,    61,    62,    63,    65,    68,    69,    72,    73,    74,
      75,     5,    41,     3,    15,    16,    17,    18,    21,    22,
      23,    29,    41,    49,    53,    55,    56,    68,    69,    13,
      71,    73,     5,     5,     5,     5,     5,    10,    11,    71,
      73,     5,     5,     5,     5,     5,     8,     9,    10,    11,
      71,    73,     5,     5,     5,     5,    10,    11,    71,    73,
       5,     5,     5,     5,    62,     5,    39,    64,    66,     8,
       9,    10,    11,    74,    74,    51,     7,    74,    74,    61,
       4,    54,    71,    73,     5,     5,     5,     5,     5,     8,
       9,    10,    11,    71,    73,    41,     5,     5,     5,     5,
      41,    62,     5,    14,    38,    39,    64,    66,     8,     9,
      10,    11,     4,    54,     5,     5,     5,    41,    70,     5,
       5,     5,    14,     7,     7,    59,     6,     6,    41,    67,
      67,    67,    51,    75,    75,     6,     6,    41,    67,    67,
      67,    51,     5,    41,    74,    74,    75,    75,     6,     6,
      41,    67,    67,    67,    75,    75,     6,     6,    41,    67,
      67,    67,    51,    62,    65,     5,    41,    73,    74,    74,
      75,    75,     6,     4,     6,     6,    41,    67,    67,    67,
      51,     5,    41,    74,    74,    75,    75,     6,     6,    14,
      41,    67,    67,    67,    51,     5,    12,    19,    20,    25,
      26,    27,    28,    40,    41,    42,    68,    69,    70,    71,
      72,    73,    74,    75,    61,    62,    65,     5,    41,    73,
      74,    74,    75,    75,     4,    41,    70,    70,     7,     7,
      67,    57,    60,    70,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,    70,     6,
       6,     6,     6,     6,    71,    73,     5,     5,     5,     5,
       5,     8,     9,    10,    11,     6,     6,     6,     6,    57,
       6,     7,     6,     6,    41,    67,    67,    67,    51,     5,
      41,    74,    74,    75,    75,     7,     7,     7,    52,     6,
      58,    52,     6,     6,     6,     6,     6,    52,     6,    30,
      52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    67,    68,    69,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     3,     4,
       2,     0,     3,     1,     0,     1,     1,     3,     2,     2,
       1,     1,     2,     2,     1,     5,     5,     5,     4,     3,
       5,     7,     5,     6,     7,     1,     2,     1,     3,     1,
       4,     3,     3,     1,     3,     1,     2,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     3
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
#line 56 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2446 "parser/parser.c"
    break;

  case 6: /* stmt: var_decl_stmt  */
#line 57 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2452 "parser/parser.c"
    break;

  case 7: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 60 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
            }
#line 2460 "parser/parser.c"
    break;

  case 8: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 65 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                }
#line 2468 "parser/parser.c"
    break;

  case 9: /* param_list: param_list COMMA TYPE ID  */
#line 70 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
            }
#line 2476 "parser/parser.c"
    break;

  case 10: /* param_list: TYPE ID  */
#line 73 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
            }
#line 2484 "parser/parser.c"
    break;

  case 11: /* param_list: %empty  */
#line 76 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2490 "parser/parser.c"
    break;

  case 12: /* simple_param_list: simple_param_list COMMA ID  */
#line 79 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                    }
#line 2498 "parser/parser.c"
    break;

  case 13: /* simple_param_list: ID  */
#line 82 "parser/c7.y"
                            { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2504 "parser/parser.c"
    break;

  case 15: /* flex_block_struct: compound_block_stmt  */
#line 86 "parser/c7.y"
                                             { (yyval.expression) = (yyvsp[0].expression); }
#line 2510 "parser/parser.c"
    break;

  case 16: /* flex_block_struct: block_stmt  */
#line 87 "parser/c7.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2516 "parser/parser.c"
    break;

  case 17: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 90 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2522 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 91 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2528 "parser/parser.c"
    break;

  case 19: /* block_stmts: block_stmts block_stmt  */
#line 94 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2536 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmt  */
#line 97 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2542 "parser/parser.c"
    break;

  case 23: /* block_stmt: set_func_call SEMICOLON  */
#line 102 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2548 "parser/parser.c"
    break;

  case 24: /* block_stmt: flow_control  */
#line 103 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2554 "parser/parser.c"
    break;

  case 25: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 104 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
            }
#line 2562 "parser/parser.c"
    break;

  case 26: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 107 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
            }
#line 2570 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 110 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
            }
#line 2578 "parser/parser.c"
    break;

  case 28: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 113 "parser/c7.y"
                                                    {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 2586 "parser/parser.c"
    break;

  case 29: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 116 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
            }
#line 2594 "parser/parser.c"
    break;

  case 30: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct  */
#line 121 "parser/c7.y"
                                                                                                   {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2602 "parser/parser.c"
    break;

  case 31: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct  */
#line 124 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                }
#line 2610 "parser/parser.c"
    break;

  case 32: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT flex_block_struct  */
#line 127 "parser/c7.y"
                                                                                        {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2618 "parser/parser.c"
    break;

  case 42: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 147 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                }
#line 2626 "parser/parser.c"
    break;

  case 43: /* or_cond_expr: and_cond_expr  */
#line 150 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2632 "parser/parser.c"
    break;

  case 44: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 153 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                }
#line 2640 "parser/parser.c"
    break;

  case 45: /* and_cond_expr: unary_cond_expr  */
#line 156 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2646 "parser/parser.c"
    break;

  case 47: /* unary_cond_expr: eq_cond_expr  */
#line 160 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 2652 "parser/parser.c"
    break;

  case 48: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 163 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 2660 "parser/parser.c"
    break;

  case 49: /* eq_cond_expr: rel_cond_expr  */
#line 166 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2666 "parser/parser.c"
    break;

  case 50: /* equal_ops: EQ_OP  */
#line 169 "parser/c7.y"
                       { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2672 "parser/parser.c"
    break;

  case 53: /* rel_cond_expr: arith_expr  */
#line 174 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2678 "parser/parser.c"
    break;

  case 54: /* rel_cond_expr: EMPTY  */
#line 175 "parser/c7.y"
                           { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2684 "parser/parser.c"
    break;

  case 61: /* set_expr: simple_expr IN simple_expr  */
#line 186 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
            }
#line 2692 "parser/parser.c"
    break;

  case 62: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 191 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 2700 "parser/parser.c"
    break;

  case 63: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 196 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                }
#line 2708 "parser/parser.c"
    break;

  case 64: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 199 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2716 "parser/parser.c"
    break;

  case 65: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 202 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2724 "parser/parser.c"
    break;

  case 66: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 205 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                }
#line 2732 "parser/parser.c"
    break;

  case 67: /* simple_expr: arith_expr  */
#line 210 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2738 "parser/parser.c"
    break;

  case 68: /* simple_expr: func_cte_expr  */
#line 211 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2744 "parser/parser.c"
    break;

  case 69: /* func_cte_expr: EMPTY  */
#line 214 "parser/c7.y"
                           { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2750 "parser/parser.c"
    break;

  case 70: /* func_cte_expr: STRING  */
#line 215 "parser/c7.y"
                            { (yyval.expression) = create_str_expr((yyvsp[0].str_value)); }
#line 2756 "parser/parser.c"
    break;

  case 71: /* func_cte_expr: CHAR  */
#line 216 "parser/c7.y"
                          { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2762 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: func_expr  */
#line 217 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2768 "parser/parser.c"
    break;

  case 73: /* func_expr: func_call  */
#line 220 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2774 "parser/parser.c"
    break;

  case 75: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 222 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2780 "parser/parser.c"
    break;

  case 76: /* arith_expr: arith_expr ADD term  */
#line 225 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 2788 "parser/parser.c"
    break;

  case 77: /* arith_expr: arith_expr SUB term  */
#line 228 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 2796 "parser/parser.c"
    break;

  case 78: /* arith_expr: term  */
#line 231 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2802 "parser/parser.c"
    break;

  case 79: /* term: term MULT factor  */
#line 234 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 2810 "parser/parser.c"
    break;

  case 80: /* term: term DIV factor  */
#line 237 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 2818 "parser/parser.c"
    break;

  case 81: /* term: factor  */
#line 240 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2824 "parser/parser.c"
    break;

  case 82: /* factor: INTEGER  */
#line 243 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 2830 "parser/parser.c"
    break;

  case 83: /* factor: FLOAT  */
#line 244 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 2836 "parser/parser.c"
    break;

  case 84: /* factor: ID  */
#line 245 "parser/c7.y"
                { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2842 "parser/parser.c"
    break;

  case 85: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 246 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 2848 "parser/parser.c"
    break;


#line 2852 "parser/parser.c"

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

#line 249 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
