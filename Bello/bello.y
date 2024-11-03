%{
    //#pragma once
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    //#include "dftn.h"
    #ifndef DFTN_H
    #define DFTN_H
    #endif
    #include "vrb.h"
    #include "cnst.h"
    #ifndef EXP_H
    #define EXP_H
    #endif
    #ifndef STMT_H
    #define STMT_H
    #endif
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

    extern int lstIndt;

    extern struct StmtStkItemStrc;

    extern std::vector<StmtStkItmStrc*> stmtStk;

    extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);

    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

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

%token LF
%token NOP
%token <intVl> INDENT
%token <intVl> INT_VALUE
%token <blnVl> BOOLEAN_VALUE
%token <fltVl> FLOAT_VALUE
%token <strVl> STRING_VALUE
%token NULL_VALUE
%token ARRAY_VALUE
%token <idtf> IDENTIFER
%token ASSIGN
%token VAR GLOBAL
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%token PRINT PRINTLN
%token LEFT_PAREN RIGHT_PAREN
%token LEFT_QUAD RIGHT_QUAD
%token LEFT_BRACE RIGHT_BRACE
%token SEMICOLON_OPTIONAL
%token SEMICOLON COMMA COLON
%token ADD SUB MUL DIV MOD
%token EQ NE GT GE LT LE
%token AND OR NOT
%token BIT_AND BIT_OR BIT_XOR BIT_NOT
%token INCREMENT DECREMENT
%token IF ELSE FOR WHILE DO CONTINUE BREAK
%token FUNC RETURN
%token NEW_ARRAY

%type <exp> expression value_expression function_expression  array_expression
    new_array_expression assign_expression unary_expression binary_expression 
    lvalue_operation_expression self_operation_expression lvalue_expression
    //local_assign_expression
%type <stmt> single_statement expression_statement 
    statement_block block_list null_statement var_statement global_statement
%type <stmt> if_statement else_statement structure_statement for_statement single_statement_no_semicolon while_statement 
    do_while_statement break_statement continue_statement return_statement nop_statement
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
    : statement close_execute_last_statement {$<intVl>$ = 0; } single_statement LF check_indent build_statement execute_statement //执行顶层语句
    | statement INDENT single_statement LF check_indent build_statement
    | statement LF close_execute_statement 
    | error { yyerrok; }
    | close_execute_last_statement ; //需要加上识别空语句，以处理输入结束的情况

check_indent
    : { 
        if (($<intVl>-2)>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }

build_statement
    : 
    {   
        int indt = $<intVl>-3;
        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈

        //printf("indt: %d lstIndt: %d\n",indt, lstIndt);
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                StmtStkItmStrc * sktItm = new StmtStkItmStrc;

                sktItm->indt = indt;
                sktItm->stmt = $<stmt>-2;
                sktItm->alwSubStmt = chkStmtAlwSubStmt($<stmt>-2);

                stmtStk.push_back(sktItm);

                //printf("--->>>stmt in stk: %d\n", stmtStk.size());
            }
            else
            {
                yyerrok;
            }
        }
        else if (indt == lstIndt)
        {
            //语句入栈
            StmtStkItmStrc * sktItm = new StmtStkItmStrc;

            sktItm->indt = indt;
            sktItm->stmt = $<stmt>-2;
            sktItm->alwSubStmt = chkStmtAlwSubStmt($<stmt>-2);

            stmtStk.push_back(sktItm);

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            while (stmtStk.back()->indt > nowIndt)
            {
                // 找到当前语句未入栈时，上1个子语句的主语句在语句栈中的序号
                idx = stmtStk.size()-1;
                while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                {
                    idx--;
                }

                int i = idx;

                StmtStrc* blk = bldStmtBlk();

                // 将子语句添加到语句块中
                while (i < stmtStk.size())
                {

                    //blk->stmt.stmtBlk->stmtArr.back()->stmt.ifStmt->els = stmtStk.at(i)->stmt;

                    stmtBlkAdd(blk, stmtStk.at(i)->stmt);
                    i++;
                }

                //子语句出栈
                int nbrPop = stmtStk.size() - idx;

                for (i=0;i<nbrPop;i++)
                {
                    stmtStk.pop_back();
                }

                //将语句体附加到上1级语句中

                switch(stmtStk.back()->stmt->typ)
                {
                    case IF_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                        break;
                    }
                    case WHILE_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                        break;
                    }
                    case FOR_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                        break;
                    }
                    case FUNCTION_DEFINE_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                        break;
                    }
                    case ELSE_STATEMENT:
                    {
                        stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                        //如果闭合的语句是else语句，则将其添加到其上的if语句中
                        StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;
                        stmtStk.pop_back();

                        stmtStk.back()->stmt->stmt.ifStmt->els = els;

                        break;
                    }
                }

            }

            //如果当前输入的语句是else语句，检查同级缩进的上1个语句是不是if语句

            if (($<stmt>-2)->typ == ELSE_STATEMENT)
            {
                if (stmtStk.back()->stmt->typ == IF_STATEMENT)
                {
                    
                }
                else
                {
                    yyclearin;
                    yyerrok;
                }

            }

            //输入的句子入栈

            StmtStkItmStrc* itm =new StmtStkItmStrc;
            itm->indt = nowIndt;
            itm->stmt = $<stmt>-2;
            itm->alwSubStmt = chkStmtAlwSubStmt($<stmt>-2);

            stmtStk.push_back(itm);
        }

        lstIndt = indt;
    }

