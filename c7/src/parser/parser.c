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
    #include "scope.h"

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
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_var_decl_stmt = 53,             /* var_decl_stmt  */
  YYSYMBOL_54_4 = 54,                      /* $@4  */
  YYSYMBOL_param_list = 55,                /* param_list  */
  YYSYMBOL_simple_param_list = 56,         /* simple_param_list  */
  YYSYMBOL_compound_block_stmt = 57,       /* compound_block_stmt  */
  YYSYMBOL_58_5 = 58,                      /* $@5  */
  YYSYMBOL_59_6 = 59,                      /* $@6  */
  YYSYMBOL_block_stmts = 60,               /* block_stmts  */
  YYSYMBOL_block_item = 61,                /* block_item  */
  YYSYMBOL_block_stmt = 62,                /* block_stmt  */
  YYSYMBOL_flow_control_if = 63,           /* flow_control_if  */
  YYSYMBOL_flow_control = 64,              /* flow_control  */
  YYSYMBOL_opt_param = 65,                 /* opt_param  */
  YYSYMBOL_for_expression = 66,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 67,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 68,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 69,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 70,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 71,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 72,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 73,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 74,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 75,                   /* rel_ops  */
  YYSYMBOL_set_expr = 76,                  /* set_expr  */
  YYSYMBOL_func_call = 77,                 /* func_call  */
  YYSYMBOL_set_func_call = 78,             /* set_func_call  */
  YYSYMBOL_simple_expr = 79,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 80,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 81,                 /* func_expr  */
  YYSYMBOL_arith_expr = 82,                /* arith_expr  */
  YYSYMBOL_term = 83,                      /* term  */
  YYSYMBOL_factor = 84                     /* factor  */
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
#define YYLAST   5553

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  629

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
       0,    53,    53,    56,    57,    58,    61,    62,    65,    68,
      70,    65,    80,    80,    93,   106,   119,   124,   127,   128,
     131,   131,   137,   137,   145,   148,   151,   152,   155,   156,
     157,   158,   159,   164,   168,   172,   179,   183,   189,   195,
     198,   202,   206,   210,   216,   217,   220,   221,   226,   227,
     233,   239,   243,   246,   250,   253,   256,   259,   262,   265,
     269,   275,   278,   281,   282,   288,   289,   290,   294,   298,
     304,   310,   316,   321,   325,   329,   335,   336,   339,   343,
     347,   352,   353,   354,   357,   360,   363,   366,   369,   372,
     373,   378,   379,   380,   384,   385
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
  "func_stmt", "$@1", "$@2", "$@3", "var_decl_stmt", "$@4", "param_list",
  "simple_param_list", "compound_block_stmt", "$@5", "$@6", "block_stmts",
  "block_item", "block_stmt", "flow_control_if", "flow_control",
  "opt_param", "for_expression", "decl_or_cond_expr", "or_cond_expr",
  "and_cond_expr", "unary_cond_expr", "eq_cond_expr", "equal_ops",
  "rel_cond_expr", "rel_cond_stmt", "rel_ops", "set_expr", "func_call",
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-335)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -10,    47,    25,   148,   179,   257,    28,  -335,   283,
     314,    56,    81,   119,   401,   346,    71,    39,   193,    69,
     114,   110,    96,   206,   403,   261,  3325,   140,   690,   149,
     150,   223,   188,  1328,   249,   269,   272,   276,   286,   287,
     294,    15,  1361,  2621,  2653,  2685,  2717,  1251,  2749,   184,
     248,   455,   262,  1670,  1670,   295,  1670,   896,   310,   329,
     332,  1267,   651,  1530,  2227,  3328,   340,   364,  3354,   534,
    3360,  3393,  1711,   773,   323,  1711,  1711,  1711,  1769,   320,
    1328,   459,  2781,  1251,  4891,    38,     4,    53,   214,  4904,
    4917,  3512,  2813,  2845,   321,   366,   387,   407,   180,  3401,
    2877,   348,   348,   896,   896,   415,   409,  1023,   410,  3782,
    1396,   151,   164,    10,   447,   471,   487,   494,   284,   288,
     497,   127,  3357,  1251,  1251,  1086,  1150,  1914,  2191,  3575,
    3590,  3605,  3620,  1914,   512,   515,   527,  3422,  3466,  3547,
    3568,  3720,  3754,  3325,  1670,   514,  3429,  1521,  2107,  3458,
     555,   556,   570,   575,   578,  3473,  2909,    49,   212,   250,
    4930,  4943,  2941,  2973,  3005,  3037,   525,  3429,   191,  3325,
     328,   199,   353,  3325,   405,  3069,  3325,  3101,  3133,   206,
     546,   588,   590,   592,  1670,  1045,   594,   596,   614,   615,
    4348,  3878,  4361,  4395,  4408,  4442,  4455,  4489,  1670,  1106,
     617,   625,   626,   628,   630,   632,   640,   766,   506,   775,
    1253,  1330,   644,  1398,   602,  1523,  1755,   647,   320,  1670,
    1604,   638,   643,   655,   666,   670,   681,   682,   826,   311,
     856,   871,   907,   661,   961,    88,   969,  1158,  1670,  3710,
    3531,  5436,   685,   687,   697,   698,  4976,  4989,   259,   273,
     456,  5442,  5475,  5022,  5035,  5068,  5403,  5081,  5114,  1670,
    3714,   357,   452,   460,   701,   702,   707,   708,   689,   992,
    1812,  1872,  1887,   461,  1959,   399,  1966,  1983,   791,   791,
     821,   821,   320,  2157,   413,  3531,   648,   206,   712,   723,
     724,   691,  1328,   729,   740,   106,   732,   927,   990,  1251,
    1293,   739,   747,  1670,  3729,   450,   462,   472,   742,   750,
     754,   761,   731,  1858,  1840,  2028,  2079,   496,  2115,  1034,
    2623,  2656,  1670,  3744,  3560,   730,   158,   765,   774,   783,
     784,  3891,  3795,  3925,   475,    17,    26,   122,   108,  4818,
    4831,  3938,  3972,  3985,  4784,  4019,  4032,  3502,  3325,   787,
     756,  1711,  1711,  1711,   792,   607,  4502,   758,  1711,  1711,
    1711,   320,  1045,  1045,   799,   619,  1942,   769,  1711,  1711,
    1711,   320,  1106,  1106,  3165,   476,   817,   633,  1220,   786,
    1711,  1711,  1711,   320,  1179,  1179,  1604,  1604,   818,   803,
    3830,  5127,   361,   788,  1711,  1711,  1711,  3531,  3635,  3635,
    1426,  1426,  3710,  3710,   819,   832,  2018,   798,  1711,  1711,
    1711,   320,  3665,  3665,  3714,  3714,  4536,  4549,  2146,  2166,
     520,  3385,   380,  3325,   850,   814,  1670,  1670,   295,   862,
    1711,   773,  1328,    65,  1595,  1984,   864,  1027,  2688,   833,
    1711,  1711,  1711,   320,  3680,  3680,  3729,  3729,   869,  1084,
    3843,  4066,   139,   865,   843,  1711,  1711,  1711,   320,  3473,
    3560,  3560,  3650,  3650,  3695,  3695,  3744,  3744,   523,  3197,
    3229,   879,   880,   889,   893,  4583,  4596,   894,   915,   916,
     923,   524,  4630,  4643,  3071,  3103,   926,   929,   933,   934,
     533,  3135,  3167,  3769,  1431,  1461,   943,   948,   955,   956,
     544,  1475,  1495,  1566,  1576,  5160,  5173,   959,   960,   968,
     970,   458,  5481,  5514,  5206,  5219,  5252,  5265,  2259,  2292,
     975,   976,   984,   986,   552,  2329,  2358,  2391,  2424,  5298,
    3261,  2051,   999,  1000,  1006,   895,  2225,  1007,  1396,  1010,
    3357,  2720,  2752,  1020,  1021,  1028,  1041,   554,  2784,  2816,
    2848,  2880,  4079,  4113,  3473,  1049,  1051,  1055,  1056,   564,
     567,   202,   207,  4865,  4878,  4126,  4160,  4173,  4207,  3293,
    3816,  3864,  3912,  3959,  4677,  4690,  4724,  4737,  4771,  3199,
    3231,  3263,  3295,  3321,  1629,  1642,  1651,  1663,  1686,  5311,
    5344,  5357,  5390,  2457,  2490,  2523,  2556,  2589,  2258,  1022,
    1033,  1059,  2291,  3357,  3414,  2324,  2357,  2912,  2944,  2976,
    3008,  3040,   568,  4220,  4254,  4267,  4301,  4314,  2390,  2423,
    2456,  2489,  3357,   584,  3357,  2522,  3357,  2555,  2588
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -335,  -335,  -335,   930,  -335,  -335,  -335,  -335,     0,   -53,
    -335,  -199,   -20,  -166,  -164,  -334,    14,  -117,   -65,    31,
    -103,   -98,  -143,   -39,    -6,   -23,    92,  -229,   186,   -29,
    -240,  1750,   -17,   445,  1503,  1782,  1050,  1635,  1445,   840
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    15,    21,    42,    12,
      17,   118,    43,    26,    27,    44,    45,    46,    47,    48,
     110,   111,   112,   113,   248,   249,   250,   127,   251,   252,
     133,   105,   231,   232,   106,   233,   234,   235,   236,   237
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    24,   217,     6,   334,   298,   171,   147,    85,    49,
     -52,   399,   284,   348,   469,   349,    64,   -48,    90,   375,
      79,   398,   -48,   -48,    87,    -2,     9,    49,    80,   -48,
     193,     7,   -52,    -8,     1,   -12,   210,   210,   -52,   210,
      64,    86,   -52,   124,   122,    19,     1,     8,   285,   170,
     -39,    20,   -39,   -39,    90,   460,   253,   299,    82,   -54,
     121,    13,   271,    64,   -52,   461,   193,   -39,   -39,   -39,
     -39,   540,   -10,   -39,   -39,   -39,   123,   -39,   -39,   -39,
     -39,   -39,   173,   420,    64,    64,    64,    64,    14,   530,
     -39,   -54,   -54,   253,    90,    90,   384,   385,    90,   463,
      87,   159,   297,   123,   161,   301,   193,   193,   335,   462,
     193,    79,    18,    23,   -56,   -76,   193,   158,   340,   432,
     -56,   423,   296,   424,   337,    -9,    49,   210,   -54,   315,
     341,    -9,   253,   -55,   -54,    22,   157,    25,   271,    88,
      -9,   336,   125,   126,    51,   -55,   -56,   -56,    -5,    -5,
     315,   -55,    49,   300,    52,    53,    49,   165,   148,    49,
     -54,   -54,   481,   149,   -64,   -55,   -55,   210,   193,    -5,
     -64,   -46,   490,   -64,   -64,    88,   -46,   -55,   -55,    -6,
      -6,   210,   210,   175,   500,   -64,   138,   177,   280,   281,
     178,    92,   -64,   -64,   -64,   -64,   -64,   -64,   -50,   -15,
      -6,   271,   210,   -50,   468,   -15,   -47,   -20,   -51,   -20,
     -22,   -47,   524,   -53,   -51,    88,    88,   392,   -51,   -53,
     -56,   210,   253,   253,   -20,   -20,   -20,   -20,    54,    55,
     -20,   -20,   -20,    89,   -20,   -20,   -20,   -20,   -20,   338,
     -51,   461,   210,   271,   547,   -53,   -53,   -20,   125,   126,
     -51,   124,   -56,   -56,    72,    93,   -53,    -7,    -7,   559,
     433,   193,   193,   210,   210,   271,   -52,   -14,   253,    89,
      90,   -52,   399,   -14,    73,    64,    87,    74,    -7,   422,
     -54,    75,   193,    -4,    -4,   -54,   210,   315,   -53,   -53,
     154,    76,    77,    86,   -18,   340,   155,   -52,   397,    78,
     -18,   452,   -12,    94,    -4,   210,   341,   341,   335,    89,
      89,   -54,   -54,   160,    -3,    -3,   383,   -80,   340,   -93,
     -93,   -93,   -93,   463,   337,   259,   -19,   134,   538,   260,
     341,    49,   -19,   339,   176,    -3,   -78,   261,   -93,   -79,
     347,   336,   262,   263,   271,   193,   193,   100,   264,   265,
     266,   267,   -16,    56,   271,   210,   210,    57,   -16,   -17,
     268,   269,   270,   -80,   114,   -17,   271,    16,   -55,   -80,
     513,   -77,   135,   -55,   511,   535,   180,   181,   182,   183,
     253,   253,   253,   253,   253,   253,   253,   -51,    61,    62,
      63,    88,   -51,   136,   271,   271,   271,   271,   271,   -55,
     -55,   -13,   -13,   -11,   -11,   -76,    49,   412,   413,   210,
     210,   -76,   -49,   137,   253,    64,   338,   -49,   -51,   397,
     421,   143,   -13,   298,   -11,   149,   271,   315,   315,   315,
     315,   340,   340,   340,   564,   604,   144,   337,   562,   338,
     284,   271,   271,   341,   341,   341,   341,   341,   341,   341,
     341,   145,    49,   150,   561,   -23,   -23,   -80,   -78,   -21,
     -21,   334,   -80,   -56,   -78,   -53,   -79,   -77,   -56,   -78,
     -53,    50,   -79,   -77,   -78,   299,   -23,   151,    65,   -79,
     -21,   -46,   493,    82,   -79,    89,   298,   -46,   155,    50,
     125,   126,   194,   152,   -56,   -56,   -53,   -53,   211,   211,
     153,   211,    65,   -77,   156,   298,   623,   298,   -77,   298,
     339,   371,   -93,    49,   -93,   -93,   -93,   -93,   254,   162,
     297,   253,   163,   301,   272,    65,   529,   167,   194,   -47,
     578,   -70,   155,   339,   164,   -47,   155,   271,   299,   583,
     296,   -76,   101,   102,    82,   155,    65,    65,    65,    65,
     588,   350,   338,   338,   606,   254,   155,   299,   597,   299,
     611,   299,   -72,   -73,   155,   335,   155,   302,   194,   194,
     617,   300,   194,   -50,   -49,   340,   155,   -74,   194,   -50,
     -49,   337,   -75,   297,   512,   -71,   301,   341,    50,   211,
     626,   316,   342,   351,   254,   352,   347,   353,   336,   357,
     272,   358,   297,   296,   297,   301,   297,   301,   -76,   301,
     280,   281,   316,   476,    50,   280,   281,   621,    50,   359,
     360,    50,   296,   -80,   296,   485,   296,   280,   281,   211,
     194,   -78,   -79,   367,   300,   368,   625,   369,   627,   495,
     628,   280,   281,   211,   211,   370,   339,   339,   563,   -37,
     -77,   -37,   -37,   300,   374,   300,   218,   300,   -93,   -93,
     -93,   -93,   -93,   272,   211,   -80,   -37,   -37,   -37,   -37,
     -78,   379,   -37,   -37,   -37,   380,   -37,   -37,   -37,   -37,
     -37,   -37,   -79,   211,   254,   254,   381,   382,   -77,   -37,
     393,   -37,   394,   -37,   -37,   -91,   338,   -91,   -91,   -91,
     -91,   -91,   395,   396,   211,   272,   407,   408,   -37,   -37,
     -37,   -37,   409,   410,   -37,   -37,   -37,   425,   -37,   -37,
     -37,   -37,   -37,   194,   194,   211,   211,   272,   426,   427,
     254,   -37,   428,   -26,   430,   -26,   -26,    65,   -91,   -91,
     -91,   -91,   -91,   -91,   194,   431,   434,   439,   211,   316,
     -26,   -26,   -26,   -26,   435,   440,   -26,   -26,   -26,   441,
     -26,   -26,   -26,   -26,   -26,   -26,   442,   211,   342,   342,
     454,   453,   -91,   -26,   -91,   -91,   -91,   -91,   238,   455,
     107,   -92,   239,   -92,   -92,   -92,   -92,   240,   456,   457,
     339,   470,   342,    50,   108,   241,   184,   471,   475,   477,
     185,   242,   243,   244,   245,   484,   272,   194,   194,   506,
     486,   280,   281,   246,   109,   247,   272,   211,   211,   186,
     187,   188,   189,   494,   505,   518,   198,   496,   272,   507,
     199,   190,   191,   192,   -91,   -91,   -91,   -91,   519,   520,
     280,   281,   254,   254,   254,   254,   254,   254,   254,   203,
     204,   205,   206,   -91,   531,   532,   272,   272,   272,   272,
     272,   207,   208,   209,   -92,   -92,   -92,   -92,    50,   536,
     541,   211,   211,    71,   543,   552,   254,    65,   554,   -81,
     -81,   -81,   -81,   -92,   555,   570,   571,   197,   272,   316,
     316,   316,   316,   216,   216,   572,   216,    99,   -81,   573,
     574,    56,   602,   272,   272,   342,   342,   342,   342,   342,
     342,   342,   342,   258,    50,   -82,   -82,   -82,   -82,   277,
      71,   575,   576,   197,   180,   181,   182,   183,   -28,   577,
     -28,   -28,   579,    10,   -82,   580,    61,    62,    63,   581,
     582,    71,    71,   141,   142,   -28,   -28,   -28,   -28,   584,
     258,   -28,   -28,   -28,   585,   -28,   -28,   -28,   -28,   -28,
     -28,   586,   587,   197,   197,   589,   590,   197,   -28,   -95,
     -95,   -95,   -95,   197,   591,    50,   592,   -86,   -86,   386,
     387,   593,   594,   254,   216,   302,   321,   346,   -95,   258,
     595,   -27,   596,   -27,   -27,   277,   -86,   411,   -93,   272,
     -93,   -93,   -93,   -93,   -93,   599,   600,   321,   -27,   -27,
     -27,   -27,   601,   603,   -27,   -27,   -27,   605,   -27,   -27,
     -27,   -27,   -27,   -27,   216,   356,   607,   608,   -44,   618,
     -44,   -27,   -44,   542,   609,   280,   281,   -44,   216,   366,
     619,   -76,   444,   445,   -44,   -44,   -76,   610,   302,   342,
     184,   -44,   -44,   -44,   -44,   613,     0,   614,   277,   216,
     378,   615,   616,   -44,   -44,   -44,   620,   302,     0,   302,
       0,   302,     0,   186,   187,   188,   189,     0,   216,   391,
     258,     0,     0,    68,     0,   190,   191,   192,     0,     0,
     553,   -59,   280,   281,     0,   -59,     0,   195,     0,   216,
     406,     0,     0,   213,   213,     0,   213,    68,   -59,     0,
       0,   198,     0,     0,   -59,   -59,   -59,   -59,   197,   197,
     216,   216,   277,   255,     0,   258,   -59,   -59,   -59,   274,
      68,     0,    71,   195,   203,   204,   205,   206,     0,   197,
       0,     0,     0,   216,   438,     0,   207,   208,   209,     0,
       0,    68,    68,    68,    68,   -60,     0,     0,     0,   -60,
     255,     0,   216,   451,   346,     0,   -89,   -89,   -89,   -89,
       0,     0,   -60,   195,   195,     0,     0,   195,   -60,   -60,
     -60,   -60,     0,   195,   219,   -89,     0,   346,   220,     0,
     -60,   -60,   -60,     0,   213,     0,   318,   343,     0,   255,
       0,   277,   482,   483,     0,   274,     0,   224,   225,   226,
     227,   277,   491,   492,     0,     0,     0,   318,     0,   228,
     229,   230,     0,   277,     0,     0,   503,   504,   -90,   -90,
     -90,   -90,     0,     0,   213,   195,     0,   258,   258,   258,
     258,   258,   516,   517,     0,     0,     0,   -90,   213,   213,
       0,   277,   277,   277,   527,   528,   184,     0,     0,   -81,
     185,   -81,   -81,   -81,   -81,    83,   216,   216,   274,   213,
       0,   258,    71,    84,   -91,   -91,   -91,   -91,   -91,   186,
     187,   188,   189,   277,   321,   321,   550,   551,   213,   255,
     255,   190,   191,   192,   -31,     0,   -31,   -31,   277,   277,
     346,   346,   346,   346,   346,   346,   567,   568,     0,   213,
     274,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   195,   195,
     213,   213,   274,    56,   -31,   255,   -82,    57,   -82,   -82,
     -82,   -82,    68,     0,     0,    58,     0,     0,     0,   195,
      59,    60,     0,   213,   318,     0,   180,   181,   182,   183,
       0,     0,   -26,     0,   -26,   -26,     0,     0,    61,    62,
      63,     0,   213,   343,   343,     0,     0,     0,   258,   -26,
     -26,   -26,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   277,     0,     0,   343,     0,     0,
       0,   238,   -26,   283,   -95,   239,   -95,   -95,   -95,   -95,
     240,   274,   195,   195,     0,     0,     0,   108,   241,     0,
       0,   274,   213,   213,   242,   243,   244,   245,     0,     0,
       0,   238,     0,   274,     0,   239,   246,   109,   247,   -83,
     -83,   -83,   -83,     0,   346,     0,     0,   255,   255,   255,
     255,   255,   255,   255,   242,   243,   244,   245,   -83,     0,
       0,   274,   274,   274,   274,   274,   246,   390,   247,   -94,
     -94,   -94,   -94,     0,     0,     0,   213,   213,    70,     0,
       0,   255,    68,   -84,   -84,   386,   387,     0,   -94,     0,
       0,     0,   196,   274,   318,   318,   318,   318,   215,   215,
       0,   215,   -84,   -85,   -85,   386,   387,     0,   274,   274,
     343,   343,   343,   343,   343,   343,   343,   343,   257,     0,
       0,     0,   -85,     0,   276,    70,   322,   169,   196,   -86,
     323,   -86,   -86,   372,   373,   324,    66,   -92,   -92,   -92,
     -92,   -92,   325,   326,     0,     0,   139,   140,     0,   327,
     328,   329,   330,     0,     0,   257,    95,    96,     0,     0,
       0,   331,   332,   333,     0,     0,     0,     0,   196,   196,
       0,     0,   196,     0,   -87,   -87,   -87,   -87,   196,     0,
       0,     0,   119,   120,   -88,   -88,   -88,   -88,   255,   215,
       0,   320,   345,   -87,   257,     0,   -29,     0,   -29,   -29,
     276,     0,     0,   -88,   274,     0,     0,     0,     0,   219,
       0,     0,   320,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   215,
       0,     0,   224,   225,   226,   227,   -29,   -72,   -72,   -72,
     -72,     0,     0,   215,   228,   229,   230,   166,     0,   168,
     -73,   -73,   -73,   -73,   343,     0,   -72,     0,   172,   -74,
     -74,   -74,   -74,   276,   215,     0,     0,     0,    69,   -73,
     174,   -75,   -75,   -75,   -75,   198,     0,     0,   -74,   199,
       0,     0,    91,   215,     0,   257,     0,   200,   214,   214,
     -75,    98,   201,   202,   -71,   -71,   -71,   -71,   203,   204,
     205,   206,     0,     0,   215,     0,     0,     0,   256,     0,
     207,   208,   209,   -71,   275,    69,   219,     0,    91,     0,
     220,   119,     0,   416,   417,   418,   419,   276,   221,     0,
     257,     0,     0,   222,   223,     0,     0,    70,     0,   224,
     225,   226,   227,     0,   196,   256,     0,     0,   215,     0,
       0,   228,   229,   230,     0,     0,     0,     0,    91,    91,
       0,   -89,    91,   -89,   -89,   -89,   -89,   215,    91,   345,
       0,     0,     0,     0,   -38,     0,     0,     0,   -38,   214,
       0,   319,   344,   -38,   256,   119,     0,     0,     0,     0,
     275,   -38,   345,     0,     0,   429,     0,   -38,   -38,   -38,
     -38,     0,   319,     0,     0,     0,   276,     0,     0,   -38,
     -38,   -38,     0,     0,     0,    67,   276,     0,   -92,   355,
     -92,   -92,   -92,   -92,   -92,   115,   116,   117,   276,   501,
     502,     0,     0,   365,     0,   212,   212,     0,    97,     0,
       0,     0,   257,   257,   257,   514,   515,   -92,   -92,   -92,
     -92,   -92,   -92,   275,   377,     0,   276,   525,   526,     0,
       0,   273,    67,   443,   119,   -93,   -93,   -93,   -93,   -93,
     -93,   215,   215,   389,   119,   256,   257,    70,   -81,     0,
     -81,   -81,   -81,   -81,   -81,     0,   119,     0,   276,   548,
     549,     0,     0,   -82,   405,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   276,   276,   345,   345,   345,   345,   565,
     566,     0,     0,     0,   119,     0,     0,   275,     0,   184,
     256,     0,     0,   185,     0,     0,   212,    69,   317,   533,
     534,     0,     0,     0,    91,   539,    84,   273,   437,     0,
       0,     0,   186,   187,   188,   189,   119,     0,   -90,   317,
     -90,   -90,   -90,   -90,   190,   191,   192,   449,     0,   344,
       0,   119,   560,     0,     0,   -95,   354,   -95,   -95,   -95,
     -95,   -95,   -86,     0,   -86,   -86,   414,   415,   -86,     0,
     364,     0,   344,   257,     0,   -30,     0,   -30,   -30,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   275,     0,     0,   276,
     273,   376,   -30,   -30,   -30,   -30,   275,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   275,     0,
     388,     0,     0,     0,   -90,   -30,   -90,   -90,   -90,   -90,
     -90,     0,   256,   256,   256,   -81,   -81,   -81,   -81,   -81,
     -81,   404,     0,     0,     0,     0,   275,     0,     0,   345,
       0,     0,   -23,     0,   -23,   -23,     0,   612,     0,     0,
       0,   214,   214,     0,   273,     0,   256,    69,     0,   -23,
     -23,   -23,   -23,     0,    67,   -23,   -23,   -23,   275,   -23,
     -23,   -23,   -23,   -23,   -23,   436,   -82,   -82,   -82,   -82,
     -82,   -82,   -23,   275,   275,   344,   344,   344,   344,     0,
       0,   472,   473,   474,   448,     0,     0,     0,   478,   479,
     480,     0,   -45,     0,   -45,     0,   -45,     0,   487,   488,
     489,   -45,   -95,   -95,   -95,   -95,   -95,   -95,   -45,   -45,
     497,   498,   499,     0,     0,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,   273,   508,   509,   510,   -45,   -45,   -45,
       0,     0,   -84,   273,   -84,   -84,   372,   373,   521,   522,
     523,     0,   -44,   -44,     0,   273,   -44,     0,     0,     0,
       0,   -44,   -85,   256,   -85,   -85,   372,   373,   -44,   -44,
     537,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   275,
     544,   545,   546,   273,     0,     0,   -65,   -44,   -44,   -44,
     -65,     0,     0,     0,     0,   556,   557,   558,   212,   212,
       0,     0,     0,   -65,    67,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,     0,     0,   273,   -36,     0,   -36,   -36,
       0,   -65,   -65,   -65,   -81,   -81,   -81,   -81,   -81,   344,
     273,   273,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -21,
       0,   -21,   -21,     0,     0,   -83,   -36,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -13,     0,   -13,   -13,     0,     0,   -94,   -21,
     -94,   -94,   -94,   -94,   -94,     0,     0,     0,     0,   -13,
     -13,   -13,   -13,     0,     0,   -13,   -13,   -13,     0,   -13,
     -13,   -13,   -13,   -13,   -13,   -35,     0,   -35,   -35,     0,
       0,     0,   -13,     0,     0,   -84,   273,   -84,   -84,   414,
     415,   -84,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -39,     0,
     -39,   -39,     0,     0,   -85,   -35,   -85,   -85,   414,   415,
     -85,     0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     624,   -32,     0,   -32,   -32,     0,     0,   -87,   -39,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -33,     0,   -33,   -33,     0,     0,
     -88,   -32,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -34,     0,   -34,
     -34,     0,     0,   -72,   -33,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -41,     0,   -41,   -41,     0,     0,   -73,   -34,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -42,     0,   -42,   -42,     0,     0,   -74,
     -41,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -40,     0,   -40,   -40,
       0,     0,   -75,   -42,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -43,
       0,   -43,   -43,     0,     0,   -71,   -40,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -28,     0,   -28,   -28,     0,     0,     0,   -43,
     -86,   -86,   -86,   446,   447,   -86,     0,     0,     0,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,    28,     0,   179,    81,     0,     0,
       0,     0,   -28,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,    29,    30,    31,    32,     0,     0,    33,    34,    35,
       0,    36,    37,    38,    39,    40,   -25,     0,   -25,   -25,
       0,     0,     0,     0,    41,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -27,     0,
     -27,   -27,     0,     0,     0,     0,   -25,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -31,     0,   -31,   -31,     0,     0,     0,     0,   -27,   -94,
     -94,   -94,   -94,   -94,   -94,     0,     0,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -24,     0,   -24,   -24,     0,     0,     0,     0,
     -31,   -84,   -84,   -84,   446,   447,   -84,     0,     0,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -29,     0,   -29,   -29,     0,     0,
       0,     0,   -24,   -85,   -85,   -85,   446,   447,   -85,     0,
       0,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -30,     0,   -30,   -30,
       0,     0,     0,     0,   -29,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -36,     0,
     -36,   -36,     0,     0,     0,     0,   -30,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -35,     0,   -35,   -35,     0,     0,     0,     0,   -36,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -32,     0,   -32,   -32,     0,     0,     0,     0,
     -35,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -33,     0,   -33,   -33,     0,     0,
       0,     0,   -32,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -34,     0,   -34,   -34,
       0,     0,     0,     0,   -33,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -41,     0,
     -41,   -41,     0,     0,     0,     0,   -34,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -42,     0,   -42,   -42,     0,     0,     0,   -83,   -41,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,     0,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -40,     0,   -40,   -40,     0,     0,     0,   -94,
     -42,   -94,   -94,   -94,   -94,     0,     0,     0,     0,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -43,     0,   -43,   -43,     0,     0,
       0,   -87,   -40,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -13,     0,   -13,   -13,
       0,     0,     0,   -88,   -43,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -13,   -13,   -13,   -13,     0,     0,   -13,
     -13,   -13,     0,   -13,   -13,   -13,   -13,   -13,    28,     0,
     179,   569,     0,     0,     0,   -72,   -13,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,    34,    35,     0,    36,    37,    38,    39,    40,
     -23,     0,   -23,   -23,     0,     0,     0,   -73,    41,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,    28,     0,   179,   598,     0,     0,     0,   -74,
     -23,   -74,   -74,   -74,   -74,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,    33,    34,    35,     0,    36,
      37,    38,    39,    40,   -21,     0,   -21,   -21,     0,     0,
       0,   -75,    41,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,    28,   -71,   179,   -71,
     -71,   -71,   -71,     0,   -21,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
      34,    35,     0,    36,    37,    38,    39,    40,   286,     0,
     287,   -95,   -95,   -95,   -95,   -95,    41,   -86,   -86,   -86,
     103,   104,     0,     0,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,     0,    36,    37,    38,    39,    40,
     -45,   -45,     0,     0,   -45,     0,     0,     0,   295,   -45,
     -89,   -89,   -89,   -89,   -89,     0,   -45,   -45,   -90,   -90,
     -90,   -90,   -90,   -45,   -45,   -45,   -45,     0,     0,   322,
     622,     0,     0,   323,     0,   -45,   -45,   -45,   324,   -83,
     -83,   -83,   -83,   -83,   303,   325,   326,     0,   304,     0,
       0,     0,   327,   328,   329,   330,   305,     0,     0,     0,
       0,   306,   307,     0,   331,   332,   333,   308,   309,   310,
     311,     0,     0,   238,     0,     0,     0,   239,     0,   312,
     313,   314,   240,   -94,   -94,   -94,   -94,   -94,   259,   108,
     241,     0,   260,     0,     0,     0,   242,   243,   244,   245,
     261,     0,     0,     0,     0,   262,   263,     0,   246,   109,
     247,   264,   265,   266,   267,     0,     0,   322,     0,     0,
       0,   323,     0,   268,   269,   270,   324,     0,   -63,     0,
     278,   279,     0,   325,   326,     0,     0,   -63,   -63,     0,
     327,   328,   329,   330,     0,     0,   238,     0,     0,   -63,
     239,     0,   331,   332,   333,   240,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   241,   -84,   -84,   -84,   103,   104,   242,
     243,   244,   245,     0,     0,   322,     0,     0,     0,   323,
       0,   246,   390,   247,   324,   -85,   -85,   -85,   103,   104,
     -66,     0,   326,     0,   -66,     0,     0,     0,   327,   328,
     329,   330,     0,     0,     0,   -69,     0,   -66,     0,   -69,
     331,   450,   333,   -66,   -66,   -66,   -66,     0,     0,     0,
     -67,     0,   -69,     0,   -67,   -66,   -66,   -66,   -69,   -69,
     -69,   -69,     0,     0,     0,   -68,     0,   -67,     0,   -68,
     -69,   -69,   -69,   -67,   -67,   -67,   -67,     0,     0,     0,
     238,     0,   -68,     0,   239,   -67,   -67,   -67,   -68,   -68,
     -68,   -68,     0,     0,     0,   322,     0,   241,     0,   323,
     -68,   -68,   -68,   242,   243,   244,   245,     0,     0,     0,
     259,     0,   326,     0,   260,   246,   390,   247,   327,   328,
     329,   330,     0,     0,     0,   303,     0,     0,     0,   304,
     331,   450,   333,   264,   265,   266,   267,     0,     0,     0,
     322,     0,     0,     0,   323,   268,   269,   270,   308,   309,
     310,   311,     0,     0,     0,   238,     0,     0,     0,   259,
     312,   313,   314,   327,   328,   329,   330,   -87,   -87,   -87,
     -87,   -87,     0,     0,   303,   331,   450,   333,   242,   243,
     244,   245,   264,   265,   266,   267,     0,     0,     0,   322,
     246,   390,   247,     0,   268,   269,   270,   308,   309,   310,
     311,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,   312,
     313,   314,   327,   328,   329,   330,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   331,   450,   333,   282,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   146,     0,   -93,   -93,     0,
     458,   -93,     0,   -93,   -93,   -93,   -93,   -93,   459,   -93,
     -93,   -93,     0,     0,     0,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -72,   -72,   -72,   -72,   -72,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   282,     0,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,   -93,   -93,     0,   458,   -93,
       0,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -73,   -73,   -73,   -73,   -73,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   361,   -93,     0,   -93,   -93,   -93,   -93,
       0,     0,     0,   -93,   -93,     0,     0,   -91,     0,   -91,
     -91,   -91,   -91,   -91,     0,   -93,   -91,   -91,     0,     0,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -91,   -74,
     -74,   -74,   -74,   -74,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -92,     0,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -92,   -92,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,     0,   -92,   -81,   -81,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -81,   -75,   -75,   -75,   -75,
     -75,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -82,     0,
     -82,   -82,   -82,   -82,   -82,     0,     0,   -82,   -82,     0,
       0,   -95,     0,   -95,   -95,   -95,   -95,   -95,     0,   -82,
     -95,   -95,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -95,     0,     0,     0,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -86,     0,   -86,   -86,   466,
     467,   -86,     0,     0,   -86,   -86,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,     0,   -86,   -89,   -89,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -89,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,
       0,   -90,   -90,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,   -83,     0,   -90,   -83,   -83,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -94,
       0,   -94,   -94,   -94,   -94,   -94,     0,     0,   -94,   -94,
       0,     0,   -84,     0,   -84,   -84,   466,   467,   -84,     0,
     -94,   -84,   -84,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -84,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,     0,   -85,   -85,
     466,   467,   -85,     0,     0,   -85,   -85,     0,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,     0,   -85,   -87,   -87,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -87,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,     0,   -88,   -88,   -88,   -88,   -88,
       0,     0,   -88,   -88,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,     0,   -88,   -72,   -72,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -72,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,     0,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
     -73,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,
       0,   -73,   -74,   -74,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -75,   -75,     0,     0,
     -71,     0,   -71,   -71,   -71,   -71,   -71,     0,   -75,   -71,
     -71,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -71,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -91,     0,   -91,   -91,   -91,   -91,
       0,     0,     0,   -91,   -91,     0,     0,   -92,     0,   -92,
     -92,   -92,   -92,     0,     0,   -91,   -92,   -92,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,
       0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -81,     0,   -81,   -81,   -81,   -81,     0,     0,     0,
     -81,   -81,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,
       0,     0,   -81,   -82,   -82,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -95,     0,
     -95,   -95,   -95,   -95,     0,     0,     0,   -95,   -95,     0,
       0,   -86,     0,   -86,   -86,   362,   363,     0,     0,   -95,
     -86,   -86,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -86,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -89,     0,   -89,   -89,   -89,
     -89,     0,     0,     0,   -89,   -89,     0,     0,   -90,     0,
     -90,   -90,   -90,   -90,     0,     0,   -89,   -90,   -90,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,
       0,     0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -84,     0,   -84,   -84,   362,   363,     0,     0,
       0,   -84,   -84,     0,     0,   -85,     0,   -85,   -85,   362,
     363,     0,     0,   -84,   -85,   -85,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -83,
       0,   -83,   -83,   -83,   -83,     0,     0,     0,   -83,   -83,
       0,     0,   -94,     0,   -94,   -94,   -94,   -94,     0,     0,
     -83,   -94,   -94,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -94,     0,     0,     0,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -87,     0,   -87,   -87,
     -87,   -87,     0,     0,     0,   -87,   -87,     0,     0,   -88,
       0,   -88,   -88,   -88,   -88,     0,     0,   -87,   -88,   -88,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -72,     0,   -72,   -72,   -72,   -72,     0,
       0,     0,   -72,   -72,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,     0,     0,   -72,   -73,   -73,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,     0,   -74,   -74,   -74,   -74,     0,     0,     0,   -74,
     -74,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,     0,
       0,   -74,   -75,   -75,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -75,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -71,     0,   -71,
     -71,   -71,   -71,     0,     0,     0,   -71,   -71,     0,     0,
     -63,     0,   464,   465,     0,     0,   -63,     0,   -71,   -63,
     -63,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -63,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -58,     0,     0,     0,     0,     0,
     -58,     0,     0,   128,   129,     0,     0,   -62,     0,     0,
       0,     0,     0,   -62,     0,   130,   -62,   -62,     0,     0,
       0,     0,   -58,   -58,   131,   132,   -58,   -58,   -62,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -57,     0,     0,     0,     0,     0,   -57,     0,     0,
     128,   129,     0,     0,   -61,     0,     0,     0,     0,     0,
     -61,     0,   130,   -61,   -61,     0,     0,   -64,     0,   -57,
     -57,   131,   132,   -57,   -57,   -61,   -64,   -64,     0,     0,
     -58,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -64,   128,
     129,     0,     0,   -62,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   130,   -62,   -62,     0,     0,   -57,     0,   -58,   -58,
     131,   132,   -58,   -58,   -62,   128,   129,     0,     0,   -61,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   130,   -61,   -61,
       0,     0,     0,     0,   -57,   -57,   131,   132,   -57,   -57,
     -61,     0,     0,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,   -91,   -91,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -91,   -92,   -92,     0,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,     0,     0,
       0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   -81,   -81,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -81,
     -82,   -82,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,   -95,   -95,     0,     0,     0,   -86,   -86,
     -86,   402,   403,   -86,     0,   -95,   -86,   -86,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -86,     0,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   -89,
     -89,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -89,   -90,   -90,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -90,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -83,   -83,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,     0,   -83,   -94,   -94,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -94,     0,     0,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -84,   -84,   -84,   402,   403,   -84,     0,
       0,   -84,   -84,     0,     0,     0,   -85,   -85,   -85,   402,
     403,   -85,     0,   -84,   -85,   -85,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -87,
     -88,   -88,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -71,   -71,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -71,   -72,   -72,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
     -73,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -73,   -74,   -74,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,   -75,   -75,     0,     0,     0,
     -63,   400,   401,     0,     0,   -63,     0,   -75,   -63,   -63,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -63,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -64,     0,     0,     0,     0,   -64,   -58,
       0,   -64,   -64,     0,   -58,     0,     0,   128,   129,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,   130,
     -64,   -64,   -64,   -64,   -64,   -64,   -58,   -58,   131,   132,
     -58,   -58,   -62,     0,     0,     0,     0,   -62,   -57,     0,
     -62,   -62,     0,   -57,     0,     0,   128,   129,     0,     0,
       0,     0,   -62,     0,     0,     0,     0,     0,   130,   -62,
     -62,   -62,   -62,   -62,   -62,   -57,   -57,   131,   132,   -57,
     -57,   -61,     0,     0,     0,     0,   -61,     0,     0,   -61,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61
};

