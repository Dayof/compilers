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
  YYSYMBOL_NOT_OP = 15,                    /* NOT_OP  */
  YYSYMBOL_L_OP = 16,                      /* L_OP  */
  YYSYMBOL_G_OP = 17,                      /* G_OP  */
  YYSYMBOL_READ = 18,                      /* READ  */
  YYSYMBOL_WRITE = 19,                     /* WRITE  */
  YYSYMBOL_WRITELN = 20,                   /* WRITELN  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_EMPTY = 22,                     /* EMPTY  */
  YYSYMBOL_STRING = 23,                    /* STRING  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_FORALL = 25,                    /* FORALL  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_IN = 27,                        /* IN  */
  YYSYMBOL_IS_SET = 28,                    /* IS_SET  */
  YYSYMBOL_ADD_SET = 29,                   /* ADD_SET  */
  YYSYMBOL_REMOVE = 30,                    /* REMOVE  */
  YYSYMBOL_EXISTS = 31,                    /* EXISTS  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
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
  YYSYMBOL_rel_cond_stmt = 66,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 67,                   /* rel_ops  */
  YYSYMBOL_set_expr = 68,                  /* set_expr  */
  YYSYMBOL_func_call = 69,                 /* func_call  */
  YYSYMBOL_set_func_call = 70,             /* set_func_call  */
  YYSYMBOL_simple_expr = 71,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 72,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 73,                 /* func_expr  */
  YYSYMBOL_arith_expr = 74,                /* arith_expr  */
  YYSYMBOL_term = 75,                      /* term  */
  YYSYMBOL_factor = 76                     /* factor  */
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
#define YYLAST   4789

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  598

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
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    53,    54,    55,    58,    59,    62,    68,
      74,    78,    82,    85,    88,    89,    92,    93,    96,    97,
     100,   103,   106,   107,   108,   109,   110,   114,   118,   122,
     125,   131,   135,   139,   143,   147,   151,   154,   155,   158,
     159,   164,   165,   170,   175,   179,   182,   186,   189,   192,
     195,   198,   201,   205,   211,   214,   217,   218,   222,   225,
     226,   227,   231,   235,   241,   247,   252,   256,   260,   264,
     270,   271,   274,   278,   282,   283,   286,   287,   288,   291,
     294,   297,   300,   303,   306,   309,   310,   311,   312
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
  "MULT", "DIV", "CHAR", "COMMA", "ASSIGN", "NOT_OP", "L_OP", "G_OP",
  "READ", "WRITE", "WRITELN", "TYPE", "EMPTY", "STRING", "RETURN",
  "FORALL", "FOR", "IN", "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF",
  "ELSE", "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER",
  "ID", "FLOAT", "THEN", "$accept", "program", "stmts", "stmt",
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
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   -12,    39,    17,    21,   214,   311,   155,  -243,   356,
     411,   137,   517,    35,   148,   183,    89,    20,  1631,   519,
      63,  2150,   530,   115,   125,   172,   147,    38,   186,   206,
     254,   257,   269,   281,   285,    77,  2182,  2214,  2246,  2278,
     201,   212,   203,   266,   468,   468,   288,   468,   324,   333,
     344,   975,  1109,  1088,   362,   371,   376,   390,   403,   611,
    1116,  1434,  1544,   142,   319,  1544,  1544,  1544,    96,    13,
      38,   615,  2310,  2342,  2374,   382,   416,   419,   430,   878,
    2406,    44,    44,    44,    44,   434,   414,   242,  3053,   425,
    4441,   545,   915,    95,   133,   161,   410,   447,   614,  4474,
    4487,  4520,  4428,   438,   449,   465,   478,    83,   232,   252,
     480,   482,   494,   506,   509,  1450,    54,  1629,  2281,  2313,
    2345,  2377,   670,   468,   454,   491,  2982,   982,  1048,  1318,
    3053,  3053,   781,  1131,  1246,  3084,  3099,  3114,  3129,  3144,
    1246,   532,   535,   536,   553,  1407,   562,   483,  2438,  2470,
    2502,  2534,  2566,  2598,  2630,   581,  2982,   135,   670,   295,
     241,   550,   622,  4533,  4566,   572,   303,   355,  2662,   670,
     670,  2694,  2726,   468,   593,   602,   616,   621,   625,   642,
     650,   968,  1389,  1168,   653,   662,   672,   676,   926,  1233,
    1480,  2758,   468,   580,   629,   656,   687,   702,   704,   722,
      25,   601,   294,   714,   720,   741,   750,   107,   706,   726,
     468,   771,   773,   782,   786,  4198,  4211,  4579,  4612,  4244,
    4257,   468,    96,  3996,   789,   799,   800,   810,  3542,  3273,
    3555,    34,    94,   400,  4009,  4022,  4035,  4048,  4061,  1607,
    3589,  3602,    54,    54,  3225,    13,  1196,   417,    57,    57,
      96,    54,  1669,  2790,   468,   461,   463,   558,   811,   820,
     824,   828,  1199,   918,  1517,   739,   766,   801,   827,   793,
    1588,  1729,   468,  3057,   795,  1095,   840,   841,   867,   872,
    3307,  3212,  3320,   313,    10,   228,   240,   381,  1506,  3770,
    3783,  3810,  3823,   498,  3354,  3367,   613,  2822,   875,   880,
     887,   858,    38,   895,   914,   919,   198,   823,   877,  1162,
    1277,   904,   931,  3010,   933,  1043,   900,  1544,  1544,  1544,
      13,    54,    54,   942,  1052,   913,  1544,  1544,  1544,    13,
     139,   139,   139,   139,   953,  1065,   922,  1544,  1544,  1544,
      57,    57,   954,  1139,   179,   923,  1544,  1544,  1544,    13,
      96,  3159,  3159,   160,   160,   160,   160,  1738,  1829,   336,
    1441,    54,  4290,  4303,  4336,   188,  2854,  2886,   964,  1161,
     930,  1544,  1544,  1544,    13,   181,   181,   181,   181,   969,
    1241,  3260,   255,   984,   948,  1544,  1544,  1544,    13,  3025,
    3057,  3057,  3174,  3174,   190,   190,   190,   190,  1351,  2918,
     958,   468,   468,   940,   993,  1544,   142,    96,    38,  1476,
    1666,   353,   999,  1990,  1008,  1013,  1015,  1020,   358,  2179,
    2211,  1000,   734,  1022,  1032,  1034,  1037,   373,    54,   906,
     941,   998,  1056,  1076,  4625,  4349,  1038,  1039,  1066,  1075,
    4382,  4395,  4074,  3636,  1085,  1096,  1099,  1100,   392,   275,
    4087,  4100,    54,  3649,  3683,  3696,  3730,  3743,  4658,  2950,
     850,  2086,  1103,  1104,  1107,  1134,   395,    54,  2119,  2152,
    2185,  2217,  2249,  3850,  3401,  3025,  1145,  1148,  1149,  1152,
     408,   468,   446,   516,   644,  1049,  1057,  1159,  1160,  1786,
    1746,  1811,   645,   663,   664,   680,   691,   822,  1823,  1855,
     286,   342,  3863,  3890,    54,  3414,  3448,  3461,  3495,  3508,
    1702,  1169,  1178,  1183,  1749,  1782,  1190,   915,    97,  1206,
    1208,  1210,  1213,  1214,  1215,  1203,  1204,  1205,  1225,  1226,
    4671,  4704,  4717,  4750,  4113,  4126,  4139,  4152,  4165,   852,
     853,   862,   863,   866,   699,  3903,  3930,  3943,  3970,  3983,
    1229,  1250,  1216,  1544,  1544,  1544,    13,   202,   202,   202,
     202,  1258,  1260,  1263,  1407,  2978,  1407,  1826,   700,  1863,
    1234,  1266,  1267,  1273,   712,    54,  1918,  1951,  1984,  2019,
    2052,  1884,  1917,  1950,  1985,  1407,   713,  2018,   749,   751,
     759,   775,   776,  2051,  1407,  1407,  2084,  2117
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -243,  -243,  -243,  1279,  -243,     0,  -243,  -198,  -113,    -3,
    -242,    70,  -138,   -84,   -90,  -115,   -62,   -37,   -44,     2,
    -229,   -53,   -63,  -225,   412,   -17,   273,   418,   748,  1491,
    1201,  1012,   640
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    36,    14,   109,   152,   308,
      37,   309,    39,    92,    93,    94,    95,    96,    97,    98,
     134,    99,   100,   140,    85,   203,   204,    86,   205,   206,
     207,   208,   209
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    40,   247,     6,   351,   235,   107,   310,   127,   352,
      54,   367,   283,    19,   160,   234,   -41,    -2,     9,   -15,
      40,    -5,    -5,   -41,   232,     1,   -15,   184,   184,     7,
     184,   231,   165,   -85,   -85,   -85,   -85,   159,     1,     8,
     -45,    20,    -5,    47,   124,   168,   217,   359,   390,   116,
      48,   236,   -85,    54,   108,   399,   171,   172,   392,   251,
      49,    50,   361,   393,   289,   284,    30,    31,    32,    33,
     233,   217,   -45,   350,   288,   217,    15,   164,    51,    52,
      53,   163,    69,   286,    51,   117,    53,   162,    38,   145,
     285,    70,    18,   161,   181,   252,   183,   215,   362,   216,
     -47,   221,   128,   566,    42,    40,   184,    72,   129,   265,
     290,   222,   217,   217,   217,   330,   331,   217,   223,   153,
      43,   250,   418,   217,   224,   225,   226,   227,   311,   287,
      44,   427,   -47,   -47,   -70,   250,   228,   229,   230,   265,
     -39,    40,   -43,   -12,   428,   307,   -39,   210,   -43,    87,
     -12,   448,    40,    40,    16,   153,   184,    88,    13,   235,
      11,    17,    12,    89,    90,   452,   153,   153,   -41,   234,
     211,   212,   213,   214,   -41,   184,   466,    45,   344,   200,
     429,   202,   215,    91,   216,   -48,   467,   235,    46,   -11,
     480,    62,   154,   184,   -44,   504,   -11,   234,   411,   130,
     228,   453,   230,    69,   184,   236,   232,   575,    73,   -10,
     289,    63,   408,   365,    -6,    -6,   -10,   -48,   -48,    74,
     288,   262,   468,   264,   233,   352,   -44,   350,   154,   382,
     280,   505,   282,   236,   -45,    -6,    40,   184,   -14,   154,
     154,   -45,   489,   576,   491,   -14,   -47,   -37,   -40,   -37,
     289,   284,   233,   -47,   -40,   184,   290,   -37,   146,    64,
     288,   -48,    65,   -37,   -37,   147,   -45,   391,   -48,   286,
     -37,   -37,   -37,   -37,    66,   287,   285,   393,   -47,   -47,
      40,   -46,   -37,   -37,   -37,    54,    67,   235,   235,   451,
      68,    41,   -44,   -48,   -48,   191,   290,   234,   450,   -44,
      55,   169,   -86,   -86,   -86,   -86,   449,    75,   313,   -13,
      41,    -7,    -7,   -46,   -46,   287,   -13,   185,   185,   -39,
     185,   -86,   517,    38,   -44,   391,   -39,   289,   289,   289,
     503,   -74,    -7,   236,   236,   236,   218,   288,   288,   502,
     -72,   237,   458,    55,   235,   518,   286,   501,   -46,   147,
      40,   -73,   233,   500,   234,   -46,    -4,    -4,   574,   -40,
     103,   218,   -42,   232,   524,   218,   -40,    38,   -42,   -76,
     231,   147,   492,   290,   290,   290,   290,    -4,   -77,   529,
     -46,   -46,    40,    80,   184,   184,   147,   -49,   111,   217,
     236,    54,   287,   287,   -49,    41,   185,   -71,   538,   266,
     291,   543,   218,   218,   218,   147,   -49,   218,   147,   233,
     -75,    -3,    -3,   218,   549,   132,   133,   -45,   312,   -49,
     -49,   147,   112,   -45,   360,   113,   310,   247,   310,   266,
     129,    41,    -3,   565,   132,   133,   114,    72,   -49,   -49,
     122,   123,    41,    41,   141,    56,   185,   310,   -45,   131,
     283,   584,   -74,   587,   -47,   142,   310,   310,   492,   -74,
     -47,   -48,    76,    77,   184,   185,   125,   -48,   -74,    72,
     -72,   143,   593,   173,   -74,   586,   -72,   104,   105,   106,
     174,   596,   597,   185,   144,   -47,   -47,   148,   110,   149,
     175,   176,   -48,   -48,   185,   237,   177,   178,   179,   180,
     217,   150,   289,   284,   -56,   156,   394,   395,   181,   182,
     183,   -56,   288,   151,   -56,   -56,   -78,    -9,    -9,    -8,
      -8,   286,   -72,   237,   166,   -56,    41,   185,   285,   -72,
     -19,   -19,   -56,   -56,   -56,   -56,   -56,   -56,    -9,   -66,
      -8,   155,   -67,   -68,   157,   185,   291,   311,   290,   311,
     245,   -19,   -87,   -87,   -87,   -87,   -87,   -44,   -87,   126,
     -69,   -87,   -87,   -44,   307,   -73,   307,   287,   311,   -65,
      41,   -73,   -87,   -31,   167,    55,   -31,   311,   311,   -87,
     -87,   -87,   -87,   -87,   -87,   307,   291,   -64,   -44,   131,
     -31,   -31,   -31,   -31,   307,   307,   -31,   -31,   -31,   -74,
     -31,   -31,   -31,   -31,   -31,   170,   329,   -74,   -72,   -87,
     -87,   -87,   -87,   -31,   -36,   -18,   -18,   -36,   -70,    81,
      82,   -49,   -73,   237,   237,   237,   316,   -49,   -87,   -46,
     317,   -36,   -36,   -36,   -36,   -46,   -18,   -36,   -36,   -36,
      41,   -36,   -36,   -36,   -36,   -36,   -36,   318,   132,   133,
     -73,   -76,   -49,   -49,   -36,   319,   -72,   -73,   -76,   -76,
     -46,   -46,   493,   291,   291,   291,   291,    61,   -77,   -77,
     -43,    21,    41,   253,   185,   185,   -77,   -43,   -71,   218,
     237,    55,   -75,   -73,   190,   190,   -71,   190,    23,    24,
      25,    26,   325,   -71,    27,    28,    29,   -75,    30,    31,
      32,    33,    34,   220,   -75,   -42,   -78,   326,   241,   327,
      61,    35,   -42,   -78,   -81,   -81,   332,   333,   592,   594,
     404,    61,    61,   120,   121,   147,   313,   328,   220,   415,
     416,   417,   220,   -81,   -84,   -84,   -84,   -84,   424,   425,
     426,   -76,   -88,   -88,   -88,   -88,   -76,   -77,   493,   437,
     438,   439,   -76,   -84,   185,   -66,   190,   -67,   445,   446,
     447,   -88,   -66,   190,   -67,   -68,   271,   295,   -71,   220,
     220,   220,   -68,   -77,   220,    57,   336,   -75,   337,   -77,
     220,   -69,   -65,   463,   464,   465,   -52,   338,   -69,   -65,
     218,   339,   186,   186,   345,    78,   271,   477,   478,   479,
     -70,   375,   376,   -52,   346,   347,   -70,   494,   -71,   -52,
     -52,   -52,   -52,   190,   -71,   348,   370,   516,    57,   512,
     513,   -52,   -52,   -52,   -22,   371,   519,   -22,   -70,   372,
     557,   558,   190,   373,   -75,   -70,   383,   312,   291,   312,
     -75,   -22,   -22,   -22,   -22,   384,   385,   -22,   -22,   -22,
     190,   -22,   -22,   -22,   -22,   -22,   -22,   -78,   312,   -66,
     -67,   190,   241,   -78,   -22,   -66,   -67,   312,   312,   -68,
     -69,   186,   386,   -65,   267,   -68,   -69,   387,   -16,   -65,
     400,   -16,   190,   190,   115,   401,   242,   243,   220,   220,
     241,   190,   402,   544,   190,   -16,   -16,   -16,   -16,   403,
     405,   -16,   -16,   -16,   267,   -16,   -16,   -16,   -16,   -16,
     -16,   409,   190,   295,   -87,   -87,   -87,   -87,   -16,   406,
     210,   314,   246,   374,   407,   -87,   -87,   -87,   -87,   -87,
      88,   -87,   -70,   -87,   242,   243,    89,    90,   410,   412,
     323,   414,    61,   211,   212,   213,   214,   514,   421,   -79,
     -79,   332,   333,   295,   423,   215,    91,   216,   334,   434,
     442,   419,   420,   436,   444,   571,   572,   573,   -79,   342,
     460,   462,   432,   433,   -85,   473,   -85,   -85,   -85,   -85,
     440,   441,   -85,   -85,   -85,   -85,   -85,   272,   158,   476,
     241,   241,   241,   241,   241,   456,   457,   273,   475,   511,
     515,   190,   368,   274,   275,   -78,   -80,   -80,   332,   333,
     276,   277,   278,   279,   520,   271,   271,   471,   472,   521,
     379,   522,   280,   281,   282,   -80,   523,   -78,   525,   499,
     295,   295,   295,   295,   295,   295,   508,   509,   526,    60,
     527,   190,   190,   528,   530,   531,   220,   241,    61,   413,
      57,   242,   243,   -38,   552,   -38,   189,   189,   422,   189,
     242,   243,   553,   -38,   -82,   -82,   -82,   -82,   190,   -38,
     -38,   435,   532,   242,   243,   219,   -38,   -38,   -38,   -38,
     240,   533,    60,   -82,   -83,   -83,   -83,   -83,   -38,   -38,
     -38,   534,   190,   118,   119,   -86,   -86,   -86,   -86,   -86,
     219,   -57,   535,   -83,   219,   536,   537,   190,   -57,   539,
     540,   -57,   -57,   541,    69,   499,   -87,   -87,   -87,   -87,
     -87,   190,   -57,   -81,   -81,   -81,    83,    84,   189,   -57,
     -57,   -57,   -57,   -57,   -57,   189,   -53,   495,   270,   294,
     542,   219,   219,   219,   190,   443,   219,   242,   243,   186,
     186,   545,   219,   -53,   546,   547,    57,   220,   548,   -53,
     -53,   -53,   -53,   -17,   554,   555,   -17,   461,   270,   242,
     243,   -53,   -53,   -53,   -86,   561,   -86,   -86,   -86,   -86,
     -17,   -17,   -17,   -17,   562,   189,   -17,   -17,   -17,   563,
     -17,   -17,   -17,   -17,   -17,   -17,   564,   499,   499,   579,
     580,   -37,   -37,   -17,   189,   295,   -85,   -85,   -85,   -85,
     -85,   -37,   -85,   567,   -66,   190,   -67,   -37,   -37,   -68,
     -69,   -65,   189,   495,   -37,   -37,   -37,   -37,    59,   550,
     -66,   -67,   -68,   189,   240,   568,   -37,   -37,   -37,   -81,
     588,   -81,   -81,   321,   322,   188,   188,   474,    79,   242,
     243,   210,   -69,   -65,   357,   358,   569,   570,   242,   243,
     363,   364,   240,   189,   102,   581,   189,   582,    90,   239,
     583,    59,   589,   590,   211,   212,   213,   214,   -25,   591,
       0,   -25,    10,     0,   189,   294,   215,   244,   216,   102,
       0,     0,     0,   102,     0,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,    60,     0,     0,    79,   -25,     0,
       0,     0,     0,   210,   188,   294,     0,   269,   293,     0,
     102,   102,   102,    88,     0,   102,     0,     0,     0,    89,
      90,   102,   430,   431,     0,     0,   211,   212,   213,   214,
       0,     0,   -19,     0,     0,   -19,     0,   269,   215,    91,
     216,     0,   240,   240,   240,   454,   455,     0,     0,   -19,
     -19,   -19,   -19,   189,   315,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -19,     0,     0,   469,   470,     0,
       0,     0,   -19,   324,   320,   -87,     0,   -87,   -87,   -87,
     -87,   498,   294,   294,   294,   294,   506,   507,   296,     0,
     297,   335,     0,   189,   189,     0,     0,     0,   219,   240,
      60,     0,   343,   239,     0,   298,   299,   300,   301,     0,
       0,   302,   303,   304,     0,    30,    31,    32,    33,   305,
     189,   -84,   -84,   -84,   -84,   -84,   -38,   -38,   306,     0,
       0,   239,   315,     0,     0,   369,   -38,   -88,   -88,   -88,
     -88,   -88,   -38,   -38,   189,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   380,   293,     0,     0,   -23,     0,   189,
     -23,   -38,   -38,   -38,     0,     0,   -84,   498,   -84,   -84,
     -84,   -84,     0,   189,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,    59,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -51,     0,   293,     0,   189,   -23,    58,   -51,
       0,     0,   135,   136,   -86,   -86,   -86,   -86,   -86,   219,
     -86,     0,     0,   137,     0,   187,   187,     0,   187,     0,
     -51,   -51,   138,   139,   -51,   -51,     0,     0,     0,   192,
       0,   239,   239,   239,   101,     0,   193,     0,     0,   238,
       0,    58,   335,     0,     0,     0,   194,   195,     0,   577,
     578,     0,   196,   197,   198,   199,     0,   294,     0,   101,
       0,     0,     0,   101,   200,   201,   202,   189,     0,     0,
     497,   293,   293,   293,   293,   -81,   -81,   -81,   377,   378,
       0,   -81,   188,   188,     0,     0,     0,   102,   239,    59,
       0,     0,     0,   -56,   187,   353,   354,   268,   292,     0,
     101,   101,   101,   -56,   -56,   101,     0,     0,     0,   324,
       0,   101,    21,     0,   -56,    22,   -87,   -87,   -87,   -87,
     -87,   -56,   -56,   -56,   -56,   -56,   -56,   268,     0,    23,
      24,    25,    26,   343,     0,    27,    28,    29,     0,    30,
      31,    32,    33,    34,   187,     0,     0,   -24,   369,     0,
     -24,     0,    35,     0,     0,   -87,   497,   -87,   -87,   -87,
     -87,     0,   551,   187,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   187,     0,   -18,     0,   380,   -18,   -24,     0,     0,
       0,     0,   187,   238,     0,     0,     0,     0,   102,     0,
     -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -84,   -84,   -84,   -84,
     -84,   238,   -84,   -18,   -79,   187,   -79,   -79,   321,   322,
      -9,   556,   -87,    -9,   -87,   -87,   -87,   -87,     0,   -87,
       0,     0,     0,   187,   292,     0,   293,    -9,    -9,    -9,
      -9,     0,     0,    -9,    -9,    -9,   551,    -9,    -9,    -9,
      -9,    -9,    -9,   -30,     0,     0,   -30,     0,     0,     0,
      -9,     0,   -85,    58,   -85,   -85,   -85,   -85,     0,   -85,
     -30,   -30,   -30,   -30,   292,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -30,   -86,     0,     0,   -29,     0,   -81,
     -29,   -81,   -81,   559,   560,   -80,   -81,   -80,   -80,   321,
     322,   238,   238,   238,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -84,     0,   -84,   -84,   -84,   -84,   -29,   -84,   -88,
       0,   -88,   -88,   -88,   -88,     0,   -88,     0,     0,     0,
     496,   292,   292,   292,   292,   -26,     0,     0,   -26,     0,
       0,     0,   187,   187,     0,     0,     0,   101,   238,    58,
       0,     0,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,     0,
       0,   -27,     0,     0,   -87,   -26,   -87,   -87,   -87,   -87,
       0,   -87,     0,     0,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -28,     0,     0,   -28,     0,     0,   -79,   -27,   -79,
     -79,   559,   560,     0,   -79,     0,   496,     0,   -28,   -28,
     -28,   -28,   187,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -33,     0,     0,   -33,
     -80,   -28,   -80,   -80,   559,   560,   -88,   -80,   -88,   -88,
     -88,   -88,     0,   -33,   -33,   -33,   -33,     0,   101,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -31,
       0,     0,   -31,     0,     0,   -82,   -33,   -82,   -82,   -82,
     -82,     0,   -82,     0,     0,     0,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   595,   -34,     0,     0,   -34,   292,     0,   -83,   -31,
     -83,   -83,   -83,   -83,     0,   -83,     0,     0,     0,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -35,     0,     0,   -35,     0,
       0,     0,   -34,   -88,   -88,   -88,   -88,   -88,     0,   -88,
       0,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -32,     0,
       0,   -32,     0,     0,     0,   -35,   -87,   -87,   -87,   -87,
     -87,     0,   -87,     0,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -36,     0,     0,   -36,     0,     0,     0,   -32,   -79,
     -79,   -79,   377,   378,     0,   -79,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -22,     0,   -82,   -22,   -82,   -82,   -82,
     -82,   -36,   -80,   -80,   -80,   377,   378,     0,   -80,     0,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,    21,     0,   -83,    71,   -83,
     -83,   -83,   -83,   -22,   -82,   -82,   -82,   -82,   -82,     0,
     -82,     0,    23,    24,    25,    26,     0,     0,    27,    28,
      29,     0,    30,    31,    32,    33,    34,   -21,     0,     0,
     -21,     0,     0,     0,     0,    35,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -25,
       0,     0,   -25,     0,     0,     0,     0,   -21,   -79,   -79,
     -79,    83,    84,     0,     0,     0,   -25,   -25,   -25,   -25,
       0,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -20,     0,     0,   -20,     0,     0,     0,     0,   -25,
     -80,   -80,   -80,    83,    84,     0,     0,     0,   -20,   -20,
     -20,   -20,     0,     0,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -23,     0,     0,   -23,     0,     0,     0,
       0,   -20,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -24,     0,     0,   -24,     0,
       0,     0,     0,   -23,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -30,     0,     0,
     -30,     0,     0,     0,     0,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -29,
       0,     0,   -29,     0,     0,     0,     0,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -26,     0,     0,   -26,     0,     0,     0,     0,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -27,     0,     0,   -27,     0,     0,     0,
       0,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -28,     0,     0,   -28,     0,
       0,     0,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -33,     0,     0,
     -33,     0,     0,     0,     0,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -16,
       0,     0,   -16,     0,     0,     0,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,   -16,   -16,   -16,   -16,
       0,     0,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -17,     0,     0,   -17,     0,     0,     0,     0,   -16,
       0,     0,     0,     0,     0,     0,     0,     0,   -17,   -17,
     -17,   -17,     0,     0,   -17,   -17,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -34,     0,     0,   -34,     0,     0,     0,
       0,   -17,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -35,     0,     0,   -35,     0,
       0,     0,     0,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -32,     0,     0,
     -32,     0,     0,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,    -9,
       0,     0,    -9,     0,     0,     0,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,
      -9,    21,     0,     0,   366,     0,     0,     0,     0,    -9,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,     0,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    21,     0,     0,   398,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,   -19,     0,     0,   -19,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,    21,     0,     0,
     459,     0,     0,     0,     0,   -19,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,     0,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    21,
       0,     0,   510,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,     0,    27,    28,    29,     0,    30,    31,    32,    33,
      34,   -18,     0,     0,   -18,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,   -18,   -18,
     -18,   -18,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   272,   585,     0,     0,   254,     0,     0,
       0,   -18,     0,   273,   255,     0,     0,     0,     0,   274,
     275,     0,     0,     0,   256,   257,   276,   277,   278,   279,
     258,   259,   260,   261,     0,   272,     0,     0,   280,   281,
     282,     0,   262,   263,   264,   273,     0,     0,     0,     0,
     481,   274,   275,     0,     0,     0,     0,   482,   276,   277,
     278,   279,     0,     0,     0,     0,     0,   483,   484,     0,
     280,   281,   282,   485,   486,   487,   488,     0,   210,     0,
       0,     0,   272,     0,     0,   489,   490,   491,    88,     0,
       0,     0,   273,     0,     0,    90,     0,     0,     0,   275,
       0,   211,   212,   213,   214,   276,   277,   278,   279,   -59,
       0,     0,     0,   215,   244,   216,     0,   280,   381,   282,
       0,     0,     0,     0,   -60,     0,   -59,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,     0,     0,     0,   -63,
       0,   -60,     0,     0,   -59,   -59,   -59,   -60,   -60,   -60,
     -60,     0,     0,     0,   -61,     0,   -63,     0,     0,   -60,
     -60,   -60,   -63,   -63,   -63,   -63,     0,     0,     0,   -62,
       0,   -61,     0,     0,   -63,   -63,   -63,   -61,   -61,   -61,
     -61,     0,     0,     0,   221,     0,   -62,     0,     0,   -61,
     -61,   -61,   -62,   -62,   -62,   -62,     0,     0,     0,   272,
       0,   223,     0,     0,   -62,   -62,   -62,   224,   225,   226,
     227,     0,     0,     0,     0,     0,   275,     0,     0,   228,
     229,   230,   276,   277,   278,   279,     0,     0,     0,     0,
       0,     0,     0,     0,   280,   381,   282,   388,   -87,     0,
     -87,   -87,   -87,   -87,     0,   -87,   389,     0,   -87,   -87,
     245,     0,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,   -87,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   388,   -87,     0,   -87,   -87,
     -87,   -87,     0,   -87,     0,     0,   -87,   -87,   349,   -87,
       0,   -87,   -87,   -87,   -87,     0,     0,   -87,     0,   -87,
     -87,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -85,     0,   -85,   -85,   -85,   -85,     0,
     -85,     0,     0,   -85,   -85,     0,   -86,     0,   -86,   -86,
     -86,   -86,     0,   -86,   -85,     0,   -86,   -86,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -81,     0,   -81,   -81,   396,   397,     0,   -81,     0,     0,
     -81,   -81,     0,   -84,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -81,     0,   -84,   -84,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -84,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -88,     0,   -88,
     -88,   -88,   -88,     0,   -88,     0,     0,   -88,   -88,     0,
     -87,     0,   -87,   -87,   -87,   -87,     0,   -87,   -88,     0,
     -87,   -87,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -87,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -79,     0,   -79,   -79,   396,   397,
       0,   -79,     0,     0,   -79,   -79,     0,   -80,     0,   -80,
     -80,   396,   397,     0,   -80,   -79,     0,   -80,   -80,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -82,     0,   -82,   -82,   -82,   -82,     0,   -82,     0,
       0,   -82,   -82,     0,   -83,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -82,     0,   -83,   -83,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,   -85,   -85,
       0,   -86,     0,   -86,   -86,   -86,   -86,     0,     0,   -85,
       0,   -86,   -86,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -81,     0,   -81,   -81,   355,
     356,     0,     0,     0,     0,   -81,   -81,     0,   -84,     0,
     -84,   -84,   -84,   -84,     0,     0,   -81,     0,   -84,   -84,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -84,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -88,     0,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -88,   -88,     0,   -87,     0,   -87,   -87,   -87,
     -87,     0,     0,   -88,     0,   -87,   -87,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -87,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -79,
       0,   -79,   -79,   355,   356,     0,     0,     0,     0,   -79,
     -79,     0,   -80,     0,   -80,   -80,   355,   356,     0,     0,
     -79,     0,   -80,   -80,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -80,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -82,     0,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,   -82,   -82,     0,   -83,
       0,   -83,   -83,   -83,   -83,     0,     0,   -82,     0,   -83,
     -83,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -83,     0,     0,     0,     0,     0,   -55,   -83,   -83,   -83,
     -83,   -83,   -83,   -55,     0,     0,   -55,   -55,     0,   -76,
       0,     0,     0,     0,     0,     0,   -76,   -55,     0,   -76,
     -76,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -76,     0,     0,     0,     0,     0,   -77,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,     0,     0,   -77,   -77,     0,   -58,
       0,     0,     0,     0,     0,     0,   -58,   -77,     0,   -58,
     -58,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -58,     0,     0,     0,     0,     0,   -78,   -58,   -58,   -58,
     -58,   -58,   -58,   -78,     0,     0,   -78,   -78,     0,   -50,
       0,     0,     0,     0,     0,     0,   -50,   -78,     0,   135,
     136,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     137,     0,     0,     0,     0,     0,   -54,   -50,   -50,   138,
     139,   -50,   -50,   -54,     0,     0,   -54,   -54,     0,   -66,
       0,     0,     0,     0,     0,     0,   -66,   -54,     0,   -66,
     -66,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -66,     0,     0,     0,     0,     0,   -67,   -66,   -66,   -66,
     -66,   -66,   -66,   -67,     0,     0,   -67,   -67,     0,   -68,
       0,     0,     0,     0,     0,     0,   -68,   -67,     0,   -68,
     -68,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,     0,     0,     0,     0,     0,   -69,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,     0,     0,   -69,   -69,     0,   -65,
       0,     0,     0,     0,     0,     0,   -65,   -69,     0,   -65,
     -65,     0,   -57,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -65,     0,   -57,   -57,     0,   -51,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -57,     0,   135,   136,     0,   -55,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   137,     0,   -55,   -55,
       0,   -76,     0,   -51,   -51,   138,   139,   -51,   -51,   -55,
       0,   -76,   -76,     0,   -77,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -76,     0,   -77,   -77,     0,   -58,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -58,   -58,     0,
     -78,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -58,     0,
     -78,   -78,     0,   -50,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -78,     0,   135,   136,     0,   -54,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   137,     0,   -54,   -54,     0,   -66,
       0,   -50,   -50,   138,   139,   -50,   -50,   -54,     0,   -66,
     -66,     0,   -67,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -66,     0,   -67,   -67,     0,   -68,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -67,     0,   -68,   -68,     0,   -69,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,   -69,   -69,
       0,   -65,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -69,
       0,   -65,   -65,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -65,     0,     0,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -85,   -85,   -85,   -85,   -85,
       0,   -85,     0,     0,   -85,   -85,     0,     0,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -85,     0,   -86,   -86,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -81,   -81,   -81,   340,   341,     0,   -81,     0,     0,
     -81,   -81,     0,     0,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -81,     0,   -84,   -84,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -84,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -87,   -87,   -87,
     -87,   -87,     0,   -87,     0,     0,   -87,   -87,     0,     0,
     -79,   -79,   -79,   340,   341,     0,   -79,   -87,     0,   -79,
     -79,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -79,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -80,   -80,   -80,   340,   341,     0,   -80,
       0,     0,   -80,   -80,     0,     0,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -80,     0,   -88,   -88,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -88,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -82,
     -82,   -82,   -82,   -82,     0,   -82,     0,     0,   -82,   -82,
       0,     0,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -82,
       0,   -83,   -83,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -56,   248,   249,     0,     0,
       0,   -56,     0,     0,   -56,   -56,     0,     0,   -57,     0,
       0,     0,     0,     0,   -57,   -56,     0,   -57,   -57,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -57,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -51,     0,     0,     0,     0,     0,   -51,     0,     0,
     135,   136,     0,     0,   -55,     0,     0,     0,     0,     0,
     -55,   137,     0,   -55,   -55,     0,     0,     0,   -51,   -51,
     138,   139,   -51,   -51,   -55,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -58,     0,     0,
       0,     0,     0,   -58,     0,     0,   -58,   -58,     0,     0,
     -50,     0,     0,     0,     0,     0,   -50,   -58,     0,   135,
     136,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     137,     0,     0,     0,     0,     0,     0,   -50,   -50,   138,
     139,   -50,   -50,   -54,     0,     0,     0,     0,     0,   -54,
       0,     0,   -54,   -54,     0,     0,   -76,     0,     0,     0,
       0,     0,   -76,   -54,     0,   -76,   -76,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -76,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,     0,     0,     0,     0,   -77,     0,     0,   -77,   -77,
       0,     0,   -78,     0,     0,     0,     0,     0,   -78,   -77,
       0,   -78,   -78,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -65,     0,     0,     0,     0,
       0,   -65,     0,     0,   -65,   -65,     0,     0,   -66,     0,
       0,     0,     0,     0,   -66,   -65,     0,   -66,   -66,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,     0,     0,     0,     0,     0,   -67,     0,     0,
     -67,   -67,     0,     0,   -68,     0,     0,     0,     0,     0,
     -68,   -67,     0,   -68,   -68,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,     0,
       0,     0,     0,   -69,     0,     0,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69
};