close_execute_statement
    : 
    { 
        //如果是从源代码输入，则不执行此动作
        if (prsStt==2)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {

            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                yyclearin;
                yyerrok;
                
            }

            //如果上1条语句为顶级语句且不允许子语句，则无动作
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            {
                
            }

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt > 0)
            {
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                while (stmtStk.back()->indt > nowIndt)
                {
                    

                    idx = stmtStk.size()-1;

                    while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                    {
                        idx--;
                    }

                    int i = idx;

                    StmtStrc* blk = bldStmtBlk();

                    while (i < stmtStk.size())
                    {
                        stmtBlkAdd(blk, stmtStk.at(i)->stmt);

                        i++;
                    }

                    //子语句出栈
                    int nbrPop = stmtStk.size() - idx;

                    for (i=0;i<nbrPop;i++)
                    {
                        stmtStk.pop_back();
                    }

                    //将语句体附加到上1级语句中

                    switch(stmtStk.back()->stmt->typ)
                    {
                        case IF_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                            break;
                        }
                        case WHILE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                            break;
                        }
                        case FOR_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                            break;
                        }
                        case FUNCTION_DEFINE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                            break;
                        }
                        case ELSE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                            //将else语句添加到其上的if语句结构体中
                            StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                            stmtStk.pop_back();
                            stmtStk.back()->stmt->stmt.ifStmt->els =els;
                        }
                    }

                }

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }

    }

close_execute_last_statement
    :
    {
        //如果是标准输入读取数据，则退出此动作
        if (prsStt==1)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            //如果存在上1条语句，该语句允许子语句
            if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt)
            {
                yyclearin;
                yyerrok;
                
            }

            // //如果上1条语句为顶级语句且不允许子语句，则执行上一条语句
            // if (stmtStk.back()->indt == 0 && stmtStk.back()->alwSubStmt==0)
            // {
            //     //执行上一条顶级语句
            //     exctStmt(envr, stmtStk.back()->stmt);
            //     stmtStk.pop_back();
            // }

            //如果上1条语句为子语句，则闭合上1条顶级语句，并执行该顶级语句
            if (stmtStk.back()->indt > 0)
            {
                //printf("cls top lvl stmt\n");

                int nowIndt = 0;

                int idx;

                while (stmtStk.back()->indt > nowIndt)
                {
                    

                    idx = stmtStk.size()-1;

                    while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
                    {
                        idx--;
                    }

                    int i = idx;

                    StmtStrc* blk = bldStmtBlk();

                    while (i < stmtStk.size())
                    {
                        stmtBlkAdd(blk, stmtStk.at(i)->stmt);

                        i++;
                    }

                    //子语句出栈
                    int nbrPop = stmtStk.size() - idx;

                    for (i=0;i<nbrPop;i++)
                    {
                        stmtStk.pop_back();
                    }

                    //将语句体附加到上1级语句中

                    switch(stmtStk.back()->stmt->typ)
                    {
                        case IF_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.ifStmt->stmt = blk;
                            break;
                        }
                        case WHILE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.whlStmt->stmt = blk;
                            break;
                        }
                        case FOR_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.forStmt->stmt = blk;
                            break;
                        }
                        case FUNCTION_DEFINE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.fcnStmt->fcn->stmt = blk;
                            break;
                        }
                        case ELSE_STATEMENT:
                        {
                            stmtStk.back()->stmt->stmt.elsStmt->stmt = blk;

                            //将else语句添加到其上的if语句结构体中
                            StmtStrc* els = stmtStk.back()->stmt->stmt.elsStmt->stmt;

                            stmtStk.pop_back();
                            stmtStk.back()->stmt->stmt.ifStmt->els =els;
                        }
                    }

                }

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

                //printf("cls stk lyr: %d\n", stmtStk.size());

                lstIndt=0;
            }

        }
    }

