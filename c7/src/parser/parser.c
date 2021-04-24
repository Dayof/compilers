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
  YYSYMBOL_block_stmts = 59,               /* block_stmts  */
  YYSYMBOL_block_item = 60,                /* block_item  */
  YYSYMBOL_block_stmt = 61,                /* block_stmt  */
  YYSYMBOL_flow_control_if = 62,           /* flow_control_if  */
  YYSYMBOL_flow_control = 63,              /* flow_control  */
  YYSYMBOL_opt_param = 64,                 /* opt_param  */
  YYSYMBOL_for_expression = 65,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 66,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 67,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 68,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 69,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 70,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 71,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 72,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 73,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 74,                   /* rel_ops  */
  YYSYMBOL_set_expr = 75,                  /* set_expr  */
  YYSYMBOL_func_call = 76,                 /* func_call  */
  YYSYMBOL_set_func_call = 77,             /* set_func_call  */
  YYSYMBOL_simple_expr = 78,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 79,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 80,                 /* func_expr  */
  YYSYMBOL_arith_expr = 81,                /* arith_expr  */
  YYSYMBOL_term = 82,                      /* term  */
  YYSYMBOL_factor = 83                     /* factor  */
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
#define YYLAST   5520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  626

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
      70,    65,    78,    78,    87,    93,    99,   104,   107,   108,
     111,   111,   117,   122,   125,   128,   129,   132,   133,   134,
     135,   136,   141,   145,   149,   153,   157,   163,   169,   172,
     176,   180,   184,   190,   191,   194,   195,   200,   201,   207,
     213,   217,   220,   224,   227,   230,   233,   236,   239,   243,
     249,   252,   255,   256,   262,   263,   264,   268,   272,   278,
     284,   290,   295,   299,   303,   309,   310,   313,   317,   321,
     326,   327,   328,   331,   334,   337,   340,   343,   346,   347,
     352,   353,   354,   358,   359
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
  "simple_param_list", "compound_block_stmt", "$@5", "block_stmts",
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

