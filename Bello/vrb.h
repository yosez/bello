#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "dftn.h"
#ifndef EXP_H
#define EXP_H
#endif

extern struct ExpStrc* bldAsgnExp(struct ExpStrc* vrb, struct ExpStrc* exp);
extern struct ExpStrc* bldLvlExp(struct ExpStrc* vrb);

struct VrbStrc* bldVrb(string nm);
struct VrbStrc* cpyVrb(VrbStrc* vrb, string* nm);
int asgnVrb(struct VrbStrc* vrb, struct CnstStrc* vl);
struct CnstStrc* bldCnstFrmVrb(struct VrbStrc* vrb);
struct AsgnLstStrc* bldAsgnLst();
int asgnLstAdd(struct AsgnLstStrc* asgnLst, struct ExpStrc* vrb, struct ExpStrc* exp);

//对变量数组中的选定变量进行赋值
int asgnVrb(struct VrbStrc* vrb, struct CnstStrc* vl)
{
	vrb->typ = vl->CnstTyp;

	memset(&(vrb->vl), 0, sizeof(VlUnn));
	memcpy(&(vrb->vl), &(vl->vl), sizeof(VlUnn));

	return 0;
}

struct VrbStrc* cpyVrb(VrbStrc* vrb, string* nm = nullptr)
{
	auto rslt = new VrbStrc;

	rslt->typ = vrb->typ;
	rslt->vl = vrb->vl;

	//printf("cpy vrb: typ: %d\n", rslt->typ);

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

struct CnstStrc* bldCnstFrmVrb(struct VrbStrc* vrb)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->typ = vrb->typ;
	rslt->CnstTyp = vrb->typ;

	memset(&(rslt->vl), 0, sizeof(VlUnn));
	memcpy(&(rslt->vl), &(vrb->vl), sizeof(VlUnn));

	return rslt;
}


struct VrbStrc* bldVrb(string nm)
{
	struct VrbStrc* rslt = new VrbStrc;

	rslt->nm = new string(nm);

	rslt->typ = -1;

	return rslt;
}


struct AsgnLstStrc* bldAsgnLst()
{
	struct AsgnLstStrc* rslt = new AsgnLstStrc;

	return rslt;
}

int asgnLstAdd(struct AsgnLstStrc* asgnLst, struct ExpStrc* vrb, struct ExpStrc* exp)
{
	asgnLst->asgnArr.push_back(static_cast<AsgnExpStrc*>(bldAsgnExp(bldLvlExp(vrb), exp)));

	return 0;
}

