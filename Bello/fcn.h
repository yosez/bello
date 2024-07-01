#pragma once

#include <stdio.h>
#include <malloc.h>
#include "y.tab.h"
#include "dftn.h"
//#include "envr.h"
#ifndef ENVR_H
#define ENVR_H
#endif

extern int intlEnvr(struct EnvrStrc** envr);

struct FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst, struct StmtStrc* stmt);
struct ArgLstStrc* bldArgLst();
int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* arg);
struct PrmLstStrc* bldPrmLst();
int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm);


struct FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst, struct StmtStrc* stmt)
{
	struct FcnStrc* rslt = new FcnStrc;

	rslt->nm = (char*)malloc(0x100);
	strcpy(rslt->nm, nm);

	intlEnvr(&(rslt->envr));

	rslt->prmLst = prmLst;
	rslt->stmt = stmt;

	return rslt;
}


struct ArgLstStrc* bldArgLst()
{
	struct ArgLstStrc* rslt = new ArgLstStrc;

	rslt->argSz = 10;
	rslt->argCnt = 0;
	rslt->argArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->argSz);

	return rslt;
}

int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* arg)
{
	if (argLst->argCnt == argLst->argSz)
	{
		argLst->argSz *= 2;
		argLst->argArr = (struct ExpStrc**)realloc(argLst->argArr, sizeof(struct ExpStrc*) * argLst->argSz);
	}

	argLst->argArr[argLst->argCnt] = arg;

	argLst->argCnt++;

	return 0;
}

struct PrmLstStrc* bldPrmLst()
{
	struct PrmLstStrc* rslt = new PrmLstStrc;

	rslt->prmSz = 10;
	rslt->prmCnt = 0;
	rslt->prmArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->prmSz);

	return rslt;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm)
{
	if (prmLst->prmCnt == prmLst->prmSz)
	{
		prmLst->prmSz *= 2;
		prmLst->prmArr = (struct ExpStrc**)realloc(prmLst->prmArr, sizeof(struct ExpStrc*) * prmLst->prmSz);
	}

	prmLst->prmArr[prmLst->prmCnt] = prm;

	prmLst->prmCnt++;

	return 0;
}

