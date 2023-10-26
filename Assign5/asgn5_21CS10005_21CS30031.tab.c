/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asgn5_21CS10005_21CS30031.y"

    #include <iostream>
    #include "asgn5_21CS10005_21CS30031_translator.h"
    using namespace std;
    extern int yylex(); // in lex.yy.c : Lexical analyser
    extern int yylineno; // in lex.yy.c : Line number
    extern char *yytext;    // in lex.yy.c : Identified lexeme
    void yyerror(string s);  // in lex.yy.c : Error function
    extern string data_type; // in asgn5_21CS10005_21CS30031_translator.cxx : Stores the data type of the current variable

#line 82 "asgn5_21CS10005_21CS30031.tab.c"

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

#include "asgn5_21CS10005_21CS30031.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_ENUM = 4,                       /* ENUM  */
  YYSYMBOL_RESTRICT = 5,                   /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 6,                   /* UNSIGNED  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_EXTERN = 8,                     /* EXTERN  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_SHORT = 13,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 14,                  /* VOLATILE  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_SIGNED = 17,                    /* SIGNED  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_CONST = 19,                     /* CONST  */
  YYSYMBOL_GOTO = 20,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 21,                    /* SIZEOF  */
  YYSYMBOL_BOOL = 22,                      /* BOOL  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_STATIC = 25,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 26,                   /* COMPLEX  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 28,                    /* INLINE  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_IMAGINARY = 30,                 /* IMAGINARY  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 34,                    /* DOUBLE  */
  YYSYMBOL_LONG = 35,                      /* LONG  */
  YYSYMBOL_TYPEDEF = 36,                   /* TYPEDEF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_REGISTER = 38,                  /* REGISTER  */
  YYSYMBOL_UNION = 39,                     /* UNION  */
  YYSYMBOL_INVALID_TOKEN = 40,             /* INVALID_TOKEN  */
  YYSYMBOL_PARANTHESIS_OPEN = 41,          /* PARANTHESIS_OPEN  */
  YYSYMBOL_PARANTHESIS_CLOSE = 42,         /* PARANTHESIS_CLOSE  */
  YYSYMBOL_SQ_BRACKET_OPEN = 43,           /* SQ_BRACKET_OPEN  */
  YYSYMBOL_SQ_BRACKET_CLOSE = 44,          /* SQ_BRACKET_CLOSE  */
  YYSYMBOL_CURLY_BRACKET_OPEN = 45,        /* CURLY_BRACKET_OPEN  */
  YYSYMBOL_CURLY_BRACKET_CLOSE = 46,       /* CURLY_BRACKET_CLOSE  */
  YYSYMBOL_PERIOD = 47,                    /* PERIOD  */
  YYSYMBOL_ARROW = 48,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 49,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 50,                 /* DECREMENT  */
  YYSYMBOL_AMPERSAND = 51,                 /* AMPERSAND  */
  YYSYMBOL_ASTERISK = 52,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 53,                      /* PLUS  */
  YYSYMBOL_MINUS = 54,                     /* MINUS  */
  YYSYMBOL_TILDE = 55,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 56,               /* EXCLAMATION  */
  YYSYMBOL_SLASH = 57,                     /* SLASH  */
  YYSYMBOL_PERCENT = 58,                   /* PERCENT  */
  YYSYMBOL_LEFT_SHIFT = 59,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 60,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 61,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 62,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 63,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 64,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 65,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 66,                 /* NOT_EQUAL  */
  YYSYMBOL_CARET = 67,                     /* CARET  */
  YYSYMBOL_PIPE = 68,                      /* PIPE  */
  YYSYMBOL_LOGICAL_AND = 69,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 70,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION = 71,                  /* QUESTION  */
  YYSYMBOL_COLON = 72,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 73,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 74,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN = 75,                    /* ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 76,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVIDE_ASSIGN = 77,             /* DIVIDE_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 78,                /* MOD_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 79,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 80,              /* MINUS_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 81,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 82,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 83,                /* AND_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 84,                /* ADD_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 85,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 86,                 /* OR_ASSIGN  */
  YYSYMBOL_COMMA = 87,                     /* COMMA  */
  YYSYMBOL_HASH = 88,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 89,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT_INT = 90,              /* CONSTANT_INT  */
  YYSYMBOL_CONSTANT_FLOAT = 91,            /* CONSTANT_FLOAT  */
  YYSYMBOL_CONSTANT_CHAR = 92,             /* CONSTANT_CHAR  */
  YYSYMBOL_LITERAL = 93,                   /* LITERAL  */
  YYSYMBOL_THEN = 94,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 95,                  /* $accept  */
  YYSYMBOL_primary_expression = 96,        /* primary_expression  */
  YYSYMBOL_constant = 97,                  /* constant  */
  YYSYMBOL_postfix_expression = 98,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 99, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 100, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 101,         /* unary_expression  */
  YYSYMBOL_unary_operator = 102,           /* unary_operator  */
  YYSYMBOL_cast_expression = 103,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 104, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 105,      /* additive_expression  */
  YYSYMBOL_shift_expression = 106,         /* shift_expression  */
  YYSYMBOL_relational_expression = 107,    /* relational_expression  */
  YYSYMBOL_equality_expression = 108,      /* equality_expression  */
  YYSYMBOL_AND_expression = 109,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 110,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 111,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 112,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 113,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 114,   /* conditional_expression  */
  YYSYMBOL_M = 115,                        /* M  */
  YYSYMBOL_N = 116,                        /* N  */
  YYSYMBOL_assignment_expression = 117,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 118,      /* assignment_operator  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_constant_expression = 120,      /* constant_expression  */
  YYSYMBOL_declaration = 121,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 122,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 123,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 124,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 125,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 126,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 127, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 128, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 129,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 130,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 131,          /* enumerator_list  */
  YYSYMBOL_enumerator = 132,               /* enumerator  */
  YYSYMBOL_type_qualifier = 133,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 134,       /* function_specifier  */
  YYSYMBOL_declarator = 135,               /* declarator  */
  YYSYMBOL_direct_declarator = 136,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 137,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 138,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 139,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 140,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 141,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 142,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 143,          /* identifier_list  */
  YYSYMBOL_type_name = 144,                /* type_name  */
  YYSYMBOL_initializer = 145,              /* initializer  */
  YYSYMBOL_initializer_list = 146,         /* initializer_list  */
  YYSYMBOL_designation_opt = 147,          /* designation_opt  */
  YYSYMBOL_designation = 148,              /* designation  */
  YYSYMBOL_designator_list = 149,          /* designator_list  */
  YYSYMBOL_designator = 150,               /* designator  */
  YYSYMBOL_statement = 151,                /* statement  */
  YYSYMBOL_loop_statement = 152,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 153,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 154,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 155,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 156,          /* block_item_list  */
  YYSYMBOL_block_item = 157,               /* block_item  */
  YYSYMBOL_expression_statement = 158,     /* expression_statement  */
  YYSYMBOL_selection_statement = 159,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 160,      /* iteration_statement  */
  YYSYMBOL_F = 161,                        /* F  */
  YYSYMBOL_W = 162,                        /* W  */
  YYSYMBOL_D = 163,                        /* D  */
  YYSYMBOL_X = 164,                        /* X  */
  YYSYMBOL_change_table = 165,             /* change_table  */
  YYSYMBOL_jump_statement = 166,           /* jump_statement  */
  YYSYMBOL_translation_unit = 167,         /* translation_unit  */
  YYSYMBOL_external_declaration = 168,     /* external_declaration  */
  YYSYMBOL_function_definition = 169,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 170,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 171          /* declaration_list  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   349


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    64,    68,    73,    76,    80,    84,    90,
      96,   114,   119,   120,   121,   127,   133,   134,   137,   138,
     141,   145,   151,   152,   156,   160,   179,   180,   183,   184,
     185,   186,   187,   188,   191,   192,   198,   209,   219,   229,
     241,   242,   252,   264,   265,   275,   287,   288,   301,   314,
     327,   342,   343,   358,   375,   376,   391,   392,   407,   408,
     423,   424,   435,   436,   447,   448,   468,   470,   472,   473,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   500,   501,   504,   509,   510,   513,   514,   515,   516,
     517,   518,   519,   520,   523,   524,   527,   528,   534,   535,
     536,   537,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   556,   557,   560,   561,   564,
     565,   566,   569,   570,   573,   574,   577,   578,   581,   582,
     583,   586,   589,   595,   598,   602,   603,   604,   605,   623,
     639,   640,   641,   642,   643,   644,   655,   656,   669,   670,
     673,   674,   677,   678,   681,   682,   685,   686,   689,   690,
     693,   694,   697,   700,   701,   702,   705,   706,   709,   710,
     713,   716,   717,   720,   721,   725,   726,   727,   731,   732,
     733,   737,   738,   742,   743,   744,   747,   748,   749,   752,
     758,   759,   762,   763,   769,   770,   773,   774,   777,   785,
     794,   797,   807,   817,   825,   833,   844,   855,   866,   880,
     882,   884,   886,   896,   908,   909,   910,   911,   915,   923,
     924,   927,   928,   931,   938,   939,   942,   943
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "ENUM",
  "RESTRICT", "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID", "CASE",
  "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST",
  "GOTO", "SIZEOF", "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX",
  "DEFAULT", "INLINE", "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH",
  "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER", "UNION",
  "INVALID_TOKEN", "PARANTHESIS_OPEN", "PARANTHESIS_CLOSE",
  "SQ_BRACKET_OPEN", "SQ_BRACKET_CLOSE", "CURLY_BRACKET_OPEN",
  "CURLY_BRACKET_CLOSE", "PERIOD", "ARROW", "INCREMENT", "DECREMENT",
  "AMPERSAND", "ASTERISK", "PLUS", "MINUS", "TILDE", "EXCLAMATION",
  "SLASH", "PERCENT", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL",
  "NOT_EQUAL", "CARET", "PIPE", "LOGICAL_AND", "LOGICAL_OR", "QUESTION",
  "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN", "MULTIPLY_ASSIGN",
  "DIVIDE_ASSIGN", "MOD_ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN", "ADD_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER", "CONSTANT_INT",
  "CONSTANT_FLOAT", "CONSTANT_CHAR", "LITERAL", "THEN", "$accept",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "F", "W", "D", "X", "change_table",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-351)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-226)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1296,  -351,   -65,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,   -14,  1296,  1296,  -351,  1296,  1296,  1260,
    -351,  -351,     1,    35,   -15,   167,  -351,  -351,   -57,  -351,
     910,   128,   -21,  -351,  -351,  -351,  -351,  -351,  -351,   -38,
      31,  -351,    60,   167,  -351,   -15,   909,  -351,   -14,  -351,
    1296,    -2,   498,   128,    48,    -5,  -351,  -351,  -351,  -351,
    -351,    76,  1031,   445,    29,  1076,  1076,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
     161,   180,  1092,  -351,   148,   185,   174,   156,   177,    92,
      73,    79,   107,   178,  -351,  -351,  -351,   153,  -351,  -351,
     -17,  1220,   604,  -351,   192,   196,   551,  1092,  -351,   -35,
     445,  -351,  -351,    66,   354,  -351,   354,   179,  1092,   158,
      -4,   909,  -351,   -30,  -351,   445,  -351,  -351,  1092,  1092,
     164,   175,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  1092,  -351,  -351,  1092,  1092,
    1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,
    1092,  1092,  1092,  1092,  -351,  -351,   204,   301,  -351,   190,
    -351,   -15,   242,   198,  -351,   243,   604,  -351,  -351,  1092,
    -351,   244,   245,  -351,  -351,  -351,  -351,   248,  -351,  1092,
    -351,  -351,  -351,   925,   249,  -351,  -351,     6,  -351,  -351,
    -351,   250,   252,   199,  -351,   -16,  -351,  -351,  -351,  -351,
    -351,  -351,   148,   148,   185,   185,   174,   174,   174,   174,
     156,   156,   177,    92,    73,  1092,  1092,  -351,   222,   970,
    1092,  -351,  -351,   207,   224,   259,   229,  -351,   261,  -351,
    -351,   258,   -54,  -351,  -351,  -351,  -351,   291,   292,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  1183,  -351,   296,
     297,  -351,  -351,   299,  -351,    29,  -351,  -351,  -351,   909,
     299,  -351,  1092,  -351,    79,   107,  1092,  -351,  -351,   114,
     273,   306,   307,   276,  -351,  1092,   657,   316,  1092,  -351,
     657,  -351,  -351,   301,  -351,  -351,  -351,  -351,    63,  -351,
    -351,   275,  -351,   657,  -351,  -351,  -351,   275,  -351,  -351,
     819,    72,   301,  -351,  -351,  -351,   169,   293,  -351,  -351,
    -351,   321,   301,  -351,  -351,  -351,  -351,  -351,  -351,   657,
     324,  -351,  -351,   392,  -351,  -351,   326,   357,  -351,  -351,
    1092,  -351,  -351,  1092,   657,  -351,   336,  -351,  1015,  1015,
      95,  -351,   360,  1092,  -351,  -351,   334,   344,   341,   110,
    1092,  1092,  -351,   819,  -351,  1092,   310,   275,   275,   301,
    -351,   657,   120,  -351,   343,   345,   353,  -351,   328,  -351,
    -351,  -351,  -351,   711,   765,   301,  -351,   301,  -351,   362,
     364,  -351,  -351
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   123,   129,   110,    98,   102,   107,   104,   130,
     103,   109,   128,   111,    99,   112,   131,   113,   105,   108,
     106,   101,   222,     0,    87,    89,   114,    91,    93,     0,
     219,   221,   121,     0,     0,   149,    85,   134,     0,    95,
      96,   133,     0,    86,    88,    90,    92,     1,   220,     0,
       0,   152,   150,   148,    84,     0,     0,   226,     0,   213,
     224,   213,     0,   132,   126,     0,   124,   135,   151,   153,
      94,    96,     0,     0,   169,     0,     0,    28,    29,    30,
      31,    32,    33,     2,     6,     7,     8,     4,     9,     3,
      22,    34,     0,    36,    40,    43,    46,    51,    54,    56,
      58,    60,    62,    64,    68,   163,    97,     0,   227,   160,
       0,     0,     0,   139,    29,     0,     0,     0,   119,     0,
       0,    26,    81,     0,   118,   162,   118,     0,     0,     0,
       0,     0,   168,     0,   171,     0,    23,    24,    19,     0,
       0,     0,    14,    15,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,    34,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    66,     0,   191,   146,     0,
     147,   159,     0,   154,   156,     0,     0,   144,   138,     0,
     137,    29,     0,    83,   127,   120,   125,     0,     5,     0,
     117,   115,   116,     0,     0,   174,   164,   169,   166,   170,
     172,     0,     0,    18,    20,     0,    12,    13,    69,    37,
      38,    39,    41,    42,    44,    45,    47,    48,    49,    50,
      52,    53,    55,    57,    59,     0,     0,    66,     0,     0,
       0,   209,   210,     0,     0,     0,     0,   211,     0,   212,
     197,     2,     0,   194,   195,   175,   176,     0,    66,   192,
     177,   178,   179,   180,   161,   158,   145,     0,   141,     0,
       0,   143,   136,    27,    82,   169,    35,   173,   165,     0,
       0,    11,     0,    10,    61,    63,     0,   216,   218,     0,
       0,     0,     0,     0,   215,     0,     0,    66,     0,   213,
       0,   196,   223,     0,   155,   157,   140,   142,     0,   167,
      21,    67,   217,     0,   212,   212,   214,    67,   188,    66,
       0,     0,   191,   186,   193,    16,   169,     0,   187,   213,
     213,     0,   191,    66,   181,   182,   183,   184,   185,     0,
       0,    17,    66,     0,    66,    66,     0,     0,   200,   189,
       0,    66,    66,     0,     0,    66,     0,    65,     0,     0,
       0,    67,     0,     0,    66,    66,    66,   198,     0,     0,
       0,     0,    66,     0,    66,     0,     0,    67,    67,   191,
     201,     0,     0,   203,     0,     0,     0,   199,     0,    66,
      66,   202,   204,     0,     0,   191,   205,   191,   206,     0,
       0,   207,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -351,  -351,  -351,  -351,  -351,  -351,   -70,  -351,   -74,    89,
     104,    62,   108,   232,   240,   246,   181,   187,  -351,  -113,
    -120,  -204,    -6,  -351,   -72,  -119,     0,     7,  -351,   366,
    -351,    68,    65,   289,  -351,  -351,  -351,   309,     4,  -351,
     -13,   383,  -351,   377,   -48,  -351,  -351,   165,  -351,    28,
    -123,   159,  -195,  -351,  -351,   298,  -235,  -350,  -258,  -351,
    -253,  -351,   132,  -198,  -239,  -215,  -351,  -351,  -351,   -32,
     -58,  -209,  -351,   407,  -351,  -351,  -351
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    88,    89,    90,   212,   213,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     235,   176,   122,   155,   252,   194,   253,    58,    38,    39,
      24,    25,   125,   201,    26,    33,    65,    66,    27,    28,
      71,    41,    52,    42,    53,   182,   183,   184,   110,   127,
     106,   130,   131,   132,   133,   134,   254,   333,   255,   256,
     257,   258,   259,   260,   261,   262,   291,   292,   297,   299,
     107,   263,    29,    30,    31,    59,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   123,   121,   111,   193,   136,   137,    23,   208,   204,
      40,   195,   279,   128,   116,   193,    54,   129,   157,   301,
      34,    50,   156,   380,    32,   178,    34,    34,   283,    22,
      55,    43,    44,   199,    45,    46,    23,    35,    35,    51,
      57,   118,   206,   396,   398,   209,  -122,   156,   123,   128,
     105,    64,   278,   129,    64,   236,   115,    69,   156,    36,
     108,   318,   334,   123,   186,   323,    51,   215,    37,   340,
     179,   199,   128,    67,    37,    37,   129,   126,   328,   346,
      49,   336,   119,   207,   219,   220,   221,   109,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   348,   337,   185,   327,   198,   325,
     192,   338,    35,   331,   339,   334,    51,   286,   181,   361,
      69,   290,   335,   117,   126,   105,   386,   193,   126,   276,
     126,   279,   214,   156,   336,   334,   334,   366,   303,   126,
     172,   124,   399,   171,   400,   352,   387,   173,   197,   218,
     326,    56,   376,   199,   336,   336,   309,   367,   337,   199,
     364,   365,   388,   211,   338,   156,   156,   289,   265,    61,
     156,    62,     3,   384,   385,   335,   174,   320,   337,   337,
     269,     9,   199,   270,   338,   338,    12,   312,   124,   200,
      69,   200,   124,   274,   124,   335,   335,   199,   177,   332,
     158,   199,   138,   124,   139,   159,   160,   199,   140,   141,
     142,   143,   128,   347,   311,   341,   129,   165,   166,   167,
     168,   203,   350,   317,   353,   354,   321,   226,   227,   228,
     229,   358,   359,   163,   164,   362,   187,   357,   161,   162,
     188,   322,   169,   170,   370,   371,   373,   205,   175,   -67,
     222,   223,   379,   216,   381,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   217,   153,   154,   224,   225,   393,
     394,   343,   344,   105,   181,   237,   310,   230,   231,   264,
     156,   360,   329,   330,   266,   267,   282,   268,   271,   272,
     273,   369,   280,   277,   281,   287,   293,   294,   377,   378,
     295,   296,   298,   382,     1,     2,     3,     4,   238,     5,
     239,     6,   240,     7,     8,     9,    10,   241,    11,   242,
      12,   243,    72,    13,   244,   245,    14,    15,   246,    16,
     300,    17,   247,    18,   248,    19,    20,   302,  -190,    21,
     306,   307,    73,   351,   275,   313,   249,   314,   315,   316,
      75,    76,    77,    78,    79,    80,    81,    82,     2,     3,
       4,   319,   199,   345,     6,   342,     7,     8,     9,    10,
     349,    11,   355,    12,   250,   356,    13,   363,   368,   372,
      15,   374,   375,   383,    17,   389,    18,   390,    19,    20,
     251,    84,    85,    86,    87,     1,     2,     3,     4,   391,
       5,   392,     6,   232,     7,     8,     9,    10,   401,    11,
     402,    12,   233,    72,    13,   202,   284,    14,    15,   234,
      16,    70,    17,   285,    18,    63,    19,    20,   196,    68,
      21,   210,   305,    73,   308,   324,    48,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,     2,
       3,     4,     0,     0,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,   250,    72,    13,     0,     0,
       0,    15,     0,     0,     0,    17,     0,    18,     0,    19,
      20,    83,    84,    85,    86,    87,    73,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,    12,     0,    72,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    73,
       0,     0,   113,     0,     0,     0,     0,    75,    76,    77,
     114,    79,    80,    81,    82,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
      12,     0,    72,     0,     0,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,    87,    73,     0,     0,   190,     0,     0,     0,     0,
      75,    76,    77,   191,    79,    80,    81,    82,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    12,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    73,     0,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,   238,     0,   239,     0,   240,     0,
       0,     0,     0,   241,     0,   242,     0,   243,    72,     0,
     244,   245,     0,     0,   246,     0,     0,     0,   247,     0,
     248,     0,     0,    83,    84,    85,    86,    87,    73,     0,
       0,     0,   249,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,   238,     0,
     239,     0,   240,     0,     0,     0,     0,   241,     0,   242,
     250,   243,    72,     0,   244,   245,     0,     0,   246,     0,
       0,     0,   247,     0,   248,     0,   251,    84,    85,    86,
      87,     0,    73,     0,     0,     0,   395,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,   238,     0,   239,     0,   240,     0,     0,     0,
       0,   241,     0,   242,   250,   243,    72,     0,   244,   245,
       0,     0,   246,     0,     0,     0,   247,     0,   248,     0,
     251,    84,    85,    86,    87,     0,    73,     0,     0,     0,
     397,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,   238,     0,   239,     0,
     240,     0,     0,     0,     0,   241,     0,   242,   250,   243,
      72,     0,   244,   245,     0,     0,   246,     0,     0,     0,
     247,     0,   248,     0,   251,    84,    85,    86,    87,     0,
      73,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   251,    84,
      85,    86,    87,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
      72,     0,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,    72,     0,    21,     0,
      73,     0,     0,     0,    74,  -225,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    73,     0,     0,     0,
     275,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,    56,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,    83,    84,    85,    86,    87,    75,
      76,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,   288,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,     0,     0,    73,     0,     0,    83,
      84,    85,    86,    87,    75,    76,    77,    78,    79,    80,
      81,    82,   120,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,   250,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,     0,
       0,     0,     0,    72,     0,     0,     0,   135,     0,     0,
      83,    84,    85,    86,    87,    75,    76,    77,    78,    79,
      80,    81,    82,    73,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,     1,     2,     3,     4,
       0,     5,     0,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,     0,
       0,    21,     0,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
       0,     0,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,     0,   304,    21,     0,
      47,     0,   180,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
       0,     0,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,     0,     0,    21,     1,
       2,     3,     4,     0,     5,     0,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,     0,     0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    72,    61,   117,    75,    76,     0,   131,   128,
      23,    46,   207,    43,    62,   128,    73,    47,    92,    73,
      41,    34,    92,   373,    89,    42,    41,    41,    44,    29,
      87,    24,    25,    87,    27,    28,    29,    52,    52,    35,
      40,    46,    46,   393,   394,    75,    45,   117,   120,    43,
      56,    89,    46,    47,    89,   175,    62,    53,   128,    73,
      60,   296,   320,   135,   112,   300,    62,   139,    89,   322,
      87,    87,    43,    42,    89,    89,    47,    73,   313,   332,
      45,   320,    87,    87,   158,   159,   160,    89,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   339,   320,   112,   311,    42,    46,
     116,   320,    52,   317,    42,   373,   112,   237,   111,   354,
     116,   240,   320,    75,   120,   131,   379,   240,   124,   203,
     126,   326,   138,   203,   373,   393,   394,    42,   258,   135,
      67,    73,   395,    51,   397,   343,   381,    68,   120,   155,
      87,    75,    42,    87,   393,   394,   279,   361,   373,    87,
     358,   359,    42,   135,   373,   235,   236,   239,   181,    41,
     240,    43,     5,   377,   378,   373,    69,   297,   393,   394,
     186,    14,    87,   189,   393,   394,    19,    73,   120,   124,
     186,   126,   124,   199,   126,   393,   394,    87,    45,   319,
      52,    87,    41,   135,    43,    57,    58,    87,    47,    48,
      49,    50,    43,   333,   286,    46,    47,    61,    62,    63,
      64,    42,   342,   295,   344,   345,   298,   165,   166,   167,
     168,   351,   352,    59,    60,   355,    44,   350,    53,    54,
      44,   299,    65,    66,   364,   365,   366,    89,    70,    71,
     161,   162,   372,    89,   374,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    89,    85,    86,   163,   164,   389,
     390,   329,   330,   279,   267,    71,   282,   169,   170,    89,
     350,   353,   314,   315,    42,    87,    87,    44,    44,    44,
      42,   363,    42,    44,    42,    73,    89,    73,   370,   371,
      41,    72,    41,   375,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      72,    30,    31,    32,    33,    34,    35,    46,    46,    38,
      44,    44,    41,   343,    45,    72,    45,    41,    41,    73,
      49,    50,    51,    52,    53,    54,    55,    56,     4,     5,
       6,    45,    87,    42,    10,    72,    12,    13,    14,    15,
      46,    17,    46,    19,    73,    18,    22,    41,    18,    45,
      26,    37,    41,    73,    30,    42,    32,    42,    34,    35,
      89,    90,    91,    92,    93,     3,     4,     5,     6,    46,
       8,    73,    10,   171,    12,    13,    14,    15,    46,    17,
      46,    19,   172,    21,    22,   126,   235,    25,    26,   173,
      28,    55,    30,   236,    32,    42,    34,    35,   119,    52,
      38,   133,   267,    41,   275,   303,    29,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,     4,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    73,    21,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    89,    90,    91,    92,    93,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    92,    93,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,
      33,    -1,    -1,    89,    90,    91,    92,    93,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,
      73,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    33,    -1,    89,    90,    91,    92,
      93,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    18,    73,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,
      89,    90,    91,    92,    93,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,     7,    -1,     9,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    18,    73,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    33,    -1,    89,    90,    91,    92,    93,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      21,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    21,    -1,    38,    -1,
      41,    -1,    -1,    -1,    45,    45,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    89,    90,    91,    92,    93,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    41,    -1,    -1,    89,
      90,    91,    92,    93,    49,    50,    51,    52,    53,    54,
      55,    56,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    41,    -1,    -1,
      89,    90,    91,    92,    93,    49,    50,    51,    52,    53,
      54,    55,    56,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,
      -1,    38,    -1,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    74,    38,    -1,
       0,    -1,    42,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    38,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    38,   121,   122,   125,   126,   129,   133,   134,   167,
     168,   169,    89,   130,    41,    52,    73,    89,   123,   124,
     135,   136,   138,   122,   122,   122,   122,     0,   168,    45,
     135,   133,   137,   139,    73,    87,    75,   121,   122,   170,
     171,    41,    43,   136,    89,   131,   132,    42,   138,   133,
     124,   135,    21,    41,    45,    49,    50,    51,    52,    53,
      54,    55,    56,    89,    90,    91,    92,    93,    96,    97,
      98,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   117,   145,   165,   121,    89,
     143,   165,    25,    44,    52,   117,   139,    75,    46,    87,
      41,   101,   117,   119,   126,   127,   133,   144,    43,    47,
     146,   147,   148,   149,   150,    41,   101,   101,    41,    43,
      47,    48,    49,    50,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    85,    86,   118,   101,   103,    52,    57,
      58,    53,    54,    59,    60,    61,    62,    63,    64,    65,
      66,    51,    67,    68,    69,    70,   116,    45,    42,    87,
      42,   122,   140,   141,   142,   117,   139,    44,    44,    25,
      44,    52,   117,   114,   120,    46,   132,   144,    42,    87,
     127,   128,   128,    42,   120,    89,    46,    87,   145,    75,
     150,   144,    99,   100,   117,   119,    89,    89,   117,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     107,   107,   108,   109,   110,   115,   115,    71,     7,     9,
      11,    16,    18,    20,    23,    24,    27,    31,    33,    45,
      73,    89,   119,   121,   151,   153,   154,   155,   156,   157,
     158,   159,   160,   166,    89,   135,    42,    87,    44,   117,
     117,    44,    44,    42,   117,    45,   103,    44,    46,   147,
      42,    42,    87,    44,   111,   112,   115,    73,    73,   119,
     120,   161,   162,    89,    73,    41,    72,   163,    41,   164,
      72,    73,    46,   115,    74,   142,    44,    44,   146,   145,
     117,   119,    73,    72,    41,    41,    73,   119,   151,    45,
     115,   119,   165,   151,   157,    46,    87,   116,   151,   164,
     164,   116,   115,   152,   153,   158,   159,   160,   166,    42,
     155,    46,    72,   165,   165,    42,   155,   115,   151,    46,
     115,   121,   158,   115,   115,    46,    18,   114,   115,   115,
     119,   151,   115,    41,   158,   158,    42,   116,    18,   119,
     115,   115,    45,   115,    37,    41,    42,   119,   119,   115,
     152,   115,   119,    73,   116,   116,   155,   151,    42,    42,
      42,    46,    73,   115,   115,    45,   152,    45,   152,   155,
     155,    46,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   116,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   145,   145,   145,   146,   146,   147,   147,
     148,   149,   149,   150,   150,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   153,   153,   153,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     159,   160,   160,   160,   160,   160,   160,   160,   160,   161,
     162,   163,   164,   165,   166,   166,   166,   166,   166,   167,
     167,   168,   168,   169,   170,   170,   171,   171
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     0,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
       6,     2,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     6,     5,     4,     5,     4,     4,     1,     0,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     1,     0,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       1,     0,     1,     3,     1,     1,     2,     1,     8,    11,
       5,    10,    12,    10,    12,    14,    14,    16,    16,     0,
       0,     0,     0,     0,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     7,     1,     0,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 59 "asgn5_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = (yyvsp[0].symb);      // Store pointer in Symbol Table
                        (yyval.expr)->exprType = "not_bool";   // Non bool expression
                    }
#line 1745 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 64 "asgn5_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = (yyvsp[0].symb);      // Store pointer in Symbol Table
                    }
#line 1754 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 4: /* primary_expression: LITERAL  */
#line 68 "asgn5_21CS10005_21CS30031.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = symbolTable::gentemp(new symbolType("ptr"), (yyvsp[0].sValue)); // Create new temp with type ptr and store value
                        (yyval.expr)->addr->type->arrType = new symbolType("char");
                    }
