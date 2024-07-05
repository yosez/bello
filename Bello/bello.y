%{
    //#pragma once
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "dftn.h"
    #include "vrb.h"
    #include "cnst.h"
    #ifndef EXP_H
    #define EXP_H
    #endif
    #ifndef STMT_H
    #define STMT_H
    #endif
    // #ifndef ARR_H
    // #define ARR_H
    // #endif
    #include "arr.h"
    #include "exp.h"
    #include "stmt.h"
    #include "fcn.h"
    #include "envr.h"
    #include "err.h"
    #ifndef LEX_YY_C
    #define LEX_YY_C
    #endif
    #include "ntv.h"


    extern char* yytext;

    extern int yylex();

    void yyerror(const char *s,...)
    {
        printf("Syntax error.\n");
        
    }

    //#define YYERROR_VERBOSE 1

%}

%union
{
    int blnVl;
    int intVl;
    float fltVl;
    char *strVl;

    struct VrbStrc *vrb;
    struct ExpStrc *exp;
    struct StmtStrc *stmt;
    struct FcnStrc *fcn;
    struct PrmLstStrc *prmLst;
    struct ArgLstStrc *argLst;
    struct VrbLstStrc *vrbLst;
    struct AsgnLstStrc *asgnLst;
    struct ElmtLstStrc *elmtLst;
    struct PstnLstStrc *pstnLst;
    struct AcsLstStrc *evlLst;

    char *idtf;
    //string idtf;
}

%token <intVl> INT_VALUE
%token <blnVl> BOOLEAN_VALUE
%token <fltVl> FLOAT_VALUE
%token <strVl> STRING_VALUE
%token NULL_VALUE
%token ARRAY_VALUE
%token <idtf> IDENTIFER
%token ASSIGN
%token VAR
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token PRINT PRINTLN
%token LEFT_PAREN RIGHT_PAREN
%token LEFT_QUAD RIGHT_QUAD
%token LEFT_BRACE RIGHT_BRACE
%token SEMICOLON COMMA COLON
%token ADD SUB MUL DIV MOD
%token EQ NE GT GE LT LE
%token AND OR NOT
%token BIT_AND BIT_OR BIT_XOR BIT_NOT
%token INCREMENT DECREMENT
%token IF ELSE FOR WHILE DO CONTINUE BREAK
%token FUNC RETURN
%token READ_INT READ_FLOAT READ READ_BOOL READ_LINE
%token NEW_ARRAY

%type <exp> expression value_expression function_expression  array_expression
    new_array_expression assign_expression unary_expression binary_expression 
    lvalue_operation_expression self_operation_expression lvalue_expression
    //local_assign_expression
%type <stmt> single_statement expression_statement 
    statement_block block_list null_statement var_statement
%type <stmt> if_statement structure_statement for_statement single_statement_no_semicolon while_statement 
    do_while_statement break_statement continue_statement return_statement 
%type <stmt> function_define_statement
%type <prmLst> parameter_list 
%type <argLst> argument_list
%type <asgnLst> assign_list
%type <elmtLst> element_list
%type <evlLst> evaluate_list

%nonassoc VAR 

%left COMMA

%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN

%left OR
%left AND

%left BIT_OR
%left BIT_XOR
%left BIT_AND

%left EQ NE GT GE LT LE

%left ADD SUB
%left MUL DIV MOD

%right BIT_NOT NOT MINUS_SIGN PLUS_SIGN

%left INCREMENT DECREMENT READ_INT READ_FLOAT READ READ_BOOL READ_LINE


%%

statement
    : single_statement execute_statement statement 
    | statement_block execute_statement statement 
    | error { yyerrok; }
    | //需要加上识别空语句，以处理输入结束的情况

execute_statement
    : 
    { 
        //printf("statement type: %d\n",$<stmt>0->typ); 
        exctStmt(glbEnvr, glbEnvr, $<stmt>0); 
    }
    //| error { yyerrok; }

