#pragma once

#include <stdio.h>
#include <malloc.h>

#include "y.tab.h"
#include "dftn.h"
#include "vrb.h"
#include "fcn.h"
#ifndef NTV_H
#define NTV_H
#endif

// #ifndef EXP_H
// #define EXP_H        
// #endif              

//extern typedef struct CnstStrc *ntvFcnDfn(int prmCnt, struct CnstStrc **prmArr);

//extern struct ExpStrc *bldFcnExp(char *nm, struct ArgLstStrc * argLst);  
//extern struct PrmLstStrc *bldArgLst();                                 

struct VrbStrc* addVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp);
struct VrbStrc* getEnvrVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp);
struct VrbStrc* getVrb(struct EnvrStrc* glbEnvr, struct EnvrStrc *fcnEnvr, struct VrbExpStrc* vrbExp);
int prtEnvrVrb(struct EnvrStrc *envr);

int addFcn(struct EnvrStrc* envr, struct FcnStrc *fcn);
struct FcnStrc* getEnvrFcn(struct EnvrStrc* envr, struct FcnExpStrc* fcnExp);
struct FcnStrc* getFcn(struct EnvrStrc* glbEnvr, struct EnvrStrc *fcnEnvr, struct FcnExpStrc* fcnExp);

int addNtvFcn(struct EnvrStrc *envr, char * fcnNm, ntvFcnDfn* fcn, int prmCnt);
struct NtvFcnStrc* getNtvFcn(struct EnvrStrc *envr, struct FcnExpStrc *fcn);
//struct NtvFcnStrc* getNtvFcn(struct EnvrStrc *envr, char *fcnNm);

int prtEnvrFcn(struct EnvrStrc *envr);
int intlEnvr(struct EnvrStrc** envr);

extern struct CnstStrc *rdIntFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *rdFltFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *rdBlnFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *rdFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *rdlnFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *prtFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *prtlnFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);
extern struct CnstStrc *newArrFcn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr);



struct VrbStrc* addVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp)
{

    if (getEnvrVrb(envr,vrbExp)!=NULL)
    {
        return getEnvrVrb(envr,vrbExp);
    }


    if (envr->vrbCnt == envr->vrbSz)
    {
        envr->vrbSz*=2;

        envr->vrbArr=(struct VrbStrc**)realloc(envr->vrbArr, sizeof(struct VrbStrc*)*envr->vrbSz);
    }

    envr->vrbArr[envr->vrbCnt]=bldVrb(vrbExp->nm);

    envr->vrbCnt++;

    return envr->vrbArr[envr->vrbCnt-1];

}

struct VrbStrc* getEnvrVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp)
{
    int i;

    for (i=0;i<envr->vrbCnt;i++)
    {
        if (strcmp(vrbExp->nm, envr->vrbArr[i]->nm)==0)
        {
            return envr->vrbArr[i];
        }
    }

    return NULL;

}

struct VrbStrc* getVrb(struct EnvrStrc* glbEnvr, struct EnvrStrc *fcnEnvr, struct VrbExpStrc* vrbExp)
{
    struct VrbStrc* vrb=NULL;
    vrb = getEnvrVrb(fcnEnvr, vrbExp)!=NULL?getEnvrVrb(fcnEnvr, vrbExp):getEnvrVrb(glbEnvr, vrbExp);

    return vrb;
}


int prtEnvrVrb(struct EnvrStrc *envr)
{
    int i;

    printf("envr variables: %d\n",envr->vrbCnt);

    for (i=0;i<envr->vrbCnt;i++)
    {
        printf("%2d:\t%s\n",i,envr->vrbArr[i]->nm);
    }

    return 0;
}


int addFcn(struct EnvrStrc* envr, struct FcnStrc *fcn)
{
    if (envr->fcnCnt == envr->fcnSz)
    {
        envr->fcnSz*=2;

        envr->fcnArr=(struct FcnStrc **)realloc(envr->fcnArr, sizeof(struct FcnStrc *)* envr->fcnSz);
    }

    envr->fcnArr[envr->fcnCnt]=fcn;

    envr->fcnCnt++;

    return 0;
}

struct FcnStrc* getEnvrFcn(struct EnvrStrc* envr, struct FcnExpStrc* fcnExp)
{
    int i;

    for (i=0;i<envr->fcnCnt;i++)
    {
        if (strcmp(fcnExp->nm, envr->fcnArr[i]->nm)==0)
        {
            return envr->fcnArr[i];
        }
    }

    return NULL;

}

struct FcnStrc* getFcn(struct EnvrStrc* glbEnvr, struct EnvrStrc *fcnEnvr, struct FcnExpStrc* fcnExp)
{
    struct FcnStrc* fcn=NULL;
    fcn = getEnvrFcn(fcnEnvr, fcnExp)!=NULL?getEnvrFcn(fcnEnvr, fcnExp):getEnvrFcn(glbEnvr, fcnExp);

    return fcn;
}