#define YYPACT_NINF (-334)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    -9,    21,   147,   236,   247,   318,    84,  -334,   357,
     458,    28,    37,     5,   526,   118,    35,   106,   151,    92,
      77,   119,    67,   627,   540,   163,   573,  3365,   668,    41,
     129,   171,   109,   168,   190,   198,   201,   202,   209,   225,
     226,    83,  1067,  1908,  1941,  2661,  2693,    38,  2725,   210,
     233,   224,   853,   853,   243,   853,   739,   251,   269,   277,
    1068,   929,  1289,  1499,  1906,   284,   294,  2010,   765,  2096,
    3470,  1604,   306,   261,  1604,  1604,  1604,  1273,   720,   168,
     592,  2757,    38,  1685,    34,    43,    81,   107,  4871,  4884,
    3435,  2789,  2821,   237,   308,   310,   319,   616,  3491,  2853,
     321,   321,   739,   739,   332,   285,   778,   300,  3762,   991,
      22,   172,    16,   336,   350,   354,   369,   212,   260,   317,
     105,  3397,    38,    38,   268,  1108,  1172,  1338,  1382,  1548,
    3615,  3630,  1172,   379,   381,   393,  3535,  3587,  3608,  3892,
    3939,  3986,  3365,   853,   394,  3498,  1864,  1985,  3527,   408,
     417,   427,   445,   447,  3542,  2885,   928,   155,   232,  4897,
    4910,  2917,  2949,  2981,  3013,   468,  3498,   176,  3365,   281,
     180,   362,  3365,   276,  3045,  3365,  3077,  3109,  3141,   470,
     472,   489,   511,   853,   806,   523,   548,   555,   562,  4294,
    3858,  4328,  4341,  4375,  4388,  4422,  4435,   853,   996,   525,
     576,   602,   574,   593,   615,   624,   973,  1275,  1101,  1485,
    1802,   628,  1814,   706,  1832,  2065,   647,   720,   853,  1128,
     437,   612,   639,   665,   669,   678,   686,   744,   708,   785,
     916,   966,   713,  1040,   145,  1045,  1180,   853,  1656,  1483,
    5403,   690,   728,   742,   751,  4943,  4956,   360,   454,   450,
    5409,  5442,  4989,  5002,  5035,  5370,  5048,  5081,   853,  2049,
     398,   399,   444,   752,   754,   758,   771,   667,   411,  1770,
    2136,  2165,   457,  2198,   459,  2231,  2266,   361,   361,  1201,
    1201,   720,  3425,   352,  1483,  1768,  3173,   773,   777,   779,
     747,   168,   792,   796,   165,  1826,  2031,  2098,    38,  2131,
     783,   795,   853,  3720,   364,   556,   598,   805,   811,   812,
     816,   696,   819,  2237,  2696,  2728,   600,  2760,   655,  2792,
    2824,   853,  3724,  3600,   781,  4764,   818,   827,   828,   833,
     217,  3775,  3871,   485,    13,    25,   121,    36,  4798,  4811,
    3905,  3918,  3952,  4751,  3965,  3999,  3571,  3205,  3365,   809,
    1604,  1604,  1604,   845,   722,  4469,   824,  1604,  1604,  1604,
     720,   806,   806,   846,   730,  3239,   826,  1604,  1604,  1604,
     720,   996,   996,  3237,   502,   854,   855,  1242,   830,  1604,
    1604,  1604,   720,  1411,  1411,  1128,  1128,   866,   871,  3810,
    5094,   471,   837,  1604,  1604,  1604,  1483,  3645,  3645,  1724,
    1724,  1656,  1656,   884,   982,  2299,   850,  1604,  1604,  1604,
     720,  3675,  3675,  2049,  2049,  4482,  4516,  3271,  3303,   507,
    3454,   494,  2164,  3365,   851,   853,   853,   243,   852,  1604,
     306,   168,    39,  2197,  2232,   891,  1110,  2856,   857,  1604,
    1604,  1604,   720,  3690,  3690,  3720,  3720,   893,  1126,  3823,
    4012,   126,   899,   873,  1604,  1604,  1604,   720,  3542,  3600,
    3600,  3660,  3660,  3705,  3705,  3724,  3724,   517,  3269,   911,
     914,   915,   922,  4529,  4563,   924,   927,   938,   944,   518,
    4576,  4610,  3335,  3361,   945,   949,   956,   961,   564,  3367,
    3393,  4033,  1331,  1391,   962,   964,   967,   981,   565,  1449,
    1541,  1583,  1587,  5127,  5140,   993,   997,   998,  1001,   500,
    5448,  5481,  5173,  5186,  5219,  5232,  2332,  2365,  1004,  1009,
    1010,  1012,   575,  2398,  2431,  2464,  2497,  5265,  3301,  1017,
    1022,  1024,   990,  2265,  1028,   991,  1032,  3397,  2888,  2920,
    1029,  1034,  1035,  1039,   584,  2952,  2984,  3016,  3048,  4046,
    4059,  3542,  1046,  1053,  1059,  1063,   626,   630,   207,   283,
    4845,  4858,  4093,  4106,  4140,  4153,  3333,  4080,  4127,  4174,
    4221,  4623,  4657,  4670,  4704,  4717,  3399,  3580,  3731,  3797,
    3845,  1641,  1646,  1661,  1748,  1794,  5278,  5311,  5324,  5357,
    2530,  2563,  2596,  2629,  2662,  2298,  1066,  1076,  1077,  2331,
    3397,  3483,  2364,  2397,  3080,  3112,  3144,  3176,  3208,   637,
    4187,  4200,  4234,  4247,  4281,  2430,  2463,  2496,  2529,  3397,
     638,  3397,  2562,  3397,  2595,  2628
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -334,  -334,  -334,   919,  -334,  -334,  -334,  -334,     0,   -50,
    -334,  -208,   -20,  -172,  -333,    14,  -119,   -65,   -64,   -97,
     -96,  -141,   -39,    -6,   -23,   157,  -235,    89,   -29,  -228,
    1629,   -17,   443,   632,  1683,  1073,  1493,  1283,   863
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    11,    15,    21,    42,    12,
      17,   117,    43,    27,    44,    45,    46,    47,    48,   109,
     110,   111,   112,   247,   248,   249,   126,   250,   251,   132,
     104,   230,   231,   105,   232,   233,   234,   235,   236
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    24,   297,     6,   216,   333,   348,   170,    84,   374,
      49,    -9,   146,   283,   397,   468,    63,    -9,    89,   -47,
       1,     8,   398,   -47,    86,   -47,    -9,    49,   -47,   147,
     192,   -51,     7,    13,   148,   209,   209,   -51,   209,    63,
     121,    85,   -55,   183,    14,   537,    51,   184,   -55,   -51,
     169,   459,    82,    89,   284,   252,   298,   299,    81,   120,
      83,   270,    63,   -51,   460,   192,   185,   186,   187,   188,
     124,   125,   122,   419,   -55,   -55,    18,   122,   189,   190,
     191,   -51,   123,    63,    63,    63,    63,   -53,    78,    -8,
     528,   -12,   252,    89,    89,   -10,    79,    89,    22,    86,
     158,   296,   461,   160,   300,   192,   192,   334,    25,   192,
     462,   -54,    19,   -55,   423,   192,   157,   339,    20,   -53,
     -53,   295,    23,   336,   -16,    49,   209,   -53,   314,   340,
     -16,   252,   -54,   -53,    52,   156,    88,   270,   -54,    16,
     335,   124,   125,   -54,   -54,   -55,   -55,    -2,     9,   314,
      54,    49,   479,   383,   384,    49,   164,   -15,    49,   -53,
     -53,   -50,   488,   -15,   -54,   -54,   209,   192,     1,   -14,
      78,    88,   -75,    55,   498,   -14,    53,    56,   431,   -45,
     209,   209,   174,   -49,   -45,    57,   176,   -46,   -49,   177,
      58,    59,   -46,   -50,   123,    71,   179,   180,   181,   182,
     270,   209,   522,    72,    87,   467,    73,    74,    60,    61,
      62,    88,    88,   -50,    75,   159,   391,    91,   153,   -50,
     209,   252,   252,   -90,   154,   -90,   -90,   -90,   -90,   -90,
      76,    77,   -90,   -90,   544,   338,    -5,    -5,   -52,    87,
      92,   209,   270,   133,   -90,   -50,   460,    -6,    -6,   556,
     -12,   -90,   -90,   -90,   -90,   -90,   -90,    -5,   -79,   432,
     192,   192,   209,   209,   270,    93,   -18,   252,    -6,    89,
     -52,   -52,   -18,   -58,    63,    86,   -77,   -58,   421,    87,
      87,   192,   398,   -48,   -78,   209,   314,   175,   -48,   -52,
     -58,    99,    85,   346,   339,   -52,   -58,   -58,   -58,   -58,
     451,   -76,   113,   337,   209,   340,   340,   334,   -58,   -58,
     -58,   237,   143,   106,   134,   238,   135,   339,    -7,    -7,
     239,   -52,   -52,   336,   155,   136,    55,   107,   240,   340,
      56,    49,   462,   535,   241,   242,   243,   244,   142,    -7,
     335,   144,   149,   270,   192,   192,   245,   108,   246,   179,
     180,   181,   182,   270,   209,   209,   150,    -4,    -4,   420,
     151,    60,    61,    62,   148,   270,   183,   -51,   -17,   511,
     184,   -79,   -51,   509,   -17,   152,   -79,   532,    -4,   252,
     252,   252,   252,   252,   252,   252,   161,    88,   162,   185,
     186,   187,   188,   270,   270,   270,   270,   270,   -51,   396,
     163,   189,   190,   191,   -79,   -77,    49,   166,   209,   209,
     -79,   -77,   338,   252,    63,   -71,   410,   -92,   297,   -92,
     -92,   -92,   -92,   -92,   -72,   270,   314,   314,   314,   314,
     339,   339,   339,   561,   -73,   338,   336,   559,   601,   283,
     270,   270,   340,   340,   340,   340,   340,   340,   340,   340,
     -78,    49,   -74,   558,   -70,    87,   -78,   -55,    -3,    -3,
     333,   -53,   -55,   -76,   -79,   -75,   -53,   411,   412,   -76,
      50,   -75,   298,   299,   -69,   349,    64,   350,   -54,    -3,
     337,   297,    81,   -54,   124,   125,   510,    50,   -55,   -55,
     193,   -45,   -53,   -53,   351,   210,   210,   -45,   210,    64,
     297,   -50,   297,   337,   297,   620,   -50,   -52,   491,   -54,
     -54,    49,   -52,   527,   154,   253,   352,   296,   252,   154,
     300,   271,    64,   -46,   575,   193,   -13,   -13,   356,   -46,
     154,   -79,   -50,   396,   270,   298,   299,   295,   -52,   -52,
     -11,   -11,    81,    64,    64,    64,    64,   -13,   338,   338,
     560,   603,   253,   357,   298,   299,   298,   299,   298,   299,
     358,   -11,   334,   -77,   301,   193,   193,   359,   -77,   193,
     580,   585,   339,   -22,   -22,   193,   154,   154,   336,   366,
     296,   594,   -77,   300,   340,    50,   210,   154,   315,   341,
     608,   253,   -21,   -21,   -22,   335,   154,   271,   367,   296,
     295,   296,   300,   296,   300,   -78,   300,   -76,   -78,   315,
     -78,    50,   -76,   -21,   618,    50,   337,   337,    50,   295,
     368,   295,   137,   295,   279,   280,   210,   193,   -20,   369,
     -20,    26,   614,   622,   -76,   624,   -49,   625,   154,   -77,
     210,   210,   -49,   -48,   623,   -20,   -20,   -20,   -20,   -48,
     346,   -20,   -20,   -20,   373,   -20,   -20,   -20,   -20,   -20,
     271,   210,   -75,   443,   444,    65,   -78,   -75,   -20,   -36,
     378,   -36,   -36,   -90,   379,   -90,   -90,   -90,   -90,   -90,
     210,   253,   253,   380,    94,    95,   -36,   -36,   -36,   -36,
     338,   381,   -36,   -36,   -36,   392,   -36,   -36,   -36,   -36,
     -36,   210,   271,   -90,   -90,   -90,   -90,   -90,   -90,   -36,
     118,   119,   -75,   382,   279,   280,   -92,   -92,   -92,   -92,
     193,   193,   210,   210,   271,   258,   -19,   253,   474,   259,
     279,   280,   -19,   393,    64,   -92,   483,   260,   279,   280,
     -76,   193,   261,   262,    55,   210,   315,   394,   263,   264,
     265,   266,   -90,   -90,   -90,   -90,   395,   406,   337,   407,
     267,   268,   269,   408,   210,   341,   341,   179,   180,   181,
     182,   -90,   -75,   100,   101,   165,   409,   167,   424,    60,
      61,    62,   425,   -43,   426,   -43,   171,   -43,   427,   341,
     433,    50,   -43,   -91,   -91,   -91,   -91,   429,   173,   -43,
     -43,   430,   434,   271,   193,   193,   -43,   -43,   -43,   -43,
     438,   183,   -91,   271,   210,   210,   439,   440,   -43,   -43,
     -43,   441,   452,   453,   442,   271,   -92,   -92,   -92,   -92,
     -92,   -92,   454,   455,   185,   186,   187,   188,   456,   253,
     253,   253,   253,   253,   253,   253,   189,   190,   191,   118,
     469,   473,   482,   271,   271,   271,   271,   271,   197,   533,
     492,   493,   198,   279,   280,   475,    50,   484,   210,   210,
     199,   494,   503,   253,    64,   200,   201,   504,   505,   279,
     280,   202,   203,   204,   205,   271,   315,   315,   315,   315,
     516,   518,   529,   206,   207,   208,    70,   538,   540,   549,
     271,   271,   341,   341,   341,   341,   341,   341,   341,   341,
     196,    50,   551,   118,   552,   215,   215,   567,   215,    98,
     568,   569,    10,   428,   -80,   -80,   -80,   -80,   570,   -38,
     571,   -38,   -38,   572,   217,   257,   -92,   -92,   -92,   -92,
     -92,   276,    70,   -80,   573,   196,   -38,   -38,   -38,   -38,
     574,   576,   -38,   -38,   -38,   577,   -38,   -38,   -38,   -38,
     -38,   172,   578,    70,    70,   140,   141,   579,   581,   -38,
     582,    50,   257,   583,   -81,   -81,   -81,   -81,   253,   -90,
     301,   -90,   -90,   -90,   -90,   196,   196,   584,   517,   196,
     279,   280,   118,   -81,   271,   196,   237,   599,   282,   586,
     238,   197,   118,   587,   588,   239,   215,   589,   320,   345,
     590,   257,   107,   240,   118,   591,   592,   276,   593,   241,
     242,   243,   244,   596,   202,   203,   204,   205,   597,   320,
     598,   245,   108,   246,   600,   604,   206,   207,   208,   602,
     605,   606,   118,   301,   341,   607,   215,   355,   -94,   -94,
     -94,   -94,   610,   -85,   -85,   385,   386,   530,   531,   611,
     215,   365,   301,   536,   301,   612,   301,   -94,   -25,   613,
     -25,   -25,   -85,   615,   118,   -90,   -90,   -90,   -90,   -90,
     276,   215,   377,   616,   617,   -25,   -25,   -25,   -25,   118,
     557,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     215,   390,   257,     0,     0,     0,    67,   -91,   -25,   -91,
     -91,   -91,   -91,   -59,     0,     0,   539,   -59,   279,   280,
     194,   215,   405,     0,     0,   212,   212,     0,   212,    67,
     -59,     0,   550,   218,   279,   280,   -59,   -59,   -59,   -59,
     196,   196,   215,   215,   276,   254,     0,   257,   -59,   -59,
     -59,   273,    67,     0,    70,   194,   223,   224,   225,   226,
       0,   196,     0,     0,     0,   215,   437,     0,   227,   228,
     229,     0,     0,    67,    67,    67,    67,   183,     0,     0,
       0,   184,   254,   609,   215,   450,   345,     0,   -88,   -88,
     -88,   -88,     0,     0,    83,   194,   194,     0,     0,   194,
     185,   186,   187,   188,     0,   194,   197,   -88,     0,   345,
     198,     0,   189,   190,   191,     0,   212,     0,   317,   342,
       0,   254,     0,   276,   480,   481,     0,   273,     0,   202,
     203,   204,   205,   276,   489,   490,     0,     0,     0,   317,
       0,   206,   207,   208,     0,   276,     0,     0,   501,   502,
     -89,   -89,   -89,   -89,     0,     0,   212,   194,     0,   257,
     257,   257,   257,   257,   514,   515,     0,     0,     0,   -89,
     212,   212,     0,   276,   276,   276,   525,   526,   -37,     0,
     370,   -92,   -37,   -92,   -92,   -92,   -92,   -37,   215,   215,
     273,   212,     0,   257,    70,   -37,   -91,   -91,   -91,   -91,
     -91,   -37,   -37,   -37,   -37,   276,   320,   320,   547,   548,
     212,   254,   254,   -37,   -37,   -37,    69,     0,     0,     0,
     276,   276,   345,   345,   345,   345,   345,   345,   564,   565,
     195,   212,   273,     0,     0,   214,   214,     0,   214,   -82,
     -82,   -82,   -82,   -64,     0,     0,     0,   -64,     0,     0,
     194,   194,   212,   212,   273,   256,     0,   254,   -82,     0,
     -64,   275,    69,     0,    67,   195,   -64,   -64,   -64,   -64,
       0,   194,     0,     0,     0,   212,   317,     0,   -64,   -64,
     -64,     0,     0,   138,   139,     0,     0,   -65,     0,     0,
       0,   -65,   256,     0,   212,   342,   342,     0,   257,   -93,
     -93,   -93,   -93,     0,   -65,   195,   195,     0,     0,   195,
     -65,   -65,   -65,   -65,   276,   195,   218,     0,   -93,   342,
     219,     0,   -65,   -65,   -65,     0,   214,     0,   319,   344,
       0,   256,     0,   273,   194,   194,     0,   275,     0,   223,
     224,   225,   226,   273,   212,   212,     0,     0,     0,   319,
       0,   227,   228,   229,     0,   273,     0,   -83,   -83,   385,
     386,     0,     0,     0,   345,     0,   214,     0,     0,   254,
     254,   254,   254,   254,   254,   254,   -83,     0,     0,     0,
     214,     0,     0,   273,   273,   273,   273,   273,   237,     0,
       0,   -80,   238,   -80,   -80,   -80,   -80,   239,   212,   212,
     275,   214,     0,   254,    67,   240,   -80,   -80,   -80,   -80,
     -80,   241,   242,   243,   244,   273,   317,   317,   317,   317,
     214,     0,   256,   245,   389,   246,    68,     0,     0,     0,
     273,   273,   342,   342,   342,   342,   342,   342,   342,   342,
      90,   214,     0,     0,     0,   213,   213,     0,    97,   -84,
     -84,   385,   386,   -68,     0,     0,     0,   -68,     0,     0,
     415,   416,   417,   418,   275,   255,     0,   256,   -84,     0,
     -68,   274,    68,     0,    69,    90,   -68,   -68,   -68,   -68,
       0,   195,     0,     0,     0,   214,     0,     0,   -68,   -68,
     -68,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,     0,
       0,     0,   255,     0,   214,     0,   344,     0,   254,   218,
     -86,     0,     0,   219,   -87,    90,    90,     0,     0,    90,
       0,   220,     0,     0,   273,    90,   221,   222,     0,   344,
       0,     0,   223,   224,   225,   226,   213,     0,   318,   343,
       0,   255,     0,   275,   227,   228,   229,   274,     0,   -71,
     -71,   -71,   -71,   275,   -72,   -72,   -72,   -72,     0,   318,
       0,   237,     0,     0,     0,   275,   499,   500,   -71,   -73,
     -73,   -73,   -73,   -72,   342,     0,   354,     0,     0,   256,
     256,   256,   512,   513,   241,   242,   243,   244,   -73,     0,
     364,   -63,     0,   275,   523,   524,   245,   389,   246,     0,
     -63,   -63,     0,   114,   115,   116,     0,     0,   214,   214,
     274,   376,   -63,   256,    69,     0,    66,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   275,   545,   546,     0,   237,
     388,     0,   255,   238,     0,   211,   211,     0,    96,     0,
     275,   275,   344,   344,   344,   344,   562,   563,     0,     0,
       0,   404,   241,   242,   243,   244,   -74,   -74,   -74,   -74,
       0,   272,    66,     0,   245,   389,   246,     0,     0,   -36,
       0,   -36,   -36,     0,   274,   -74,   -91,   255,   -91,   -91,
     -91,   -91,   -91,     0,    68,     0,   -36,   -36,   -36,   -36,
       0,    90,   -36,   -36,   -36,   436,   -36,   -36,   -36,   -36,
     -36,   -36,   -70,   -70,   -70,   -70,     0,     0,   -81,   -36,
     -81,   -81,   -81,   -81,   448,     0,   343,     0,   256,     0,
     -94,   -70,   -94,   -94,   -94,   -94,   211,   -25,   316,   -25,
     -25,     0,     0,     0,   275,     0,     0,   272,   -85,   343,
     -85,   -85,   371,   372,   -25,   -25,   -25,   -25,     0,   316,
     -25,   -25,   -25,   274,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,   274,     0,     0,   353,   -25,     0,   321,
     168,     0,     0,   322,     0,   274,     0,     0,   323,     0,
     363,     0,     0,     0,   344,   324,   325,     0,     0,   255,
     255,   255,   326,   327,   328,   329,     0,     0,     0,     0,
     272,   375,     0,   274,   330,   331,   332,     0,     0,   -27,
       0,   -27,   -27,   -81,   -81,   -81,   -81,   -81,   213,   213,
     387,     0,     0,   255,    68,     0,   -27,   -27,   -27,   -27,
       0,     0,   -27,   -27,   -27,   274,   -27,   -27,   -27,   -27,
     -27,   403,    28,     0,   178,    80,     0,     0,     0,   -27,
     274,   274,   343,   343,   343,   343,     0,     0,     0,    29,
      30,    31,    32,     0,   272,    33,    34,    35,     0,    36,
      37,    38,    39,    40,    66,     0,     0,     0,     0,   470,
     471,   472,    41,     0,     0,   435,   476,   477,   478,     0,
     -44,     0,   -44,     0,   -44,     0,   485,   486,   487,   -44,
       0,     0,     0,     0,   447,     0,   -44,   -44,   495,   496,
     497,     0,     0,   -44,   -44,   -44,   -44,   -94,   -94,   -94,
     -94,   -94,   506,   507,   508,   -44,   -44,   -44,   255,     0,
       0,     0,   -27,     0,   -27,   -27,   519,   520,   521,     0,
       0,     0,     0,   272,   274,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   272,   258,   -27,   -27,   -27,   534,   -27,
     -27,   -27,   -27,   -27,   -27,   272,     0,     0,   541,   542,
     543,   -88,   -27,   -88,   -88,   -88,   -88,   263,   264,   265,
     266,     0,     0,   553,   554,   555,     0,     0,     0,   267,
     268,   269,     0,   272,   343,     0,     0,     0,     0,   -26,
       0,   -26,   -26,   -85,   -85,   -85,   102,   103,   211,   211,
       0,     0,     0,     0,    66,     0,   -26,   -26,   -26,   -26,
       0,     0,   -26,   -26,   -26,   272,   -26,   -26,   -26,   -26,
     -26,   -26,   -30,     0,   -30,   -30,     0,     0,     0,   -26,
     272,   272,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -22,     0,   -22,   -22,     0,
       0,   -81,   -30,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -28,     0,
     -28,   -28,     0,     0,   -94,   -22,   -94,   -94,   -94,   -94,
     -94,     0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,   -29,   272,   -29,   -29,   -85,   -28,   -85,
     -85,   413,   414,   -85,   -91,   -91,   -91,   -91,   -91,   -91,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -35,     0,   -35,   -35,
       0,     0,   -88,   -29,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -21,
       0,   -21,   -21,     0,     0,   -89,   -35,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -13,     0,   -13,   -13,     0,     0,   -82,   -21,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,   -13,
     -13,   -13,   -13,     0,     0,   -13,   -13,   -13,     0,   -13,
     -13,   -13,   -13,   -13,   -13,   -34,     0,   -34,   -34,     0,
       0,   -93,   -13,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -38,     0,
     -38,   -38,     0,     0,   -83,   -34,   -83,   -83,   413,   414,
     -83,     0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     621,   -31,     0,   -31,   -31,     0,     0,   -84,   -38,   -84,
     -84,   413,   414,   -84,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -32,     0,   -32,   -32,     0,     0,
     -86,   -31,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -33,     0,   -33,
     -33,     0,     0,   -87,   -32,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -40,     0,   -40,   -40,     0,     0,   -71,   -33,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -40,   -40,   -40,
     -40,     0,     0,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -41,     0,   -41,   -41,     0,     0,   -72,
     -40,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,     0,     0,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -39,     0,   -39,   -39,
       0,     0,   -73,   -41,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -42,
       0,   -42,   -42,     0,     0,   -74,   -39,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
       0,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -24,     0,   -24,   -24,     0,     0,   -70,   -42,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -26,     0,   -26,   -26,     0,     0,
       0,     0,   -24,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -30,     0,   -30,   -30,
       0,     0,     0,     0,   -26,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -23,     0,
     -23,   -23,     0,     0,     0,     0,   -30,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -28,     0,   -28,   -28,     0,     0,     0,     0,   -23,   -85,
     -85,   -85,   445,   446,   -85,     0,     0,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -29,     0,   -29,   -29,     0,     0,     0,     0,
     -28,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -29,
     -29,   -29,   -29,     0,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -35,     0,   -35,   -35,     0,     0,
       0,     0,   -29,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -34,     0,   -34,   -34,
       0,     0,     0,     0,   -35,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -31,     0,
     -31,   -31,     0,     0,     0,     0,   -34,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -32,     0,   -32,   -32,     0,     0,     0,     0,   -31,   -83,
     -83,   -83,   445,   446,   -83,     0,     0,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -33,     0,   -33,   -33,     0,     0,     0,     0,
     -32,   -84,   -84,   -84,   445,   446,   -84,     0,     0,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -40,     0,   -40,   -40,     0,     0,
       0,     0,   -33,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -41,     0,   -41,   -41,
       0,     0,     0,     0,   -40,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -39,     0,
     -39,   -39,     0,     0,     0,     0,   -41,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -42,     0,   -42,   -42,     0,     0,     0,     0,   -39,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -42,   -42,   -42,
     -42,     0,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -20,     0,   -20,   347,     0,     0,     0,     0,
     -42,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -20,
     -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   422,     0,     0,
       0,     0,   -20,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -22,     0,   -22,   -22,
       0,     0,     0,     0,   -20,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -22,   -22,   -22,   -22,     0,     0,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -13,     0,
     -13,   -13,     0,     0,     0,   -89,   -22,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,   -13,   -13,   -13,   -13,     0,
       0,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,   -13,
      28,     0,   178,   566,     0,     0,     0,   -83,   -13,   -83,
     -83,   371,   372,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,    34,    35,     0,    36,    37,    38,
      39,    40,    28,     0,   178,   595,     0,     0,     0,   -84,
      41,   -84,   -84,   371,   372,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,    33,    34,    35,     0,    36,
      37,    38,    39,    40,   -21,     0,   -21,   -21,     0,     0,
       0,   -82,    41,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,    28,   -93,   178,   -93,
     -93,   -93,   -93,   -86,   -21,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,    33,
      34,    35,     0,    36,    37,    38,    39,    40,   285,   -87,
     286,   -87,   -87,   -87,   -87,   -71,    41,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,   287,   288,   289,   290,     0,
       0,   291,   292,   293,     0,    36,    37,    38,    39,    40,
     -43,   -43,     0,     0,   -43,     0,     0,     0,   294,   -43,
       0,   -62,     0,   277,   278,     0,   -43,   -43,     0,     0,
     -62,   -62,     0,   -43,   -43,   -43,   -43,     0,     0,   -44,
     -44,     0,   -62,   -44,     0,   -43,   -43,   -43,   -44,   -62,
     -62,   -62,   -62,   -62,   -62,   -44,   -44,   -88,   -88,   -88,
     -88,   -88,   -44,   -44,   -44,   -44,     0,     0,   321,   619,
       0,     0,   322,     0,   -44,   -44,   -44,   323,   -89,   -89,
     -89,   -89,   -89,   302,   324,   325,     0,   303,     0,     0,
       0,   326,   327,   328,   329,   304,     0,     0,     0,     0,
     305,   306,     0,   330,   331,   332,   307,   308,   309,   310,
       0,     0,   237,     0,     0,     0,   238,     0,   311,   312,
     313,   239,   -82,   -82,   -82,   -82,   -82,   258,   107,   240,
       0,   259,     0,     0,     0,   241,   242,   243,   244,   260,
       0,     0,     0,     0,   261,   262,     0,   245,   108,   246,
     263,   264,   265,   266,     0,     0,   321,     0,     0,     0,
     322,     0,   267,   268,   269,   323,   -72,     0,   -72,   -72,
     -72,   -72,   324,   325,   -93,   -93,   -93,   -93,   -93,   326,
     327,   328,   329,     0,     0,   321,     0,     0,     0,   322,
       0,   330,   331,   332,   323,   -83,   -83,   -83,   102,   103,
     -66,     0,   325,     0,   -66,     0,     0,     0,   326,   327,
     328,   329,     0,     0,     0,   -67,     0,   -66,     0,   -67,
     330,   449,   332,   -66,   -66,   -66,   -66,     0,     0,     0,
     237,     0,   -67,     0,   238,   -66,   -66,   -66,   -67,   -67,
     -67,   -67,     0,     0,     0,   321,     0,   240,     0,   322,
     -67,   -67,   -67,   241,   242,   243,   244,     0,     0,     0,
     258,     0,   325,     0,   259,   245,   389,   246,   326,   327,
     328,   329,     0,     0,     0,   302,     0,     0,     0,   303,
     330,   449,   332,   263,   264,   265,   266,     0,     0,     0,
     321,     0,     0,     0,   322,   267,   268,   269,   307,   308,
     309,   310,     0,     0,     0,   302,     0,     0,     0,   321,
     311,   312,   313,   326,   327,   328,   329,   -73,     0,   -73,
     -73,   -73,   -73,     0,     0,   330,   449,   332,   307,   308,
     309,   310,   326,   327,   328,   329,     0,     0,     0,     0,
     311,   312,   313,     0,   330,   449,   332,   281,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   145,     0,   -92,   -92,     0,
     457,   -92,     0,   -92,   -92,   -92,   -92,   -92,   458,   -92,
     -92,   -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -74,     0,   -74,   -74,   -74,   -74,   -92,
     -92,   -92,   -92,   -92,   -92,   281,     0,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,   -92,   -92,     0,   457,   -92,
       0,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -70,     0,   -70,   -70,   -70,   -70,   -92,   -92,   -92,
     -92,   -92,   -92,   360,   -92,     0,   -92,   -92,   -92,   -92,
       0,     0,     0,   -92,   -92,     0,     0,   -91,     0,   -91,
     -91,   -91,   -91,   -91,     0,   -92,   -91,   -91,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -91,   -84,
     -84,   -84,   102,   103,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,   -80,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,     0,   -80,   -81,   -81,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -81,   -86,   -86,   -86,   -86,
     -86,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -94,     0,
     -94,   -94,   -94,   -94,   -94,     0,     0,   -94,   -94,     0,
       0,   -85,     0,   -85,   -85,   465,   466,   -85,     0,   -94,
     -85,   -85,     0,     0,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -85,   -87,   -87,   -87,   -87,   -87,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -88,     0,   -88,   -88,   -88,
     -88,   -88,     0,     0,   -88,   -88,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,     0,   -88,   -89,   -89,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -70,   -70,   -70,   -70,   -70,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,   -82,     0,     0,   -93,     0,   -93,   -93,   -93,
     -93,   -93,     0,   -82,   -93,   -93,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -93,   -71,   -71,   -71,
     -71,   -71,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -83,
       0,   -83,   -83,   465,   466,   -83,     0,     0,   -83,   -83,
       0,     0,   -84,     0,   -84,   -84,   465,   466,   -84,     0,
     -83,   -84,   -84,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -72,   -72,   -72,   -72,   -72,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -86,     0,   -86,   -86,
     -86,   -86,   -86,     0,     0,   -86,   -86,     0,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,     0,   -86,   -87,   -87,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,   -73,   -73,   -73,   -73,   -73,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -71,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -71,   -71,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,     0,   -71,   -72,   -72,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -74,   -74,
     -74,   -74,   -74,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,     0,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
     -73,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,
       0,   -73,   -74,   -74,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -70,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,   -70,     0,     0,
     -90,     0,   -90,   -90,   -90,   -90,     0,     0,   -70,   -90,
     -90,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -90,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -91,     0,   -91,   -91,   -91,   -91,
       0,     0,     0,   -91,   -91,     0,     0,   -80,     0,   -80,
     -80,   -80,   -80,     0,     0,   -91,   -80,   -80,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -80,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -81,     0,   -81,   -81,   -81,   -81,     0,     0,     0,
     -81,   -81,     0,     0,   -94,     0,   -94,   -94,   -94,   -94,
       0,     0,   -81,   -94,   -94,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -94,     0,     0,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -85,     0,
     -85,   -85,   361,   362,     0,     0,     0,   -85,   -85,     0,
       0,   -88,     0,   -88,   -88,   -88,   -88,     0,     0,   -85,
     -88,   -88,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -88,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,     0,   -89,   -89,   -89,
     -89,     0,     0,     0,   -89,   -89,     0,     0,   -83,     0,
     -83,   -83,   361,   362,     0,     0,   -89,   -83,   -83,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -83,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,     0,   -84,   -84,   361,   362,     0,     0,
       0,   -84,   -84,     0,     0,   -82,     0,   -82,   -82,   -82,
     -82,     0,     0,   -84,   -82,   -82,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -82,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -93,
       0,   -93,   -93,   -93,   -93,     0,     0,     0,   -93,   -93,
       0,     0,   -86,     0,   -86,   -86,   -86,   -86,     0,     0,
     -93,   -86,   -86,     0,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -86,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,   -87,
     -87,   -87,     0,     0,     0,   -87,   -87,     0,     0,   -71,
       0,   -71,   -71,   -71,   -71,     0,     0,   -87,   -71,   -71,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -71,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,     0,
       0,     0,   -72,   -72,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,     0,     0,   -72,   -73,   -73,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,     0,   -74,   -74,   -74,   -74,     0,     0,     0,   -74,
     -74,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,     0,
       0,   -74,   -70,   -70,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -70,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -62,     0,   463,
     464,     0,     0,   -62,     0,     0,   -62,   -62,     0,     0,
     -63,     0,     0,     0,     0,     0,   -63,     0,   -62,   -63,
     -63,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -63,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -57,     0,     0,     0,     0,     0,
     -57,     0,     0,   127,   128,     0,     0,   -61,     0,     0,
       0,     0,     0,   -61,     0,   129,   -61,   -61,     0,     0,
       0,     0,   -57,   -57,   130,   131,   -57,   -57,   -61,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -56,     0,     0,     0,     0,     0,   -56,     0,     0,
     127,   128,     0,     0,   -60,     0,     0,     0,     0,     0,
     -60,     0,   129,   -60,   -60,     0,     0,   -57,     0,   -56,
     -56,   130,   131,   -56,   -56,   -60,   127,   128,     0,     0,
     -61,     0,   -60,   -60,   -60,   -60,   -60,   -60,   129,   -61,
     -61,     0,     0,   -56,     0,   -57,   -57,   130,   131,   -57,
     -57,   -61,   127,   128,     0,     0,   -60,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   129,   -60,   -60,     0,     0,     0,
       0,   -56,   -56,   130,   131,   -56,   -56,   -60,     0,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -90,   -90,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -90,   -91,   -91,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -91,     0,     0,     0,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -80,   -80,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -80,   -81,   -81,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -81,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,   -94,     0,     0,     0,   -85,   -85,   -85,   401,   402,
     -85,     0,   -94,   -85,   -85,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -85,     0,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -88,   -88,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -88,   -89,
     -89,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -89,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -82,   -82,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -82,   -93,   -93,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -93,     0,     0,
       0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -83,   -83,   -83,   401,   402,   -83,     0,     0,   -83,   -83,
       0,     0,     0,   -84,   -84,   -84,   401,   402,   -84,     0,
     -83,   -84,   -84,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,   -86,   -86,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -86,   -87,   -87,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -70,   -70,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -70,   -71,   -71,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,   -72,   -72,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -72,   -73,
     -73,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -74,   -74,     0,     0,     0,   -62,   399,   400,
       0,     0,   -62,     0,   -74,   -62,   -62,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -62,     0,     0,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -63,     0,     0,     0,     0,   -63,   -57,     0,   -63,   -63,
       0,   -57,     0,     0,   127,   128,     0,     0,     0,     0,
     -63,     0,     0,     0,     0,     0,   129,   -63,   -63,   -63,
     -63,   -63,   -63,   -57,   -57,   130,   131,   -57,   -57,   -61,
       0,     0,     0,     0,   -61,   -56,     0,   -61,   -61,     0,
     -56,     0,     0,   127,   128,     0,     0,     0,     0,   -61,
       0,     0,     0,     0,     0,   129,   -61,   -61,   -61,   -61,
     -61,   -61,   -56,   -56,   130,   131,   -56,   -56,   -60,     0,
       0,     0,     0,   -60,     0,     0,   -60,   -60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,     0,
       0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,
     -60
};

