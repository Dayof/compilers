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
  YYSYMBOL_mid_factor = 86,                /* mid_factor  */
  YYSYMBOL_factor = 87                     /* factor  */
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
#define YYLAST   5808

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  641

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
     391,   394,   397,   400,   403,   408,   413,   427,   428
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
  "func_expr", "arith_expr", "term", "mid_factor", "factor", YY_NULLPTR
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

#define YYPACT_NINF (-352)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      69,    92,   -28,    68,   204,   317,   427,   441,   276,  -352,
     443,    71,    13,    15,   471,   365,   -18,    23,    67,    80,
      65,    93,    89,   216,   480,    79,   912,   129,  2336,   138,
     151,   161,   144,  2534,   181,   205,   210,   217,   221,   234,
     238,   127,  2931,  2963,  2995,  3027,  3059,  2574,  3091,   189,
     202,   486,   224,  3678,  3678,   273,  3693,  3708,   753,   251,
    3708,  3708,  3708,  3840,   153,  3723,   496,  3123,  3678,   149,
    2574,    28,  4602,  3850,  4636,   100,    43,   163,   225,  1656,
    5166,  4649,  4683,  4696,  2280,  4730,  4743,  4777,  3155,  3187,
     289,   290,   297,   298,   316,   323,   626,   336,   338,   343,
     332,  1044,   319,  1993,  1143,   351,   422,    18,   356,   364,
     368,   372,   125,   155,  3693,   382,   633,  4790,   252,  1428,
    2574,  2574,   257,  3913,  3928,  3943,  3958,  3973,  3988,  4003,
    3928,   370,   370,   370,   370,   374,   395,   442,  3219,   912,
    3678,   376,  3738,  1002,  1195,  3767,   453,   456,   469,   495,
     512,  3782,   522,  4824,  4837,   670,   262,   272,  5179,  5192,
    4871,  4884,  4918,  4931,  3251,  3283,  3315,  3347,   411,  3738,
     476,   912,   191,   515,   249,  3379,   912,   532,  3411,   912,
    3443,  3475,   216,   506,   531,   565,   578,  3678,   758,   582,
     584,   591,   606,  1004,   674,  1111,  1238,  1297,  2391,  2418,
    2522,  2581,   566,  3678,   918,   596,   605,   612,   623,   625,
     632,   638,  1402,  1385,  1518,  1563,  1821,   644,  1838,   654,
    2003,  2108,  2251,  3678,  1436,   641,   645,   665,   647,   676,
     692,   699,   548,   203,   568,   798,   854,   678,   859,     6,
     874,   946,  1010,  3678,  1502,  3869,  5691,   705,   708,   709,
     711,  5225,  5238,    82,   295,   309,  5724,  5730,  5271,  5284,
    5317,  5685,  5330,  5363,  5376,  3678,  1694,   261,   300,   320,
     715,   722,   723,   724,   713,   760,  1482,  1609,  1646,   391,
    1731,   461,  1764,  1814,  1827,   153,   618,   618,   153,  1547,
     573,  3869,   714,   216,   731,   732,   736,   707,  2534,   744,
     754,   211,  1350,  1610,  1786,  2574,  1864,   746,   757,  3678,
    1751,   574,   595,   598,   756,   768,   773,   774,  1743,   809,
    2068,  2429,  2451,   614,  2475,   244,  2631,  2721,  2746,  3678,
    2130,  3898,   739,  1098,   780,   791,   792,   805,  4132,  4071,
    4166,   410,    33,    20,    63,    12,  2510,  5106,  4179,  4213,
    4226,  5072,  4260,  4273,  4307,  3811,   912,   808,   782,  3708,
    3708,  3708,   818,   648,  2614,   785,  3708,  3708,  3708,   153,
     618,   618,  3507,   832,   661,  2651,   799,  3708,  3708,  3708,
     153,   806,   806,   806,   806,   833,   748,  1060,   816,  3708,
    3708,  3708,   153,  1679,  1679,  1679,  1679,   843,   845,  4084,
    5409,   313,   820,  3708,  3708,  3708,  3869,  4018,  4018,  1916,
    1916,  1916,  1916,   844,   871,  1868,   825,  3708,  3708,  3708,
     153,  2115,  2115,  2115,  2115,   414,  2642,  2837,   418,  1639,
     334,   912,   855,   830,  3678,  3678,   273,  3693,  3708,   753,
    3723,   136,  1910,  1958,   872,   891,  2754,   861,  3708,  3708,
    3708,   153,  2181,  2181,  2181,  2181,   897,   957,  4119,  4320,
      72,   895,   863,  3708,  3708,  3708,   153,  3782,  3898,  3898,
    4033,  4033,  2426,  2426,  2426,  2426,   419,  3539,  3571,   904,
     913,   914,   919,  3189,  3221,   923,   928,   929,   933,   494,
    3253,  3285,  2772,  3478,   939,   944,   945,   958,   497,  3510,
    3542,  3574,  3606,  1080,  1084,   962,   968,   969,   970,   504,
    1120,  1150,  1170,  1244,  5422,  5455,   971,   974,   975,   977,
     375,  5763,  5769,  5468,  5501,  5514,  5547,  1892,  1957,   978,
     980,   981,   988,   508,  2062,  2097,  2121,  2167,  4965,  5560,
    3603,  2022,   990,   991,   993,   911,   917,   996,  1143,  3693,
    1428,  2801,  2867,   999,  1000,  1011,  1019,   509,  2900,  2933,
    2966,  2998,  4354,  4367,  3782,  1020,  1022,  1023,  1028,   525,
     537,   194,   270,  5119,  5153,  4401,  4414,  4448,  4461,  3635,
    4978,  5012,  5025,  5059,  3317,  3349,  3381,  3413,  3445,  3638,
    3671,  3775,  3819,  3827,  1248,  1275,  1290,  1334,  1376,  5593,
    5606,  5639,  5652,  2183,  2244,  2257,  2314,  2376,  2063,  1031,
    1032,  1034,  2216,  2389,  1428,  3663,  1040,  2477,  3030,  3062,
    3094,  3126,  3158,   559,  4495,  4508,  4542,  4555,  4589,  2653,
    2686,  2719,  2766,  1428,   562,  2799,  1428,  2832,  1428,  2865,
    2898
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,  -352,   948,  -352,  -352,  -352,  -352,     0,   -52,
    -352,  -228,   -20,  -171,  -165,  -351,   -32,  -110,   608,   752,
     -45,    17,   -82,  -102,  -137,   -31,    14,    78,    30,  -248,
      25,   207,  -237,  1145,   -16,   421,  1052,   853,  1294,  2229,
    2160,  1730,   858
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     5,     6,    11,    15,    21,    42,    12,
      17,   112,    43,    26,    27,    44,    45,    46,   114,    56,
      47,    48,   104,   105,   106,   107,   253,   254,   255,   124,
     256,   257,   130,    99,   235,   236,   100,   237,   238,   239,
     240,   241,   242
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    24,   290,   202,     7,   477,   341,   407,   173,   304,
      49,   356,    67,     8,   393,   394,    75,   357,   -58,   408,
      14,    -9,   143,    18,   -58,   -50,   -54,    -9,    49,    19,
     -50,    81,   -54,   -78,   -66,    20,    -9,   196,   196,   -50,
     215,   172,   258,   -66,   -66,   -50,   122,   123,   277,   -54,
     -58,   -58,   196,    81,    81,   -66,   291,   425,   -54,   469,
     428,    76,   -66,   -66,   -66,   -66,   -66,   -66,     9,   -56,
       1,   468,    79,   -15,   305,   -56,    13,    78,   -57,   -15,
     540,   -54,   121,   -10,   -57,   -14,    22,   155,   258,   -54,
       2,   -14,    -7,    -7,   -54,    79,    23,   470,   215,   303,
      78,   -56,   -56,   307,    81,    81,   119,   167,    81,   471,
     -57,   -57,   342,    -7,    81,    81,    81,    81,    81,   302,
     -54,   406,   431,    49,   196,    77,   321,   348,   432,   258,
      25,   150,    64,    51,   156,   277,   306,   151,   120,   178,
      65,   489,   550,    52,   180,    79,    79,   181,   118,   158,
      78,    78,   498,   321,    68,    49,    53,   343,   265,   -19,
      49,   -18,   266,    49,   509,   -19,    54,   -18,   346,   -56,
     267,   196,   196,   345,   120,   268,   269,   183,   184,   185,
     186,   270,   271,   272,   273,    55,    57,   196,   215,    72,
      73,    74,   533,   274,   275,   276,    88,   179,    77,   157,
     -53,   -56,   -56,   355,    -2,     1,   -53,   196,   392,    89,
      58,   -96,   -96,   -96,   -96,    59,    64,   -20,   476,   -20,
     -22,   344,    60,   557,   440,     2,    61,   196,   258,   258,
     -96,   -58,   -53,   469,   -20,   -20,   -20,   -20,   569,    62,
     -20,   -20,   -20,    63,   -20,   -20,   -20,   -20,   -20,   196,
     277,   -78,   452,   453,    80,   -17,   -78,   -20,   -57,   122,
     123,   -17,   -61,   -58,   -58,    90,   -61,   -82,   -53,   277,
     196,   196,   277,   -82,   441,   258,   -55,    80,   -55,   -61,
     -12,    -8,   -55,   -12,   408,   -61,   -61,   -61,   -61,    81,
     -57,   -57,   108,   196,   321,   135,   -82,   -61,   -61,   -61,
     -53,   121,   -56,   -80,   -81,   430,   -80,   -56,   -55,   -55,
     -55,   -55,   -80,   196,   348,   348,   -58,    -4,    -4,    76,
     -57,   -58,   136,   401,   342,   -57,   -81,    80,    80,   -79,
      79,    80,   -81,   -56,   -56,    78,   471,   159,    -4,   348,
      49,   -53,   137,   122,   123,   138,   -53,   -58,   -58,   139,
     347,   -57,   -57,   277,   196,   196,   346,   548,   144,   140,
     141,   345,   146,   145,   277,   215,   215,   215,   215,   343,
     147,   -16,   -53,   406,   148,    68,   277,   -16,   149,    69,
     346,   164,   -55,    77,   545,   345,    16,   -55,   153,   169,
     258,   258,   258,   258,   258,   258,   258,   -79,   183,   184,
     185,   186,   165,   -79,   277,   277,   277,   277,   277,   460,
      72,    73,    74,   -55,   -55,    49,   -48,   -72,   196,   196,
     538,   215,   -48,   258,   539,   -49,   151,    -5,    -5,   -48,
     151,   -49,   521,   344,   -48,   277,   321,   321,   321,   321,
     304,    -6,    -6,    -3,    -3,    67,   290,    50,    -5,   166,
     277,   277,   348,   348,   348,   348,   348,   348,   348,   348,
     -74,    49,    -6,   -75,    -3,    50,   615,   -78,    82,   421,
     422,   -13,   -13,   -78,   197,   197,   -76,   216,   341,   259,
     -11,   -11,   571,   -52,   520,   278,   -23,   -23,   -52,   197,
      82,    82,   -13,   346,   346,   573,   -21,   -21,   345,   345,
     588,   -11,   -77,   593,   304,   305,   151,   -23,    67,   151,
     598,   358,    80,   634,   607,   622,   151,   -21,   617,   -73,
     151,   151,   -49,   304,    49,   259,   304,   -49,   304,   175,
     303,   628,   258,   215,   307,   216,   359,   151,   347,   -51,
     308,    82,    82,   -52,   -51,    82,   344,   572,   277,   -52,
     302,    82,    82,    82,    82,    82,   -94,   -94,   -94,   -94,
      50,   197,   347,   322,   349,   -51,   259,   306,   638,   305,
     360,   -51,   278,   372,   355,   -94,   -95,   -95,   -95,   -95,
     429,   -82,   632,   361,   342,   145,   -82,   365,   305,   366,
     322,   305,    50,   305,   303,   -95,   367,    50,   307,   348,
      50,   637,   -80,   -82,   639,   -81,   640,   -80,   197,   197,
     -81,   368,   -80,   303,   302,   522,   303,   307,   303,   -81,
     307,   -79,   307,   187,   197,   216,   -79,   188,   376,   343,
     377,   306,   -78,   302,   286,   287,   302,   378,   302,   154,
     346,   286,   287,   379,   197,   345,   189,   190,   191,   192,
     306,   -79,   388,   306,   484,   306,   286,   287,   193,   194,
     195,   -78,   381,   382,   197,   259,   259,   493,   -82,   286,
     287,   -41,   -80,   -41,   -41,   347,   347,   347,   574,   369,
     -96,   389,   -96,   -96,   -96,   -96,   197,   278,   -41,   -41,
     -41,   -41,   -81,   344,   -41,   -41,   -41,   390,   -41,   -41,
     -41,   -41,   -41,   176,   391,   -79,   278,   197,   197,   278,
     402,   -41,   259,   403,   404,   -39,   405,   -39,   -39,   -94,
     416,   -94,   -94,   -94,   -94,   -94,    82,   417,   418,   419,
     197,   322,   -39,   -39,   -39,   -39,   433,   434,   -39,   -39,
     -39,   435,   -39,   -39,   -39,   -39,   -39,   -39,   436,   438,
     197,   349,   349,   442,   504,   -39,   286,   287,   243,   439,
     101,   447,   244,   187,   443,   420,   -96,   245,   -96,   -96,
     -96,   -96,   -96,   448,   102,   246,   349,    50,   449,   450,
     461,   247,   248,   249,   250,   462,   189,   190,   191,   192,
     278,   197,   197,   251,   103,   252,   463,   464,   193,   194,
     195,   278,   216,   216,   216,   216,   -83,   -83,   -83,   -83,
     465,   203,   478,   278,   451,   204,   -96,   -96,   -96,   -96,
     -96,   -96,   347,   479,   483,   -83,   485,   259,   259,   259,
     259,   259,   259,   259,   208,   209,   210,   211,   492,   503,
     494,   278,   278,   278,   278,   278,   212,   213,   214,   514,
     527,   515,    50,   286,   287,   197,   197,   505,   216,   541,
     259,   516,   -84,   -84,   -84,   -84,   529,   -98,   -98,   -98,
     -98,   542,   278,   322,   322,   322,   322,   528,   551,   286,
     287,   -84,   -88,   -88,   395,   396,   -98,   278,   278,   349,
     349,   349,   349,   349,   349,   349,   349,   552,    50,   286,
     287,   -88,   553,   562,   565,    87,    95,    95,   564,   217,
     580,   201,   201,    28,   222,   182,   264,   279,   612,   581,
     582,   115,   284,   203,   613,   583,   201,   117,    87,   584,
      29,    30,    31,    32,   585,   586,    33,    34,    35,   587,
      36,    37,    38,    39,    40,   589,   208,   209,   210,   211,
     590,   591,    10,    41,   -91,   -91,   -91,   -91,   212,   213,
     214,    50,   264,   563,   592,   286,   287,   217,   594,   259,
     216,   308,   222,   -91,   595,   596,   597,   599,    87,    87,
     600,   601,    87,   602,   603,   278,   604,   605,    87,    87,
      87,    87,    87,    95,   606,   323,   609,   610,   201,   611,
     328,   354,   614,   264,   279,   618,   619,   329,   171,   284,
     -94,   330,   -94,   -94,   -94,   -94,   331,   620,   -93,   -93,
     -93,   -93,   323,   332,   333,   621,   624,   328,   625,   626,
     334,   335,   336,   337,   627,   308,   349,   -93,   629,   630,
     362,   631,   338,   339,   340,   201,   364,   635,   549,   -46,
     437,   -46,     0,   -46,   308,     0,   373,   308,   -46,   308,
       0,   201,   375,     0,     0,   -46,   -46,     0,   -92,   -92,
     -92,   -92,   -46,   -46,   -46,   -46,   385,     0,     0,     0,
       0,   201,   387,     0,   -46,   -46,   -46,   -92,   -85,   -85,
     -85,   -85,   -97,   -97,   -97,   -97,   397,     0,     0,     0,
       0,   201,   400,   264,   -66,    94,    97,   -85,    98,     0,
     -66,   -97,     0,   -66,   -66,     0,   113,   -95,   413,   -95,
     -95,   -95,   -95,   201,   415,   -66,     0,     0,   -86,   -86,
     395,   396,   -66,   -66,   -66,   -66,   -66,   -66,   279,     0,
       0,   279,     0,   284,   201,   201,   284,   -86,   243,   264,
     289,     0,   244,     0,     0,     0,     0,   245,   -87,   -87,
     395,   396,   444,    87,   102,   246,   152,   201,   446,     0,
       0,   247,   248,   249,   250,     0,     0,   -87,   -89,   -89,
     -89,   -89,   456,   251,   103,   252,     0,   201,   459,   354,
       0,     0,   168,     0,   170,     0,     0,   -89,     0,     0,
     -47,     0,   -47,   174,   -47,   109,   110,   111,     0,   -47,
       0,     0,     0,   354,     0,     0,   -47,   -47,     0,     0,
       0,   177,   279,   -47,   -47,   -47,   -47,   284,   201,   201,
       0,     0,     0,   279,     0,   -47,   -47,   -47,   284,   222,
     222,   222,   222,     0,   -83,   279,   -83,   -83,   -83,   -83,
     284,     0,   -90,   -90,   -90,   -90,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,   264,   264,   264,   264,   264,   264,
     264,   -90,     0,   279,     0,   -74,     0,     0,   284,   284,
     284,   284,   284,   -75,   -75,   -75,   -75,    95,    95,     0,
     217,     0,   201,   201,     0,   222,     0,   264,   -76,   -76,
     -76,   -76,   -75,   -84,   279,   -84,   -84,   -84,   -84,   284,
     328,   328,   328,   328,     0,     0,     0,   -76,     0,   279,
     279,     0,     0,     0,   284,   284,   354,   354,   354,   354,
     354,   354,   354,   354,     0,     0,     0,   113,     0,     0,
     113,    83,   -77,   -77,   -77,   -77,     0,   198,   198,     0,
     218,   -26,   260,   -26,   -26,     0,     0,     0,   280,     0,
       0,   -77,   198,    83,    83,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -73,   -73,   -73,   -73,     0,     0,
     380,   -26,   -96,   -96,   -96,   -96,   -96,     0,   260,     0,
       0,     0,   217,   -73,     0,     0,   264,   222,   218,   -94,
     -94,   -94,   -94,   -94,    83,    83,     0,   279,    83,     0,
       0,   113,   284,     0,    83,    83,    83,    83,    83,   292,
       0,   293,   113,     0,   198,     0,   324,   350,     0,   260,
       0,   223,     0,     0,   113,   280,   294,   295,   296,   297,
       0,     0,   298,   299,   300,     0,    36,    37,    38,    39,
      40,     0,     0,   324,   228,   229,   230,   231,     0,   301,
       0,     0,   113,   354,     0,     0,   232,   233,   234,     0,
       0,   198,   198,     0,     0,     0,   543,   544,   -95,   546,
     -95,   -95,   -95,   -95,   -95,     0,     0,   198,   218,     0,
       0,     0,     0,   113,   480,   481,   482,   243,     0,     0,
       0,   486,   487,   488,     0,     0,     0,   198,   113,   570,
       0,     0,   495,   496,   497,   -95,   -95,   -95,   -95,   -95,
     247,   248,   249,   250,   506,   507,   508,   198,   260,   260,
       0,     0,   251,   399,   252,     0,     0,     0,   517,   518,
     519,     0,   -46,   -46,     0,     0,   -46,     0,     0,   198,
     280,   -46,   530,   531,   532,     0,     0,     0,   -46,   -46,
     -83,   -83,   -83,   -83,   -83,   -46,   -46,   -46,   -46,   280,
     198,   198,   280,   547,     0,   260,     0,   -46,   -46,   -46,
       0,     0,     0,   554,   555,   556,     0,     0,     0,    83,
       0,   616,     0,   198,   324,     0,     0,     0,   566,   567,
     568,   -28,     0,   -28,   -28,   -83,   623,   -83,   -83,   -83,
     -83,   -83,     0,   198,   350,   350,     0,     0,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -47,   -47,     0,     0,   -47,   350,
       0,   -28,   -84,   -47,   -84,   -84,   -84,   -84,   -84,     0,
     -47,   -47,   -60,   280,   198,   198,     0,   -47,   -47,   -47,
     -47,   125,   126,     0,   280,   218,   218,   218,   218,   -47,
     -47,   -47,     0,   127,   223,     0,   280,     0,   224,     0,
     -60,   -60,   128,   129,   -60,   -60,     0,     0,     0,   265,
     260,   260,   260,   260,   260,   260,   260,   228,   229,   230,
     231,     0,     0,     0,   280,   280,   280,   280,   280,   232,
     233,   234,   270,   271,   272,   273,     0,     0,   198,   198,
       0,   218,     0,   260,   274,   275,   276,   -98,     0,   -98,
     -98,   -98,   -98,   -98,     0,   280,   324,   324,   324,   324,
     -94,   -94,   -94,   -94,   -94,   -94,   309,     0,     0,     0,
     280,   280,   350,   350,   350,   350,   350,   350,   350,   350,
     -88,     0,   -88,   -88,   423,   424,   -88,    86,     0,   314,
     315,   316,   317,   200,   200,     0,   221,   -27,   263,   -27,
     -27,   318,   319,   320,   283,     0,     0,     0,   200,     0,
      86,     0,     0,     0,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -27,   -84,   -84,
     -84,   -84,   -84,   -93,   263,   -93,   -93,   -93,   -93,   -93,
       0,     0,   260,   218,   221,   -98,   -98,   -98,   -98,   -98,
      86,    86,     0,     0,    86,     0,     0,     0,   280,     0,
      86,    86,    86,   162,   163,   -31,     0,   -31,   -31,     0,
     200,     0,   327,   353,   -92,   263,   -92,   -92,   -92,   -92,
     -92,   283,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -85,   327,
     -85,   -85,   -85,   -85,   -85,   -31,     0,     0,     0,   350,
       0,   -29,     0,   -29,   -29,     0,     0,   200,     0,     0,
       0,   243,     0,     0,     0,   244,     0,     0,   -29,   -29,
     -29,   -29,     0,   200,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   247,   248,   249,   250,     0,     0,
       0,   -29,     0,   200,     0,     0,   251,   399,   252,   -30,
       0,   -30,   -30,   -97,     0,   -97,   -97,   -97,   -97,   -97,
       0,     0,     0,   200,     0,   263,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,   200,     0,     0,   288,   -30,
     -96,   -96,   -96,   -96,   -96,   -96,   142,     0,   -96,   -96,
     -88,   -88,   -88,   383,   384,   283,   200,   200,   283,     0,
     -96,   263,     0,   -23,     0,   -23,   -23,   -96,   -96,   -96,
     -96,   -96,   -96,     0,     0,    86,     0,     0,     0,   200,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,   200,
       0,   353,     0,   -23,   -21,     0,   -21,   -21,   -86,     0,
     -86,   -86,   423,   424,   -86,   -95,   -95,   -95,   -95,   -95,
     -95,   -21,   -21,   -21,   -21,   353,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   283,
     490,   491,     0,   -87,   -21,   -87,   -87,   423,   424,   -87,
     283,   221,   221,   501,   502,   -91,   -91,   -91,   -91,   -91,
     265,     0,   283,     0,   266,   512,   513,   -89,     0,   -89,
     -89,   -89,   -89,   -89,     0,   329,   263,   263,   263,   263,
     263,   525,   526,   270,   271,   272,   273,     0,     0,     0,
     283,   283,   283,   536,   537,   274,   275,   276,   334,   335,
     336,   337,     0,     0,   200,   200,     0,   221,     0,   263,
     338,   458,   340,   -90,     0,   -90,   -90,   -90,   -90,   -90,
       0,   283,   327,   327,   560,   561,   309,     0,     0,   -74,
     310,   -74,   -74,   -74,   -74,   -74,   283,   283,   353,   353,
     353,   353,   353,   353,   577,   578,     0,    85,     0,   314,
     315,   316,   317,   199,   199,     0,   220,   -13,   262,   -13,
     -13,   318,   319,   320,   282,     0,     0,     0,   199,     0,
      85,     0,     0,     0,   -13,   -13,   -13,   -13,     0,     0,
     -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -13,   -93,   -93,
     -93,   -93,   -93,   -76,   262,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   220,     0,    84,     0,   263,   221,
      85,    85,    96,    96,    85,   219,   -65,   261,   131,   132,
      85,   160,   161,   281,   283,   -65,   -65,   116,     0,    84,
     199,     0,   326,   352,     0,   262,     0,   -65,     0,     0,
       0,   282,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -77,     0,   -77,   -77,   -77,   -77,   -77,     0,     0,   326,
       0,     0,     0,   261,     0,     0,     0,   -39,     0,   -39,
     -39,     0,     0,   219,     0,   353,     0,   199,     0,    84,
      84,     0,     0,    84,   -39,   -39,   -39,   -39,     0,    84,
     -39,   -39,   -39,   199,   -39,   -39,   -39,   -39,   -39,    96,
       0,   325,   351,     0,   261,     0,     0,   -39,     0,     0,
     281,     0,   -73,   199,   -73,   -73,   -73,   -73,   -73,     0,
     -38,     0,   -38,   -38,     0,     0,     0,   -98,   325,   -98,
     -98,   -98,   -98,   199,     0,   262,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -38,   -38,   363,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -88,   199,   -88,   -88,   370,   371,
     -38,   329,   374,     0,     0,   330,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,   282,   426,   427,   282,     0,
       0,   262,   386,     0,   334,   335,   336,   337,   -84,   -84,
     -84,   -84,   -84,   -84,     0,    85,   338,   458,   340,   199,
       0,     0,   398,     0,   261,     0,     0,     0,   -41,     0,
     -41,   -41,   -98,   -98,   -98,   -98,   -98,   -98,     0,   199,
       0,   352,     0,     0,   414,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     636,     0,     0,     0,   281,   352,   -60,   281,   -41,     0,
     261,     0,   -60,     0,     0,   125,   126,     0,   -91,   282,
     -91,   -91,   -91,   -91,    84,     0,     0,   127,   445,   -37,
     282,   499,   500,   -37,   -60,   -60,   128,   129,   -60,   -60,
       0,   -37,   282,   510,   511,     0,   -37,   -37,   457,     0,
     351,     0,   -37,   -37,   -37,   -37,   262,   262,   262,   523,
     524,     0,     0,     0,   -37,   -37,   -37,     0,     0,    68,
     282,   534,   535,    69,   351,     0,     0,   -93,    70,   -93,
     -93,   -93,   -93,     0,   199,   199,    71,   220,   281,   262,
       0,     0,   183,   184,   185,   186,     0,     0,     0,   281,
       0,   282,   558,   559,    72,    73,    74,     0,     0,     0,
     -92,   281,   -92,   -92,   -92,   -92,   282,   282,   352,   352,
     352,   352,   575,   576,     0,   261,   261,   261,   -88,   -88,
     -88,   454,   455,   -88,     0,     0,     0,     0,   -86,   281,
     -86,   -86,   370,   371,   -32,     0,   -32,   -32,   -92,   -92,
     -92,   -92,   -92,    96,    96,     0,   219,     0,   261,     0,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
     281,   -32,   -32,   -32,   -32,   -32,   -32,   -33,     0,   -33,
     -33,     0,     0,     0,   -32,   281,   281,   351,   351,   351,
     351,     0,     0,     0,   -33,   -33,   -33,   -33,   262,   220,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -34,     0,   -34,   -34,   282,     0,     0,   -33,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -34,   -92,   -92,   -92,   -92,   -92,   -92,   -43,     0,   -43,
     -43,     0,     0,     0,     0,   352,     0,   261,   219,   -85,
     -85,   -85,   -85,   -85,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -43,   -43,   281,   -43,   -43,   -43,   -43,   -43,   -43,
     -36,     0,   -36,   -36,     0,     0,     0,   -43,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -44,     0,   -44,   -44,     0,     0,     0,
     -36,     0,     0,   -87,   351,   -87,   -87,   370,   371,     0,
     -44,   -44,   -44,   -44,     0,     0,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -42,     0,   -42,   -42,
       0,     0,     0,   -44,   -97,   -97,   -97,   -97,   -97,   -97,
       0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -45,
       0,   -45,   -45,     0,     0,     0,   -42,   -86,   -86,   -86,
     454,   455,   -86,     0,     0,     0,   -45,   -45,   -45,   -45,
       0,     0,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -26,     0,   -26,   -26,     0,     0,     0,   -45,
     -87,   -87,   -87,   454,   455,   -87,     0,     0,     0,   -26,
     -26,   -26,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -28,     0,   -28,   -28,     0,     0,
       0,     0,   -26,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,    28,     0,   182,    66,
       0,     0,     0,     0,   -28,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,    29,    30,    31,    32,     0,     0,    33,
      34,    35,     0,    36,    37,    38,    39,    40,   -25,     0,
     -25,   -25,     0,     0,     0,     0,    41,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -27,     0,   -27,   -27,     0,     0,     0,     0,   -25,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,   -27,   -27,   -27,
     -27,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -31,     0,   -31,   -31,     0,     0,     0,     0,
     -27,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -24,     0,   -24,   -24,     0,     0,
       0,     0,   -31,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -29,     0,   -29,   -29,
       0,     0,     0,     0,   -24,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -30,     0,
     -30,   -30,     0,     0,     0,   -85,   -29,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -38,     0,   -38,   -38,     0,     0,     0,   -97,   -30,   -97,
     -97,   -97,   -97,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -32,     0,   -32,   -32,     0,     0,     0,   -89,
     -38,   -89,   -89,   -89,   -89,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -33,     0,   -33,   -33,     0,     0,
       0,   -90,   -32,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -34,     0,   -34,   -34,
       0,     0,     0,   -74,   -33,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -43,     0,
     -43,   -43,     0,     0,     0,   -75,   -34,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   -43,   -43,   -43,   -43,     0,
       0,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -36,     0,   -36,   -36,     0,     0,     0,   -76,   -43,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -44,     0,   -44,   -44,     0,     0,     0,   -77,
     -36,   -77,   -77,   -77,   -77,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,     0,     0,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -42,     0,   -42,   -42,     0,     0,
       0,   -73,   -44,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -45,     0,   -45,   -45,
       0,     0,     0,     0,   -42,   -97,   -97,   -97,   -97,   -97,
       0,     0,     0,   -45,   -45,   -45,   -45,     0,     0,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -13,     0,
     -13,   -13,     0,     0,     0,     0,   -45,   -86,   -86,   -86,
     383,   384,     0,     0,     0,   -13,   -13,   -13,   -13,     0,
       0,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,   -13,
      28,     0,   182,   579,     0,     0,     0,     0,   -13,   -87,
     -87,   -87,   383,   384,     0,     0,     0,    29,    30,    31,
      32,     0,     0,    33,    34,    35,     0,    36,    37,    38,
      39,    40,   -23,     0,   -23,   -23,     0,     0,     0,     0,
      41,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,    28,     0,   182,   608,     0,     0,
       0,     0,   -23,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,    29,    30,    31,    32,     0,     0,    33,    34,    35,
       0,    36,    37,    38,    39,    40,   -21,     0,   -21,   -21,
       0,     0,     0,     0,    41,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,   329,   633,
       0,     0,   330,     0,     0,     0,   -21,   331,   -75,   -75,
     -75,   -75,   -75,   187,   332,   333,     0,   188,     0,     0,
       0,   334,   335,   336,   337,    91,     0,     0,   203,     0,
      92,    93,   204,   338,   339,   340,   189,   190,   191,   192,
     205,     0,     0,   223,     0,   206,   207,   224,   193,   194,
     195,   208,   209,   210,   211,   225,     0,     0,   -35,     0,
     226,   227,   -35,   212,   213,   214,   228,   229,   230,   231,
     -35,     0,     0,   309,     0,   -35,   -35,   310,   232,   233,
     234,   -35,   -35,   -35,   -35,   311,     0,     0,     0,     0,
     312,   313,     0,   -35,   -35,   -35,   314,   315,   316,   317,
       0,     0,   243,     0,     0,     0,   244,     0,   318,   319,
     320,   245,   -76,   -76,   -76,   -76,   -76,   265,   102,   246,
       0,   266,     0,     0,     0,   247,   248,   249,   250,   267,
       0,     0,     0,     0,   268,   269,     0,   251,   103,   252,
     270,   271,   272,   273,     0,     0,   329,     0,     0,     0,
     330,     0,   274,   275,   276,   331,   -77,   -77,   -77,   -77,
     -77,     0,   332,   333,   -73,   -73,   -73,   -73,   -73,   334,
     335,   336,   337,     0,     0,   -40,     0,     0,     0,   -40,
       0,   338,   339,   340,   -40,   285,   -96,     0,   -96,   -96,
     -96,   -96,   -40,     0,     0,   -96,   -96,     0,   -40,   -40,
     -40,   -40,     0,     0,   243,     0,     0,   -96,   244,     0,
     -40,   -40,   -40,   245,   -96,   -96,   -96,   -96,   -96,   -96,
       0,   246,     0,     0,     0,     0,     0,   247,   248,   249,
     250,     0,     0,   329,     0,     0,     0,   330,     0,   251,
     399,   252,   331,     0,     0,     0,     0,     0,   -62,     0,
     333,     0,   -62,     0,     0,     0,   334,   335,   336,   337,
       0,     0,     0,    68,     0,   -62,     0,    69,   338,   458,
     340,   -62,   -62,   -62,   -62,     0,     0,     0,   -67,     0,
      71,     0,   -67,   -62,   -62,   -62,   183,   184,   185,   186,
       0,     0,     0,   -68,     0,   -67,     0,   -68,    72,    73,
      74,   -67,   -67,   -67,   -67,     0,     0,     0,   -71,     0,
     -68,     0,   -71,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
       0,     0,     0,   -69,     0,   -71,     0,   -69,   -68,   -68,
     -68,   -71,   -71,   -71,   -71,     0,     0,     0,   -70,     0,
     -69,     0,   -70,   -71,   -71,   -71,   -69,   -69,   -69,   -69,
       0,     0,     0,   243,     0,   -70,     0,   244,   -69,   -69,
     -69,   -70,   -70,   -70,   -70,     0,     0,     0,   329,     0,
     246,     0,   330,   -70,   -70,   -70,   247,   248,   249,   250,
       0,     0,     0,     0,     0,   333,     0,     0,   251,   399,
     252,   334,   335,   336,   337,     0,     0,     0,     0,     0,
       0,     0,     0,   338,   458,   340,   466,   -96,     0,   -96,
     -96,   -96,   -96,   -96,   467,     0,   -96,   -96,     0,   288,
       0,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,
     -96,     0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,     0,     0,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   466,   -96,     0,   -96,   -96,   -96,
     -96,   -96,     0,     0,   -96,   -96,     0,     0,   -94,     0,
     -94,   -94,   -94,   -94,   -94,     0,   -96,   -94,   -94,     0,
       0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -94,
       0,     0,     0,     0,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -95,     0,   -95,   -95,   -95,   -95,   -95,     0,
       0,   -95,   -95,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,   -83,     0,   -95,   -83,   -83,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
       0,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,
       0,     0,   -98,     0,   -98,   -98,   -98,   -98,   -98,     0,
     -84,   -98,   -98,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -98,     0,     0,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -88,     0,   -88,   -88,
     474,   475,   -88,     0,     0,   -88,   -88,     0,     0,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,   -88,   -91,   -91,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -91,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -93,     0,   -93,   -93,   -93,   -93,   -93,
       0,     0,   -93,   -93,     0,     0,   -92,     0,   -92,   -92,
     -92,   -92,   -92,     0,   -93,   -92,   -92,     0,     0,     0,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -92,     0,     0,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -85,     0,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
     -85,     0,     0,   -97,     0,   -97,   -97,   -97,   -97,   -97,
       0,   -85,   -97,   -97,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -97,     0,     0,     0,     0,     0,
       0,   -97,   -97,   -97,   -97,   -97,   -97,   -86,     0,   -86,
     -86,   474,   475,   -86,     0,     0,   -86,   -86,     0,     0,
     -87,     0,   -87,   -87,   474,   475,   -87,     0,   -86,   -87,
     -87,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -89,     0,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -89,   -89,     0,     0,   -90,     0,   -90,
     -90,   -90,   -90,   -90,     0,   -89,   -90,   -90,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,
       0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -74,     0,   -74,   -74,   -74,   -74,   -74,     0,     0,
     -74,   -74,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,
     -75,     0,   -74,   -75,   -75,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,
     -76,   -76,   -76,   -76,   -76,     0,     0,   -76,   -76,     0,
       0,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,   -76,
     -77,   -77,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,     0,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -73,     0,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -73,   -73,     0,     0,   -94,     0,
     -94,   -94,   -94,   -94,     0,     0,   -73,   -94,   -94,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -94,
       0,     0,     0,     0,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -95,     0,   -95,   -95,   -95,   -95,     0,     0,
       0,   -95,   -95,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,     0,     0,   -95,   -83,   -83,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
       0,   -84,   -84,   -84,   -84,     0,     0,     0,   -84,   -84,
       0,     0,   -98,     0,   -98,   -98,   -98,   -98,     0,     0,
     -84,   -98,   -98,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -98,     0,     0,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -88,     0,   -88,   -88,
     133,   134,     0,     0,     0,   -88,   -88,     0,     0,   -91,
       0,   -91,   -91,   -91,   -91,     0,     0,   -88,   -91,   -91,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -91,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -93,     0,   -93,   -93,   -93,   -93,     0,
       0,     0,   -93,   -93,     0,     0,   -92,     0,   -92,   -92,
     -92,   -92,     0,     0,   -93,   -92,   -92,     0,     0,     0,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -92,     0,     0,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -85,     0,   -85,   -85,   -85,   -85,     0,     0,     0,   -85,
     -85,     0,     0,   -97,     0,   -97,   -97,   -97,   -97,     0,
       0,   -85,   -97,   -97,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -97,     0,     0,     0,     0,     0,
       0,   -97,   -97,   -97,   -97,   -97,   -97,   -86,     0,   -86,
     -86,   133,   134,     0,     0,     0,   -86,   -86,     0,     0,
     -87,     0,   -87,   -87,   133,   134,     0,     0,   -86,   -87,
     -87,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -89,     0,   -89,   -89,   -89,   -89,
       0,     0,     0,   -89,   -89,     0,     0,   -90,     0,   -90,
     -90,   -90,   -90,     0,     0,   -89,   -90,   -90,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,
       0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -73,     0,   -73,   -73,   -73,   -73,     0,     0,     0,
     -73,   -73,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,
       0,     0,   -73,   -74,   -74,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,
     -75,   -75,   -75,   -75,     0,     0,     0,   -75,   -75,     0,
       0,   -76,     0,   -76,   -76,   -76,   -76,     0,     0,   -75,
     -76,   -76,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,     0,     0,     0,   -77,   -77,     0,     0,   -65,     0,
     472,   473,     0,     0,   -65,     0,   -77,   -65,   -65,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -65,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -64,     0,     0,     0,     0,     0,   -64,     0,
       0,   -64,   -64,     0,     0,   -59,     0,     0,     0,     0,
       0,   -59,     0,   -64,   125,   126,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   127,     0,     0,     0,
       0,     0,     0,   -59,   -59,   128,   129,   -59,   -59,   -63,
       0,     0,     0,     0,     0,   -63,     0,     0,   -63,   -63,
       0,     0,   -64,     0,     0,     0,     0,     0,     0,     0,
     -63,   -64,   -64,     0,     0,   -59,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -64,   125,   126,     0,     0,   -63,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   127,   -63,   -63,     0,
       0,     0,     0,   -59,   -59,   128,   129,   -59,   -59,   -63,
       0,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,   -94,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,
     -95,     0,   -94,   -95,   -95,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -95,     0,     0,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -83,   -83,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -83,   -84,
     -84,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,     0,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,   -98,   -98,     0,     0,     0,   -88,   -88,   -88,
     411,   412,   -88,     0,   -98,   -88,   -88,     0,     0,     0,
       0,   -98,   -98,   -98,   -98,   -98,   -98,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,   -91,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -91,   -93,   -93,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -93,     0,     0,     0,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,   -92,   -92,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -92,   -85,   -85,     0,
       0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -85,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
     -97,   -97,     0,     0,     0,   -86,   -86,   -86,   411,   412,
     -86,     0,   -97,   -86,   -86,     0,     0,     0,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -86,     0,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   411,   412,   -87,     0,     0,   -87,   -87,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -87,   -89,
     -89,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -89,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,   -90,   -90,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -90,   -73,   -73,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -73,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -74,   -74,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -74,   -75,   -75,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,     0,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,   -76,   -76,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -76,   -77,   -77,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -65,   409,   410,     0,     0,   -65,   -66,     0,
     -65,   -65,     0,   -66,     0,     0,   -66,   -66,     0,     0,
       0,     0,   -65,     0,     0,     0,     0,     0,   -66,   -65,
     -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -60,     0,     0,     0,     0,   -60,   -64,     0,   125,
     126,     0,   -64,     0,     0,   -64,   -64,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,   -64,   -60,   -60,
     128,   129,   -60,   -60,   -64,   -64,   -64,   -64,   -64,   -64,
     -59,     0,     0,     0,     0,   -59,   -63,     0,   125,   126,
       0,   -63,     0,     0,   -63,   -63,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,   -63,   -59,   -59,   128,
     129,   -59,   -59,   -63,   -63,   -63,   -63,   -63,   -63
};