static const yytype_int16 yycheck[] =
{
       0,    21,    55,     3,   147,   122,   149,   110,    47,    26,
       6,   251,   110,   179,   348,   179,    33,     7,    47,   218,
       5,   250,    12,     6,    47,     0,     1,    44,    13,    12,
      47,    41,     6,     5,    21,     7,    53,    54,    12,    56,
      57,    47,    38,    39,     6,     6,    21,     0,    38,   147,
       1,    12,     3,     4,    83,    38,    73,   122,    44,     6,
      83,     5,    79,    80,    38,    39,    83,    18,    19,    20,
      21,     6,     3,    24,    25,    26,    38,    28,    29,    30,
      31,    32,    33,   282,   101,   102,   103,   104,     7,   423,
      41,    38,    39,   110,   123,   124,     8,     9,   127,   339,
     123,   124,   122,    38,   133,   122,   123,   124,   147,   338,
     127,     5,    41,     3,     6,    27,   133,   123,   147,    13,
      12,   287,   122,   287,   147,     6,   143,   144,     6,   146,
     147,    12,   149,     6,    12,    21,   122,    41,   155,    47,
      21,   147,    34,    35,     4,     6,    38,    39,     0,     1,
     167,    12,   169,   122,     5,     5,   173,   143,     7,   176,
      38,    39,   361,    12,     6,    38,    39,   184,   185,    21,
      12,     7,   371,    15,    16,    83,    12,    38,    39,     0,
       1,   198,   199,   169,   383,    27,     6,   173,     8,     9,
     176,     7,    34,    35,    36,    37,    38,    39,     7,     6,
      21,   218,   219,    12,   347,    12,     7,     1,     6,     3,
       4,    12,   411,     6,    12,   123,   124,   240,     6,    12,
       6,   238,   239,   240,    18,    19,    20,    21,     5,    41,
      24,    25,    26,    47,    28,    29,    30,    31,    32,   147,
      38,    39,   259,   260,   443,    38,    39,    41,    34,    35,
      38,    39,    38,    39,     5,     7,     6,     0,     1,   458,
     299,   278,   279,   280,   281,   282,     7,     6,   285,    83,
     299,    12,   512,    12,     5,   292,   299,     5,    21,   285,
       7,     5,   299,     0,     1,    12,   303,   304,    38,    39,
       6,     5,     5,   299,     6,   324,    12,    38,    39,     5,
      12,   324,     7,    41,    21,   322,   323,   324,   347,   123,
     124,    38,    39,   127,     0,     1,     5,     7,   347,     8,
       9,    10,    11,   563,   347,     5,     6,     6,   431,     9,
     347,   348,    12,   147,     6,    21,     7,    17,    27,     7,
      12,   347,    22,    23,   361,   362,   363,     7,    28,    29,
      30,    31,     6,     5,   371,   372,   373,     9,    12,     6,
      40,    41,    42,     6,    41,    12,   383,    21,     7,    12,
     399,     7,     6,    12,   397,   428,    28,    29,    30,    31,
     397,   398,   399,   400,   401,   402,   403,     7,    40,    41,
      42,   299,    12,     6,   411,   412,   413,   414,   415,    38,
      39,     0,     1,     0,     1,     6,   423,     8,     9,   426,
     427,    12,     7,     6,   431,   432,   324,    12,    38,    39,
       7,     6,    21,   540,    21,    12,   443,   444,   445,   446,
     447,   460,   461,   462,   463,   538,    27,   460,   461,   347,
     538,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,    41,   469,     6,   460,     0,     1,     7,     6,     0,
       1,   604,    12,     7,    12,     7,     6,     6,    12,     7,
      12,    26,    12,    12,    12,   540,    21,     6,    33,     7,
      21,     6,     6,   469,    12,   299,   603,    12,    12,    44,
      34,    35,    47,     6,    38,    39,    38,    39,    53,    54,
       6,    56,    57,     7,     7,   622,   604,   624,    12,   626,
     324,     5,     6,   530,     8,     9,    10,    11,    73,     7,
     540,   538,     7,   540,    79,    80,     6,    13,    83,     6,
       6,     6,    12,   347,     7,    12,    12,   554,   603,     6,
     540,     7,     8,     9,   530,    12,   101,   102,   103,   104,
       6,     5,   460,   461,   540,   110,    12,   622,     6,   624,
       6,   626,     7,     7,    12,   604,    12,   122,   123,   124,
       6,   540,   127,     6,     6,   604,    12,     7,   133,    12,
      12,   604,     7,   603,   398,     7,   603,   604,   143,   144,
       6,   146,   147,     5,   149,     5,    12,     5,   604,     5,
     155,     5,   622,   603,   624,   622,   626,   624,     6,   626,
       8,     9,   167,     6,   169,     8,     9,   603,   173,     5,
       5,   176,   622,     6,   624,     6,   626,     8,     9,   184,
     185,     6,     6,     5,   603,     5,   622,     5,   624,     6,
     626,     8,     9,   198,   199,     5,   460,   461,   462,     1,
       6,     3,     4,   622,     7,   624,     5,   626,     7,     8,
       9,    10,    11,   218,   219,    27,    18,    19,    20,    21,
      27,     5,    24,    25,    26,     5,    28,    29,    30,    31,
      32,    33,    27,   238,   239,   240,     5,     5,    27,    41,
       5,     1,     5,     3,     4,     6,   604,     8,     9,    10,
      11,    12,     5,     5,   259,   260,     5,     5,    18,    19,
      20,    21,     5,     5,    24,    25,    26,     5,    28,    29,
      30,    31,    32,   278,   279,   280,   281,   282,     5,     5,
     285,    41,    41,     1,     5,     3,     4,   292,     7,     8,
       9,    10,    11,    12,   299,     5,     7,     5,   303,   304,
      18,    19,    20,    21,     7,     5,    24,    25,    26,     5,
      28,    29,    30,    31,    32,    33,     5,   322,   323,   324,
       5,    41,     6,    41,     8,     9,    10,    11,     5,     5,
       7,     6,     9,     8,     9,    10,    11,    14,     5,     5,
     604,     4,   347,   348,    21,    22,     5,    41,     6,    41,
       9,    28,    29,    30,    31,     6,   361,   362,   363,     6,
      41,     8,     9,    40,    41,    42,   371,   372,   373,    28,
      29,    30,    31,     6,     6,     6,     5,    41,   383,    41,
       9,    40,    41,    42,     8,     9,    10,    11,     6,    41,
       8,     9,   397,   398,   399,   400,   401,   402,   403,    28,
      29,    30,    31,    27,     4,    41,   411,   412,   413,   414,
     415,    40,    41,    42,     8,     9,    10,    11,   423,     7,
       6,   426,   427,    33,    41,     6,   431,   432,    13,     8,
       9,    10,    11,    27,    41,     6,     6,    47,   443,   444,
     445,   446,   447,    53,    54,     6,    56,    57,    27,     6,
       6,     5,     7,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,    73,   469,     8,     9,    10,    11,    79,
      80,     6,     6,    83,    28,    29,    30,    31,     1,     6,
       3,     4,     6,     3,    27,     6,    40,    41,    42,     6,
       6,   101,   102,   103,   104,    18,    19,    20,    21,     6,
     110,    24,    25,    26,     6,    28,    29,    30,    31,    32,
      33,     6,     6,   123,   124,     6,     6,   127,    41,     8,
       9,    10,    11,   133,     6,   530,     6,     8,     9,    10,
      11,     6,     6,   538,   144,   540,   146,   147,    27,   149,
       6,     1,     6,     3,     4,   155,    27,     5,     6,   554,
       8,     9,    10,    11,    12,     6,     6,   167,    18,    19,
      20,    21,     6,     6,    24,    25,    26,     7,    28,    29,
      30,    31,    32,    33,   184,   185,     6,     6,     5,     7,
       7,    41,     9,     6,     6,     8,     9,    14,   198,   199,
       7,     7,     8,     9,    21,    22,    12,     6,   603,   604,
       5,    28,    29,    30,    31,     6,    -1,     6,   218,   219,
     220,     6,     6,    40,    41,    42,     7,   622,    -1,   624,
      -1,   626,    -1,    28,    29,    30,    31,    -1,   238,   239,
     240,    -1,    -1,    33,    -1,    40,    41,    42,    -1,    -1,
       6,     5,     8,     9,    -1,     9,    -1,    47,    -1,   259,
     260,    -1,    -1,    53,    54,    -1,    56,    57,    22,    -1,
      -1,     5,    -1,    -1,    28,    29,    30,    31,   278,   279,
     280,   281,   282,    73,    -1,   285,    40,    41,    42,    79,
      80,    -1,   292,    83,    28,    29,    30,    31,    -1,   299,
      -1,    -1,    -1,   303,   304,    -1,    40,    41,    42,    -1,
      -1,   101,   102,   103,   104,     5,    -1,    -1,    -1,     9,
     110,    -1,   322,   323,   324,    -1,     8,     9,    10,    11,
      -1,    -1,    22,   123,   124,    -1,    -1,   127,    28,    29,
      30,    31,    -1,   133,     5,    27,    -1,   347,     9,    -1,
      40,    41,    42,    -1,   144,    -1,   146,   147,    -1,   149,
      -1,   361,   362,   363,    -1,   155,    -1,    28,    29,    30,
      31,   371,   372,   373,    -1,    -1,    -1,   167,    -1,    40,
      41,    42,    -1,   383,    -1,    -1,   386,   387,     8,     9,
      10,    11,    -1,    -1,   184,   185,    -1,   397,   398,   399,
     400,   401,   402,   403,    -1,    -1,    -1,    27,   198,   199,
      -1,   411,   412,   413,   414,   415,     5,    -1,    -1,     6,
       9,     8,     9,    10,    11,    14,   426,   427,   218,   219,
      -1,   431,   432,    22,     7,     8,     9,    10,    11,    28,
      29,    30,    31,   443,   444,   445,   446,   447,   238,   239,
     240,    40,    41,    42,     1,    -1,     3,     4,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,    -1,   259,
     260,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    -1,   278,   279,
     280,   281,   282,     5,    41,   285,     6,     9,     8,     9,
      10,    11,   292,    -1,    -1,    17,    -1,    -1,    -1,   299,
      22,    23,    -1,   303,   304,    -1,    28,    29,    30,    31,
      -1,    -1,     1,    -1,     3,     4,    -1,    -1,    40,    41,
      42,    -1,   322,   323,   324,    -1,    -1,    -1,   538,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,   554,    -1,    -1,   347,    -1,    -1,
      -1,     5,    41,     7,     6,     9,     8,     9,    10,    11,
      14,   361,   362,   363,    -1,    -1,    -1,    21,    22,    -1,
      -1,   371,   372,   373,    28,    29,    30,    31,    -1,    -1,
      -1,     5,    -1,   383,    -1,     9,    40,    41,    42,     8,
       9,    10,    11,    -1,   604,    -1,    -1,   397,   398,   399,
     400,   401,   402,   403,    28,    29,    30,    31,    27,    -1,
      -1,   411,   412,   413,   414,   415,    40,    41,    42,     8,
       9,    10,    11,    -1,    -1,    -1,   426,   427,    33,    -1,
      -1,   431,   432,     8,     9,    10,    11,    -1,    27,    -1,
      -1,    -1,    47,   443,   444,   445,   446,   447,    53,    54,
      -1,    56,    27,     8,     9,    10,    11,    -1,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,    73,    -1,
      -1,    -1,    27,    -1,    79,    80,     5,     6,    83,     6,
       9,     8,     9,    10,    11,    14,    33,     7,     8,     9,
      10,    11,    21,    22,    -1,    -1,   101,   102,    -1,    28,
      29,    30,    31,    -1,    -1,   110,    53,    54,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,   123,   124,
      -1,    -1,   127,    -1,     8,     9,    10,    11,   133,    -1,
      -1,    -1,    79,    80,     8,     9,    10,    11,   538,   144,
      -1,   146,   147,    27,   149,    -1,     1,    -1,     3,     4,
     155,    -1,    -1,    27,   554,    -1,    -1,    -1,    -1,     5,
      -1,    -1,   167,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,   184,
      -1,    -1,    28,    29,    30,    31,    41,     8,     9,    10,
      11,    -1,    -1,   198,    40,    41,    42,   144,    -1,   146,
       8,     9,    10,    11,   604,    -1,    27,    -1,   155,     8,
       9,    10,    11,   218,   219,    -1,    -1,    -1,    33,    27,
     167,     8,     9,    10,    11,     5,    -1,    -1,    27,     9,
      -1,    -1,    47,   238,    -1,   240,    -1,    17,    53,    54,
      27,    56,    22,    23,     8,     9,    10,    11,    28,    29,
      30,    31,    -1,    -1,   259,    -1,    -1,    -1,    73,    -1,
      40,    41,    42,    27,    79,    80,     5,    -1,    83,    -1,
       9,   218,    -1,   278,   279,   280,   281,   282,    17,    -1,
     285,    -1,    -1,    22,    23,    -1,    -1,   292,    -1,    28,
      29,    30,    31,    -1,   299,   110,    -1,    -1,   303,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,   123,   124,
      -1,     6,   127,     8,     9,    10,    11,   322,   133,   324,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,     9,   144,
      -1,   146,   147,    14,   149,   282,    -1,    -1,    -1,    -1,
     155,    22,   347,    -1,    -1,   292,    -1,    28,    29,    30,
      31,    -1,   167,    -1,    -1,    -1,   361,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    33,   371,    -1,     6,   184,
       8,     9,    10,    11,    12,    75,    76,    77,   383,   384,
     385,    -1,    -1,   198,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,   397,   398,   399,   400,   401,     7,     8,     9,
      10,    11,    12,   218,   219,    -1,   411,   412,   413,    -1,
      -1,    79,    80,     5,   361,     7,     8,     9,    10,    11,
      12,   426,   427,   238,   371,   240,   431,   432,     6,    -1,
       8,     9,    10,    11,    12,    -1,   383,    -1,   443,   444,
     445,    -1,    -1,     6,   259,     8,     9,    10,    11,    12,
      -1,    -1,    -1,   458,   459,   460,   461,   462,   463,   464,
     465,    -1,    -1,    -1,   411,    -1,    -1,   282,    -1,     5,
     285,    -1,    -1,     9,    -1,    -1,   144,   292,   146,   426,
     427,    -1,    -1,    -1,   299,   432,    22,   155,   303,    -1,
      -1,    -1,    28,    29,    30,    31,   443,    -1,     6,   167,
       8,     9,    10,    11,    40,    41,    42,   322,    -1,   324,
      -1,   458,   459,    -1,    -1,     6,   184,     8,     9,    10,
      11,    12,     6,    -1,     8,     9,    10,    11,    12,    -1,
     198,    -1,   347,   538,    -1,     1,    -1,     3,     4,     6,
      -1,     8,     9,    10,    11,    12,   361,    -1,    -1,   554,
     218,   219,    18,    19,    20,    21,   371,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,   383,    -1,
     238,    -1,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,   397,   398,   399,     7,     8,     9,    10,    11,
      12,   259,    -1,    -1,    -1,    -1,   411,    -1,    -1,   604,
      -1,    -1,     1,    -1,     3,     4,    -1,   554,    -1,    -1,
      -1,   426,   427,    -1,   282,    -1,   431,   432,    -1,    18,
      19,    20,    21,    -1,   292,    24,    25,    26,   443,    28,
      29,    30,    31,    32,    33,   303,     7,     8,     9,    10,
      11,    12,    41,   458,   459,   460,   461,   462,   463,    -1,
      -1,   351,   352,   353,   322,    -1,    -1,    -1,   358,   359,
     360,    -1,     5,    -1,     7,    -1,     9,    -1,   368,   369,
     370,    14,     7,     8,     9,    10,    11,    12,    21,    22,
     380,   381,   382,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,   361,   394,   395,   396,    40,    41,    42,
      -1,    -1,     6,   371,     8,     9,    10,    11,   408,   409,
     410,    -1,     5,     6,    -1,   383,     9,    -1,    -1,    -1,
      -1,    14,     6,   538,     8,     9,    10,    11,    21,    22,
     430,    -1,    -1,    -1,    -1,    28,    29,    30,    31,   554,
     440,   441,   442,   411,    -1,    -1,     5,    40,    41,    42,
       9,    -1,    -1,    -1,    -1,   455,   456,   457,   426,   427,
      -1,    -1,    -1,    22,   432,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,   443,     1,    -1,     3,     4,
      -1,    40,    41,    42,     7,     8,     9,    10,    11,   604,
     458,   459,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,     6,    41,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,     6,    41,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,    -1,
      -1,    -1,    41,    -1,    -1,     6,   554,     8,     9,    10,
      11,    12,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,    -1,    -1,     6,    41,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,    -1,    -1,
       6,    41,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,    -1,    -1,     6,    41,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,    -1,    -1,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     1,    -1,     3,     4,    -1,    -1,     6,
      41,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
      -1,    -1,     6,    41,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,     6,    41,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,    -1,    41,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    12,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    12,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    12,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      12,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,     6,    41,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,     6,    41,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,     6,    41,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,     6,    41,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,     6,    41,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,     6,     3,     8,
       9,    10,    11,    -1,    41,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     7,     8,     9,    10,    11,    41,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       5,     6,    -1,    -1,     9,    -1,    -1,    -1,    41,    14,
       7,     8,     9,    10,    11,    -1,    21,    22,     7,     8,
       9,    10,    11,    28,    29,    30,    31,    -1,    -1,     5,
       6,    -1,    -1,     9,    -1,    40,    41,    42,    14,     7,
       8,     9,    10,    11,     5,    21,    22,    -1,     9,    -1,
      -1,    -1,    28,    29,    30,    31,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    40,    41,    42,    28,    29,    30,
      31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,
      41,    42,    14,     7,     8,     9,    10,    11,     5,    21,
      22,    -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,
      -1,     9,    -1,    40,    41,    42,    14,    -1,     6,    -1,
       8,     9,    -1,    21,    22,    -1,    -1,    15,    16,    -1,
      28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,    27,
       9,    -1,    40,    41,    42,    14,    34,    35,    36,    37,
      38,    39,    -1,    22,     7,     8,     9,    10,    11,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    40,    41,    42,    14,     7,     8,     9,    10,    11,
       5,    -1,    22,    -1,     9,    -1,    -1,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,    -1,
       5,    -1,    22,    -1,     9,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,    -1,
       5,    -1,    22,    -1,     9,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,    -1,
       5,    -1,    22,    -1,     9,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    -1,    -1,     9,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,    -1,
       5,    -1,    -1,    -1,     9,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    -1,    -1,     5,
      40,    41,    42,    28,    29,    30,    31,     7,     8,     9,
      10,    11,    -1,    -1,     5,    40,    41,    42,    28,    29,
      30,    31,    28,    29,    30,    31,    -1,    -1,    -1,     5,
      40,    41,    42,    -1,    40,    41,    42,    28,    29,    30,
      31,     7,     8,     9,    10,    11,    -1,    -1,    -1,    40,
      41,    42,    28,    29,    30,    31,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    40,    41,    42,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,     7,     8,     9,    10,    11,    -1,    34,
      35,    36,    37,    38,    39,     5,    -1,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,     7,     8,     9,    10,    11,    -1,    34,    35,    36,
      37,    38,    39,     5,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,     7,
       8,     9,    10,    11,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,     7,     8,     9,    10,
      11,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    27,
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
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,     8,     9,    10,    11,    12,    -1,    27,    15,
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
      38,    39,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    -1,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    -1,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,     8,     9,    -1,    -1,    12,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    27,    15,    16,    -1,    -1,     6,    -1,    34,
      35,    36,    37,    38,    39,    27,    15,    16,    -1,    -1,
       6,    -1,    34,    35,    36,    37,    38,    39,    27,    15,
      16,    -1,    -1,     6,    -1,    34,    35,    36,    37,    38,
      39,    27,    15,    16,    -1,    -1,     6,    -1,    34,    35,
      36,    37,    38,    39,    27,    15,    16,    -1,    -1,     6,
      -1,    34,    35,    36,    37,    38,    39,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,
      -1,    15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,
      34,    35,    36,    37,    38,    39,    34,    35,    36,    37,
      38,    39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,
      15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,
      35,    36,    37,    38,    39,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    46,    47,    48,    49,    53,    41,     0,     1,
      48,    50,    54,     5,     7,    51,    21,    55,    41,     6,
      12,    52,    21,     3,    57,    41,    58,    59,     1,    18,
      19,    20,    21,    24,    25,    26,    28,    29,    30,    31,
      32,    41,    53,    57,    60,    61,    62,    63,    64,    77,
      78,     4,     5,     5,     5,    41,     5,     9,    17,    22,
      23,    40,    41,    42,    77,    78,    79,    80,    81,    82,
      83,    84,     5,     5,     5,     5,     5,     5,     5,     5,
      13,     4,    61,    14,    22,    68,    69,    70,    71,    73,
      74,    82,     7,     7,    41,    79,    79,    80,    82,    84,
       7,     8,     9,    10,    11,    76,    79,     7,    21,    41,
      65,    66,    67,    68,    41,    76,    76,    76,    56,    79,
      79,    70,     6,    38,    39,    34,    35,    72,    15,    16,
      27,    36,    37,    75,     6,     6,     6,     6,     6,    83,
      83,    84,    84,     6,    27,    41,    13,    65,     7,    12,
       6,     6,     6,     6,     6,    12,     7,    61,    69,    70,
      73,    74,     7,     7,     7,    61,    79,    13,    79,     6,
      66,    67,    79,    33,    79,    61,     6,    61,    61,     3,
      28,    29,    30,    31,     5,     9,    28,    29,    30,    31,
      40,    41,    42,    77,    78,    81,    83,    84,     5,     9,
      17,    22,    23,    28,    29,    30,    31,    40,    41,    42,
      77,    78,    80,    81,    82,    83,    84,    54,     5,     5,
       9,    17,    22,    23,    28,    29,    30,    31,    40,    41,
      42,    77,    78,    80,    81,    82,    83,    84,     5,     9,
      14,    22,    28,    29,    30,    31,    40,    42,    69,    70,
      71,    73,    74,    77,    78,    81,    82,    83,    84,     5,
       9,    17,    22,    23,    28,    29,    30,    31,    40,    41,
      42,    77,    78,    80,    81,    82,    83,    84,     8,     9,
       8,     9,     5,     7,    66,    38,     1,     3,    18,    19,
      20,    21,    24,    25,    26,    41,    53,    57,    62,    63,
      64,    77,    78,     5,     9,    17,    22,    23,    28,    29,
      30,    31,    40,    41,    42,    77,    78,    80,    81,    82,
      83,    84,     5,     9,    14,    21,    22,    28,    29,    30,
      31,    40,    41,    42,    67,    68,    69,    70,    71,    73,
      74,    77,    78,    81,    82,    83,    84,    12,    58,    59,
       5,     5,     5,     5,    80,    82,    84,     5,     5,     5,
       5,     5,    10,    11,    80,    82,    84,     5,     5,     5,
       5,     5,    10,    11,     7,    56,    80,    82,    84,     5,
       5,     5,     5,     5,     8,     9,    10,    11,    80,    82,
      41,    84,    70,     5,     5,     5,     5,    39,    72,    75,
       8,     9,    10,    11,    80,    82,    84,     5,     5,     5,
       5,     5,     8,     9,    10,    11,    83,    83,    83,    83,
      56,     7,    69,    58,    59,     5,     5,     5,    41,    79,
       5,     5,    13,    68,     7,     7,    80,    82,    84,     5,
       5,     5,     5,     5,     8,     9,    10,    11,    80,    82,
      41,    84,    70,    41,     5,     5,     5,     5,     5,    13,
      38,    39,    72,    75,     8,     9,    10,    11,    67,    60,
       4,    41,    76,    76,    76,     6,     6,    41,    76,    76,
      76,    56,    84,    84,     6,     6,    41,    76,    76,    76,
      56,    84,    84,     6,     6,     6,    41,    76,    76,    76,
      56,    83,    83,    84,    84,     6,     6,    41,    76,    76,
      76,    70,    73,    74,    83,    83,    84,    84,     6,     6,
      41,    76,    76,    76,    56,    83,    83,    84,    84,     6,
      60,     4,    41,    79,    79,    54,     7,    76,    65,    79,
       6,     6,     6,    41,    76,    76,    76,    56,    83,    83,
      84,    84,     6,     6,    13,    41,    76,    76,    76,    56,
      79,    69,    70,    73,    74,    83,    83,    84,    84,     4,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     4,     6,
       6,     6,     7,     6,    65,     7,    61,     6,     6,     6,
       6,     6,    79,     6,     6,     6,     6,     6,     7,     7,
       7,    61,     6,    66,    33,    61,     6,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    51,
      52,    49,    54,    53,    55,    55,    55,    56,    56,    56,
      58,    57,    59,    57,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      76,    77,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    83,    83,    83,
      83,    84,    84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     0,
       0,     9,     0,     4,     4,     2,     0,     3,     1,     0,
       0,     4,     0,     3,     2,     1,     1,     1,     1,     2,
       2,     1,     5,     5,     5,     4,     3,     1,     2,     4,
       6,     5,     6,     7,     1,     2,     1,     3,     1,     4,
       3,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     3,     1
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
#line 2765 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2771 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2777 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
                func_insert_result = insert_symbol((yyvsp[0].int_value));
            }
