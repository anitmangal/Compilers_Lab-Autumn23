/* Declarations */
%{
    #include <stdio.h>
    #define KEYWORD 120
    #define IDENTIFIER 121
    #define CONSTANT_INT 122
    #define CONSTANT_FLOAT 123
    #define CONSTANT_CHAR 124
    #define LITERAL 125
    #define PUNCTUATOR 126
    #define SL_COMM_START 127
    #define SL_COMM_END 128
    #define ML_COMM_START 129
    #define ML_COMM_END 130
%}

%x SINGLE_LINE_COMM
%x MULTI_LINE_COMM

/* Regular Expressions */
KEYWORD         "auto"|"enum"|"restrict"|"unsigned"|"break"|"extern"|"return"|"void"|"case"|"float"|"short"|"volatile"|"char"|"for"|"signed"|"while"|"const"|"goto"|"sizeof"|"_Bool"|"continue"|"if"|"static"|"_Complex"|"default"|"inline"|"struct"|"_Imaginary"|"do"|"int"|"switch"|"double"|"long"|"typedef"|"else"|"register"|"union"

ID_NONDIGIT     [a-zA-Z_]
DIGIT           [0-9]
IDENTIFIER      {ID_NONDIGIT}({ID_NONDIGIT}|{DIGIT})*

DIG_NONZERO     [1-9]
CONSTANT_INT    0|{DIG_NONZERO}{DIGIT}*
DIG_SEQ         {DIGIT}+
CONSTANT_FRAC   {DIG_SEQ}?\.{DIG_SEQ}|{DIG_SEQ}\.
SIGN            [+-]
EXPO            [eE]{SIGN}?{DIG_SEQ}
CONSTANT_FLOAT  {CONSTANT_FRAC}{EXPO}?|{DIG_SEQ}{EXPO}
CONSTANT_ENUM   {IDENTIFIER}
ESCAPE_SEQ      \\['"?\\abfnrtv]
C_CHAR          [^'\\\n]|{ESCAPE_SEQ}
C_CHAR_SEQ      {C_CHAR}+
CONSTANT_CHAR   \'{C_CHAR_SEQ}\'
CONSTANT        {CONSTANT_INT}|{CONSTANT_FLOAT}|{CONSTANT_ENUM}|{CONSTANT_CHAR}

S_CHAR          [^"\\\n]|{ESCAPE_SEQ}
S_CHAR_SEQ      {S_CHAR}+
LITERAL         \"{S_CHAR_SEQ}?\"

PUNCTUATOR     "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

/* Whitespace recognition */
WHITE_SPACE     [ \t\n]

/* Definitions */
%%
{KEYWORD}                   {return KEYWORD;}
{IDENTIFIER}                {return IDENTIFIER;}
{PUNCTUATOR}                {return PUNCTUATOR;}
{CONSTANT_INT}              {return CONSTANT_INT;}
{CONSTANT_FLOAT}            {return CONSTANT_FLOAT;}
{CONSTANT_CHAR}             {return CONSTANT_CHAR;}
{LITERAL}                   {return LITERAL;}
{WHITE_SPACE}                        {}

"//"                        {BEGIN(SINGLE_LINE_COMM); return SL_COMM_START;}
<SINGLE_LINE_COMM>.         {}
<SINGLE_LINE_COMM>\n        {BEGIN(INITIAL); return SL_COMM_END;}
<SINGLE_LINE_COMM><<EOF>>   {BEGIN(INITIAL); return SL_COMM_END;}

"/*"                        {BEGIN(MULTI_LINE_COMM); return ML_COMM_START;}
<MULTI_LINE_COMM>"*/"       {BEGIN(INITIAL); return ML_COMM_END;}
<MULTI_LINE_COMM>.          {}
<MULTI_LINE_COMM>\n         {}
%%