static const yytype_int16 yycheck[] =
{
       0,    21,   104,    55,     4,   356,   143,   255,   145,   119,
      26,   182,    44,    41,     8,     9,    47,   182,     6,   256,
       7,     6,   104,    41,    12,     7,     6,    12,    44,     6,
      12,    47,    12,    27,     6,    12,    21,    53,    54,     6,
      56,   143,    58,    15,    16,    12,    34,    35,    64,     6,
      38,    39,    68,    69,    70,    27,    38,   285,    38,    39,
     288,    47,    34,    35,    36,    37,    38,    39,     0,     6,
       1,    38,    47,     6,   119,    12,     5,    47,     6,    12,
     431,    38,    39,     3,    12,     6,    21,   119,   104,     7,
      21,    12,     0,     1,    12,    70,     3,   345,   114,   119,
      70,    38,    39,   119,   120,   121,     6,   139,   124,   346,
      38,    39,   143,    21,   130,   131,   132,   133,   134,   119,
      38,    39,   293,   139,   140,    47,   142,   143,   293,   145,
      41,     6,     5,     4,   120,   151,   119,    12,    38,   171,
      13,   369,     6,     5,   176,   120,   121,   179,    70,   124,
     120,   121,   380,   169,     5,   171,     5,   143,     5,     6,
     176,     6,     9,   179,   392,    12,     5,    12,   143,     6,
      17,   187,   188,   143,    38,    22,    23,    28,    29,    30,
      31,    28,    29,    30,    31,    41,     5,   203,   204,    40,
      41,    42,   420,    40,    41,    42,     7,     6,   120,   121,
       6,    38,    39,    12,     0,     1,    12,   223,     5,     7,
       5,     8,     9,    10,    11,     5,     5,     1,   355,     3,
       4,   143,     5,   451,    13,    21,     5,   243,   244,   245,
      27,     6,    38,    39,    18,    19,    20,    21,   466,     5,
      24,    25,    26,     5,    28,    29,    30,    31,    32,   265,
     266,     7,     8,     9,    47,     6,    12,    41,     6,    34,
      35,    12,     5,    38,    39,    41,     9,     6,     6,   285,
     286,   287,   288,    12,   305,   291,     6,    70,     6,    22,
       7,     5,    12,     7,   521,    28,    29,    30,    31,   305,
      38,    39,    41,   309,   310,     6,     6,    40,    41,    42,
      38,    39,     7,     6,     6,   291,     6,    12,    38,    39,
      38,    39,    12,   329,   330,   331,     7,     0,     1,   305,
       7,    12,     6,   245,   355,    12,     6,   120,   121,     6,
     305,   124,    12,    38,    39,   305,   573,   130,    21,   355,
     356,     7,     6,    34,    35,     7,    12,    38,    39,     6,
     143,    38,    39,   369,   370,   371,   331,   439,     7,    27,
      41,   331,     6,    12,   380,   381,   382,   383,   384,   355,
       6,     6,    38,    39,     6,     5,   392,    12,     6,     9,
     355,     7,     7,   305,   436,   355,    21,    12,     6,    13,
     406,   407,   408,   409,   410,   411,   412,     6,    28,    29,
      30,    31,     7,    12,   420,   421,   422,   423,   424,   331,
      40,    41,    42,    38,    39,   431,     6,     6,   434,   435,
       6,   437,    12,   439,     6,     6,    12,     0,     1,     7,
      12,    12,   407,   355,    12,   451,   452,   453,   454,   455,
     550,     0,     1,     0,     1,   477,   548,    26,    21,     7,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
       7,   477,    21,     7,    21,    44,   548,     6,    47,     8,
       9,     0,     1,    12,    53,    54,     7,    56,   615,    58,
       0,     1,   468,     7,   406,    64,     0,     1,    12,    68,
      69,    70,    21,   468,   469,   470,     0,     1,   468,   469,
       6,    21,     7,     6,   614,   550,    12,    21,   540,    12,
       6,     5,   305,   615,     6,     6,    12,    21,   550,     7,
      12,    12,     7,   633,   540,   104,   636,    12,   638,     7,
     550,     6,   548,   549,   550,   114,     5,    12,   331,     7,
     119,   120,   121,     6,    12,   124,   468,   469,   564,    12,
     550,   130,   131,   132,   133,   134,     8,     9,    10,    11,
     139,   140,   355,   142,   143,     6,   145,   550,     6,   614,
       5,    12,   151,     7,    12,    27,     8,     9,    10,    11,
       7,     7,   614,     5,   615,    12,    12,     5,   633,     5,
     169,   636,   171,   638,   614,    27,     5,   176,   614,   615,
     179,   633,     7,     7,   636,     7,   638,    12,   187,   188,
      12,     5,     7,   633,   614,   408,   636,   633,   638,     7,
     636,     7,   638,     5,   203,   204,    12,     9,     5,   615,
       5,   614,     6,   633,     8,     9,   636,     5,   638,     6,
     615,     8,     9,     5,   223,   615,    28,    29,    30,    31,
     633,     7,     5,   636,     6,   638,     8,     9,    40,    41,
      42,     7,     8,     9,   243,   244,   245,     6,    27,     8,
       9,     1,    27,     3,     4,   468,   469,   470,   471,     5,
       6,     5,     8,     9,    10,    11,   265,   266,    18,    19,
      20,    21,    27,   615,    24,    25,    26,     5,    28,    29,
      30,    31,    32,    33,     5,    27,   285,   286,   287,   288,
       5,    41,   291,     5,     5,     1,     5,     3,     4,     6,
       5,     8,     9,    10,    11,    12,   305,     5,     5,     5,
     309,   310,    18,    19,    20,    21,     5,     5,    24,    25,
      26,     5,    28,    29,    30,    31,    32,    33,    41,     5,
     329,   330,   331,     7,     6,    41,     8,     9,     5,     5,
       7,     5,     9,     5,     7,     5,     6,    14,     8,     9,
      10,    11,    12,     5,    21,    22,   355,   356,     5,     5,
      41,    28,    29,    30,    31,     5,    28,    29,    30,    31,
     369,   370,   371,    40,    41,    42,     5,     5,    40,    41,
      42,   380,   381,   382,   383,   384,     8,     9,    10,    11,
       5,     5,     4,   392,     5,     9,     7,     8,     9,    10,
      11,    12,   615,    41,     6,    27,    41,   406,   407,   408,
     409,   410,   411,   412,    28,    29,    30,    31,     6,     6,
      41,   420,   421,   422,   423,   424,    40,    41,    42,     6,
       6,     6,   431,     8,     9,   434,   435,    41,   437,     4,
     439,    41,     8,     9,    10,    11,    41,     8,     9,    10,
      11,    41,   451,   452,   453,   454,   455,     6,     6,     8,
       9,    27,     8,     9,    10,    11,    27,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,     6,   477,     8,
       9,    27,    41,     6,    41,    47,    53,    54,    13,    56,
       6,    53,    54,     1,    56,     3,    58,    64,     7,     6,
       6,    68,    64,     5,     7,     6,    68,    69,    70,     6,
      18,    19,    20,    21,     6,     6,    24,    25,    26,     6,
      28,    29,    30,    31,    32,     6,    28,    29,    30,    31,
       6,     6,     4,    41,     8,     9,    10,    11,    40,    41,
      42,   540,   104,     6,     6,     8,     9,   114,     6,   548,
     549,   550,   114,    27,     6,     6,     6,     6,   120,   121,
       6,     6,   124,     6,     6,   564,     6,     6,   130,   131,
     132,   133,   134,   140,     6,   142,     6,     6,   140,     6,
     142,   143,     6,   145,   151,     6,     6,     5,     6,   151,
       6,     9,     8,     9,    10,    11,    14,     6,     8,     9,
      10,    11,   169,    21,    22,     6,     6,   169,     6,     6,
      28,    29,    30,    31,     6,   614,   615,    27,     7,     7,
     187,     7,    40,    41,    42,   187,   188,     7,   440,     5,
     298,     7,    -1,     9,   633,    -1,   203,   636,    14,   638,
      -1,   203,   204,    -1,    -1,    21,    22,    -1,     8,     9,
      10,    11,    28,    29,    30,    31,   223,    -1,    -1,    -1,
      -1,   223,   224,    -1,    40,    41,    42,    27,     8,     9,
      10,    11,     8,     9,    10,    11,   243,    -1,    -1,    -1,
      -1,   243,   244,   245,     6,    53,    54,    27,    56,    -1,
      12,    27,    -1,    15,    16,    -1,    64,     6,   265,     8,
       9,    10,    11,   265,   266,    27,    -1,    -1,     8,     9,
      10,    11,    34,    35,    36,    37,    38,    39,   285,    -1,
      -1,   288,    -1,   285,   286,   287,   288,    27,     5,   291,
       7,    -1,     9,    -1,    -1,    -1,    -1,    14,     8,     9,
      10,    11,   309,   305,    21,    22,   114,   309,   310,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    27,     8,     9,
      10,    11,   329,    40,    41,    42,    -1,   329,   330,   331,
      -1,    -1,   140,    -1,   142,    -1,    -1,    27,    -1,    -1,
       5,    -1,     7,   151,     9,    60,    61,    62,    -1,    14,
      -1,    -1,    -1,   355,    -1,    -1,    21,    22,    -1,    -1,
      -1,   169,   369,    28,    29,    30,    31,   369,   370,   371,
      -1,    -1,    -1,   380,    -1,    40,    41,    42,   380,   381,
     382,   383,   384,    -1,     6,   392,     8,     9,    10,    11,
     392,    -1,     8,     9,    10,    11,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,   406,   407,   408,   409,   410,   411,
     412,    27,    -1,   420,    -1,    27,    -1,    -1,   420,   421,
     422,   423,   424,     8,     9,    10,    11,   434,   435,    -1,
     437,    -1,   434,   435,    -1,   437,    -1,   439,     8,     9,
      10,    11,    27,     6,   451,     8,     9,    10,    11,   451,
     452,   453,   454,   455,    -1,    -1,    -1,    27,    -1,   466,
     467,    -1,    -1,    -1,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,    -1,    -1,    -1,   285,    -1,    -1,
     288,    47,     8,     9,    10,    11,    -1,    53,    54,    -1,
      56,     1,    58,     3,     4,    -1,    -1,    -1,    64,    -1,
      -1,    27,    68,    69,    70,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     8,     9,    10,    11,    -1,    -1,
       5,    41,     7,     8,     9,    10,    11,    -1,   104,    -1,
      -1,    -1,   549,    27,    -1,    -1,   548,   549,   114,     7,
       8,     9,    10,    11,   120,   121,    -1,   564,   124,    -1,
      -1,   369,   564,    -1,   130,   131,   132,   133,   134,     1,
      -1,     3,   380,    -1,   140,    -1,   142,   143,    -1,   145,
      -1,     5,    -1,    -1,   392,   151,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    -1,   169,    28,    29,    30,    31,    -1,    41,
      -1,    -1,   420,   615,    -1,    -1,    40,    41,    42,    -1,
      -1,   187,   188,    -1,    -1,    -1,   434,   435,     6,   437,
       8,     9,    10,    11,    12,    -1,    -1,   203,   204,    -1,
      -1,    -1,    -1,   451,   359,   360,   361,     5,    -1,    -1,
      -1,   366,   367,   368,    -1,    -1,    -1,   223,   466,   467,
      -1,    -1,   377,   378,   379,     7,     8,     9,    10,    11,
      28,    29,    30,    31,   389,   390,   391,   243,   244,   245,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,   403,   404,
     405,    -1,     5,     6,    -1,    -1,     9,    -1,    -1,   265,
     266,    14,   417,   418,   419,    -1,    -1,    -1,    21,    22,
       7,     8,     9,    10,    11,    28,    29,    30,    31,   285,
     286,   287,   288,   438,    -1,   291,    -1,    40,    41,    42,
      -1,    -1,    -1,   448,   449,   450,    -1,    -1,    -1,   305,
      -1,   549,    -1,   309,   310,    -1,    -1,    -1,   463,   464,
     465,     1,    -1,     3,     4,     6,   564,     8,     9,    10,
      11,    12,    -1,   329,   330,   331,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,     5,     6,    -1,    -1,     9,   355,
      -1,    41,     6,    14,     8,     9,    10,    11,    12,    -1,
      21,    22,     6,   369,   370,   371,    -1,    28,    29,    30,
      31,    15,    16,    -1,   380,   381,   382,   383,   384,    40,
      41,    42,    -1,    27,     5,    -1,   392,    -1,     9,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,     5,
     406,   407,   408,   409,   410,   411,   412,    28,    29,    30,
      31,    -1,    -1,    -1,   420,   421,   422,   423,   424,    40,
      41,    42,    28,    29,    30,    31,    -1,    -1,   434,   435,
      -1,   437,    -1,   439,    40,    41,    42,     6,    -1,     8,
       9,    10,    11,    12,    -1,   451,   452,   453,   454,   455,
       7,     8,     9,    10,    11,    12,     5,    -1,    -1,    -1,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
       6,    -1,     8,     9,    10,    11,    12,    47,    -1,    28,
      29,    30,    31,    53,    54,    -1,    56,     1,    58,     3,
       4,    40,    41,    42,    64,    -1,    -1,    -1,    68,    -1,
      70,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       6,    -1,     8,     9,    10,    11,    12,    41,     7,     8,
       9,    10,    11,     6,   104,     8,     9,    10,    11,    12,
      -1,    -1,   548,   549,   114,     7,     8,     9,    10,    11,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,   564,    -1,
     130,   131,   132,   133,   134,     1,    -1,     3,     4,    -1,
     140,    -1,   142,   143,     6,   145,     8,     9,    10,    11,
      12,   151,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,     6,   169,
       8,     9,    10,    11,    12,    41,    -1,    -1,    -1,   615,
      -1,     1,    -1,     3,     4,    -1,    -1,   187,    -1,    -1,
      -1,     5,    -1,    -1,    -1,     9,    -1,    -1,    18,    19,
      20,    21,    -1,   203,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    28,    29,    30,    31,    -1,    -1,
      -1,    41,    -1,   223,    -1,    -1,    40,    41,    42,     1,
      -1,     3,     4,     6,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,   243,    -1,   245,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,   265,    -1,    -1,     5,    41,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
       7,     8,     9,    10,    11,   285,   286,   287,   288,    -1,
      27,   291,    -1,     1,    -1,     3,     4,    34,    35,    36,
      37,    38,    39,    -1,    -1,   305,    -1,    -1,    -1,   309,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,   329,
      -1,   331,    -1,    41,     1,    -1,     3,     4,     6,    -1,
       8,     9,    10,    11,    12,     7,     8,     9,    10,    11,
      12,    18,    19,    20,    21,   355,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    -1,    -1,   369,
     370,   371,    -1,     6,    41,     8,     9,    10,    11,    12,
     380,   381,   382,   383,   384,     7,     8,     9,    10,    11,
       5,    -1,   392,    -1,     9,   395,   396,     6,    -1,     8,
       9,    10,    11,    12,    -1,     5,   406,   407,   408,   409,
     410,   411,   412,    28,    29,    30,    31,    -1,    -1,    -1,
     420,   421,   422,   423,   424,    40,    41,    42,    28,    29,
      30,    31,    -1,    -1,   434,   435,    -1,   437,    -1,   439,
      40,    41,    42,     6,    -1,     8,     9,    10,    11,    12,
      -1,   451,   452,   453,   454,   455,     5,    -1,    -1,     6,
       9,     8,     9,    10,    11,    12,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,    -1,    47,    -1,    28,
      29,    30,    31,    53,    54,    -1,    56,     1,    58,     3,
       4,    40,    41,    42,    64,    -1,    -1,    -1,    68,    -1,
      70,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       6,    -1,     8,     9,    10,    11,    12,    41,     7,     8,
       9,    10,    11,     6,   104,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,   114,    -1,    47,    -1,   548,   549,
     120,   121,    53,    54,   124,    56,     6,    58,     8,     9,
     130,   131,   132,    64,   564,    15,    16,    68,    -1,    70,
     140,    -1,   142,   143,    -1,   145,    -1,    27,    -1,    -1,
      -1,   151,    -1,    -1,    34,    35,    36,    37,    38,    39,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,   169,
      -1,    -1,    -1,   104,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,    -1,   114,    -1,   615,    -1,   187,    -1,   120,
     121,    -1,    -1,   124,    18,    19,    20,    21,    -1,   130,
      24,    25,    26,   203,    28,    29,    30,    31,    32,   140,
      -1,   142,   143,    -1,   145,    -1,    -1,    41,    -1,    -1,
     151,    -1,     6,   223,     8,     9,    10,    11,    12,    -1,
       1,    -1,     3,     4,    -1,    -1,    -1,     6,   169,     8,
       9,    10,    11,   243,    -1,   245,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,   187,    28,    29,    30,
      31,    32,    33,    -1,     6,   265,     8,     9,    10,    11,
      41,     5,   203,    -1,    -1,     9,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,   285,   286,   287,   288,    -1,
      -1,   291,   223,    -1,    28,    29,    30,    31,     7,     8,
       9,    10,    11,    12,    -1,   305,    40,    41,    42,   309,
      -1,    -1,   243,    -1,   245,    -1,    -1,    -1,     1,    -1,
       3,     4,     7,     8,     9,    10,    11,    12,    -1,   329,
      -1,   331,    -1,    -1,   265,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,   285,   355,     6,   288,    41,    -1,
     291,    -1,    12,    -1,    -1,    15,    16,    -1,     6,   369,
       8,     9,    10,    11,   305,    -1,    -1,    27,   309,     5,
     380,   381,   382,     9,    34,    35,    36,    37,    38,    39,
      -1,    17,   392,   393,   394,    -1,    22,    23,   329,    -1,
     331,    -1,    28,    29,    30,    31,   406,   407,   408,   409,
     410,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,     5,
     420,   421,   422,     9,   355,    -1,    -1,     6,    14,     8,
       9,    10,    11,    -1,   434,   435,    22,   437,   369,   439,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,   380,
      -1,   451,   452,   453,    40,    41,    42,    -1,    -1,    -1,
       6,   392,     8,     9,    10,    11,   466,   467,   468,   469,
     470,   471,   472,   473,    -1,   406,   407,   408,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,     6,   420,
       8,     9,    10,    11,     1,    -1,     3,     4,     7,     8,
       9,    10,    11,   434,   435,    -1,   437,    -1,   439,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
     451,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,    -1,    -1,    -1,    41,   466,   467,   468,   469,   470,
     471,    -1,    -1,    -1,    18,    19,    20,    21,   548,   549,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,   564,    -1,    -1,    41,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     7,     8,     9,    10,    11,    12,    -1,
      41,     7,     8,     9,    10,    11,    12,     1,    -1,     3,
       4,    -1,    -1,    -1,    -1,   615,    -1,   548,   549,     7,
       8,     9,    10,    11,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,   564,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,    -1,    -1,    -1,    41,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,     1,    -1,     3,     4,    -1,    -1,    -1,
      41,    -1,    -1,     6,   615,     8,     9,    10,    11,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
      -1,    -1,    -1,    41,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    18,    19,    20,    21,
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
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,     6,
      41,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,     6,    41,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    41,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
       1,    -1,     3,     4,    -1,    -1,    -1,    -1,    41,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      41,     7,     8,     9,    10,    11,    -1,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    41,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    41,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,     5,     6,
      -1,    -1,     9,    -1,    -1,    -1,    41,    14,     7,     8,
       9,    10,    11,     5,    21,    22,    -1,     9,    -1,    -1,
      -1,    28,    29,    30,    31,    17,    -1,    -1,     5,    -1,
      22,    23,     9,    40,    41,    42,    28,    29,    30,    31,
      17,    -1,    -1,     5,    -1,    22,    23,     9,    40,    41,
      42,    28,    29,    30,    31,    17,    -1,    -1,     5,    -1,
      22,    23,     9,    40,    41,    42,    28,    29,    30,    31,
      17,    -1,    -1,     5,    -1,    22,    23,     9,    40,    41,
      42,    28,    29,    30,    31,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,    41,
      42,    14,     7,     8,     9,    10,    11,     5,    21,    22,
      -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    40,    41,    42,
      28,    29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,
       9,    -1,    40,    41,    42,    14,     7,     8,     9,    10,
      11,    -1,    21,    22,     7,     8,     9,    10,    11,    28,
      29,    30,    31,    -1,    -1,     5,    -1,    -1,    -1,     9,
      -1,    40,    41,    42,    14,     5,     6,    -1,     8,     9,
      10,    11,    22,    -1,    -1,    15,    16,    -1,    28,    29,
      30,    31,    -1,    -1,     5,    -1,    -1,    27,     9,    -1,
      40,    41,    42,    14,    34,    35,    36,    37,    38,    39,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    40,
      41,    42,    14,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    -1,    -1,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,     5,    -1,    22,    -1,     9,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,     5,    -1,
      22,    -1,     9,    40,    41,    42,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    40,    41,
      42,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    27,    15,
      16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,     5,     6,    -1,     8,     9,    10,
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
       8,     9,    -1,    -1,    12,    -1,    27,    15,    16,    -1,
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
      38,    39,     7,     8,     9,    -1,    -1,    12,     7,    -1,
      15,    16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,
      35,    36,    37,    38,    39,    34,    35,    36,    37,    38,
      39,     7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,
      16,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,
      36,    37,    38,    39,    34,    35,    36,    37,    38,    39,
       7,    -1,    -1,    -1,    -1,    12,     7,    -1,    15,    16,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    27,    34,    35,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39
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
      76,    79,    80,    83,    84,    85,    86,    87,     7,     7,
      41,    17,    22,    23,    81,    82,    84,    81,    81,    78,
      81,     7,    21,    41,    67,    68,    69,    70,    41,    78,
      78,    78,    56,    81,    63,    82,    84,    87,    72,     6,
      38,    39,    34,    35,    74,    15,    16,    27,    36,    37,
      77,     8,     9,    10,    11,     6,     6,     6,     7,     6,
      27,    41,    13,    67,     7,    12,     6,     6,     6,     6,
       6,    12,    81,     6,     6,    61,    71,    72,    75,    76,
      85,    85,    86,    86,     7,     7,     7,    61,    81,    13,
      81,     6,    68,    69,    81,     7,    33,    81,    61,     6,
      61,    61,     3,    28,    29,    30,    31,     5,     9,    28,
      29,    30,    31,    40,    41,    42,    79,    80,    83,    85,
      86,    87,    54,     5,     9,    17,    22,    23,    28,    29,
      30,    31,    40,    41,    42,    79,    80,    82,    83,    84,
      85,    86,    87,     5,     9,    17,    22,    23,    28,    29,
      30,    31,    40,    41,    42,    79,    80,    82,    83,    84,
      85,    86,    87,     5,     9,    14,    22,    28,    29,    30,
      31,    40,    42,    71,    72,    73,    75,    76,    79,    80,
      83,    84,    85,    86,    87,     5,     9,    17,    22,    23,
      28,    29,    30,    31,    40,    41,    42,    79,    80,    82,
      83,    84,    85,    86,    87,     5,     8,     9,     5,     7,
      68,    38,     1,     3,    18,    19,    20,    21,    24,    25,
      26,    41,    53,    57,    62,    65,    66,    79,    80,     5,
       9,    17,    22,    23,    28,    29,    30,    31,    40,    41,
      42,    79,    80,    82,    83,    84,    85,    86,    87,     5,
       9,    14,    21,    22,    28,    29,    30,    31,    40,    41,
      42,    69,    70,    71,    72,    73,    75,    76,    79,    80,
      83,    84,    85,    86,    87,    12,    58,    59,     5,     5,
       5,     5,    82,    84,    87,     5,     5,     5,     5,     5,
      10,    11,     7,    82,    84,    87,     5,     5,     5,     5,
       5,     8,     9,    10,    11,    82,    84,    87,     5,     5,
       5,     5,     5,     8,     9,    10,    11,    82,    84,    41,
      87,    72,     5,     5,     5,     5,    39,    74,    77,     8,
       9,    10,    11,    82,    84,    87,     5,     5,     5,     5,
       5,     8,     9,    10,    11,    56,    85,    85,    56,     7,
      71,    58,    59,     5,     5,     5,    41,    64,     5,     5,
      13,    70,     7,     7,    82,    84,    87,     5,     5,     5,
       5,     5,     8,     9,    10,    11,    82,    84,    41,    87,
      72,    41,     5,     5,     5,     5,     5,    13,    38,    39,
      74,    77,     8,     9,    10,    11,    69,    60,     4,    41,
      78,    78,    78,     6,     6,    41,    78,    78,    78,    56,
      86,    86,     6,     6,    41,    78,    78,    78,    56,    85,
      85,    86,    86,     6,     6,    41,    78,    78,    78,    56,
      85,    85,    86,    86,     6,     6,    41,    78,    78,    78,
      72,    75,    76,    85,    85,    86,    86,     6,     6,    41,
      78,    78,    78,    56,    85,    85,    86,    86,     6,     6,
      60,     4,    41,    81,    81,    54,    81,    78,    67,    63,
       6,     6,     6,    41,    78,    78,    78,    56,    85,    85,
      86,    86,     6,     6,    13,    41,    78,    78,    78,    56,
      81,    71,    72,    75,    76,    85,    85,    86,    86,     4,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     4,     6,
       6,     6,     7,     7,     6,    67,    81,    61,     6,     6,
       6,     6,     6,    81,     6,     6,     6,     6,     6,     7,
       7,     7,    61,     6,    68,     7,    33,    61,     6,    61,
      61
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
      85,    85,    86,    86,    87,    87,    87,    87,    87
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
       3,     1,     2,     1,     1,     1,     1,     3,     1
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
#line 2826 "parser/parser.c"
    break;

  case 3: /* stmts: stmts stmt  */
#line 56 "parser/c7.y"
                     { 
            if(PARSER_VERBOSE) printf("[BISON] stmts -> stmts stmt\n");
        }
#line 2834 "parser/parser.c"
    break;

  case 4: /* stmts: stmt  */
#line 59 "parser/c7.y"
               { if(PARSER_VERBOSE) printf("[BISON] stmts -> stmt\n"); }
#line 2840 "parser/parser.c"
    break;

  case 5: /* stmt: func_stmt  */
#line 62 "parser/c7.y"
                       { add_ast((yyvsp[0].expression)); }
#line 2846 "parser/parser.c"
    break;

  case 6: /* stmt: var_decl_stmt  */
#line 63 "parser/c7.y"
                           {
            if(PARSER_VERBOSE) printf("[BISON] stmt -> var_decl_stmt\n");
            add_ast((yyvsp[0].expression));
        }
#line 2855 "parser/parser.c"
    break;

  case 7: /* stmt: error  */
#line 67 "parser/c7.y"
                { 
            if(PARSER_VERBOSE) printf("[BISON] stmt -> error\n");
            yyerrok;
        }
#line 2864 "parser/parser.c"
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
#line 2876 "parser/parser.c"
    break;

  case 9: /* $@2: %empty  */
#line 79 "parser/c7.y"
                          {
                push_scope((yyvsp[-2].int_value));
            }
#line 2884 "parser/parser.c"
    break;

  case 10: /* $@3: %empty  */
#line 81 "parser/c7.y"
                                         {
                set_arity((yyvsp[-5].int_value), arity_counter);
                arity_counter = 0;
            }
#line 2893 "parser/parser.c"
    break;

  case 11: /* func_stmt: TYPE ID $@1 PARENT_LEFT $@2 param_list PARENT_RIGHT $@3 compound_block_stmt  */
#line 84 "parser/c7.y"
                                     {
                pop_scope();
                (yyval.expression) = create_func_expr(create_str_expr((yyvsp[-8].str_value)), create_var_expr((yyvsp[-7].int_value)), (yyvsp[-3].expression), (yyvsp[0].expression));
                free((yyvsp[-8].str_value));
            }
#line 2903 "parser/parser.c"
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
#line 2915 "parser/parser.c"
    break;

  case 13: /* var_decl_stmt: TYPE ID $@4 SEMICOLON  */
#line 97 "parser/c7.y"
                            {
                    if(PARSER_VERBOSE) printf("[BISON] var_decl_stmt -> semicolon\n");
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-2].int_value)), BINARY_TYPE);
                    free((yyvsp[-3].str_value));
                }
