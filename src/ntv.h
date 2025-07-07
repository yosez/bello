#pragma once

#ifndef NTV_H
#define NTV_H

#include "dftn.h"
#include "expt.h"
#include "val.h"


struct ValStrc* rdIntFcn(vector<EnvrStrc*>& envr, int argCnt, vector<ValStrc*> argArr);
struct ValStrc* rdFltFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* rdBlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* rdFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* rdlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* prtFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* prtlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* newArrFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);
struct ValStrc* flOpn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr);


struct ValStrc* rdIntFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	int i;

	fscanf(stdin, "%d", &i);

	struct ValStrc* rslt;

	rslt = bldIntVal(i);

	return rslt;
}


struct ValStrc* rdFltFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	float f;

	fscanf(stdin, "%f", &f);

	struct ValStrc* rslt;

	rslt = bldIntVal(f);

	return rslt;
}

struct ValStrc* rdBlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	char* blnStr = (char*)malloc(0x10);

	fscanf(stdin, "%s", blnStr);

	struct ValStrc* rslt;

	if (strcmp(blnStr, "true"))
	{
		rslt = bldBlnVal(1);
	}
	else
	{
		rslt = bldBlnVal(0);
	}

	return rslt;
}

struct ValStrc* rdFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	char* str = (char*)malloc(0x1000);

	fscanf(stdin, "%s", str);

	struct ValStrc* rslt;

	rslt = bldStrVal(str);

	return rslt;
}

struct ValStrc* rdlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	char* str = (char*)malloc(0x1000);

	fgets(str, 0x1000, stdin);

	struct ValStrc* rslt;

	rslt = bldStrVal(str);

	return rslt;
}

struct ValStrc* prtFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 1)
	{
		throw new ExFcnTooFewArg;
	}

	prtVal(argArr[0]);

	return NULL;
}

struct ValStrc* prtlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 1)
	{
		throw new ExFcnTooFewArg;
	}

	prtlnVal(argArr[0]);

	return NULL;
}

struct ValStrc* newArrFcn(vector<EnvrStrc*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	struct ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Arr;

	//rslt->vl.arr = (struct ArrStrc*)malloc(sizeof(struct ArrStrc*));
	rslt->v.arr = new ArrStrc;

	int elmtCnt;

	elmtCnt = argArr[0]->v.int_;

	int i;

	for (i = 0; i < elmtCnt; i++)
	{
		//rslt->vl.arr->elmtArr[i] = bldNllCnst();
		rslt->v.arr->elmtArr.push_back(bldNllVal());
	}

	return rslt;
}


#endif
