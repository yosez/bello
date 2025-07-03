#include <cstdio>
#include <string>
#include <vector>


using namespace std;

#ifndef _WIN32
//#include "linenoise.h"
#include <readline/readline.h>
#include <readline/history.h>
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

extern void yylex_destroy();

typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern YY_BUFFER_STATE yy_scan_string(const char*);

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


