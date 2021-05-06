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
  YYSYMBOL_63_7 = 63,                      /* $@7  */
  YYSYMBOL_64_8 = 64,                      /* $@8  */
  YYSYMBOL_flow_control_if = 65,           /* flow_control_if  */
  YYSYMBOL_flow_control = 66,              /* flow_control  */
  YYSYMBOL_opt_param = 67,                 /* opt_param  */
  YYSYMBOL_for_expression = 68,            /* for_expression  */
  YYSYMBOL_decl_or_cond_expr = 69,         /* decl_or_cond_expr  */
  YYSYMBOL_or_cond_expr = 70,              /* or_cond_expr  */
  YYSYMBOL_and_cond_expr = 71,             /* and_cond_expr  */
  YYSYMBOL_unary_cond_expr = 72,           /* unary_cond_expr  */
  YYSYMBOL_eq_cond_expr = 73,              /* eq_cond_expr  */
  YYSYMBOL_equal_ops = 74,                 /* equal_ops  */
  YYSYMBOL_rel_cond_expr = 75,             /* rel_cond_expr  */
  YYSYMBOL_rel_cond_stmt = 76,             /* rel_cond_stmt  */
  YYSYMBOL_rel_ops = 77,                   /* rel_ops  */
  YYSYMBOL_set_expr = 78,                  /* set_expr  */
  YYSYMBOL_func_call = 79,                 /* func_call  */
  YYSYMBOL_set_func_call = 80,             /* set_func_call  */
  YYSYMBOL_simple_expr = 81,               /* simple_expr  */
  YYSYMBOL_func_cte_expr = 82,             /* func_cte_expr  */
  YYSYMBOL_func_expr = 83,                 /* func_expr  */
  YYSYMBOL_arith_expr = 84,                /* arith_expr  */
  YYSYMBOL_term = 85,                      /* term  */
  YYSYMBOL_factor = 86                     /* factor  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5498

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  633

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
       0,    53,    53,    56,    59,    62,    63,    67,    73,    79,
      81,    73,    91,    91,   104,   113,   122,   127,   131,   135,
     138,   138,   144,   144,   152,   156,   162,   163,   166,   167,
     168,   169,   170,   176,   180,   184,   184,   192,   192,   198,
     204,   211,   214,   218,   222,   226,   232,   233,   236,   237,
     242,   243,   250,   257,   261,   264,   268,   271,   274,   277,
     280,   283,   287,   293,   296,   299,   300,   306,   307,   308,
     312,   316,   322,   328,   338,   343,   347,   351,   357,   358,
     361,   365,   369,   374,   375,   376,   379,   382,   385,   388,
     391,   394,   395,   400,   405,   410,   424,   425
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
  "block_item", "block_stmt", "$@7", "$@8", "flow_control_if",
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

#define YYPACT_NINF (-344)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     191,    22,   -33,     9,   197,   236,   275,   284,   208,  -344,
     313,    19,    18,   157,   373,   330,    44,   141,   199,    57,
      60,    85,    71,  2601,   405,   250,   898,    95,  2633,   137,
     150,   175,   154,   159,   198,   209,   222,   225,   226,   241,
     242,    13,  2665,  2697,  2729,  2761,  2793,  3588,  2825,   195,
     270,   473,   239,   269,   269,   283,  3441,  3456,   212,   252,
    3456,  3456,  3456,  3617,    27,  3471,   492,  2857,   269,   297,
    3588,  4836,   611,  3598,  4306,    28,    45,   102,    40,  4849,
    4862,  4319,  4353,  4366,  4742,  4400,  4413,  2889,  2921,   327,
     334,   335,   346,   359,   360,   793,   374,   372,   375,   382,
     742,   371,   673,  2033,    64,   311,     7,   410,   417,   428,
     449,   267,   358,  3441,   460,   960,  4447,   155,  1597,  3588,
    3588,  1032,  1173,  1424,  1602,  1981,  3690,  3705,  3720,  1424,
     230,   230,   297,   297,   470,   472,   481,  2953,   898,   269,
     485,  3486,   987,  2107,  3515,   489,   505,   512,   521,   522,
    3530,   531,  4460,  4494,   638,   169,   171,  4875,  4888,  4507,
    4541,  4554,  4588,  2985,  3017,  3049,  3081,   525,  3486,   343,
     898,   363,   429,   408,  3113,   898,   592,  3145,   898,  3177,
    3209,  2601,   534,   536,   558,   560,   269,   738,   572,   573,
     590,   597,   744,  1216,   989,  1154,  1275,  1500,  1719,  1974,
     580,   269,   920,   604,   626,   633,   639,   646,   647,   668,
    1230,  1411,  1595,  1643,  1658,   636,  2299,   122,  3405,  3413,
     269,  1294,   649,   660,   663,   709,   710,   719,   730,   493,
     454,   540,   783,   796,   676,   838,   295,   842,   877,   269,
    1665,  3646,  5381,   740,   741,   743,   752,  4921,  4934,    98,
     243,   832,  5387,  5420,  4967,  4980,  5013,  5348,  5026,  5059,
     269,  1889,   413,   426,   448,   760,   769,   776,   780,  1652,
    1307,  1702,  1786,  1812,   463,  1833,   499,  1857,  1881,    27,
     362,   362,    27,  2213,   624,  3646,   701,  2601,   790,   792,
     798,   767,   159,   804,   806,    77,  1155,  1329,  1406,  3588,
    1466,   817,   818,   269,  2102,   653,   665,   694,   829,   830,
     831,   833,  1796,  1471,  2169,  2408,  2603,   716,  2636,   732,
    2668,  2700,   269,  2246,  3675,   801,  1532,   849,   850,   851,
     857,  3849,  3788,  3883,   483,    58,    23,    53,   383,  2255,
    4776,  3896,  3930,  3943,  4729,  3977,  3990,  3559,   898,   859,
     823,  3456,  3456,  3456,   862,   973,  2109,   841,  3456,  3456,
    3456,    27,   738,   738,  3241,   878,  1005,  3434,   848,  3456,
    3456,  3456,    27,   791,   791,   920,   920,   884,  1111,   926,
     853,  3456,  3456,  3456,    27,  1061,  1061,  1294,  1294,   890,
    1143,  3801,  5072,   282,   864,  3456,  3456,  3456,  3646,  3735,
    3735,  1650,  1650,  1665,  1665,   900,  1163,  1955,   868,  3456,
    3456,  3456,    27,  1717,  1717,  1889,  1889,   524,  2215,  2290,
     554,  3397,   305,   898,   906,   870,   269,   269,   283,  3441,
    3456,   212,  3471,    83,  1499,  1560,   909,  1184,  2732,   879,
    3456,  3456,  3456,    27,  1760,  1760,  2102,  2102,   915,  1369,
    3836,  4024,   127,   918,   891,  3456,  3456,  3456,    27,  3530,
    3675,  3675,  3750,  3750,  1917,  1917,  2246,  2246,   556,  3273,
    3305,   927,   938,   939,   952,  3115,  3147,   959,   965,   966,
     978,   567,  3179,  3211,  3523,  3567,   981,   984,   985,   996,
     569,  3575,  3633,  3654,  3662,   932,   995,  1004,  1013,  1017,
    1018,   582,  1025,  1103,  1123,  1225,  5105,  5118,  1020,  1026,
    1037,  1041,   323,  5426,  5459,  5151,  5164,  5197,  5210,  2022,
    2040,  1042,  1047,  1049,  1065,   591,  2079,  2205,  2372,  2402,
    4601,  5243,  3337,  1752,  1069,  1070,  1071,   931,  1031,  1076,
    2033,  3441,  1597,  2764,  2796,  1080,  1081,  1082,  1090,   601,
    2828,  2860,  2892,  2924,  4037,  4071,  3530,  1091,  1092,  1094,
    1100,   612,   623,   145,   210,  4789,  4823,  4084,  4118,  4131,
    4165,  3369,  4635,  4648,  4682,  4695,  3243,  3275,  3307,  3339,
    3371,  3683,  3760,  3775,  3822,  3870,  1253,  1268,  1355,  1363,
    1434,  5256,  5289,  5302,  5335,  2437,  2470,  2503,  2536,  2569,
    1829,  1108,  1109,  1115,  1880,  2171,  1597,  3426,  1120,  2301,
    2956,  2988,  3020,  3052,  3084,   685,  4178,  4212,  4225,  4259,
    4272,  2335,  2368,  2403,  2436,  1597,   686,  2469,  1597,  2502,
    1597,  2535,  2568
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -344,  1106,  -344,  -344,  -344,  -344,     0,   -52,
    -344,  -252,   -20,  -168,  -160,  -343,   -32,  -107,   703,   845,
     -71,   -45,   -83,  -101,  -127,   -31,    16,    54,    30,  -244,
      25,   109,  -246,   698,   -16,   414,  1821,   839,  1273,  1885,
    1696,   844
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    11,    15,    21,    42,    12,
      17,   111,    43,    26,    27,    44,    45,    46,   113,    56,
      47,    48,   103,   104,   105,   106,   249,   250,   251,   123,
     252,   253,   129,    98,   232,   233,    99,   234,   235,   236,
     237,   238
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    24,   284,   200,     7,   469,   400,   399,     8,     9,
      49,   298,    67,   348,   -50,   334,    75,   172,    64,   -50,
     142,   349,    -7,    -7,    13,    14,    65,   417,    49,   -54,
     420,    81,   260,   -19,   118,   -54,   261,   195,   195,   -19,
     213,   171,   254,    -7,   262,   285,   -58,   299,   272,   263,
     264,   -54,   195,    81,    81,   265,   266,   267,   268,   -56,
     -10,   -54,   461,    76,   -50,   -56,   119,   269,   270,   271,
     -50,   143,    79,   300,   121,   122,   144,    78,   -58,   -58,
     532,    22,    64,   -54,   120,    18,   154,   254,    23,   542,
     432,   -56,   -56,   463,   462,    79,   460,   213,   297,    51,
      78,    77,   301,    81,    81,   -54,   166,    81,   -56,   481,
     -54,   335,    25,    81,    81,    81,    81,    81,   296,   423,
     490,   119,    49,   195,   117,   315,   341,   424,   254,   -78,
     373,   374,   501,   -57,   272,   155,   -54,   398,   177,   -57,
     -56,   -56,    52,   179,    79,    79,   180,    19,   157,    78,
      78,   -53,   315,    20,    49,    53,    80,   -53,   336,    49,
     525,   -57,    49,    -9,   -37,   -57,   -57,   339,   -37,    -9,
     195,   195,   338,    77,   156,   -53,   -37,   -55,    -9,    80,
      54,   -37,   -37,   -53,   461,   195,   213,   -37,   -37,   -37,
     -37,   549,     1,   -57,   -57,    55,   337,    -2,     1,   -37,
     -37,   -37,    87,    57,   195,   -15,   561,   -53,   120,   -55,
     -55,   -15,     2,    -8,    58,   -12,   -55,   239,     2,   100,
     468,   240,   -55,   195,   254,   254,   241,    59,    80,    80,
      60,    61,    80,   101,   242,    68,    -4,    -4,   158,    69,
     243,   244,   245,   246,   195,   272,    62,    63,   -55,   -55,
     -56,   340,   247,   102,   248,   -56,   -14,    -4,   182,   183,
     184,   185,   -14,   272,   195,   195,   272,   400,   433,   254,
      72,    73,    74,   149,   186,    -5,    -5,    88,   187,   150,
      89,   -56,   -56,    81,    -6,    -6,    90,   195,   315,   -57,
     -12,    91,    92,   107,   -57,   393,    -5,   188,   189,   190,
     191,   422,    68,   385,   386,    -6,   195,   341,   341,   192,
     193,   194,   -53,    -3,    -3,    76,   335,   -53,   -48,   463,
     -57,   -57,   -78,   -48,    79,   182,   183,   184,   185,    78,
     -55,   341,    49,   134,    -3,   -55,   -16,    72,    73,    74,
     -82,   -80,   -16,   -53,   398,   272,   195,   195,   540,   339,
     -52,    16,   -81,    77,   338,   -52,   272,   213,   213,   213,
     213,   -55,   -55,   336,   -18,   135,   -79,   186,   272,   178,
     -18,   187,   339,   -13,   -13,   347,   537,   338,   452,   137,
     136,   138,   254,   254,   254,   254,   254,   254,   254,   -58,
     188,   189,   190,   191,   -13,   -58,   272,   272,   272,   272,
     272,   337,   192,   193,   194,   -11,   -11,    49,    80,   139,
     195,   195,   140,   213,   -17,   254,   145,   121,   122,   -82,
     -17,   -58,   -58,   146,   513,   -82,   -11,   272,   315,   315,
     315,   315,   -80,   340,   147,   298,   -49,    67,   -80,   284,
      50,   -49,   272,   272,   341,   341,   341,   341,   341,   341,
     341,   341,   512,    49,   -81,   148,   340,   607,    50,   384,
     -81,    82,   -95,   -95,   -95,   -95,   152,   196,   196,   -79,
     214,   299,   255,   -23,   -23,   -79,   563,   163,   273,   164,
     334,   -95,   196,    82,    82,   339,   339,   565,   165,   -48,
     338,   338,   -21,   -21,   -23,   -48,   -74,   300,   168,   298,
      67,   -93,   -93,   -93,   -93,   -78,   626,   413,   414,   514,
     609,   -78,   -75,   -21,   337,   564,    49,   255,   298,   -76,
     -93,   298,   297,   298,   254,   213,   301,   214,   -77,   -73,
     530,   -72,   302,    82,    82,   299,   150,    82,   174,   350,
     272,   351,   296,    82,    82,    82,    82,    82,   -94,   -94,
     -94,   -94,    50,   196,   299,   316,   342,   299,   255,   299,
     531,   300,   -49,   352,   273,   353,   150,   -94,   -49,   340,
     340,   340,   566,   580,   624,   585,   335,   357,   358,   150,
     300,   150,   316,   300,    50,   300,   297,   364,   590,    50,
     301,   341,    50,   629,   150,   359,   631,   599,   632,   -51,
     196,   196,   360,   150,   -51,   297,   296,   614,   297,   301,
     297,   -82,   301,   150,   301,   196,   214,   -93,   620,   -93,
     -93,   -93,   -93,   336,   150,   296,   -93,   -93,   296,   -52,
     296,   421,   339,   -80,   196,   -52,   144,   338,   -93,   -41,
     -81,   -41,   -41,   -79,   368,   -93,   -93,   -93,   -93,   -93,
     -93,   369,   370,   196,   255,   255,   -41,   -41,   -41,   -41,
     -82,   337,   -41,   -41,   -41,   -82,   -41,   -41,   -41,   -41,
     -41,   175,   -80,   371,   196,   273,   -82,   -80,   282,   -41,
     -95,   -95,   -95,   -95,   -95,   -95,   141,   -80,   -95,   -95,
     -81,   -51,   630,   273,   196,   196,   273,   -51,   347,   255,
     -95,   -81,   -39,   -79,   -39,   -39,   -81,   -95,   -95,   -95,
     -95,   -95,   -95,    82,   380,   381,   340,   196,   316,   -39,
     -39,   -39,   -39,   -79,   382,   -39,   -39,   -39,   -79,   -39,
     -39,   -39,   -39,   -39,   -39,   383,   196,   342,   342,   -78,
     444,   445,   -39,   186,   -78,   394,   395,   -46,   396,   -46,
     -93,   -46,   -93,   -93,   -93,   -93,   -46,   397,   108,   109,
     110,   342,    50,   -46,   -46,   408,   188,   189,   190,   191,
     -46,   -46,   -46,   -46,   409,   273,   196,   196,   192,   193,
     194,   410,   -46,   -46,   -46,   411,   273,   214,   214,   214,
     214,   -83,   -83,   -83,   -83,   425,   201,   426,   273,   -78,
     202,   280,   281,   427,   -84,   -84,   -84,   -84,   428,   430,
     -83,   431,   255,   255,   255,   255,   255,   255,   255,   206,
     207,   208,   209,   -84,   434,   435,   273,   273,   273,   273,
     273,   210,   211,   212,   439,   440,   441,    50,   442,   -58,
     196,   196,   453,   214,   -58,   255,   -97,   -97,   -97,   -97,
     -88,   -88,   387,   388,   454,   455,   456,   273,   316,   316,
     316,   316,   457,   470,   471,   -97,   121,   122,   475,   -88,
     -58,   -58,   273,   273,   342,   342,   342,   342,   342,   342,
     342,   342,   477,    50,   484,   -91,   -91,   -91,   -91,   486,
     495,    86,    94,    94,   497,   215,   506,   199,   199,    28,
     219,   181,   259,   274,   -91,   508,   519,   114,   278,   521,
     533,   534,   199,   116,    86,   543,    29,    30,    31,    32,
     545,   554,    33,    34,    35,   201,    36,    37,    38,    39,
      40,   556,   557,   572,   -92,   -92,   -92,   -92,   604,    41,
     -85,   -85,   -85,   -85,   573,   574,    50,   259,   206,   207,
     208,   209,   215,   -92,   255,   214,   302,   219,   575,   -85,
     210,   211,   212,    86,    86,   576,   153,    86,   280,   281,
     273,   577,   578,    86,    86,    86,   161,   162,    94,   476,
     317,   280,   281,   199,   579,   321,   346,   581,   259,   274,
     582,   583,   322,   170,   278,   -94,   323,   -94,   -94,   -94,
     -94,   324,   584,   -96,   -96,   -96,   -96,   317,   325,   326,
     586,   485,   321,   280,   281,   327,   328,   329,   330,   587,
     302,   342,   -96,   588,   589,   354,   591,   331,   332,   333,
     199,   356,   592,   -86,   -86,   387,   388,   -61,   605,   302,
     365,   -61,   302,   593,   302,   199,   367,   594,   595,   472,
     473,   474,   -86,   596,   -61,   597,   478,   479,   480,   377,
     -61,   -61,   -61,   -61,   199,   379,   220,   487,   488,   489,
     221,   598,   -61,   -61,   -61,   601,   602,   603,   389,   498,
     499,   500,   606,   199,   392,   259,   610,   611,   612,   225,
     226,   227,   228,   509,   510,   511,   613,   616,   617,   405,
     618,   229,   230,   231,   199,   407,   619,   522,   523,   524,
      10,   -87,   -87,   387,   388,   621,   622,   496,   274,   280,
     281,   274,   623,   278,   199,   199,   278,   627,   539,   259,
     -87,   -89,   -89,   -89,   -89,   541,     0,   429,   546,   547,
     548,     0,   436,    86,     0,     0,     0,   199,   438,   507,
     -89,   280,   281,   558,   559,   560,   -26,     0,   -26,   -26,
     -83,   448,   -83,   -83,   -83,   -83,   199,   451,   346,   520,
       0,   280,   281,   -26,   -26,   -26,   -26,     0,   -62,   -26,
     -26,   -26,   -62,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     544,   346,   280,   281,     0,   -62,   -26,     0,     0,     0,
     274,   -62,   -62,   -62,   -62,   278,   482,   483,     0,     0,
       0,   274,     0,   -62,   -62,   -62,   278,   219,   219,   493,
     494,   361,   -95,   274,   -95,   -95,   -95,   -95,   278,     0,
       0,   504,   505,   -90,   -90,   -90,   -90,   -93,   -93,   -93,
     -93,   -93,   259,   259,   259,   259,   259,   517,   518,     0,
       0,   274,   -90,     0,     0,     0,   278,   278,   278,   528,
     529,   -74,   -74,   -74,   -74,    94,    94,     0,   215,     0,
     199,   199,     0,   219,     0,   259,   -75,   -75,   -75,   -75,
     -74,   -84,   274,   -84,   -84,   -84,   -84,   278,   321,   321,
     552,   553,     0,     0,     0,   -75,     0,   274,   274,   220,
       0,     0,   278,   278,   346,   346,   346,   346,   346,   346,
     569,   570,   412,   -95,     0,   -95,   -95,   -95,   -95,   -95,
      83,     0,   225,   226,   227,   228,   197,   197,     0,   216,
     -28,   256,   -28,   -28,   229,   230,   231,   275,     0,     0,
       0,   197,    83,    83,     0,     0,     0,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -76,   -76,   -76,   -76,     0,     0,     0,
     -28,   -77,   -77,   -77,   -77,   555,   256,   280,   281,     0,
     215,     0,   -76,     0,   259,   219,   216,     0,     0,     0,
     -77,     0,    83,    83,     0,   274,    83,     0,     0,     0,
     278,     0,    83,    83,    83,    83,    83,   -27,     0,   -27,
     -27,     0,   197,     0,   318,   343,   372,   256,   -95,   -95,
     -95,   -95,   -95,   275,   -27,   -27,   -27,   -27,     0,    68,
     -27,   -27,   -27,    69,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   318,   -73,   -73,   -73,   -73,    71,   -27,     0,     0,
       0,   346,   182,   183,   184,   185,     0,     0,     0,   197,
     197,   -73,     0,     0,    72,    73,    74,   -31,     0,   -31,
     -31,     0,     0,     0,   197,   216,   443,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -31,   197,   -31,   -31,   -31,   -31,   -31,   -31,
     -29,     0,   -29,   -29,     0,     0,   -97,   -31,   -97,   -97,
     -97,   -97,   197,   256,   256,     0,     0,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   197,   275,     0,     0,     0,   -66,     0,
     -29,     0,     0,     0,   -66,     0,     0,   -66,   -66,     0,
       0,     0,   275,   197,   197,   275,     0,     0,   256,   -66,
       0,   -30,     0,   -30,   -30,     0,   -66,   -66,   -66,   -66,
     -66,   -66,    83,     0,     0,     0,   197,   318,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   197,   343,   343,   286,     0,
     287,   -30,   -94,   -94,   -94,   -94,   -94,   -67,     0,     0,
       0,   -67,     0,     0,     0,   288,   289,   290,   291,     0,
     343,   292,   293,   294,   -67,    36,    37,    38,    39,    40,
     -67,   -67,   -67,   -67,   275,   197,   197,     0,   295,     0,
       0,     0,   -67,   -67,   -67,   275,   216,   216,   216,   216,
     -83,   -83,   -83,   -83,   -83,   239,     0,   275,   -93,   240,
     -93,   -93,   -93,   -93,   -93,   -84,   -84,   -84,   -84,   -84,
     239,   256,   256,   256,   256,   256,   256,   256,   243,   244,
     245,   246,     0,     0,     0,   275,   275,   275,   275,   275,
     247,   391,   248,   243,   244,   245,   246,     0,     0,   197,
     197,     0,   216,     0,   256,   247,   391,   248,   -94,     0,
     -94,   -94,   -94,   -94,   -94,     0,   275,   318,   318,   318,
     318,     0,   260,     0,     0,   -88,   261,   -88,   -88,   362,
     363,   275,   275,   343,   343,   343,   343,   343,   343,   343,
     343,     0,     0,    85,     0,   265,   266,   267,   268,   198,
     198,     0,   218,   -23,   258,   -23,   -23,   269,   270,   271,
     277,     0,     0,     0,   198,   303,    85,     0,     0,   304,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   308,   309,
     310,   311,   -83,   -23,   -83,   -83,   -83,   -83,   -83,   258,
     312,   313,   314,   -93,   -93,   -93,   -93,   -93,   -93,   218,
       0,     0,     0,   256,   216,    85,    85,     0,   -84,    85,
     -84,   -84,   -84,   -84,   -84,    85,   159,   160,     0,   275,
     -21,     0,   -21,   -21,     0,   198,     0,   320,   345,   -97,
     258,   -97,   -97,   -97,   -97,   -97,   277,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -88,   320,   -88,   -88,   415,   416,   -88,
     -21,     0,     0,     0,    93,    96,     0,    97,     0,     0,
     343,   -13,   198,   -13,   -13,   112,     0,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   260,     0,     0,   198,   -13,   -13,
     -13,   -13,     0,     0,   -13,   -13,   -13,     0,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,   198,   265,   266,   267,
     268,   -13,   322,     0,     0,     0,   323,     0,     0,   269,
     270,   271,    84,     0,   151,   198,     0,   258,    95,    95,
       0,   217,     0,   257,     0,   327,   328,   329,   330,   276,
       0,     0,     0,   115,     0,    84,   198,   331,   450,   333,
     167,   -92,   169,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,   173,     0,     0,     0,   277,   418,   419,   277,     0,
     -91,   258,   -91,   -91,   -91,   -91,   -68,     0,   257,   176,
     -68,     0,     0,     0,     0,    85,     0,     0,   217,   198,
       0,     0,     0,   -68,    84,    84,     0,     0,    84,   -68,
     -68,   -68,   -68,     0,    84,     0,     0,     0,   198,     0,
     345,   -68,   -68,   -68,    95,     0,   319,   344,   -85,   257,
     -85,   -85,   -85,   -85,   -85,   276,     0,     0,   239,     0,
     283,     0,   240,   345,     0,     0,   -96,   241,   -96,   -96,
     -96,   -96,   -96,   319,   101,   242,     0,   277,     0,     0,
       0,   243,   244,   245,   246,     0,     0,     0,   277,   491,
     492,   355,     0,   247,   102,   248,     0,     0,     0,     0,
     277,   502,   503,     0,     0,   -86,   366,   -86,   -86,   415,
     416,   -86,     0,     0,   258,   258,   258,   515,   516,     0,
     112,     0,     0,   112,     0,   378,     0,   303,   277,   526,
     527,     0,   -47,     0,   -47,   -92,   -47,   -92,   -92,   -92,
     -92,   -47,   198,   198,   390,   218,   257,   258,   -47,   -47,
     308,   309,   310,   311,     0,   -47,   -47,   -47,   -47,   277,
     550,   551,   312,   313,   314,   406,     0,   -47,   -47,   -47,
       0,     0,     0,     0,   277,   277,   345,   345,   345,   345,
     567,   568,     0,     0,   276,     0,     0,   276,     0,     0,
     257,     0,   -38,     0,   -38,   -38,   -94,   -94,   -94,   -94,
     -94,   -94,   112,     0,    84,     0,     0,     0,   437,   -38,
     -38,   -38,   -38,   112,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   112,     0,   449,     0,   344,
       0,   -87,   -38,   -87,   -87,   415,   416,   -87,   -46,   -46,
       0,   -86,   -46,   -86,   -86,   362,   363,   -46,     0,     0,
       0,     0,   344,   112,   -46,   -46,   258,   218,     0,     0,
       0,   -46,   -46,   -46,   -46,     0,   276,   535,   536,     0,
     538,   322,   277,   -46,   -46,   -46,     0,   276,     0,     0,
       0,   -60,     0,     0,   112,     0,     0,   -60,     0,   276,
     124,   125,     0,     0,   327,   328,   329,   330,     0,   112,
     562,     0,   126,   257,   257,   257,   331,   450,   333,   -60,
     -60,   127,   128,   -60,   -60,     0,   -87,   276,   -87,   -87,
     362,   363,   -41,   345,   -41,   -41,   -97,   -97,   -97,   -97,
     -97,    95,    95,     0,   217,     0,   257,     0,     0,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -41,   -41,   276,   -41,
     -41,   -41,   -41,   -41,   628,     0,   -32,     0,   -32,   -32,
       0,     0,   -41,   276,   276,   344,   344,   344,   344,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,   608,   -32,   -32,   -32,   -32,   -32,   -32,   -33,
       0,   -33,   -33,     0,     0,     0,   -32,   615,   -89,     0,
     -89,   -89,   -89,   -89,   -89,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -34,     0,   -34,   -34,   -90,   -33,
     -90,   -90,   -90,   -90,   -90,   -83,   -83,   -83,   -83,   -83,
     -83,   -34,   -34,   -34,   -34,   257,   217,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -43,     0,   -43,
     -43,   276,     0,   -74,   -34,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -36,     0,   -36,   -36,     0,     0,   -75,   -43,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,     0,   344,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -44,     0,   -44,   -44,     0,     0,   -76,
     -36,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,     0,     0,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -42,     0,   -42,   -42,
       0,     0,   -77,   -44,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -45,
       0,   -45,   -45,     0,     0,   -73,   -42,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
       0,     0,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -20,     0,   -20,   -22,     0,     0,     0,   -45,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,   -20,
     -20,   -20,   -20,     0,     0,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -39,     0,   -39,   -39,     0,     0,
       0,     0,   -20,   -97,   -97,   -97,   -97,   -97,   -97,     0,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -26,     0,   -26,   -26,
       0,     0,     0,     0,   -39,   -88,   -88,   -88,   446,   447,
     -88,     0,     0,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -28,     0,
     -28,   -28,     0,     0,     0,     0,   -26,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
      28,     0,   181,    66,     0,     0,     0,     0,   -28,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,    29,    30,    31,
      32,     0,     0,    33,    34,    35,     0,    36,    37,    38,
      39,    40,   -25,     0,   -25,   -25,     0,     0,     0,     0,
      41,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -27,     0,   -27,   -27,     0,     0,
       0,     0,   -25,   -96,   -96,   -96,   -96,   -96,   -96,     0,
       0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -31,     0,   -31,   -31,
       0,     0,     0,     0,   -27,   -86,   -86,   -86,   446,   447,
     -86,     0,     0,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -24,     0,
     -24,   -24,     0,     0,     0,     0,   -31,   -87,   -87,   -87,
     446,   447,   -87,     0,     0,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -29,     0,   -29,   -29,     0,     0,     0,     0,   -24,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -30,     0,   -30,   -30,     0,     0,     0,     0,
     -29,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -38,     0,   -38,   -38,     0,     0,
       0,     0,   -30,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -32,     0,   -32,   -32,
       0,     0,     0,     0,   -38,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -33,     0,
     -33,   -33,     0,     0,     0,     0,   -32,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -34,     0,   -34,   -34,     0,     0,     0,     0,   -33,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -43,     0,   -43,   -43,     0,     0,     0,     0,
     -34,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -43,
     -43,   -43,   -43,     0,     0,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -36,     0,   -36,   -36,     0,     0,
       0,   -85,   -43,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -44,     0,   -44,   -44,
       0,     0,     0,   -96,   -36,   -96,   -96,   -96,   -96,     0,
       0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -42,     0,
     -42,   -42,     0,     0,     0,   -89,   -44,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -45,     0,   -45,   -45,     0,     0,     0,   -90,   -42,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,     0,     0,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -13,     0,   -13,   -13,     0,     0,     0,   -74,
     -45,   -74,   -74,   -74,   -74,     0,     0,     0,     0,   -13,
     -13,   -13,   -13,     0,     0,   -13,   -13,   -13,     0,   -13,
     -13,   -13,   -13,   -13,    28,     0,   181,   571,     0,     0,
       0,   -75,   -13,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,    34,    35,
       0,    36,    37,    38,    39,    40,   -23,     0,   -23,   -23,
       0,     0,     0,   -76,    41,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,    28,     0,
     181,   600,     0,     0,     0,   -77,   -23,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,    33,    34,    35,     0,    36,    37,    38,    39,    40,
     -21,     0,   -21,   -21,     0,     0,     0,   -73,    41,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -47,   -47,     0,     0,   -47,     0,     0,     0,
     -21,   -47,   -88,   -88,   -88,   375,   376,     0,   -47,   -47,
     -91,   -91,   -91,   -91,   -91,   -47,   -47,   -47,   -47,     0,
       0,   322,   625,     0,     0,   323,     0,   -47,   -47,   -47,
     324,   -92,   -92,   -92,   -92,   -92,   201,   325,   326,     0,
     202,     0,     0,     0,   327,   328,   329,   330,   203,     0,
       0,   220,     0,   204,   205,   221,   331,   332,   333,   206,
     207,   208,   209,   222,     0,     0,   -35,     0,   223,   224,
     -35,   210,   211,   212,   225,   226,   227,   228,   -35,     0,
       0,   303,     0,   -35,   -35,   304,   229,   230,   231,   -35,
     -35,   -35,   -35,   305,     0,     0,     0,     0,   306,   307,
       0,   -35,   -35,   -35,   308,   309,   310,   311,     0,     0,
     239,     0,     0,     0,   240,     0,   312,   313,   314,   241,
     -85,   -85,   -85,   -85,   -85,   260,   101,   242,     0,   261,
       0,     0,     0,   243,   244,   245,   246,   262,     0,     0,
       0,     0,   263,   264,     0,   247,   102,   248,   265,   266,
     267,   268,     0,     0,   322,     0,     0,     0,   323,     0,
     269,   270,   271,   324,   -96,   -96,   -96,   -96,   -96,     0,
     325,   326,   -86,   -86,   -86,   375,   376,   327,   328,   329,
     330,     0,     0,    68,     0,     0,     0,    69,     0,   331,
     332,   333,    70,   279,   -95,     0,   -95,   -95,   -95,   -95,
      71,     0,     0,   -95,   -95,     0,   182,   183,   184,   185,
       0,     0,   -40,     0,     0,   -95,   -40,     0,    72,    73,
      74,   -40,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -40,
     -87,   -87,   -87,   375,   376,   -40,   -40,   -40,   -40,     0,
       0,   239,     0,     0,     0,   240,     0,   -40,   -40,   -40,
     241,   -89,   -89,   -89,   -89,   -89,     0,     0,   242,   -90,
     -90,   -90,   -90,   -90,   243,   244,   245,   246,     0,     0,
     322,     0,     0,     0,   323,     0,   247,   391,   248,   324,
     -74,   -74,   -74,   -74,   -74,   -71,     0,   326,     0,   -71,
       0,     0,     0,   327,   328,   329,   330,     0,     0,     0,
     -69,     0,   -71,     0,   -69,   331,   450,   333,   -71,   -71,
     -71,   -71,     0,     0,     0,   -70,     0,   -69,     0,   -70,
     -71,   -71,   -71,   -69,   -69,   -69,   -69,     0,     0,     0,
     239,     0,   -70,     0,   240,   -69,   -69,   -69,   -70,   -70,
     -70,   -70,     0,     0,     0,   322,     0,   242,     0,   323,
     -70,   -70,   -70,   243,   244,   245,   246,   -75,   -75,   -75,
     -75,   -75,   326,     0,     0,   247,   391,   248,   327,   328,
     329,   330,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
     331,   450,   333,   458,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   459,     0,   -95,   -95,     0,   282,     0,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -77,
     -77,   -77,   -77,   -77,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   458,   -95,     0,   -95,   -95,   -95,   -95,   -95,     0,
       0,   -95,   -95,     0,     0,   -93,     0,   -93,   -93,   -93,
     -93,   -93,     0,   -95,   -93,   -93,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -93,   -73,   -73,   -73,
     -73,   -73,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -94,
       0,   -94,   -94,   -94,   -94,   -94,     0,     0,   -94,   -94,
       0,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
     -94,   -83,   -83,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -83,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,   -84,     0,     0,   -97,
       0,   -97,   -97,   -97,   -97,   -97,     0,   -84,   -97,   -97,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -97,     0,     0,     0,     0,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -88,     0,   -88,   -88,   466,   467,   -88,
       0,     0,   -88,   -88,     0,     0,   -91,     0,   -91,   -91,
     -91,   -91,   -91,     0,   -88,   -91,   -91,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -91,     0,     0,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -92,     0,   -92,   -92,   -92,   -92,   -92,     0,     0,   -92,
     -92,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,
       0,   -92,   -85,   -85,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -85,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -96,     0,   -96,
     -96,   -96,   -96,   -96,     0,     0,   -96,   -96,     0,     0,
     -86,     0,   -86,   -86,   466,   467,   -86,     0,   -96,   -86,
     -86,     0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -86,     0,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,     0,   -87,   -87,   466,   467,
     -87,     0,     0,   -87,   -87,     0,     0,   -89,     0,   -89,
     -89,   -89,   -89,   -89,     0,   -87,   -89,   -89,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -89,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,     0,
     -90,   -90,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,   -90,   -74,   -74,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -74,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,
     -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,     0,
       0,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,   -75,
     -76,   -76,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -77,   -77,     0,     0,   -73,     0,
     -73,   -73,   -73,   -73,   -73,     0,   -77,   -73,   -73,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -73,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -94,     0,   -94,   -94,   -94,   -94,     0,     0,
       0,   -94,   -94,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,     0,     0,   -94,   -83,   -83,     0,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
       0,   -84,   -84,   -84,   -84,     0,     0,     0,   -84,   -84,
       0,     0,   -97,     0,   -97,   -97,   -97,   -97,     0,     0,
     -84,   -97,   -97,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -97,     0,     0,     0,     0,     0,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -88,     0,   -88,   -88,
     132,   133,     0,     0,     0,   -88,   -88,     0,     0,   -91,
       0,   -91,   -91,   -91,   -91,     0,     0,   -88,   -91,   -91,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -91,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -92,     0,   -92,   -92,   -92,   -92,     0,
       0,     0,   -92,   -92,     0,     0,   -85,     0,   -85,   -85,
     -85,   -85,     0,     0,   -92,   -85,   -85,     0,     0,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -85,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -96,     0,   -96,   -96,   -96,   -96,     0,     0,     0,   -96,
     -96,     0,     0,   -86,     0,   -86,   -86,   132,   133,     0,
       0,   -96,   -86,   -86,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -86,     0,     0,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,
     -87,   132,   133,     0,     0,     0,   -87,   -87,     0,     0,
     -89,     0,   -89,   -89,   -89,   -89,     0,     0,   -87,   -89,
     -89,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -89,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -90,     0,   -90,   -90,   -90,   -90,
       0,     0,     0,   -90,   -90,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,     0,     0,   -90,   -73,   -73,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -73,     0,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,     0,   -74,   -74,   -74,   -74,     0,     0,     0,
     -74,   -74,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,
       0,     0,   -74,   -75,   -75,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,
     -76,   -76,   -76,   -76,     0,     0,     0,   -76,   -76,     0,
       0,   -77,     0,   -77,   -77,   -77,   -77,     0,     0,   -76,
     -77,   -77,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -65,     0,   464,   465,     0,
       0,   -65,     0,     0,   -65,   -65,     0,     0,   -65,     0,
     130,   131,     0,     0,     0,     0,   -65,   -65,   -65,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -64,     0,     0,     0,     0,     0,   -64,     0,
       0,   -64,   -64,     0,     0,   -59,     0,     0,     0,     0,
       0,   -59,     0,   -64,   124,   125,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   126,     0,     0,     0,
       0,     0,     0,   -59,   -59,   127,   128,   -59,   -59,   -63,
       0,     0,     0,     0,     0,   -63,     0,     0,   -63,   -63,
       0,     0,   -66,     0,     0,     0,     0,     0,     0,     0,
     -63,   -66,   -66,     0,     0,   -60,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -66,   124,   125,     0,     0,   -64,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   126,   -64,   -64,     0,
       0,   -59,     0,   -60,   -60,   127,   128,   -60,   -60,   -64,
     124,   125,     0,     0,   -63,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   126,   -63,   -63,     0,     0,     0,     0,   -59,
     -59,   127,   128,   -59,   -59,   -63,     0,     0,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,   -93,   -93,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -93,   -94,
     -94,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -94,     0,     0,     0,     0,     0,     0,   -94,   -94,
     -94,   -94,   -94,   -94,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -83,   -83,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -83,   -84,   -84,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -97,   -97,   -97,   -97,   -97,   -97,     0,     0,   -97,   -97,
       0,     0,     0,   -88,   -88,   -88,   403,   404,   -88,     0,
     -97,   -88,   -88,     0,     0,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -88,     0,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,   -91,   -91,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -91,   -92,   -92,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -92,
       0,     0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -85,   -85,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,
     -96,     0,   -85,   -96,   -96,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -96,     0,     0,     0,     0,
       0,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -86,   -86,
     -86,   403,   404,   -86,     0,     0,   -86,   -86,     0,     0,
       0,   -87,   -87,   -87,   403,   404,   -87,     0,   -86,   -87,
     -87,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -89,   -89,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -89,   -90,   -90,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,     0,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -73,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -73,   -74,   -74,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,     0,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -75,   -75,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -75,   -76,   -76,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
     -77,   -77,     0,     0,     0,   -65,   401,   402,     0,     0,
     -65,     0,   -77,   -65,   -65,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,
       0,     0,     0,   -66,   -60,     0,   -66,   -66,     0,   -60,
       0,     0,   124,   125,     0,     0,     0,     0,   -66,     0,
       0,     0,     0,     0,   126,   -66,   -66,   -66,   -66,   -66,
     -66,   -60,   -60,   127,   128,   -60,   -60,   -64,     0,     0,
       0,     0,   -64,   -59,     0,   -64,   -64,     0,   -59,     0,
       0,   124,   125,     0,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,   126,   -64,   -64,   -64,   -64,   -64,   -64,
     -59,   -59,   127,   128,   -59,   -59,   -63,     0,     0,     0,
       0,   -63,     0,     0,   -63,   -63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -63,     0,     0,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63
};

static const yytype_int16 yycheck[] =
{
       0,    21,   103,    55,     4,   348,   252,   251,    41,     0,
      26,   118,    44,   181,     7,   142,    47,   144,     5,    12,
     103,   181,     0,     1,     5,     7,    13,   279,    44,     6,
     282,    47,     5,     6,     6,    12,     9,    53,    54,    12,
      56,   142,    58,    21,    17,    38,     6,   118,    64,    22,
      23,     6,    68,    69,    70,    28,    29,    30,    31,     6,
       3,    38,    39,    47,     6,    12,    38,    40,    41,    42,
      12,     7,    47,   118,    34,    35,    12,    47,    38,    39,
     423,    21,     5,    38,    39,    41,   118,   103,     3,     6,
      13,    38,    39,   339,   338,    70,    38,   113,   118,     4,
      70,    47,   118,   119,   120,     7,   138,   123,     6,   361,
      12,   142,    41,   129,   130,   131,   132,   133,   118,   287,
     372,    38,   138,   139,    70,   141,   142,   287,   144,     7,
       8,     9,   384,     6,   150,   119,    38,    39,   170,    12,
      38,    39,     5,   175,   119,   120,   178,     6,   123,   119,
     120,     6,   168,    12,   170,     5,    47,    12,   142,   175,
     412,     6,   178,     6,     5,    38,    39,   142,     9,    12,
     186,   187,   142,   119,   120,     6,    17,     6,    21,    70,
       5,    22,    23,    38,    39,   201,   202,    28,    29,    30,
      31,   443,     1,    38,    39,    41,   142,     0,     1,    40,
      41,    42,     7,     5,   220,     6,   458,    38,    39,    38,
      39,    12,    21,     5,     5,     7,     6,     5,    21,     7,
     347,     9,    12,   239,   240,   241,    14,     5,   119,   120,
       5,     5,   123,    21,    22,     5,     0,     1,   129,     9,
      28,    29,    30,    31,   260,   261,     5,     5,    38,    39,
       7,   142,    40,    41,    42,    12,     6,    21,    28,    29,
      30,    31,    12,   279,   280,   281,   282,   513,   299,   285,
      40,    41,    42,     6,     5,     0,     1,     7,     9,    12,
      41,    38,    39,   299,     0,     1,    17,   303,   304,     7,
       7,    22,    23,    41,    12,   241,    21,    28,    29,    30,
      31,   285,     5,     8,     9,    21,   322,   323,   324,    40,
      41,    42,     7,     0,     1,   299,   347,    12,     7,   565,
      38,    39,    27,    12,   299,    28,    29,    30,    31,   299,
       7,   347,   348,     6,    21,    12,     6,    40,    41,    42,
       6,     6,    12,    38,    39,   361,   362,   363,   431,   324,
       7,    21,     6,   299,   324,    12,   372,   373,   374,   375,
     376,    38,    39,   347,     6,     6,     6,     5,   384,     6,
      12,     9,   347,     0,     1,    12,   428,   347,   324,     7,
       6,     6,   398,   399,   400,   401,   402,   403,   404,     6,
      28,    29,    30,    31,    21,    12,   412,   413,   414,   415,
     416,   347,    40,    41,    42,     0,     1,   423,   299,    27,
     426,   427,    41,   429,     6,   431,     6,    34,    35,     6,
      12,    38,    39,     6,   399,    12,    21,   443,   444,   445,
     446,   447,     6,   324,     6,   542,     7,   469,    12,   540,
      26,    12,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   398,   469,     6,     6,   347,   540,    44,     5,
      12,    47,     8,     9,    10,    11,     6,    53,    54,     6,
      56,   542,    58,     0,     1,    12,   460,     7,    64,     7,
     607,    27,    68,    69,    70,   460,   461,   462,     7,     6,
     460,   461,     0,     1,    21,    12,     7,   542,    13,   606,
     532,     8,     9,    10,    11,     6,   607,     8,     9,   400,
     542,    12,     7,    21,   460,   461,   532,   103,   625,     7,
      27,   628,   542,   630,   540,   541,   542,   113,     7,     7,
       6,     6,   118,   119,   120,   606,    12,   123,     7,     5,
     556,     5,   542,   129,   130,   131,   132,   133,     8,     9,
      10,    11,   138,   139,   625,   141,   142,   628,   144,   630,
       6,   606,     6,     5,   150,     5,    12,    27,    12,   460,
     461,   462,   463,     6,   606,     6,   607,     5,     5,    12,
     625,    12,   168,   628,   170,   630,   606,     7,     6,   175,
     606,   607,   178,   625,    12,     5,   628,     6,   630,     7,
     186,   187,     5,    12,    12,   625,   606,     6,   628,   625,
     630,     7,   628,    12,   630,   201,   202,     6,     6,     8,
       9,    10,    11,   607,    12,   625,    15,    16,   628,     6,
     630,     7,   607,     7,   220,    12,    12,   607,    27,     1,
       7,     3,     4,     7,     5,    34,    35,    36,    37,    38,
      39,     5,     5,   239,   240,   241,    18,    19,    20,    21,
       7,   607,    24,    25,    26,    12,    28,    29,    30,    31,
      32,    33,     7,     5,   260,   261,    27,    12,     5,    41,
       7,     8,     9,    10,    11,    12,    13,    27,    15,    16,
      27,     6,     6,   279,   280,   281,   282,    12,    12,   285,
      27,     7,     1,    27,     3,     4,    12,    34,    35,    36,
      37,    38,    39,   299,     5,     5,   607,   303,   304,    18,
      19,    20,    21,     7,     5,    24,    25,    26,    12,    28,
      29,    30,    31,    32,    33,     5,   322,   323,   324,     7,
       8,     9,    41,     5,    12,     5,     5,     5,     5,     7,
       6,     9,     8,     9,    10,    11,    14,     5,    60,    61,
      62,   347,   348,    21,    22,     5,    28,    29,    30,    31,
      28,    29,    30,    31,     5,   361,   362,   363,    40,    41,
      42,     5,    40,    41,    42,     5,   372,   373,   374,   375,
     376,     8,     9,    10,    11,     5,     5,     5,   384,     6,
       9,     8,     9,     5,     8,     9,    10,    11,    41,     5,
      27,     5,   398,   399,   400,   401,   402,   403,   404,    28,
      29,    30,    31,    27,     7,     7,   412,   413,   414,   415,
     416,    40,    41,    42,     5,     5,     5,   423,     5,     7,
     426,   427,    41,   429,    12,   431,     8,     9,    10,    11,
       8,     9,    10,    11,     5,     5,     5,   443,   444,   445,
     446,   447,     5,     4,    41,    27,    34,    35,     6,    27,
      38,    39,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,    41,   469,     6,     8,     9,    10,    11,    41,
       6,    47,    53,    54,    41,    56,     6,    53,    54,     1,
      56,     3,    58,    64,    27,    41,     6,    68,    64,    41,
       4,    41,    68,    69,    70,     6,    18,    19,    20,    21,
      41,     6,    24,    25,    26,     5,    28,    29,    30,    31,
      32,    13,    41,     6,     8,     9,    10,    11,     7,    41,
       8,     9,    10,    11,     6,     6,   532,   103,    28,    29,
      30,    31,   113,    27,   540,   541,   542,   113,     6,    27,
      40,    41,    42,   119,   120,     6,     6,   123,     8,     9,
     556,     6,     6,   129,   130,   131,   132,   133,   139,     6,
     141,     8,     9,   139,     6,   141,   142,     6,   144,   150,
       6,     6,     5,     6,   150,     6,     9,     8,     9,    10,
      11,    14,     6,     8,     9,    10,    11,   168,    21,    22,
       6,     6,   168,     8,     9,    28,    29,    30,    31,     6,
     606,   607,    27,     6,     6,   186,     6,    40,    41,    42,
     186,   187,     6,     8,     9,    10,    11,     5,     7,   625,
     201,     9,   628,     6,   630,   201,   202,     6,     6,   351,
     352,   353,    27,     6,    22,     6,   358,   359,   360,   220,
      28,    29,    30,    31,   220,   221,     5,   369,   370,   371,
       9,     6,    40,    41,    42,     6,     6,     6,   239,   381,
     382,   383,     6,   239,   240,   241,     6,     6,     6,    28,
      29,    30,    31,   395,   396,   397,     6,     6,     6,   260,
       6,    40,    41,    42,   260,   261,     6,   409,   410,   411,
       4,     8,     9,    10,    11,     7,     7,     6,   279,     8,
       9,   282,     7,   279,   280,   281,   282,     7,   430,   285,
      27,     8,     9,    10,    11,   432,    -1,   292,   440,   441,
     442,    -1,   303,   299,    -1,    -1,    -1,   303,   304,     6,
      27,     8,     9,   455,   456,   457,     1,    -1,     3,     4,
       6,   322,     8,     9,    10,    11,   322,   323,   324,     6,
      -1,     8,     9,    18,    19,    20,    21,    -1,     5,    24,
      25,    26,     9,    28,    29,    30,    31,    32,    33,    -1,
       6,   347,     8,     9,    -1,    22,    41,    -1,    -1,    -1,
     361,    28,    29,    30,    31,   361,   362,   363,    -1,    -1,
      -1,   372,    -1,    40,    41,    42,   372,   373,   374,   375,
     376,     5,     6,   384,     8,     9,    10,    11,   384,    -1,
      -1,   387,   388,     8,     9,    10,    11,     7,     8,     9,
      10,    11,   398,   399,   400,   401,   402,   403,   404,    -1,
      -1,   412,    27,    -1,    -1,    -1,   412,   413,   414,   415,
     416,     8,     9,    10,    11,   426,   427,    -1,   429,    -1,
     426,   427,    -1,   429,    -1,   431,     8,     9,    10,    11,
      27,     6,   443,     8,     9,    10,    11,   443,   444,   445,
     446,   447,    -1,    -1,    -1,    27,    -1,   458,   459,     5,
      -1,    -1,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,     5,     6,    -1,     8,     9,    10,    11,    12,
      47,    -1,    28,    29,    30,    31,    53,    54,    -1,    56,
       1,    58,     3,     4,    40,    41,    42,    64,    -1,    -1,
      -1,    68,    69,    70,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     8,     9,    10,    11,    -1,    -1,    -1,
      41,     8,     9,    10,    11,     6,   103,     8,     9,    -1,
     541,    -1,    27,    -1,   540,   541,   113,    -1,    -1,    -1,
      27,    -1,   119,   120,    -1,   556,   123,    -1,    -1,    -1,
     556,    -1,   129,   130,   131,   132,   133,     1,    -1,     3,
       4,    -1,   139,    -1,   141,   142,     5,   144,     7,     8,
       9,    10,    11,   150,    18,    19,    20,    21,    -1,     5,
      24,    25,    26,     9,    28,    29,    30,    31,    32,    33,
      -1,   168,     8,     9,    10,    11,    22,    41,    -1,    -1,
      -1,   607,    28,    29,    30,    31,    -1,    -1,    -1,   186,
     187,    27,    -1,    -1,    40,    41,    42,     1,    -1,     3,
       4,    -1,    -1,    -1,   201,   202,     5,    -1,     7,     8,
       9,    10,    11,    12,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,   220,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,    -1,    -1,     6,    41,     8,     9,
      10,    11,   239,   240,   241,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,   260,   261,    -1,    -1,    -1,     6,    -1,
      41,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,   279,   280,   281,   282,    -1,    -1,   285,    27,
      -1,     1,    -1,     3,     4,    -1,    34,    35,    36,    37,
      38,    39,   299,    -1,    -1,    -1,   303,   304,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,   322,   323,   324,     1,    -1,
       3,    41,     7,     8,     9,    10,    11,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
     347,    24,    25,    26,    22,    28,    29,    30,    31,    32,
      28,    29,    30,    31,   361,   362,   363,    -1,    41,    -1,
      -1,    -1,    40,    41,    42,   372,   373,   374,   375,   376,
       7,     8,     9,    10,    11,     5,    -1,   384,     6,     9,
       8,     9,    10,    11,    12,     7,     8,     9,    10,    11,
       5,   398,   399,   400,   401,   402,   403,   404,    28,    29,
      30,    31,    -1,    -1,    -1,   412,   413,   414,   415,   416,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,   426,
     427,    -1,   429,    -1,   431,    40,    41,    42,     6,    -1,
       8,     9,    10,    11,    12,    -1,   443,   444,   445,   446,
     447,    -1,     5,    -1,    -1,     6,     9,     8,     9,    10,
      11,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,    -1,    -1,    47,    -1,    28,    29,    30,    31,    53,
      54,    -1,    56,     1,    58,     3,     4,    40,    41,    42,
      64,    -1,    -1,    -1,    68,     5,    70,    -1,    -1,     9,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    -1,    28,    29,
      30,    31,     6,    41,     8,     9,    10,    11,    12,   103,
      40,    41,    42,     7,     8,     9,    10,    11,    12,   113,
      -1,    -1,    -1,   540,   541,   119,   120,    -1,     6,   123,
       8,     9,    10,    11,    12,   129,   130,   131,    -1,   556,
       1,    -1,     3,     4,    -1,   139,    -1,   141,   142,     6,
     144,     8,     9,    10,    11,    12,   150,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     6,   168,     8,     9,    10,    11,    12,
      41,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
     607,     1,   186,     3,     4,    64,    -1,     6,    -1,     8,
       9,    10,    11,    12,     5,    -1,    -1,   201,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    -1,    -1,   220,    28,    29,    30,
      31,    41,     5,    -1,    -1,    -1,     9,    -1,    -1,    40,
      41,    42,    47,    -1,   113,   239,    -1,   241,    53,    54,
      -1,    56,    -1,    58,    -1,    28,    29,    30,    31,    64,
      -1,    -1,    -1,    68,    -1,    70,   260,    40,    41,    42,
     139,     6,   141,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   150,    -1,    -1,    -1,   279,   280,   281,   282,    -1,
       6,   285,     8,     9,    10,    11,     5,    -1,   103,   168,
       9,    -1,    -1,    -1,    -1,   299,    -1,    -1,   113,   303,
      -1,    -1,    -1,    22,   119,   120,    -1,    -1,   123,    28,
      29,    30,    31,    -1,   129,    -1,    -1,    -1,   322,    -1,
     324,    40,    41,    42,   139,    -1,   141,   142,     6,   144,
       8,     9,    10,    11,    12,   150,    -1,    -1,     5,    -1,
       7,    -1,     9,   347,    -1,    -1,     6,    14,     8,     9,
      10,    11,    12,   168,    21,    22,    -1,   361,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,   372,   373,
     374,   186,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
     384,   385,   386,    -1,    -1,     6,   201,     8,     9,    10,
      11,    12,    -1,    -1,   398,   399,   400,   401,   402,    -1,
     279,    -1,    -1,   282,    -1,   220,    -1,     5,   412,   413,
     414,    -1,     5,    -1,     7,     6,     9,     8,     9,    10,
      11,    14,   426,   427,   239,   429,   241,   431,    21,    22,
      28,    29,    30,    31,    -1,    28,    29,    30,    31,   443,
     444,   445,    40,    41,    42,   260,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,   458,   459,   460,   461,   462,   463,
     464,   465,    -1,    -1,   279,    -1,    -1,   282,    -1,    -1,
     285,    -1,     1,    -1,     3,     4,     7,     8,     9,    10,
      11,    12,   361,    -1,   299,    -1,    -1,    -1,   303,    18,
      19,    20,    21,   372,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,   384,    -1,   322,    -1,   324,
      -1,     6,    41,     8,     9,    10,    11,    12,     5,     6,
      -1,     6,     9,     8,     9,    10,    11,    14,    -1,    -1,
      -1,    -1,   347,   412,    21,    22,   540,   541,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,   361,   426,   427,    -1,
     429,     5,   556,    40,    41,    42,    -1,   372,    -1,    -1,
      -1,     6,    -1,    -1,   443,    -1,    -1,    12,    -1,   384,
      15,    16,    -1,    -1,    28,    29,    30,    31,    -1,   458,
     459,    -1,    27,   398,   399,   400,    40,    41,    42,    34,
      35,    36,    37,    38,    39,    -1,     6,   412,     8,     9,
      10,    11,     1,   607,     3,     4,     7,     8,     9,    10,
      11,   426,   427,    -1,   429,    -1,   431,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,   443,    28,
      29,    30,    31,    32,    33,    -1,     1,    -1,     3,     4,
      -1,    -1,    41,   458,   459,   460,   461,   462,   463,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,   541,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,    -1,    41,   556,     6,    -1,
       8,     9,    10,    11,    12,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,     1,    -1,     3,     4,     6,    41,
       8,     9,    10,    11,    12,     7,     8,     9,    10,    11,
      12,    18,    19,    20,    21,   540,   541,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,   556,    -1,     6,    41,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,    -1,    -1,     6,    41,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,   607,    24,    25,    26,    -1,    28,    29,    30,
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
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    12,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    12,    -1,    -1,    18,
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
      31,    32,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
      41,    14,     7,     8,     9,    10,    11,    -1,    21,    22,
       7,     8,     9,    10,    11,    28,    29,    30,    31,    -1,
      -1,     5,     6,    -1,    -1,     9,    -1,    40,    41,    42,
      14,     7,     8,     9,    10,    11,     5,    21,    22,    -1,
       9,    -1,    -1,    -1,    28,    29,    30,    31,    17,    -1,
      -1,     5,    -1,    22,    23,     9,    40,    41,    42,    28,
      29,    30,    31,    17,    -1,    -1,     5,    -1,    22,    23,
       9,    40,    41,    42,    28,    29,    30,    31,    17,    -1,
      -1,     5,    -1,    22,    23,     9,    40,    41,    42,    28,
      29,    30,    31,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    40,    41,    42,    28,    29,    30,    31,    -1,    -1,
       5,    -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,
       7,     8,     9,    10,    11,     5,    21,    22,    -1,     9,
      -1,    -1,    -1,    28,    29,    30,    31,    17,    -1,    -1,
      -1,    -1,    22,    23,    -1,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,
      40,    41,    42,    14,     7,     8,     9,    10,    11,    -1,
      21,    22,     7,     8,     9,    10,    11,    28,    29,    30,
      31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,
      41,    42,    14,     5,     6,    -1,     8,     9,    10,    11,
      22,    -1,    -1,    15,    16,    -1,    28,    29,    30,    31,
      -1,    -1,     5,    -1,    -1,    27,     9,    -1,    40,    41,
      42,    14,    34,    35,    36,    37,    38,    39,    -1,    22,
       7,     8,     9,    10,    11,    28,    29,    30,    31,    -1,
      -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,    42,
      14,     7,     8,     9,    10,    11,    -1,    -1,    22,     7,
       8,     9,    10,    11,    28,    29,    30,    31,    -1,    -1,
       5,    -1,    -1,    -1,     9,    -1,    40,    41,    42,    14,
       7,     8,     9,    10,    11,     5,    -1,    22,    -1,     9,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
       5,    -1,    22,    -1,     9,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,
      40,    41,    42,    28,    29,    30,    31,    -1,    -1,    -1,
       5,    -1,    22,    -1,     9,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,    -1,     5,    -1,    22,    -1,     9,
      40,    41,    42,    28,    29,    30,    31,     7,     8,     9,
      10,    11,    22,    -1,    -1,    40,    41,    42,    28,    29,
      30,    31,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      40,    41,    42,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,     5,    -1,     7,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,     7,
       8,     9,    10,    11,    -1,    34,    35,    36,    37,    38,
      39,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,     8,     9,    10,
      11,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,     7,     8,     9,
      10,    11,    -1,    34,    35,    36,    37,    38,    39,     6,
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
      12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,     8,
       9,    10,    11,    12,    -1,    27,    15,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,     6,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      15,    16,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    12,    -1,    27,
      15,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    12,    -1,    27,    15,    16,    -1,
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
      35,    36,    37,    38,    39,     6,    -1,     8,     9,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    27,    15,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    15,    16,    -1,    -1,     6,    -1,    34,    35,    36,
      37,    38,    39,    27,    15,    16,    -1,    -1,     6,    -1,
      34,    35,    36,    37,    38,    39,    27,    15,    16,    -1,
      -1,     6,    -1,    34,    35,    36,    37,    38,    39,    27,
      15,    16,    -1,    -1,     6,    -1,    34,    35,    36,    37,
      38,    39,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
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
      15,    16,    -1,    -1,    -1,     7,     8,     9,    -1,    -1,
      12,    -1,    27,    15,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,     7,    -1,
      -1,    -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    27,    34,    35,    36,    37,    38,
      39,    34,    35,    36,    37,    38,    39,     7,    -1,    -1,
      -1,    -1,    12,     7,    -1,    15,    16,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    27,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    21,    46,    47,    48,    49,    53,    41,     0,
      48,    50,    54,     5,     7,    51,    21,    55,    41,     6,
      12,    52,    21,     3,    57,    41,    58,    59,     1,    18,
      19,    20,    21,    24,    25,    26,    28,    29,    30,    31,
      32,    41,    53,    57,    60,    61,    62,    65,    66,    79,
      80,     4,     5,     5,     5,    41,    64,     5,     5,     5,
       5,     5,     5,     5,     5,    13,     4,    61,     5,     9,
      14,    22,    40,    41,    42,    70,    71,    72,    73,    75,
      76,    79,    80,    83,    84,    85,    86,     7,     7,    41,
      17,    22,    23,    81,    82,    84,    81,    81,    78,    81,
       7,    21,    41,    67,    68,    69,    70,    41,    78,    78,
      78,    56,    81,    63,    82,    84,    86,    72,     6,    38,
      39,    34,    35,    74,    15,    16,    27,    36,    37,    77,
       8,     9,    10,    11,     6,     6,     6,     7,     6,    27,
      41,    13,    67,     7,    12,     6,     6,     6,     6,     6,
      12,    81,     6,     6,    61,    71,    72,    75,    76,    85,
      85,    86,    86,     7,     7,     7,    61,    81,    13,    81,
       6,    68,    69,    81,     7,    33,    81,    61,     6,    61,
      61,     3,    28,    29,    30,    31,     5,     9,    28,    29,
      30,    31,    40,    41,    42,    79,    80,    83,    85,    86,
      54,     5,     9,    17,    22,    23,    28,    29,    30,    31,
      40,    41,    42,    79,    80,    82,    83,    84,    85,    86,
       5,     9,    17,    22,    23,    28,    29,    30,    31,    40,
      41,    42,    79,    80,    82,    83,    84,    85,    86,     5,
       9,    14,    22,    28,    29,    30,    31,    40,    42,    71,
      72,    73,    75,    76,    79,    80,    83,    84,    85,    86,
       5,     9,    17,    22,    23,    28,    29,    30,    31,    40,
      41,    42,    79,    80,    82,    83,    84,    85,    86,     5,
       8,     9,     5,     7,    68,    38,     1,     3,    18,    19,
      20,    21,    24,    25,    26,    41,    53,    57,    62,    65,
      66,    79,    80,     5,     9,    17,    22,    23,    28,    29,
      30,    31,    40,    41,    42,    79,    80,    82,    83,    84,
      85,    86,     5,     9,    14,    21,    22,    28,    29,    30,
      31,    40,    41,    42,    69,    70,    71,    72,    73,    75,
      76,    79,    80,    83,    84,    85,    86,    12,    58,    59,
       5,     5,     5,     5,    82,    84,    86,     5,     5,     5,
       5,     5,    10,    11,     7,    82,    84,    86,     5,     5,
       5,     5,     5,     8,     9,    10,    11,    82,    84,    86,
       5,     5,     5,     5,     5,     8,     9,    10,    11,    82,
      84,    41,    86,    72,     5,     5,     5,     5,    39,    74,
      77,     8,     9,    10,    11,    82,    84,    86,     5,     5,
       5,     5,     5,     8,     9,    10,    11,    56,    85,    85,
      56,     7,    71,    58,    59,     5,     5,     5,    41,    64,
       5,     5,    13,    70,     7,     7,    82,    84,    86,     5,
       5,     5,     5,     5,     8,     9,    10,    11,    82,    84,
      41,    86,    72,    41,     5,     5,     5,     5,     5,    13,
      38,    39,    74,    77,     8,     9,    10,    11,    69,    60,
       4,    41,    78,    78,    78,     6,     6,    41,    78,    78,
      78,    56,    86,    86,     6,     6,    41,    78,    78,    78,
      56,    85,    85,    86,    86,     6,     6,    41,    78,    78,
      78,    56,    85,    85,    86,    86,     6,     6,    41,    78,
      78,    78,    72,    75,    76,    85,    85,    86,    86,     6,
       6,    41,    78,    78,    78,    56,    85,    85,    86,    86,
       6,     6,    60,     4,    41,    81,    81,    54,    81,    78,
      67,    63,     6,     6,     6,    41,    78,    78,    78,    56,
      85,    85,    86,    86,     6,     6,    13,    41,    78,    78,
      78,    56,    81,    71,    72,    75,    76,    85,    85,    86,
      86,     4,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       4,     6,     6,     6,     7,     7,     6,    67,    81,    61,
       6,     6,     6,     6,     6,    81,     6,     6,     6,     6,
       6,     7,     7,     7,    61,     6,    68,     7,    33,    61,
       6,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    50,    51,
      52,    49,    54,    53,    55,    55,    55,    56,    56,    56,
      58,    57,    59,    57,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    63,    62,    64,    62,    62,
      65,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    78,    79,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    85,    86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     0,
       0,     9,     0,     4,     4,     2,     0,     3,     1,     0,
       0,     4,     0,     3,     2,     1,     1,     1,     1,     2,
       2,     1,     5,     5,     5,     0,     5,     0,     4,     1,
       2,     4,     6,     5,     6,     7,     1,     2,     1,     3,
       1,     4,     3,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     2,     1,     1,     1,     3,     1
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
  case 2: /* program: stmts  */