#line 2925 "parser/parser.c"
    break;

  case 14: /* param_list: param_list COMMA TYPE ID  */
#line 104 "parser/c7.y"
                                                {
                set_id_type((yyvsp[0].int_value), ST_ID_PARAM);
                set_data_type((yyvsp[0].int_value), type2dt((yyvsp[-1].str_value)));
                insert_result = insert_symbol((yyvsp[0].int_value));
                if (!insert_result) set_existance_tag((yyvsp[0].int_value), ET_SOFT_DELETE);
                arity_counter += 1;
                (yyval.expression) = create_ter_expr((yyvsp[-3].expression), create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)), TERNARY_TYPE);
                free((yyvsp[-1].str_value));
            }
#line 2939 "parser/parser.c"
    break;

  case 15: /* param_list: TYPE ID  */
#line 113 "parser/c7.y"
                            {
                set_id_type((yyvsp[0].int_value), ST_ID_PARAM);
                set_data_type((yyvsp[0].int_value), type2dt((yyvsp[-1].str_value)));
                insert_result = insert_symbol((yyvsp[0].int_value));
                if (!insert_result) set_existance_tag((yyvsp[0].int_value), ET_SOFT_DELETE);
                arity_counter += 1;
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-1].str_value)), create_var_expr((yyvsp[0].int_value)), BINARY_TYPE);
                free((yyvsp[-1].str_value));
            }
