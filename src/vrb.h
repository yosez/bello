#pragma once

#ifndef VRB_H
#define VRB_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "dftn.h"
#include "exp.h"

extern ExpStrc* bldAsgnExp(struct ExpStrc* vrb, struct ExpStrc* exp);
extern ExpStrc* bldLvlExp(struct ExpStrc* vrb);

VrbStrc* bldVrb(string nm);
VrbStrc* cpyVrb(VrbStrc* vrb, string* nm);
int asnVrb(struct VrbStrc* vrb, struct ValStrc* vl);
ValStrc* bldValFrmVrb(struct VrbStrc* vrb);
AsgnLstStrc* bldAsgnLst();
int asgnLstAdd(struct AsgnLstStrc* asgnLst, struct ExpStrc* vrb, struct ExpStrc* exp);

//对变量数组中的选定变量进行赋值
int asnVrb(struct VrbStrc* vrb, struct ValStrc* vl)
{
	vrb->val =cpyVal(vl);

	return 0;
}

struct VrbStrc* cpyVrb(VrbStrc* vrb, string* nm = nullptr)
{
	auto rslt = new VrbStrc;

	rslt->val = cpyVal(vrb->val);

	if (nm != nullptr)
	{
		rslt->nm = new string(*nm);
	}
	else
	{
		rslt->nm = new string(*(vrb->nm));
	}

	return rslt;
}

struct ValStrc* bldValFrmVrb(struct VrbStrc* vrb)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = vrb->getTyp();

	memset(&(rslt->v), 0, sizeof(ValUnn));
	memcpy(&(rslt->v), &(vrb->getVal()), sizeof(ValUnn));

	return rslt;
}


struct VrbStrc* bldVrb(string nm)
{
	struct VrbStrc* rslt = new VrbStrc;

	rslt->nm = new string(nm);

	//rslt->typ = -1;

	return rslt;
}


struct AsgnLstStrc* bldAsgnLst()
{
	struct AsgnLstStrc* rslt = new AsgnLstStrc;

	return rslt;
}

int asgnLstAdd(struct AsgnLstStrc* asgnLst, struct ExpStrc* vrb, struct ExpStrc* exp)
{
	asgnLst->asgnArr.push_back(static_cast<AsnExpStrc*>(bldAsgnExp(bldLvlExp(vrb), exp)));

	return 0;
}

#endif