#line 1764 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 5: /* primary_expression: PARANTHESIS_OPEN expression PARANTHESIS_CLOSE  */
#line 73 "asgn5_21CS10005_21CS30031.y"
                                                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1770 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 6: /* constant: CONSTANT_INT  */
#line 76 "asgn5_21CS10005_21CS30031.y"
                                    {
                        (yyval.symb) = symbolTable::gentemp(new symbolType("int"), convIntToStr((yyvsp[0].iValue))); // Create new temp with type int and store value
                        emit("=", (yyval.symb)->name, (yyvsp[0].iValue));
                    }
#line 1779 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 7: /* constant: CONSTANT_FLOAT  */
#line 80 "asgn5_21CS10005_21CS30031.y"
                                    {
                        (yyval.symb) = symbolTable::gentemp(new symbolType("float"), string((yyvsp[0].sValue)));  // Create new temp with type double and store value
                        emit("=", (yyval.symb)->name, string((yyvsp[0].sValue)));
                    }
#line 1788 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 8: /* constant: CONSTANT_CHAR  */
#line 84 "asgn5_21CS10005_21CS30031.y"
                                    {
                        (yyval.symb) = symbolTable::gentemp(new symbolType("char"), string((yyvsp[0].sValue)));   // Create new temp with type char and store value
                        emit("=", (yyval.symb)->name, string((yyvsp[0].sValue)));
                    }
