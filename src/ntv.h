#pragma once

#ifndef NTV_H
#define NTV_H

#include "dfn.h"
#include "ex.h"
#include "val.h"
#include <functional>

#include <print>


//defination of native functions
std::function<ValStrc* (vector<Envr*>&, int, vector<ValStrc*>)> ntvFmt;



//TODO argCnt -1 represent multi variables after 1 parameter
/// argCnt -2 ... after 2 parameter
/// argCnt MAXINT arbitrary parameters
ValStrc* rdIntFcn(vector<Envr*>& envr, int argCnt, vector<ValStrc*> argArr);
ValStrc* rdFltFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* rdBlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* rdFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* rdlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* prtFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* prtlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);

ValStrc* newArrFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flOpn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flSk(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flScn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flWrt(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flTl(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flCls(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flPrt(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
//2 calling names scat and strcat
ValStrc* scat(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* ssub(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* exe(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);

ValStrc* flScnInt(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
ValStrc* flScnDbl(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);



struct ValStrc* rdIntFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
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


struct ValStrc* rdFltFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
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

struct ValStrc* rdBlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
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

struct ValStrc* rdFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
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

struct ValStrc* rdlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
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

struct ValStrc* prtFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	// if (argCnt < 1)
	// {
	// 	throw new ExFcnTooFewArg;
	// }

	int i=0;

	for (i=0;i<argArr.size();i++)
	{
		prtVal(argArr[i]);
	}

	// int i=0;
	//
	// if (argCnt == INT_MAX)
	// {
	// 	for (i=0;i<argCnt;i++)
	// 	{
	// 		prtVal(argArr[i]);
	// 	}
	// }
	// else if (argCnt == )
	// prtVal(argArr[0]);



// #ifdef DBG_FLG
// 	printf("prt fcn %d\n", argArr[0]->v.int_);
// #endif

	return nullptr;
}

struct ValStrc* prtlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt != 1)
	{
		throw new ExFcnTooFewArg;
	}

	prtlnVal(argArr[0]);

	return NULL;
}

struct ValStrc* newArrFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
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
		rslt->v.arr->elmtArr.push_back(bldNlVal());
	}

	return rslt;
}

struct ValStrc* flOpn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt!=2)
	{
		return nullptr;
	}

	rslt->typ = ValEnm::Ptr;

	rslt->v.ptr = fopen(argArr[0]->v.str->c_str(), argArr[1]->v.str->c_str());

	return rslt;

}

struct ValStrc* flSk(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt!=3)
	{
		return nullptr;
	}

	FILE * fl;

	fl = (FILE* )argArr[0]->v.ptr;

	int psn;

	psn = argArr[1]->v.int_;

	int mtd;

	mtd = argArr[2]->v.int_;

	fseek(fl, psn, mtd);

	return nullptr;
}

struct ValStrc* flTl(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt != 1)
	{
		return nullptr;
	}

	FILE * fl;

	fl = (FILE*) argArr[0]->v.ptr;

	rslt->v.int_ = ftell(fl);

	rslt->typ = ValEnm::Int;

	return rslt;
}

struct ValStrc* flCls(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt!=1)
	{
		return nullptr;
	}

	// string* nm = new string(*(argArr[0]->v.str));

	fclose((FILE*)argArr[0]->v.ptr);

	return nullptr;
}

struct ValStrc *flScnInt(vector<Envr *> &envr, int argCnt, vector<ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt!=1)
	{
		return nullptr;
	}

	fscanf((FILE*)(argArr[0]->v.ptr), "%d", &rslt->v.int_);

	rslt->typ = ValEnm::Int;

	return rslt;
}

struct ValStrc *flScnDbl(vector<Envr *> &envr, int argCnt, vector<ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt!=1)
	{
		return nullptr;
	}

	fscanf((FILE*)(argArr[0]->v.ptr), "%d", &rslt->v.int_);

	rslt->typ = ValEnm::Flt;

	return rslt;
}

struct ValStrc* flPrt(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *rslt = new ValStrc;

	if (argCnt!=2)
	{
		return nullptr;
	}

	FILE *fl;
	fl = (FILE*)(argArr[0]->v.ptr);

	switch (argArr[1]->typ)
	{
		case ValEnm::Int:
		{
			fprintf(fl, "%d", argArr[1]->v.int_);
			break;
		}
		case ValEnm::Flt:
		{
			fprintf(fl, "%f", argArr[1]->v.flt);
			break;
		}
		case ValEnm::Bln:
		{
			fprintf(fl, "%s", argArr[1]->v.bln==0? "false" : "true");
			break;
		}
		case ValEnm::Str:
		{
			fprintf(fl, "%s", argArr[1]->v.str->c_str());
			break;
		}
		case ValEnm::Nl:
		{
			fprintf(fl, "%s", "(null)");
			break;
		}

	}

	fclose(fl);

	return nullptr;
}

ValStrc* exe(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	if (argCnt<1)
	{
		return nullptr;
	}

	system(argArr[0]->v.str->c_str());
}

ValStrc* scat(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	string *op, *op2, *rslStr;
	ValStrc *rsl;

	//ValUnn

	op = argArr.at(0)->v.str;  //clcExp(envr, argArr.at(0)->v.str+)
	op2 = argArr.at(1)->v.str;  //clcExp(envr, argArr.at(0)->v.str+)
	print("{} {}", op->c_str(), op2->c_str());
	rslStr = new string(string(op->c_str())+string(op2->c_str()));
	//print("{}", rsl)*/
	rsl = new ValStrc(ValEnm::Str, ValUnn(rslStr));

	return rsl;
}

ValStrc* ssub(vector<Envr*>&envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *rsl;



	string orn= string(argArr.at(0)->v.str->c_str());
	string *rslStr = new string(orn.substr(argArr.at(1)->v.int_));

	print("prm ssub: {} {}", argArr[0]->v.str->c_str(), argArr[1]->v.int_);

	rsl = new ValStrc(ValEnm::Str, ValUnn(rslStr));

	print("prm ssub #2\n");

	return rsl;
}

// ValStrc* srev(vector<Envr*>&envr, int argCnt, vector <ValStrc*> argArr)
// {
// 	ValStrc *rsl;
//
// 	print("prm srev: {} ", argArr[0]->v.str->c_str());
//
// 	string orn= string(argArr.at(0)->v.str->c_str());
// 	orn.();
//
// 	string *rev= new string(orn);
//
// 	rsl = new ValStrc(ValEnm::Str, ValUnn(rev));
//
// 	return rsl;
// }

///TODO
ValStrc* scpy(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr)
{
	ValStrc *op, *op2, *rslt;

	//ValUnn

	op = new ValStrc(ValEnm::Str,  ValUnn(new string(argArr.at(0)->v.str->c_str())));  //clcExp(envr, argArr.at(0)->v.str+)
	// op2 = new ValStrc(ValEnm::Str,  ValUnn((argArr.at(1)->v.str)));  //clcExp(envr, argArr.at(0)->v.str+)
	// rslt = new ValStrc(*op + *op2);
	return op;
}

#endif