#line 2786 "parser/parser.c"
    break;

  case 9: /* $@2: %empty  */
#line 68 "parser/c7.y"
                          {
                push_scope((yyvsp[-2].int_value));
            }
#line 2794 "parser/parser.c"
    break;

  case 10: /* $@3: %empty  */
#line 70 "parser/c7.y"
                                         {
                pop_scope();
            }
#line 2802 "parser/parser.c"
    break;

  case 11: /* func_stmt: TYPE ID $@1 PARENT_LEFT $@2 param_list PARENT_RIGHT $@3 compound_block_stmt  */
#line 72 "parser/c7.y"
                                     {
                if (func_insert_result)
                    (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-8].str_value)), create_var_expr((yyvsp[-7].int_value)), (yyvsp[-3].expression), (yyvsp[0].expression));
                else (yyval.expression) = create_empty_expr();
                free((yyvsp[-8].str_value));
            }
#line 2813 "parser/parser.c"
    break;

  case 12: /* $@4: %empty  */
#line 80 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    if (func_insert_result) 
                        stmt_insert_result = insert_symbol((yyvsp[0].int_value));
                    else remove_symbol((yyvsp[0].int_value));
                }
#line 2824 "parser/parser.c"
    break;

  case 13: /* var_decl_stmt: TYPE ID $@4 SEMICOLON  */