#line 53 "parser/c7.y"
                { if(PARSER_VERBOSE) printf("[BISON] program -> stmts\n"); }
#line 2760 "parser/parser.c"
    break;

  case 3: /* stmts: stmts stmt  */
#line 56 "parser/c7.y"
                     { 
            if(PARSER_VERBOSE) printf("[BISON] stmts -> stmts stmt\n");
        }
#line 2768 "parser/parser.c"
    break;

  case 4: /* stmts: stmt  */
#line 59 "parser/c7.y"
               { if(PARSER_VERBOSE) printf("[BISON] stmts -> stmt\n"); }
#line 2774 "parser/parser.c"
    break;

  case 5: /* stmt: func_stmt  */
#line 62 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2780 "parser/parser.c"
    break;

  case 6: /* stmt: var_decl_stmt  */
#line 63 "parser/c7.y"
                           {
            if(PARSER_VERBOSE) printf("[BISON] stmt -> var_decl_stmt\n");
            add_ast((yyvsp[0].expression));
        }
#line 2789 "parser/parser.c"
    break;

  case 7: /* stmt: error  */
#line 67 "parser/c7.y"
                { 
            if(PARSER_VERBOSE) printf("[BISON] stmt -> error\n");
            yyerrok;
        }
#line 2798 "parser/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 73 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_FUNC);
                set_data_type((yyvsp[0].int_value), type2dt((yyvsp[-1].str_value)));
                global_func_data_type = type2dt((yyvsp[-1].str_value));
                insert_result = insert_symbol((yyvsp[0].int_value));
                if (!insert_result) set_existance_tag((yyvsp[0].int_value), ET_SOFT_DELETE);
            }
