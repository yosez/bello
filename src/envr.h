#pragma once

#ifndef ENVR_H
#define ENVR_H

#include <algorithm>
#include <stdio.h>
#include <vector>

#include "dfn.h"
#include "exp.h"
#include "ntv.h"
#include "vrb.h"
#include "y.tab.h"

extern VrbStrc* bldVrb(string nm);

using namespace std;

extern struct Exp* bldFcnExp(char* nm, struct ArgLstStrc* argLst);

VrbStrc* addVrb(struct Envr* envr, struct VrbExp* vrbExp);
VrbStrc* getEnvrVrb(struct Envr* envr, struct VrbExp* vrbExp);
VrbStrc* addVrbGlb(vector<Envr*>& envr, VrbExp* vrbExp);
VrbStrc* getVrb(vector<Envr*>& envr, struct VrbExp* vrbExp);
VrbStrc* getVrb(vector<Envr*>& envr, struct LvlExpStrc* lvl);
int prtEnvrVrb(struct Envr* envr);

int addFcn(struct Envr* envr, struct FcnStrc* fcn);
FcnStrc* getFcn(vector<Envr*> envr, struct FcnExpStrc* fcnExp);
FcnStrc* getEnvrFcn(struct Envr* envr, struct FcnExpStrc* fcnExp);

ClsStrc* getEnvrCls(Envr* envr, string nm);
ClsStrc* getGlbCls(vector<Envr*>& envr, string nm);

int addNtvFcn(struct Envr* envr, string fcnNm, NtvFcnDfn* fcn, int prmCnt);
NtvFcnStrc* getNtvFcn(struct Envr* envr, struct FcnExpStrc* fcn);
NtvFcnStrc* getNtvFcn(vector<Envr*> envr, struct FcnExpStrc* fcn);

int addCls(struct Envr* envr, struct ClsStrc* cls);
struct ClsStrc* getEnvrCls(struct Envr* envr, string nm);

int prtEnvrFcn(struct Envr* envr);
int intlEnvr(struct Envr** envr);
int initGlbEnvr(vector<Envr*>& envr);

extern ValStrc* rdIntFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* rdFltFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* rdBlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* rdFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* rdlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* prtFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* prtlnFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* newArrFcn(vector<Envr*>& envr, int argCnt, vector <ValStrc*> argArr);
extern ValStrc* exe(vector<Envr*>& envr, int argCnt, vector<ValStrc*> argArr);

extern VrbStrc* getObjVrb(VrbStrc* vrb, LvlExpStrc* lvl);

struct VrbStrc* addVrb(struct Envr* envr, struct VrbExp* vrbExp)
{

	envr->vrbArr.push_back(bldVrb(vrbExp->nm));

	return envr->vrbArr.back();

}

struct VrbStrc* addVrbGlb(vector<Envr*>& envr, VrbExp* vrbExp)
{
	envr[0]->glbArr.push_back(bldVrb(string(vrbExp->nm)));

	return envr[0]->glbArr.back();
}

struct VrbStrc* getEnvrVrb(struct Envr* envr, struct VrbExp* vrbExp)
{
	int i;

	for (i = 0; i < envr->vrbArr.size(); i++)
	{
		//printf("vrb: %s\n", envr->vrbArr[i]->nm->c_str());
		if (vrbExp->nm == *(envr->vrbArr[i]->nm))
		{
			return envr->vrbArr[i];
		}
	}

	if (envr->typ == EnvrEnm::TopLvl)
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


struct VrbStrc* getVrb(vector<Envr*>& envr, struct VrbExp* vrbExp)
{
	VrbStrc* vrb = nullptr;

	int lyrNbr = envr.size();

	int lyr = envr.size() - 1;

	Envr* tmp;

	int lyrBfrFcn = 0;

	while (true)
	{
		tmp = envr[lyr];

		vrb = getEnvrVrb(tmp, vrbExp);

		if (vrb != nullptr)
		{
			return vrb;
		}

		// if (envr[lyr]->typ == EnvrEnm::Fcn)
		// {
		// 	break;
		// }

		if (envr[lyr]->typ == EnvrEnm::TopLvl)
		{
			return nullptr;
		}

		lyr--;
	}

	//���������ҵ���1����������֮ǰ�Ļ���
	while (lyrBfrFcn + 1 < lyr && envr[lyrBfrFcn + 1]->typ != EnvrEnm::Fcn)
	{
		lyrBfrFcn++;
	}

	lyr = lyrBfrFcn;

	//�������ڵĵ�1����������֮ǰ�Ļ��������ҵ�����ռ价��
	while (true)
	{
		tmp = envr[lyr];

		vrb = getEnvrVrb(tmp, vrbExp);

		if (vrb != nullptr)
		{
			return vrb;
		}

		if (lyr == 0)
		{
			return nullptr;
		}

		lyr--;
	}