#line 85 "parser/c7.y"
                            {
                    if (func_insert_result && stmt_insert_result)
                        (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    else (yyval.expression) = create_empty_expr();
                    free((yyvsp[-3].str_value));
                }
#line 2835 "parser/parser.c"
    break;

  case 14: /* param_list: param_list COMMA TYPE ID  */
#line 93 "parser/c7.y"
                                                {
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                if (func_insert_result) {
                    param_insert_result = insert_symbol((yyvsp[0].int_value));
                    if (param_insert_result)
                        (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                    else (yyval.expression) = (yyvsp[-3].expression);
                } else {
                    remove_symbol((yyvsp[0].int_value));
                    (yyval.expression) = (yyvsp[-3].expression);
                }
                free((yyvsp[-1].str_value));
            }
#line 2853 "parser/parser.c"
    break;

  case 15: /* param_list: TYPE ID  */
#line 106 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                if (func_insert_result) {
                    param_insert_result = insert_symbol((yyvsp[0].int_value));
                    if (param_insert_result)
                        (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                    else (yyval.expression) = create_empty_expr();
                } else {
                    remove_symbol((yyvsp[0].int_value));
                    (yyval.expression) = create_empty_expr();
                }
                free((yyvsp[-1].str_value));
            }
#line 2871 "parser/parser.c"
    break;

  case 16: /* param_list: %empty  */
#line 119 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2879 "parser/parser.c"
    break;

  case 17: /* simple_param_list: simple_param_list COMMA simple_expr  */
#line 124 "parser/c7.y"
                                                                {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression));
                    }
