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
    #include "sym_tab.h"
    #include "ast.h"

    int yylex();
    void yyerror(const char *s);

#line 81 "parser/parser.c"

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
  YYSYMBOL_CHAR = 17,                      /* CHAR  */
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
  YYSYMBOL_UMINUS = 43,                    /* UMINUS  */
  YYSYMBOL_THEN = 44,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_stmts = 47,                     /* stmts  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_func_stmt = 49,                 /* func_stmt  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_var_decl_stmt = 51,             /* var_decl_stmt  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_param_list = 53,                /* param_list  */
  YYSYMBOL_simple_param_list = 54,         /* simple_param_list  */
  YYSYMBOL_compound_block_stmt = 55,       /* compound_block_stmt  */
  YYSYMBOL_block_stmts = 56,               /* block_stmts  */
  YYSYMBOL_block_item = 57,                /* block_item  */
  YYSYMBOL_block_stmt = 58,                /* block_stmt  */
  YYSYMBOL_flow_control_if = 59,           /* flow_control_if  */
  YYSYMBOL_flow_control = 60,              /* flow_control  */
  YYSYMBOL_opt_param = 61,                 /* opt_param  */
  YYSYMBOL_for_expression = 62,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 63,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 64,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 65,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 66,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 67,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 68,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 69,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 70,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 71,                   /* rel_ops  */
  YYSYMBOL_set_expr = 72,                  /* set_expr  */
  YYSYMBOL_func_call = 73,                 /* func_call  */
  YYSYMBOL_set_func_call = 74,             /* set_func_call  */
  YYSYMBOL_simple_expr = 75,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 76,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 77,                 /* func_expr  */
  YYSYMBOL_arith_expr = 78,                /* arith_expr  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_factor = 80                     /* factor  */
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
#define YYLAST   4882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  612

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
       0,    53,    53,    56,    57,    58,    61,    62,    65,    65,
      73,    73,    81,    86,    91,    96,   100,   104,   107,   110,
     115,   118,   121,   122,   125,   126,   127,   128,   129,   134,
     138,   142,   146,   150,   156,   162,   165,   169,   173,   177,
     183,   184,   187,   188,   193,   194,   200,   206,   210,   213,
     217,   220,   223,   226,   229,   232,   236,   242,   245,   248,
     249,   253,   256,   257,   258,   262,   266,   272,   278,   284,
     289,   293,   297,   303,   304,   307,   311,   315,   318,   321,
     322,   323,   326,   329,   332,   335,   338,   341,   342,   347,
     348,   349,   353
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
  "MULT", "DIV", "COMMA", "ASSIGN", "NOT_OP", "L_OP", "G_OP", "CHAR",
  "READ", "WRITE", "WRITELN", "TYPE", "EMPTY", "STRING", "RETURN",
  "FORALL", "FOR", "IN", "IS_SET", "ADD_SET", "REMOVE", "EXISTS", "IF",
  "ELSE", "EQ_OP", "NE_OP", "LE_OP", "GE_OP", "OR_OP", "AND_OP", "INTEGER",
  "ID", "FLOAT", "UMINUS", "THEN", "$accept", "program", "stmts", "stmt",
  "func_stmt", "$@1", "var_decl_stmt", "$@2", "param_list",
  "simple_param_list", "compound_block_stmt", "block_stmts", "block_item",
  "block_stmt", "flow_control_if", "flow_control", "opt_param",
  "for_expression", "decl_or_cond_expr", "or_cond_expr", "and_cond_expr",
  "unary_cond_expr", "eq_cond_expr", "equal_ops", "rel_cond_expr",
  "rel_cond_stmt", "rel_ops", "set_expr", "func_call", "set_func_call",
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-235)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    54,    83,    17,   339,   425,   443,    67,  -235,   461,
     514,   105,   136,   490,   554,   130,   140,   148,   147,   151,
    2016,   560,   143,  2048,   584,   176,   186,   202,   179,   292,
     231,   240,   261,   274,   285,   294,   302,    32,  2080,  2112,
    2144,  2176,  2208,  3127,  2240,   303,   322,   237,   201,   758,
     758,   323,   758,   235,   342,   350,   359,   677,  1355,  1271,
     367,   379,   397,   399,   405,   972,  1454,  1675,  3010,   171,
     387,  3010,  3010,  3010,  3156,    10,   292,   598,  2272,  3127,
     948,    23,    40,    42,   222,  2918,  4197,  4210,  1340,  2304,
    2336,   424,   426,   439,   446,   638,   168,  1750,  2499,  2368,
     177,   177,   235,   235,   460,   452,   661,   449,  3372,   930,
      -5,    64,   305,   486,   493,   497,   520,   241,   296,   513,
     150,   886,  3127,  3127,  1064,  1245,  3229,  3244,  3259,  3274,
    3289,  3304,  3229,   521,   544,   555,   562,  2531,  2563,  2595,
    2627,  2659,  2880,   758,   557,  3025,  1037,  2908,  3054,   571,
     601,   613,   615,   617,   550,  2400,   973,   192,   245,  4223,
    4236,  2432,  2464,  2496,  2528,   628,  3025,   262,  2880,   319,
     280,   335,  2880,   382,  2560,  2880,  2592,  2624,  2656,   758,
     400,   630,   643,   667,   668,  3667,  3137,  3701,  4249,  4262,
    3714,  3748,   758,   409,   652,   738,   741,   715,   749,   757,
     759,  1121,   760,  1327,   768,   776,   801,   811,   822,  1382,
    1482,   825,   758,   415,   791,   820,   834,   880,   887,   888,
     903,   644,   814,   688,   897,   899,   906,   909,   188,   794,
     849,   758,   483,  3185,  1282,   937,   944,   957,   990,  4373,
    4386,   109,   167,   699,  4609,  4642,  4648,  4681,  4687,   828,
    4419,  4432,   185,   185,   168,   168,   168,  2274,    10,  2937,
     447,  3185,  1227,  2688,   991,   995,  1002,   292,  1004,  1008,
      80,  1448,  3127,  1481,   939,  1005,   758,   504,   469,   505,
     530,  1014,  1021,  1030,  1031,  1638,  1567,  1734,   655,   662,
     693,   724,   863,  1985,  2018,   758,   526,  3214,   999,   594,
    1036,  1045,  1051,  1059,  3419,  3385,  3432,   346,   129,    30,
      51,    15,  1181,  1401,  3949,  3983,  3996,  3936,  3466,  3479,
    3083,  2720,  2752,  1065,  1019,   168,  3761,  3795,  1029,  3010,
    3010,  3010,    10,   400,   400,  1074,  1039,  2306,  1042,  3010,
    3010,  3010,    10,   409,   409,  2784,  1079,  1046,   168,   871,
     920,  1062,  3010,  3010,  3010,    10,   230,   230,   415,   415,
    1081,  1054,   168,  4465,  4478,   714,   361,  1068,  3010,  3010,
    3010,  3185,  3319,  3319,   286,   286,   483,   483,  3808,  3842,
    2338,  2370,   347,  2966,   466,  1522,  2816,  1069,   758,   758,
    1093,  3010,   171,   292,    58,  1566,  1599,  1109,  1090,   168,
    2051,  2083,  1085,  3010,  3010,  3010,    10,   295,   295,   504,
     504,  1116,  1165,   168,  3513,  3526,  1108,   126,  1123,  1096,
    3010,  3010,  3010,    10,  3098,  3214,  3214,  3334,  3334,   356,
     356,   526,   526,   376,  2848,  4275,  3855,  1132,  1147,  1150,
    1151,   417,  3889,  3902,  1153,  2402,  1161,  1162,  1166,  1175,
     546,  2434,  2466,  1155,  1007,  1177,  1185,  1188,  1189,   553,
    1012,  1080,  1152,  1314,  4720,  4511,  1193,  1194,  1203,  1208,
     611,  4726,  4759,  4524,  4557,  4570,  4603,  4765,  1640,  1215,
    1216,  1217,  1674,  1219,   930,  1220,   886,   728,  2115,  1223,
    1226,  1229,  1243,   577,  2147,  2179,  2211,  2243,  4030,  3560,
    3098,  1256,  1258,  1260,  1264,   595,   758,   552,   651,   653,
     701,  1221,  1266,  1267,  1279,  1390,  1231,  1509,   702,   704,
     733,   772,   773,  1180,  1600,  1708,   226,   312,  4043,  4077,
    3573,  3607,  3620,  3654,  4288,  4301,  4314,  4327,  4340,  1284,
    1285,  1289,  1290,  1294,  1274,  1275,  1276,  1278,  1280,  4798,
    4804,  4837,  4843,  1303,  1304,  1307,   886,  2995,  1707,  1752,
     842,   876,   941,   943,   966,   784,  4090,  4124,  4137,  4171,
    4184,  1320,  1204,   168,  1756,  1786,  1287,  3010,  3010,  3010,
      10,   430,   430,   552,   552,  1785,  1818,  1851,  1884,   886,
     789,   886,   833,  1819,  1324,  1325,  1334,  1337,   836,  1852,
    1885,  1918,  1951,  1917,   886,  1950,   890,   895,   907,   926,
     928,  1983
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,  1341,  -235,  -235,    25,  1296,  -235,  -202,
     -18,  -177,   -16,   -48,   -91,   -55,  -103,   -99,  -133,   -39,
     -38,    -4,    22,  -234,   -24,   -35,  -230,   273,   -17,    -9,
     445,   845,  1263,  1032,   777,   384
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    38,    12,    16,   118,
      39,    40,    41,    42,    43,    44,   109,   110,   111,   112,
     241,   242,   243,   126,   244,   245,   132,   104,   224,   225,
     105,   226,   227,   228,   229,   230
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   322,   147,    45,    81,    82,   146,   148,    86,   372,
     260,    46,    60,   307,   373,   170,   -17,    -2,     9,    85,
      61,   -52,   -17,    45,    78,     6,   188,   -52,     6,   121,
     272,    46,   204,   204,   189,   204,   -48,    75,     1,    83,
     205,   205,   -48,   205,    86,    76,   -48,   169,   -50,   124,
     125,   117,   246,   -52,   -52,    85,   382,   -50,     1,    60,
     247,   122,   188,   -50,   486,    84,   273,    61,   -48,   426,
     189,   -42,    -8,   156,   -10,   120,   -42,   427,   -48,   123,
     -50,   -50,   428,     8,   157,    75,   386,    86,    86,   -50,
     -50,    86,   246,   393,   164,     7,   122,   160,    85,    85,
     247,    84,   159,   271,   274,   188,   188,   308,   309,   188,
      13,   313,   275,   189,   189,   188,   -48,   189,    83,   158,
     174,   -48,   312,   189,   176,    45,   204,   177,   288,   314,
     441,   246,   -51,    46,   205,   -44,   289,   315,   -51,   247,
     450,   -44,   310,    14,    84,    84,    18,   -48,   371,   288,
      20,    45,    19,   459,   -13,    45,   -51,   289,    45,    46,
     -13,    45,   204,    46,   -51,   -51,    46,   425,   311,    46,
     205,    17,    22,   256,   -50,   204,   231,   193,   106,   -50,
     232,    48,    96,   205,    47,   233,    53,   433,   -51,   -51,
     325,    49,   107,   234,   180,   204,   356,   357,   -47,   235,
     236,   237,   238,   205,   493,   -50,   -50,    50,   201,   257,
     203,   239,   108,   240,   204,   -73,   246,    57,    97,    59,
      51,   505,   205,   384,   247,   185,   326,   187,   -52,   366,
     -47,   123,   -47,   394,    82,   348,    68,    86,   -47,   213,
      96,   373,    91,   -12,   246,    69,    45,   -16,    85,   -12,
      60,   -49,   247,   -16,    46,   188,   124,   125,    61,   204,
     -52,   -52,   313,   189,   -47,   426,    70,   205,    83,   -46,
     221,   349,   223,   312,   -46,    57,    97,    59,   204,    71,
     314,   308,   309,   -49,   -49,   313,   205,   -43,   315,   484,
      72,   362,   -43,   417,    84,   232,   312,    52,   428,    73,
     399,    53,   153,   314,   277,    45,    78,    74,   154,    54,
      89,   315,   -44,    46,    55,    56,   310,   -44,   -49,   311,
      32,    33,    34,    35,   -49,   175,   239,   363,   240,    90,
     -10,   320,    57,    58,    59,   285,   400,   287,   472,    -5,
      -5,   -15,   311,   261,   114,   115,   116,   -15,   471,   -77,
     -49,   -49,   -42,   477,   246,   246,   246,   -75,   -42,   154,
      -5,   413,   247,   247,   247,   296,   -76,   470,   -51,    45,
      78,   204,   204,   -51,   -79,   246,    60,    46,   598,   205,
     205,   557,   -43,   247,    61,   260,   -80,   526,   -43,   -45,
     313,   313,   313,   529,   -45,   272,   304,   414,   306,   -51,
     -51,   312,   312,   528,    99,   325,   -74,   518,   314,   314,
     314,   314,   -78,    67,   256,   519,   315,   315,   315,   315,
     348,   310,   527,   538,   307,    -6,    -6,   191,   113,   154,
     133,   273,   134,   210,   210,   573,   210,    98,   559,   507,
     185,   326,   187,    -7,    -7,   135,    -6,   311,   311,   201,
     257,   203,   136,   251,   383,   221,   349,   223,   590,   148,
      67,    -4,    -4,   191,    -7,   272,   142,   246,   271,   274,
     515,   574,   517,   -47,    62,   247,   -77,   275,   -47,   143,
     210,   -77,    -4,   518,    67,    67,   140,   141,   362,   204,
     144,   519,   149,   251,    92,    93,   -14,   205,   272,   150,
     272,   273,   -14,   151,   -47,   371,   191,   191,   588,   399,
     191,    15,   -75,   272,    -3,    -3,   191,   -75,   308,   309,
     155,   119,   313,   239,   363,   240,   152,   210,   161,   294,
     319,   413,   251,   312,   273,    -3,   273,   -76,   271,   274,
     314,   603,   -76,   605,   285,   400,   287,   275,   315,   273,
     294,   162,   543,   310,   -11,   -11,   611,   573,   154,   548,
      -9,    -9,   163,   210,   327,   154,   304,   414,   306,   -81,
     166,   271,   274,   271,   274,   -11,   210,   337,   -69,   311,
     275,    -9,   275,   564,   -19,   -19,   271,   274,   165,   154,
     167,   171,   515,   574,   517,   275,   210,   350,   -18,   -18,
     -60,   570,   438,   439,   440,   -19,   -60,   154,   -70,   -60,
     -60,   173,   447,   448,   449,   210,   364,   251,   -49,   -18,
     -71,   -60,   -72,   -49,   -68,   456,   457,   458,   -60,   -60,
     -60,   -60,   -60,   -60,   -67,   328,   191,   191,   210,   210,
     210,   467,   468,   469,   137,   251,   254,   255,   329,   -49,
     -49,    67,   -89,   -89,   -89,   -89,   191,   -77,   -77,   -75,
     210,   401,   -79,   -77,   483,   -75,   -40,   -79,   -40,   -80,
     -40,   -89,   330,   331,   -80,   -40,   490,   491,   492,   210,
     415,   319,   -40,   -40,   -89,   -89,   -89,   -89,   -89,   -40,
     -40,   -40,   -40,   502,   503,   504,   -90,   -90,   -90,   -90,
     -74,   -40,   -40,   -40,   319,   -74,   -52,   -76,   -79,   210,
     -80,   -52,   390,   -76,   -79,   -90,   -80,   442,   443,   258,
     338,   -91,   -91,   -91,   -91,   -91,   -91,   451,   452,   -91,
     -91,   -78,   210,   124,   125,   -81,   -78,   -52,   -52,   -46,
     -81,   -91,   462,   463,   -75,   -46,   210,   -76,   -91,   -91,
     -91,   -91,   -91,   -91,   339,   251,   251,   251,   251,   251,
     475,   476,   340,   192,   341,   342,   -91,   193,   -91,   -91,
     -91,   -91,   210,   210,   -79,   194,   251,    67,   -74,   -78,
     195,   196,   -80,   210,   -74,   -78,   197,   198,   199,   200,
     -45,   294,   294,   496,   497,   604,   -45,   210,   201,   202,
     203,   320,   -84,   -84,   358,   359,    66,   -74,   525,   319,
     319,   319,   319,   319,   319,   532,   533,   -78,   -77,   355,
     190,   -84,   -91,   -91,   -91,   -91,   209,   209,   -73,   209,
     254,   255,   345,   480,   481,   -59,   374,   375,   485,   -81,
     -59,   -91,   610,   -59,   -59,   -81,   250,   -75,   154,   -69,
     595,   596,   597,    66,   -69,   -59,   190,   -87,   -87,   -87,
     -87,   -76,   -59,   -59,   -59,   -59,   -59,   -59,   251,   520,
     -73,   407,   408,   209,    63,   -73,   -87,   138,   139,   -91,
     -91,   -91,   -91,   -70,   525,   351,   250,   262,   -70,   263,
     210,   575,   352,   353,   206,   206,   -69,    94,   -91,   190,
     190,   -70,   -69,   190,   264,   265,   266,   -70,   354,   190,
     267,   268,   269,   -71,    32,    33,    34,    35,    36,   -71,
     209,    63,   293,   318,   -79,   250,   -80,   270,   -88,   -88,
     -88,   -88,   -72,   -74,   -68,   231,   -78,   259,   -72,   232,
     -68,   319,   367,   293,   233,   565,   395,   -88,   -71,   368,
     -72,   107,   234,   -71,   -60,   -72,   209,   210,   235,   236,
     237,   238,   369,   -60,   -60,   525,   525,   601,   602,   209,
     239,   108,   240,   -68,   -35,   -60,   -35,   -35,   -68,   -73,
     100,   101,   -60,   -60,   -60,   -60,   -60,   -60,   206,   209,
     290,   -35,   -35,   -35,   -35,   370,   387,   -35,   -35,   -35,
     388,   -35,   -35,   -35,   -35,   -35,   172,   389,   209,   391,
     250,   290,   396,   392,   -35,   -92,   -92,   -92,   -92,   402,
     -82,   -82,   358,   359,   323,   436,   403,   254,   255,   378,
     379,   380,   381,   209,   -92,   404,   405,   335,   250,   -82,
     418,   419,   295,   168,    66,   445,   296,   254,   255,   190,
     420,   297,   454,   209,   254,   255,   421,   346,   298,   299,
     465,    65,   254,   255,   422,   300,   301,   302,   303,   -55,
     437,   435,   209,   -55,   318,    88,   360,   304,   305,   306,
     444,   208,   208,   446,    95,   453,   -55,   464,   -83,   -83,
     358,   359,   -55,   -55,   -55,   -55,   488,   318,   254,   255,
     482,   249,   209,   455,   -55,   -55,   -55,   -83,    65,   466,
     479,    88,    63,   423,   -91,   487,   -91,   -91,   -91,   -91,
     -91,   397,   498,   -91,   -91,   209,   489,   -89,    95,   -89,
     -89,   -89,   -89,   460,   461,   -91,   500,   501,   534,   209,
     411,   249,   -91,   -91,   -91,   -91,   -91,   -91,   250,   250,
     250,   473,   474,   535,    88,    88,   536,   537,    88,   -81,
     -85,   -85,   -85,   -85,    88,   209,   209,   539,   540,   250,
      66,   499,   541,   254,   255,   208,   209,   292,   317,   -85,
     249,   542,   -81,   544,   494,   495,   -73,   -54,   581,   582,
     209,   545,   -73,   -54,   546,   547,   127,   128,   292,   549,
     550,   524,   318,   318,   318,   318,   530,   531,   129,   551,
     593,   324,   254,   255,   552,   -54,   -54,   130,   131,   -54,
     -54,   553,   554,   555,   336,   556,   576,   558,   -33,   560,
     -33,   -33,   561,   206,   206,   562,   580,   -91,    63,   -91,
     -91,   -91,   -91,   -91,   347,   -33,   -33,   -33,   -33,   563,
     -56,   -33,   -33,   -33,   -56,   -33,   -33,   -33,   -33,   -33,
     -33,   250,   566,   361,   567,   249,   568,   -56,   -33,   521,
     569,   577,   578,   -56,   -56,   -56,   -56,   524,   -90,   -90,
     -90,   -90,   -90,   209,   579,   -56,   -56,   -56,   336,   -60,
     -69,   -70,    64,   249,   -60,   -71,   -72,   -60,   -60,    65,
     -68,   -69,   -70,   -71,    88,   -72,    87,   -68,   398,   -60,
     585,   586,   207,   207,   587,   207,   -60,   -60,   -60,   -60,
     -60,   -60,   -86,   -86,   -86,   -86,   592,   412,   594,   317,
     606,   607,   248,   -90,   318,   -90,   -90,   -90,   -90,    64,
     608,   -86,    87,   609,    10,   521,   -59,   211,   252,   253,
     209,   571,   317,     0,     0,   -59,   -59,   324,   599,   600,
      75,     0,   -91,   -91,   -91,   -91,   -91,   -59,     0,     0,
       0,     0,   248,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     347,     0,     0,     0,     0,    87,    87,     0,   -84,    87,
     -84,   -84,   343,   344,   361,    87,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   249,   249,   249,   207,   -58,   291,   316,
       0,   248,     0,   -58,     0,     0,   -58,   -58,     0,     0,
     208,   208,     0,     0,   249,    65,     0,     0,   -58,   291,
       0,   398,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,     0,   207,     0,     0,   412,     0,     0,     0,   -24,
       0,   -24,   -24,     0,     0,   207,   523,   317,   317,   317,
     317,   -84,   -84,   -84,   102,   103,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -24,   -24,   207,   -24,   -24,   -24,   -24,
     -24,   -24,   -27,     0,   -27,   -27,     0,     0,   -87,   -24,
     -87,   -87,   -87,   -87,   207,     0,   248,     0,     0,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -90,   249,   -90,   -90,   -90,
     -90,   -90,   -27,   -19,   248,   -19,   -19,     0,     0,     0,
      64,     0,   523,     0,     0,    87,     0,     0,   572,   207,
     -19,   -19,   -19,   -19,     0,     0,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   207,     0,
     316,     0,     0,   -19,     0,     0,     0,   -25,     0,   -25,
     -25,     0,   406,     0,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,     0,   316,   -25,   -25,   -25,   -25,     0,   317,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
     -26,     0,   -26,   -26,     0,   572,   -84,   -25,   -84,   -84,
     583,   584,   -84,     0,     0,     0,     0,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   248,   248,   248,     0,     0,     0,
     -26,   -18,     0,   -18,   -18,   -89,   -89,   -89,   -89,   -89,
     -89,   207,   207,     0,     0,   248,    64,     0,   -18,   -18,
     -18,   -18,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -32,     0,   -32,   -32,     0,
       0,   -18,   -87,   -87,   -87,   -87,   -87,   522,   316,   316,
     316,   316,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -31,     0,
     -31,   -31,     0,     0,   -87,   -32,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -90,   -90,   -90,   -90,   -90,   -90,   248,   -31,     0,
       0,     0,     0,   -35,     0,   -35,   -35,   -91,   -91,   -91,
     -91,   -91,   -91,   522,   -91,   -91,   -91,   -91,   -91,   207,
     -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   591,   -28,     0,   -28,   -28,
       0,     0,   -88,   -35,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -29,
     316,   -29,   -29,     0,     0,   -92,   -28,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -30,     0,   -30,   -30,     0,     0,   -82,   -29,
     -82,   -82,   583,   584,   -82,     0,     0,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -37,     0,   -37,   -37,     0,
       0,   -83,   -30,   -83,   -83,   583,   584,   -83,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -38,     0,
     -38,   -38,     0,     0,   -85,   -37,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -36,     0,   -36,   -36,     0,     0,   -86,   -38,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -39,     0,   -39,   -39,     0,     0,
       0,   -36,   -84,   -84,   -84,   409,   410,   -84,     0,     0,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,    23,     0,   178,
      24,     0,     0,     0,   -39,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,   -33,
       0,   -33,   -33,     0,     0,     0,     0,    37,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -22,     0,   -22,   -22,     0,     0,     0,     0,   -33,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -24,     0,   -24,   -24,     0,     0,     0,
       0,   -22,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,    23,     0,   178,    77,     0,
       0,     0,     0,   -24,   -82,   -82,   -82,   409,   410,   -82,
       0,     0,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,    32,    33,    34,    35,    36,   -21,     0,   -21,
     -21,     0,     0,     0,     0,    37,   -83,   -83,   -83,   409,
     410,   -83,     0,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -23,
       0,   -23,   -23,     0,     0,     0,     0,   -21,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -27,     0,   -27,   -27,     0,     0,     0,     0,   -23,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -27,   -27,
     -27,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -20,     0,   -20,   -20,     0,     0,     0,
     -91,   -27,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -25,     0,   -25,   -25,     0,
       0,     0,   -88,   -20,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -26,     0,   -26,
     -26,     0,     0,     0,   -82,   -25,   -82,   -82,   343,   344,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -32,
       0,   -32,   -32,     0,     0,     0,   -83,   -26,   -83,   -83,
     343,   344,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -31,     0,   -31,   -31,     0,     0,     0,   -92,   -32,
     -92,   -92,   -92,   -92,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -28,     0,   -28,   -28,     0,     0,     0,
     -85,   -31,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -29,     0,   -29,   -29,     0,
       0,     0,   -86,   -28,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -30,     0,   -30,
     -30,     0,     0,     0,     0,   -29,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -37,
       0,   -37,   -37,     0,     0,     0,     0,   -30,   -92,   -92,
     -92,   -92,   -92,     0,     0,     0,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -38,     0,   -38,   -38,     0,     0,     0,     0,   -37,
     -82,   -82,   -82,   102,   103,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -36,     0,   -36,   -36,     0,     0,     0,
       0,   -38,   -83,   -83,   -83,   102,   103,     0,     0,     0,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -39,     0,   -39,   -39,     0,
       0,     0,     0,   -36,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,    23,     0,   178,
     321,     0,     0,     0,     0,   -39,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,    23,
       0,   178,   385,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,    32,    33,    34,    35,
      36,   -19,     0,   -19,   -19,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,   -19,     0,     0,   -19,   -19,   -19,     0,   -19,   -19,
     -19,   -19,   -19,    23,     0,   178,   434,     0,     0,     0,
       0,   -19,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
      32,    33,    34,    35,    36,   -11,     0,   -11,   -11,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,   -11,   -11,   -11,   -11,     0,     0,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,    23,     0,   178,
     478,     0,     0,     0,     0,   -11,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,    32,    33,    34,    35,    36,   -18,
       0,   -18,   -18,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   -18,   -18,   -18,   -18,
       0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,
     -18,    23,     0,   178,     0,     0,     0,     0,     0,   -18,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,     0,     0,     0,    29,    30,    31,     0,    32,    33,
      34,    35,    36,   -41,     0,   -41,     0,   -41,     0,     0,
       0,    37,   -41,     0,   -54,     0,     0,     0,     0,   -41,
     -41,     0,     0,   127,   128,     0,   -41,   -41,   -41,   -41,
       0,     0,   -40,   -40,     0,   129,   -40,     0,   -41,   -41,
     -41,   -40,   -54,   -54,   130,   131,   -54,   -54,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,
       0,   -41,   -41,     0,     0,   -41,     0,   -40,   -40,   -40,
     -41,     0,     0,     0,     0,     0,     0,   -41,   -41,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,
     295,   589,     0,     0,   296,     0,   -41,   -41,   -41,   297,
       0,     0,     0,     0,     0,   212,   298,   299,     0,   213,
       0,     0,     0,   300,   301,   302,   303,   214,     0,     0,
     276,     0,   215,   216,   277,   304,   305,   306,   217,   218,
     219,   220,   278,     0,     0,     0,     0,   279,   280,     0,
     221,   222,   223,   281,   282,   283,   284,     0,     0,   231,
       0,     0,     0,   232,     0,   285,   286,   287,   233,     0,
       0,     0,     0,     0,     0,   107,   234,     0,     0,     0,
       0,     0,   235,   236,   237,   238,     0,     0,   295,     0,
       0,     0,   296,     0,   239,   108,   240,   297,     0,     0,
       0,     0,     0,   506,   298,   299,     0,   507,     0,     0,
       0,   300,   301,   302,   303,   508,     0,     0,     0,     0,
     509,   510,     0,   304,   305,   306,   511,   512,   513,   514,
       0,     0,   179,     0,     0,     0,   180,     0,   515,   516,
     517,    79,   332,   -91,     0,   -91,   -91,   -91,   -91,    80,
       0,     0,   -91,   -91,     0,   181,   182,   183,   184,     0,
       0,   -34,     0,     0,   -91,   -34,     0,   185,   186,   187,
     -34,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -34,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,
     231,     0,     0,     0,   232,     0,   -34,   -34,   -34,   233,
       0,     0,     0,     0,     0,     0,     0,   234,     0,     0,
       0,     0,     0,   235,   236,   237,   238,     0,     0,   295,
       0,     0,     0,   296,     0,   239,   365,   240,   297,     0,
       0,     0,     0,     0,   179,     0,   299,     0,   180,     0,
       0,     0,   300,   301,   302,   303,     0,     0,     0,   -62,
       0,    80,     0,   -62,   304,   416,   306,   181,   182,   183,
     184,     0,     0,     0,   -63,     0,   -62,     0,   -63,   185,
     186,   187,   -62,   -62,   -62,   -62,     0,     0,     0,   -66,
       0,   -63,     0,   -66,   -62,   -62,   -62,   -63,   -63,   -63,
     -63,     0,     0,     0,   -64,     0,   -66,     0,   -64,   -63,
     -63,   -63,   -66,   -66,   -66,   -66,     0,     0,     0,   -65,
       0,   -64,     0,   -65,   -66,   -66,   -66,   -64,   -64,   -64,
     -64,     0,     0,     0,   231,     0,   -65,     0,   232,   -64,
     -64,   -64,   -65,   -65,   -65,   -65,     0,     0,     0,   295,
       0,   234,     0,   296,   -65,   -65,   -65,   235,   236,   237,
     238,     0,     0,     0,     0,     0,   299,     0,     0,   239,
     365,   240,   300,   301,   302,   303,     0,     0,     0,     0,
       0,     0,     0,     0,   304,   416,   306,   258,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   145,     0,   -91,   -91,     0,
     423,   -91,     0,   -91,   -91,   -91,   -91,   -91,   424,   -91,
     -91,   -91,     0,     0,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -89,     0,   -89,   -89,   -89,
     -89,   -89,     0,     0,   -89,   -89,     0,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,     0,   -89,   -90,   -90,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,
       0,     0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -84,     0,   -84,   -84,   431,   432,   -84,     0,
       0,   -84,   -84,     0,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,     0,   -84,   -87,   -87,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -87,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,   -91,
       0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,     0,
     -91,   -88,   -88,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -88,     0,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -92,     0,   -92,   -92,
     -92,   -92,   -92,     0,     0,   -92,   -92,     0,     0,   -82,
       0,   -82,   -82,   431,   432,   -82,     0,   -92,   -82,   -82,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -82,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,     0,   -83,   -83,   431,   432,   -83,
       0,     0,   -83,   -83,     0,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,     0,   -83,   -85,   -85,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,
     -86,     0,     0,   -89,     0,   -89,   -89,   -89,   -89,     0,
       0,   -86,   -89,   -89,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -89,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,   -90,
     -90,   -90,   -90,     0,     0,     0,   -90,   -90,     0,     0,
     -84,     0,   -84,   -84,   333,   334,     0,     0,   -90,   -84,
     -84,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -84,     0,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -87,     0,   -87,   -87,   -87,   -87,
       0,     0,     0,   -87,   -87,     0,     0,   -91,     0,   -91,
     -91,   -91,   -91,     0,     0,   -87,   -91,   -91,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -91,     0,
       0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -88,     0,   -88,   -88,   -88,   -88,     0,     0,     0,
     -88,   -88,     0,     0,   -82,     0,   -82,   -82,   333,   334,
       0,     0,   -88,   -82,   -82,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -82,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,
     -83,   -83,   333,   334,     0,     0,     0,   -83,   -83,     0,
       0,   -92,     0,   -92,   -92,   -92,   -92,     0,     0,   -83,
     -92,   -92,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -92,     0,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -85,     0,   -85,   -85,   -85,
     -85,     0,     0,     0,   -85,   -85,     0,     0,   -86,     0,
     -86,   -86,   -86,   -86,     0,     0,   -85,   -86,   -86,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -59,     0,   429,   430,     0,     0,   -59,     0,
       0,   -59,   -59,     0,     0,   -79,     0,     0,     0,     0,
       0,   -79,     0,   -59,   -79,   -79,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -79,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,
       0,     0,     0,     0,     0,   -80,     0,     0,   -80,   -80,
       0,     0,   -61,     0,     0,     0,     0,     0,   -61,     0,
     -80,   -61,   -61,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -61,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -81,     0,     0,     0,
       0,     0,   -81,     0,     0,   -81,   -81,     0,     0,   -53,
       0,     0,     0,     0,     0,   -53,     0,   -81,   127,   128,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     129,     0,     0,     0,     0,     0,     0,   -53,   -53,   130,
     131,   -53,   -53,   -57,     0,     0,     0,     0,     0,   -57,
       0,     0,   -57,   -57,     0,     0,   -69,     0,     0,     0,
       0,     0,   -69,     0,   -57,   -69,   -69,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -69,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,   -70,
     -70,     0,     0,   -71,     0,     0,     0,     0,     0,   -71,
       0,   -70,   -71,   -71,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,
       0,     0,     0,   -72,     0,     0,   -72,   -72,     0,     0,
     -68,     0,     0,     0,     0,     0,   -68,     0,   -72,   -68,
     -68,     0,     0,   -58,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -68,   -58,   -58,     0,     0,   -61,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -58,   -61,   -61,     0,     0,   -53,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -61,   127,   128,
       0,     0,   -57,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     129,   -57,   -57,     0,     0,   -79,     0,   -53,   -53,   130,
     131,   -53,   -53,   -57,   -79,   -79,     0,     0,   -80,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -79,   -80,   -80,     0,
       0,   -81,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,
     -81,   -81,     0,     0,   -69,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -81,   -69,   -69,     0,     0,   -70,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -69,   -70,   -70,     0,     0,
     -71,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -70,   -71,
     -71,     0,     0,   -72,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,   -72,   -72,     0,     0,   -68,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -68,   -68,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -68,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   -89,   -89,
       0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,
     -89,   -90,   -90,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -90,     0,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -84,   -84,   -84,   376,
     377,   -84,     0,     0,   -84,   -84,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -84,   -87,   -87,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -87,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     -91,   -91,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -91,   -88,   -88,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -88,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,   -92,   -92,     0,     0,
       0,   -82,   -82,   -82,   376,   377,   -82,     0,   -92,   -82,
     -82,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -82,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,   -83,   -83,   376,   377,   -83,
       0,     0,   -83,   -83,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -83,   -85,   -85,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,   -54,     0,   -86,   -86,
       0,   -54,     0,     0,   127,   128,     0,     0,     0,     0,
     -86,     0,     0,     0,     0,     0,   129,   -86,   -86,   -86,
     -86,   -86,   -86,   -54,   -54,   130,   131,   -54,   -54,   -58,
       0,     0,     0,     0,   -58,   -79,     0,   -58,   -58,     0,
     -79,     0,     0,   -79,   -79,     0,     0,     0,     0,   -58,
       0,     0,     0,     0,     0,   -79,   -58,   -58,   -58,   -58,
     -58,   -58,   -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,
       0,     0,     0,   -80,   -61,     0,   -80,   -80,     0,   -61,
       0,     0,   -61,   -61,     0,     0,     0,     0,   -80,     0,
       0,     0,     0,     0,   -61,   -80,   -80,   -80,   -80,   -80,
     -80,   -61,   -61,   -61,   -61,   -61,   -61,   -81,     0,     0,
       0,     0,   -81,   -53,     0,   -81,   -81,     0,   -53,     0,
       0,   127,   128,     0,     0,     0,     0,   -81,     0,     0,
       0,     0,     0,   129,   -81,   -81,   -81,   -81,   -81,   -81,
     -53,   -53,   130,   131,   -53,   -53,   -57,     0,     0,     0,
       0,   -57,   -68,     0,   -57,   -57,     0,   -68,     0,     0,
     -68,   -68,     0,     0,     0,     0,   -57,     0,     0,     0,
       0,     0,   -68,   -57,   -57,   -57,   -57,   -57,   -57,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,     0,     0,     0,     0,
     -69,   -70,     0,   -69,   -69,     0,   -70,     0,     0,   -70,
     -70,     0,     0,     0,     0,   -69,     0,     0,     0,     0,
       0,   -70,   -69,   -69,   -69,   -69,   -69,   -69,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,     0,     0,     0,   -71,
     -72,     0,   -71,   -71,     0,   -72,     0,     0,   -72,   -72,
       0,     0,     0,     0,   -71,     0,     0,     0,     0,     0,
     -72,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,
     -72,   -72,   -72
};