static const yytype_int16 yycheck[] =
{
       0,    18,    92,     3,   233,    68,    68,   145,    92,   234,
      27,   253,   127,    16,   129,    68,     6,     0,     1,     6,
      37,     0,     1,    13,    68,    21,    13,    44,    45,    41,
      47,    68,   145,     8,     9,    10,    11,   127,    21,     0,
       6,    21,    21,     5,    88,   158,    63,   245,    38,     5,
      12,    68,    27,    70,    41,   297,   169,   170,   287,     5,
      22,    23,     5,   288,   127,   127,    28,    29,    30,    31,
      68,    88,    38,    39,   127,    92,    41,   140,    40,    41,
      42,   134,     5,   127,    40,    41,    42,   131,    18,     6,
     127,    14,     3,   130,    40,    41,    42,    40,    41,    42,
       6,     5,     7,     6,    41,   122,   123,    37,    13,   126,
     127,    15,   129,   130,   131,     8,     9,   134,    22,   122,
       5,    38,   320,   140,    28,    29,    30,    31,   145,   127,
       5,   329,    38,    39,    27,    38,    40,    41,    42,   156,
       7,   158,     7,     6,     5,   145,    13,     5,    13,     7,
      13,   349,   169,   170,     6,   158,   173,    15,    21,   222,
       5,    13,     7,    21,    22,     5,   169,   170,     7,   222,
      28,    29,    30,    31,    13,   192,   374,     5,   222,    40,
      41,    42,    40,    41,    42,     6,     5,   250,    41,     6,
     388,     5,   122,   210,     6,     5,    13,   250,   313,    38,
      40,    41,    42,     5,   221,   222,   250,     5,     7,     6,
     273,     5,    14,   250,     0,     1,    13,    38,    39,     7,
     273,    40,    41,    42,   222,   450,    38,    39,   158,   273,
      40,    41,    42,   250,     6,    21,   253,   254,     6,   169,
     170,    13,    40,    41,    42,    13,     6,     5,     7,     7,
     313,   313,   250,    13,    13,   272,   273,    15,     6,     5,
     313,     6,     5,    21,    22,    13,    38,    39,    13,   313,
      28,    29,    30,    31,     5,   273,   313,   502,    38,    39,
     297,     6,    40,    41,    42,   302,     5,   350,   351,   352,
       5,    18,     6,    38,    39,     7,   313,   350,   351,    13,
      27,     6,     8,     9,    10,    11,   350,    41,    13,     6,
      37,     0,     1,    38,    39,   313,    13,    44,    45,     6,
      47,    27,   406,   253,    38,    39,    13,   390,   391,   392,
     393,     7,    21,   350,   351,   352,    63,   390,   391,   392,
       7,    68,     6,    70,   407,   407,   390,   391,     6,    13,
     367,     7,   350,   390,   407,    13,     0,     1,   556,     6,
      41,    88,     7,   407,     6,    92,    13,   297,    13,     7,
     407,    13,   389,   390,   391,   392,   393,    21,     7,     6,
      38,    39,   399,     7,   401,   402,    13,     6,     6,   406,
     407,   408,   390,   391,    13,   122,   123,     7,     6,   126,
     127,     6,   129,   130,   131,    13,     6,   134,    13,   407,
       7,     0,     1,   140,     6,    34,    35,     7,   145,    38,
      39,    13,     6,    13,     7,     6,   564,   517,   566,   156,
      13,   158,    21,   517,    34,    35,     6,   367,    38,    39,
       6,    27,   169,   170,     6,    27,   173,   585,    38,    39,
     565,   564,     6,   566,     7,     6,   594,   595,   475,    13,
      13,     7,    44,    45,   481,   192,    41,    13,     7,   399,
       7,     6,   585,     5,    13,   565,    13,    65,    66,    67,
      12,   594,   595,   210,     6,    38,    39,     7,    70,     7,
      22,    23,    38,    39,   221,   222,    28,    29,    30,    31,
     517,     7,   565,   565,     6,    14,     8,     9,    40,    41,
      42,    13,   565,     7,    16,    17,     7,     0,     1,     0,
       1,   565,     6,   250,    41,    27,   253,   254,   565,    13,
       0,     1,    34,    35,    36,    37,    38,    39,    21,     7,
      21,   123,     7,     7,   126,   272,   273,   564,   565,   566,
       5,    21,     7,     8,     9,    10,    11,     7,    13,    14,
       7,    16,    17,    13,   564,     7,   566,   565,   585,     7,
     297,    13,    27,     1,   156,   302,     4,   594,   595,    34,
      35,    36,    37,    38,    39,   585,   313,     6,    38,    39,
      18,    19,    20,    21,   594,   595,    24,    25,    26,     6,
      28,    29,    30,    31,    32,    33,     5,    27,     6,     8,
       9,    10,    11,    41,     1,     0,     1,     4,     7,     8,
       9,     7,     6,   350,   351,   352,     5,    13,    27,     7,
       5,    18,    19,    20,    21,    13,    21,    24,    25,    26,
     367,    28,    29,    30,    31,    32,    33,     5,    34,    35,
       6,     6,    38,    39,    41,     5,    27,    13,    13,     6,
      38,    39,   389,   390,   391,   392,   393,    27,     6,     6,
       6,     1,   399,     3,   401,   402,    13,    13,     6,   406,
     407,   408,     6,    27,    44,    45,     6,    47,    18,    19,
      20,    21,     5,    13,    24,    25,    26,     6,    28,    29,
      30,    31,    32,    63,    13,     6,     6,     5,    68,     5,
      70,    41,    13,    13,     8,     9,    10,    11,     6,     6,
     302,    81,    82,    83,    84,    13,    13,     5,    88,   317,
     318,   319,    92,    27,     8,     9,    10,    11,   326,   327,
     328,    27,     8,     9,    10,    11,     7,    27,   475,   337,
     338,   339,    13,    27,   481,     6,   116,     6,   346,   347,
     348,    27,    13,   123,    13,     6,   126,   127,    27,   129,
     130,   131,    13,     7,   134,    27,     5,    27,     5,    13,
     140,     6,     6,   371,   372,   373,     5,     5,    13,    13,
     517,     5,    44,    45,     5,    47,   156,   385,   386,   387,
       7,     8,     9,    22,     5,     5,    13,   389,     7,    28,
      29,    30,    31,   173,    13,     5,     5,   405,    70,   401,
     402,    40,    41,    42,     1,     5,   408,     4,     6,     5,
       8,     9,   192,     5,     7,    13,    41,   564,   565,   566,
      13,    18,    19,    20,    21,     5,     5,    24,    25,    26,
     210,    28,    29,    30,    31,    32,    33,     7,   585,     7,
       7,   221,   222,    13,    41,    13,    13,   594,   595,     7,
       7,   123,     5,     7,   126,    13,    13,     5,     1,    13,
       5,     4,   242,   243,     6,     5,     8,     9,   248,   249,
     250,   251,     5,   475,   254,    18,    19,    20,    21,    41,
       5,    24,    25,    26,   156,    28,    29,    30,    31,    32,
      33,     7,   272,   273,     8,     9,    10,    11,    41,     5,
       5,   173,     7,     5,     5,     7,     8,     9,    10,    11,
      15,    13,     6,    27,     8,     9,    21,    22,     7,     6,
     192,    41,   302,    28,    29,    30,    31,     7,     6,     8,
       9,    10,    11,   313,    41,    40,    41,    42,   210,     6,
       6,   321,   322,    41,    41,   553,   554,   555,    27,   221,
       6,    41,   332,   333,     6,     6,     8,     9,    10,    11,
     340,   341,     7,     8,     9,    10,    11,     5,     6,    41,
     350,   351,   352,   353,   354,   355,   356,    15,    14,    41,
       7,   361,   254,    21,    22,     6,     8,     9,    10,    11,
      28,    29,    30,    31,     6,   375,   376,   377,   378,     6,
     272,     6,    40,    41,    42,    27,     6,    27,     6,   389,
     390,   391,   392,   393,   394,   395,   396,   397,     6,    27,
       6,   401,   402,     6,     6,     6,   406,   407,   408,     6,
     302,     8,     9,     5,     5,     7,    44,    45,     6,    47,
       8,     9,     5,    15,     8,     9,    10,    11,   428,    21,
      22,     6,     6,     8,     9,    63,    28,    29,    30,    31,
      68,     6,    70,    27,     8,     9,    10,    11,    40,    41,
      42,     6,   452,    81,    82,     7,     8,     9,    10,    11,
      88,     6,     6,    27,    92,     6,     6,   467,    13,     6,
       6,    16,    17,     6,     5,   475,     7,     8,     9,    10,
      11,   481,    27,     7,     8,     9,    10,    11,   116,    34,
      35,    36,    37,    38,    39,   123,     5,   389,   126,   127,
       6,   129,   130,   131,   504,     6,   134,     8,     9,   401,
     402,     6,   140,    22,     6,     6,   408,   517,     6,    28,
      29,    30,    31,     1,     5,     5,     4,     6,   156,     8,
       9,    40,    41,    42,     6,     6,     8,     9,    10,    11,
      18,    19,    20,    21,     6,   173,    24,    25,    26,     6,
      28,    29,    30,    31,    32,    33,     6,   557,   558,   559,
     560,     5,     6,    41,   192,   565,     7,     8,     9,    10,
      11,    15,    13,     7,     6,   575,     6,    21,    22,     6,
       6,     6,   210,   475,    28,    29,    30,    31,    27,   481,
      27,    27,    27,   221,   222,     6,    40,    41,    42,     6,
       6,     8,     9,    10,    11,    44,    45,     6,    47,     8,
       9,     5,    27,    27,   242,   243,     6,    41,     8,     9,
     248,   249,   250,   251,    63,     7,   254,     7,    22,    68,
       7,    70,     6,     6,    28,    29,    30,    31,     1,     6,
      -1,     4,     3,    -1,   272,   273,    40,    41,    42,    88,
      -1,    -1,    -1,    92,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,   302,    -1,    -1,   116,    41,    -1,
      -1,    -1,    -1,     5,   123,   313,    -1,   126,   127,    -1,
     129,   130,   131,    15,    -1,   134,    -1,    -1,    -1,    21,
      22,   140,   330,   331,    -1,    -1,    28,    29,    30,    31,
      -1,    -1,     1,    -1,    -1,     4,    -1,   156,    40,    41,
      42,    -1,   350,   351,   352,   353,   354,    -1,    -1,    18,
      19,    20,    21,   361,   173,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    -1,    -1,   375,   376,    -1,
      -1,    -1,    41,   192,     5,     6,    -1,     8,     9,    10,
      11,   389,   390,   391,   392,   393,   394,   395,     1,    -1,
       3,   210,    -1,   401,   402,    -1,    -1,    -1,   406,   407,
     408,    -1,   221,   222,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
     428,     7,     8,     9,    10,    11,     5,     6,    41,    -1,
      -1,   250,   251,    -1,    -1,   254,    15,     7,     8,     9,
      10,    11,    21,    22,   452,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,   272,   273,    -1,    -1,     1,    -1,   467,
       4,    40,    41,    42,    -1,    -1,     6,   475,     8,     9,
      10,    11,    -1,   481,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,   302,    28,    29,    30,    31,    32,    33,
      -1,    -1,     6,    -1,   313,    -1,   504,    41,    27,    13,
      -1,    -1,    16,    17,     7,     8,     9,    10,    11,   517,
      13,    -1,    -1,    27,    -1,    44,    45,    -1,    47,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,     5,
      -1,   350,   351,   352,    63,    -1,    12,    -1,    -1,    68,
      -1,    70,   361,    -1,    -1,    -1,    22,    23,    -1,   557,
     558,    -1,    28,    29,    30,    31,    -1,   565,    -1,    88,
      -1,    -1,    -1,    92,    40,    41,    42,   575,    -1,    -1,
     389,   390,   391,   392,   393,     7,     8,     9,    10,    11,
      -1,    13,   401,   402,    -1,    -1,    -1,   406,   407,   408,
      -1,    -1,    -1,     6,   123,     8,     9,   126,   127,    -1,
     129,   130,   131,    16,    17,   134,    -1,    -1,    -1,   428,
      -1,   140,     1,    -1,    27,     4,     7,     8,     9,    10,
      11,    34,    35,    36,    37,    38,    39,   156,    -1,    18,
      19,    20,    21,   452,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,   173,    -1,    -1,     1,   467,    -1,
       4,    -1,    41,    -1,    -1,     6,   475,     8,     9,    10,
      11,    -1,   481,   192,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      -1,   210,    -1,     1,    -1,   504,     4,    41,    -1,    -1,
      -1,    -1,   221,   222,    -1,    -1,    -1,    -1,   517,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     7,     8,     9,    10,
      11,   250,    13,    41,     6,   254,     8,     9,    10,    11,
       1,     5,     6,     4,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,   272,   273,    -1,   565,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,   575,    28,    29,    30,
      31,    32,    33,     1,    -1,    -1,     4,    -1,    -1,    -1,
      41,    -1,     6,   302,     8,     9,    10,    11,    -1,    13,
      18,    19,    20,    21,   313,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,     6,    -1,     8,
       9,    10,    11,    41,    13,    -1,    -1,     1,    -1,     6,
       4,     8,     9,    10,    11,     6,    13,     8,     9,    10,
      11,   350,   351,   352,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      -1,     6,    -1,     8,     9,    10,    11,    41,    13,     6,
      -1,     8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,
     389,   390,   391,   392,   393,     1,    -1,    -1,     4,    -1,
      -1,    -1,   401,   402,    -1,    -1,    -1,   406,   407,   408,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
      -1,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,    -1,     4,    -1,    -1,     6,    41,     8,
       9,    10,    11,    -1,    13,    -1,   475,    -1,    18,    19,
      20,    21,   481,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,    -1,     1,    -1,    -1,     4,
       6,    41,     8,     9,    10,    11,     6,    13,     8,     9,
      10,    11,    -1,    18,    19,    20,    21,    -1,   517,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,    -1,     4,    -1,    -1,     6,    41,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     1,    -1,    -1,     4,   565,    -1,     6,    41,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,    -1,     4,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
      -1,     4,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,    -1,     4,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     6,     4,     8,     9,    10,
      11,    41,     7,     8,     9,    10,    11,    -1,    13,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     6,     4,     8,
       9,    10,    11,    41,     7,     8,     9,    10,    11,    -1,
      13,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    -1,    13,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     5,     6,    -1,    -1,     5,    -1,    -1,
      -1,    41,    -1,    15,    12,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    22,    23,    28,    29,    30,    31,
      28,    29,    30,    31,    -1,     5,    -1,    -1,    40,    41,
      42,    -1,    40,    41,    42,    15,    -1,    -1,    -1,    -1,
       5,    21,    22,    -1,    -1,    -1,    -1,    12,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      40,    41,    42,    28,    29,    30,    31,    -1,     5,    -1,
      -1,    -1,     5,    -1,    -1,    40,    41,    42,    15,    -1,
      -1,    -1,    15,    -1,    -1,    22,    -1,    -1,    -1,    22,
      -1,    28,    29,    30,    31,    28,    29,    30,    31,     5,
      -1,    -1,    -1,    40,    41,    42,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,     5,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,    -1,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,     5,    -1,    22,    -1,    -1,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,    -1,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,     5,    -1,    22,    -1,    -1,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,    -1,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,     5,     6,    -1,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     5,     6,    -1,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,     5,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    -1,     6,    -1,     8,     9,
      10,    11,    -1,    13,    27,    -1,    16,    17,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,
       6,    -1,     8,     9,    10,    11,    -1,    13,    27,    -1,
      16,    17,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    13,    27,    -1,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    27,    -1,    16,    17,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    27,    -1,    16,    17,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,     6,    34,    35,    36,
      37,    38,    39,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,     6,    34,    35,    36,
      37,    38,    39,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,     6,    34,    35,    36,
      37,    38,    39,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,     6,    34,    35,    36,
      37,    38,    39,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,     6,    34,    35,    36,
      37,    38,    39,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,     6,    34,    35,    36,
      37,    38,    39,    13,    -1,    -1,    16,    17,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,     6,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    16,    17,    -1,     6,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    16,    17,    -1,     6,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    16,    17,
      -1,     6,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    16,    17,    -1,     6,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    16,    17,    -1,     6,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    16,    17,    -1,
       6,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      16,    17,    -1,     6,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    16,    17,    -1,     6,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    16,    17,    -1,     6,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    16,
      17,    -1,     6,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    16,    17,    -1,     6,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    16,    17,    -1,     6,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    16,    17,
      -1,     6,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,     7,     8,
       9,    10,    11,    -1,    13,    27,    -1,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    -1,    -1,     7,     8,     9,    10,    11,    -1,
      13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,     7,     8,     9,    10,
      11,    -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      -1,    -1,     7,     8,     9,    10,    11,    -1,    13,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    27,    -1,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    13,    27,    -1,    16,
      17,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    27,    -1,    16,    17,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    27,
      -1,    16,    17,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    27,    -1,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      16,    17,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      13,    27,    -1,    16,    17,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    45,    46,    47,    48,    49,    41,     0,     1,
      47,     5,     7,    21,    50,    41,     6,    13,     3,    53,
      21,     1,     4,    18,    19,    20,    21,    24,    25,    26,
      28,    29,    30,    31,    32,    41,    49,    54,    55,    56,
      69,    70,    41,     5,     5,     5,    41,     5,    12,    22,
      23,    40,    41,    42,    69,    70,    71,    72,    73,    74,
      75,    76,     5,     5,     5,     5,     5,     5,     5,     5,
      14,     4,    55,     7,     7,    41,    71,    71,    72,    74,
       7,     8,     9,    10,    11,    68,    71,     7,    15,    21,
      22,    41,    57,    58,    59,    60,    61,    62,    63,    65,
      66,    73,    74,    41,    68,    68,    68,    60,    41,    51,
      71,     6,     6,     6,     6,     6,     5,    41,    75,    75,
      76,    76,     6,    27,    62,    41,    14,    57,     7,    13,
      38,    39,    34,    35,    64,    16,    17,    27,    36,    37,
      67,     6,     6,     6,     6,     6,     6,    13,     7,     7,
       7,     7,    52,    53,    55,    71,    14,    71,     6,    58,
      59,    61,    62,    65,    66,    52,    41,    71,    52,     6,
      33,    52,    52,     5,    12,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    69,    70,    72,    73,    74,    75,
      76,     7,     5,    12,    22,    23,    28,    29,    30,    31,
      40,    41,    42,    69,    70,    72,    73,    74,    75,    76,
       5,    28,    29,    30,    31,    40,    42,    69,    70,    75,
      76,     5,    15,    22,    28,    29,    30,    31,    40,    41,
      42,    61,    62,    63,    65,    66,    69,    70,    73,    74,
      75,    76,     8,     9,    41,     5,     7,    58,     8,     9,
      38,     5,    41,     3,     5,    12,    22,    23,    28,    29,
      30,    31,    40,    41,    42,    69,    70,    72,    73,    74,
      75,    76,     5,    15,    21,    22,    28,    29,    30,    31,
      40,    41,    42,    59,    60,    61,    62,    63,    65,    66,
      69,    70,    73,    74,    75,    76,     1,     3,    18,    19,
      20,    21,    24,    25,    26,    32,    41,    49,    53,    55,
      56,    69,    70,    13,    72,    74,     5,     5,     5,     5,
       5,    10,    11,    72,    74,     5,     5,     5,     5,     5,
       8,     9,    10,    11,    72,    74,     5,     5,     5,     5,
      10,    11,    72,    74,    62,     5,     5,     5,     5,     5,
      39,    64,    67,     8,     9,    10,    11,    75,    75,    51,
       7,     5,    41,    75,    75,    61,     4,    54,    72,    74,
       5,     5,     5,     5,     5,     8,     9,    10,    11,    72,
      74,    41,    62,    41,     5,     5,     5,     5,     5,    14,
      38,    39,    64,    67,     8,     9,    10,    11,     4,    54,
       5,     5,     5,    41,    71,     5,     5,     5,    14,     7,
       7,    59,     6,     6,    41,    68,    68,    68,    51,    76,
      76,     6,     6,    41,    68,    68,    68,    51,     5,    41,
      75,    75,    76,    76,     6,     6,    41,    68,    68,    68,
      76,    76,     6,     6,    41,    68,    68,    68,    51,    62,
      65,    66,     5,    41,    75,    75,    76,    76,     6,     4,
       6,     6,    41,    68,    68,    68,    51,     5,    41,    75,
      75,    76,    76,     6,     6,    14,    41,    68,    68,    68,
      51,     5,    12,    22,    23,    28,    29,    30,    31,    40,
      41,    42,    69,    70,    71,    72,    73,    74,    75,    76,
      61,    62,    65,    66,     5,    41,    75,    75,    76,    76,
       4,    41,    71,    71,     7,     7,    68,    57,    60,    71,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,    71,     6,     6,     6,     6,     6,
      72,    74,     5,     5,     5,     5,     5,     8,     9,    10,
      11,     6,     6,     6,     6,    57,     6,     7,     6,     6,
      41,    68,    68,    68,    51,     5,    41,    75,    75,    76,
      76,     7,     7,     7,    52,     6,    58,    52,     6,     6,
       6,     6,     6,    52,     6,    33,    52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    47,    47,    48,    49,
      50,    50,    50,    51,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    68,    69,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    75,    75,    75,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     6,     3,
       4,     2,     0,     3,     1,     0,     1,     1,     3,     2,
       2,     1,     1,     2,     2,     1,     5,     5,     5,     4,
       3,     5,     7,     5,     6,     7,     1,     1,     2,     1,
       3,     1,     4,     3,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     3
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
  case 6: /* stmt: func_stmt  */
#line 58 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2589 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 59 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2595 "parser/parser.c"
    break;

  case 8: /* func_stmt: TYPE ID PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 62 "parser/c7.y"
                                                                                          {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-5].str_value)), create_var_expr((yyvsp[-4].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-5].str_value));
            }
#line 2604 "parser/parser.c"
    break;

  case 9: /* var_decl_stmt: TYPE ID SEMICOLON  */
#line 68 "parser/c7.y"
                                          {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    free((yyvsp[-2].str_value));
                }
#line 2613 "parser/parser.c"
    break;

  case 10: /* param_list: param_list COMMA TYPE ID  */
#line 74 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                free((yyvsp[-1].str_value));
            }