#line 2953 "parser/parser.c"
    break;

  case 16: /* param_list: %empty  */
#line 122 "parser/c7.y"
                          {
                (yyval.expression) = create_empty_expr();
            }
#line 2961 "parser/parser.c"
    break;

  case 17: /* simple_param_list: simple_param_list COMMA simple_expr  */
#line 127 "parser/c7.y"
                                                                {
                        arity_counter += 1;
                        (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression), BINARY_TYPE);
                    }
#line 2970 "parser/parser.c"
    break;

  case 18: /* simple_param_list: simple_expr  */
#line 131 "parser/c7.y"
                                     {
                        arity_counter += 1;
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 2979 "parser/parser.c"
    break;

  case 19: /* simple_param_list: %empty  */
#line 135 "parser/c7.y"
                                  { (yyval.expression) = create_empty_expr(); }
#line 2985 "parser/parser.c"
    break;

  case 20: /* $@5: %empty  */
#line 138 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 2993 "parser/parser.c"
    break;

  case 21: /* compound_block_stmt: BRACK_LEFT $@5 block_stmts BRACK_RIGHT  */
#line 140 "parser/c7.y"
                                                 {
                        (yyval.expression) = (yyvsp[-1].expression);
                        pop_scope();
                    }
#line 3002 "parser/parser.c"
    break;

  case 22: /* $@6: %empty  */
#line 144 "parser/c7.y"
                                 {
                        push_scope_block();
                    }
#line 3010 "parser/parser.c"
    break;

  case 23: /* compound_block_stmt: BRACK_LEFT $@6 BRACK_RIGHT  */
#line 146 "parser/c7.y"
                                   {
                        (yyval.expression) = create_empty_expr();
                        pop_scope();
                    }
#line 3019 "parser/parser.c"
    break;

  case 24: /* block_stmts: block_stmts block_item  */
#line 152 "parser/c7.y"
                                           {
                (yyval.expression) = create_bin_expr((yyvsp[-1].expression), (yyvsp[0].expression), BINARY_TYPE);
                global_var_data_type = DT_UNDEFINED;
            }
#line 3028 "parser/parser.c"
    break;

  case 25: /* block_stmts: block_item  */
#line 156 "parser/c7.y"
                            {
                (yyval.expression) = (yyvsp[0].expression);
                global_var_data_type = DT_UNDEFINED;
            }
#line 3037 "parser/parser.c"
    break;

  case 26: /* block_item: var_decl_stmt  */
#line 162 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3043 "parser/parser.c"
    break;

  case 27: /* block_item: block_stmt  */
#line 163 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3049 "parser/parser.c"
    break;

  case 28: /* block_stmt: compound_block_stmt  */
#line 166 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3055 "parser/parser.c"
    break;

  case 29: /* block_stmt: func_call SEMICOLON  */
#line 167 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 3061 "parser/parser.c"
    break;

  case 30: /* block_stmt: set_func_call SEMICOLON  */
#line 168 "parser/c7.y"
                                         { (yyval.expression) = (yyvsp[-1].expression); }
#line 3067 "parser/parser.c"
    break;

  case 31: /* block_stmt: flow_control  */
#line 169 "parser/c7.y"
                              { (yyval.expression) = (yyvsp[0].expression); }
#line 3073 "parser/parser.c"
    break;

  case 32: /* block_stmt: READ PARENT_LEFT ID PARENT_RIGHT SEMICOLON  */
#line 170 "parser/c7.y"
                                                               {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), create_var_expr((yyvsp[-2].int_value)), BINARY_TYPE); 
                set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                check_declared((yyvsp[-2].int_value));
                free((yyvsp[-4].str_value));
            }