#line 2887 "parser/parser.c"
    break;

  case 18: /* simple_param_list: simple_expr  */
#line 127 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2893 "parser/parser.c"
    break;

  case 19: /* simple_param_list: %empty  */
#line 128 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2899 "parser/parser.c"
    break;

  case 20: /* $@5: %empty  */
#line 131 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 2907 "parser/parser.c"
    break;

  case 21: /* compound_block_stmt: BRACK_LEFT $@5 block_stmts BRACK_RIGHT  */
#line 133 "parser/c7.y"
                                                 {
                        (yyval.expression) = (yyvsp[-1].expression);
                        pop_scope();
                    }
#line 2916 "parser/parser.c"
    break;

  case 22: /* $@6: %empty  */
#line 137 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 2924 "parser/parser.c"
    break;

  case 23: /* compound_block_stmt: BRACK_LEFT $@6 BRACK_RIGHT  */
#line 139 "parser/c7.y"
                                   {
                        (yyval.expression) = create_empty_expr();
                        pop_scope();
                    }
#line 2933 "parser/parser.c"
    break;

  case 24: /* block_stmts: block_stmts block_item  */
#line 145 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2941 "parser/parser.c"
    break;

  case 25: /* block_stmts: block_item  */
#line 148 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2947 "parser/parser.c"
    break;

  case 26: /* block_item: var_decl_stmt  */