static const yytype_int16 yycheck[] =
{
      18,   178,     7,    20,    43,    43,   109,    12,    43,   243,
     109,    20,    29,   146,   244,   148,     6,     0,     1,    43,
      29,     6,    12,    40,    40,     0,    43,    12,     3,     6,
     121,    40,    49,    50,    43,    52,     6,     5,    21,    43,
      49,    50,    12,    52,    79,    13,     6,   146,     6,    34,
      35,    41,    69,    38,    39,    79,   258,     6,    21,    76,
      69,    38,    79,    12,     6,    43,   121,    76,    38,    39,
      79,     7,     5,   121,     7,    79,    12,   311,    38,    39,
      38,    39,   312,     0,   122,     5,   263,   122,   123,    38,
      39,   126,   109,    13,   142,    41,    38,   132,   122,   123,
     109,    79,   126,   121,   121,   122,   123,   146,   146,   126,
       5,   146,   121,   122,   123,   132,     7,   126,   122,   123,
     168,    12,   146,   132,   172,   142,   143,   175,   145,   146,
     332,   148,     6,   142,   143,     6,   145,   146,    12,   148,
     342,    12,   146,     7,   122,   123,     6,    38,    39,   166,
       3,   168,    12,   355,     6,   172,     6,   166,   175,   168,
      12,   178,   179,   172,    38,    39,   175,    38,   146,   178,
     179,    41,    21,     5,     7,   192,     5,     9,     7,    12,
       9,     5,     5,   192,    41,    14,     9,   320,    38,    39,
       5,     5,    21,    22,     9,   212,     8,     9,     6,    28,
      29,    30,    31,   212,   406,    38,    39,     5,    40,    41,
      42,    40,    41,    42,   231,    27,   233,    40,    41,    42,
      41,   423,   231,   261,   233,    40,    41,    42,     6,   233,
      38,    39,     6,   272,   272,     5,     5,   272,    12,     9,
       5,   471,    41,     6,   261,     5,   263,     6,   272,    12,
     267,     6,   261,    12,   263,   272,    34,    35,   267,   276,
      38,    39,   297,   272,    38,    39,     5,   276,   272,     7,
      40,    41,    42,   297,    12,    40,    41,    42,   295,     5,
     297,   320,   320,    38,    39,   320,   295,     7,   297,   392,
       5,     5,    12,   297,   272,     9,   320,     5,   528,     5,
       5,     9,     6,   320,     9,   322,   322,     5,    12,    17,
       7,   320,     7,   322,    22,    23,   320,    12,     6,   297,
      28,    29,    30,    31,    12,     6,    40,    41,    42,     7,
       7,    12,    40,    41,    42,    40,    41,    42,   373,     0,
       1,     6,   320,    38,    71,    72,    73,    12,   372,     7,
      38,    39,     6,     6,   371,   372,   373,     7,    12,    12,
      21,     5,   371,   372,   373,     9,     7,   371,     7,   386,
     386,   388,   389,    12,     7,   392,   393,   386,   580,   388,
     389,   484,     6,   392,   393,   484,     7,   425,    12,     7,
     425,   426,   427,   428,    12,   486,    40,    41,    42,    38,
      39,   425,   426,   427,     7,     5,     7,   424,   425,   426,
     427,   428,     7,    29,     5,   424,   425,   426,   427,   428,
       5,   425,   426,     6,   557,     0,     1,    43,    41,    12,
       6,   486,     6,    49,    50,     5,    52,    53,   486,     9,
      40,    41,    42,     0,     1,     6,    21,   425,   426,    40,
      41,    42,     6,    69,     7,    40,    41,    42,   557,    12,
      76,     0,     1,    79,    21,   556,     6,   484,   486,   486,
      40,    41,    42,     7,    29,   484,     7,   486,    12,    27,
      96,    12,    21,   500,   100,   101,   102,   103,     5,   506,
      41,   500,     6,   109,    49,    50,     6,   506,   589,     6,
     591,   556,    12,     6,    38,    39,   122,   123,   556,     5,
     126,    21,     7,   604,     0,     1,   132,    12,   557,   557,
       7,    76,   557,    40,    41,    42,     6,   143,     7,   145,
     146,     5,   148,   557,   589,    21,   591,     7,   556,   556,
     557,   589,    12,   591,    40,    41,    42,   556,   557,   604,
     166,     7,     6,   557,     0,     1,   604,     5,    12,     6,
       0,     1,     7,   179,   180,    12,    40,    41,    42,     7,
      13,   589,   589,   591,   591,    21,   192,   193,     7,   557,
     589,    21,   591,     6,     0,     1,   604,   604,   143,    12,
     145,    41,    40,    41,    42,   604,   212,   213,     0,     1,
       6,     6,   329,   330,   331,    21,    12,    12,     7,    15,
      16,   166,   339,   340,   341,   231,   232,   233,     7,    21,
       7,    27,     7,    12,     7,   352,   353,   354,    34,    35,
      36,    37,    38,    39,     6,     5,   252,   253,   254,   255,
     256,   368,   369,   370,     6,   261,     8,     9,     5,    38,
      39,   267,     8,     9,    10,    11,   272,     6,     6,     6,
     276,   277,     7,    12,   391,    12,     5,    12,     7,     7,
       9,    27,     5,     5,    12,    14,   403,   404,   405,   295,
     296,   297,    21,    22,     7,     8,     9,    10,    11,    28,
      29,    30,    31,   420,   421,   422,     8,     9,    10,    11,
       7,    40,    41,    42,   320,    12,     7,     6,     6,   325,
       6,    12,   267,    12,    12,    27,    12,   333,   334,     5,
       5,     7,     8,     9,    10,    11,    12,   343,   344,    15,
      16,     7,   348,    34,    35,     7,    12,    38,    39,     6,
      12,    27,   358,   359,     6,    12,   362,     6,    34,    35,
      36,    37,    38,    39,     5,   371,   372,   373,   374,   375,
     376,   377,     5,     5,     5,     5,     6,     9,     8,     9,
      10,    11,   388,   389,     6,    17,   392,   393,     6,     6,
      22,    23,     6,   399,    12,    12,    28,    29,    30,    31,
       6,   407,   408,   409,   410,     6,    12,   413,    40,    41,
      42,    12,     8,     9,    10,    11,    29,     6,   424,   425,
     426,   427,   428,   429,   430,   431,   432,     6,    27,     5,
      43,    27,     8,     9,    10,    11,    49,    50,     6,    52,
       8,     9,     7,   388,   389,     7,     8,     9,   393,     6,
      12,    27,     6,    15,    16,    12,    69,    27,    12,     7,
     577,   578,   579,    76,    12,    27,    79,     8,     9,    10,
      11,    27,    34,    35,    36,    37,    38,    39,   484,   424,
       7,     8,     9,    96,    29,    12,    27,   100,   101,     8,
       9,    10,    11,     7,   500,     5,   109,     1,    12,     3,
     506,   507,     5,     5,    49,    50,     6,    52,    27,   122,
     123,     6,    12,   126,    18,    19,    20,    12,     5,   132,
      24,    25,    26,     6,    28,    29,    30,    31,    32,    12,
     143,    76,   145,   146,    27,   148,    27,    41,     8,     9,
      10,    11,     6,    27,     6,     5,    27,     7,    12,     9,
      12,   557,     5,   166,    14,   500,     7,    27,     7,     5,
       7,    21,    22,    12,     6,    12,   179,   573,    28,    29,
      30,    31,     5,    15,    16,   581,   582,   583,   584,   192,
      40,    41,    42,     7,     1,    27,     3,     4,    12,     7,
       8,     9,    34,    35,    36,    37,    38,    39,   143,   212,
     145,    18,    19,    20,    21,     5,     5,    24,    25,    26,
       5,    28,    29,    30,    31,    32,    33,     5,   231,     5,
     233,   166,     7,     5,    41,     8,     9,    10,    11,     5,
       8,     9,    10,    11,   179,     6,     5,     8,     9,   252,
     253,   254,   255,   256,    27,     5,     5,   192,   261,    27,
      41,     5,     5,     6,   267,     6,     9,     8,     9,   272,
       5,    14,     6,   276,     8,     9,     5,   212,    21,    22,
       6,    29,     8,     9,     5,    28,    29,    30,    31,     5,
      41,     6,   295,     9,   297,    43,   231,    40,    41,    42,
       6,    49,    50,    41,    52,     6,    22,     6,     8,     9,
      10,    11,    28,    29,    30,    31,     6,   320,     8,     9,
       7,    69,   325,    41,    40,    41,    42,    27,    76,    41,
      41,    79,   267,     5,     6,     6,     8,     9,    10,    11,
      12,   276,     6,    15,    16,   348,    41,     6,    96,     8,
       9,    10,    11,   356,   357,    27,    13,    41,     6,   362,
     295,   109,    34,    35,    36,    37,    38,    39,   371,   372,
     373,   374,   375,     6,   122,   123,     6,     6,   126,     6,
       8,     9,    10,    11,   132,   388,   389,     6,     6,   392,
     393,     6,     6,     8,     9,   143,   399,   145,   146,    27,
     148,     6,    27,     6,   407,   408,     6,     6,     8,     9,
     413,     6,    12,    12,     6,     6,    15,    16,   166,     6,
       6,   424,   425,   426,   427,   428,   429,   430,    27,     6,
       6,   179,     8,     9,     6,    34,    35,    36,    37,    38,
      39,     6,     6,     6,   192,     6,     5,     7,     1,     6,
       3,     4,     6,   388,   389,     6,     5,     6,   393,     8,
       9,    10,    11,    12,   212,    18,    19,    20,    21,     6,
       5,    24,    25,    26,     9,    28,    29,    30,    31,    32,
      33,   484,     6,   231,     6,   233,     6,    22,    41,   424,
       6,     5,     5,    28,    29,    30,    31,   500,     7,     8,
       9,    10,    11,   506,     5,    40,    41,    42,   256,     7,
       6,     6,    29,   261,    12,     6,     6,    15,    16,   267,
       6,    27,    27,    27,   272,    27,    43,    27,   276,    27,
       7,     7,    49,    50,     7,    52,    34,    35,    36,    37,
      38,    39,     8,     9,    10,    11,     6,   295,    41,   297,
       6,     6,    69,     6,   557,     8,     9,    10,    11,    76,
       6,    27,    79,     6,     3,   500,     6,    51,     8,     9,
     573,   506,   320,    -1,    -1,    15,    16,   325,   581,   582,
       5,    -1,     7,     8,     9,    10,    11,    27,    -1,    -1,
      -1,    -1,   109,    -1,    34,    35,    36,    37,    38,    39,
     348,    -1,    -1,    -1,    -1,   122,   123,    -1,     6,   126,
       8,     9,    10,    11,   362,   132,     6,    -1,     8,     9,
      10,    11,    12,   371,   372,   373,   143,     6,   145,   146,
      -1,   148,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
     388,   389,    -1,    -1,   392,   393,    -1,    -1,    27,   166,
      -1,   399,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,   179,    -1,    -1,   413,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,    -1,   192,   424,   425,   426,   427,
     428,     7,     8,     9,    10,    11,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,   212,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,     6,    41,
       8,     9,    10,    11,   231,    -1,   233,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     6,   484,     8,     9,    10,
      11,    12,    41,     1,   261,     3,     4,    -1,    -1,    -1,
     267,    -1,   500,    -1,    -1,   272,    -1,    -1,   506,   276,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    -1,   295,    -1,
     297,    -1,    -1,    41,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     5,    -1,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,   320,    18,    19,    20,    21,    -1,   557,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,    -1,   573,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    -1,   371,   372,   373,    -1,    -1,    -1,
      41,     1,    -1,     3,     4,     7,     8,     9,    10,    11,
      12,   388,   389,    -1,    -1,   392,   393,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,     1,    -1,     3,     4,    -1,
      -1,    41,     7,     8,     9,    10,    11,   424,   425,   426,
     427,   428,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     7,     8,     9,    10,    11,    12,   484,    41,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     7,     8,     9,
      10,    11,     6,   500,     8,     9,    10,    11,    12,   506,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
      -1,    -1,     6,    41,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
     557,     3,     4,    -1,    -1,     6,    41,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,     6,    41,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,    -1,
      -1,     6,    41,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,    -1,    -1,     6,    41,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    12,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    12,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    12,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    12,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    12,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    12,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
       6,    41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,     6,    41,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,     6,    41,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,     6,    41,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
       6,    41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,     6,    41,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,     1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,     1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,     5,    -1,     7,    -1,     9,    -1,    -1,
      -1,    41,    14,    -1,     6,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    15,    16,    -1,    28,    29,    30,    31,
      -1,    -1,     5,     6,    -1,    27,     9,    -1,    40,    41,
      42,    14,    34,    35,    36,    37,    38,    39,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,     5,     6,    -1,    -1,     9,    -1,    40,    41,    42,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
       5,     6,    -1,    -1,     9,    -1,    40,    41,    42,    14,
      -1,    -1,    -1,    -1,    -1,     5,    21,    22,    -1,     9,
      -1,    -1,    -1,    28,    29,    30,    31,    17,    -1,    -1,
       5,    -1,    22,    23,     9,    40,    41,    42,    28,    29,
      30,    31,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,     5,
      -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,     5,    -1,
      -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,    -1,
      -1,    -1,    -1,     5,    21,    22,    -1,     9,    -1,    -1,
      -1,    28,    29,    30,    31,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,     5,     6,    -1,     8,     9,    10,    11,    22,
      -1,    -1,    15,    16,    -1,    28,    29,    30,    31,    -1,
      -1,     5,    -1,    -1,    27,     9,    -1,    40,    41,    42,
      14,    34,    35,    36,    37,    38,    39,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
       5,    -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,     5,
      -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,     9,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,     9,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,     9,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      -1,    22,    -1,     9,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    27,    15,
      16,    -1,    -1,     6,    -1,    34,    35,    36,    37,    38,
      39,    27,    15,    16,    -1,    -1,     6,    -1,    34,    35,
      36,    37,    38,    39,    27,    15,    16,    -1,    -1,     6,
      -1,    34,    35,    36,    37,    38,    39,    27,    15,    16,
      -1,    -1,     6,    -1,    34,    35,    36,    37,    38,    39,
      27,    15,    16,    -1,    -1,     6,    -1,    34,    35,    36,
      37,    38,    39,    27,    15,    16,    -1,    -1,     6,    -1,
      34,    35,    36,    37,    38,    39,    27,    15,    16,    -1,
      -1,     6,    -1,    34,    35,    36,    37,    38,    39,    27,
      15,    16,    -1,    -1,     6,    -1,    34,    35,    36,    37,
      38,    39,    27,    15,    16,    -1,    -1,     6,    -1,    34,
      35,    36,    37,    38,    39,    27,    15,    16,    -1,    -1,
       6,    -1,    34,    35,    36,    37,    38,    39,    27,    15,
      16,    -1,    -1,     6,    -1,    34,    35,    36,    37,    38,
      39,    27,    15,    16,    -1,    -1,     6,    -1,    34,    35,
      36,    37,    38,    39,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,     8,     9,    10,    11,    12,     7,    -1,    15,    16,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39,     7,
      -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,    37,
      38,    39,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    27,    34,    35,    36,    37,    38,
      39,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
      -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    27,    34,    35,    36,    37,    38,    39,    34,
      35,    36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,
      12,     7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    27,    34,    35,    36,    37,    38,    39,    34,    35,
      36,    37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,
       7,    -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      27,    34,    35,    36,    37,    38,    39,    34,    35,    36,
      37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    46,    47,    48,    49,    51,    41,     0,     1,
      48,    50,    52,     5,     7,    21,    53,    41,     6,    12,
       3,    55,    21,     1,     4,    18,    19,    20,    21,    24,
      25,    26,    28,    29,    30,    31,    32,    41,    51,    55,
      56,    57,    58,    59,    60,    73,    74,    41,     5,     5,
       5,    41,     5,     9,    17,    22,    23,    40,    41,    42,
      73,    74,    75,    76,    77,    78,    79,    80,     5,     5,
       5,     5,     5,     5,     5,     5,    13,     4,    57,    14,
      22,    64,    65,    66,    67,    69,    70,    77,    78,     7,
       7,    41,    75,    75,    76,    78,     5,    41,    80,     7,
       8,     9,    10,    11,    72,    75,     7,    21,    41,    61,
      62,    63,    64,    41,    72,    72,    72,    41,    54,    75,
      66,     6,    38,    39,    34,    35,    68,    15,    16,    27,
      36,    37,    71,     6,     6,     6,     6,     6,    79,    79,
      80,    80,     6,    27,    41,    13,    61,     7,    12,     6,
       6,     6,     6,     6,    12,     7,    58,    65,    66,    69,
      70,     7,     7,     7,    58,    75,    13,    75,     6,    62,
      63,    41,    33,    75,    58,     6,    58,    58,     3,     5,
       9,    28,    29,    30,    31,    40,    41,    42,    73,    74,
      79,    80,     5,     9,    17,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    73,    74,    76,    77,    78,    79,
      80,    52,     5,     9,    17,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    73,    74,    76,    77,    78,    79,
      80,     5,     9,    14,    22,    28,    29,    30,    31,    40,
      42,    65,    66,    67,    69,    70,    73,    74,    77,    78,
      79,    80,     8,     9,     8,     9,     5,    41,     5,     7,
      62,    38,     1,     3,    18,    19,    20,    24,    25,    26,
      41,    55,    59,    60,    73,    74,     5,     9,    17,    22,
      23,    28,    29,    30,    31,    40,    41,    42,    73,    74,
      76,    77,    78,    79,    80,     5,     9,    14,    21,    22,
      28,    29,    30,    31,    40,    41,    42,    63,    64,    65,
      66,    67,    69,    70,    73,    74,    77,    78,    79,    80,
      12,     4,    56,    76,    78,     5,    41,    80,     5,     5,
       5,     5,     5,    10,    11,    76,    78,    80,     5,     5,
       5,     5,     5,    10,    11,     7,    76,    78,     5,    41,
      80,     5,     5,     5,     5,     5,     8,     9,    10,    11,
      76,    78,     5,    41,    80,    41,    66,     5,     5,     5,
       5,    39,    68,    71,     8,     9,    10,    11,    79,    79,
      79,    79,    54,     7,    65,     4,    56,     5,     5,     5,
      75,     5,     5,    13,    64,     7,     7,    76,    78,     5,
      41,    80,     5,     5,     5,     5,     5,     8,     9,    10,
      11,    76,    78,     5,    41,    80,    41,    66,    41,     5,
       5,     5,     5,     5,    13,    38,    39,    68,    71,     8,
       9,    10,    11,    63,     4,     6,     6,    41,    72,    72,
      72,    54,    80,    80,     6,     6,    41,    72,    72,    72,
      54,    80,    80,     6,     6,    41,    72,    72,    72,    54,
      79,    79,    80,    80,     6,     6,    41,    72,    72,    72,
      66,    69,    70,    79,    79,    80,    80,     6,     4,    41,
      75,    75,     7,    72,    61,    75,     6,     6,     6,    41,
      72,    72,    72,    54,    79,    79,    80,    80,     6,     6,
      13,    41,    72,    72,    72,    54,     5,     9,    17,    22,
      23,    28,    29,    30,    31,    40,    41,    42,    73,    74,
      75,    76,    77,    78,    79,    80,    65,    66,    69,    70,
      79,    79,    80,    80,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,    61,     7,    58,
       6,     6,     6,     6,     6,    75,     6,     6,     6,     6,
       6,    76,    78,     5,    41,    80,     5,     5,     5,     5,
       5,     8,     9,    10,    11,     7,     7,     7,    58,     6,
      62,    33,     6,     6,    41,    72,    72,    72,    54,    79,
      79,    80,    80,    58,     6,    58,     6,     6,     6,     6,
       6,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    49,
      52,    51,    53,    53,    53,    54,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    71,    71,    71,    72,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     7,
       0,     4,     4,     2,     0,     3,     1,     0,     3,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     5,     5,
       5,     4,     3,     1,     2,     4,     6,     5,     6,     7,
       1,     2,     1,     3,     1,     4,     3,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       4,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     2,     1,
       1,     1,     3
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
#line 57 "parser/c7.y"
                      { yyerrok; }
#line 2624 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2630 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2636 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
            }
