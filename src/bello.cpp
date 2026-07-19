#include <cstdio>
#include <string>
#include <vector>

using namespace std;

#ifndef _WIN32
#include <readline/readline.h>
#include <readline/history.h>
#endif

//#define DBG_FLG

#include "dfn.h"
#include "envr.h"
#include "val.h"


#include "lex.yy.c"
#include "y.tab.c"

extern int prsStt;
struct Envr;

extern std::vector<Envr*> envr;

extern int initGlbEnvr(vector<Envr*>& envr);

extern int yyparse(void);

extern int yylex_destroy();

typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern YY_BUFFER_STATE yy_scan_string(const char*);

struct StmtStkItmStrc;

extern std::vector<StmtStkItmStrc*> stmtStk;

extern int chkStmtAlwSubStmt(struct Stmt* stmt);

extern int chkStmtAlwScndStmt(struct Stmt* stmt);

extern Stmt* bldStmtBlk();

extern Stmt* stmtBlkAdd(struct Stmt* stmtBlk, struct Stmt* stmt);
extern void exctStk(vector<Envr*> envr, vector<StmtStkItmStrc*> stk);

//执行语句站中的语句, stk中的语句使用envr环境中的从下往上的具体环境envr
void exctStk(vector<Envr*> envr, vector<StmtStkItmStrc*> stk)
{
    for (int i=0;i<stmtStk.size();i++)
    {
        exctStmt(envr, stk.at(i)->stmt);
        stk.erase(stk.begin());
    }
}

//将之前缩进大于等于indt的语句折叠放入栈中
void fldStmt(int indt=0)
{
    if (stmtStk.size()==0)
    {
        return;
    }

    int idx;

    //在上一条语句大于indt的情况，给子语句建立语句块，从栈中折叠子语句到主语句
    while (stmtStk.back()->indt > indt)
    {


        idx = stmtStk.size()-1;

        while (idx>0 && stmtStk.back()->indt == stmtStk.at(idx-1)->indt)
        {
            idx--;
        }

        int i = idx;

        Stmt* blk = bldStmtBlk();

        while (i < stmtStk.size())
        {
            stmtBlkAdd(blk, stmtStk.at(i)->stmt);

            i++;
        }

        //子语句出栈，以准备放到主语句中
        int nbrPop = stmtStk.size() - idx;

        for (i=0;i<nbrPop;i++)
        {
            stmtStk.pop_back();
        }

        //将语句体附加到上1级语句中
        switch(stmtStk.back()->stmt->typ)
        {
            case StmtEnm::If:
            {
                auto ifStmt = static_cast<IfStmt*>(stmtStk.back()->stmt);
                ifStmt->stmt = blk;
                //ifStmt->els = nullptr;
                //ifStmt->elif = nullptr;
                break;
            }
            case StmtEnm::Whl:
            {
                auto whlStmt = static_cast<WhlStmt*>(stmtStk.back()->stmt);
                whlStmt->stmt = blk;
                break;
            }
            case StmtEnm::For:
            {
                auto forStmt = static_cast<ForStmt*>(stmtStk.back()->stmt);
                forStmt->stmt = blk;
                break;
            }
            case StmtEnm::DfnFcn:
            {
                auto fcnStmt = static_cast<FcnStmt*>(stmtStk.back()->stmt);
                fcnStmt->fcn->stmt = blk;
                break;
            }
            case StmtEnm::Els:
            {
                auto elsStmt = static_cast<ElsStmt*>(stmtStk.back()->stmt);
                elsStmt->stmt = blk;

                break;
            }
            case StmtEnm::Elif:
            {
                auto elifStmt = static_cast<ElifStmt*>(stmtStk.back()->stmt);
                elifStmt->stmt = blk;

                break;
            }
            case StmtEnm::Cls:
            {

                //此处未完成
                //根据类中的语句填充类

                auto clsStmt = static_cast<ClsStmt*>(stmtStk.back()->stmt);

                int lnt = static_cast<StmtBlkStrc*>(blk)->stmtArr.size();

                clsStmt->cls->dfn = blk;

                break;
            }
        }

    }

}

//当前读入的语句入栈
void pshStmt(int indt, Stmt* stmt)
{
    StmtStkItmStrc * itm =new StmtStkItmStrc;

    itm->indt = indt;
    itm->stmt = stmt;
    itm->alwSubStmt = chkStmtAlwSubStmt(stmt);

    stmtStk.push_back(itm);
}



//打印语句栈中的语句信息的函数
void prtStmtStk()
{
    for (int i=0;i<stmtStk.size();i++)
    {
        StmtStkItmStrc* stmt =stmtStk.at(i);

        for (int j=0;j<stmt->indt;j++)
        {
            printf("\t");
        }

        switch (stmt->stmt->typ)
        {
            case StmtEnm::Exp:
            {
                printf("expStmt\n");
                break;
            }
            case StmtEnm::If:
            {
                printf("ifStmt\n");
                break;
            }
            case StmtEnm::IfEls:
            {
                printf("ifElsStmt\n");
                break;
            }
            case StmtEnm::Els:
            {
                printf("elsStmt\n");
            }
            case StmtEnm::For:
            {
                printf("forStmt\n");
                break;
            }
            case StmtEnm::Whl:
            {
                printf("whlStmt\n");
                break;
            }
            case StmtEnm::DoWhl:
            {
                printf("doWhlStmt\n");
                break;
            }
            case StmtEnm::Blk:
            {
                printf("stmtBlk\n");
                break;
            }
            case StmtEnm::Brk:
            {
                printf("brkStmt\n");
                break;
            }
            case StmtEnm::Cntn:
            {
                printf("cntnStmt\n");
                break;
            }
            case StmtEnm::Var:
            {
                printf("varStmt\n");
                break;
            }
            case StmtEnm::DfnFcn:
            {
                printf("fcnStmt\n");
                break;
            }
            case StmtEnm::Cls:
            {
                printf("clsStmt\n");
                break;
            }
            case StmtEnm::Glb:
            {
                printf("glbStmt\n");
                break;
            }
            case StmtEnm::Rtn:
            {
                printf("rtnStmt\n");
                break;
            }
        }
    }
}


int main(int argc, char * argv[])
{

    //创建全局环境

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

        yyparse();

        return 0;
    }

    char *ipt;

#ifndef _WIN32
    rl_attempted_completion_function = nullptr;

    rl_bind_key('\t', rl_insert);

    while ((ipt = readline(""))!=nullptr)
    {
        add_history(ipt);

        string iptRtn(ipt);

        iptRtn+="\n";

        yy_scan_string(iptRtn.c_str());

        yyparse();

        yylex_destroy();
    }
#else

    yyparse();

#endif


}