#line 151 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2953 "parser/parser.c"
    break;

  case 27: /* block_item: block_stmt  */
#line 152 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2959 "parser/parser.c"
    break;

  case 28: /* block_stmt: compound_block_stmt  */
#line 155 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2965 "parser/parser.c"
    break;

  case 29: /* block_stmt: func_call SEMICOLON  */
#line 156 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2971 "parser/parser.c"
    break;

  case 30: /* block_stmt: set_func_call SEMICOLON  */
#line 157 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2977 "parser/parser.c"
    break;

  case 31: /* block_stmt: flow_control  */
#line 158 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2983 "parser/parser.c"
    break;

  case 32: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 159 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2993 "parser/parser.c"
    break;

  case 33: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 164 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 3002 "parser/parser.c"
    break;

  case 34: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 168 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 3011 "parser/parser.c"
    break;

  case 35: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 172 "parser/c7.y"
                                                       {
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
                stmt_insert_result = check_declared((yyvsp[-3].int_value));
                if (stmt_insert_result) 
                    (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].char_value)), (yyvsp[-1].expression));
                else (yyval.expression) = create_empty_expr();
            }
#line 3023 "parser/parser.c"
    break;

  case 36: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 179 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 3032 "parser/parser.c"
    break;

  case 37: /* block_stmt: error  */