#line 2644 "parser/parser.c"
    break;

  case 9: /* func_stmt: TYPE ID $@1 PARENT_LEFT param_list PARENT_RIGHT compound_block_stmt  */
#line 67 "parser/c7.y"
                                                                            {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-6].str_value)), create_var_expr((yyvsp[-5].int_value)), (yyvsp[-2].expression), (yyvsp[0].expression));
                free((yyvsp[-6].str_value));
            }
#line 2653 "parser/parser.c"
    break;

  case 10: /* $@2: %empty  */
#line 73 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                }
#line 2661 "parser/parser.c"
    break;

  case 11: /* var_decl_stmt: TYPE ID $@2 SEMICOLON  */
#line 75 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2670 "parser/parser.c"
    break;

  case 12: /* param_list: param_list COMMA TYPE ID  */
#line 81 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2680 "parser/parser.c"
    break;

  case 13: /* param_list: TYPE ID  */
#line 86 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                free((yyvsp[-1].str_value));
            }
#line 2690 "parser/parser.c"
    break;

  case 14: /* param_list: %empty  */
#line 91 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2698 "parser/parser.c"
    break;

  case 15: /* simple_param_list: simple_param_list COMMA ID  */
#line 96 "parser/c7.y"
                                                       {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), create_var_expr((yyvsp[0].int_value)));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2707 "parser/parser.c"
    break;

  case 16: /* simple_param_list: ID  */
