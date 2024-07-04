#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "dftn.h"
// #ifndef EXP_H
// #define EXP_H
// #endif

extern struct ExpStrc* bldCnstIntExp(int intVl);

struct ElmtLstStrc* bldElmtLst()
{
	//struct ElmtLstStrc* rslt = (struct ElmtLstStrc*)malloc(sizeof(struct ElmtLstStrc));
	struct ElmtLstStrc* rslt = new ElmtLstStrc;

	//rslt->elmtSz = 10;
	//rslt->elmtCnt = 0;

	//rslt->elmtArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->elmtSz);

	return rslt;
}

int elmtLstAdd(struct ElmtLstStrc* elmtLst, struct ExpStrc* exp)
{
	//if (elmtLst->elmtCnt == elmtLst->elmtSz)
	//{
	//	elmtLst->elmtSz *= 2;
	//	elmtLst->elmtArr = (struct ExpStrc**)realloc(elmtLst->elmtArr, sizeof(struct ExpStrc*) * elmtLst->elmtSz);
	//}

	//elmtLst->elmtArr[elmtLst->elmtCnt] = exp;

	//elmtLst->elmtCnt++;

	elmtLst->elmtArr.push_back(exp);

	return 0;
}

struct PstnLstStrc* bldPstnLst()
{
	//struct PstnLstStrc* rslt = (struct PstnLstStrc*)malloc(sizeof(struct PstnLstStrc));
	struct PstnLstStrc* rslt = new PstnLstStrc;

	//rslt->pstnSz = 10;
	//rslt->pstnCnt = 0;

	//rslt->pstnArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->pstnSz);

	return rslt;
}

int pstnLstAdd(struct PstnLstStrc* pstnLst, struct ExpStrc* exp)
{
	//if (pstnLst->pstnCnt == pstnLst->pstnSz)
	//{
	//	pstnLst->pstnSz *= 2;

	//	pstnLst->pstnArr = (struct ExpStrc**)realloc(pstnLst->pstnArr, sizeof(struct ExpStrc*) * pstnLst->pstnSz);
	//}

	//pstnLst->pstnArr[pstnLst->pstnCnt] = exp;

	//pstnLst->pstnCnt++;

	pstnLst->pstnArr.push_back(exp);

	return 0;
}

int intlArr(struct ArrStrc** arr)
{
	//(*arr) = (struct ArrStrc*)malloc(sizeof(struct ArrStrc));
	(*arr) = new ArrStrc;
	//(*arr)->elmtCnt = 0;
	//(*arr)->elmtSz = 10;

	//(*arr)->elmtArr = (struct CnstStrc**)malloc(sizeof(struct CnstStrc*) * (*arr)->elmtSz);

	return 0;
}

int addElmt(struct ArrStrc* arr, struct CnstStrc* elmt)
{
	//if (arr->elmtCnt == arr->elmtSz)
	//{
	//	arr->elmtSz *= 2;

	//	arr->elmtArr = (struct CnstStrc**)realloc(arr->elmtArr, sizeof(struct CnstStrc*) * arr->elmtSz);
	//}

	//arr->elmtArr[arr->elmtCnt] = elmt;

	//arr->elmtCnt++;

	arr->elmtArr.push_back(elmt);

	return 0;
}

struct EvlLstStrc* bldEvlLst()
{
	//struct EvlLstStrc* rslt = (struct EvlLstStrc*)malloc(sizeof(struct EvlLstStrc));
	struct EvlLstStrc* rslt = new EvlLstStrc;

	//rslt->evlSz = 10;
	//rslt->evlCnt = 0;

	//rslt->blnSlc = (int*)malloc(sizeof(bool) * rslt->evlSz);
	//rslt->pstnArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->evlSz);
	//rslt->strtArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->evlSz);
	//rslt->endArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->evlSz);
	//rslt->stpArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->evlSz);

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