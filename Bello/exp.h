#pragma once

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "y.tab.h"
#include "dftn.h"
#ifndef VRB_H
#define VRB_H
#endif
#include "cnst.h"
#include "envr.h"
#ifndef ARR_H
#define ARR_H
#endif
#ifndef STMT_H
#define STMT_H
#endif
#ifndef ERR_H
#define ERR_H
#endif
#include "err.h"
#include "expt.h"

extern enum ExpTyp;

extern struct StmtRsltStrc* exctStmt(vector<EnvrStrc*>& envr, struct StmtStrc* stmt);

struct ExpStrc* bldCnstIntExp(int intVl);
struct ExpStrc* bldCnstFltExp(float fltVl);
struct ExpStrc* bldCnstBlnExp(int blnVl);
struct ExpStrc* bldCnstStrExp(char* strVl);
struct ExpStrc* bldCnstNllExp();
struct ExpStrc* bldAsgnExp(struct ExpStrc* lvl, struct ExpStrc* exp);
struct ExpStrc* bldVrbExp(char* idtf);
struct ExpStrc* bldBnrExp(int opr, struct ExpStrc* lftExp, struct ExpStrc* rghtExp);
struct ExpStrc* bldUnrExp(int opr, struct ExpStrc* exp);
struct ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst);
struct ExpStrc* bldGlbAsgnExp(struct AsgnLstStrc* asgnLst);
//struct ExpStrc* bldLclAsgnExp(struct AsgnLstStrc* asgnLst);
struct ExpStrc* bldRdExp(int typ);
struct ExpStrc* bldArrExp(struct ElmtLstStrc* elmtLst);
struct ExpStrc* bldLvlExp(struct ExpStrc* vrb);
struct ExpStrc* bldLvlExpAdd(struct ExpStrc* lvl, struct AcsLstStrc* evlLst);
struct ExpStrc* bldElmtAsgnExp(struct ExpStrc* arr, struct PstnLstStrc* pstnLst, struct ExpStrc* vl);
struct ExpStrc* bldNewArrExp(struct ExpStrc* cnt);
struct CnstStrc* clcBnrExp(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpAdd(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpSub(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpMul(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpDiv(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpAnd(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpOr(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpEq(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpNe(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpGt(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpGe(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpLt(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpLe(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpBitAnd(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpBitOr(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpBitXor(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp);
struct CnstStrc* clcAsgnExp(vector<EnvrStrc*>& envr, struct AsgnExpStrc* exp);
//struct CnstStrc* clcLclAsgnExp(vector<EnvrStrc*>& envr, struct LclAsgnExpStrc* exp);
struct CnstStrc* clcGlbAsgnExp(vector<EnvrStrc*>& envr, struct GlbAsgnExpStrc* exp);
struct CnstStrc* clcUnrExpPfxInc(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpPfxDec(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpSfxInc(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpSfxDec(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpNot(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpBitNot(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpSub(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpAdd(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExp(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp);
struct CnstStrc* clcFcnExp(vector<EnvrStrc*>& envr, struct FcnExpStrc* exp);
struct CnstStrc* clcRdIntExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp);
struct CnstStrc* clcRdFltExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp);
struct CnstStrc* clcRdBlnExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp);
struct CnstStrc* clcRdStrExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp);
struct CnstStrc* clcRdLnExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp);
struct CnstStrc* clcRdExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp);
struct CnstStrc* clcArrExp(vector<EnvrStrc*>& envr, struct ArrExpStrc* exp);
struct CnstStrc* clcNewArrExp(vector<EnvrStrc*>& envr, struct NewArrExpStrc* exp);
struct CnstStrc* clcArrEvlExp(vector<EnvrStrc*>& envr, struct ArrEvlExpStrc* exp);
struct CnstStrc* clcElmtAsgnExp(vector<EnvrStrc*>& envr, struct ElmtAsgnExpStrc* exp);
struct CnstStrc* clcLvlExp(vector<EnvrStrc*>& envr, struct LvlExpStrc* exp);
struct CnstStrc* clcExp(vector<EnvrStrc*>& envr, struct ExpStrc* exp);


struct ExpStrc* bldCnstIntExp(int intVl)
{
	struct CnstStrc* exp;

	exp = bldIntCnst(intVl);

	return exp;
}

struct ExpStrc* bldCnstFltExp(float fltVl)
{
	struct CnstStrc* exp;

	exp = bldFltCnst(fltVl);

	return exp;
}

struct ExpStrc* bldCnstBlnExp(int blnVl)
{
	struct CnstStrc* exp;

	exp = bldBlnCnst(blnVl);

	return exp;
}

struct ExpStrc* bldCnstStrExp(char* strVl)
{
	struct CnstStrc* exp;

	exp = bldStrCnst(strVl);

	return exp;
}

struct ExpStrc* bldCnstNllExp()
{
	struct CnstStrc* exp;

	exp->exp.cnst = bldNllCnst();

	return exp;
}

struct ExpStrc* bldAsgnExp(struct ExpStrc* lvl, struct ExpStrc* exp)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = ASSIGN_EXPRESSION;

	rslt->exp.asgnExp = new AsgnExpStrc;
	rslt->exp.asgnExp->lvl = lvl;
	rslt->exp.asgnExp->exp = exp;

	return rslt;

}

//struct ExpStrc* bldGlbAsgnExp(struct AsgnLstStrc* asgnLst)
//{
//	struct ExpStrc* rslt = new ExpStrc;
//
//	rslt->typ = GLOBAL_ASSIGN_EXPRESSION;
//
//	rslt->exp.glbAsgnExp = new GlbAsgnExpStrc;
//
//	rslt->exp.glbAsgnExp->asgnLst = asgnLst;
//
//	return rslt;
//}

//struct ExpStrc* bldLclAsgnExp(struct AsgnLstStrc* asgnLst)
//{
//	struct ExpStrc* rslt = new ExpStrc;
//
//	rslt->typ = LOCAL_ASSIGN_EXPRESSION;
//
//	rslt->exp.lclAsgnExp = new LclAsgnExpStrc;
//
//	rslt->exp.lclAsgnExp->asgnLst = asgnLst;
//
//	return rslt;
//}



struct ExpStrc* bldArrExp(struct ElmtLstStrc* elmtLst)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = ARRAY_EXPRESSION;

	rslt->exp.arrExp = new ArrExpStrc;
	rslt->exp.arrExp->elmtLst = elmtLst;

	return rslt;
}

//struct ExpStrc* bldArrEvlExp(struct ExpStrc* vrb, struct AcsLstStrc* evlLst)
//{
//	struct ExpStrc* rslt = new ExpStrc;
//
//	rslt->typ = ARRAY_EVALUATE_EXPRESSION;
//
//	//rslt->exp.arrEvlExp = (struct ArrEvlExpStrc*)malloc(sizeof(struct ArrEvlExpStrc));
//	rslt->exp.arrEvlExp = new ArrEvlExpStrc;
//
//	rslt->exp.arrEvlExp->blnArr = 0;
//
//	rslt->exp.arrEvlExp->arr = vrb;
//
//	rslt->exp.arrEvlExp->evlLst = evlLst;
//
//	return rslt;
//}

struct ExpStrc* bldLvlExp(struct ExpStrc* vrb)
{
	struct LvlExpStrc* rslt = new LvlExpStrc;

	rslt->typ = LVALUE_EXPRESSION;

	rslt->vrb = static_cast<VrbExpStrc*>(vrb);

	rslt->hasAcsLst = 0;
	rslt->acs = NULL;

	return rslt;
}

struct ExpStrc* bldLvlExpAdd(struct ExpStrc* lvl, struct AcsLstStrc* evlLst)
{

	lvl->exp.lvlExp->acs = evlLst;

	if (evlLst != NULL)
	{
		lvl->exp.lvlExp->hasAcsLst = 1;
	}

	return lvl;
}

struct ExpStrc* bldElmtAsgnExp(struct ExpStrc* arr, struct PstnLstStrc* pstnLst, struct ExpStrc* vl)
{
	struct ElmtAsgnExpStrc* rslt = new ElmtAsgnExpStrc;

	rslt->typ = ELEMENT_ASSIGN_EXPRESSION;

	rslt->arr = arr;
	rslt->pstnLst = pstnLst;
	rslt->vl = vl;

	return rslt;
}


struct ExpStrc* bldNewArrExp(struct ExpStrc* cnt)
{
	struct NewArrExpStrc* rslt = new NewArrExpStrc;

	rslt->typ = NEW_ARRAY_EXPRESSION;

	rslt->cnt = cnt;

	return rslt;
}


struct ExpStrc* bldVrbExp(char* nm)
{
	struct VrbExpStrc* exp = new VrbExpStrc;

	exp->typ = VARIABLE_EXPRESSION;

	exp->nm = nm;

	return exp;
}

struct ExpStrc* bldBnrExp(int opr, struct ExpStrc* lftExp, struct ExpStrc* rghtExp)
{
	struct BnrExpStrc* exp = new BnrExpStrc;

	exp->typ = BINARY_EXPRESSION;

	exp->lftExp = lftExp;
	exp->rghtExp = rghtExp;
	exp->oprTyp = opr;

	return exp;
}

struct ExpStrc* bldUnrExp(int opr, struct ExpStrc* exp)
{
	struct UnrExpStrc* rslt = new UnrExpStrc;

	rslt->typ = UNARY_EXPRESSION;

	rslt->exp = exp;
	rslt->oprTyp = opr;

	return rslt;
}



struct ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst)
{
	struct FcnExpStrc* rslt = new FcnExpStrc;

	rslt->typ = FUNCTION_EXPRESSION;

	rslt->nm = nm;

	rslt->argLst = argLst;

	return rslt;

}

struct ExpStrc* bldNllExp()
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = NULL_EXPRESSION;

	return rslt;
}

struct CnstStrc* clcBnrExpAdd(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldIntCnst(lftCnst->vl.intVl + rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.intVl + rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.flt + rghtCnst->vl.intVl);
	}

	string str;

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		str = *(lftCnst->vl.str) + *(rghtCnst->vl.str);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{

		str = *(lftCnst->vl.str);

		str += to_string(rghtCnst->vl.intVl);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{

		str = to_string(lftCnst->vl.intVl);
		str += *(rghtCnst->vl.str);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{

		str = *lftCnst->vl.str;
		str += to_string(rghtCnst->vl.flt);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{

		str = to_string(lftCnst->vl.flt);
		str += *(rghtCnst->vl.str);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == BOOLEAN_VALUE)
	{

		str = *(lftCnst->vl.str);

		str += rghtCnst->vl.bln == 0 ? "false" : "true";

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == BOOLEAN_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{

		str = lftCnst->vl.bln == 0 ? "false" : "true";

		str += *(rghtCnst->vl.str);

		rslt = bldStrCnstByStr(str);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpSub(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldIntCnst(lftCnst->vl.intVl - rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.intVl - rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.flt - rghtCnst->vl.intVl);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpMul(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldIntCnst(lftCnst->vl.intVl * rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.intVl * rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.flt * rghtCnst->vl.intVl);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpDiv(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldIntCnst(lftCnst->vl.intVl / rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.intVl / rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldFltCnst(lftCnst->vl.flt / rghtCnst->vl.intVl);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpMod(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldIntCnst(lftCnst->vl.intVl % rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldFltCnst(fmod(lftCnst->vl.intVl, rghtCnst->vl.flt));
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldFltCnst(fmod(lftCnst->vl.flt, rghtCnst->vl.intVl));
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpEq(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl == rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt == rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst((float)lftCnst->vl.intVl == rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt == (float)rghtCnst->vl.intVl);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//rslt = bldBlnCnst(strcmp(lftCnst->vl.str, rghtCnst->vl.str) == 0);
		rslt = bldBlnCnst(lftCnst->vl.str->compare(*rghtCnst->vl.str) == 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpNe(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl != rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt != rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst((float)lftCnst->vl.intVl != rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt != (float)rghtCnst->vl.intVl);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//rslt = bldBlnCnst(strcmp(lftCnst->vl.str, rghtCnst->vl.str) != 0);
		rslt = bldBlnCnst(lftCnst->vl.str->compare(*rghtCnst->vl.str) != 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpGt(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl > rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt > rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst((float)lftCnst->vl.intVl > rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt > (float)rghtCnst->vl.intVl);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		rslt = bldBlnCnst(strcmp(lftCnst->vl.str->c_str(), rghtCnst->vl.str->c_str()) > 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpGe(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl >= rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt >= rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst((float)lftCnst->vl.intVl >= rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt >= (float)rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//rslt = bldBlnCnst(strcmp(lftCnst->vl.str, rghtCnst->vl.str) >= 0);
		rslt = bldBlnCnst(lftCnst->vl.str->compare(*rghtCnst->vl.str) >= 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}



struct CnstStrc* clcBnrExpLt(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl < rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt < rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst((float)lftCnst->vl.intVl < rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt < (float)rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//rslt = bldBlnCnst(strcmp(lftCnst->vl.str.c_str(), rghtCnst->vl.str.c_str()) < 0);
		rslt = bldBlnCnst(lftCnst->vl.str->compare(*rghtCnst->vl.str) < 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpLe(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl <= rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt <= rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst((float)lftCnst->vl.intVl <= rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt <= (float)rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//rslt = bldBlnCnst(strcmp(lftCnst->vl.str.c_str(), rghtCnst->vl.str.c_str()) <= 0);
		rslt = bldBlnCnst(lftCnst->vl.str->compare(*rghtCnst->vl.str) <= 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpBitAnd(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if ((lftCnst->CnstTyp == INT_VALUE || lftCnst->CnstTyp == FLOAT_VALUE || lftCnst->CnstTyp == BOOLEAN_VALUE) &&
		(rghtCnst->CnstTyp == INT_VALUE || rghtCnst->CnstTyp == FLOAT_VALUE || rghtCnst->CnstTyp == BOOLEAN_VALUE))
	{
		rslt = bldIntCnst(lftCnst->vl.intVl & rghtCnst->vl.intVl);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcBnrExpBitOr(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if ((lftCnst->CnstTyp == INT_VALUE || lftCnst->CnstTyp == FLOAT_VALUE || lftCnst->CnstTyp == BOOLEAN_VALUE) &&
		(rghtCnst->CnstTyp == INT_VALUE || rghtCnst->CnstTyp == FLOAT_VALUE || rghtCnst->CnstTyp == BOOLEAN_VALUE))
	{
		rslt = bldIntCnst(lftCnst->vl.intVl | rghtCnst->vl.intVl);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcBnrExpBitXor(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if ((lftCnst->CnstTyp == INT_VALUE || lftCnst->CnstTyp == FLOAT_VALUE || lftCnst->CnstTyp == BOOLEAN_VALUE) &&
		(rghtCnst->CnstTyp == INT_VALUE || rghtCnst->CnstTyp == FLOAT_VALUE || rghtCnst->CnstTyp == BOOLEAN_VALUE))
	{
		rslt = bldIntCnst(lftCnst->vl.intVl ^ rghtCnst->vl.intVl);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}


struct CnstStrc* clcBnrExpAnd(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl && rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt && rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl && rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt && (float)rghtCnst->vl.intVl);
	}

	if (lftCnst->CnstTyp == BOOLEAN_VALUE || rghtCnst->CnstTyp == BOOLEAN_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.bln && rghtCnst->vl.bln);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpOr(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(envr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(envr, exp->rghtExp);

	struct CnstStrc* rslt = NULL;

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl || rghtCnst->vl.intVl);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt || rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.intVl || rghtCnst->vl.flt);
	}
	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.flt || (float)rghtCnst->vl.intVl);
	}

	if (lftCnst->CnstTyp == BOOLEAN_VALUE || rghtCnst->CnstTyp == BOOLEAN_VALUE)
	{
		rslt = bldBlnCnst(lftCnst->vl.bln || rghtCnst->vl.bln);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}



struct CnstStrc* clcBnrExp(vector<EnvrStrc*>& envr, struct BnrExpStrc* exp)
{
	struct CnstStrc* rslt;

	switch (exp->oprTyp)
	{
		//处理相同类型及不同类型变量之间的运算
	case ADD:
	{
		rslt = clcBnrExpAdd(envr, exp);

		break;
	}
	case SUB:
	{
		rslt = clcBnrExpSub(envr, exp);

		break;
	}
	case MUL:
	{
		rslt = clcBnrExpMul(envr, exp);
		break;
	}
	case DIV:
	{
		rslt = clcBnrExpDiv(envr, exp);
		break;
	}
	case MOD:
	{
		rslt = clcBnrExpMod(envr, exp);
		break;
	}
	case EQ:
	{
		rslt = clcBnrExpEq(envr, exp);
		break;
	}
	case NE:
	{
		rslt = clcBnrExpNe(envr, exp);
		break;
	}
	case GT:
	{
		rslt = clcBnrExpGt(envr, exp);
		break;
	}
	case GE:
	{
		rslt = clcBnrExpGe(envr, exp);
		break;
	}
	case LT:
	{
		rslt = clcBnrExpLt(envr, exp);
		break;
	}
	case LE:
	{
		rslt = clcBnrExpLe(envr, exp);
		break;
	}
	case AND:
	{
		rslt = clcBnrExpAnd(envr, exp);
		break;
	}
	case OR:
	{
		rslt = clcBnrExpOr(envr, exp);
		break;
	}
	case BIT_AND:
	{
		rslt = clcBnrExpBitAnd(envr, exp);
		break;
	}
	case BIT_OR:
	{
		rslt = clcBnrExpBitOr(envr, exp);
		break;
	}
	case BIT_XOR:
	{
		rslt = clcBnrExpBitXor(envr, exp);
	}

	}

	return rslt;
}

struct CnstStrc* clcUnrExpPfxInc(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	//***此修改可能有问题
	lvl = static_cast<LvlExpStrc*>(exp->exp);

	struct VrbStrc* vrb;

	vrb = getVrb(envr, static_cast<VrbExpStrc*>(lvl->vrb));

	if (vrb == NULL)
	{
		throw new ExVrbNotFnd;
	}

	if (lvl->hasAcsLst == 0)
	{
		if (vrb->typ == INT_VALUE)
		{
			vrb->vl.intVl++;
			rslt = bldCnstFrmVrb(vrb);

		}

		if (vrb->typ == FLOAT_VALUE)
		{
			vrb->vl.flt++;
			rslt = bldCnstFrmVrb(vrb);

		}
	}
	//定位到数组元素的情况
	else
	{

		int pstn;

		struct ArrStrc* arrPrnt;

		arrPrnt = vrb->vl.arr;

		int lyr;

		int nbr;

		lyr = lvl->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->vl.intVl;

			if (i < lyr - 1)
			{
				arrPrnt = arrPrnt->elmtArr[pstn]->vl.arr;
			}
		}


		if (arrPrnt->elmtArr[pstn]->CnstTyp == INT_VALUE)
		{
			arrPrnt->elmtArr[pstn]->vl.intVl++;
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);

		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == FLOAT_VALUE)
		{
			arrPrnt->elmtArr[pstn]->vl.flt++;
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);
		}
	}


	return rslt;
}

struct CnstStrc* clcUnrExpPfxDec(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct VrbStrc* vrb;

	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	//***此修改可能有问题
	lvl = static_cast<LvlExpStrc*>(exp->exp);

	//lvl = exp->exp->exp.lvlExp;

	vrb = getVrb(envr, static_cast<VrbExpStrc*>(lvl->vrb));

	if (vrb == NULL)
	{
		throw new ExVrbNotFnd;
	}

	if (lvl->hasAcsLst == 0)
	{
		if (vrb->typ == INT_VALUE)
		{
			vrb->vl.intVl--;
			rslt = bldCnstFrmVrb(vrb);

		}

		if (vrb->typ == FLOAT_VALUE)
		{
			vrb->vl.flt--;
			rslt = bldCnstFrmVrb(vrb);

		}
	}
	//定位到数组元素的情况
	else
	{

		int pstn;

		struct ArrStrc* arrPrnt;

		arrPrnt = vrb->vl.arr;

		int lyr;

		lyr = lvl->acs->acsLst.size();

		int i;

		//按层级定位数组中元素的位置，直至arrPrnt定位到包含元素的最内层的数组
		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->vl.intVl;

			if (i < lyr - 1)
			{
				arrPrnt = arrPrnt->elmtArr[pstn]->vl.arr;
			}
		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == INT_VALUE)
		{
			arrPrnt->elmtArr[pstn]->vl.intVl--;
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);

		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == FLOAT_VALUE)
		{
			arrPrnt->elmtArr[pstn]->vl.flt--;
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);
		}
	}


	return rslt;
}

struct CnstStrc* clcUnrExpSfxInc(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct VrbStrc* vrb;

	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	//***此修改可能有问题
	//lvl = static_cast<LvlExpStrc*>(exp->exp);
	lvl = exp->exp;

	vrb = getVrb(envr, static_cast<VrbExpStrc*>(lvl->vrb));

	//lvl = exp->exp->exp.lvlExp;

	//vrb = getVrb(envr, lvl->vrb->exp.vrbExp);

	if (vrb == NULL)
	{
		throw new ExVrbNotFnd;
	}

	if (lvl->hasAcsLst == 0)
	{
		if (vrb->typ == INT_VALUE)
		{
			rslt = bldCnstFrmVrb(vrb);

			vrb->vl.intVl++;

		}

		if (vrb->typ == FLOAT_VALUE)
		{
			rslt = bldCnstFrmVrb(vrb);

			vrb->vl.flt++;


		}
	}
	//定位到数组元素的情况
	else
	{

		int pstn;

		struct ArrStrc* arrPrnt;

		arrPrnt = vrb->vl.arr;

		int lyr;

		lyr = lvl->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->vl.intVl;
			if (i < lyr - 1)
			{
				arrPrnt = arrPrnt->elmtArr[pstn]->vl.arr;
			}

		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == INT_VALUE)
		{
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);
			arrPrnt->elmtArr[pstn]->vl.intVl++;


		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == FLOAT_VALUE)
		{
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);
			arrPrnt->elmtArr[pstn]->vl.flt++;

		}
	}


	return rslt;
}

struct CnstStrc* clcUnrExpSfxDec(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct VrbStrc* vrb;

	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	//***此修改可能有问题
	lvl = exp->exp;

	vrb = getVrb(envr, static_cast<VrbExpStrc*>(lvl->vrb));

	//lvl = exp->exp->exp.lvlExp;

	//vrb = getVrb(envr, lvl->vrb->exp.vrbExp);

	if (vrb == NULL)
	{
		throw new ExVrbNotFnd;
	}

	if (lvl->hasAcsLst == 0)
	{
		if (vrb->typ == INT_VALUE)
		{
			rslt = bldCnstFrmVrb(vrb);

			vrb->vl.intVl--;

		}

		if (vrb->typ == FLOAT_VALUE)
		{
			rslt = bldCnstFrmVrb(vrb);

			vrb->vl.flt--;


		}
	}
	//定位到数组元素的情况
	else
	{

		int pstn;

		struct ArrStrc* arrPrnt;

		arrPrnt = vrb->vl.arr;

		int lyr;

		lyr = lvl->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->vl.intVl;
			if (i < lyr - 1)
			{
				arrPrnt = arrPrnt->elmtArr[pstn]->vl.arr;
			}
		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == INT_VALUE)
		{
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);
			arrPrnt->elmtArr[pstn]->vl.intVl--;


		}

		if (arrPrnt->elmtArr[pstn]->CnstTyp == FLOAT_VALUE)
		{
			rslt = bldCnstCpy(arrPrnt->elmtArr[pstn]);
			arrPrnt->elmtArr[pstn]->vl.flt--;

		}
	}


	return rslt;
}

struct CnstStrc* clcUnrExpNot(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{

	struct CnstStrc* rslt = NULL;

	struct CnstStrc* cnst;
	cnst = clcExp(envr, exp->exp);

	if (cnst->CnstTyp == INT_VALUE || cnst->CnstTyp == FLOAT_VALUE || cnst->CnstTyp == BOOLEAN_VALUE)
	{

		rslt = bldBlnCnst(cnst->vl.intVl == 0);

	}
	else if (cnst->CnstTyp == STRING_VALUE)
	{
		//if (cnst->vl.str != NULL)
		if (cnst->vl.str->empty() == false)
		{
			rslt = bldBlnCnst(strcmp(cnst->vl.str->c_str(), "") == 0);
		}
		else
		{
			rslt = bldBlnCnst(0);
		}

	}
	else if (cnst->CnstTyp == ARRAY_VALUE)
	{
		if (cnst->vl.arr->elmtArr.size() == 0)
		{
			rslt = bldBlnCnst(1);
		}
		else
		{
			rslt = bldBlnCnst(0);
		}
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcUnrExpBitNot(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{

	struct CnstStrc* rslt;

	struct CnstStrc* cnst;
	cnst = clcExp(envr, exp->exp);

	if (cnst->CnstTyp == INT_VALUE || cnst->CnstTyp == FLOAT_VALUE || cnst->CnstTyp == BOOLEAN_VALUE)
	{
		rslt = bldCnstCpy(cnst);
		rslt->vl.intVl = ~rslt->vl.intVl;
	}
	// else if (cnst->CnstTyp == STRING_VALUE)
	// {
	//     if (cnst->vl.str !=NULL)
	//     {
	//         rslt = bldBlnCnst(strcmp(cnst->vl.str,"")!=0);
	//     }
	//     else
	//     {
	//         rslt = bldBlnCnst(0);
	//     }

	// }
	// else if (cnst->CnstTyp == ARRAY_VALUE)
	// {
	//     if (cnst->vl.arr->elmtCnt > 0 )
	//     {
	//         rslt= bldBlnCnst(1);
	//     }
	//     else
	//     {
	//         rslt= bldBlnCnst(0);
	//     }
	// }

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcUnrExpSub(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct CnstStrc* cnst, * rslt;

	rslt = NULL;

	cnst = clcExp(envr, exp->exp);

	if (cnst->CnstTyp == INT_VALUE)
	{
		rslt = bldIntCnst(-cnst->vl.intVl);
	}
	else if (cnst->CnstTyp == FLOAT_VALUE)
	{
		rslt = bldFltCnst(-cnst->vl.flt);
	}
	else if (cnst->CnstTyp == BOOLEAN_VALUE)
	{
		rslt = bldBlnCnst(cnst->vl.bln);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcUnrExpAdd(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct CnstStrc* cnst, * rslt;

	rslt = NULL;

	cnst = clcExp(envr, exp->exp);

	rslt = bldCnstCpy(cnst);

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcUnrExp(vector<EnvrStrc*>& envr, struct UnrExpStrc* exp)
{
	struct CnstStrc* rslt;

	switch (exp->oprTyp)
	{
	case PREFIX_INCREMENT:
	{
		rslt = clcUnrExpPfxInc(envr, exp);
		break;
	}
	case PREFIX_DECREMENT:
	{
		rslt = clcUnrExpPfxDec(envr, exp);
		break;
	}
	case SUFFIX_INCREMENT:
	{
		rslt = clcUnrExpSfxInc(envr, exp);
		break;
	}
	case SUFFIX_DECREMENT:
	{
		rslt = clcUnrExpSfxDec(envr, exp);
		break;
	}
	case NOT:
	{
		rslt = clcUnrExpNot(envr, exp);
		break;
	}
	case BIT_NOT:
	{
		rslt = clcUnrExpBitNot(envr, exp);
		break;
	}
	case SUB:
	{
		rslt = clcUnrExpSub(envr, exp);
		break;
	}
	case ADD:
	{
		rslt = clcUnrExpAdd(envr, exp);
		break;
	}


	}

	return rslt;
}

struct CnstStrc* clcFcnExp(vector<EnvrStrc*>& envr, struct FcnExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	struct NtvFcnStrc* ntvFcn;

	ntvFcn = getNtvFcn(envr, exp);

	struct FcnStrc* fcn;

	fcn = getFcn(envr, exp);

	if (ntvFcn == NULL && fcn == NULL)
	{
		throw new ExFcnNotFnd;
	}
	else if (ntvFcn != NULL)
	{
		//计算各个参数的值并赋值给传参数组

		int i;

		struct CnstStrc* arg;
		int argCnt = 0, argSz;

		//如果函数参数个数不正确
		if (exp->argLst->argArr.size() > ntvFcn->prmCnt)
		{
			throw new ExFcnTooMnyArg;
		}
		else if (exp->argLst->argArr.size() < ntvFcn->prmCnt)
		{
			throw new ExFcnTooFewArg;
		}

		//struct CnstStrc** argArr = (struct CnstStrc**)malloc(sizeof(struct CnstStrc*) * ntvFcn->prmCnt);
		vector< CnstStrc*> argArr;

		for (i = 0; i < exp->argLst->argArr.size(); i++)
		{
			arg = clcExp(envr, exp->argLst->argArr[i]);

			//argArr[i] = arg;
			argArr.push_back(arg);
		}

		rslt = ntvFcn->fcn(envr, ntvFcn->prmCnt, argArr);
	}
	else if (fcn != NULL)
	{
		//建立函数中的EnvrStrc

		struct EnvrStrc* envrFcn = new EnvrStrc(FUNCTION_ENVIRONMENT);

		envr.push_back(envrFcn);

		//计算各个参数的值并赋值给形参

		int i;

		struct CnstStrc* arg;
		int argCnt = 0, argSz;

		//如果函数参数个数不正确
		if (exp->argLst->argArr.size() > fcn->prmLst->prmArr.size())
		{
			throw new ExFcnTooMnyArg;
		}
		else if (exp->argLst->argArr.size() < fcn->prmLst->prmArr.size())
		{
			throw new ExFcnTooFewArg;
		}

		struct VrbStrc* vrb;

		for (i = 0; i < exp->argLst->argArr.size(); i++)
		{
			arg = clcExp(envr, exp->argLst->argArr[i]);

			//vrb= addVrb(fcn->envr, fcn->prmLst->prmArr[i]->exp.vrbExp);

			vrb = addVrb(envrFcn, static_cast<VrbExpStrc*>(fcn->prmLst->prmArr[i]));

			asgnVrb(vrb, arg);
		}

		struct StmtRsltStrc* stmtRslt;

		stmtRslt = exctStmt(envr, fcn->stmt);

		if (stmtRslt->typ == RETURN_RESULT && stmtRslt->rslt.rtnRslt->blnRslt == 1)
		{
			rslt = stmtRslt->rslt.rtnRslt->rslt;
		}

		envr.pop_back();
	}


	return rslt;

}

struct CnstStrc* clcRdIntExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp)
{
	int i;

	fscanf(stdin, "%d", &i);

	struct CnstStrc* rslt;

	rslt = bldIntCnst(i);

	return rslt;
}

struct CnstStrc* clcRdFltExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp)
{
	float f;

	fscanf(stdin, "%f", &f);

	struct CnstStrc* rslt;

	rslt = bldIntCnst(f);

	return rslt;
}
struct CnstStrc* clcRdBlnExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp)
{
	char* blnStr = (char*)malloc(0x10);

	fscanf(stdin, "%s", blnStr);

	struct CnstStrc* rslt;

	if (strcmp(blnStr, "true"))
	{
		rslt = bldBlnCnst(1);
	}
	else
	{
		rslt = bldBlnCnst(0);
	}

	return rslt;
}

struct CnstStrc* clcRdStrExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp)
{
	char* str = (char*)malloc(0x1000);

	fscanf(stdin, "%s", str);

	struct CnstStrc* rslt;

	rslt = bldStrCnst(str);

	return rslt;
}

struct CnstStrc* clcRdLnExp(vector<EnvrStrc*>& envr, struct RdExpStrc* exp)
{
	char* str = (char*)malloc(0x1000);

	fgets(str, 0x1000, stdin);

	struct CnstStrc* rslt;

	rslt = bldStrCnst(str);

	return rslt;
}





//struct CnstStrc* clcLclAsgnExp(vector<EnvrStrc*>& envr, struct LclAsgnExpStrc* exp)
//{
//	struct CnstStrc* rslt = NULL;
//	struct VrbStrc* vrb;
//
//	int i;
//
//	for (i = 0; i < exp->asgnLst->asgnArr.size(); i++)
//	{
//		struct VrbExpStrc* vrbExp;
//
//		vrbExp = exp->asgnLst->asgnArr[i]->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp;
//
//
//		if ((vrb = getEnvrVrb(fcnEnvr, vrbExp)) == NULL)
//		{
//			vrb = addVrb(fcnEnvr, vrbExp);
//		}
//
//		if (exp->asgnLst->asgnArr[i]->exp.asgnExp->exp->typ != NULL_EXPRESSION)
//		{
//			rslt = clcExp(envr, exp->asgnLst->asgnArr[i]->exp.asgnExp->exp);
//			asgnVrb(vrb, rslt);
//		}
//		else
//		{
//			asgnVrb(vrb, bldNllCnst());
//			rslt = bldNllCnst();
//
//		}
//	}
//
//
//	return rslt;
//}



struct CnstStrc* clcAsgnExp(vector<EnvrStrc*>& envr, struct AsgnExpStrc* exp)
{

	struct CnstStrc* rslt = new CnstStrc;

	rslt = clcExp(envr, exp->exp);

	struct LvlExpStrc* lvl;


	lvl = static_cast<LvlExpStrc*>(exp->lvl);

	struct VrbStrc* vrb;

	vrb = getVrb(envr, static_cast<VrbExpStrc*> (lvl->vrb));

	if (lvl->hasAcsLst == 0)
	{
		asgnVrb(vrb, rslt);
	}
	//定位到数组元素的情况
	else
	{

		int pstn;

		struct CnstStrc* arrTmp;

		arrTmp = bldCnstFrmVrb(vrb);

		int lyr;

		lyr = lvl->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			if (arrTmp->CnstTyp != ARRAY_VALUE)
			{
				throw new ExNotAvlbArr;
			}

			pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->vl.intVl;

			if (pstn >= arrTmp->vl.arr->elmtArr.size())
			{
				throw new ExIdxOutArrRng;
			}

			if (i < lyr - 1)
			{
				arrTmp = arrTmp->vl.arr->elmtArr[pstn];
			}

		}

		if (pstn >= arrTmp->vl.arr->elmtArr.size())
		{
			throw new ExIdxOutArrRng;
		}

		arrTmp->vl.arr->elmtArr[pstn] = rslt;
	}


	return rslt;
}

struct CnstStrc* clcArrExp(vector<EnvrStrc*>& envr, struct ArrExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = ARRAY_VALUE;

	int elmtCnt;

	rslt->vl.arr = new ArrStrc;

	int i;

	elmtCnt = exp->elmtLst->elmtArr.size();

	//printf("arr: %d:", elmtCnt);

	for (i = 0; i < elmtCnt; i++)
	{
		//rslt->vl.arr->elmtArr[i] = clcExp(envr, exp->elmtLst->elmtArr[i]);
		rslt->vl.arr->elmtArr.push_back(clcExp(envr, exp->elmtLst->elmtArr[i]));

		//printf("%d, ", rslt->vl.arr->elmtArr.back()->vl.intVl);
	}


	return rslt;
}

struct CnstStrc* clcNewArrExp(vector<EnvrStrc*>& envr, struct NewArrExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = ARRAY_VALUE;

	//rslt->vl.arr = (struct ArrStrc*)malloc(sizeof(struct ArrStrc*));
	rslt->vl.arr = new ArrStrc;

	int elmtCnt;

	elmtCnt = clcExp(envr, exp->cnt)->vl.intVl;

	//rslt->vl.arr->elmtSz = elmtCnt + 0x10;
	//rslt->vl.arr->elmtCnt = elmtCnt;

	//rslt->vl.arr->elmtArr = (struct CnstStrc**)malloc(sizeof(struct CnstStrc*) * rslt->vl.arr->elmtSz);

	int i;

	for (i = 0; i < elmtCnt; i++)
	{
		//rslt->vl.arr->elmtArr[i] = bldNllCnst();
		rslt->vl.arr->elmtArr.push_back(bldNllCnst());
	}

	return rslt;
}

//struct CnstStrc* clcArrEvlExp(vector<EnvrStrc*>& envr, struct ArrEvlExpStrc* exp)
//{
//	struct CnstStrc* rslt = new CnstStrc;
//
//	int pstn;
//
//	struct VrbStrc* arr;
//	struct CnstStrc* arrTmp, * arrTmp2;
//
//	struct ArrStrc* arrNew;
//
//
//	arr = getVrb(envr, exp->arr->exp.vrbExp);
//
//	int i;
//	int j;
//
//	int strt, end, stp;
//
//	//arrTmp用于迭代取数组的值
//	arrTmp = bldCnstFrmVrb(arr);
//
//	for (i = 0; i < exp->evlLst->evlCnt; i++)
//	{
//		if (exp->evlLst->blnSlc[i] == 0)
//		{
//			pstn = clcExp(envr, exp->evlLst->pstnArr[i])->vl.intVl;
//
//			//如果数组索引为负数，实际的数组索引为数组索引值（负数）加数组长度
//			if (pstn < 0)
//			{
//				pstn = arrTmp->vl.arr->elmtArr.size() + pstn;
//			}
//
//			arrTmp = arrTmp->vl.arr->elmtArr[pstn];
//		}
//
//		if (exp->evlLst->blnSlc[i] != 0)
//		{
//			intlArr(&arrNew);
//
//			strt = clcExp(envr, exp->evlLst->strtArr[i])->vl.intVl;
//			end = clcExp(envr, exp->evlLst->endArr[i])->vl.intVl;
//			stp = clcExp(envr, exp->evlLst->stpArr[i])->vl.intVl;
//
//			if (strt < 0)
//			{
//				strt = arrTmp->vl.arr->elmtArr.size() + strt;
//			}
//
//			if (end < 0)
//			{
//				end = arrTmp->vl.arr->elmtArr.size() + end;
//			}
//
//			if (strt <= end && stp > 0)
//			{
//				for (j = strt; j <= end; j += stp)
//				{
//					addElmt(arrNew, arrTmp->vl.arr->elmtArr[j]);
//				}
//			}
//
//			if (strt > end && stp < 0)
//			{
//				for (j = strt; j >= end; j += stp)
//				{
//					addElmt(arrNew, arrTmp->vl.arr->elmtArr[j]);
//				}
//			}
//
//
//			arrTmp = bldArrCnst(arrNew);
//		}
//
//	}
//
//	//获得得取值结果应该是值，不是引用
//	rslt = bldCnstCpy(arrTmp);
//
//	return rslt;
//
//}

struct CnstStrc* clcElmtAsgnExp(vector<EnvrStrc*>& envr, struct ElmtAsgnExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	int pstn;

	struct VrbStrc* arr;

	arr = getVrb(envr, static_cast<VrbExpStrc*>(exp->arr));

	struct ArrStrc* arrPrnt;

	arrPrnt = arr->vl.arr;

	int lyr;

	lyr = exp->pstnLst->pstnArr.size();

	int i;

	for (i = 0; i < lyr - 1; i++)
	{
		pstn = clcExp(envr, exp->pstnLst->pstnArr[i])->vl.intVl;
		arrPrnt = arrPrnt->elmtArr[pstn]->vl.arr;
	}

	rslt = clcExp(envr, exp->vl);

	pstn = clcExp(envr, exp->pstnLst->pstnArr[lyr - 1])->vl.intVl;

	arrPrnt->elmtArr[pstn] = rslt;

	return rslt;


}


struct CnstStrc* clcLvlExp(vector<EnvrStrc*>& envr, struct LvlExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	struct VrbStrc* lvl;

	lvl = getVrb(envr, static_cast<VrbExpStrc*> (exp->vrb));

	if (lvl == NULL)
	{
		//errRpt(VARIABLE_NOT_DEFINED);
		throw new ExVrbNotFnd();
		return NULL;
	}

	//printf("Get lvalue vrb: %08h\n", (int)lvl);

	//如果是变量名的情况
	if (exp->hasAcsLst == 0)
	{
		rslt = bldCnstFrmVrb(lvl);
	}
	//如果是数组评估表达式的情况
	else
	{
		int pstn;

		struct CnstStrc* arrTmp, * arrTmp2;

		struct ArrStrc* arrNew;


		int i;
		int j;

		int strt, end, stp;

		//arrTmp用于迭代取数组的值
		arrTmp = bldCnstFrmVrb(lvl);

		int lyr = exp->acs->acsLst.size();

		for (i = 0; i < lyr; i++)
		{
			//检查是否是有效的数组
			if (arrTmp->CnstTyp != ARRAY_VALUE)
			{
				throw new ExNotAvlbArr;
			}

			//该层为数组索引的情况
			if (exp->acs->acsLst[i]->blnSlc == 0)
			{
				pstn = clcExp(envr, exp->acs->acsLst[i]->pstn)->vl.intVl;

				//如果数组索引为负数，实际的数组索引为数组索引值（负数）加数组长度
				if (pstn < 0)
				{
					pstn = arrTmp->vl.arr->elmtArr.size() + pstn;
				}

				if (pstn >= arrTmp->vl.arr->elmtArr.size())
				{
					throw new ExIdxOutArrRng;
				}

				arrTmp = arrTmp->vl.arr->elmtArr[pstn];
				//if (i < lyr - 1)
				//{
				//	arrTmp = arrTmp->vl.arr->elmtArr[pstn];
				//}
				//else
				//{
				//	rslt = bldCnstCpy(arrTmp->vl.arr->elmtArr[pstn]);
				//	return rslt;
				//}
			}

			if (exp->acs->acsLst[i]->blnSlc != 0)
			{
				intlArr(&arrNew);

				strt = clcExp(envr, exp->acs->acsLst[i]->strt)->vl.intVl;
				end = clcExp(envr, exp->acs->acsLst[i]->end)->vl.intVl;
				stp = clcExp(envr, exp->acs->acsLst[i]->stp)->vl.intVl;

				if (strt < 0)
				{
					strt = arrTmp->vl.arr->elmtArr.size() + strt;
				}

				if (end < 0)
				{
					end = arrTmp->vl.arr->elmtArr.size() + end;
				}

				if (strt >= arrTmp->vl.arr->elmtArr.size())
				{
					throw new ExIdxOutArrRng;
				}

				if (end >= arrTmp->vl.arr->elmtArr.size())
				{
					throw new ExIdxOutArrRng;
				}

				if (strt <= end && stp > 0)
				{
					for (j = strt; j <= end; j += stp)
					{
						addElmt(arrNew, arrTmp->vl.arr->elmtArr[j]);
					}
				}

				if (strt > end && stp < 0)
				{
					for (j = strt; j >= end; j += stp)
					{
						addElmt(arrNew, arrTmp->vl.arr->elmtArr[j]);
					}
				}

				arrTmp = bldArrCnst(arrNew);
			}

		}

		//获得得取值结果应该是值，不是引用
		rslt = bldCnstCpy(arrTmp);
	}

	return rslt;

}

struct CnstStrc* clcExp(vector<EnvrStrc*>& envr, struct ExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	if (exp->typ == CONST_EXPRESSION)
	{
		rslt = static_cast<CnstStrc*>(exp);
	}

	if (exp->typ == VARIABLE_EXPRESSION)
	{
		struct VrbStrc* vrb = getVrb(envr, static_cast<VrbExpStrc*>(exp));

		//如果变量没有注册过，则注册变量并赋值为null
		if (vrb == NULL)
		{
			vrb = addVrb(envr[envr.size() - 1], static_cast<VrbExpStrc*>(exp));
			asgnVrb(vrb, bldNllCnst());
		}

		rslt = bldCnstFrmVrb(vrb);

	}

	if (exp->typ == BINARY_EXPRESSION)
	{
		rslt = clcBnrExp(envr, static_cast<BnrExpStrc*>(exp));
	}

	if (exp->typ == ASSIGN_EXPRESSION)
	{
		AsgnExpStrc* asgnExp = static_cast<AsgnExpStrc*>(exp);

		//如果已经注册为函数名则抛出异常
		if (getFcn(envr, bldFcnExp((char*)(asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp->nm.c_str()), NULL)->exp.fcnExp) != NULL)
		{
			throw new ExAlrdDfnAsFctn;
		}

		if (getVrb(envr, asgnExp->lvl->vrb->exp.vrbExp) == NULL)
		{
			addVrb(envr[envr.size() - 1], asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp);
		}

		rslt = clcAsgnExp(envr, asgnExp);
	}

	if (exp->typ == UNARY_EXPRESSION)
	{
		rslt = clcUnrExp(envr, static_cast<UnrExpStrc*>(exp));
	}

	if (exp->typ == FUNCTION_EXPRESSION)
	{
		rslt = clcFcnExp(envr, static_cast<FcnExpStrc*>(exp));
	}

	if (exp->typ == ARRAY_EXPRESSION)
	{
		rslt = clcArrExp(envr, exp->exp.arrExp);
	}

	if (exp->typ == ELEMENT_ASSIGN_EXPRESSION)
	{
		rslt = clcElmtAsgnExp(envr, exp->exp.elmtAsgnExp);
	}

	if (exp->typ == NEW_ARRAY_EXPRESSION)
	{
		rslt = clcNewArrExp(envr, exp->exp.newArrExp);
	}

	if (exp->typ == LVALUE_EXPRESSION)
	{
		rslt = clcLvlExp(envr, static_cast<LvlExpStrc*>(exp));
	}

	if (exp->typ == NULL_EXPRESSION)
	{
		rslt = bldNllCnst();
	}

	return rslt;
}