#line 2810 "parser/parser.c"
    break;

  case 9: /* $@2: %empty  */
#line 79 "parser/c7.y"
                          {
                push_scope((yyvsp[-2].int_value));
            }
#line 2818 "parser/parser.c"
    break;

  case 10: /* $@3: %empty  */
#line 81 "parser/c7.y"
                                         {
                set_arity((yyvsp[-5].int_value), arity_counter);
                arity_counter = 0;
            }
#line 2827 "parser/parser.c"
    break;

  case 11: /* func_stmt: TYPE ID $@1 PARENT_LEFT $@2 param_list PARENT_RIGHT $@3 compound_block_stmt  */
#line 84 "parser/c7.y"
                                     {
                pop_scope();
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-8].str_value)), create_var_expr((yyvsp[-7].int_value)), (yyvsp[-3].expression), (yyvsp[0].expression));
                free((yyvsp[-8].str_value));
            }
#line 2837 "parser/parser.c"
    break;

  case 12: /* $@4: %empty  */
#line 91 "parser/c7.y"
                                {
                    if(PARSER_VERBOSE) printf("[BISON] var_decl_stmt -> type id\n");
                    set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                    set_data_type((yyvsp[0].int_value), type2dt((yyvsp[-1].str_value)));
                    insert_result = insert_symbol((yyvsp[0].int_value));
                    if (!insert_result) set_existance_tag((yyvsp[0].int_value), ET_SOFT_DELETE);
                }
