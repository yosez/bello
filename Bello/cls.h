#pragma once

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "y.tab.h"
#include "vrb.h"
#include "dftn.h"
#ifndef EXP_H
#define EXP_H
#endif

ClsStrc* bldCls(char* nm);
int clsAddVrb(ClsStrc* cls, VrbStrc* vrb);
int clsAddFcn(ClsStrc* cls, FcnStrc* fcn);
int clsAddShrVrb(ClsStrc* cls, VrbStrc* vrb);
int clsAddShrFcn(ClsStrc* cls, FcnStrc* fcn);

VrbStrc* getObjVrb(VrbStrc* vrb, LvlExpStrc* lvl);
VrbStrc* getObjVrb(ObjStrc* obj, string nm);

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

	rslt->typ = OBJECT;

	rslt->vl.obj = new ObjStrc;

	auto obj = rslt->vl.obj;

	for (int i = 0; i < cls->vrb.size(); i++)
	{
		obj->vrb.push_back(cpyVrb(cls->vrb.at(i)));
	}

	return rslt;
}

/// <summary>
/// 获取对象中的变量，对象可以有父子层级关系
/// </summary>
/// <param name="vrb"></param>
/// <param name="lvl"></param>
/// <returns></returns>
VrbStrc* getObjVrb(VrbStrc* vrb, LvlExpStrc* lvl)
{

	VrbStrc* rslt = nullptr;

	while (vrb->typ==OBJECT && lvl->hasAtb == 1)
	{
		vrb = getObjVrb(vrb->vl.obj, lvl->atb->vrb->nm);
		lvl = lvl->atb;
	}

	//如果左值表达式未完全找到，则返回空指针
	if (lvl->hasAtb == 1)
	{
		return nullptr;
	}

	rslt = vrb;

	return rslt;
}

/// <summary>
/// 在一个对象中寻找指定变量名称的变量
/// </summary>
/// <param name="obj"></param>
/// <param name="nm"></param>
/// <returns></returns>
VrbStrc* getObjVrb(ObjStrc* obj, string nm)
{
	VrbStrc* rslt = nullptr;
	for (int i = 0; i < obj->vrb.size(); i++)
	{
		if (*(obj->vrb.at(i)->nm) == nm)
		{
			rslt = obj->vrb.at(i);
			return rslt;
		}
	}

	return nullptr;
}