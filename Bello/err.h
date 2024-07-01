#pragma once
#include <stdio.h>


enum ErrTyp
{
    VARIABLE_NOT_DEFINED=1
};

const char *ERR_STR[]={"","Variable not defined.\n"};

int errRpt(int err)
{
    printf("Error %d: %s", err, ERR_STR[err]);

    return 0;
}