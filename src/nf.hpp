//
// Created by 臧元成 on 2026/7/15.
//
#ifndef  INFO_CPP
#define INFO_CPP
#include <vector>

#include "dfn.h"
#include "val.h"
using std::vector;
enum class ValEnm;


ValStrc* vrbInf(vector<Envr*>&envr, int argCnt, vector <ValStrc*> argArr)
{

        switch (v->typ)
        {
            case ValEnm::Int:
            {
                printf("%d\n", v->v.int_);
                break;
            }
            case ValEnm::Flt:
            {
                printf("%f\n", v->v.flt);
                break;
            }
            case ValEnm::Bln:
            {
                if (v->v.bln == 0)
                {
                    printf("%s\n", "false");
                }
                else
                {
                    printf("%s\n", "true");
                }
                break;
            }
            case ValEnm::Str:
            {
                printf("%s\n", v->v.str->c_str());
                break;
            }
            case ValEnm::Nl:
            {
                printf("(null)\n");
                break;
            }
            case ValEnm::Arr:
            {
                printf("[");
                int i;
                for (i = 0; i < v->v.arr->elmtArr.size(); i++)
                {
                    prtVal(v->v.arr->elmtArr[i]);

                    if (i != v->v.arr->elmtArr.size() - 1)
                    {
                        printf(", ");
                    }
                }

                printf("]\n");

                break;
            }
        }

        return 0;

}

#endif