#line 183 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 3041 "parser/parser.c"
    break;

  case 38: /* flow_control_if: IF PARENT_LEFT  */
#line 189 "parser/c7.y"
                                    {
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 3050 "parser/parser.c"
    break;

  case 39: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item  */
#line 195 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 3058 "parser/parser.c"
    break;

  case 40: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item ELSE block_item  */
#line 198 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 3067 "parser/parser.c"
    break;

  case 41: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_item  */
#line 202 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 3076 "parser/parser.c"
    break;

  case 42: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_item  */
#line 206 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 3085 "parser/parser.c"
    break;

  case 43: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_item  */
#line 210 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 3094 "parser/parser.c"
    break;

  case 44: /* opt_param: SEMICOLON  */
#line 216 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 3100 "parser/parser.c"
    break;

  case 45: /* opt_param: for_expression SEMICOLON  */
#line 217 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 3106 "parser/parser.c"
    break;

  case 46: /* for_expression: decl_or_cond_expr  */
#line 220 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3112 "parser/parser.c"
    break;

  case 47: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 221 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 3120 "parser/parser.c"
    break;

  case 48: /* decl_or_cond_expr: or_cond_expr  */
#line 226 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3126 "parser/parser.c"
    break;

  case 49: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 227 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 3137 "parser/parser.c"
    break;

  case 50: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 233 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 3146 "parser/parser.c"
    break;

  case 51: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 239 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3155 "parser/parser.c"
    break;

  case 52: /* or_cond_expr: and_cond_expr  */
#line 243 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3161 "parser/parser.c"
    break;

  case 53: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 246 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3170 "parser/parser.c"
    break;

  case 54: /* and_cond_expr: unary_cond_expr  */
#line 250 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3176 "parser/parser.c"
    break;

  case 55: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 253 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                }