#line 3084 "parser/parser.c"
    break;

  case 33: /* block_stmt: WRITE PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 176 "parser/c7.y"
                                                                         {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), WRITE_TYPE); 
                free((yyvsp[-4].str_value));
            }
#line 3093 "parser/parser.c"
    break;

  case 34: /* block_stmt: WRITELN PARENT_LEFT simple_expr PARENT_RIGHT SEMICOLON  */
#line 180 "parser/c7.y"
                                                                           {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), WRITELN_TYPE); 
                free((yyvsp[-4].str_value));
            }
#line 3102 "parser/parser.c"
    break;

  case 35: /* $@7: %empty  */
#line 184 "parser/c7.y"
                              {
                set_id_type((yyvsp[-1].int_value), ST_ID_VAR); 
                check_declared((yyvsp[-1].int_value));
                global_var_data_type = get_var_type((yyvsp[-1].int_value));
            }
#line 3112 "parser/parser.c"
    break;

  case 36: /* block_stmt: ID ASSIGN $@7 simple_expr SEMICOLON  */
#line 188 "parser/c7.y"
                                       {
                (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-4].int_value)), create_char_expr((yyvsp[-3].char_value)),
                                     (yyvsp[-1].expression), ASSIGN_TYPE);
            }
#line 3121 "parser/parser.c"
    break;

  case 37: /* $@8: %empty  */