#line 100 "parser/c7.y"
                            { 
                        (yyval.expression) = create_var_expr((yyvsp[0].int_value));
                        set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    }
#line 2716 "parser/parser.c"
    break;

  case 17: /* simple_param_list: %empty  */
#line 104 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2722 "parser/parser.c"
    break;

  case 18: /* compound_block_stmt: BRACK_LEFT block_stmts BRACK_RIGHT  */
#line 107 "parser/c7.y"
                                                            {
                        (yyval.expression) = (yyvsp[-1].expression);
                    }
#line 2730 "parser/parser.c"
    break;

  case 19: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 110 "parser/c7.y"
                                              {
                        (yyval.expression) = create_empty_expr();
                    }
#line 2738 "parser/parser.c"
    break;

  case 20: /* block_stmts: block_stmts block_item  */
#line 115 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2746 "parser/parser.c"
    break;

  case 21: /* block_stmts: block_item  */
#line 118 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2752 "parser/parser.c"
    break;

  case 22: /* block_item: var_decl_stmt  */
#line 121 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2758 "parser/parser.c"
    break;

  case 23: /* block_item: block_stmt  */
#line 122 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2764 "parser/parser.c"
    break;

  case 24: /* block_stmt: compound_block_stmt  */
#line 125 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2770 "parser/parser.c"
    break;

  case 25: /* block_stmt: func_call SEMICOLON  */