static const yytype_int16 yycheck[] =
{
       0,    21,   121,     3,    54,   146,   178,   148,    47,   217,
      27,     6,   109,   109,   249,   348,    33,    12,    47,     6,
      21,     0,   250,     7,    47,    12,    21,    44,    12,     7,
      47,     6,    41,     5,    12,    52,    53,    12,    55,    56,
       6,    47,     6,     5,     7,     6,     5,     9,    12,     6,
     146,    38,    14,    82,    38,    72,   121,   121,    44,    82,
      22,    78,    79,    38,    39,    82,    28,    29,    30,    31,
      34,    35,    38,   281,    38,    39,    41,    38,    40,    41,
      42,    38,    39,   100,   101,   102,   103,     6,     5,     5,
     423,     7,   109,   122,   123,     3,    13,   126,    21,   122,
     123,   121,   337,   132,   121,   122,   123,   146,    41,   126,
     338,     6,     6,     6,   286,   132,   122,   146,    12,    38,
      39,   121,     3,   146,     6,   142,   143,     6,   145,   146,
      12,   148,     6,    12,     5,   121,    47,   154,    12,    21,
     146,    34,    35,    38,    39,    38,    39,     0,     1,   166,
      41,   168,   360,     8,     9,   172,   142,     6,   175,    38,
      39,     6,   370,    12,    38,    39,   183,   184,    21,     6,
       5,    82,    27,     5,   382,    12,     5,     9,    13,     7,
     197,   198,   168,     7,    12,    17,   172,     7,    12,   175,
      22,    23,    12,    38,    39,     5,    28,    29,    30,    31,
     217,   218,   410,     5,    47,   346,     5,     5,    40,    41,
      42,   122,   123,     6,     5,   126,   239,     7,     6,    12,
     237,   238,   239,     6,    12,     8,     9,    10,    11,    12,
       5,     5,    15,    16,   442,   146,     0,     1,     6,    82,
       7,   258,   259,     6,    27,    38,    39,     0,     1,   457,
       7,    34,    35,    36,    37,    38,    39,    21,     7,   298,
     277,   278,   279,   280,   281,    41,     6,   284,    21,   298,
      38,    39,    12,     5,   291,   298,     7,     9,   284,   122,
     123,   298,   510,     7,     7,   302,   303,     6,    12,     6,
      22,     7,   298,    12,   323,    12,    28,    29,    30,    31,
     323,     7,    41,   146,   321,   322,   323,   346,    40,    41,
      42,     5,    27,     7,     6,     9,     6,   346,     0,     1,
      14,    38,    39,   346,     7,     6,     5,    21,    22,   346,
       9,   348,   560,   430,    28,    29,    30,    31,     6,    21,
     346,    41,     6,   360,   361,   362,    40,    41,    42,    28,
      29,    30,    31,   370,   371,   372,     6,     0,     1,     7,
       6,    40,    41,    42,    12,   382,     5,     7,     6,   398,
       9,     7,    12,   396,    12,     6,    12,   427,    21,   396,
     397,   398,   399,   400,   401,   402,     7,   298,     7,    28,
      29,    30,    31,   410,   411,   412,   413,   414,    38,    39,
       7,    40,    41,    42,     6,     6,   423,    13,   425,   426,
      12,    12,   323,   430,   431,     7,     5,     6,   537,     8,
       9,    10,    11,    12,     7,   442,   443,   444,   445,   446,
     459,   460,   461,   462,     7,   346,   459,   460,   535,   535,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       6,   468,     7,   459,     7,   298,    12,     7,     0,     1,
     601,     7,    12,     6,    27,     6,    12,     8,     9,    12,
      27,    12,   537,   537,     6,     5,    33,     5,     7,    21,
     323,   600,   468,    12,    34,    35,   397,    44,    38,    39,
      47,     6,    38,    39,     5,    52,    53,    12,    55,    56,
     619,     7,   621,   346,   623,   601,    12,     7,     6,    38,
      39,   528,    12,     6,    12,    72,     5,   537,   535,    12,
     537,    78,    79,     6,     6,    82,     0,     1,     5,    12,
      12,     6,    38,    39,   551,   600,   600,   537,    38,    39,
       0,     1,   528,   100,   101,   102,   103,    21,   459,   460,
     461,   537,   109,     5,   619,   619,   621,   621,   623,   623,
       5,    21,   601,     7,   121,   122,   123,     5,    12,   126,
       6,     6,   601,     0,     1,   132,    12,    12,   601,     5,
     600,     6,     6,   600,   601,   142,   143,    12,   145,   146,
       6,   148,     0,     1,    21,   601,    12,   154,     5,   619,
     600,   621,   619,   623,   621,     7,   623,     7,     6,   166,
      12,   168,    12,    21,   600,   172,   459,   460,   175,   619,
       5,   621,     6,   623,     8,     9,   183,   184,     1,     5,
       3,     4,     6,   619,     6,   621,     6,   623,    12,    27,
     197,   198,    12,     6,     6,    18,    19,    20,    21,    12,
      12,    24,    25,    26,     7,    28,    29,    30,    31,    32,
     217,   218,     7,     8,     9,    33,    27,    12,    41,     1,
       5,     3,     4,     6,     5,     8,     9,    10,    11,    12,
     237,   238,   239,     5,    52,    53,    18,    19,    20,    21,
     601,     5,    24,    25,    26,     5,    28,    29,    30,    31,
      32,   258,   259,     7,     8,     9,    10,    11,    12,    41,
      78,    79,     6,     5,     8,     9,     8,     9,    10,    11,
     277,   278,   279,   280,   281,     5,     6,   284,     6,     9,
       8,     9,    12,     5,   291,    27,     6,    17,     8,     9,
      27,   298,    22,    23,     5,   302,   303,     5,    28,    29,
      30,    31,     8,     9,    10,    11,     5,     5,   601,     5,
      40,    41,    42,     5,   321,   322,   323,    28,    29,    30,
      31,    27,     7,     8,     9,   143,     5,   145,     5,    40,
      41,    42,     5,     5,     5,     7,   154,     9,    41,   346,
       7,   348,    14,     8,     9,    10,    11,     5,   166,    21,
      22,     5,     7,   360,   361,   362,    28,    29,    30,    31,
       5,     5,    27,   370,   371,   372,     5,     5,    40,    41,
      42,     5,    41,     5,     5,   382,     7,     8,     9,    10,
      11,    12,     5,     5,    28,    29,    30,    31,     5,   396,
     397,   398,   399,   400,   401,   402,    40,    41,    42,   217,
      41,     6,     6,   410,   411,   412,   413,   414,     5,     7,
       6,     6,     9,     8,     9,    41,   423,    41,   425,   426,
      17,    41,     6,   430,   431,    22,    23,     6,    41,     8,
       9,    28,    29,    30,    31,   442,   443,   444,   445,   446,
       6,    41,    41,    40,    41,    42,    33,     6,    41,     6,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
      47,   468,    13,   281,    41,    52,    53,     6,    55,    56,
       6,     6,     3,   291,     8,     9,    10,    11,     6,     1,
       6,     3,     4,     6,     5,    72,     7,     8,     9,    10,
      11,    78,    79,    27,     6,    82,    18,    19,    20,    21,
       6,     6,    24,    25,    26,     6,    28,    29,    30,    31,
      32,    33,     6,   100,   101,   102,   103,     6,     6,    41,
       6,   528,   109,     6,     8,     9,    10,    11,   535,     6,
     537,     8,     9,    10,    11,   122,   123,     6,     6,   126,
       8,     9,   360,    27,   551,   132,     5,     7,     7,     6,
       9,     5,   370,     6,     6,    14,   143,     6,   145,   146,
       6,   148,    21,    22,   382,     6,     6,   154,     6,    28,
      29,    30,    31,     6,    28,    29,    30,    31,     6,   166,
       6,    40,    41,    42,     6,     6,    40,    41,    42,     7,
       6,     6,   410,   600,   601,     6,   183,   184,     8,     9,
      10,    11,     6,     8,     9,    10,    11,   425,   426,     6,
     197,   198,   619,   431,   621,     6,   623,    27,     1,     6,
       3,     4,    27,     7,   442,     7,     8,     9,    10,    11,
     217,   218,   219,     7,     7,    18,    19,    20,    21,   457,
     458,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
     237,   238,   239,    -1,    -1,    -1,    33,     6,    41,     8,
       9,    10,    11,     5,    -1,    -1,     6,     9,     8,     9,
      47,   258,   259,    -1,    -1,    52,    53,    -1,    55,    56,
      22,    -1,     6,     5,     8,     9,    28,    29,    30,    31,
     277,   278,   279,   280,   281,    72,    -1,   284,    40,    41,
      42,    78,    79,    -1,   291,    82,    28,    29,    30,    31,
      -1,   298,    -1,    -1,    -1,   302,   303,    -1,    40,    41,
      42,    -1,    -1,   100,   101,   102,   103,     5,    -1,    -1,
      -1,     9,   109,   551,   321,   322,   323,    -1,     8,     9,
      10,    11,    -1,    -1,    22,   122,   123,    -1,    -1,   126,
      28,    29,    30,    31,    -1,   132,     5,    27,    -1,   346,
       9,    -1,    40,    41,    42,    -1,   143,    -1,   145,   146,
      -1,   148,    -1,   360,   361,   362,    -1,   154,    -1,    28,
      29,    30,    31,   370,   371,   372,    -1,    -1,    -1,   166,
      -1,    40,    41,    42,    -1,   382,    -1,    -1,   385,   386,
       8,     9,    10,    11,    -1,    -1,   183,   184,    -1,   396,
     397,   398,   399,   400,   401,   402,    -1,    -1,    -1,    27,
     197,   198,    -1,   410,   411,   412,   413,   414,     5,    -1,
       5,     6,     9,     8,     9,    10,    11,    14,   425,   426,
     217,   218,    -1,   430,   431,    22,     7,     8,     9,    10,
      11,    28,    29,    30,    31,   442,   443,   444,   445,   446,
     237,   238,   239,    40,    41,    42,    33,    -1,    -1,    -1,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
      47,   258,   259,    -1,    -1,    52,    53,    -1,    55,     8,
       9,    10,    11,     5,    -1,    -1,    -1,     9,    -1,    -1,
     277,   278,   279,   280,   281,    72,    -1,   284,    27,    -1,
      22,    78,    79,    -1,   291,    82,    28,    29,    30,    31,
      -1,   298,    -1,    -1,    -1,   302,   303,    -1,    40,    41,
      42,    -1,    -1,   100,   101,    -1,    -1,     5,    -1,    -1,
      -1,     9,   109,    -1,   321,   322,   323,    -1,   535,     8,
       9,    10,    11,    -1,    22,   122,   123,    -1,    -1,   126,
      28,    29,    30,    31,   551,   132,     5,    -1,    27,   346,
       9,    -1,    40,    41,    42,    -1,   143,    -1,   145,   146,
      -1,   148,    -1,   360,   361,   362,    -1,   154,    -1,    28,
      29,    30,    31,   370,   371,   372,    -1,    -1,    -1,   166,
      -1,    40,    41,    42,    -1,   382,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,   601,    -1,   183,    -1,    -1,   396,
     397,   398,   399,   400,   401,   402,    27,    -1,    -1,    -1,
     197,    -1,    -1,   410,   411,   412,   413,   414,     5,    -1,
      -1,     6,     9,     8,     9,    10,    11,    14,   425,   426,
     217,   218,    -1,   430,   431,    22,     7,     8,     9,    10,
      11,    28,    29,    30,    31,   442,   443,   444,   445,   446,
     237,    -1,   239,    40,    41,    42,    33,    -1,    -1,    -1,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
      47,   258,    -1,    -1,    -1,    52,    53,    -1,    55,     8,
       9,    10,    11,     5,    -1,    -1,    -1,     9,    -1,    -1,
     277,   278,   279,   280,   281,    72,    -1,   284,    27,    -1,
      22,    78,    79,    -1,   291,    82,    28,    29,    30,    31,
      -1,   298,    -1,    -1,    -1,   302,    -1,    -1,    40,    41,
      42,     8,     9,    10,    11,     8,     9,    10,    11,    -1,
      -1,    -1,   109,    -1,   321,    -1,   323,    -1,   535,     5,
      27,    -1,    -1,     9,    27,   122,   123,    -1,    -1,   126,
      -1,    17,    -1,    -1,   551,   132,    22,    23,    -1,   346,
      -1,    -1,    28,    29,    30,    31,   143,    -1,   145,   146,
      -1,   148,    -1,   360,    40,    41,    42,   154,    -1,     8,
       9,    10,    11,   370,     8,     9,    10,    11,    -1,   166,
      -1,     5,    -1,    -1,    -1,   382,   383,   384,    27,     8,
       9,    10,    11,    27,   601,    -1,   183,    -1,    -1,   396,
     397,   398,   399,   400,    28,    29,    30,    31,    27,    -1,
     197,     6,    -1,   410,   411,   412,    40,    41,    42,    -1,
      15,    16,    -1,    74,    75,    76,    -1,    -1,   425,   426,
     217,   218,    27,   430,   431,    -1,    33,    -1,    -1,    34,
      35,    36,    37,    38,    39,   442,   443,   444,    -1,     5,
     237,    -1,   239,     9,    -1,    52,    53,    -1,    55,    -1,
     457,   458,   459,   460,   461,   462,   463,   464,    -1,    -1,
      -1,   258,    28,    29,    30,    31,     8,     9,    10,    11,
      -1,    78,    79,    -1,    40,    41,    42,    -1,    -1,     1,
      -1,     3,     4,    -1,   281,    27,     6,   284,     8,     9,
      10,    11,    12,    -1,   291,    -1,    18,    19,    20,    21,
      -1,   298,    24,    25,    26,   302,    28,    29,    30,    31,
      32,    33,     8,     9,    10,    11,    -1,    -1,     6,    41,
       8,     9,    10,    11,   321,    -1,   323,    -1,   535,    -1,
       6,    27,     8,     9,    10,    11,   143,     1,   145,     3,
       4,    -1,    -1,    -1,   551,    -1,    -1,   154,     6,   346,
       8,     9,    10,    11,    18,    19,    20,    21,    -1,   166,
      24,    25,    26,   360,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,   370,    -1,    -1,   183,    41,    -1,     5,
       6,    -1,    -1,     9,    -1,   382,    -1,    -1,    14,    -1,
     197,    -1,    -1,    -1,   601,    21,    22,    -1,    -1,   396,
     397,   398,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
     217,   218,    -1,   410,    40,    41,    42,    -1,    -1,     1,
      -1,     3,     4,     7,     8,     9,    10,    11,   425,   426,
     237,    -1,    -1,   430,   431,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,   442,    28,    29,    30,    31,
      32,   258,     1,    -1,     3,     4,    -1,    -1,    -1,    41,
     457,   458,   459,   460,   461,   462,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,   281,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,   291,    -1,    -1,    -1,    -1,   350,
     351,   352,    41,    -1,    -1,   302,   357,   358,   359,    -1,
       5,    -1,     7,    -1,     9,    -1,   367,   368,   369,    14,
      -1,    -1,    -1,    -1,   321,    -1,    21,    22,   379,   380,
     381,    -1,    -1,    28,    29,    30,    31,     7,     8,     9,
      10,    11,   393,   394,   395,    40,    41,    42,   535,    -1,
      -1,    -1,     1,    -1,     3,     4,   407,   408,   409,    -1,
      -1,    -1,    -1,   360,   551,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,   370,     5,    24,    25,    26,   429,    28,
      29,    30,    31,    32,    33,   382,    -1,    -1,   439,   440,
     441,     6,    41,     8,     9,    10,    11,    28,    29,    30,
      31,    -1,    -1,   454,   455,   456,    -1,    -1,    -1,    40,
      41,    42,    -1,   410,   601,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     7,     8,     9,    10,    11,   425,   426,
      -1,    -1,    -1,    -1,   431,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,   442,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,    -1,    -1,    -1,    41,
     457,   458,     6,    -1,     8,     9,    10,    11,    12,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,    -1,
      -1,     6,    41,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,    -1,    -1,     6,    41,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,     1,   551,     3,     4,     6,    41,     8,
       9,    10,    11,    12,     7,     8,     9,    10,    11,    12,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
      -1,    -1,     6,    41,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,     6,    41,     8,     9,    10,
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
      32,    33,     1,    -1,     3,     4,    -1,    -1,     6,    41,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    18,
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
       9,    10,    11,     6,    41,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,     6,
       3,     8,     9,    10,    11,     6,    41,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       5,     6,    -1,    -1,     9,    -1,    -1,    -1,    41,    14,
      -1,     6,    -1,     8,     9,    -1,    21,    22,    -1,    -1,
      15,    16,    -1,    28,    29,    30,    31,    -1,    -1,     5,
       6,    -1,    27,     9,    -1,    40,    41,    42,    14,    34,
      35,    36,    37,    38,    39,    21,    22,     7,     8,     9,
      10,    11,    28,    29,    30,    31,    -1,    -1,     5,     6,
      -1,    -1,     9,    -1,    40,    41,    42,    14,     7,     8,
       9,    10,    11,     5,    21,    22,    -1,     9,    -1,    -1,
      -1,    28,    29,    30,    31,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,     7,     8,     9,    10,    11,     5,    21,    22,
      -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    40,    41,    42,
      28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,
       9,    -1,    40,    41,    42,    14,     6,    -1,     8,     9,
      10,    11,    21,    22,     7,     8,     9,    10,    11,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    40,    41,    42,    14,     7,     8,     9,    10,    11,
       5,    -1,    22,    -1,     9,    -1,    -1,    -1,    28,    29,
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
      40,    41,    42,    28,    29,    30,    31,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    40,    41,    42,    28,    29,
      30,    31,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      40,    41,    42,    -1,    40,    41,    42,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,     6,    -1,     8,     9,    10,    11,    34,
      35,    36,    37,    38,    39,     5,    -1,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,     5,     6,
      -1,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,     6,    -1,     8,     9,    10,    11,    34,    35,    36,
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
      38,    39,    27,     7,     8,     9,    10,    11,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
       7,     8,     9,    10,    11,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,     7,     8,     9,
      10,    11,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,     8,     9,    10,    11,    12,    -1,
      27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    27,     7,     8,     9,    10,    11,    -1,
      34,    35,    36,    37,    38,    39,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,
      -1,     8,     9,    10,    11,    12,    -1,    27,    15,    16,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      27,     7,     8,     9,    10,    11,    -1,    34,    35,    36,
      37,    38,    39,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,
      10,    11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,     7,     8,
       9,    10,    11,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,     6,    -1,     8,     9,    10,    11,    12,
      -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,
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
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    27,    15,
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
      -1,    -1,    12,    -1,    27,    15,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
       7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39,     7,
      -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,    37,
      38,    39,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    46,    47,    48,    49,    53,    41,     0,     1,
      48,    50,    54,     5,     7,    51,    21,    55,    41,     6,
      12,    52,    21,     3,    57,    41,     4,    58,     1,    18,
      19,    20,    21,    24,    25,    26,    28,    29,    30,    31,
      32,    41,    53,    57,    59,    60,    61,    62,    63,    76,
      77,     5,     5,     5,    41,     5,     9,    17,    22,    23,
      40,    41,    42,    76,    77,    78,    79,    80,    81,    82,
      83,     5,     5,     5,     5,     5,     5,     5,     5,    13,
       4,    60,    14,    22,    67,    68,    69,    70,    72,    73,
      81,     7,     7,    41,    78,    78,    79,    81,    83,     7,
       8,     9,    10,    11,    75,    78,     7,    21,    41,    64,
      65,    66,    67,    41,    75,    75,    75,    56,    78,    78,
      69,     6,    38,    39,    34,    35,    71,    15,    16,    27,
      36,    37,    74,     6,     6,     6,     6,     6,    82,    82,
      83,    83,     6,    27,    41,    13,    64,     7,    12,     6,
       6,     6,     6,     6,    12,     7,    60,    68,    69,    72,
      73,     7,     7,     7,    60,    78,    13,    78,     6,    65,
      66,    78,    33,    78,    60,     6,    60,    60,     3,    28,
      29,    30,    31,     5,     9,    28,    29,    30,    31,    40,
      41,    42,    76,    77,    80,    82,    83,     5,     9,    17,
      22,    23,    28,    29,    30,    31,    40,    41,    42,    76,
      77,    79,    80,    81,    82,    83,    54,     5,     5,     9,
      17,    22,    23,    28,    29,    30,    31,    40,    41,    42,
      76,    77,    79,    80,    81,    82,    83,     5,     9,    14,
      22,    28,    29,    30,    31,    40,    42,    68,    69,    70,
      72,    73,    76,    77,    80,    81,    82,    83,     5,     9,
      17,    22,    23,    28,    29,    30,    31,    40,    41,    42,
      76,    77,    79,    80,    81,    82,    83,     8,     9,     8,
       9,     5,     7,    65,    38,     1,     3,    18,    19,    20,
      21,    24,    25,    26,    41,    53,    57,    61,    62,    63,
      76,    77,     5,     9,    17,    22,    23,    28,    29,    30,
      31,    40,    41,    42,    76,    77,    79,    80,    81,    82,
      83,     5,     9,    14,    21,    22,    28,    29,    30,    31,
      40,    41,    42,    66,    67,    68,    69,    70,    72,    73,
      76,    77,    80,    81,    82,    83,    12,     4,    58,     5,
       5,     5,     5,    79,    81,    83,     5,     5,     5,     5,
       5,    10,    11,    79,    81,    83,     5,     5,     5,     5,
       5,    10,    11,     7,    56,    79,    81,    83,     5,     5,
       5,     5,     5,     8,     9,    10,    11,    79,    81,    41,
      83,    69,     5,     5,     5,     5,    39,    71,    74,     8,
       9,    10,    11,    79,    81,    83,     5,     5,     5,     5,
       5,     8,     9,    10,    11,    82,    82,    82,    82,    56,
       7,    68,     4,    58,     5,     5,     5,    41,    78,     5,
       5,    13,    67,     7,     7,    79,    81,    83,     5,     5,
       5,     5,     5,     8,     9,    10,    11,    79,    81,    41,
      83,    69,    41,     5,     5,     5,     5,     5,    13,    38,
      39,    71,    74,     8,     9,    10,    11,    66,    59,    41,
      75,    75,    75,     6,     6,    41,    75,    75,    75,    56,
      83,    83,     6,     6,    41,    75,    75,    75,    56,    83,
      83,     6,     6,     6,    41,    75,    75,    75,    56,    82,
      82,    83,    83,     6,     6,    41,    75,    75,    75,    69,
      72,    73,    82,    82,    83,    83,     6,     6,    41,    75,
      75,    75,    56,    82,    82,    83,    83,     6,    59,    41,
      78,    78,    54,     7,    75,    64,    78,     6,     6,     6,
      41,    75,    75,    75,    56,    82,    82,    83,    83,     6,
       6,    13,    41,    75,    75,    75,    56,    78,    68,    69,
      72,    73,    82,    82,    83,    83,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     4,     6,     6,     6,     7,
       6,    64,     7,    60,     6,     6,     6,     6,     6,    78,
       6,     6,     6,     6,     6,     7,     7,     7,    60,     6,
      65,    33,    60,     6,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    51,
      52,    49,    54,    53,    55,    55,    55,    56,    56,    56,
      58,    57,    57,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    75,
      76,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     0,
       0,     9,     0,     4,     4,     2,     0,     3,     1,     0,
       0,     4,     2,     2,     1,     1,     1,     1,     2,     2,
       1,     5,     5,     5,     4,     3,     1,     2,     4,     6,
       5,     6,     7,     1,     2,     1,     3,     1,     4,     3,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     2,
       1,     1,     1,     3,     1
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
#line 2758 "parser/parser.c"
    break;

  case 6: /* stmt: func_stmt  */
#line 61 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2764 "parser/parser.c"
    break;

  case 7: /* stmt: var_decl_stmt  */
#line 62 "parser/c7.y"
                           { add_ast((yyvsp[0].expression)); }
#line 2770 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 65 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
                insert_symbol((yyvsp[0].int_value));
            }
