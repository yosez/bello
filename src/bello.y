%{
    #pragma once

    #ifndef Y_TAB_C
    #define Y_TAB_C
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stack>
    #include "dftn.h"
    #include "vrb.h"
    #include "val.h"
    #include "exp.h"
    #include "stmt.h"
    #include "arr.h"
    #include "stmt.h"
    #include "fcn.h"
    #include "cls.h"
    #include "envr.h"
    #include "err.h"
    #include "ntv.h"
    #include "lex.yy.c"



    extern char* yytext;

    extern int yylex();

    void yyerror(const char *s,...)
    {
        printf("Syntax error.\n");
        
    }

    //#define YYERROR_VERBOSE 1

    extern int lstIndt;

    //extern struct StmtStkItemStrc;

    extern std::vector<StmtStkItmStrc*> stmtStk;

    extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);

    extern int chkStmtAlwScndStmt(struct StmtStrc* stmt);


    //prsStt为1 从标准输入读取 prsStt为2 从源文件读取
    int prsStt;

    void fldStmt(int indt);
    void pshStmt(int indt, StmtStrc* stmt);
    void prtStmtStk();

    //类定义语句的标志，0为不是类定义的状态，1为类定义的状态
    int blnDfnCls=0;

    struct StmtStrc* lstStmt;
%}

%union
{
    int blnVl;
    int intVl;
    float fltVl;
    char *strVl;
    struct ObjStrc* objVl;

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

%token NULL_STRING
%token LF
%token END_FILE
%token NEW
%token NOP
%token DOT
%token CLASS SHARED THIS
%token <intVl> INDENT
%token <intVl> INT_LTR
%token <blnVl> BLN_LTR
%token <fltVl> FLT_LTR
%token <strVl> STR_LTR
%token <objVl> OBJECT_VALUE
%token NLL_LTR
%token ARRAY_VALUE
%token SHORTCUT_PRINTLN
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
%token AND OR NOT XOR
%token BIT_AND BIT_OR BIT_XOR BIT_NOT
%token INCREMENT DECREMENT
%token IF ELSEIF ELSE FOR WHILE DO CONTINUE BREAK
%token FUNC RETURN
%token NEW_ARRAY

%type <exp> expression value_expression function_expression  array_expression
    new_array_expression assign_expression unary_expression binary_expression 
    lvalue_operation_expression self_operation_expression lvalue_expression
    shortcut_expression
%type <stmt> single_statement expression_statement 
    statement_block block_list null_statement var_statement global_statement
%type <stmt> if_statement else_statement elseif_statement structure_statement for_statement single_statement_no_semicolon while_statement 
    do_while_statement break_statement continue_statement return_statement nop_statement
%type <stmt> function_statement class_statement
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

%left INCREMENT DECREMENT

%left QM


%%

statement
    : //从命令行或源码输入顶层语句并执行
    statement close_execute_last_statement {$<intVl>$ = 0; } single_statement LF check_indent build_statement_stack execute_single_statement 
    //从命令行或源码输入子语句
    | statement INDENT single_statement LF check_indent build_statement_stack
    //从命令行输入，输入空行之后执行语句栈中的语句
    | statement LF close_execute_statement
    //从源码输入文件结束
    | statement END_FILE close_execute_last_statement  { return 0; }//需要加上识别空语句，以处理输入结束的情况
    | ;
    | error { yyerrok; }
    //| statement NULL_STRING close_execute_statement 

check_indent
    : { 
        if (($<intVl>-2)>lstIndt+1) 
        {
           yyclearin;
           yyerrok;
        }
      }

build_statement_stack
    : 
    {   
        int indt = $<intVl>-3;

        StmtStrc* stmt=$<stmt>-2;

        stmt->indt= indt;

        //如果是当前句的indent == 上1句的indent + 1，则检查上1句是否有语句体，如上1句允许语句体，语句入栈
        if (indt == lstIndt + 1 )
        {
            if (stmtStk.back()->alwSubStmt)
            {
                //语句入栈
                pshStmt(indt, stmt);
            }
            else
            {
                yyerrok;
            }
        }
        else if (indt == lstIndt)
        {
            //语句入栈
            pshStmt(indt, stmt);

        }
        else if (indt < lstIndt)
        {
            int nowIndt = indt;

            int idx;

            //折叠输入的句子以上的缩进大于该输入的句子，结果为栈中缩进最大的句子为输入的句子及其以上同等缩进的句子
            fldStmt(nowIndt);

            //输入的句子入栈
            pshStmt(indt, stmt);
            
        }

        lstIndt = indt;
    }

//从命令行输入，输入空行之后执行语句栈中的语句
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

            printf("执行语句 %d\n", stmtStk.size());

            //如果上1条语句为子语句，则闭合上1条顶级语句
            if (stmtStk.back()->indt > 0)
            {
                fldStmt(0);
            }

            for (int i=0;i<stmtStk.size();i++)
            {
                exctStmt(envr, stmtStk.at(i)->stmt);

                lstStmt = stmtStk.at(i)->stmt;
                //stmtStk.pop_back();
            }

            stmtStk.clear();

        }

    }

