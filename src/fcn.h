#pragma once

#ifndef FCN_H
#define FCN_H

#define DBG_FLG


#include "dftn.h"
#include "envr.h"

extern int intlEnvr(struct EnvrStrc** envr);

FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst, struct StmtStrc* stmt);
FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst);
ArgLstStrc* bldArgLst();
int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* arg);
int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* prm, struct ExpStrc* arg);
struct PrmLstStrc* bldPrmLst();
int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm);
int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm, struct ExpStrc* dft);


FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst, struct StmtStrc* stmt)
{
	FcnStrc* rslt = new FcnStrc(nm, prmLst, stmt);

	return rslt;
}

FcnStrc* bldFcn(char* nm, PrmLstStrc* prmLst)
{
	FcnStrc* rslt = new FcnStrc(nm, prmLst, nullptr);


	return rslt;
}


ArgLstStrc* bldArgLst()
{
	ArgLstStrc* rslt = new ArgLstStrc;

	return rslt;
}

int argLstAdd(ArgLstStrc* argLst, ExpStrc* arg)
{

	argLst->prmArr.push_back(nullptr);
	argLst->argArr.push_back(arg);

#ifdef DBG_FLG

	printf("**exp typ**: %d\n", arg->typ);
	printf("arg: %d\n", dynamic_cast<ValExpStrc*>(arg)->val->v.int_);
	printf("typ: %d\n", dynamic_cast<ValExpStrc*>(arg)->val->typ);

#endif

	return 0;
}

///TODO
int argLstAdd(struct ArgLstStrc* argLst, struct ExpStrc* prm, struct ExpStrc* arg)
{
	argLst->prmArr.push_back(static_cast<VrbExpStrc*>(prm));
	argLst->argArr.push_back(arg);

	return 0;
}

PrmLstStrc* bldPrmLst()
{
	struct PrmLstStrc* rslt = new PrmLstStrc;

	return rslt;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm)
{
	prmLst->prmArr.push_back(static_cast<VrbExpStrc*>(prm));
	prmLst->expArr.push_back(nullptr);

	return 0;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct ExpStrc* prm, struct ExpStrc* dft)
{
	prmLst->prmArr.push_back(static_cast<VrbExpStrc*>(prm));
	prmLst->expArr.push_back(dft);

	return 0;
}

#endif
