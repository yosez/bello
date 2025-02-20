%option noyywrap
%option nodefault

%{ 

    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include "y.tab.h"
    // #ifndef Y_TAB_C
    // #define Y_TAB_C
    // #endif
    #ifndef DFTN_H
    #define DFTN_H
    #endif

    using namespace std;

    extern void yyerror(const char *s,...);
    
    char *str;
    int strSz=0x100;

    int strtStr()
    {
        strSz=10;

        str=(char *)malloc(strSz);
        memset(str,0,sizeof(str));

        return 0;
    }

    int strAdd(const char* chr)
    {
        int lnth;

        if (strlen(str)==strSz-1)
        {
            strSz*=2;
            str=(char *)realloc(str,strSz);
        }

        strcat(str,chr);

        return 0;
    }

    int lstStt=0,stt=0;

%}

%x STRING COMMENT COMMENT_2 

%%


^[ \r\t]*\n                 { return NULL_STRING; }
^[ \r\t]*"//".*\n           { }
<<EOF>>                     { return END_FILE; }
"\t"+                       { 
                                yylval.intVl = strlen(yytext); 
                                //printf("yytext \\t: |%s|\n", yytext);
                                return INDENT; 
                            }
([ ]{4})+                   { 
                                yylval.intVl = strlen(yytext)/4;
                                //printf("yytext [ ]: |%s|\n", yytext);
                                return INDENT;
                            }
"\n"                        { return LF; }
"+="                        { return ADD_ASSIGN; }
"-="                        { return SUB_ASSIGN; }
"*="                        { return MUL_ASSIGN; }
"/="                        { return DIV_ASSIGN; }
"%="                        { return MOD_ASSIGN; }
"++"                        { return INCREMENT; }
"--"                        { return DECREMENT; }
"+"                         { return ADD; }
"-"                         { return SUB; }
"*"                         { return MUL; }
"/"                         { return DIV; }
"%"                         { return MOD; }
">="                        { return GE; }
">"                         { return GT; }
"<="                        { return LE; }
"<"                         { return LT; }
"=="                        { return EQ; }
"!="                        { return NE; }
"&&"                        { return AND; }
"||"                        { return OR; }
"&"                         { return BIT_AND; }
"|"                         { return BIT_OR; }
"^"                         { return BIT_XOR; }
"~"                         { return BIT_NOT; }
"!"                         { return NOT; }
"."                         { return DOT; }
"nop"                       { return NOP; }
"new"                       { return NEW; }
"var"                       { return VAR; }
"global"                    { return GLOBAL; }
"if"                        { return IF; }
"elseif"                    { return ELSEIF; }
"else"                      { return ELSE; }
"for"                       { return FOR; }
"do"                        { return DO; }
"while"                     { return WHILE; }
"break"                     { return BREAK; }
"continue"                  { return CONTINUE; }
"class"                     { return CLASS; }
"function"                  { return FUNC; }
"return"                    { return RETURN; }
"null"                      { return NULL_VALUE; }
"class"                     { return CLASS; }
"func"                      { return FUNC; }
"shared"                    { return SHARED; }
"this"                      { return THIS; }
[0-9]{1,8}                  { yylval.intVl=atoi(yytext); return INT_VALUE; }
[0-9]{1,8}\.[0-9]{1,8}      { yylval.fltVl= (float)atof(yytext); return FLOAT_VALUE; }
"true"                      { yylval.blnVl=1; return BOOLEAN_VALUE; }
"false"                     { yylval.blnVl=0; return BOOLEAN_VALUE; }
"//"                        { stt=YY_START; BEGIN COMMENT; }
<COMMENT>\n                 { BEGIN stt; }  
<COMMENT>.                  {}
"/*"                        { stt=YY_START; BEGIN COMMENT_2; }
<COMMENT_2>"*/"             { BEGIN stt; }
<COMMENT_2>(.|[\n])         {}
"\""                        { strtStr(); stt=YY_START; BEGIN STRING; }
<STRING>[^\x00-\x7F]+       { strAdd(yytext); }
<STRING>[^\\\"\r\n\t\v\b\f] { strAdd(yytext); }
<STRING>"\\n"               { strAdd("\n"); }
<STRING>"\\r"               { strAdd("\r"); }
<STRING>"\\t"               { strAdd("\t"); }
<STRING>"\\v"               { strAdd("\v"); }
<STRING>"\\b"               { strAdd("\b"); }
<STRING>"\\f"               { strAdd("\f"); }
<STRING>"\\\""              { strAdd("\""); }
<STRING>"\\\\"              { strAdd("\\"); }
<STRING>"\""                { BEGIN stt; yylval.strVl=str; return STRING_VALUE; }
<STRING>[\r\n]              { BEGIN stt; yyerror(NULL); }
[a-zA-Z][a-zA-Z0-9]*       { 
                                yylval.idtf=(char *)malloc(0x100);
                                memset(yylval.idtf,0,sizeof(yylval.idtf));
                                strcpy(yylval.idtf, yytext);
                                //yylval.idtf = string(yytext);
                                
                                return IDENTIFER; 
                            }
"("                         { return LEFT_PAREN; }
")"                         { return RIGHT_PAREN; }
"["                         { return LEFT_QUAD; }
"]"                         { return RIGHT_QUAD; }
"{"                         { return LEFT_BRACE; }
"}"                         { return RIGHT_BRACE; } 
"="                         { return ASSIGN; }
","                         { return COMMA; }
";"                         { return SEMICOLON; }
":"                         { return COLON; }
[ \t\r\n]                   {}


%%