single_statement
    : expression_statement SEMICOLON { $$=$1; }
    | if_statement { $$=$1; }
    | for_statement { $$=$1; }
    | while_statement { $$=$1; }
    | do_while_statement { $$=$1; }
    | break_statement SEMICOLON{ $$=$1; }
    | continue_statement SEMICOLON { $$=$1; }
    | return_statement SEMICOLON { $$=$1; }
    | function_define_statement { $$=$1; }
    | null_statement SEMICOLON { $$=$1; }
    | var_statement SEMICOLON { $$ = $1; }
    | error 
    { 
        //system("pause");  
        $$=bldNllStmt(); 
        //printf("statement error. %d : %s\n", $$->typ, yytext); 
        yyclearin; 
        yyerrok; 
    }



single_statement_no_semicolon
    : expression_statement
    | if_statement
    | for_statement
    | while_statement
    | do_while_statement
    | null_statement


null_statement
    : { $$=bldNllStmt(); }

statement_block
    : LEFT_BRACE block_list RIGHT_BRACE { $$=$2; }
    | LEFT_BRACE RIGHT_BRACE { $$=bldNllStmt(); }

block_list
    : single_statement 
    { 
        $$=bldStmtBlk(); 
        stmtBlkAdd($$, $1); 
    }
    | block_list single_statement 
    {
        $$ = stmtBlkAdd($1 ,$2);
    }


expression_statement
    : expression 
    { 
        $$=bldExpStmt($1); 
    }

expression
    : value_expression 
    | lvalue_operation_expression
    | unary_expression { $$=$1; }
    | binary_expression { $$=$1; }
    | array_expression { $$=$1; }
    | new_array_expression { $$ = $1; }

lvalue_operation_expression
    : assign_expression
    | self_operation_expression

assign_expression
    : lvalue_expression ASSIGN expression { $$=bldAsgnExp($1, $3); }
    | lvalue_expression ADD_ASSIGN expression { $$=bldAsgnExp($1, bldBnrExp(ADD, $1, $3)); }
    | lvalue_expression SUB_ASSIGN expression { $$=bldAsgnExp($1, bldBnrExp(SUB, $1, $3)); }
    | lvalue_expression MUL_ASSIGN expression { $$=bldAsgnExp($1, bldBnrExp(MUL, $1, $3)); }
    | lvalue_expression DIV_ASSIGN expression { $$=bldAsgnExp($1, bldBnrExp(DIV, $1, $3)); }
    | lvalue_expression MOD_ASSIGN expression { $$=bldAsgnExp($1, bldBnrExp(MOD, $1, $3)); }


self_operation_expression 
    : INCREMENT lvalue_expression { $$=bldUnrExp(PREFIX_INCREMENT, $2); }
    | DECREMENT lvalue_expression { $$=bldUnrExp(PREFIX_DECREMENT, $2); }
    | lvalue_expression INCREMENT { $$=bldUnrExp(SUFFIX_INCREMENT, $1); }
    | lvalue_expression DECREMENT { $$=bldUnrExp(SUFFIX_DECREMENT, $1); }

unary_expression
    : SUB expression %prec MINUS_SIGN { $$ = bldUnrExp(SUB, $2); }
    | ADD expression %prec PLUS_SIGN { $$ = bldUnrExp(ADD, $2); }
    | LEFT_PAREN expression RIGHT_PAREN { $$=$2; }
    | NOT expression { $$=bldUnrExp(NOT, $2); }
    | BIT_NOT expression { $$=bldUnrExp(BIT_NOT, $2); }

binary_expression
    : expression ADD expression { $$=bldBnrExp(ADD, $1, $3); }
    | expression SUB expression { $$=bldBnrExp(SUB, $1, $3); }
    | expression MUL expression { $$=bldBnrExp(MUL, $1, $3); }
    | expression DIV expression { $$=bldBnrExp(DIV, $1, $3); }
    | expression MOD expression { $$=bldBnrExp(MOD, $1, $3); }
    | expression AND expression { $$=bldBnrExp(AND, $1, $3); }
    | expression OR expression { $$=bldBnrExp(OR, $1, $3); }
    | expression EQ expression { $$=bldBnrExp(EQ, $1, $3); }
    | expression NE expression { $$=bldBnrExp(NE, $1, $3); }
    | expression GT expression { $$=bldBnrExp(GT, $1, $3); }
    | expression GE expression { $$=bldBnrExp(GE, $1, $3); }
    | expression LT expression { $$=bldBnrExp(LT, $1, $3); }
    | expression LE expression { $$=bldBnrExp(LE, $1, $3); }
    | expression BIT_AND expression { $$=bldBnrExp(BIT_AND, $1, $3); }
    | expression BIT_OR expression { $$=bldBnrExp(BIT_OR, $1, $3); }
    | expression BIT_XOR expression { $$=bldBnrExp(BIT_XOR, $1, $3); }