#line 126 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2776 "parser/parser.c"
    break;

  case 26: /* block_stmt: set_func_call SEMICOLON  */
#line 127 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2782 "parser/parser.c"
    break;

  case 27: /* block_stmt: flow_control  */
#line 128 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2788 "parser/parser.c"
    break;

  case 28: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 129 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2798 "parser/parser.c"
    break;

  case 29: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 134 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2807 "parser/parser.c"
    break;

  case 30: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 138 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2816 "parser/parser.c"
    break;

  case 31: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 142 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].char_value)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
            }
#line 2825 "parser/parser.c"
    break;

  case 32: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 146 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2834 "parser/parser.c"
    break;

  case 33: /* block_stmt: error  */
#line 150 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 2843 "parser/parser.c"
    break;

  case 34: /* flow_control_if: IF PARENT_LEFT  */
#line 156 "parser/c7.y"
                                    {
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 2852 "parser/parser.c"
    break;

  case 35: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt  */
#line 162 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2860 "parser/parser.c"
    break;

  case 36: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_stmt ELSE block_stmt  */
#line 165 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 2869 "parser/parser.c"
    break;

  case 37: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_stmt  */
#line 169 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 2878 "parser/parser.c"
    break;

  case 38: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_stmt  */
#line 173 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 2887 "parser/parser.c"
    break;

  case 39: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_stmt  */
#line 177 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 2896 "parser/parser.c"
    break;

  case 40: /* opt_param: SEMICOLON  */
#line 183 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 2902 "parser/parser.c"
    break;

  case 41: /* opt_param: for_expression SEMICOLON  */
#line 184 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 2908 "parser/parser.c"
    break;

  case 42: /* for_expression: decl_or_cond_expr  */
#line 187 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 2914 "parser/parser.c"
    break;

  case 43: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 188 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 2922 "parser/parser.c"
    break;

  case 44: /* decl_or_cond_expr: or_cond_expr  */
#line 193 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 2928 "parser/parser.c"
    break;

  case 45: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 194 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 2939 "parser/parser.c"
    break;

  case 46: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 200 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 2948 "parser/parser.c"
    break;

  case 47: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 206 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2957 "parser/parser.c"
    break;

  case 48: /* or_cond_expr: and_cond_expr  */
#line 210 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 2963 "parser/parser.c"
    break;

  case 49: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 213 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 2972 "parser/parser.c"
    break;

  case 50: /* and_cond_expr: unary_cond_expr  */
#line 217 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2978 "parser/parser.c"
    break;

  case 51: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 220 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                }