//从源代码输入，新输入顶级语句后，执行上1条顶级语句
close_execute_last_statement
    :
    {
        //如果是命令行读取数据，则退出此动作
        if (prsStt==1)
        {
            break;
        }

        //如果存在上一条语句
        if (stmtStk.size()>0)
        {
            //需要闭合上1条顶级语句的子语句，并执行该顶级语句

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

                fldStmt(0);

                // 如果是双主句语句的情况


                //执行上一条顶级语句
                exctStmt(envr, stmtStk.back()->stmt);
                stmtStk.pop_back();

            }

        }
    }

execute_single_statement
    : 
    { 
        //printf("alw sub stmt: %d\n", stmtStk.back()->alwSubStmt);

        //只在无缩进且不允许第2主句的情况下执行语句
        if ($<intVl>-4 != 0 || stmtStk.back()->alwSubStmt == 1 || chkStmtAlwScndStmt(stmtStk.back()->stmt) )
        {
            break;
        }
        else
        {
            exctStmt(envr, stmtStk.back()->stmt);
            stmtStk.pop_back();
        }
  
    }


single_statement
    : expression_statement { $$=$1; }
    | if_statement { $$=$1; }
    | else_statement { $$=$1; }
    | elseif_statement { $$=$1; }
    | for_statement { $$=$1; } 
    | while_statement { $$=$1; }
    /* | do_while_statement { $$=$1; } */
    | break_statement { $$=$1; }
    | continue_statement  { $$=$1; }
    | return_statement  { $$=$1; }
    | function_statement { $$=$1; }
    | nop_statement { $$=$1; }
    | var_statement  { $$ = $1;}
    | global_statement  { $$ = $1; } 
    | class_statement { $$= $1; } 
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
    : value_expression { $$ = $1; }
    | lvalue_operation_expression
    | unary_expression { $$ = $1; }
    | binary_expression { $$ = $1; }
    | array_expression { $$ = $1; }
    | new_array_expression { $$ = $1; }
    | shortcut_expression { $$ = $1; }

lvalue_operation_expression
    : assign_expression
    | self_operation_expression

assign_expression
    : lvalue_expression ASSIGN expression { $$=bldAsnExp($1, $3); }
    | lvalue_expression ADD_ASSIGN expression { $$=bldAsnExp($1, bldBnrExp(OprEnm::Add, $1, $3)); }
    | lvalue_expression SUB_ASSIGN expression { $$=bldAsnExp($1, bldBnrExp(OprEnm::Sub, $1, $3)); }
    | lvalue_expression MUL_ASSIGN expression { $$=bldAsnExp($1, bldBnrExp(OprEnm::Mul, $1, $3)); }
    | lvalue_expression DIV_ASSIGN expression { $$=bldAsnExp($1, bldBnrExp(OprEnm::Div, $1, $3)); }
    | lvalue_expression MOD_ASSIGN expression { $$=bldAsnExp($1, bldBnrExp(OprEnm::Asn, $1, $3)); }


self_operation_expression 
    : INCREMENT lvalue_expression { $$=bldUnrExp(OprEnm::PfxInc, $2); }
    | DECREMENT lvalue_expression { $$=bldUnrExp(OprEnm::PfxDec, $2); }
    | lvalue_expression INCREMENT { $$=bldUnrExp(OprEnm::SfxInc, $1); }
    | lvalue_expression DECREMENT { $$=bldUnrExp(OprEnm::SfxDec, $1); }

