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
struct ExpStrc* bldLvlExp(struct ExpStrc* vrb);
struct VrbStrc* bldVrb(string nm);

//对变量数组中的选定变量进行赋值
int asgnVrb(struct VrbStrc* vrb, struct CnstStrc* vl)
{
	vrb->typ = vl->CnstTyp;

	memset(&(vrb->vl), 0, sizeof(VlUnn));
	memcpy(&(vrb->vl), &(vl->vl), sizeof(VlUnn));

	return 0;
}


struct CnstStrc* bldCnstFrmVrb(struct VrbStrc* vrb)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = vrb->typ;

	//rslt->vl = vrb->vl;
	memset(&(rslt->vl), 0, sizeof(VlUnn));
	memcpy(&(rslt->vl), &(vrb->vl), sizeof(VlUnn));

	return rslt;
}

//struct VrbStrc* bldVrb(char* nm)
//{
//	struct VrbStrc* rslt = new VrbStrc;
//
//	rslt->nm = (char*)malloc(0x100);
//	strcpy(rslt->nm, nm);
//
//	rslt->typ = -1;
//
//	return rslt;
//}

struct VrbStrc* bldVrb(string nm)
{
	struct VrbStrc* rslt = new VrbStrc;

	rslt->nm = nm;

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

	asgnLst->asgnArr.push_back(bldAsgnExp(bldLvlExp(vrb), exp));

	return 0;
}