#line 2986 "parser/parser.c"
    break;

  case 52: /* unary_cond_expr: eq_cond_expr  */
#line 223 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 2992 "parser/parser.c"
    break;

  case 53: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 226 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3000 "parser/parser.c"
    break;

  case 54: /* eq_cond_expr: rel_cond_expr  */
#line 229 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3006 "parser/parser.c"
    break;

  case 55: /* equal_ops: EQ_OP  */
#line 232 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3015 "parser/parser.c"
    break;

  case 56: /* equal_ops: NE_OP  */
#line 236 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3024 "parser/parser.c"
    break;

  case 57: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 242 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3032 "parser/parser.c"
    break;

  case 58: /* rel_cond_expr: rel_cond_stmt  */
#line 245 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3038 "parser/parser.c"
    break;

  case 59: /* rel_cond_stmt: arith_expr  */
#line 248 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3044 "parser/parser.c"
    break;

  case 60: /* rel_cond_stmt: EMPTY  */
#line 249 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3053 "parser/parser.c"
    break;

  case 61: /* rel_cond_stmt: func_expr  */
#line 253 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3059 "parser/parser.c"
    break;

  case 62: /* rel_ops: L_OP  */
#line 256 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3065 "parser/parser.c"
    break;

  case 63: /* rel_ops: G_OP  */
