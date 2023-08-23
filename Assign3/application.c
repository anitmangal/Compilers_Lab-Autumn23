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

extern int yylex();
extern char* yytext;


int main() {
    int ntoken;
    while(ntoken = yylex()) {
        switch(ntoken) {
            case KEYWORD: 
                printf("<KEYWORD, %d, %s>\n", token, yytext); 
                break;
            case IDENTIFIER: 
                printf("<IDENTIFIER, %d, %s>\n", token, yytext); 
                break;
            case CONSTANT_INT: 
                printf("<CONSTANT_INT, %d, %s>\n", token, yytext); 
                break;
            case CONSTANT_FLOAT: 
                printf("<CONSTANT_FLOAT, %d, %s>\n", token, yytext); 
                break;
            case CONSTANT_CHAR: 
                printf("<CONSTANT_CHAR, %d, %s>\n", token, yytext); 
                break;
            case LITERAL: 
                printf("<LITERAL, %d, %s>\n", token, yytext); 
                break;
            case PUNCTUATOR: 
                printf("<PUNCTUATOR, %d, %s>\n", token, yytext); 
                break;
            case ML_COMM_END: 
                printf("<MULTI_LINE_COMMENT, %d>\n", token);  
                break;
            case SL_COMM_END: 
                printf("<SINGLE_LINE_COMMENT, %d>\n", token); 
                break;
            default:
                printf("<INVALID_TOKEN, %d, %s>\n", token, yytext);
                break;
        }
    }
    return 0;
}