#line 2779 "parser/parser.c"
    break;

  case 9: /* $@2: %empty  */
#line 68 "parser/c7.y"
                          {
                push_scope((yyvsp[-2].int_value));
            }
#line 2787 "parser/parser.c"
    break;

  case 10: /* $@3: %empty  */
#line 70 "parser/c7.y"
                                         {
                pop_scope();
            }
#line 2795 "parser/parser.c"
    break;

  case 11: /* func_stmt: TYPE ID $@1 PARENT_LEFT $@2 param_list PARENT_RIGHT $@3 compound_block_stmt  */
#line 72 "parser/c7.y"
                                     {
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-8].str_value)), create_var_expr((yyvsp[-7].int_value)), (yyvsp[-3].expression), (yyvsp[0].expression));
                free((yyvsp[-8].str_value));
            }
#line 2804 "parser/parser.c"
    break;

  case 12: /* $@4: %empty  */
#line 78 "parser/c7.y"
                                {
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    insert_symbol((yyvsp[0].int_value));
                }
#line 2813 "parser/parser.c"
    break;

  case 13: /* var_decl_stmt: TYPE ID $@4 SEMICOLON  */
#line 81 "parser/c7.y"
                            {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)));
                    free((yyvsp[-3].str_value));
                }
#line 2822 "parser/parser.c"
    break;

  case 14: /* param_list: param_list COMMA TYPE ID  */