#line 257 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3071 "parser/parser.c"
    break;

  case 64: /* rel_ops: LE_OP  */
#line 258 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3080 "parser/parser.c"
    break;

  case 65: /* rel_ops: GE_OP  */
#line 262 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3089 "parser/parser.c"
    break;

  case 66: /* rel_ops: IN  */
#line 266 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3098 "parser/parser.c"
    break;

  case 67: /* set_expr: simple_expr IN simple_expr  */
#line 272 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3107 "parser/parser.c"
    break;

  case 68: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 278 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3116 "parser/parser.c"
    break;

  case 69: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 284 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3126 "parser/parser.c"
    break;

  case 70: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 289 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3135 "parser/parser.c"
    break;

  case 71: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 293 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3144 "parser/parser.c"
    break;

  case 72: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 297 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3153 "parser/parser.c"
    break;

  case 73: /* simple_expr: arith_expr  */
#line 303 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3159 "parser/parser.c"
    break;

  case 74: /* simple_expr: func_cte_expr  */
#line 304 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3165 "parser/parser.c"
    break;

  case 75: /* func_cte_expr: EMPTY  */
#line 307 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3174 "parser/parser.c"
    break;

  case 76: /* func_cte_expr: STRING  */
#line 311 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3183 "parser/parser.c"
    break;

  case 77: /* func_cte_expr: CHAR  */
