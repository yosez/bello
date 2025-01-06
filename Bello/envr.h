#pragma once

#include <stdio.h>
#include <malloc.h>
#include <vector>
#include <algorithm>

#include "y.tab.h"
#include "dftn.h"
#include "vrb.h"
#include "fcn.h"
#ifndef NTV_H
#define NTV_H
#endif

#ifndef EXP_H
#define EXP_H        
#endif              

using namespace std;

//typedef struct CnstStrc* ntvFcnDfn(vector<EnvrStrc*>& envr, int prmCnt, vector <CnstStrc*> prmArr);

extern struct ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst);

struct VrbStrc* addVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp);
struct VrbStrc* getEnvrVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp);
struct VrbStrc* addVrbGlb(vector<EnvrStrc*>& envr, VrbExpStrc* vrbExp);
int prtEnvrVrb(struct EnvrStrc* envr);

int addFcn(struct EnvrStrc* envr, struct FcnStrc* fcn);
struct FcnStrc* getEnvrFcn(struct EnvrStrc* envr, struct FcnExpStrc* fcnExp);

struct ClsStrc* getEnvrCls(EnvrStrc* envr, string nm);
struct ClsStrc* getGlbCls(vector<EnvrStrc*>& envr, string nm);

int addNtvFcn(struct EnvrStrc* envr, string fcnNm, ntvFcnDfn* fcn, int prmCnt);
struct NtvFcnStrc* getNtvFcn(struct EnvrStrc* envr, struct FcnExpStrc* fcn);

int addCls(struct EnvrStrc* envr, struct ClsStrc* cls);
struct ClsStrc* getEnvrCls(struct EnvrStrc* envr, string nm);

int prtEnvrFcn(struct EnvrStrc* envr);
int intlEnvr(struct EnvrStrc** envr);
int initGlbEnvr(vector<EnvrStrc*>& envr);

extern struct CnstStrc* rdIntFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* rdFltFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* rdBlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* rdFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* rdlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* prtFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* prtlnFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);
extern struct CnstStrc* newArrFcn(vector<EnvrStrc*>& envr, int argCnt, vector <CnstStrc*> argArr);



struct VrbStrc* addVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp)
{

	envr->vrbArr.push_back(bldVrb(vrbExp->nm));

	return envr->vrbArr.back();

}

struct VrbStrc* addVrbGlb(vector<EnvrStrc*>& envr, VrbExpStrc* vrbExp)
{
	envr[0]->glbArr.push_back(bldVrb(string(vrbExp->nm)));

	return envr[0]->glbArr.back();
}

struct VrbStrc* getEnvrVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp)
{
	int i;

	for (i = 0; i < envr->vrbArr.size(); i++)
	{

		if (vrbExp->nm == *(envr->vrbArr[i]->nm))
		{
			return envr->vrbArr[i];
		}
	}

	if (envr->typ == TOP_LEVEL_ENVIRONMENT)
	{
		for (i = 0; i < envr->glbArr.size(); i++)
		{
			if (vrbExp->nm == *(envr->glbArr[i]->nm))
			{
				return envr->glbArr[i];
			}
		}
	}

	return nullptr;

}

//struct VrbStrc* getVrb(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct VrbExpStrc* vrbExp)
//{
//	struct VrbStrc* vrb = NULL;
//	vrb = getEnvrVrb(fcnEnvr, vrbExp) != NULL ? getEnvrVrb(fcnEnvr, vrbExp) : getEnvrVrb(glbEnvr, vrbExp);
//
//	return vrb;
//}

struct VrbStrc* getVrb(vector<EnvrStrc*>& envr, struct VrbExpStrc* vrbExp)
{
	struct VrbStrc* vrb = NULL;

	int lyrNbr = envr.size();

	int lyr = envr.size() - 1;

	EnvrStrc* tmp;

	int lyrBfrFcn = 0;