#line 2849 "parser/parser.c"
    break;

  case 13: /* var_decl_stmt: TYPE ID $@4 SEMICOLON  */
#line 97 "parser/c7.y"
                            {
                    if(PARSER_VERBOSE) printf("[BISON] var_decl_stmt -> semicolon\n");
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)), BINARY_TYPE);
                    free((yyvsp[-3].str_value));
                }
#line 2859 "parser/parser.c"
    break;

  case 14: /* param_list: param_list COMMA TYPE ID  */
#line 104 "parser/c7.y"
                                                {
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                set_data_type((yyvsp[0].int_value), type2dt((yyvsp[-1].str_value)));
                insert_result = insert_symbol((yyvsp[0].int_value));
                if (!insert_result) set_existance_tag((yyvsp[0].int_value), ET_SOFT_DELETE);
                arity_counter += 1;
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)), TERNARY_TYPE);
                free((yyvsp[-1].str_value));
            }
#line 2873 "parser/parser.c"
    break;

  case 15: /* param_list: TYPE ID  */
#line 113 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_VAR);
                set_data_type((yyvsp[0].int_value), type2dt((yyvsp[-1].str_value)));
                insert_result = insert_symbol((yyvsp[0].int_value));
                if (!insert_result) set_existance_tag((yyvsp[0].int_value), ET_SOFT_DELETE);
                arity_counter += 1;
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)), BINARY_TYPE);
                free((yyvsp[-1].str_value));
            }
