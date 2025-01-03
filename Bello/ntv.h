#pragma once
#pragma once
#pragma once
#include <malloc.h>
#include "dftn.h"
#include "expt.h"
#include "cnst.h"


struct CnstStrc* rdIntFcn(vector<EnvrStrc*>& envr, int argCnt, vector<CnstStrc*> argArr);
struct CnstStrc* rdFltFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* rdBlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* rdFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* rdlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* prtFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* prtlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* newArrFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
struct CnstStrc* flOpn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);


struct CnstStrc* rdIntFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	int i;

	fscanf(stdin, "%d", &i);

	struct CnstStrc* rslt;

	rslt = bldIntCnst(i);

	return rslt;
}


struct CnstStrc* rdFltFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	float f;

	fscanf(stdin, "%f", &f);

	struct CnstStrc* rslt;

	rslt = bldIntCnst(f);

	return rslt;
}

struct CnstStrc* rdBlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	char* blnStr = (char*)malloc(0x10);

	fscanf(stdin, "%s", blnStr);

	struct CnstStrc* rslt;

	if (strcmp(blnStr, "true"))
	{
		rslt = bldBlnCnst(1);
	}
	else
	{
		rslt = bldBlnCnst(0);
	}

	return rslt;
}

struct CnstStrc* rdFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	char* str = (char*)malloc(0x1000);

	fscanf(stdin, "%s", str);

	struct CnstStrc* rslt;

	rslt = bldStrCnst(str);

	return rslt;
}

struct CnstStrc* rdlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 0)
	{
		throw new ExFcnTooMnyArg;
	}

	char* str = (char*)malloc(0x1000);

	fgets(str, 0x1000, stdin);

	struct CnstStrc* rslt;

	rslt = bldStrCnst(str);

	return rslt;
}

struct CnstStrc* prtFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 1)
	{
		throw new ExFcnTooFewArg;
	}

	prtCnst(argArr[0]);

	return NULL;
}

struct CnstStrc* prtlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	if (argCnt != 1)
	{
		throw new ExFcnTooFewArg;
	}

	prtlnCnst(argArr[0]);

	return NULL;
}

struct CnstStrc* newArrFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = ARRAY_VALUE;

	//rslt->vl.arr = (struct ArrStrc*)malloc(sizeof(struct ArrStrc*));
	rslt->vl.arr = new ArrStrc;

	int elmtCnt;

	elmtCnt = argArr[0]->vl.intVl;

	int i;

	for (i = 0; i < elmtCnt; i++)
	{
		//rslt->vl.arr->elmtArr[i] = bldNllCnst();
		rslt->vl.arr->elmtArr.push_back(bldNllCnst());
	}

	return rslt;
}

// struct CnstStrc *flOpn(struct EnvrStrc *envr, int argCnt, struct CnstStrc **argArr)
// {
//     if (argCnt < 2)
//     {
//         throw new ExFcnTooFewArg;
//     }

//     if (argCnt > 2)
//     {
//         throw new ExFcnTooFewArg;
//     }

//     char *str=(char *)malloc(0x1000);

//     fscanf(stdin, "%s", str);

//     struct CnstStrc *rslt;

//     rslt= bldStrCnst(str);

//     return rslt;
// }