#line 87 "parser/c7.y"
                                                {
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                insert_symbol((yyvsp[0].int_value));
                free((yyvsp[-1].str_value));
            }
#line 2833 "parser/parser.c"
    break;

  case 15: /* param_list: TYPE ID  */
#line 93 "parser/c7.y"
                            {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)));
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                insert_symbol((yyvsp[0].int_value));
                free((yyvsp[-1].str_value));
            }
#line 2844 "parser/parser.c"
    break;

  case 16: /* param_list: %empty  */
#line 99 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2852 "parser/parser.c"
    break;

  case 17: /* simple_param_list: simple_param_list COMMA simple_expr  */
#line 104 "parser/c7.y"
                                                                {
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression));
                    }
#line 2860 "parser/parser.c"
    break;

  case 18: /* simple_param_list: simple_expr  */
#line 107 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2866 "parser/parser.c"
    break;

  case 19: /* simple_param_list: %empty  */
#line 108 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2872 "parser/parser.c"
    break;

  case 20: /* $@5: %empty  */
#line 111 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 2880 "parser/parser.c"
    break;

  case 21: /* compound_block_stmt: BRACK_LEFT $@5 block_stmts BRACK_RIGHT  */
#line 113 "parser/c7.y"
                                                 {
                        (yyval.expression) = (yyvsp[-1].expression);
                        pop_scope();
                    }