int addNtvFcn(struct EnvrStrc *envr, char * fcnNm, ntvFcnDfn* fcn, int prmCnt)
{
    struct NtvFcnStrc * fcnDfn= (struct NtvFcnStrc *)malloc(sizeof(struct NtvFcnStrc));

    fcnDfn->fcn = fcn;
    fcnDfn->prmCnt= prmCnt;

    fcnDfn->fcnNm=(char *)malloc(0x100);
    memset(fcnDfn->fcnNm,0, sizeof(fcnDfn->fcnNm));

    strcpy(fcnDfn->fcnNm, fcnNm);

    if (envr->ntvFcnCnt == envr->ntvFcnSz)
    {
    
        envr->ntvFcnSz*=2;

        envr->ntvFcnArr= (struct NtvFcnStrc **)realloc(envr->ntvFcnArr, sizeof(struct NtvFcnStrc*)*envr->ntvFcnSz); 
    }

    envr->ntvFcnArr[envr->ntvFcnCnt] = fcnDfn;

    envr->ntvFcnCnt++;

    return 0;
}

// struct NtvFcnStrc* getNtvFcn(struct EnvrStrc *envr, char *fcnNm)
// {
//     struct NtvFctnStrc* rslt= NULL;

//     int i;
     
//     for (i=0; i< envr->ntvFcnCnt;i++)
//     {
//         if (strcmp(fcnNm,envr->ntvFcnArr[i]->fcnNm)==0)
//         {
//             return envr->ntvFcnArr[i];
//         }
//     }

//     return NULL;
// }

struct NtvFcnStrc* getNtvFcn(struct EnvrStrc *envr, struct FcnExpStrc *fcn)
{
    struct NtvFctnStrc* rslt= NULL;

    int i;
     
    for (i=0; i< envr->ntvFcnCnt;i++)
    {
        if (strcmp(fcn->nm,envr->ntvFcnArr[i]->fcnNm)==0)
        {
            return envr->ntvFcnArr[i];
        }
    }

    return NULL;
}



int prtEnvrFcn(struct EnvrStrc *envr)
{
    int i;

    printf("envr functions: %d\n",envr->fcnCnt);

    for (i=0;i<envr->fcnCnt;i++)
    {
        printf("%2d:\t%s\n",i,envr->fcnArr[i]->nm);
    }

    return 0;
}

int intlGlbEnvr(struct EnvrStrc** envr)
{

    *envr=(struct EnvrStrc *)malloc(sizeof(struct EnvrStrc));
    memset(*envr,0,sizeof(*envr));

    (*envr)->vrbSz=10;
    (*envr)->vrbCnt=0;
    (*envr)->vrbArr=(struct VrbStrc **)malloc(sizeof(struct VrbStrc *)*(*envr)->vrbSz);

    (*envr)->fcnSz=10;
    (*envr)->fcnCnt=0;
    (*envr)->fcnArr=(struct FcnStrc **)malloc(sizeof(struct FcnStrc*)*(*envr)->fcnSz);

    (*envr)->ntvFcnSz=10;
    (*envr)->ntvFcnCnt=0;
    (*envr)->ntvFcnArr=(struct NtvFcnStrc **)malloc(sizeof(struct NtvFcnStrc*)*(*envr)->ntvFcnSz);

    //添加原生函数
    addNtvFcn((*envr), (char*)"readInt", rdIntFcn, 0);
    addNtvFcn((*envr), (char*)"readFloat", rdFltFcn, 0);
    addNtvFcn((*envr), (char*)"readBool", rdBlnFcn, 0);
    addNtvFcn((*envr), (char*)"read", rdFcn, 0);
    addNtvFcn((*envr), (char*)"readln", rdlnFcn, 0);
    addNtvFcn((*envr), (char*)"print", prtFcn, 1);
    addNtvFcn((*envr), (char*)"println", prtlnFcn, 1);
    addNtvFcn((*envr), (char*)"newArray", newArrFcn, 1);

    //测试原生函数添加代码
    // int i=0;

    // for (i=0;i<(*envr)->ntvFcnCnt; i++)
    // {
    //     printf("Function name: %s\n", (*envr)->ntvFcnArr[i]->fcnNm);
    // }

    // struct FcnExpStrc *fcn= bldFcnExp("readInt",bldArgLst())->exp.fcnExp;
    // printf("Build readInt Expression\n");

    // printf("Function found: %s\n", getNtvFcn(*envr, fcn)?"True":"False");

    return 0;
}

int intlEnvr(struct EnvrStrc** envr)
{

    *envr=(struct EnvrStrc *)malloc(sizeof(struct EnvrStrc));
    memset(*envr,0,sizeof(*envr));

    (*envr)->vrbSz=10;
    (*envr)->vrbCnt=0;
    (*envr)->vrbArr=(struct VrbStrc **)malloc(sizeof(struct VrbStrc *)*(*envr)->vrbSz);

    (*envr)->fcnSz=10;
    (*envr)->fcnCnt=0;
    (*envr)->fcnArr=(struct FcnStrc **)malloc(sizeof(struct FcnStrc*)*(*envr)->fcnSz);

    (*envr)->ntvFcnCnt=0;
    (*envr)->ntvFcnSz=10;
    (*envr)->ntvFcnArr=(struct NtvFcnStrc **)malloc(sizeof(struct NtvFcnStrc*)*(*envr)->ntvFcnSz);

    return 0;
}



