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

//对变量数组中的选定变量进行赋值
int asgnVrb(struct VrbStrc* vrb, struct CnstStrc* vl)
{
	vrb->typ = vl->CnstTyp;
	vrb->vl = vl->vl;

	return 0;
}


struct CnstStrc* bldCnstFrmVrb(struct VrbStrc* vrb)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = vrb->typ;

	rslt->vl = vrb->vl;

	return rslt;
}

struct VrbStrc* bldVrb(char* nm)
{
	struct VrbStrc* rslt = new VrbStrc;

	rslt->nm = (char*)malloc(0x100);
	strcpy(rslt->nm, nm);

	rslt->typ = -1;

	return rslt;
}


struct AsgnLstStrc* bldAsgnLst()
{
	struct AsgnLstStrc* rslt = new AsgnLstStrc;

	rslt->asgnSz = 10;
	rslt->asgnCnt = 0;

	rslt->asgnArr = (struct ExpStrc**)malloc(sizeof(struct ExpStrc*) * rslt->asgnSz);

	return rslt;
}

int asgnLstAdd(struct AsgnLstStrc* asgnLst, struct ExpStrc* vrb, struct ExpStrc* exp)
{
	if (asgnLst->asgnCnt == asgnLst->asgnSz)
	{
		asgnLst->asgnSz *= 2;
		asgnLst->asgnArr = (struct ExpStrc**)realloc(asgnLst->asgnArr, sizeof(struct ExpStrc*) * asgnLst->asgnSz);
	}

	asgnLst->asgnArr[asgnLst->asgnCnt] = bldAsgnExp(bldLvlExp(vrb), exp);

	asgnLst->asgnCnt++;

	return 0;
}