#line 2889 "parser/parser.c"
    break;

  case 22: /* compound_block_stmt: BRACK_LEFT BRACK_RIGHT  */
#line 117 "parser/c7.y"
                                              {
                        (yyval.expression) = create_empty_expr();
                    }
#line 2897 "parser/parser.c"
    break;

  case 23: /* block_stmts: block_stmts block_item  */
#line 122 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression)); 
            }
#line 2905 "parser/parser.c"
    break;

  case 24: /* block_stmts: block_item  */
#line 125 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2911 "parser/parser.c"
    break;

  case 25: /* block_item: var_decl_stmt  */
#line 128 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2917 "parser/parser.c"
    break;

  case 26: /* block_item: block_stmt  */
#line 129 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2923 "parser/parser.c"
    break;

  case 27: /* block_stmt: compound_block_stmt  */
#line 132 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2929 "parser/parser.c"
    break;

  case 28: /* block_stmt: func_call SEMICOLON  */
#line 133 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2935 "parser/parser.c"
    break;

  case 29: /* block_stmt: set_func_call SEMICOLON  */
#line 134 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 2941 "parser/parser.c"
    break;

  case 30: /* block_stmt: flow_control  */
#line 135 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 2947 "parser/parser.c"
    break;

  case 31: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 136 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value))); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                free((yyvsp[-4].str_value));
            }