#line 2887 "parser/parser.c"
    break;

  case 16: /* param_list: %empty  */
#line 122 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2895 "parser/parser.c"
    break;

  case 17: /* simple_param_list: simple_param_list COMMA simple_expr  */
#line 127 "parser/c7.y"
                                                                {
                        arity_counter += 1;
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression), BINARY_TYPE);
                    }
#line 2904 "parser/parser.c"
    break;

  case 18: /* simple_param_list: simple_expr  */
#line 131 "parser/c7.y"
                                     {
                        arity_counter += 1;
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 2913 "parser/parser.c"
    break;

  case 19: /* simple_param_list: %empty  */
#line 135 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2919 "parser/parser.c"
    break;

  case 20: /* $@5: %empty  */
#line 138 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 2927 "parser/parser.c"
    break;

  case 21: /* compound_block_stmt: BRACK_LEFT $@5 block_stmts BRACK_RIGHT  */
#line 140 "parser/c7.y"
                                                 {
                        (yyval.expression) = (yyvsp[-1].expression);
                        pop_scope();
                    }
#line 2936 "parser/parser.c"
    break;

  case 22: /* $@6: %empty  */
#line 144 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 2944 "parser/parser.c"
    break;

  case 23: /* compound_block_stmt: BRACK_LEFT $@6 BRACK_RIGHT  */
#line 146 "parser/c7.y"
                                   {
                        (yyval.expression) = create_empty_expr();
                        pop_scope();
                    }
#line 2953 "parser/parser.c"
    break;

  case 24: /* block_stmts: block_stmts block_item  */
#line 152 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression), BINARY_TYPE);
                global_var_data_type = DT_UNDEFINED;
            }