#line 192 "parser/c7.y"
                        {
                global_var_data_type = global_func_data_type;
            }
#line 3129 "parser/parser.c"
    break;

  case 38: /* block_stmt: RETURN $@8 simple_expr SEMICOLON  */
#line 194 "parser/c7.y"
                                       {
                (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE); 
                free((yyvsp[-3].str_value));
            }
#line 3138 "parser/parser.c"
    break;

  case 39: /* block_stmt: error  */
#line 198 "parser/c7.y"
                    { 
                (yyval.expression) = create_empty_expr();
                yyerrok;
            }
#line 3147 "parser/parser.c"
    break;

  case 40: /* flow_control_if: IF PARENT_LEFT  */
#line 204 "parser/c7.y"
                                    {
                    global_var_data_type = DT_FLOAT_IF;
                    (yyval.expression) = create_str_expr((yyvsp[-1].str_value));
                    free((yyvsp[-1].str_value));
                }
#line 3157 "parser/parser.c"
    break;

  case 41: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item  */
#line 211 "parser/c7.y"
                                                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression), TERNARY_TYPE); 
                }
#line 3165 "parser/parser.c"
    break;

  case 42: /* flow_control: flow_control_if or_cond_expr PARENT_RIGHT block_item ELSE block_item  */
#line 214 "parser/c7.y"
                                                                                                            {
                    (yyval.expression) = create_qui_expr((yyvsp[-5].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression));
                    free((yyvsp[-1].str_value));
                }