#line 2957 "parser/parser.c"
    break;

  case 32: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 141 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2966 "parser/parser.c"
    break;

  case 33: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 145 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression)); 
                free((yyvsp[-4].str_value));
            }
#line 2975 "parser/parser.c"
    break;

  case 34: /* block_stmt: ID ASSIGN simple_expr SEMICOLON  */
#line 149 "parser/c7.y"
                                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-3].int_value)), create_char_expr((yyvsp[-2].char_value)), (yyvsp[-1].expression));
                set_id_type((yyvsp[-3].int_value), ST_ID_VAR); 
            }
#line 2984 "parser/parser.c"
    break;

  case 35: /* block_stmt: RETURN simple_expr SEMICOLON  */
#line 153 "parser/c7.y"
                                                 {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-2].str_value)), (yyvsp[-1].expression)); 
                free((yyvsp[-2].str_value));
            }
#line 2993 "parser/parser.c"
    break;

  case 36: /* block_stmt: error  */
#line 157 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 3002 "parser/parser.c"
    break;

  case 37: /* flow_control_if: IF PARENT_LEFT  */
#line 163 "parser/c7.y"
                                    {
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 3011 "parser/parser.c"
    break;

  case 38: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item  */
#line 169 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 3019 "parser/parser.c"
    break;

  case 39: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item ELSE block_item  */
#line 172 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 3028 "parser/parser.c"
    break;

  case 40: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_item  */
#line 176 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-4].str_value));
                }