#line 1797 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 90 "asgn5_21CS10005_21CS30031.y"
                                         {
                        (yyval.arr) = new A();   // New Array
                        (yyval.arr)->location = (yyvsp[0].expr)->addr;   // Store pointer in Symbol Table
                        (yyval.arr)->type = (yyvsp[0].expr)->addr->type;  // Update type
                        (yyval.arr)->addr = (yyval.arr)->location;   // Update location
                    }
#line 1808 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE  */
#line 96 "asgn5_21CS10005_21CS30031.y"
                                                                                     {
                        (yyval.arr) = new A();   // New Array
                        (yyval.arr)->type = (yyvsp[-3].arr)->type->arrType;   // Update type
                        (yyval.arr)->location = (yyvsp[-3].arr)->location;  // Copy the incoming symbol
                        (yyval.arr)->addr = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in location which will have the address of the array element
                        (yyval.arr)->arrType = "arr"; // A type is array

                        if ((yyvsp[-3].arr)->arrType == "arr") { // Array of array
                            symbol* temp = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in temp
                            int sz = sizeOfType((yyval.arr)->type);  // Get size of type of current
                            emit("*", temp->name, (yyvsp[-1].expr)->addr->name, convIntToStr(sz)); // temp = \$ 3 * sz
                            emit("+", (yyval.arr)->addr->name, (yyvsp[-3].arr)->addr->name, temp->name); // \$ \$ ->location = \$ 1->location + temp
                        }
                        else {
                            int sz = sizeOfType((yyval.arr)->type);  // Get size of type of current
                            emit("*", (yyval.arr)->addr->name, (yyvsp[-1].expr)->addr->name, convIntToStr(sz)); // \$ \$ ->addr = \$ 3->addr * sz
                        }
                    }