#line 2622 "parser/parser.c"
    break;

  case 11: /* param_list: TYPE ID  */
#line 78 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                free((yyvsp[-1].str_value));
            }
#line 2631 "parser/parser.c"
    break;

  case 12: /* param_list: %empty  */
#line 82 "parser/c7.y"
                          { (yyval.expression) = create_empty_expr(); }
#line 2637 "parser/parser.c"
    break;

  case 13: /* simple_param_list: simple_param_list COMMA ID  */
#line 85 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                    }
#line 2645 "parser/parser.c"
    break;

  case 14: /* simple_param_list: ID  */
#line 88 "parser/c7.y"
                            { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 2651 "parser/parser.c"
    break;

  case 15: /* simple_param_list: %empty  */
#line 89 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2657 "parser/parser.c"
    break;

  case 16: /* flex_block_struct: compound_block_stmt  */
#line 92 "parser/c7.y"
                                             { (yyval.expression) = (yyvsp[0].expression); }
#line 2663 "parser/parser.c"
    break;

  case 17: /* flex_block_struct: block_stmt  */
#line 93 "parser/c7.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2669 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 96 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2675 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 97 "parser/c7.y"
                                              { (yyval.expression) = create_empty_expr(); }
#line 2681 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_stmt  */
#line 100 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2689 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_stmt  */
#line 103 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2695 "parser/parser.c"
    break;

  case 22: /* block_stmt: var_decl_stmt  */
#line 106 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2701 "parser/parser.c"
    break;

  case 23: /* block_stmt: func_call SEMICOLON  */
#line 107 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2707 "parser/parser.c"
    break;

  case 24: /* block_stmt: set_func_call SEMICOLON  */
#line 108 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2713 "parser/parser.c"
    break;

  case 25: /* block_stmt: flow_control  */
#line 109 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2719 "parser/parser.c"
    break;

  case 26: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 110 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                free((yyvsp[-4].str_value));
            }