#line 2962 "parser/parser.c"
    break;

  case 25: /* block_stmts: block_item  */
#line 156 "parser/c7.y"
                            {
                (yyval.expression) = (yyvsp[0].expression);
                global_var_data_type = DT_UNDEFINED;
            }
#line 2971 "parser/parser.c"
    break;

  case 26: /* block_item: var_decl_stmt  */
#line 162 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 2977 "parser/parser.c"
    break;

  case 27: /* block_item: block_stmt  */
#line 163 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2983 "parser/parser.c"
    break;

  case 28: /* block_stmt: compound_block_stmt  */
#line 166 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2989 "parser/parser.c"
    break;

  case 29: /* block_stmt: func_call SEMICOLON  */
#line 167 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2995 "parser/parser.c"
    break;

  case 30: /* block_stmt: set_func_call SEMICOLON  */
#line 168 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 3001 "parser/parser.c"
    break;

  case 31: /* block_stmt: flow_control  */
#line 169 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 3007 "parser/parser.c"
    break;

  case 32: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 170 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value)), BINARY_TYPE); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                check_declared((yyvsp[-2].int_value));
                free((yyvsp[-4].str_value));
            }
#line 3018 "parser/parser.c"
    break;

  case 33: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 176 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), BINARY_TYPE); 
                free((yyvsp[-4].str_value));
            }