#line 3037 "parser/parser.c"
    break;

  case 41: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_item  */
#line 180 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 3046 "parser/parser.c"
    break;

  case 42: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_item  */
#line 184 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 3055 "parser/parser.c"
    break;

  case 43: /* opt_param: SEMICOLON  */
#line 190 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 3061 "parser/parser.c"
    break;

  case 44: /* opt_param: for_expression SEMICOLON  */
#line 191 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 3067 "parser/parser.c"
    break;

  case 45: /* for_expression: decl_or_cond_expr  */
#line 194 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3073 "parser/parser.c"
    break;

  case 46: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 195 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression)); 
                }
#line 3081 "parser/parser.c"
    break;

  case 47: /* decl_or_cond_expr: or_cond_expr  */
#line 200 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3087 "parser/parser.c"
    break;

  case 48: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 201 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        free((yyvsp[-3].str_value));
                    }
#line 3098 "parser/parser.c"
    break;

  case 49: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 207 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                    }
#line 3107 "parser/parser.c"
    break;

  case 50: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 213 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3116 "parser/parser.c"
    break;

  case 51: /* or_cond_expr: and_cond_expr  */
#line 217 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3122 "parser/parser.c"
    break;

  case 52: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 220 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                    free((yyvsp[-1].str_value));
                }
#line 3131 "parser/parser.c"
    break;

  case 53: /* and_cond_expr: unary_cond_expr  */
#line 224 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3137 "parser/parser.c"
    break;

  case 54: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 227 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                }
#line 3145 "parser/parser.c"
    break;

  case 55: /* unary_cond_expr: eq_cond_expr  */
#line 230 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3151 "parser/parser.c"
    break;

  case 56: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 233 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3159 "parser/parser.c"
    break;

  case 57: /* eq_cond_expr: rel_cond_expr  */
#line 236 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3165 "parser/parser.c"
    break;

  case 58: /* equal_ops: EQ_OP  */
#line 239 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3174 "parser/parser.c"
    break;

  case 59: /* equal_ops: NE_OP  */
#line 243 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3183 "parser/parser.c"
    break;

  case 60: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 249 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression));
                }
#line 3191 "parser/parser.c"
    break;

  case 61: /* rel_cond_expr: rel_cond_stmt  */
#line 252 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3197 "parser/parser.c"
    break;

  case 62: /* rel_cond_stmt: arith_expr  */
#line 255 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3203 "parser/parser.c"
    break;

  case 63: /* rel_cond_stmt: EMPTY  */
#line 256 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3212 "parser/parser.c"
    break;

  case 64: /* rel_ops: L_OP  */
#line 262 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3218 "parser/parser.c"
    break;

  case 65: /* rel_ops: G_OP  */
#line 263 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3224 "parser/parser.c"
    break;

  case 66: /* rel_ops: LE_OP  */
#line 264 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3233 "parser/parser.c"
    break;

  case 67: /* rel_ops: GE_OP  */
#line 268 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3242 "parser/parser.c"
    break;

  case 68: /* rel_ops: IN  */
#line 272 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3251 "parser/parser.c"
    break;

  case 69: /* set_expr: simple_expr IN simple_expr  */
#line 278 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression)); 
                free((yyvsp[-1].str_value));
            }
#line 3260 "parser/parser.c"
    break;

  case 70: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 284 "parser/c7.y"
                                                                  {
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression)); 
                set_id_type((yyvsp[-3].int_value), ST_ID_FUNC);
            }
#line 3269 "parser/parser.c"
    break;

  case 71: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 290 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value))); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3279 "parser/parser.c"
    break;

  case 72: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 295 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3288 "parser/parser.c"
    break;

  case 73: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 299 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression)); 
                    free((yyvsp[-3].str_value));
                }
#line 3297 "parser/parser.c"
    break;

  case 74: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 303 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression));
                    free((yyvsp[-3].str_value)); 
                }
#line 3306 "parser/parser.c"
    break;

  case 75: /* simple_expr: arith_expr  */
#line 309 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3312 "parser/parser.c"
    break;

  case 76: /* simple_expr: func_cte_expr  */
#line 310 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3318 "parser/parser.c"
    break;

  case 77: /* func_cte_expr: EMPTY  */
#line 313 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3327 "parser/parser.c"
    break;

  case 78: /* func_cte_expr: STRING  */
#line 317 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3336 "parser/parser.c"
    break;

  case 79: /* func_cte_expr: CHAR  */
#line 321 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3344 "parser/parser.c"
    break;

  case 80: /* func_expr: func_call  */
#line 326 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3350 "parser/parser.c"
    break;

  case 81: /* func_expr: set_func_call  */
#line 327 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3356 "parser/parser.c"
    break;

  case 82: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 328 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3362 "parser/parser.c"
    break;

  case 83: /* arith_expr: arith_expr ADD term  */
#line 331 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3370 "parser/parser.c"
    break;

  case 84: /* arith_expr: arith_expr SUB term  */
#line 334 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
            }
#line 3378 "parser/parser.c"
    break;

  case 85: /* arith_expr: term  */
#line 337 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3384 "parser/parser.c"
    break;

  case 86: /* term: term MULT factor  */
#line 340 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3392 "parser/parser.c"
    break;

  case 87: /* term: term DIV factor  */
#line 343 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression));
        }
#line 3400 "parser/parser.c"
    break;

  case 88: /* term: factor  */
#line 346 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3406 "parser/parser.c"
    break;

  case 89: /* term: SUB factor  */
#line 347 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
        }
#line 3414 "parser/parser.c"
    break;

  case 90: /* factor: INTEGER  */
#line 352 "parser/c7.y"
                     { (yyval.expression) = create_int_expr((yyvsp[0].int_value)); }
#line 3420 "parser/parser.c"
    break;

  case 91: /* factor: FLOAT  */
#line 353 "parser/c7.y"
                   { (yyval.expression) = create_float_expr((yyvsp[0].float_value)); }
#line 3426 "parser/parser.c"
    break;

  case 92: /* factor: ID  */
#line 354 "parser/c7.y"
                {
            (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
        }
#line 3435 "parser/parser.c"
    break;

  case 93: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 358 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3441 "parser/parser.c"
    break;

  case 94: /* factor: func_expr  */
#line 359 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3447 "parser/parser.c"
    break;


#line 3451 "parser/parser.c"

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

#line 362 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    parser_error += 1;
}