#line 2728 "parser/parser.c"
    break;

  case 27: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 114 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2737 "parser/parser.c"
    break;

  case 28: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 118 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2746 "parser/parser.c"
    break;

  case 29: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 122 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].op)), (yyvsp[-1].expression)); 
            }
#line 2754 "parser/parser.c"
    break;

  case 30: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 125 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2763 "parser/parser.c"
    break;

  case 31: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct  */
#line 131 "parser/c7.y"
                                                                                                   {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2772 "parser/parser.c"
    break;

  case 32: /* flow_control: IF PARENT_LEFT or_cond_expr PARENT_RIGHT flex_block_struct ELSE flex_block_struct  */
#line 135 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-6].str_value)); free((yyvsp[-1].str_value));
                }
#line 2781 "parser/parser.c"
    break;

  case 33: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT flex_block_struct  */
#line 139 "parser/c7.y"
                                                                                        {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2790 "parser/parser.c"
    break;

  case 34: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT flex_block_struct  */
#line 143 "parser/c7.y"
                                                                                                    {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2799 "parser/parser.c"
    break;

  case 35: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT flex_block_struct  */
#line 147 "parser/c7.y"
                                                                                                                       {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2808 "parser/parser.c"
    break;

  case 36: /* flow_control: error  */
#line 151 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2814 "parser/parser.c"
    break;

  case 37: /* opt_param: SEMICOLON  */
#line 154 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2820 "parser/parser.c"
    break;

  case 38: /* opt_param: for_expression SEMICOLON  */
#line 155 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2826 "parser/parser.c"
    break;

  case 39: /* for_expression: decl_or_cond_expr  */
#line 158 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2832 "parser/parser.c"
    break;

  case 40: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 159 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2840 "parser/parser.c"
    break;

  case 41: /* decl_or_cond_expr: or_cond_expr  */
#line 164 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2846 "parser/parser.c"
    break;

  case 42: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 165 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                        free((yyvsp[-3].str_value));
                    }
#line 2856 "parser/parser.c"
    break;

  case 43: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 170 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                    }
#line 2864 "parser/parser.c"
    break;

  case 44: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 175 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2873 "parser/parser.c"
    break;

  case 45: /* or_cond_expr: and_cond_expr  */
#line 179 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2879 "parser/parser.c"
    break;

  case 46: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 182 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2888 "parser/parser.c"
    break;

  case 47: /* and_cond_expr: unary_cond_expr  */
#line 186 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2894 "parser/parser.c"
    break;

  case 48: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 189 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression)); 
                }