unary_expression
    : SUB expression %prec MINUS_SIGN { $$ = bldUnrExp(OprEnm::Ngtv, $2); }
    | ADD expression %prec PLUS_SIGN { $$ = bldUnrExp(OprEnm::Pstv, $2); }
    | LEFT_PAREN expression RIGHT_PAREN { $$=$2; }
    | NOT expression { $$=bldUnrExp(OprEnm::Not, $2); }
    | BIT_NOT expression { $$=bldUnrExp(OprEnm::BNot, $2); }

binary_expression
    : expression ADD expression { $$=bldBnrExp(OprEnm::Add, $1, $3); }
    | expression SUB expression { $$=bldBnrExp(OprEnm::Sub, $1, $3); }
    | expression MUL expression { $$=bldBnrExp(OprEnm::Mul, $1, $3); }
    | expression DIV expression { $$=bldBnrExp(OprEnm::Div, $1, $3); }
    | expression MOD expression { $$=bldBnrExp(OprEnm::Mod, $1, $3); }
    | expression AND expression { $$=bldBnrExp(OprEnm::And, $1, $3); }
    | expression OR expression { $$=bldBnrExp(OprEnm::Or, $1, $3); }
    | expression XOR expression { $$=bldBnrExp(OprEnm::Xor, $1, $3); }
    | expression EQ expression { $$=bldBnrExp(OprEnm::Eq, $1, $3); }
    | expression NE expression { $$=bldBnrExp(OprEnm::Ne, $1, $3); }
    | expression GT expression { $$=bldBnrExp(OprEnm::Gt, $1, $3); }
    | expression GE expression { $$=bldBnrExp(OprEnm::Ge, $1, $3); }
    | expression LT expression { $$=bldBnrExp(OprEnm::Lt, $1, $3); }
    | expression LE expression { $$=bldBnrExp(OprEnm::Le, $1, $3); }
    | expression BIT_AND expression { $$=bldBnrExp(OprEnm::BAnd, $1, $3); }
    | expression BIT_OR expression { $$=bldBnrExp(OprEnm::BOr, $1, $3); }
    | expression BIT_XOR expression { $$=bldBnrExp(OprEnm::BXor, $1, $3); }
    | expression QM expression COLON expression { $$ = bldTnrExp(OprEnm::Tnr, $1, $3, $5); }

shortcut_expression
    : SHORTCUT_PRINTLN element_list
    {
        
    }

value_expression
    : INT_LTR { $$=bldIntValExp($1); }
    | FLT_LTR { $$=bldFltValExp($1); }
    | BLN_LTR { $$=bldBlnValExp($1); }
    | STR_LTR { $$=bldStrValExp($1); }
    | NLL_LTR { $$=bldNllValExp(); }
    | function_expression
    | lvalue_expression 
    | NEW IDENTIFER { $$= bldNewExp($2); }