#line 315 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3191 "parser/parser.c"
    break;

  case 78: /* func_cte_expr: func_expr  */
#line 318 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3197 "parser/parser.c"
    break;

  case 79: /* func_expr: func_call  */
#line 321 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3203 "parser/parser.c"
    break;

  case 80: /* func_expr: set_func_call  */
#line 322 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3209 "parser/parser.c"
    break;

  case 81: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 323 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3215 "parser/parser.c"
    break;

  case 82: /* arith_expr: arith_expr ADD term  */
#line 326 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3223 "parser/parser.c"
    break;

  case 83: /* arith_expr: arith_expr SUB term  */
#line 329 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3231 "parser/parser.c"
    break;

  case 84: /* arith_expr: term  */
#line 332 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3237 "parser/parser.c"
    break;

  case 85: /* term: term MULT factor  */
#line 335 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3245 "parser/parser.c"
    break;

  case 86: /* term: term DIV factor  */
#line 338 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3253 "parser/parser.c"
    break;

  case 87: /* term: factor  */
#line 341 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3259 "parser/parser.c"
    break;

  case 88: /* term: SUB factor  */
#line 342 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
        }
#line 3267 "parser/parser.c"
    break;

  case 89: /* factor: INTEGER  */
#line 347 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3273 "parser/parser.c"
    break;

  case 90: /* factor: FLOAT  */
#line 348 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3279 "parser/parser.c"
    break;

  case 91: /* factor: ID  */
#line 349 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3288 "parser/parser.c"
    break;

  case 92: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 353 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3294 "parser/parser.c"
    break;


#line 3298 "parser/parser.c"

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

#line 356 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