#line 1831 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PARANTHESIS_OPEN argument_expression_list_opt PARANTHESIS_CLOSE  */
#line 114 "asgn5_21CS10005_21CS30031.y"
                                                                                                         {
                        (yyval.arr) = new A();   // Make new array
                        (yyval.arr)->location = symbolTable::gentemp((yyvsp[-3].arr)->type); // Get return type
                        emit("call", (yyval.arr)->location->name, (yyvsp[-3].arr)->location->name, convIntToStr((yyvsp[-1].param_count))); // call \$ \$->Array->name \$ 3->param_count
                    }
#line 1841 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 119 "asgn5_21CS10005_21CS30031.y"
                                                           {}
#line 1847 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 120 "asgn5_21CS10005_21CS30031.y"
                                                          {}
#line 1853 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 121 "asgn5_21CS10005_21CS30031.y"
                                                   {
                        (yyval.arr) = new A();   // Make new array
                        (yyval.arr)->location = symbolTable::gentemp((yyvsp[-1].arr)->location->type);    // Make new temp with type of current
                        emit("=", (yyval.arr)->location->name, (yyvsp[-1].arr)->location->name);    // \$ \$->Array->name = \$ 1->Array->name
                        emit("+", (yyvsp[-1].arr)->location->name, (yyvsp[-1].arr)->location->name, "1");   // \$ 1->Array->name = \$ 1->Array->name + 1
                    }
#line 1864 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 127 "asgn5_21CS10005_21CS30031.y"
                                                   {
                        (yyval.arr) = new A();   // Make new array
                        (yyval.arr)->location = symbolTable::gentemp((yyvsp[-1].arr)->location->type);    // Make new temp with type of current
                        emit("=", (yyval.arr)->location->name, (yyvsp[-1].arr)->location->name);    // \$ \$->Array->name = \$ 1->Array->name
                        emit("-", (yyvsp[-1].arr)->location->name, (yyvsp[-1].arr)->location->name, "1");   // \$ 1->Array->name = \$ 1->Array->name - 1
                    }
#line 1875 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 16: /* postfix_expression: PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 133 "asgn5_21CS10005_21CS30031.y"
                                                                                                                           {}
#line 1881 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 17: /* postfix_expression: PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 134 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                 {}
#line 1887 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 18: /* argument_expression_list_opt: argument_expression_list  */
#line 137 "asgn5_21CS10005_21CS30031.y"
                                                        {(yyval.param_count) = (yyvsp[0].param_count);}
#line 1893 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 19: /* argument_expression_list_opt: %empty  */
#line 138 "asgn5_21CS10005_21CS30031.y"
                                     {(yyval.param_count) = 0;}
#line 1899 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 141 "asgn5_21CS10005_21CS30031.y"
                                                    {
                                (yyval.param_count) = 1;
                                emit("param", (yyvsp[0].expr)->addr->name);  // Emit param
                            }
#line 1908 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 145 "asgn5_21CS10005_21CS30031.y"
                                                                                   {
                                (yyval.param_count) = (yyvsp[-2].param_count) + 1;
                                emit("param", (yyvsp[0].expr)->addr->name);  // Emit param
                            }
#line 1917 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 151 "asgn5_21CS10005_21CS30031.y"
                                         { (yyval.arr) = (yyvsp[0].arr); }
#line 1923 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 152 "asgn5_21CS10005_21CS30031.y"
                                                 {
                        emit("+", (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->location->name, "1");   // \$ 2->Array->name = \$ 2->Array->name + 1
                        (yyval.arr) = (yyvsp[0].arr);
                    }
#line 1932 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 156 "asgn5_21CS10005_21CS30031.y"
                                                 {
                        emit("-", (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->location->name, "1");   // \$ 2->Array->name = \$ 2->Array->name - 1
                        (yyval.arr) = (yyvsp[0].arr);
                    }
#line 1941 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 160 "asgn5_21CS10005_21CS30031.y"
                                                     {
                        (yyval.arr) = new A();
                        if ((yyvsp[-1].unary_op) == '&') {
                            (yyval.arr)->location = symbolTable::gentemp(new symbolType("ptr")); // Create new temp with type ptr and store in addr
                            (yyval.arr)->location->type->arrType = (yyvsp[0].arr)->location->type;
                            emit("= &", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name); // \$ \$->Array->name = & \$ 2->Array->name
                        }
                        else if ((yyvsp[-1].unary_op) == '*') {
                            (yyval.arr)->arrType = "ptr"; // Pointer type
                            (yyval.arr)->addr = symbolTable::gentemp((yyvsp[0].arr)->location->type->arrType); // Create new temp with type of current and store in location
                            (yyval.arr)->location = (yyvsp[0].arr)->location;    // Copy the incoming symbol
                            emit("= *", (yyval.arr)->addr->name, (yyvsp[0].arr)->location->name); // \$ \$->location->name = * \$ 2->Array->name
                        }
                        else if ((yyvsp[-1].unary_op) == '+') (yyval.arr) = (yyvsp[0].arr);
                        else if ((yyvsp[-1].unary_op) == '-' || (yyvsp[-1].unary_op) == '~' || (yyvsp[-1].unary_op) == '!') {
                            (yyval.arr)->location = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->location->type->base)); // Create new temp with type of current and store in addr
                            emit("= "+(yyvsp[-1].unary_op), (yyval.arr)->location->name, (yyvsp[0].arr)->location->name); // \$ \$->Array->name = - \$ 2->Array->name
                        }
                    }
#line 1965 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 179 "asgn5_21CS10005_21CS30031.y"
                                              {}
#line 1971 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE  */
#line 180 "asgn5_21CS10005_21CS30031.y"
                                                                          {}
#line 1977 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 28: /* unary_operator: AMPERSAND  */
#line 183 "asgn5_21CS10005_21CS30031.y"
                                {(yyval.unary_op) = '&';}
#line 1983 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 29: /* unary_operator: ASTERISK  */
#line 184 "asgn5_21CS10005_21CS30031.y"
                                {(yyval.unary_op) = '*';}
#line 1989 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 185 "asgn5_21CS10005_21CS30031.y"
                                {(yyval.unary_op) = '+';}
#line 1995 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 186 "asgn5_21CS10005_21CS30031.y"
                                {(yyval.unary_op) = '-';}
#line 2001 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 32: /* unary_operator: TILDE  */
#line 187 "asgn5_21CS10005_21CS30031.y"
                                {(yyval.unary_op) = '~';}
#line 2007 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 33: /* unary_operator: EXCLAMATION  */
#line 188 "asgn5_21CS10005_21CS30031.y"
                                  {(yyval.unary_op) = '!';}
#line 2013 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 191 "asgn5_21CS10005_21CS30031.y"
                                       {(yyval.arr) =  (yyvsp[0].arr);}
#line 2019 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 35: /* cast_expression: PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE cast_expression  */
#line 192 "asgn5_21CS10005_21CS30031.y"
                                                                                   {
                        (yyval.arr) = new A();
                        (yyval.arr)->location = convType((yyvsp[0].arr)->location, data_type);
                    }
#line 2028 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 198 "asgn5_21CS10005_21CS30031.y"
                                            {
                            (yyval.expr) = new E(); // new expression
                            if ((yyvsp[0].arr)->arrType == "arr") {
                                (yyval.expr)->addr = symbolTable::gentemp((yyvsp[0].arr)->addr->type); // Create new temp with type of current and store in addr
                                emit("=[]", (yyval.expr)->addr->name, (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name [ \$ 1->location->name ]
                            }
                            else if((yyvsp[0].arr)->arrType == "ptr") {
                                (yyval.expr)->addr = (yyvsp[0].arr)->addr; // Copy the incoming symbol
                            }
                            else (yyval.expr)->addr = (yyvsp[0].arr)->location; // Copy the incoming symbol
                          }
#line 2044 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 209 "asgn5_21CS10005_21CS30031.y"
                                                                               {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->addr = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->addr->type->base)); // Create new temp with type int and store in addr
                                emit("*", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); // \$ \$->Array->name = \$ 1->Array->name * \$ 3->Array->name
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                          }
#line 2059 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 219 "asgn5_21CS10005_21CS30031.y"
                                                                            {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->addr = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->addr->type->base)); // Create new temp with type int and store in addr
                                emit("/", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); // \$ \$->Array->name = \$ 1->Array->name / \$ 3->Array->name
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                          }
#line 2074 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 229 "asgn5_21CS10005_21CS30031.y"
                                                                              {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->addr = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->addr->type->base)); // Create new temp with type int and store in addr
                                emit("%", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); // \$ \$->Array->name = \$ 1->Array->name % \$ 3->Array->name
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                          }
#line 2089 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 241 "asgn5_21CS10005_21CS30031.y"
                                                { (yyval.expr) = (yyvsp[0].expr); }
