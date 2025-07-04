#pragma once

#ifndef CLS_H
#define CLS_H

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "y.tab.h"
#include "vrb.h"
#include "dftn.h"
#include "exp.h"

extern VrbStrc* cpyVrb(VrbStrc* vrb, string* nm);


ClsStrc* bldCls(char* nm);
int clsAddVrb(ClsStrc* cls, VrbStrc* vrb);
int clsAddFcn(ClsStrc* cls, FcnStrc* fcn);
int clsAddShrVrb(ClsStrc* cls, VrbStrc* vrb);
int clsAddShrFcn(ClsStrc* cls, FcnStrc* fcn);

VrbStrc* getObjVrb(VrbStrc* vrb, LvlExpStrc* lvl);
VrbStrc* getObjVrbDrct(ObjStrc* obj, string nm);

FcnStrc* getObjFcn(VrbStrc* vrb, LvlExpStrc* lvl);
FcnStrc* getObjFcnDrct(ObjStrc* obj, string nm);

CnstStrc* istObj(ClsStrc* cls);


ClsStrc* bldCls(char* nm)
{
	ClsStrc* rslt = new ClsStrc;

	rslt->nm = new string(nm);

	return rslt;

}

int clsAddVrb(ClsStrc* cls, VrbStrc* vrb)
{
	cls->vrb.push_back(vrb);

	return 0;
}

int clsAddFcn(ClsStrc* cls, FcnStrc* fcn)
{
	cls->fcn.push_back(fcn);

	return 0;
}

int clsAddShrVrb(ClsStrc* cls, VrbStrc* vrb)
{
	cls->shrVrb.push_back(vrb);

	return 0;
}

int clsAddShrFcn(ClsStrc* cls, FcnStrc* fcn)
{
	cls->shrFcn.push_back(fcn);

	return 0;
}

CnstStrc* istObj(ClsStrc* cls)
{
	auto rslt = new CnstStrc;

	rslt->typ = CONST_EXPRESSION;

	rslt->CnstTyp = OBJECT_VALUE;

	rslt->vl.obj = new ObjStrc;

	auto obj = rslt->vl.obj;

	for (int i = 0; i < cls->vrb.size(); i++)
	{
		obj->vrb.push_back(cpyVrb(cls->vrb.at(i), cls->vrb.at(i)->nm));

		printf("var: %s typ: %d tgt typ: %d\n", obj->vrb.back()->nm->c_str(), obj->vrb.back()->typ, cls->vrb.at(i)->typ);
	}

	//�������ŵ�obj�Ľṹ����
	for (int i = 0; i < cls->fcn.size(); i++)
	{
		obj->fcn.push_back(cls->fcn.at(i));
	}

	return rslt;
}

/// <summary>
/// ��ȡ�����еı�������������и��Ӳ㼶��ϵ
/// </summary>
/// <param name="vrb"></param>
/// <param name="lvl"></param>
/// <returns></returns>
VrbStrc* getObjVrb(VrbStrc* vrb, LvlExpStrc* lvl)
{

	VrbStrc* rslt = nullptr;

	printf("vrb typ = obj: %016x %d\n", vrb->typ);

	while (vrb->typ == OBJECT_VALUE && lvl->hasAtb == 1)
	{
		vrb = getObjVrbDrct(vrb->vl.obj, lvl->atb->vrb->nm);
		lvl = lvl->atb;

		if (lvl->hasAtb == 0)
		{
			printf("----- get obj vrb\n");
			return vrb;
		}
	}

	//�����ֵ���ʽδ��ȫ�ҵ����򷵻ؿ�ָ��
	if (lvl->hasAtb == 1)
	{
		return nullptr;
	}

	rslt = vrb;

	return rslt;
}

/// <summary>
/// �ӱ����ṹ����Ѱ�Һ����ṹ�壬���Եݹ����Ѱ��
/// </summary>
/// <param name="vrb"></param>
/// <param name="lvl"></param>
/// <returns></returns>
FcnStrc* getObjFcn(VrbStrc* vrb, LvlExpStrc* lvl)
{

	FcnStrc* rslt = nullptr;

	while (vrb->typ == OBJECT_VALUE && lvl->hasAtb == 1)
	{
		vrb = getObjVrbDrct(vrb->vl.obj, lvl->atb->vrb->nm);
		lvl = lvl->atb;

	}

	if (lvl->hasFcn == 1)
	{
		rslt = getObjFcnDrct(vrb->vl.obj, lvl->fcn->nm);

		return rslt;
	}

	//�����ֵ���ʽδ��ȫ�ҵ����򷵻ؿ�ָ��
	if (lvl->hasAtb == 1)
	{
		return nullptr;
	}


	return nullptr;
}

/// <summary>
/// �ڶ�����ǳ��Ѱ��ָ�����Ƶĺ���
/// </summary>
/// <param name="obj"></param>
/// <param name="nm"></param>
/// <returns></returns>
FcnStrc* getObjFcnDrct(ObjStrc* obj, string nm)
{
	FcnStrc* rslt = nullptr;
	for (int i = 0; i < obj->fcn.size(); i++)
	{
		printf("obj: vrb: %s\n", obj->fcn.at(i)->nm.c_str());
		if ((obj->fcn.at(i)->nm) == nm)
		{
			rslt = obj->fcn.at(i);
			return rslt;
		}
	}

	return nullptr;
}

/// <summary>
/// ��һ��������Ѱ��ָ���������Ƶı���
/// </summary>
/// <param name="obj"></param>
/// <param name="nm"></param>
/// <returns></returns>
VrbStrc* getObjVrbDrct(ObjStrc* obj, string nm)
{
	VrbStrc* rslt = nullptr;
	for (int i = 0; i < obj->vrb.size(); i++)
	{
		printf("obj: vrb: %s\n", obj->vrb.at(i)->nm->c_str());
		if (*(obj->vrb.at(i)->nm) == nm)
		{
			rslt = obj->vrb.at(i);
			return rslt;
		}
	}

	return nullptr;
}

#endif