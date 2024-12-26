#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "dftn.h"
// #ifndef EXP_H
// #define EXP_H
// #endif

//此部分引入的变量及函数可以删除
extern struct CnstStrc* bldCnstIntExp(int intVl);
extern struct CnstStrc* clcExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ExpStrc* exp);
//extern struct EnvrStrc* glbEnvr;

struct ElmtLstStrc* bldElmtLst()
{
	struct ElmtLstStrc* rslt = new ElmtLstStrc;

	return rslt;
}

int elmtLstAdd(struct ElmtLstStrc* elmtLst, struct ExpStrc* exp)
{

	elmtLst->elmtArr.push_back(exp);

	//printf("exp: %d\n", clcExp(glbEnvr, glbEnvr, exp)->vl.intVl);

	return 0;
}

struct PstnLstStrc* bldPstnLst()
{

	struct PstnLstStrc* rslt = new PstnLstStrc;


	return rslt;
}

int pstnLstAdd(struct PstnLstStrc* pstnLst, struct ExpStrc* exp)
{


	pstnLst->pstnArr.push_back(exp);

	return 0;
}

int intlArr(struct ArrStrc** arr)
{

	(*arr) = new ArrStrc;

	return 0;
}

int addElmt(struct ArrStrc* arr, struct CnstStrc* elmt)
{


	arr->elmtArr.push_back(elmt);

	return 0;
}

struct AcsLstStrc* bldAcsLst()
{

	struct AcsLstStrc* rslt = new AcsLstStrc;

	return rslt;
}

int acsLstIdxAdd(struct AcsLstStrc* evlLst, struct ExpStrc* exp)
{
	AcsStrc* acs = new AcsStrc;
	acs->blnSlc = false;
	acs->pstn = exp;

	evlLst->acsLst.push_back(acs);

	return 0;
}

int acsLstSlcAdd(struct AcsLstStrc* acsLst, struct ExpStrc* strt, struct ExpStrc* end, struct ExpStrc* stp)
{

	AcsStrc* acs = new AcsStrc;

	acs->blnSlc = true;
	acs->strt = strt;
	acs->end = end;
	acs->stp = stp;

	acsLst->acsLst.push_back(acs);

	return 0;
}