#line 2902 "parser/parser.c"
    break;

  case 49: /* unary_cond_expr: eq_cond_expr  */
#line 192 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 2908 "parser/parser.c"
    break;

  case 50: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 195 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 2916 "parser/parser.c"
    break;

  case 51: /* eq_cond_expr: rel_cond_expr  */
#line 198 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2922 "parser/parser.c"
    break;

  case 52: /* equal_ops: EQ_OP  */
#line 201 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 2931 "parser/parser.c"
    break;

  case 53: /* equal_ops: NE_OP  */
#line 205 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 2940 "parser/parser.c"
    break;

  case 54: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 211 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 2948 "parser/parser.c"
    break;

  case 55: /* rel_cond_expr: rel_cond_stmt  */
#line 214 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2954 "parser/parser.c"
    break;

  case 56: /* rel_cond_stmt: arith_expr  */
#line 217 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2960 "parser/parser.c"
    break;

  case 57: /* rel_cond_stmt: EMPTY  */
#line 218 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 2969 "parser/parser.c"
    break;

  case 58: /* rel_cond_stmt: func_expr  */
#line 222 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2975 "parser/parser.c"
    break;

  case 59: /* rel_ops: L_OP  */
#line 225 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2981 "parser/parser.c"
    break;

  case 60: /* rel_ops: G_OP  */