value_expression
    : INT_VALUE { $$=bldCnstIntExp($1); /*printf("Get data: %d\n",$1);*/ }
    | FLOAT_VALUE { $$=bldCnstFltExp($1); }
    | BOOLEAN_VALUE { $$=bldCnstBlnExp($1); }
    | STRING_VALUE { $$=bldCnstStrExp($1); } 
    | NULL_VALUE { $$=bldCnstNllExp(); }
    | function_expression
    | lvalue_expression 

lvalue_expression
    : IDENTIFER { $$= bldLvlExp(bldVrbExp($1)); }
    | lvalue_expression evaluate_list 
    { 
        $$=$1; 
        bldLvlExpAdd($1, $2); 
    }
    

array_expression
    : LEFT_QUAD element_list RIGHT_QUAD
    {
        $$= bldArrExp($2);
    }
    | LEFT_QUAD RIGHT_QUAD
    {
        $$= bldArrExp(bldElmtLst());
    }

new_array_expression
    : NEW_ARRAY LEFT_PAREN expression RIGHT_PAREN
    {
        $$ = bldNewArrExp($3);
    }

element_list
    : expression
    { 
        $$= bldElmtLst(); 
        elmtLstAdd($$, $1); 
    }
    | element_list COMMA expression
    {  
        $$=$1;  
        elmtLstAdd($$, $3); 
    }


var_statement
    : VAR assign_list { $$=bldVarStmt($2); }


assign_list
    : IDENTIFER 
    {
        $$= bldAsgnLst();
        asgnLstAdd($$, bldVrbExp($1), bldNllExp());
    }
    | IDENTIFER ASSIGN expression
    {
        $$= bldAsgnLst();
        asgnLstAdd($$, bldVrbExp($1), $3);
    }
    | assign_list COMMA IDENTIFER 
    {
        $$=$1;
        asgnLstAdd($$, bldVrbExp($3), bldNllExp());
    }
    | assign_list COMMA IDENTIFER ASSIGN expression
    {
        $$=$1;
        asgnLstAdd($$, bldVrbExp($3), $5);
    }


    


function_expression
    : IDENTIFER LEFT_PAREN argument_list RIGHT_PAREN 
    {
        $$=bldFcnExp($1, $3);
    } 
    | IDENTIFER LEFT_PAREN RIGHT_PAREN
    {
        $$=bldFcnExp($1, bldArgLst());
    }

argument_list
    : expression 
    {
        $$=bldArgLst();
        argLstAdd($$, $1);
    }
    | argument_list COMMA expression
    {
        $$=$1;
        argLstAdd($$, $3);
    }