#line 2095 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 242 "asgn5_21CS10005_21CS30031.y"
                                                                         {
                        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->addr->type->base)); // Create new temp with type int and store in addr
                            emit("+", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name + \$ 3->Array->name
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2110 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 252 "asgn5_21CS10005_21CS30031.y"
                                                                          {
                        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->addr->type->base)); // Create new temp with type int and store in addr
                            emit("-", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name - \$ 3->Array->name
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2125 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 264 "asgn5_21CS10005_21CS30031.y"
                                          {(yyval.expr) = (yyvsp[0].expr);}
#line 2131 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 265 "asgn5_21CS10005_21CS30031.y"
                                                                      {
                        if ((yyvsp[0].expr)->addr->type->base == "int") {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in addr
                            emit("<<", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name << \$ 3->Array->name
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2146 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 275 "asgn5_21CS10005_21CS30031.y"
                                                                       {
                        if ((yyvsp[0].expr)->addr->type->base == "int") {
                            (yyval.expr) = new E();
                            (yyval.expr)->addr = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in addr
                            emit(">>", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name >> \$ 3->Array->name
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2161 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 287 "asgn5_21CS10005_21CS30031.y"
                                           { (yyval.expr) = (yyvsp[0].expr); }
#line 2167 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 288 "asgn5_21CS10005_21CS30031.y"
                                                                           {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->exprType = "bool";   // Boolean type
                                (yyval.expr)->trueList = makelist(nextinstr()); // Make list of next instruction
                                (yyval.expr)->falseList = makelist(nextinstr()+1); // Make list of next instruction
                                emit("<", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // if \$ 1->Array->name < \$ 3->Array->name
                                emit("goto", ""); // goto
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                        }
#line 2185 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 301 "asgn5_21CS10005_21CS30031.y"
                                                                              {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->exprType = "bool";   // Boolean type
                                (yyval.expr)->trueList = makelist(nextinstr()); // Make list of next instruction
                                (yyval.expr)->falseList = makelist(nextinstr()+1); // Make list of next instruction
                                emit(">", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // if \$ 1->Array->name > \$ 3->Array->name
                                emit("goto", ""); // goto
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                        }
#line 2203 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 314 "asgn5_21CS10005_21CS30031.y"
                                                                                 {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->exprType = "bool";   // Boolean type
                                (yyval.expr)->trueList = makelist(nextinstr()); // Make list of next instruction
                                (yyval.expr)->falseList = makelist(nextinstr()+1); // Make list of next instruction
                                emit("<=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // if \$ 1->Array->name <= \$ 3->Array->name
                                emit("goto", ""); // goto
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                        }
#line 2221 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 327 "asgn5_21CS10005_21CS30031.y"
                                                                                    {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                                (yyval.expr) = new E();
                                (yyval.expr)->exprType = "bool";   // Boolean type
                                (yyval.expr)->trueList = makelist(nextinstr()); // Make list of next instruction
                                (yyval.expr)->falseList = makelist(nextinstr()+1); // Make list of next instruction
                                emit(">=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // if \$ 1->Array->name >= \$ 3->Array->name
                                emit("goto", ""); // goto
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                        }
#line 2239 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 342 "asgn5_21CS10005_21CS30031.y"
                                            {(yyval.expr) = (yyvsp[0].expr);}
#line 2245 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 343 "asgn5_21CS10005_21CS30031.y"
                                                                      {
                        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                            convBoolToInt((yyvsp[-2].expr));
                            convBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new E();
                            (yyval.expr)->exprType = "bool";   // Boolean type
                            (yyval.expr)->trueList = makelist(nextinstr()); // Make list of next instruction
                            (yyval.expr)->falseList = makelist(nextinstr()+1); // Make list of next instruction
                            emit("==", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // if \$ 1->Array->name == \$ 3->Array->name
                            emit("goto", ""); // goto
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2265 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 358 "asgn5_21CS10005_21CS30031.y"
                                                                          {
                        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                            convBoolToInt((yyvsp[-2].expr));
                            convBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new E();
                            (yyval.expr)->exprType = "bool";   // Boolean type
                            (yyval.expr)->trueList = makelist(nextinstr()); // Make list of next instruction
                            (yyval.expr)->falseList = makelist(nextinstr()+1); // Make list of next instruction
                            emit("!=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // if \$ 1->Array->name != \$ 3->Array->name
                            emit("goto", ""); // goto
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2285 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 54: /* AND_expression: equality_expression  */
#line 375 "asgn5_21CS10005_21CS30031.y"
                                          {(yyval.expr) = (yyvsp[0].expr);}
#line 2291 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 55: /* AND_expression: AND_expression AMPERSAND equality_expression  */
#line 376 "asgn5_21CS10005_21CS30031.y"
                                                                   {
                        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                            convBoolToInt((yyvsp[-2].expr));
                            convBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new E();
                            (yyval.expr)->exprType = "not_bool"; // Not boolean
                            (yyval.expr)->addr = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in addr
                            emit("&", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name & \$ 3->Array->name
                        }
                        else {
                            yyerror("Type mismatch");
                        }
                    }
#line 2309 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 56: /* exclusive_OR_expression: AND_expression  */
#line 391 "asgn5_21CS10005_21CS30031.y"
                                         {(yyval.expr) = (yyvsp[0].expr);}
#line 2315 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 57: /* exclusive_OR_expression: exclusive_OR_expression CARET AND_expression  */
#line 392 "asgn5_21CS10005_21CS30031.y"
                                                                       {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                                convBoolToInt((yyvsp[-2].expr));
                                convBoolToInt((yyvsp[0].expr));
                                (yyval.expr) = new E();
                                (yyval.expr)->exprType = "not_bool"; // Not boolean
                                (yyval.expr)->addr = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in addr
                                emit("^", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name ^ \$ 3->Array->name
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                        }
#line 2333 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 58: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 407 "asgn5_21CS10005_21CS30031.y"
                                                  {(yyval.expr) = (yyvsp[0].expr);}
#line 2339 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 59: /* inclusive_OR_expression: inclusive_OR_expression PIPE exclusive_OR_expression  */
#line 408 "asgn5_21CS10005_21CS30031.y"
                                                                               {
                            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                                convBoolToInt((yyvsp[-2].expr));
                                convBoolToInt((yyvsp[0].expr));
                                (yyval.expr) = new E();
                                (yyval.expr)->exprType = "not_bool"; // Not boolean
                                (yyval.expr)->addr = symbolTable::gentemp(new symbolType("int")); // Create new temp with type int and store in addr
                                emit("|", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 1->Array->name | \$ 3->Array->name
                            }
                            else {
                                yyerror("Type mismatch");
                            }
                        }
#line 2357 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 60: /* logical_AND_expression: inclusive_OR_expression  */
#line 423 "asgn5_21CS10005_21CS30031.y"
                                                  {(yyval.expr) = (yyvsp[0].expr);}
#line 2363 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 61: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 424 "asgn5_21CS10005_21CS30031.y"
                                                                                       {    // M is augmented non-terminal
                            convBoolToInt((yyvsp[-3].expr));
                            convBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new E();
                            (yyval.expr)->exprType = "bool";   // Boolean type
                            backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-1].instr_ind)); // Backpatch
                            (yyval.expr)->trueList = (yyvsp[0].expr)->trueList; // Copy true list
                            (yyval.expr)->falseList = merge((yyvsp[-3].expr)->falseList, (yyvsp[0].expr)->falseList); // Merge false lists
                        }
#line 2377 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_AND_expression  */
#line 435 "asgn5_21CS10005_21CS30031.y"
                                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2383 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 436 "asgn5_21CS10005_21CS30031.y"
                                                                                    {   // M is augmented non-terminal
                            convBoolToInt((yyvsp[-3].expr));
                            convBoolToInt((yyvsp[0].expr));
                            (yyval.expr) = new E();
                            (yyval.expr)->exprType = "bool";   // Boolean type
                            backpatch((yyvsp[-3].expr)->falseList, (yyvsp[-1].instr_ind)); // Backpatch
                            (yyval.expr)->falseList = (yyvsp[0].expr)->falseList; // Copy false list
                            (yyval.expr)->trueList = merge((yyvsp[-3].expr)->trueList, (yyvsp[0].expr)->trueList); // Merge true lists
                        }
#line 2397 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression  */
#line 447 "asgn5_21CS10005_21CS30031.y"
                                                {(yyval.expr) = (yyvsp[0].expr);}
#line 2403 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression N QUESTION M expression N COLON M conditional_expression  */
#line 448 "asgn5_21CS10005_21CS30031.y"
                                                                                                         {  // M and N are augmented non-terminals
                            (yyval.expr)->addr = symbolTable::gentemp((yyvsp[-8].expr)->addr->type); // Create new temp with type of current and store in addr
                            (yyval.expr)->addr->update((yyvsp[-4].expr)->addr->type);
                            emit("=", (yyval.expr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ \$->Array->name = \$ 9->Array->name
                            list <int> templist1 = makelist(nextinstr());
                            emit("goto", "");   // goto
                            backpatch((yyvsp[-3].statem)->nextList, nextinstr());   // For N2
                            emit("=", (yyval.expr)->addr->name, (yyvsp[-4].expr)->addr->name); // \$ \$->Array->name = \$ 5->Array->name
                            list <int> templist2 = makelist(nextinstr());
                            templist1 = merge(templist1, templist2);
                            emit("goto", "");   // goto
                            backpatch((yyvsp[-7].statem)->nextList, nextinstr());   // For N1
                            convIntToBool((yyvsp[-8].expr));
                            backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-5].instr_ind)); // Backpatch to M1 when true
                            backpatch((yyvsp[-8].expr)->falseList, (yyvsp[-1].instr_ind)); // Backpatch to M2 when false
                            backpatch(templist1, nextinstr());
                        }
#line 2425 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 66: /* M: %empty  */
#line 468 "asgn5_21CS10005_21CS30031.y"
          { (yyval.instr_ind) = nextinstr(); }
#line 2431 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 67: /* N: %empty  */
#line 470 "asgn5_21CS10005_21CS30031.y"
          { (yyval.statem) = new S(); (yyval.statem)->nextList = makelist(nextinstr()); emit("goto", ""); }
#line 2437 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 472 "asgn5_21CS10005_21CS30031.y"
                                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2443 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 473 "asgn5_21CS10005_21CS30031.y"
                                                                                     {
                            if ((yyvsp[-2].arr)->arrType == "arr") { // convert array
                                (yyvsp[0].expr)->addr = convType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->type->base);
                                emit("[]=", (yyvsp[-2].arr)->location->name, (yyvsp[-2].arr)->addr->name, (yyvsp[0].expr)->addr->name); // \$ 1->Array->name [ \$ 1->location->name ] = \$ 3->Array->name
                            }
                            else if ((yyvsp[-2].arr)->arrType == "ptr") emit("*=", (yyvsp[-2].arr)->location->name, (yyvsp[0].expr)->addr->name);  // Pointer type
                            else {
                                (yyvsp[0].expr)->addr = convType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->location->type->base);
                                emit("=", (yyvsp[-2].arr)->location->name, (yyvsp[0].expr)->addr->name); // \$ 1->Array->name = \$ 3->Array->name
                            }
                            (yyval.expr) = (yyvsp[0].expr);
                        }
#line 2460 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 70: /* assignment_operator: ASSIGN  */
#line 487 "asgn5_21CS10005_21CS30031.y"
                                 {}
#line 2466 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 71: /* assignment_operator: MULTIPLY_ASSIGN  */
#line 488 "asgn5_21CS10005_21CS30031.y"
                                          {}
#line 2472 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 72: /* assignment_operator: DIVIDE_ASSIGN  */
#line 489 "asgn5_21CS10005_21CS30031.y"
                                        {}
#line 2478 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 73: /* assignment_operator: MOD_ASSIGN  */
#line 490 "asgn5_21CS10005_21CS30031.y"
                                     {}
#line 2484 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 74: /* assignment_operator: PLUS_ASSIGN  */
#line 491 "asgn5_21CS10005_21CS30031.y"
                                      {}
#line 2490 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 75: /* assignment_operator: MINUS_ASSIGN  */
#line 492 "asgn5_21CS10005_21CS30031.y"
                                       {}
#line 2496 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 76: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 493 "asgn5_21CS10005_21CS30031.y"
                                            {}
#line 2502 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 77: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 494 "asgn5_21CS10005_21CS30031.y"
                                             {}
#line 2508 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 78: /* assignment_operator: AND_ASSIGN  */
#line 495 "asgn5_21CS10005_21CS30031.y"
                                     {}
#line 2514 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 79: /* assignment_operator: XOR_ASSIGN  */
#line 496 "asgn5_21CS10005_21CS30031.y"
                                     {}
#line 2520 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 80: /* assignment_operator: OR_ASSIGN  */
#line 497 "asgn5_21CS10005_21CS30031.y"
                                    {}
#line 2526 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 500 "asgn5_21CS10005_21CS30031.y"
                                    {(yyval.expr) = (yyvsp[0].expr);}
#line 2532 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 501 "asgn5_21CS10005_21CS30031.y"
                                                     {}
#line 2538 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 83: /* constant_expression: conditional_expression  */
#line 504 "asgn5_21CS10005_21CS30031.y"
                                             {}
#line 2544 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 509 "asgn5_21CS10005_21CS30031.y"
                                                                    {}
#line 2550 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 85: /* declaration: declaration_specifiers SEMICOLON  */
#line 510 "asgn5_21CS10005_21CS30031.y"
                                               {}
#line 2556 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 513 "asgn5_21CS10005_21CS30031.y"
                                                                         {}
#line 2562 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier  */
#line 514 "asgn5_21CS10005_21CS30031.y"
                                                  {}
#line 2568 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 515 "asgn5_21CS10005_21CS30031.y"
                                                                {}
#line 2574 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 89: /* declaration_specifiers: type_specifier  */
#line 516 "asgn5_21CS10005_21CS30031.y"
                                         {}
#line 2580 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 517 "asgn5_21CS10005_21CS30031.y"
                                                                {}
#line 2586 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 91: /* declaration_specifiers: type_qualifier  */
#line 518 "asgn5_21CS10005_21CS30031.y"
                                         {}
#line 2592 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 92: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 519 "asgn5_21CS10005_21CS30031.y"
                                                                    {}
#line 2598 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 93: /* declaration_specifiers: function_specifier  */
#line 520 "asgn5_21CS10005_21CS30031.y"
                                             {}
#line 2604 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 523 "asgn5_21CS10005_21CS30031.y"
                                                                 {}
#line 2610 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator  */
#line 524 "asgn5_21CS10005_21CS30031.y"
                                      {}
#line 2616 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 527 "asgn5_21CS10005_21CS30031.y"
                             {(yyval.symb) = (yyvsp[0].symb);}
#line 2622 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 97: /* init_declarator: declarator ASSIGN initializer  */
#line 528 "asgn5_21CS10005_21CS30031.y"
                                                {
                    if ((yyvsp[0].symb)->initValue != "NULL") (yyvsp[-2].symb)->initValue = (yyvsp[0].symb)->initValue;
                    emit("=", (yyvsp[-2].symb)->name, (yyvsp[0].symb)->name);
                }
#line 2631 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 534 "asgn5_21CS10005_21CS30031.y"
                                 {}
#line 2637 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 99: /* storage_class_specifier: STATIC  */
#line 535 "asgn5_21CS10005_21CS30031.y"
                                 {}
#line 2643 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 100: /* storage_class_specifier: AUTO  */
#line 536 "asgn5_21CS10005_21CS30031.y"
                               {}
#line 2649 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 101: /* storage_class_specifier: REGISTER  */
#line 537 "asgn5_21CS10005_21CS30031.y"
                                   {}
#line 2655 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 541 "asgn5_21CS10005_21CS30031.y"
                       {data_type = "void";}
#line 2661 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 542 "asgn5_21CS10005_21CS30031.y"
                       {data_type = "char";}
#line 2667 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 543 "asgn5_21CS10005_21CS30031.y"
                        {}
#line 2673 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 544 "asgn5_21CS10005_21CS30031.y"
                      {data_type = "int";}
#line 2679 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 545 "asgn5_21CS10005_21CS30031.y"
                       {}
#line 2685 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 546 "asgn5_21CS10005_21CS30031.y"
                        {data_type = "float";}
#line 2691 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 108: /* type_specifier: DOUBLE  */
#line 547 "asgn5_21CS10005_21CS30031.y"
                         {}
#line 2697 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 109: /* type_specifier: SIGNED  */
#line 548 "asgn5_21CS10005_21CS30031.y"
                         {}
#line 2703 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 110: /* type_specifier: UNSIGNED  */
#line 549 "asgn5_21CS10005_21CS30031.y"
                           {}
#line 2709 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 111: /* type_specifier: BOOL  */
#line 550 "asgn5_21CS10005_21CS30031.y"
                       {}
#line 2715 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 112: /* type_specifier: COMPLEX  */
#line 551 "asgn5_21CS10005_21CS30031.y"
                          {}
#line 2721 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 113: /* type_specifier: IMAGINARY  */
#line 552 "asgn5_21CS10005_21CS30031.y"
                            {}
#line 2727 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 114: /* type_specifier: enum_specifier  */
#line 553 "asgn5_21CS10005_21CS30031.y"
                                 {}
#line 2733 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 556 "asgn5_21CS10005_21CS30031.y"
                                                                          {}
#line 2739 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 557 "asgn5_21CS10005_21CS30031.y"
                                                                          {}
#line 2745 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 560 "asgn5_21CS10005_21CS30031.y"
                                                           {}
#line 2751 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 118: /* specifier_qualifier_list_opt: %empty  */
#line 561 "asgn5_21CS10005_21CS30031.y"
                                         {}
#line 2757 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 119: /* enum_specifier: ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list CURLY_BRACKET_CLOSE  */
#line 564 "asgn5_21CS10005_21CS30031.y"
                                                                                             {}
#line 2763 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 120: /* enum_specifier: ENUM identifier_opt CURLY_BRACKET_OPEN enumerator_list COMMA CURLY_BRACKET_CLOSE  */
#line 565 "asgn5_21CS10005_21CS30031.y"
                                                                                                   {}
#line 2769 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 121: /* enum_specifier: ENUM IDENTIFIER  */
#line 566 "asgn5_21CS10005_21CS30031.y"
                                  {}
#line 2775 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 122: /* identifier_opt: IDENTIFIER  */
#line 569 "asgn5_21CS10005_21CS30031.y"
                             {}
#line 2781 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 123: /* identifier_opt: %empty  */
#line 570 "asgn5_21CS10005_21CS30031.y"
                         {}
#line 2787 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 124: /* enumerator_list: enumerator  */
#line 573 "asgn5_21CS10005_21CS30031.y"
                             {}
#line 2793 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 125: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 574 "asgn5_21CS10005_21CS30031.y"
                                                   {}
#line 2799 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 126: /* enumerator: IDENTIFIER  */
#line 577 "asgn5_21CS10005_21CS30031.y"
                         {}
#line 2805 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 127: /* enumerator: IDENTIFIER ASSIGN constant_expression  */
#line 578 "asgn5_21CS10005_21CS30031.y"
                                                    {}
#line 2811 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 128: /* type_qualifier: CONST  */
#line 581 "asgn5_21CS10005_21CS30031.y"
                        {}
#line 2817 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 129: /* type_qualifier: RESTRICT  */
#line 582 "asgn5_21CS10005_21CS30031.y"
                           {}
#line 2823 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 130: /* type_qualifier: VOLATILE  */
#line 583 "asgn5_21CS10005_21CS30031.y"
                           {}
#line 2829 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 131: /* function_specifier: INLINE  */
#line 586 "asgn5_21CS10005_21CS30031.y"
                             {}
#line 2835 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 132: /* declarator: pointer direct_declarator  */
#line 589 "asgn5_21CS10005_21CS30031.y"
                                        {
                symbolType* t = (yyvsp[-1].symbType);
                while(t->arrType != NULL) t = t->arrType;   // Multidimensional array, go to last dimension
                t->arrType = (yyvsp[0].symb)->type;  // Assign type
                (yyval.symb) = (yyvsp[0].symb)->update((yyvsp[-1].symbType));    // Update
            }
#line 2846 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 133: /* declarator: direct_declarator  */
#line 595 "asgn5_21CS10005_21CS30031.y"
                                {}
#line 2852 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 134: /* direct_declarator: IDENTIFIER  */
#line 598 "asgn5_21CS10005_21CS30031.y"
                                 {
                        (yyval.symb) = (yyvsp[0].symb)->update(new symbolType(data_type));   // Get data type of identifier
                        currentSymbol = (yyvsp[0].symb); // Update current symbol
                    }
#line 2861 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 135: /* direct_declarator: PARANTHESIS_OPEN declarator PARANTHESIS_CLOSE  */
#line 602 "asgn5_21CS10005_21CS30031.y"
                                                                    { (yyval.symb) = (yyvsp[-1].symb);}
#line 2867 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list assignment_expression SQ_BRACKET_CLOSE  */
#line 603 "asgn5_21CS10005_21CS30031.y"
                                                                                                                   {}
#line 2873 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list SQ_BRACKET_CLOSE  */
#line 604 "asgn5_21CS10005_21CS30031.y"
                                                                                             {}
#line 2879 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN assignment_expression SQ_BRACKET_CLOSE  */
#line 605 "asgn5_21CS10005_21CS30031.y"
                                                                                               {
                        symbolType* t = (yyvsp[-3].symb)->type;
                        symbolType* prev = NULL;
                        while(t->base == "arr") {
                            prev = t;
                            t = t->arrType;
                        }
                        if (prev == NULL) {
                            int temp = atoi((yyvsp[-1].expr)->addr->initValue.c_str());   // Init value
                            symbolType* tp = new symbolType("arr", (yyvsp[-3].symb)->type, temp);   // Create new array type
                            (yyval.symb) = (yyvsp[-3].symb)->update(tp);    // Update
                        }
                        else {
                            int temp = atoi((yyvsp[-1].expr)->addr->initValue.c_str());   // Init value
                            prev->arrType = new symbolType("arr", t, temp);  // Create new array type
                            (yyval.symb) = (yyvsp[-3].symb)->update((yyvsp[-3].symb)->type);  // Update
                        }
                    }
#line 2902 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN SQ_BRACKET_CLOSE  */
#line 623 "asgn5_21CS10005_21CS30031.y"
                                                                         {
                        symbolType* t = (yyvsp[-2].symb)->type;
                        symbolType* prev = NULL;
                        while(t->base == "arr") {
                            prev = t;
                            t = t->arrType;
                        }
                        if (prev == NULL) {
                            symbolType* tp = new symbolType("arr", (yyvsp[-2].symb)->type, 0);   // Create new array type
                            (yyval.symb) = (yyvsp[-2].symb)->update(tp);    // Update
                        }
                        else {
                            prev->arrType = new symbolType("arr", t, 0);  // Create new array type
                            (yyval.symb) = (yyvsp[-2].symb)->update((yyvsp[-2].symb)->type);  // Update
                        }
                    }
#line 2923 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN STATIC type_qualifier_list assignment_expression SQ_BRACKET_CLOSE  */
#line 639 "asgn5_21CS10005_21CS30031.y"
                                                                                                                          {}
#line 2929 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN STATIC assignment_expression SQ_BRACKET_CLOSE  */
#line 640 "asgn5_21CS10005_21CS30031.y"
                                                                                                      {}
#line 2935 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 142: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQ_BRACKET_CLOSE  */
#line 641 "asgn5_21CS10005_21CS30031.y"
                                                                                                                          {}
#line 2941 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 143: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN type_qualifier_list ASTERISK SQ_BRACKET_CLOSE  */
#line 642 "asgn5_21CS10005_21CS30031.y"
                                                                                                      {}
#line 2947 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 144: /* direct_declarator: direct_declarator SQ_BRACKET_OPEN ASTERISK SQ_BRACKET_CLOSE  */
#line 643 "asgn5_21CS10005_21CS30031.y"
                                                                                  {}
#line 2953 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 145: /* direct_declarator: direct_declarator PARANTHESIS_OPEN change_table parameter_type_list PARANTHESIS_CLOSE  */
#line 644 "asgn5_21CS10005_21CS30031.y"
                                                                                                            {   // change_table non terminal is used to change the symbol table
                        currentSymbolTable->name = (yyvsp[-4].symb)->name; // Update name
                        if ((yyvsp[-4].symb)->type->base != "void") {
                            symbol* s = currentSymbolTable->lookup("return");   // Find return symbol
                            s->update((yyvsp[-4].symb)->type);    // Update return type
                        }
                        (yyvsp[-4].symb)->nestedTable = currentSymbolTable;    // Update nested table
                        currentSymbolTable->parent = globalSymbolTable;   // Update parent
                        switchTable(globalSymbolTable);  // Switch to global symbol table
                        currentSymbol = (yyval.symb); // Update current symbol
                    }
#line 2969 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 146: /* direct_declarator: direct_declarator PARANTHESIS_OPEN identifier_list PARANTHESIS_CLOSE  */
#line 655 "asgn5_21CS10005_21CS30031.y"
                                                                                           {}
#line 2975 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 147: /* direct_declarator: direct_declarator PARANTHESIS_OPEN change_table PARANTHESIS_CLOSE  */
#line 656 "asgn5_21CS10005_21CS30031.y"
                                                                                        {
                        currentSymbolTable->name = (yyvsp[-3].symb)->name; // Update name
                        if ((yyvsp[-3].symb)->type->base != "void") {
                            symbol* s = currentSymbolTable->lookup("return");   // Find return symbol
                            s->update((yyvsp[-3].symb)->type);    // Update return type
                        }
                        (yyvsp[-3].symb)->nestedTable = currentSymbolTable;    // Update nested table
                        currentSymbolTable->parent = globalSymbolTable;   // Update parent
                        switchTable(globalSymbolTable);  // Switch to global symbol table
                        currentSymbol = (yyval.symb); // Update current symbol
                    }
#line 2991 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 148: /* type_qualifier_list_opt: type_qualifier_list  */
#line 669 "asgn5_21CS10005_21CS30031.y"
                                              {}
#line 2997 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 149: /* type_qualifier_list_opt: %empty  */
#line 670 "asgn5_21CS10005_21CS30031.y"
                                 {}
#line 3003 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 150: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 673 "asgn5_21CS10005_21CS30031.y"
                                           {(yyval.symbType) =  new symbolType("ptr");}
#line 3009 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 151: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 674 "asgn5_21CS10005_21CS30031.y"
                                                   {(yyval.symbType) = new symbolType("ptr", (yyvsp[0].symbType));}
#line 3015 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 152: /* type_qualifier_list: type_qualifier  */
#line 677 "asgn5_21CS10005_21CS30031.y"
                                     {}
#line 3021 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 153: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 678 "asgn5_21CS10005_21CS30031.y"
                                                         {}
#line 3027 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 154: /* parameter_type_list: parameter_list  */
#line 681 "asgn5_21CS10005_21CS30031.y"
                                     {}
#line 3033 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 155: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 682 "asgn5_21CS10005_21CS30031.y"
                                                    {}
#line 3039 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 156: /* parameter_list: parameter_declaration  */
#line 685 "asgn5_21CS10005_21CS30031.y"
                                        {}
#line 3045 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 157: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 686 "asgn5_21CS10005_21CS30031.y"
                                                             {}
#line 3051 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 158: /* parameter_declaration: declaration_specifiers declarator  */
#line 689 "asgn5_21CS10005_21CS30031.y"
                                                            {}
#line 3057 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 159: /* parameter_declaration: declaration_specifiers  */
#line 690 "asgn5_21CS10005_21CS30031.y"
                                                 {}
#line 3063 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 160: /* identifier_list: IDENTIFIER  */
#line 693 "asgn5_21CS10005_21CS30031.y"
                             {}
#line 3069 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 161: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 694 "asgn5_21CS10005_21CS30031.y"
                                                   {}
#line 3075 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 162: /* type_name: specifier_qualifier_list  */
#line 697 "asgn5_21CS10005_21CS30031.y"
                                       {}
#line 3081 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 163: /* initializer: assignment_expression  */
#line 700 "asgn5_21CS10005_21CS30031.y"
                                    {(yyval.symb) = (yyvsp[0].expr)->addr;}
#line 3087 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 164: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 701 "asgn5_21CS10005_21CS30031.y"
                                                                      {}
#line 3093 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 165: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 702 "asgn5_21CS10005_21CS30031.y"
                                                                            {}
#line 3099 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 166: /* initializer_list: designation_opt initializer  */
#line 705 "asgn5_21CS10005_21CS30031.y"
                                                  {}
#line 3105 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 167: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 706 "asgn5_21CS10005_21CS30031.y"
                                                                         {}
#line 3111 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 168: /* designation_opt: designation  */
#line 709 "asgn5_21CS10005_21CS30031.y"
                              {}
#line 3117 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 169: /* designation_opt: %empty  */
#line 710 "asgn5_21CS10005_21CS30031.y"
                         {}
#line 3123 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 170: /* designation: designator_list ASSIGN  */
#line 713 "asgn5_21CS10005_21CS30031.y"
                                     {}
#line 3129 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 171: /* designator_list: designator  */
#line 716 "asgn5_21CS10005_21CS30031.y"
                             {}
#line 3135 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 172: /* designator_list: designator_list designator  */
#line 717 "asgn5_21CS10005_21CS30031.y"
                                             {}
#line 3141 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 173: /* designator: SQ_BRACKET_OPEN constant_expression SQ_BRACKET_CLOSE  */
#line 720 "asgn5_21CS10005_21CS30031.y"
                                                                   {}
#line 3147 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 174: /* designator: PERIOD IDENTIFIER  */
#line 721 "asgn5_21CS10005_21CS30031.y"
                                {}
#line 3153 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 175: /* statement: labeled_statement  */
#line 725 "asgn5_21CS10005_21CS30031.y"
                                {}
#line 3159 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 176: /* statement: compound_statement  */
#line 726 "asgn5_21CS10005_21CS30031.y"
                                 { (yyval.statem) = (yyvsp[0].statem); }
#line 3165 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 177: /* statement: expression_statement  */
#line 727 "asgn5_21CS10005_21CS30031.y"
                                   {
                (yyval.statem) = new S();
                (yyval.statem)->nextList = (yyvsp[0].expr)->nextList;
            }
#line 3174 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 178: /* statement: selection_statement  */
#line 731 "asgn5_21CS10005_21CS30031.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3180 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 179: /* statement: iteration_statement  */
#line 732 "asgn5_21CS10005_21CS30031.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3186 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 180: /* statement: jump_statement  */
#line 733 "asgn5_21CS10005_21CS30031.y"
                             { (yyval.statem) = (yyvsp[0].statem); }
#line 3192 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 181: /* loop_statement: labeled_statement  */
#line 737 "asgn5_21CS10005_21CS30031.y"
                                  {}
#line 3198 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 182: /* loop_statement: expression_statement  */
#line 738 "asgn5_21CS10005_21CS30031.y"
                                   {
                (yyval.statem) = new S();
                (yyval.statem)->nextList = (yyvsp[0].expr)->nextList;
            }
#line 3207 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 183: /* loop_statement: selection_statement  */
#line 742 "asgn5_21CS10005_21CS30031.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3213 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 184: /* loop_statement: iteration_statement  */
#line 743 "asgn5_21CS10005_21CS30031.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3219 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 185: /* loop_statement: jump_statement  */
#line 744 "asgn5_21CS10005_21CS30031.y"
                             { (yyval.statem) = (yyvsp[0].statem); }
#line 3225 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 186: /* labeled_statement: IDENTIFIER COLON statement  */
#line 747 "asgn5_21CS10005_21CS30031.y"
                                                 {}
#line 3231 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 187: /* labeled_statement: CASE constant_expression COLON statement  */
#line 748 "asgn5_21CS10005_21CS30031.y"
                                                               {}
#line 3237 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 188: /* labeled_statement: DEFAULT COLON statement  */
#line 749 "asgn5_21CS10005_21CS30031.y"
                                              {}
#line 3243 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 189: /* compound_statement: CURLY_BRACKET_OPEN X change_table block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 752 "asgn5_21CS10005_21CS30031.y"
                                                                                                {   // X and change_table are augmented non-terminals
                        (yyval.statem) = (yyvsp[-1].statem);
                        switchTable(currentSymbolTable->parent);
                    }
#line 3252 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 190: /* block_item_list_opt: block_item_list  */
#line 758 "asgn5_21CS10005_21CS30031.y"
                                      { (yyval.statem) = (yyvsp[0].statem); }
#line 3258 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 191: /* block_item_list_opt: %empty  */
#line 759 "asgn5_21CS10005_21CS30031.y"
                             { (yyval.statem) = new S();}
#line 3264 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 192: /* block_item_list: block_item  */
#line 762 "asgn5_21CS10005_21CS30031.y"
                             {(yyval.statem) = (yyvsp[0].statem);}
#line 3270 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 193: /* block_item_list: block_item_list M block_item  */
#line 763 "asgn5_21CS10005_21CS30031.y"
                                               {    // M is augmented non-terminal
                    (yyval.statem) = (yyvsp[0].statem);
                    backpatch((yyvsp[-2].statem)->nextList, (yyvsp[-1].instr_ind));    // Backpatch to jump to 2
                }
#line 3279 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 194: /* block_item: declaration  */
#line 769 "asgn5_21CS10005_21CS30031.y"
                          { (yyval.statem) = new S(); }
#line 3285 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 195: /* block_item: statement  */
#line 770 "asgn5_21CS10005_21CS30031.y"
                        { (yyval.statem) = (yyvsp[0].statem); }
#line 3291 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 196: /* expression_statement: expression SEMICOLON  */
#line 773 "asgn5_21CS10005_21CS30031.y"
                                               { (yyval.expr) = (yyvsp[-1].expr); }
#line 3297 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 197: /* expression_statement: SEMICOLON  */
#line 774 "asgn5_21CS10005_21CS30031.y"
                                    { (yyval.expr) = new E(); }
#line 3303 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 198: /* selection_statement: IF PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement N  */
#line 777 "asgn5_21CS10005_21CS30031.y"
                                                                                                  { // M, N and THEN augmented to help with control flow
                        backpatch((yyvsp[-4].statem)->nextList, nextinstr());   // Backpatch to next instruction
                        convIntToBool((yyvsp[-5].expr));
                        (yyval.statem) = new S();
                        backpatch((yyvsp[-5].expr)->trueList, (yyvsp[-2].instr_ind));    // Backpatch to M
                        list<int> temp = merge((yyvsp[-5].expr)->falseList, (yyvsp[-1].statem)->nextList); // Merge false lists
                        (yyval.statem)->nextList = merge((yyvsp[0].statem)->nextList, temp); // Merge false lists
                    }
#line 3316 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 199: /* selection_statement: IF PARANTHESIS_OPEN expression N PARANTHESIS_CLOSE M statement N ELSE M statement  */
#line 785 "asgn5_21CS10005_21CS30031.y"
                                                                                                        {
                        backpatch((yyvsp[-7].statem)->nextList, nextinstr());   // Backpatch to next instruction
                        convIntToBool((yyvsp[-8].expr));
                        (yyval.statem) = new S();
                        backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-5].instr_ind));    // Backpatch to M1
                        backpatch((yyvsp[-8].expr)->falseList, (yyvsp[-1].instr_ind));   // Backpatch to M2
                        list<int> temp = merge((yyvsp[-4].statem)->nextList, (yyvsp[-3].statem)->nextList); // Merge false lists
                        (yyval.statem)->nextList = merge((yyvsp[0].statem)->nextList, temp); // Merge false lists
                    }
#line 3330 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 200: /* selection_statement: SWITCH PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement  */
#line 794 "asgn5_21CS10005_21CS30031.y"
                                                                                     {}
#line 3336 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 201: /* iteration_statement: WHILE W PARANTHESIS_OPEN X change_table M expression PARANTHESIS_CLOSE M loop_statement  */
#line 797 "asgn5_21CS10005_21CS30031.y"
                                                                                                              { // W, X, M and change_table are augmented non-terminals
                        (yyval.statem) = new S(); // new statement
                        convIntToBool((yyvsp[-3].expr));
                        backpatch((yyvsp[0].statem)->nextList, (yyvsp[-4].instr_ind));   // Backpatch to M1
                        backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-1].instr_ind));    // Backpatch to M2
                        (yyval.statem)->nextList = (yyvsp[-3].expr)->falseList;  // Copy false list
                        emit("goto", convIntToStr((yyvsp[-4].instr_ind))); // goto
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3351 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 202: /* iteration_statement: WHILE W PARANTHESIS_OPEN X change_table M expression PARANTHESIS_CLOSE CURLY_BRACKET_OPEN M block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 807 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                          { // W, X, M and change_table are augmented non-terminals
                        (yyval.statem) = new S(); // new statement
                        convIntToBool((yyvsp[-5].expr));
                        backpatch((yyvsp[-1].statem)->nextList, (yyvsp[-6].instr_ind));   // Backpatch to M1
                        backpatch((yyvsp[-5].expr)->trueList, (yyvsp[-2].instr_ind));    // Backpatch to M2
                        (yyval.statem)->nextList = (yyvsp[-5].expr)->falseList;  // Copy false list
                        emit("goto", convIntToStr((yyvsp[-6].instr_ind))); // goto
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3366 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 203: /* iteration_statement: DO D M loop_statement M WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE SEMICOLON  */
#line 817 "asgn5_21CS10005_21CS30031.y"
                                                                                                            {   // D and M are augmented non-terminals
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-2].expr));
                        backpatch((yyvsp[-2].expr)->trueList, (yyvsp[-7].instr_ind));    // Backpatch to D
                        backpatch((yyvsp[-6].statem)->nextList, (yyvsp[-5].instr_ind));    // Backpatch to M
                        (yyval.statem)->nextList = (yyvsp[-2].expr)->falseList;  // Copy false list
                        blockName = "";
                    }
#line 3379 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 204: /* iteration_statement: DO D CURLY_BRACKET_OPEN M block_item_list_opt CURLY_BRACKET_CLOSE M WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE SEMICOLON  */
#line 825 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                        {  // D and M are augmented non-terminals
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-2].expr));
                        backpatch((yyvsp[-2].expr)->trueList, (yyvsp[-8].instr_ind));    // Backpatch to M1
                        backpatch((yyvsp[-7].statem)->nextList, (yyvsp[-5].instr_ind));    // Backpatch to M2
                        (yyval.statem)->nextList = (yyvsp[-2].expr)->falseList;  // Copy false list
                        blockName = "";
                    }