	//从最内1层环境向外找到第1个函数环境
	while (true)
	{
		tmp = envr[lyr];

		vrb = getEnvrVrb(tmp, vrbExp);

		if (vrb != NULL)
		{
			return vrb;
		}

		if (envr[lyr]->typ == FUNCTION_ENVIRONMENT)
		{
			break;
		}

		if (envr[lyr]->typ == TOP_LEVEL_ENVIRONMENT)
		{
			return NULL;
		}

		lyr--;
	}

	//从外向内找到第1个函数环境之前的环境
	while (lyrBfrFcn + 1 < lyr && envr[lyrBfrFcn + 1]->typ != FUNCTION_ENVIRONMENT)
	{
		lyrBfrFcn++;
	}

	lyr = lyrBfrFcn;

	//从外向内的第1个函数环境之前的环境向外找到顶层空间环境
	while (true)
	{
		tmp = envr[lyr];

		vrb = getEnvrVrb(tmp, vrbExp);

		if (vrb != NULL)
		{
			return vrb;
		}

		if (lyr == 0)
		{
			return NULL;
		}

		lyr--;
	}

	return vrb;
}




int prtEnvrVrb(struct EnvrStrc* envr)
{
	int i;

	printf("envr variables: %d\n", envr->vrbArr.size());

	for (i = 0; i < envr->vrbArr.size(); i++)
	{
		printf("%2d:\t%s\n", i, envr->vrbArr[i]->nm);
	}

	return 0;
}


int addFcn(struct EnvrStrc* envr, struct FcnStrc* fcn)
{

	envr->fcnArr.push_back(fcn);

	return 0;
}

struct FcnStrc* getEnvrFcn(struct EnvrStrc* envr, struct FcnExpStrc* fcnExp)
{
	int i;

	for (i = 0; i < envr->fcnArr.size(); i++)
	{
		if (fcnExp->nm.compare(envr->fcnArr[i]->nm) == 0)
		{
			return envr->fcnArr[i];
		}
	}

	return nullptr;

}


struct FcnStrc* getFcn(vector<EnvrStrc*> envr, struct FcnExpStrc* fcnExp)
{
	struct FcnStrc* fcn = nullptr;

	int lyr = envr.size() - 1;

	while (true)
	{
		fcn = getEnvrFcn(envr[lyr], fcnExp);

		if (fcn != nullptr)
		{
			return fcn;
		}

		if (lyr == 0)
		{
			return nullptr;
		}

		if (envr[lyr]->typ == FUNCTION_ENVIRONMENT)
		{
			break;
		}

		lyr--;
	}

	int lyrBfrFcn = 0;

	while (lyrBfrFcn < lyr && envr[lyrBfrFcn]->typ != FUNCTION_ENVIRONMENT)
	{
		lyrBfrFcn++;
	}

	lyr = lyrBfrFcn;

	while (true)
	{
		fcn = getEnvrFcn(envr[lyr], fcnExp);

		if (fcn != nullptr)
		{
			return fcn;
		}

		if (lyr == 0)
		{
			return nullptr;
		}

		lyr--;
	}

	return fcn;
}


int addNtvFcn(struct EnvrStrc* envr, string fcnNm, ntvFcnDfn* fcn, int prmCnt)
{
	struct NtvFcnStrc* fcnDfn = new NtvFcnStrc;

	fcnDfn->fcn = fcn;

	fcnDfn->prmCnt = prmCnt;

	fcnDfn->fcnNm = fcnNm;

	envr->ntvFcnArr.push_back(fcnDfn);

	return 0;
}

// struct NtvFcnStrc* getNtvFcn(struct EnvrStrc *envr, char *fcnNm)
// {
//     struct NtvFctnStrc* rslt= NULL;

//     int i;

//     for (i=0; i< envr->ntvFcnCnt;i++)
//     {
//         if (strcmp(fcnNm,envr->ntvFcnArr[i]->fcnNm)==0)
//         {
//             return envr->ntvFcnArr[i];
//         }
//     }

//     return NULL;
// }

