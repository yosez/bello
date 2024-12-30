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
struct FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst);
struct ArgLstStrc* bldArgLst();
int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* arg);
int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* prm, struct ExpStrc* arg);
struct PrmLstStrc* bldPrmLst();
int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm);
int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm, struct ExpStrc* dft);


struct FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst, struct StmtStrc* stmt)
{
	struct FcnStrc* rslt = new FcnStrc;

	rslt->nm = nm;

	rslt->prmLst = prmLst;
	rslt->stmt = stmt;

	return rslt;
}

struct FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst)
{
	struct FcnStrc* rslt = new FcnStrc;

	rslt->nm = nm;

	rslt->prmLst = prmLst;
	rslt->stmt = nullptr;

	return rslt;
}


struct ArgLstStrc* bldArgLst()
{
	struct ArgLstStrc* rslt = new ArgLstStrc;

	return rslt;
}

int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* arg)
{

	argLst->prmArr.push_back(nullptr);
	argLst->argArr.push_back(arg);

	return 0;
}

int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* prm, struct ExpStrc* arg)
{
	argLst->prmArr.push_back(prm);
	argLst->prmArr.push_back(arg);

	return 0;
}

struct PrmLstStrc* bldPrmLst()
{
	struct PrmLstStrc* rslt = new PrmLstStrc;

	return rslt;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm)
{
	prmLst->prmArr.push_back(prm);
	prmLst->expArr.push_back(nullptr);

	return 0;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm, struct ExpStrc* dft)
{
	prmLst->prmArr.push_back(prm);
	prmLst->expArr.push_back(dft);

	return 0;
}