#line 3392 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 205: /* iteration_statement: FOR F PARANTHESIS_OPEN X change_table declaration M expression_statement M expression N PARANTHESIS_CLOSE M loop_statement  */
#line 833 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                 {  // F, X, M, N and change_table are augmented non-terminals
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-6].expr));
                        backpatch((yyvsp[-6].expr)->trueList, (yyvsp[-1].instr_ind)); // Backpatch to M3
                        backpatch((yyvsp[-3].statem)->nextList, (yyvsp[-7].instr_ind)); // Backpatch to M1
                        backpatch((yyvsp[0].statem)->nextList, (yyvsp[-5].instr_ind)); // Backpatch to N
                        emit("goto", convIntToStr((yyvsp[-5].instr_ind))); // goto
                        (yyval.statem)->nextList = (yyvsp[-6].expr)->falseList;  // Copy false list
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3408 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 206: /* iteration_statement: FOR F PARANTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARANTHESIS_CLOSE M loop_statement  */
#line 844 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                          {  // F, X, M, N and change_table are augmented non-terminals
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-6].expr));
                        backpatch((yyvsp[-6].expr)->trueList, (yyvsp[-1].instr_ind)); // Backpatch to M3
                        backpatch((yyvsp[-3].statem)->nextList, (yyvsp[-7].instr_ind)); // Backpatch to M1
                        backpatch((yyvsp[0].statem)->nextList, (yyvsp[-5].instr_ind)); // Backpatch to N
                        emit("goto", convIntToStr((yyvsp[-5].instr_ind))); // goto
                        (yyval.statem)->nextList = (yyvsp[-6].expr)->falseList;  // Copy false list
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3424 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 207: /* iteration_statement: FOR F PARANTHESIS_OPEN X change_table declaration M expression_statement M expression N PARANTHESIS_CLOSE M CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 855 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                                                             {  // F, X, M, N and change_table are augmented non-terminals
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-8].expr));
                        backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-3].instr_ind)); // Backpatch to M3
                        backpatch((yyvsp[-5].statem)->nextList, (yyvsp[-9].instr_ind)); // Backpatch to M1
                        backpatch((yyvsp[-1].statem)->nextList, (yyvsp[-7].instr_ind)); // Backpatch to N
                        emit("goto", convIntToStr((yyvsp[-7].instr_ind))); // goto
                        (yyval.statem)->nextList = (yyvsp[-8].expr)->falseList;  // Copy false list
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3440 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 208: /* iteration_statement: FOR F PARANTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARANTHESIS_CLOSE M CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 866 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                                                                      { // F, X, M, N and change_table are augmented non-terminals
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-8].expr));
                        backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-3].instr_ind)); // Backpatch to M3
                        backpatch((yyvsp[-5].statem)->nextList, (yyvsp[-9].instr_ind)); // Backpatch to M1
                        backpatch((yyvsp[-1].statem)->nextList, (yyvsp[-7].instr_ind)); // Backpatch to N
                        emit("goto", convIntToStr((yyvsp[-7].instr_ind))); // goto
                        (yyval.statem)->nextList = (yyvsp[-8].expr)->falseList;  // Copy false list
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3456 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 209: /* F: %empty  */
#line 880 "asgn5_21CS10005_21CS30031.y"
             { blockName = "FOR"; }