lvalue_expression
    : IDENTIFER { $$= bldLvlExp(bldVrbExp($1)); }
    | lvalue_expression DOT IDENTIFER 
    {
        LvlExpStrc* lvl = static_cast<LvlExpStrc*>($1);
        $$ = lvl;

        //寻找LvlExpStrc链最末尾的结构体
        while (lvl->hasAtb==1)
        {
            lvl= static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasAtb=1;
        lvl->atb=static_cast<LvlExpStrc*>(bldLvlExp(bldVrbExp($3)));

    }
    | lvalue_expression evaluate_list 
    { 
        $$=$1; 
        bldLvlExpAdd($1, $2); 
    }
    | lvalue_expression DOT function_expression
    {

        printf("bld obj ivk exp\n");

        LvlExpStrc* lvl = static_cast<LvlExpStrc*>($1);

        $$ = $1;

        //左值表达式设置调用对象方法的标志
        lvl->blnIvk = 1;

        while (lvl->hasAtb==1)
        {
            lvl = static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasFcn=1;
        lvl->fcn=static_cast<FcnExpStrc*>($3);

    }

/* object_invoke_expression
    : object_invoke_expression DOT IDENTIFER LEFT_PAREN RIGHT_PAREN
    {
        printf("bld obj ivk exp\n");

        LvlExpStrc* lvl = static_cast<LvlExpStrc*>($1);

        $$ = $1;

        while (lvl->hasAtb==1)
        {
            lvl = static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasFcn=1;

        //lvl->fcn = static_cast<FcnExpStrc*>($1);

    }
    /* | object_invoke_expression DOT IDENTIFER
    {
        LvlExpStrc* lvl = static_cast<LvlExpStrc*>($1);

        $$=$1;

        //寻找LvlExpStrc链最末尾的结构体
        while (lvl->hasAtb==1)
        {
            lvl = static_cast<LvlExpStrc*>(lvl->atb);
        }

        lvl->hasAtb=1;
        lvl->atb = static_cast<LvlExpStrc*>(bldLvlExp(bldVrbExp($3)));
        
    } 
    | IDENTIFER DOT object_invoke_expression
    {
        $$ = bldLvlExp(bldVrbExp($1));
    }
    */

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
    : VAR assign_list 
    { 
        //建立变量
        if (blnDfnCls==false)
        {
            $$=bldVarStmt($2); 
        }
        else
        {
            //$$=bldVarStmt(StmtEnm::ClsVar, $2);
        }
    }
    | SHARED VAR assign_list 
    {
        //需要是类定义状态
        if (blnDfnCls==1)
        {
            //$$ = bldVarStmt(StmtEnm::ClsShrVar, $3);
        } 
        else
        {
            yyclearin;   
            yyerrok;
        }
    }

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
    | IDENTIFER COLON expression
    {
        $$ = bldArgLst();
        argLstAdd($$, bldVrbExp($1), $3);
    }
    | argument_list COMMA expression
    {
        $$ = $1;
        argLstAdd($$, $3);
    }
    | argument_list COMMA IDENTIFER COLON expression
    {
        $$ = $1;
        argLstAdd($$, bldVrbExp($3), $5);
    }

parameter_list
    : IDENTIFER 
    {
        $$ = bldPrmLst();
        prmLstAdd($$, bldVrbExp($1));
    }
    | IDENTIFER ASSIGN expression
    {
        $$ = bldPrmLst();
        prmLstAdd($$, bldVrbExp($1), $3);
    }
    | parameter_list COMMA IDENTIFER 
    { 
        $$ = $1;  
        prmLstAdd($$, bldVrbExp($3));
    }
    | parameter_list COMMA IDENTIFER ASSIGN expression
    {
        $$ = $1;
        prmLstAdd($$, bldVrbExp($3), $5);
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
        acsLstSlcAdd($$, $2, $4, bldIntValExp(1));
    }
    | LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  //[i:j:]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, $4, bldIntValExp(1));
    }
    | LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD //[i:j:k]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, $4, $6);
    }
    | LEFT_QUAD expression COLON RIGHT_QUAD       //[i:]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, bldIntValExp(-1), bldIntValExp(1));
    }
    | LEFT_QUAD expression COLON COLON RIGHT_QUAD       //[i::]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, bldIntValExp(-1), bldIntValExp(1));
    }
    | LEFT_QUAD expression COLON COLON expression RIGHT_QUAD        //[i::k]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, $2, bldIntValExp(-1), $5);
    }
    | LEFT_QUAD COLON expression RIGHT_QUAD       //[:j]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldIntValExp(0), $3, bldIntValExp(1));
    }
    | LEFT_QUAD COLON expression COLON RIGHT_QUAD       //[:j:]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldIntValExp(0), $3, bldIntValExp(1));
    }
    | LEFT_QUAD COLON expression COLON expression RIGHT_QUAD        //[:j:k]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldIntValExp(0), $3, $5);
    }
    | LEFT_QUAD COLON COLON RIGHT_QUAD      //[::]
    {
        $$= bldAcsLst();
        acsLstSlcAdd($$, bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD expression RIGHT_QUAD
    {
        $$=$1;
        acsLstIdxAdd($$,$3);
    }
    | evaluate_list LEFT_QUAD expression COLON expression RIGHT_QUAD  //[i:j]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, $5, bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON expression COLON RIGHT_QUAD  //[i:j:]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, $5, bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON expression COLON expression RIGHT_QUAD //[i:j:k]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, $5, $7);
    }
    | evaluate_list LEFT_QUAD expression COLON RIGHT_QUAD       //[i:]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, bldIntValExp(-1), bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON COLON RIGHT_QUAD       //[i::]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, bldIntValExp(-1), bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD expression COLON COLON expression RIGHT_QUAD        //[i::k]
    {
        $$=$1;
        acsLstSlcAdd($$, $3, bldIntValExp(-1), $6);
    }
    | evaluate_list LEFT_QUAD COLON expression RIGHT_QUAD       //[:j]
    {
        $$=$1;
        acsLstSlcAdd($$, bldIntValExp(0), $4, bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD COLON expression COLON RIGHT_QUAD       //[:j:]
    {
        $$=$1;
        acsLstSlcAdd($$, bldIntValExp(0), $4, bldIntValExp(1));
    }
    | evaluate_list LEFT_QUAD COLON expression COLON expression RIGHT_QUAD        //[:j:k]
    {
        $$=$1;
        acsLstSlcAdd($$, bldIntValExp(0), $4, $6);
    }
    | evaluate_list LEFT_QUAD COLON COLON RIGHT_QUAD      //[::]
    {
        $$=$1;
        acsLstSlcAdd($$, bldIntValExp(0), bldIntValExp(-1), bldIntValExp(1));
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
    : IF expression  
    {
        $$=bldIfStmt($2);
        //printf("bld if stmt\n");
    }
    /* : IF LEFT_PAREN expression RIGHT_PAREN 
    {
        $$=bldIfStmt($3);
        //printf("bld if stmt\n");
    } */
    /* | IF LEFT_PAREN expression RIGHT_PAREN structure_statement ELSE structure_statement 
    {
        $$=bldIfElsStmt($3, $5, $7);
    } */

else_statement
    : ELSE 
    {
        $$ = bldElsStmt();
    }

elseif_statement
    : ELSEIF expression 
    {
        $$ = bldElifStmt($2);
    }
    /* : ELSEIF LEFT_PAREN expression RIGHT_PAREN
    {
        $$ = bldElifStmt($3);
    } */

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
    : WHILE expression 
    {
        $$ = bldWhlStmt($2);
    }
    /* : WHILE LEFT_PAREN expression RIGHT_PAREN
    {
        $$ = bldWhlStmt($3);
    } */
    | WHILE 
    {
        $$ = bldWhlStmt();
    }

do_while_statement
    : DO structure_statement WHILE LEFT_PAREN expression_statement RIGHT_PAREN SEMICOLON
    {
        $$= bldDoWhlStmt($5, $2);
    }

break_statement
    : BREAK { $$= bldBrkStmt(bldIntValExp(1)); }
    | BREAK LEFT_PAREN expression RIGHT_PAREN { $$= bldBrkStmt($3); }

continue_statement
    : CONTINUE { $$= bldCntnStmt(bldIntValExp(1)); }
    | CONTINUE LEFT_PAREN expression RIGHT_PAREN { $$= bldCntnStmt($3); }

structure_statement  
    : single_statement 
    | statement_block

/* FUNCTION_STATEMENT
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

function_statement
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
    | SHARED FUNC IDENTIFER LEFT_PAREN parameter_list RIGHT_PAREN 
    {
        if (blnDfnCls==false)
        {
            yyclearin;
            yyerrok;

            break;
        }

        struct FcnStrc* fcn;

        fcn=bldFcn($3, $5);

        $$ = bldFcnStmt(fcn);
        
    }
    | SHARED FUNC IDENTIFER LEFT_PAREN RIGHT_PAREN
    {
        struct FcnStrc *fcn;

        fcn=bldFcn($3, bldPrmLst());

        $$ = bldFcnStmt(fcn);
    }

class_statement
    : CLASS IDENTIFER
    {
        struct ClsStrc* cls;

        cls = bldCls($2);

        $$ = bldClsStmt(cls);

        //blnDfnCls = 1;
    }



return_statement
    : RETURN { $$=bldRtnStmt(NULL); } 
    | RETURN expression { $$=bldRtnStmt($2); }


%%

#endif



