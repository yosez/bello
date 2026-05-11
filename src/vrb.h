#pragma once

#ifndef VRB_H
#define VRB_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "dfn.h"
#include "exp.h"

extern Exp* bldAsnExp(Exp* vrb, struct Exp* exp);
extern Exp* bldLvlExp(Exp* vrb);

VrbStrc* bldVrb(string nm);
VrbStrc* cpyVrb(VrbStrc* vrb, string* nm);
int asnVrbCpy(struct VrbStrc* vrb, struct ValStrc* vl);
ValStrc* bldValFrmVrb(struct VrbStrc* vrb);
AsnLstStrc* bldAsnLst();
int asnLstAdd(struct AsnLstStrc* asgnLst, struct Exp* vrb, struct Exp* exp);

//对变量数组中的选定变量进行赋值
int asnVrbCpy(VrbStrc* vrb, ValStrc* vl)
{
	vrb->val = cpyVal(vl);

	return 0;
}

int asnVrbMv(VrbStrc* vrb, ValStrc* vl)
{
	vrb->val = vl;

	return 0;
}

struct VrbStrc* cpyVrb(VrbStrc* vrb, string* nm = nullptr)
{
	//auto rslt = new VrbStrc();

	ValStrc* val = cpyVal(vrb->val);

	//rslt->val = cpyVal(vrb->val);

	VrbStrc* rslt = new VrbStrc(val, new string(*nm));

	// if (nm != nullptr)
	// {
	// 	rslt->nm = new string(*nm);
	// }
	// else
	// {
	// 	rslt->nm = new string(*(vrb->nm));
	// }

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


AsnLstStrc* bldAsnLst()
{
	struct AsnLstStrc* rslt = new AsnLstStrc;

	return rslt;
}

int asnLstAdd(struct AsnLstStrc* asgnLst, struct Exp* vrb, struct Exp* exp)
{
	asgnLst->asgnArr.push_back(static_cast<AsnExpStrc*>(bldAsnExp(bldLvlExp(vrb), exp)));

	return 0;
}

#endif