#line 3462 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 210: /* W: %empty  */
#line 882 "asgn5_21CS10005_21CS30031.y"
             { blockName = "WHILE"; }
#line 3468 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 211: /* D: %empty  */
#line 884 "asgn5_21CS10005_21CS30031.y"
             { blockName = "DO"; }
#line 3474 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 212: /* X: %empty  */
#line 886 "asgn5_21CS10005_21CS30031.y"
             { 
        string newSymbolTableName = currentSymbolTable->name + "." + blockName + "$" + to_string(SymbolTableCount++); // Name the new table
        symbol* symbolFound = currentSymbolTable->lookup(newSymbolTableName); // Find the symbol
        symbolFound->nestedTable = new symbolTable(newSymbolTableName); // Create new symbol table
        symbolFound->name = newSymbolTableName; // Update name
        symbolFound->nestedTable->parent = currentSymbolTable; // Update parent
        symbolFound->type = new symbolType("block"); // Update type
        currentSymbol = symbolFound; // Update current symbol
    }
#line 3488 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 213: /* change_table: %empty  */
#line 896 "asgn5_21CS10005_21CS30031.y"
                         {
                    // Switch to new symbol table, if it does not exist, create it
                    if (currentSymbol->nestedTable != NULL) {
                        switchTable(currentSymbol->nestedTable); // Switch to nested table
                        emit("label", currentSymbolTable->name);
                    }
                    else {
                        switchTable(new symbolTable(""));
                    }
                }
