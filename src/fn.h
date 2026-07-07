#pragma once

#ifndef FCN_H
#define FCN_H



#include "dfn.h"
#include "envr.h"

extern int intlEnvr(struct Envr** envr);

FcnStrc* bldFcn(char* nm, PrmLstStrc* prmLst, Stmt* stmt);
FcnStrc* bldFcn(char* nm, PrmLstStrc* prmLst);
ArgLstStrc* bldArgLst();
int argLstAdd(ArgLstStrc* argLst, Exp* arg);
int argLstAdd(ArgLstStrc* argLst, Exp* prm, Exp* arg);
struct PrmLstStrc* bldPrmLst();
int prmLstAdd(PrmLstStrc* prmLst, Exp* prm);
int prmLstAdd(PrmLstStrc* prmLst, Exp* prm, struct Exp* dft);


FcnStrc* bldFcn(char* nm, struct PrmLstStrc* prmLst, struct Stmt* stmt)
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

int argLstAdd(ArgLstStrc* argLst, Exp* arg)
{

	argLst->prmArr.push_back(nullptr);
	argLst->argArr.push_back(arg);

	//printf("**exp typ**: %d\n", arg->typ);
	//printf("arg: %d\n", dynamic_cast<ValExpStrc*>(arg)->val->v.int_);
	//printf("typ: %d\n", dynamic_cast<ValExpStrc*>(arg)->val->typ);
	//printf("nm: %s\n", dynamic_cast<LvlExpStrc*>(arg)->vrb->nm.c_str());

	//printf()

// #ifndef DBG_FLG
// #define DBG_FLG
// 	printf("**exp typ**: %d\n", arg->typ);
// 	printf("arg: %d\n", dynamic_cast<ValExpStrc*>(arg)->val->v.int_);
// 	printf("typ: %d\n", dynamic_cast<ValExpStrc*>(arg)->val->typ);
//
// #endif

	return 0;
}

///TODO
int argLstAdd(struct ArgLstStrc* argLst, struct Exp* prm, struct Exp* arg)
{
	argLst->prmArr.push_back(static_cast<VrbExp*>(prm));
	argLst->argArr.push_back(arg);

	return 0;
}

PrmLstStrc* bldPrmLst()
{
	struct PrmLstStrc* rslt = new PrmLstStrc;

	return rslt;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct Exp* prm)
{
	prmLst->prmArr.push_back(static_cast<VrbExp*>(prm));
	prmLst->expArr.push_back(nullptr);

	return 0;
}

int prmLstAdd(struct PrmLstStrc* prmLst, struct Exp* prm, struct Exp* dft)
{
	prmLst->prmArr.push_back(static_cast<VrbExp*>(prm));
	prmLst->expArr.push_back(dft);

	return 0;
}

#endif