evaluate_list
    : LEFT_QUAD expression RIGHT_QUAD
    {
        $$ = bldAcsLst();
        acsLstIdxAdd($$, $2);
    }
    | LEFT_QUAD expression COLON expression RIGHT_QUAD  //[i:j]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, $4, bldCnstIntExp(1));
    }
    | LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  //[i:j:]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, $4, bldCnstIntExp(1));
    }
    | LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD //[i:j:k]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, $4, $6);
    }
    | LEFT_QUAD expression COLON RIGHT_QUAD       //[i:]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    | LEFT_QUAD expression COLON COLON RIGHT_QUAD       //[i::]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    | LEFT_QUAD expression COLON COLON expression RIGHT_QUAD        //[i::k]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, bldCnstIntExp(-1), $5);
    }
    | LEFT_QUAD COLON expression RIGHT_QUAD       //[:j]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldCnstIntExp(0), $3, bldCnstIntExp(1));
    }
    | LEFT_QUAD COLON expression COLON RIGHT_QUAD       //[:j:]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldCnstIntExp(0), $3, bldCnstIntExp(1));
    }
    | LEFT_QUAD COLON expression COLON expression RIGHT_QUAD        //[:j:k]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldCnstIntExp(0), $3, $5);
    }
    | LEFT_QUAD COLON COLON RIGHT_QUAD      //[::]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD expression RIGHT_QUAD
    {
        $$=$1;
        acsLstIdxAdd($$,$3);
    }
    | evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  //[i:j]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, $5, bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  //[i:j:]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, $5, bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD //[i:j:k]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, $5, $7);
    }
    | evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD       //[i:]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD       //[i::]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, bldCnstIntExp(-1), bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD        //[i::k]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, bldCnstIntExp(-1), $6);
    }
    | evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD       //[:j]
    {
        $$=$1;
        acsLstSlcAdd($$, bldCnstIntExp(0), $4, bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD       //[:j:]
    {
        $$=$1;
        acsLstSlcAdd($$, bldCnstIntExp(0), $4, bldCnstIntExp(1));
    }
    | evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD        //[:j:k]
    {
        $$=$1;
        acsLstSlcAdd($$, bldCnstIntExp(0), $4, $6);
    }
    | evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD      //[::]
    {
        $$=$1;
        acsLstSlcAdd($$, bldCnstIntExp(0), bldCnstIntExp(-1), bldCnstIntExp(1));
    }


/* print_statement
    : PRINT LEFT_PAREN expression RIGHT_PAREN  
    {
        $$=bldPrtStmt(PRINT, $3);
    }
    | PRINTLN LEFT_PAREN expression RIGHT_PAREN
    {
        $$=bldPrtStmt(PRINTLN, $3);
    } */

if_statement
    : IF LEFT_PAREN expression RIGHT_PAREN structure_statement 
    {
        $$=bldIfStmt($3,$5);
    }
    | IF LEFT_PAREN expression RIGHT_PAREN structure_statement ELSE structure_statement 
    {
        $$=bldIfElsStmt($3, $5, $7);
    }

for_statement
    : FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN structure_statement
    {
        $$= bldForStmt($3, $5, $7, $9);  
    }

while_statement
    : WHILE LEFT_PAREN expression_statement RIGHT_PAREN structure_statement
    {
        $$= bldWhlStmt($3, $5);
    }

do_while_statement
    : DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON
    {
        $$= bldDoWhlStmt($5, $2);
    }

break_statement
    : BREAK { $$= bldBrkStmt(bldCnstIntExp(1)); }
    | BREAK LEFT_PAREN expression RIGHT_PAREN { $$= bldBrkStmt($3); }

continue_statement
    : CONTINUE { $$= bldCntnStmt(bldCnstIntExp(1)); }
    | CONTINUE LEFT_PAREN expression RIGHT_PAREN { $$= bldCntnStmt($3); }

structure_statement  
    : single_statement 
    | statement_block

function_define_statement
    : FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN statement_block
    {
        struct FcnStrc* fcn;

        fcn=bldFcn($2, $4, $6);

        $$ = bldFcnStmt(fcn);
    }
    | FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN statement_block
    {
        struct FcnStrc *fcn;

        fcn=bldFcn($2, bldPrmLst(), $5);

        $$ = bldFcnStmt(fcn);
    }
    | FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN single_statement
    {
        struct FcnStrc* fcn;

        fcn=bldFcn($2, $4, $6);

        $$ = bldFcnStmt(fcn);
    }
    | FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN single_statement
    {
        struct FcnStrc *fcn;

        fcn=bldFcn($2, bldPrmLst(), $5);

        $$ = bldFcnStmt(fcn);
    }


parameter_list
    : IDENTIFER 
    {
        $$ = bldPrmLst();
        prmLstAdd($$, bldVrbExp($1));
    }
    | parameter_list COMMA IDENTIFER 
    { 
        $$=$1;  
        prmLstAdd($$, bldVrbExp($3));
    }

return_statement
    : RETURN { $$=bldRtnStmt(NULL); } 
    | RETURN expression { $$=bldRtnStmt($2); }


%%

int main(int argc, char * argv[])
{

    //创建全局环境

    intlGlbEnvr(&glbEnvr);

    //可以提供代码文件供读取

    FILE *f;

    extern FILE* yyin;

    if (argc==2)
    {
        f= fopen(argv[1],"r");
        yyin= f;
    }

    yyparse();
}