#line 3503 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 214: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 908 "asgn5_21CS10005_21CS30031.y"
                                            {}
#line 3509 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 215: /* jump_statement: CONTINUE SEMICOLON  */
#line 909 "asgn5_21CS10005_21CS30031.y"
                                     { (yyval.statem) = new S(); }
#line 3515 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 216: /* jump_statement: BREAK SEMICOLON  */
#line 910 "asgn5_21CS10005_21CS30031.y"
                                  { (yyval.statem) = new S(); }
#line 3521 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 217: /* jump_statement: RETURN expression SEMICOLON  */
#line 911 "asgn5_21CS10005_21CS30031.y"
                                              {
                    (yyval.statem) = new S();
                    emit("return", (yyvsp[-1].expr)->addr->name); // return \$ 2->Array->name
                }
#line 3530 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 218: /* jump_statement: RETURN SEMICOLON  */
#line 915 "asgn5_21CS10005_21CS30031.y"
                                   {
                    (yyval.statem) = new S();
                    emit("return", ""); // return
                }
#line 3539 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 219: /* translation_unit: external_declaration  */
#line 923 "asgn5_21CS10005_21CS30031.y"
                                           {}
#line 3545 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 220: /* translation_unit: translation_unit external_declaration  */
#line 924 "asgn5_21CS10005_21CS30031.y"
                                                            {}
#line 3551 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 221: /* external_declaration: function_definition  */
#line 927 "asgn5_21CS10005_21CS30031.y"
                                              {}
#line 3557 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 222: /* external_declaration: declaration  */
#line 928 "asgn5_21CS10005_21CS30031.y"
                                      {}
#line 3563 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 223: /* function_definition: declaration_specifiers declarator declaration_list_opt change_table CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 931 "asgn5_21CS10005_21CS30031.y"
                                                                                                                                                     {
                        currentSymbolTable->parent = globalSymbolTable;
                        SymbolTableCount = 0;
                        switchTable(globalSymbolTable);  // End of function, switch to global symbol table
                    }
#line 3573 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 224: /* declaration_list_opt: declaration_list  */
#line 938 "asgn5_21CS10005_21CS30031.y"
                                           {}
#line 3579 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 225: /* declaration_list_opt: %empty  */
#line 939 "asgn5_21CS10005_21CS30031.y"
                                 {}
#line 3585 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 226: /* declaration_list: declaration  */
#line 942 "asgn5_21CS10005_21CS30031.y"
                                  {}
#line 3591 "asgn5_21CS10005_21CS30031.tab.c"
    break;

  case 227: /* declaration_list: declaration_list declaration  */
#line 943 "asgn5_21CS10005_21CS30031.y"
                                                   {}
#line 3597 "asgn5_21CS10005_21CS30031.tab.c"
    break;


#line 3601 "asgn5_21CS10005_21CS30031.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 945 "asgn5_21CS10005_21CS30031.y"


// ERROR
void yyerror(string s) {
    cout << "ERROR: " << s << endl;
    cout << "At line: " << yylineno << endl;
    cout << "Near: " << yytext << endl;
}
