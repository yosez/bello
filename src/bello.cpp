#include <cstdio>
#include <string>
#include <vector>


using namespace std;

#ifndef _WIN32
#include "linenoise.h"
#endif


#ifndef DFTN_H
#define DFTN_H
#endif
#ifndef ENVR_H
#define ENVR_H
#endif
#ifndef CNST_H
#define CNST_H
#endif


//#include "y.tab.h"
//#include "lex.yy.c"

// #include "dftn.h"
// #include "vrb.h"
// #include "cnst.h"
// #include "arr.h"
// #include "exp.h"
// #include "stmt.h"
// #include "fcn.h"
// #include "cls.h"
// #include "envr.h"
// #include "err.h"
// #include "ntv.h"

extern int prsStt;
struct EnvrStrc;

extern std::vector<EnvrStrc*> envr;

extern int initGlbEnvr(vector<EnvrStrc*>& envr);

extern int yyparse(void);

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
    }

    char *ipt;

#ifndef _WIN32
    while ((ipt = linenoise(">> "))!=nullptr)
    {
        if (*ipt)
        {
            linenoiseHistoryAdd(ipt);
            yy_scan_string(ipt);
            yyparse();
            free(ipt);
        }
    }
#else

    yyparse();

#endif


}


