#pragma once

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "y.tab.h"
//#ifndef DFTN_H
//#define DFTN_H
//#endif
#include "dftn.h"
#ifndef EXP_H
#define EXP_H
#endif

ClsStrc* bldCls(char* nm);
int clsAddVrb(ClsStrc* cls, char* vrb);
int clsAddFcn(ClsStrc* cls, FcnStrc* fcn);
int clsAddShrVrb(ClsStrc* cls, VrbStrc* vrb);
int clsAddShrFcn(ClsStrc* cls, FcnStrc* fcn);


ClsStrc* bldCls(char* nm)
{
	ClsStrc* rslt = new ClsStrc;

	rslt->nm = new string(nm);

	return rslt;

}

int clsAddVrb(ClsStrc* cls, char* vrb)
{
	cls->vrb.push_back(string(vrb));

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
