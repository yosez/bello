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
extern struct ExpStrc* bldCnstIntExp(int intVl);
extern struct CnstStrc* clcExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ExpStrc* exp);
extern struct EnvrStrc* glbEnvr;

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

struct EvlLstStrc* bldEvlLst()
{

	struct EvlLstStrc* rslt = new EvlLstStrc;

	return rslt;
}

int evlLstElmtAdd(struct EvlLstStrc* evlLst, struct ExpStrc* exp)
{
	//if (evlLst->evlCnt == evlLst->evlSz)
	//{
	//	evlLst->evlSz *= 2;

	//	evlLst->blnSlc = (int*)realloc(evlLst->blnSlc, sizeof(bool) * evlLst->evlSz);

	//	evlLst->pstnArr = (struct ExpStrc**)realloc(evlLst->pstnArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//	evlLst->strtArr = (struct ExpStrc**)realloc(evlLst->strtArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//	evlLst->endArr = (struct ExpStrc**)realloc(evlLst->endArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//	evlLst->stpArr = (struct ExpStrc**)realloc(evlLst->stpArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//}


	//evlLst->blnSlc[evlLst->evlCnt] = false;
	evlLst->blnSlc.push_back(false);

	//evlLst->pstnArr[evlLst->evlCnt] = exp;
	evlLst->pstnArr.push_back(exp);

	evlLst->strtArr.push_back(NULL);
	evlLst->endArr.push_back(NULL);
	evlLst->stpArr.push_back(NULL);

	evlLst->evlCnt++;

	return 0;
}

int evlLstSlcAdd(struct EvlLstStrc* evlLst, struct ExpStrc* strt, struct ExpStrc* end, struct ExpStrc* stp)
{
	//if (evlLst->evlCnt == evlLst->evlSz)
	//{
	//	evlLst->evlSz *= 2;

	//	evlLst->blnSlc = (int*)realloc(evlLst->blnSlc, sizeof(bool*) * evlLst->evlSz);

	//	evlLst->pstnArr = (struct ExpStrc**)realloc(evlLst->pstnArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//	evlLst->strtArr = (struct ExpStrc**)realloc(evlLst->strtArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//	evlLst->endArr = (struct ExpStrc**)realloc(evlLst->endArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//	evlLst->stpArr = (struct ExpStrc**)realloc(evlLst->stpArr, sizeof(struct ExpStrc*) * evlLst->evlSz);
	//}

	//evlLst->blnSlc[evlLst->evlCnt] = true;
	evlLst->blnSlc.push_back(true);

	//evlLst->strtArr[evlLst->evlCnt] = strt;
	//evlLst->endArr[evlLst->evlCnt] = end;
	//evlLst->stpArr[evlLst->evlCnt] = stp;	
	
	evlLst->pstnArr.push_back(NULL);

	evlLst->strtArr.push_back(strt);
	evlLst->endArr.push_back(end);
	evlLst->stpArr.push_back(stp);

	evlLst->evlCnt++;

	return 0;
}