#line 3027 "parser/parser.c"
    break;

  case 34: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 180 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), WRITELN_TYPE); 
                free((yyvsp[-4].str_value));
            }
#line 3036 "parser/parser.c"
    break;

  case 35: /* $@7: %empty  */
#line 184 "parser/c7.y"
                              {
                set_id_type((yyvsp[-1].int_value), ST_ID_VAR); 
                check_declared((yyvsp[-1].int_value));
                global_var_data_type = get_var_type((yyvsp[-1].int_value));
            }
#line 3046 "parser/parser.c"
    break;

  case 36: /* block_stmt: ID ASSIGN $@7 simple_expr SEMICOLON  */
#line 188 "parser/c7.y"
                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-4].int_value)), create_char_expr((yyvsp[-3].char_value)),
                                     (yyvsp[-1].expression), ASSIGN_TYPE);
            }
#line 3055 "parser/parser.c"
    break;

  case 37: /* $@8: %empty  */
#line 192 "parser/c7.y"
                        {
                global_var_data_type = global_func_data_type;
            }
#line 3063 "parser/parser.c"
    break;

  case 38: /* block_stmt: RETURN $@8 simple_expr SEMICOLON  */
#line 194 "parser/c7.y"
                                       {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE); 
                free((yyvsp[-3].str_value));
            }