execute_statement
    : 
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进的情况下执行语句
        if ($<intVl>-4 != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            //YYABORT;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();

            //printf("exct stmt\n");
        }
  
    }

/* execute_last_statement
    : 
    { 
        printf("execute_last_statement: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进的情况下执行语句
        if ($<intVl>-4 != 0 || stmtStk.back()->alwSubStmt == 1)
        {
            //YYABORT;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();
        }

        printf("exct lst stmt\n");
         
    } */



single_statement
    : expression_statement { $$=$1; }
    | if_statement { $$=$1; }
    | else_statement {$$=$1; }
    | for_statement { $$=$1; } 
    | while_statement { $$=$1; }
    /* | do_while_statement { $$=$1; } */
    | break_statement { $$=$1; }
    | continue_statement  { $$=$1; }
    | return_statement  { $$=$1; }
    | function_define_statement { $$=$1; } 
    /* | null_statement  { $$=$1; } */
    | nop_statement { $$=$1; }
    | var_statement  { $$ = $1;}
    | global_statement  { $$ = $1; }  
    | error 
    { 
        $$=bldNllStmt(); 
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

nop_statement
    : NOP { $$=bldNllStmt(); }

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

global_statement
    : GLOBAL assign_list { $$=bldGlbStmt($2); }

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
    : IF LEFT_PAREN expression RIGHT_PAREN 
    {
        $$=bldIfStmt($3);
        //printf("bld if stmt\n");
    }
    /* | IF LEFT_PAREN expression RIGHT_PAREN structure_statement ELSE structure_statement 
    {
        $$=bldIfElsStmt($3, $5, $7);
    } */

else_statement
    : ELSE 
    {
        $$ = bldElsStmt();
    }


/* for_statement
    : FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN structure_statement
    {
        $$= bldForStmt($3, $5, $7, $9);  
    } */

for_statement
    : FOR LEFT_PAREN single_statement_no_semicolon SEMICOLON expression_statement SEMICOLON single_statement_no_semicolon RIGHT_PAREN
    {
        $$= bldForStmt($3, $5, $7);  
    }

/* while_statement
    : WHILE LEFT_PAREN expression_statement RIGHT_PAREN structure_statement
    {
        $$= bldWhlStmt($3, $5);
    } */

while_statement
    : WHILE LEFT_PAREN expression_statement RIGHT_PAREN
    {
        $$= bldWhlStmt($3);
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

/* function_define_statement
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
    } */

function_define_statement
    : FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN 
    {
        struct FcnStrc* fcn;

        fcn=bldFcn($2, $4);

        $$ = bldFcnStmt(fcn);
    }
    | FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN
    {
        struct FcnStrc *fcn;

        fcn=bldFcn($2, bldPrmLst());

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

    //struct EnvrStrc* glbEnvr = new EnvrStrc;

    //envr.push_back(glbEnvr);

    initGlbEnvr(envr);

    //可以提供代码文件供读取

    FILE *f;

    extern FILE* yyin;

    prsStt=1;

    if (argc==2)
    {
        prsStt = 2;
        f= fopen(argv[1],"r");
        yyin= f;
    }

    yyparse();
}