#line 3184 "parser/parser.c"
    break;

  case 56: /* unary_cond_expr: eq_cond_expr  */
#line 256 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3190 "parser/parser.c"
    break;

  case 57: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 259 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3198 "parser/parser.c"
    break;

  case 58: /* eq_cond_expr: rel_cond_expr  */
#line 262 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3204 "parser/parser.c"
    break;

  case 59: /* equal_ops: EQ_OP  */
#line 265 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3213 "parser/parser.c"
    break;

  case 60: /* equal_ops: NE_OP  */
#line 269 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3222 "parser/parser.c"
    break;

  case 61: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 275 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3230 "parser/parser.c"
    break;

  case 62: /* rel_cond_expr: rel_cond_stmt  */
#line 278 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3236 "parser/parser.c"
    break;

  case 63: /* rel_cond_stmt: arith_expr  */
#line 281 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3242 "parser/parser.c"
    break;

  case 64: /* rel_cond_stmt: EMPTY  */
#line 282 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3251 "parser/parser.c"
    break;

  case 65: /* rel_ops: L_OP  */
#line 288 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3257 "parser/parser.c"
    break;

  case 66: /* rel_ops: G_OP  */
#line 289 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3263 "parser/parser.c"
    break;

  case 67: /* rel_ops: LE_OP  */
#line 290 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3272 "parser/parser.c"
    break;

  case 68: /* rel_ops: GE_OP  */
#line 294 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3281 "parser/parser.c"
    break;

  case 69: /* rel_ops: IN  */
#line 298 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3290 "parser/parser.c"
    break;

  case 70: /* set_expr: simple_expr IN simple_expr  */
#line 304 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3299 "parser/parser.c"
    break;

  case 71: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 310 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3308 "parser/parser.c"
    break;

  case 72: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 316 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3318 "parser/parser.c"
    break;

  case 73: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 321 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3327 "parser/parser.c"
    break;

  case 74: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 325 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3336 "parser/parser.c"
    break;

  case 75: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 329 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3345 "parser/parser.c"
    break;

  case 76: /* simple_expr: arith_expr  */
#line 335 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3351 "parser/parser.c"
    break;

  case 77: /* simple_expr: func_cte_expr  */
#line 336 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3357 "parser/parser.c"
    break;

  case 78: /* func_cte_expr: EMPTY  */
#line 339 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3366 "parser/parser.c"
    break;

  case 79: /* func_cte_expr: STRING  */
#line 343 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3375 "parser/parser.c"
    break;

  case 80: /* func_cte_expr: CHAR  */
#line 347 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3383 "parser/parser.c"
    break;

  case 81: /* func_expr: func_call  */
#line 352 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3389 "parser/parser.c"
    break;

  case 82: /* func_expr: set_func_call  */
#line 353 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3395 "parser/parser.c"
    break;

  case 83: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 354 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3401 "parser/parser.c"
    break;

  case 84: /* arith_expr: arith_expr ADD term  */
#line 357 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3409 "parser/parser.c"
    break;

  case 85: /* arith_expr: arith_expr SUB term  */
#line 360 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3417 "parser/parser.c"
    break;

  case 86: /* arith_expr: term  */
#line 363 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3423 "parser/parser.c"
    break;

  case 87: /* term: term MULT factor  */
#line 366 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3431 "parser/parser.c"
    break;

  case 88: /* term: term DIV factor  */
#line 369 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3439 "parser/parser.c"
    break;

  case 89: /* term: factor  */
#line 372 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3445 "parser/parser.c"
    break;

  case 90: /* term: SUB factor  */
#line 373 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
        }
#line 3453 "parser/parser.c"
    break;

  case 91: /* factor: INTEGER  */
#line 378 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3459 "parser/parser.c"
    break;

  case 92: /* factor: FLOAT  */
#line 379 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3465 "parser/parser.c"
    break;

  case 93: /* factor: ID  */
#line 380 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3474 "parser/parser.c"
    break;

  case 94: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 384 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3480 "parser/parser.c"
    break;

  case 95: /* factor: func_expr  */
#line 385 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3486 "parser/parser.c"
    break;


#line 3490 "parser/parser.c"

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

#line 388 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