#line 3072 "parser/parser.c"
    break;

  case 39: /* block_stmt: error  */
#line 198 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 3081 "parser/parser.c"
    break;

  case 40: /* flow_control_if: IF PARENT_LEFT  */
#line 204 "parser/c7.y"
                                    {
                    global_var_data_type = DT_FLOAT_IF;
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 3091 "parser/parser.c"
    break;

  case 41: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item  */
#line 211 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression), TERNARY_TYPE); 
                }
#line 3099 "parser/parser.c"
    break;

  case 42: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item ELSE block_item  */
#line 214 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 3108 "parser/parser.c"
    break;

  case 43: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_item  */
#line 218 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression), TERNARY_TYPE); 
                    free((yyvsp[-4].str_value));
                }
#line 3117 "parser/parser.c"
    break;

  case 44: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_item  */
#line 222 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 3126 "parser/parser.c"
    break;

  case 45: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_item  */
#line 226 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 3135 "parser/parser.c"
    break;

  case 46: /* opt_param: SEMICOLON  */
#line 232 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 3141 "parser/parser.c"
    break;

  case 47: /* opt_param: for_expression SEMICOLON  */
#line 233 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 3147 "parser/parser.c"
    break;

  case 48: /* for_expression: decl_or_cond_expr  */
#line 236 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3153 "parser/parser.c"
    break;

  case 49: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 237 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression), BINARY_TYPE); 
                }
#line 3161 "parser/parser.c"
    break;

  case 50: /* decl_or_cond_expr: or_cond_expr  */
#line 242 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3167 "parser/parser.c"
    break;

  case 51: /* decl_or_cond_expr: TYPE ID ASSIGN simple_expr  */
#line 243 "parser/c7.y"
                                                             {
                        (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)),
                                             create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression)); 
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        check_declared((yyvsp[-2].int_value));
                        free((yyvsp[-3].str_value));
                    }
#line 3179 "parser/parser.c"
    break;

  case 52: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 250 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        check_declared((yyvsp[-2].int_value));
                    }
#line 3189 "parser/parser.c"
    break;

  case 53: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 257 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression), TERNARY_TYPE); 
                    free((yyvsp[-1].str_value));
                }
#line 3198 "parser/parser.c"
    break;

  case 54: /* or_cond_expr: and_cond_expr  */
#line 261 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3204 "parser/parser.c"
    break;

  case 55: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 264 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression), TERNARY_TYPE); 
                    free((yyvsp[-1].str_value));
                }
#line 3213 "parser/parser.c"
    break;

  case 56: /* and_cond_expr: unary_cond_expr  */
#line 268 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3219 "parser/parser.c"
    break;

  case 57: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 271 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), BINARY_TYPE); 
                }
#line 3227 "parser/parser.c"
    break;

  case 58: /* unary_cond_expr: eq_cond_expr  */
#line 274 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3233 "parser/parser.c"
    break;

  case 59: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 277 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression), TERNARY_TYPE);
                }
#line 3241 "parser/parser.c"
    break;

  case 60: /* eq_cond_expr: rel_cond_expr  */
#line 280 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3247 "parser/parser.c"
    break;

  case 61: /* equal_ops: EQ_OP  */
#line 283 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3256 "parser/parser.c"
    break;

  case 62: /* equal_ops: NE_OP  */
#line 287 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3265 "parser/parser.c"
    break;

  case 63: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 293 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression), TERNARY_TYPE);
                }
#line 3273 "parser/parser.c"
    break;

  case 64: /* rel_cond_expr: rel_cond_stmt  */
#line 296 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3279 "parser/parser.c"
    break;

  case 65: /* rel_cond_stmt: arith_expr  */
#line 299 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3285 "parser/parser.c"
    break;

  case 66: /* rel_cond_stmt: EMPTY  */
#line 300 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3294 "parser/parser.c"
    break;

  case 67: /* rel_ops: L_OP  */
#line 306 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3300 "parser/parser.c"
    break;

  case 68: /* rel_ops: G_OP  */
#line 307 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3306 "parser/parser.c"
    break;

  case 69: /* rel_ops: LE_OP  */
#line 308 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3315 "parser/parser.c"
    break;

  case 70: /* rel_ops: GE_OP  */
#line 312 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3324 "parser/parser.c"
    break;

  case 71: /* rel_ops: IN  */
#line 316 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3333 "parser/parser.c"
    break;

  case 72: /* set_expr: simple_expr IN simple_expr  */
#line 322 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression), TERNARY_TYPE); 
                free((yyvsp[-1].str_value));
            }
#line 3342 "parser/parser.c"
    break;

  case 73: /* func_call: ID PARENT_LEFT simple_param_list PARENT_RIGHT  */
#line 328 "parser/c7.y"
                                                                  {
                if(PARSER_VERBOSE)
                    printf("[BISON] Function call arity %d.\n", arity_counter);
                set_arity((yyvsp[-3].int_value), arity_counter);
                check_function((yyvsp[-3].int_value));
                (yyval.expression) = create_bin_expr(create_var_expr((yyvsp[-3].int_value)), (yyvsp[-1].expression), BINARY_TYPE);
                arity_counter = 0;
            }
#line 3355 "parser/parser.c"
    break;

  case 74: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 338 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value)), BINARY_TYPE); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3365 "parser/parser.c"
    break;

  case 75: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 343 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE); 
                    free((yyvsp[-3].str_value));
                }
#line 3374 "parser/parser.c"
    break;

  case 76: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 347 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE); 
                    free((yyvsp[-3].str_value));
                }
#line 3383 "parser/parser.c"
    break;

  case 77: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 351 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE);
                    free((yyvsp[-3].str_value)); 
                }
#line 3392 "parser/parser.c"
    break;

  case 78: /* simple_expr: arith_expr  */
#line 357 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3398 "parser/parser.c"
    break;

  case 79: /* simple_expr: func_cte_expr  */
#line 358 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3404 "parser/parser.c"
    break;

  case 80: /* func_cte_expr: EMPTY  */
#line 361 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3413 "parser/parser.c"
    break;

  case 81: /* func_cte_expr: STRING  */
#line 365 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3422 "parser/parser.c"
    break;

  case 82: /* func_cte_expr: CHAR  */
#line 369 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3430 "parser/parser.c"
    break;

  case 83: /* func_expr: func_call  */
#line 374 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3436 "parser/parser.c"
    break;

  case 84: /* func_expr: set_func_call  */
#line 375 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3442 "parser/parser.c"
    break;

  case 85: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 376 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3448 "parser/parser.c"
    break;

  case 86: /* arith_expr: arith_expr ADD term  */
#line 379 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), ADD_TYPE);
            }
#line 3456 "parser/parser.c"
    break;

  case 87: /* arith_expr: arith_expr SUB term  */
#line 382 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
            }
#line 3464 "parser/parser.c"
    break;

  case 88: /* arith_expr: term  */
#line 385 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3470 "parser/parser.c"
    break;

  case 89: /* term: term MULT factor  */
#line 388 "parser/c7.y"
                                    {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
        }
#line 3478 "parser/parser.c"
    break;

  case 90: /* term: term DIV factor  */
#line 391 "parser/c7.y"
                                   {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
        }
#line 3486 "parser/parser.c"
    break;

  case 91: /* term: factor  */
#line 394 "parser/c7.y"
                    { (yyval.expression) = (yyvsp[0].expression); }
#line 3492 "parser/parser.c"
    break;

  case 92: /* term: SUB factor  */
#line 395 "parser/c7.y"
                                        { 
            (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), BINARY_TYPE); 
        }
#line 3500 "parser/parser.c"
    break;

  case 93: /* factor: INTEGER  */
#line 400 "parser/c7.y"
                     {
            if (global_var_data_type == DT_FLOAT || global_var_data_type == DT_FLOAT_IF)
                (yyval.expression) = create_type_cast_expr("int2float", create_int_expr((yyvsp[0].int_value)));
            else (yyval.expression) = create_int_expr((yyvsp[0].int_value));
        }
#line 3510 "parser/parser.c"
    break;

  case 94: /* factor: FLOAT  */
#line 405 "parser/c7.y"
                   {
            if (global_var_data_type == DT_INT)
                (yyval.expression) = create_type_cast_expr("float2int", create_float_expr((yyvsp[0].float_value)));
            else (yyval.expression) = create_float_expr((yyvsp[0].float_value));
        }
#line 3520 "parser/parser.c"
    break;

  case 95: /* factor: ID  */
#line 410 "parser/c7.y"
                {
            set_id_type((yyvsp[0].int_value), ST_ID_VAR);
            check_declared((yyvsp[0].int_value));
            if (global_var_data_type == DT_INT || global_var_data_type == DT_FLOAT) {
                if (get_var_type((yyvsp[0].int_value)) == DT_SET) {
                    raise_wrong_cast(DT_SET, parser_line, parser_column);
                    (yyval.expression) = create_type_cast_expr("wrong_cast", create_var_expr((yyvsp[0].int_value)));
                } else if (get_var_type((yyvsp[0].int_value)) == DT_INT && global_var_data_type == DT_FLOAT)
                    (yyval.expression) = create_type_cast_expr("float2int", create_var_expr((yyvsp[0].int_value)));
                else if (get_var_type((yyvsp[0].int_value)) == DT_FLOAT && global_var_data_type == DT_INT)
                    (yyval.expression) = create_type_cast_expr("int2float", create_var_expr((yyvsp[0].int_value)));
                else (yyval.expression) = create_var_expr((yyvsp[0].int_value));
            } else (yyval.expression) = create_var_expr((yyvsp[0].int_value));
        }
#line 3539 "parser/parser.c"
    break;

  case 96: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 424 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3545 "parser/parser.c"
    break;

  case 97: /* factor: func_expr  */
#line 425 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3551 "parser/parser.c"
    break;


#line 3555 "parser/parser.c"

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

#line 428 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError:%d:%d: %s.\n", parser_line, parser_column, s);
    parser_error += 1;
}