#line 3174 "parser/parser.c"
    break;

  case 43: /* flow_control: FORALL PARENT_LEFT set_expr PARENT_RIGHT block_item  */
#line 218 "parser/c7.y"
                                                                                 {
                    (yyval.expression) = create_ter_expr(create_str_expr((yyvsp[-4].str_value)), (yyvsp[-2].expression), (yyvsp[0].expression), TERNARY_TYPE); 
                    free((yyvsp[-4].str_value));
                }
#line 3183 "parser/parser.c"
    break;

  case 44: /* flow_control: FOR PARENT_LEFT opt_param opt_param PARENT_RIGHT block_item  */
#line 222 "parser/c7.y"
                                                                                             {
                    (yyval.expression) = create_qua_expr(create_str_expr((yyvsp[-5].str_value)), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-5].str_value));
                }
#line 3192 "parser/parser.c"
    break;

  case 45: /* flow_control: FOR PARENT_LEFT opt_param opt_param for_expression PARENT_RIGHT block_item  */
#line 226 "parser/c7.y"
                                                                                                                {
                    (yyval.expression) = create_qui_expr(create_str_expr((yyvsp[-6].str_value)), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-2].expression), (yyvsp[0].expression)); 
                    free((yyvsp[-6].str_value));
                }
#line 3201 "parser/parser.c"
    break;

  case 46: /* opt_param: SEMICOLON  */
#line 232 "parser/c7.y"
                        { (yyval.expression) = create_empty_expr(); }