#line 226 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 2987 "parser/parser.c"
    break;

  case 61: /* rel_ops: LE_OP  */
#line 227 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 2996 "parser/parser.c"
    break;

  case 62: /* rel_ops: GE_OP  */
#line 231 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3005 "parser/parser.c"
    break;

  case 63: /* rel_ops: IN  */
#line 235 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3014 "parser/parser.c"
    break;

  case 64: /* set_expr: simple_expr IN simple_expr  */
#line 241 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3023 "parser/parser.c"
    break;

  case 65: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 247 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
            }
#line 3031 "parser/parser.c"
    break;

  case 66: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 252 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    free((yyvsp[-3].str_value));
                }
#line 3040 "parser/parser.c"
    break;

  case 67: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 256 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3049 "parser/parser.c"
    break;

  case 68: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 260 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3058 "parser/parser.c"
    break;

  case 69: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 264 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3067 "parser/parser.c"
    break;

  case 70: /* simple_expr: arith_expr  */
#line 270 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3073 "parser/parser.c"
    break;

  case 71: /* simple_expr: func_cte_expr  */
#line 271 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3079 "parser/parser.c"
    break;

  case 72: /* func_cte_expr: EMPTY  */
#line 274 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3088 "parser/parser.c"
    break;

  case 73: /* func_cte_expr: STRING  */