	return vrb;
}

struct VrbStrc* getVrb(vector<Envr*>& envr, struct LvlExpStrc* lvl)
{
	VrbStrc* rslt = nullptr;

	rslt = getVrb(envr, lvl->vrb);

	if (lvl->hasAtb)
	{
		rslt = getObjVrb(rslt, lvl);
	}

	return rslt;
}




int prtEnvrVrb(struct Envr* envr)
{
	int i;

	printf("envr variables: %d\n", envr->vrbArr.size());

	for (i = 0; i < envr->vrbArr.size(); i++)
	{
		printf("%2d:\t%s\n", i, envr->vrbArr[i]->nm);
	}

	return 0;
}


int addFcn(struct Envr* envr, struct FcnStrc* fcn)
{

	envr->fcnArr.push_back(fcn);

	return 0;
}

struct FcnStrc* getEnvrFcn(struct Envr* envr, struct FcnExpStrc* fcnExp)
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


struct FcnStrc* getFcn(vector<Envr*> envr, struct FcnExpStrc* fcnExp)
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

		if (envr[lyr]->typ == EnvrEnm::Fcn)
		{
			break;
		}

		lyr--;
	}

	int lyrBfrFcn = 0;

	while (lyrBfrFcn < lyr && envr[lyrBfrFcn]->typ != EnvrEnm::Fcn)
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


int addNtvFcn(struct Envr* envr, string fcnNm, NtvFcnDfn* fcn, int prmCnt)
{
	NtvFcnStrc* fcnDfn = new NtvFcnStrc(fcnNm, prmCnt, fcn);

	// fcnDfn->fcn = fcn;
	//
	// fcnDfn->prmCnt = prmCnt;
	//
	// fcnDfn->fcnNm = fcnNm;

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

struct NtvFcnStrc* getNtvFcn(struct Envr* envr, struct FcnExpStrc* fcn)
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

int addCls(struct Envr* envr, struct ClsStrc* cls)
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

struct ClsStrc* getEnvrCls(Envr* envr, string nm)
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


ClsStrc* getGlbCls(vector<Envr*>& envr, string nm)
{
	ClsStrc* rslt = nullptr;

	any_of(envr.rbegin(), envr.rend(), [nm, &rslt](Envr* envr)
		{
			printf("fnd cls: %s\n", nm.c_str());
			rslt = getEnvrCls(envr, nm);
			return rslt != nullptr;
		});

	return rslt;
}

struct NtvFcnStrc* getNtvFcn(vector<Envr*> envr, struct FcnExpStrc* fcn)
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



int prtEnvrFcn(struct Envr* envr)
{
	int i;

	printf("envr functions: %d\n", envr->fcnArr.size());

	for (i = 0; i < envr->fcnArr.size(); i++)
	{
		printf("%2d:\t%s\n", i, envr->fcnArr[i]->nm.c_str());
	}

	return 0;
}




int initGlbEnvr(vector<Envr*>& envr)
{

	envr.push_back(new Envr(EnvrEnm::TopLvl));
	envr[0]->typ = EnvrEnm::TopLvl;

	addNtvFcn(envr[0], string("readInt"), rdIntFcn, 0);
	addNtvFcn(envr[0], string("readFloat"), rdFltFcn, 0);
	addNtvFcn(envr[0], string("readBool"), rdBlnFcn, 0);
	addNtvFcn(envr[0], string("read"), rdFcn, 0);
	addNtvFcn(envr[0], string("readln"), rdlnFcn, 0);
	addNtvFcn(envr[0], string("print"), prtFcn, INT_MAX);

	//PROMPT proving name pn for print
	///TODO to allow more viariables
	addNtvFcn(envr[0], string("pn"), prtFcn,INT_MAX);

	addNtvFcn(envr[0], string("println"), prtlnFcn, INT_MAX);

	//PROMPT proving name pln for println
	///TODO to allow more viariables
	addNtvFcn(envr[0], string("pln"), prtlnFcn, INT_MAX);

	addNtvFcn(envr[0], string("newArray"), newArrFcn, 1);
	/// primitive naming before class i/o version
	addNtvFcn(envr[0], string("fopen"), flOpn, 2);
	addNtvFcn(envr[0], string("freadInt"), flScnInt, 1);
	addNtvFcn(envr[0], string("freadDbl"), flScnDbl, 1);
	addNtvFcn(envr[0], string("fclose"), flCls, 1);
	addNtvFcn(envr[0], string("fseek"), flSk, 3);
	addNtvFcn(envr[0], string("ftell"), flTl, 1);
	addNtvFcn(envr[0], string("fprint"), flPrt, 2);
	addNtvFcn(envr[0], string("scat"), scat,2);
	addNtvFcn(envr[0], string("exe"), exe,1);

	return 0;
}

int intlEnvr(struct Envr** envr)
{

	*envr = new Envr;

	return 0;
}

#endif