#line 3207 "parser/parser.c"
    break;

  case 47: /* opt_param: for_expression SEMICOLON  */
#line 233 "parser/c7.y"
                                          { (yyval.expression) = (yyvsp[-1].expression); }
#line 3213 "parser/parser.c"
    break;

  case 48: /* for_expression: decl_or_cond_expr  */
#line 236 "parser/c7.y"
                                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3219 "parser/parser.c"
    break;

  case 49: /* for_expression: for_expression COMMA decl_or_cond_expr  */
#line 237 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr((yyvsp[-2].expression), (yyvsp[0].expression), BINARY_TYPE); 
                }
#line 3227 "parser/parser.c"
    break;

  case 50: /* decl_or_cond_expr: or_cond_expr  */
#line 242 "parser/c7.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3233 "parser/parser.c"
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
#line 3245 "parser/parser.c"
    break;

  case 52: /* decl_or_cond_expr: ID ASSIGN simple_expr  */
#line 250 "parser/c7.y"
                                                     {
                        (yyval.expression) = create_ter_expr(create_var_expr((yyvsp[-2].int_value)), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
                        set_id_type((yyvsp[-2].int_value), ST_ID_VAR);
                        check_declared((yyvsp[-2].int_value));
                    }
#line 3255 "parser/parser.c"
    break;

  case 53: /* or_cond_expr: or_cond_expr OR_OP and_cond_expr  */
#line 257 "parser/c7.y"
                                                               {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression), TERNARY_TYPE); 
                    free((yyvsp[-1].str_value));
                }
#line 3264 "parser/parser.c"
    break;

  case 54: /* or_cond_expr: and_cond_expr  */
#line 261 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3270 "parser/parser.c"
    break;

  case 55: /* and_cond_expr: and_cond_expr AND_OP unary_cond_expr  */
#line 264 "parser/c7.y"
                                                                   {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression), TERNARY_TYPE); 
                    free((yyvsp[-1].str_value));
                }
#line 3279 "parser/parser.c"
    break;

  case 56: /* and_cond_expr: unary_cond_expr  */
#line 268 "parser/c7.y"
                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 3285 "parser/parser.c"
    break;

  case 57: /* unary_cond_expr: NOT_OP unary_cond_expr  */
#line 271 "parser/c7.y"
                                               {
                    (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), BINARY_TYPE); 
                }
#line 3293 "parser/parser.c"
    break;

  case 58: /* unary_cond_expr: eq_cond_expr  */
#line 274 "parser/c7.y"
                                  { (yyval.expression) = (yyvsp[0].expression); }
#line 3299 "parser/parser.c"
    break;

  case 59: /* eq_cond_expr: eq_cond_expr equal_ops rel_cond_expr  */
#line 277 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression), TERNARY_TYPE);
                }
#line 3307 "parser/parser.c"
    break;

  case 60: /* eq_cond_expr: rel_cond_expr  */
#line 280 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3313 "parser/parser.c"
    break;

  case 61: /* equal_ops: EQ_OP  */
#line 283 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3322 "parser/parser.c"
    break;

  case 62: /* equal_ops: NE_OP  */
#line 287 "parser/c7.y"
                       {
                (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                free((yyvsp[0].str_value));
            }
#line 3331 "parser/parser.c"
    break;

  case 63: /* rel_cond_expr: rel_cond_expr rel_ops rel_cond_stmt  */
#line 293 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_ter_expr((yyvsp[-2].expression), (yyvsp[-1].expression), (yyvsp[0].expression), TERNARY_TYPE);
                }
#line 3339 "parser/parser.c"
    break;

  case 64: /* rel_cond_expr: rel_cond_stmt  */
#line 296 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3345 "parser/parser.c"
    break;

  case 65: /* rel_cond_stmt: arith_expr  */
#line 299 "parser/c7.y"
                                { (yyval.expression) = (yyvsp[0].expression); }
#line 3351 "parser/parser.c"
    break;

  case 66: /* rel_cond_stmt: EMPTY  */
#line 300 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3360 "parser/parser.c"
    break;

  case 67: /* rel_ops: L_OP  */
#line 306 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3366 "parser/parser.c"
    break;

  case 68: /* rel_ops: G_OP  */
#line 307 "parser/c7.y"
                  { (yyval.expression) = create_char_expr((yyvsp[0].char_value)); }
#line 3372 "parser/parser.c"
    break;

  case 69: /* rel_ops: LE_OP  */
#line 308 "parser/c7.y"
                   {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3381 "parser/parser.c"
    break;

  case 70: /* rel_ops: GE_OP  */
#line 312 "parser/c7.y"
                   { 
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3390 "parser/parser.c"
    break;

  case 71: /* rel_ops: IN  */
#line 316 "parser/c7.y"
                {
            (yyval.expression) = create_str_expr((yyvsp[0].str_value));
            free((yyvsp[0].str_value));
        }
#line 3399 "parser/parser.c"
    break;

  case 72: /* set_expr: simple_expr IN simple_expr  */
#line 322 "parser/c7.y"
                                                    {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_str_expr((yyvsp[-1].str_value)), (yyvsp[0].expression), TERNARY_TYPE); 
                free((yyvsp[-1].str_value));
            }
#line 3408 "parser/parser.c"
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
#line 3421 "parser/parser.c"
    break;

  case 74: /* set_func_call: IS_SET PARENT_LEFT ID PARENT_RIGHT  */
#line 338 "parser/c7.y"
                                                           {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), create_var_expr((yyvsp[-1].int_value)), BINARY_TYPE); 
                    set_id_type((yyvsp[-1].int_value), ST_ID_VAR);
                    free((yyvsp[-3].str_value));
                }
#line 3431 "parser/parser.c"
    break;

  case 75: /* set_func_call: ADD_SET PARENT_LEFT set_expr PARENT_RIGHT  */
#line 343 "parser/c7.y"
                                                                  {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE); 
                    free((yyvsp[-3].str_value));
                }
#line 3440 "parser/parser.c"
    break;

  case 76: /* set_func_call: REMOVE PARENT_LEFT set_expr PARENT_RIGHT  */
#line 347 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE); 
                    free((yyvsp[-3].str_value));
                }
#line 3449 "parser/parser.c"
    break;

  case 77: /* set_func_call: EXISTS PARENT_LEFT set_expr PARENT_RIGHT  */
#line 351 "parser/c7.y"
                                                                 {
                    (yyval.expression) = create_bin_expr(create_str_expr((yyvsp[-3].str_value)), (yyvsp[-1].expression), BINARY_TYPE);
                    free((yyvsp[-3].str_value)); 
                }
#line 3458 "parser/parser.c"
    break;

  case 78: /* simple_expr: arith_expr  */
#line 357 "parser/c7.y"
                            { (yyval.expression) = (yyvsp[0].expression); }
#line 3464 "parser/parser.c"
    break;

  case 79: /* simple_expr: func_cte_expr  */
#line 358 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3470 "parser/parser.c"
    break;

  case 80: /* func_cte_expr: EMPTY  */
#line 361 "parser/c7.y"
                           {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3479 "parser/parser.c"
    break;

  case 81: /* func_cte_expr: STRING  */
#line 365 "parser/c7.y"
                            {
                    (yyval.expression) = create_str_expr((yyvsp[0].str_value));
                    free((yyvsp[0].str_value));
                }
#line 3488 "parser/parser.c"
    break;

  case 82: /* func_cte_expr: CHAR  */
#line 369 "parser/c7.y"
                          {
                    (yyval.expression) = create_char_expr((yyvsp[0].char_value));
                }
#line 3496 "parser/parser.c"
    break;

  case 83: /* func_expr: func_call  */
#line 374 "parser/c7.y"
                               { (yyval.expression) = (yyvsp[0].expression); }
#line 3502 "parser/parser.c"
    break;

  case 84: /* func_expr: set_func_call  */
#line 375 "parser/c7.y"
                                   { (yyval.expression) = (yyvsp[0].expression); }
#line 3508 "parser/parser.c"
    break;

  case 85: /* func_expr: PARENT_LEFT func_cte_expr PARENT_RIGHT  */
#line 376 "parser/c7.y"
                                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 3514 "parser/parser.c"
    break;

  case 86: /* arith_expr: arith_expr ADD term  */
#line 379 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), ADD_TYPE);
            }
#line 3522 "parser/parser.c"
    break;

  case 87: /* arith_expr: arith_expr SUB term  */
#line 382 "parser/c7.y"
                                           {
                (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
            }
#line 3530 "parser/parser.c"
    break;

  case 88: /* arith_expr: term  */
#line 385 "parser/c7.y"
                      { (yyval.expression) = (yyvsp[0].expression); }
#line 3536 "parser/parser.c"
    break;

  case 89: /* term: term MULT mid_factor  */
#line 388 "parser/c7.y"
                                        {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
        }
#line 3544 "parser/parser.c"
    break;

  case 90: /* term: term DIV mid_factor  */
#line 391 "parser/c7.y"
                                       {
            (yyval.expression) = create_ter_expr((yyvsp[-2].expression), create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), TERNARY_TYPE);
        }
#line 3552 "parser/parser.c"
    break;

  case 91: /* term: mid_factor  */
#line 394 "parser/c7.y"
                        { (yyval.expression) = (yyvsp[0].expression); }
#line 3558 "parser/parser.c"
    break;

  case 92: /* mid_factor: SUB factor  */
#line 397 "parser/c7.y"
                                            { 
                (yyval.expression) = create_bin_expr(create_char_expr((yyvsp[-1].char_value)), (yyvsp[0].expression), BINARY_TYPE); 
            }
#line 3566 "parser/parser.c"
    break;

  case 93: /* mid_factor: factor  */
#line 400 "parser/c7.y"
                        { (yyval.expression) = (yyvsp[0].expression); }
#line 3572 "parser/parser.c"
    break;

  case 94: /* factor: INTEGER  */
#line 403 "parser/c7.y"
                     {
            if (global_var_data_type == DT_FLOAT || global_var_data_type == DT_FLOAT_IF)
                (yyval.expression) = create_type_cast_expr("int2float", create_int_expr((yyvsp[0].int_value)));
            else (yyval.expression) = create_int_expr((yyvsp[0].int_value));
        }
#line 3582 "parser/parser.c"
    break;

  case 95: /* factor: FLOAT  */
#line 408 "parser/c7.y"
                   {
            if (global_var_data_type == DT_INT)
                (yyval.expression) = create_type_cast_expr("float2int", create_float_expr((yyvsp[0].float_value)));
            else (yyval.expression) = create_float_expr((yyvsp[0].float_value));
        }
#line 3592 "parser/parser.c"
    break;

  case 96: /* factor: ID  */
#line 413 "parser/c7.y"
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
#line 3611 "parser/parser.c"
    break;

  case 97: /* factor: PARENT_LEFT arith_expr PARENT_RIGHT  */
#line 427 "parser/c7.y"
                                                 { (yyval.expression) = (yyvsp[-1].expression); }
#line 3617 "parser/parser.c"
    break;

  case 98: /* factor: func_expr  */
#line 428 "parser/c7.y"
                       { (yyval.expression) = (yyvsp[0].expression); }
#line 3623 "parser/parser.c"
    break;


#line 3627 "parser/parser.c"

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

#line 431 "parser/c7.y"


void yyerror(const char *s) {
    printf("\nSyntaxError:%d:%d: %s.\n", parser_line, parser_column, s);
    parser_error += 1;
}