struct NtvFcnStrc* getNtvFcn(struct EnvrStrc* envr, struct FcnExpStrc* fcn)
{
	struct NtvFctnStrc* rslt = NULL;

	int i;

	for (i = 0; i < envr->ntvFcnArr.size(); i++)
	{
		if (fcn->nm.compare(envr->ntvFcnArr[i]->fcnNm) == 0)
		{
			return envr->ntvFcnArr[i];
		}
	}

	return NULL;
}

int addCls(struct EnvrStrc* envr, struct ClsStrc* cls)
{
	envr->clsArr.push_back(cls);

	return 0;
}

//struct ClsStrc* getEnvrCls(struct EnvrStrc* envr, string nm)
//{
//	ClsStrc* rslt = NULL;
//
//	for (int i = 0; i < envr->clsArr.size(); i++)
//	{
//		if (*(envr->clsArr.at(i)->nm) == nm)
//		{
//			return envr->clsArr.at(i);
//		}
//	}
//
//	return NULL;
//}

struct ClsStrc* getEnvrCls(EnvrStrc* envr, string nm)
{
	vector<ClsStrc*>* vct = &(envr->clsArr);

	auto itr = find_if(vct->begin(), vct->end(), [nm](ClsStrc* cls)
		{
			printf("fnd cls #2: %s\n", cls->nm->c_str());
			return *(cls->nm) == nm;
		});

	if (itr != vct->end())
	{
		auto rslt = *itr;
		return rslt;
	}

	return nullptr;
}


struct ClsStrc* getGlbCls(vector<EnvrStrc*>& envr, string nm)
{
	ClsStrc* rslt = nullptr;

	any_of(envr.rbegin(), envr.rend(), [nm, &rslt](EnvrStrc* envr)
		{
			printf("fnd cls: %s\n", nm.c_str());
			rslt = getEnvrCls(envr, nm);
			return rslt != nullptr;
		});

	return rslt;
}

struct NtvFcnStrc* getNtvFcn(vector<EnvrStrc*> envr, struct FcnExpStrc* fcn)
{
	struct NtvFctnStrc* rslt = nullptr;

	int i;

	//printf("ntvFcnCnt: %d\n", envr->ntvFcnArr.size());
	//printf("cll fcn:%s \n", fcn->nm.c_str());

	for (i = 0; i < envr[0]->ntvFcnArr.size(); i++)
	{
		//printf("fcn nm: %s\n", envr->ntvFcnArr[i]->fcnNm);

		if (fcn->nm.compare(envr[0]->ntvFcnArr[i]->fcnNm) == 0)
		{
			return envr[0]->ntvFcnArr[i];
		}
	}

	return nullptr;
}



int prtEnvrFcn(struct EnvrStrc* envr)
{
	int i;

	printf("envr functions: %d\n", envr->fcnArr.size());

	for (i = 0; i < envr->fcnArr.size(); i++)
	{
		printf("%2d:\t%s\n", i, envr->fcnArr[i]->nm);
	}

	return 0;
}




int initGlbEnvr(vector<EnvrStrc*>& envr)
{

	envr.push_back(new EnvrStrc(TOP_LEVEL_ENVIRONMENT));
	envr[0]->typ = TOP_LEVEL_ENVIRONMENT;

	addNtvFcn(envr[0], string("readInt"), rdIntFcn, 0);
	addNtvFcn(envr[0], string("readFloat"), rdFltFcn, 0);
	addNtvFcn(envr[0], string("readBool"), rdBlnFcn, 0);
	addNtvFcn(envr[0], string("read"), rdFcn, 0);
	addNtvFcn(envr[0], string("readln"), rdlnFcn, 0);
	addNtvFcn(envr[0], string("print"), prtFcn, 1);
	addNtvFcn(envr[0], string("println"), prtlnFcn, 1);
	addNtvFcn(envr[0], string("newArray"), newArrFcn, 1);

	return 0;
}

int intlEnvr(struct EnvrStrc** envr)
{

	*envr = new EnvrStrc;

	return 0;
}