#line 278 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3097 "parser/parser.c"
    break;

  case 74: /* func_cte_expr: CHAR  */
#line 282 "parser/c7.y"
                          { (yyval.expression) = create_char_expr((yyvsp[0].op)); }
#line 3103 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: func_expr  */
#line 283 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3109 "parser/parser.c"
    break;

  case 76: /* func_expr: func_call  */
#line 286 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3115 "parser/parser.c"
    break;

  case 77: /* func_expr: set_func_call  */
#line 287 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3121 "parser/parser.c"
    break;

  case 78: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 288 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3127 "parser/parser.c"
    break;

  case 79: /* arith_expr: arith_expr ADD term  */
#line 291 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3135 "parser/parser.c"
    break;

  case 80: /* arith_expr: arith_expr SUB term  */
#line 294 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
            }
#line 3143 "parser/parser.c"
    break;

  case 81: /* arith_expr: term  */
#line 297 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3149 "parser/parser.c"
    break;

  case 82: /* term: term MULT factor  */
#line 300 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3157 "parser/parser.c"
    break;

  case 83: /* term: term DIV factor  */
#line 303 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].op)), (yyvsp[0].expression));
        }
#line 3165 "parser/parser.c"
    break;

  case 84: /* term: factor  */
#line 306 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3171 "parser/parser.c"
    break;

  case 85: /* factor: INTEGER  */
#line 309 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3177 "parser/parser.c"
    break;

  case 86: /* factor: FLOAT  */
#line 310 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3183 "parser/parser.c"
    break;

  case 87: /* factor: ID  */
#line 311 "parser/c7.y"
                { (yyval.expression) = create_var_expr((yyvsp[0].int_value)); }
#line 3189 "parser/parser.c"
    break;

  case 88: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 312 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3195 "parser/parser.c"
    break;


#line 3199 "parser/parser.c"

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

#line 315 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}
