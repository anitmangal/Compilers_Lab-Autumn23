/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ASGN5_21CS10005_21CS30031_TAB_H_INCLUDED
# define YY_YY_ASGN5_21CS10005_21CS30031_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    ENUM = 259,                    /* ENUM  */
    RESTRICT = 260,                /* RESTRICT  */
    UNSIGNED = 261,                /* UNSIGNED  */
    BREAK = 262,                   /* BREAK  */
    EXTERN = 263,                  /* EXTERN  */
    RETURN = 264,                  /* RETURN  */
    VOID = 265,                    /* VOID  */
    CASE = 266,                    /* CASE  */
    FLOAT = 267,                   /* FLOAT  */
    SHORT = 268,                   /* SHORT  */
    VOLATILE = 269,                /* VOLATILE  */
    CHAR = 270,                    /* CHAR  */
    FOR = 271,                     /* FOR  */
    SIGNED = 272,                  /* SIGNED  */
    WHILE = 273,                   /* WHILE  */
    CONST = 274,                   /* CONST  */
    GOTO = 275,                    /* GOTO  */
    SIZEOF = 276,                  /* SIZEOF  */
    BOOL = 277,                    /* BOOL  */
    CONTINUE = 278,                /* CONTINUE  */
    IF = 279,                      /* IF  */
    STATIC = 280,                  /* STATIC  */
    COMPLEX = 281,                 /* COMPLEX  */
    DEFAULT = 282,                 /* DEFAULT  */
    INLINE = 283,                  /* INLINE  */
    STRUCT = 284,                  /* STRUCT  */
    IMAGINARY = 285,               /* IMAGINARY  */
    DO = 286,                      /* DO  */
    INT = 287,                     /* INT  */
    SWITCH = 288,                  /* SWITCH  */
    DOUBLE = 289,                  /* DOUBLE  */
    LONG = 290,                    /* LONG  */
    TYPEDEF = 291,                 /* TYPEDEF  */
    ELSE = 292,                    /* ELSE  */
    REGISTER = 293,                /* REGISTER  */
    UNION = 294,                   /* UNION  */
    INVALID_TOKEN = 295,           /* INVALID_TOKEN  */
    PARANTHESIS_OPEN = 296,        /* PARANTHESIS_OPEN  */
    PARANTHESIS_CLOSE = 297,       /* PARANTHESIS_CLOSE  */
    SQ_BRACKET_OPEN = 298,         /* SQ_BRACKET_OPEN  */
    SQ_BRACKET_CLOSE = 299,        /* SQ_BRACKET_CLOSE  */
    CURLY_BRACKET_OPEN = 300,      /* CURLY_BRACKET_OPEN  */
    CURLY_BRACKET_CLOSE = 301,     /* CURLY_BRACKET_CLOSE  */
    PERIOD = 302,                  /* PERIOD  */
    ARROW = 303,                   /* ARROW  */
    INCREMENT = 304,               /* INCREMENT  */
    DECREMENT = 305,               /* DECREMENT  */
    AMPERSAND = 306,               /* AMPERSAND  */
    ASTERISK = 307,                /* ASTERISK  */
    PLUS = 308,                    /* PLUS  */
    MINUS = 309,                   /* MINUS  */
    TILDE = 310,                   /* TILDE  */
    EXCLAMATION = 311,             /* EXCLAMATION  */
    SLASH = 312,                   /* SLASH  */
    PERCENT = 313,                 /* PERCENT  */
    LEFT_SHIFT = 314,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 315,             /* RIGHT_SHIFT  */
    LESS_THAN = 316,               /* LESS_THAN  */
    GREATER_THAN = 317,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 318,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 319,      /* GREATER_THAN_EQUAL  */
    EQUAL = 320,                   /* EQUAL  */
    NOT_EQUAL = 321,               /* NOT_EQUAL  */
    CARET = 322,                   /* CARET  */
    PIPE = 323,                    /* PIPE  */
    LOGICAL_AND = 324,             /* LOGICAL_AND  */
    LOGICAL_OR = 325,              /* LOGICAL_OR  */
    QUESTION = 326,                /* QUESTION  */
    COLON = 327,                   /* COLON  */
    SEMICOLON = 328,               /* SEMICOLON  */
    ELLIPSIS = 329,                /* ELLIPSIS  */
    ASSIGN = 330,                  /* ASSIGN  */
    MULTIPLY_ASSIGN = 331,         /* MULTIPLY_ASSIGN  */
    DIVIDE_ASSIGN = 332,           /* DIVIDE_ASSIGN  */
    MOD_ASSIGN = 333,              /* MOD_ASSIGN  */
    PLUS_ASSIGN = 334,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 335,            /* MINUS_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 336,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 337,      /* RIGHT_SHIFT_ASSIGN  */
    AND_ASSIGN = 338,              /* AND_ASSIGN  */
    ADD_ASSIGN = 339,              /* ADD_ASSIGN  */
    XOR_ASSIGN = 340,              /* XOR_ASSIGN  */
    OR_ASSIGN = 341,               /* OR_ASSIGN  */
    COMMA = 342,                   /* COMMA  */
    HASH = 343,                    /* HASH  */
    IDENTIFIER = 344,              /* IDENTIFIER  */
    CONSTANT_INT = 345,            /* CONSTANT_INT  */
    CONSTANT_FLOAT = 346,          /* CONSTANT_FLOAT  */
    CONSTANT_CHAR = 347,           /* CONSTANT_CHAR  */
    LITERAL = 348,                 /* LITERAL  */
    THEN = 349                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "asgn5_21CS10005_21CS30031.y"

    int iValue;     // Integer value
    char *sValue;   // String value
    symbol *symb;       // Symbol
    symbolType *symbType;   // Symbol type
    E *expr;   // Expression
    S *statem;  // Statement
    A *arr; // Array
    int instr_ind;  // Keep track of instruction number
    char unary_op;  // Unary operator
    int param_count;   // Parameter count for functions

#line 171 "asgn5_21CS10005_21CS30031.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASGN5_21CS10005_21CS30031_TAB_H_INCLUDED  */
