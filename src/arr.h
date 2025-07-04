#pragma once

#ifndef ARR_H
#define ARR_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "dftn.h"


//�˲�������ı�������������ɾ��
extern struct ExpStrc* bldCnstIntExp(int intVl);
extern struct CnstStrc* clcExp(vector<EnvrStrc*>& envr, struct ExpStrc* exp);

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

#endif