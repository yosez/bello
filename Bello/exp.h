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

extern struct StmtRsltStrc* exctStmt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct StmtStrc* stmt);

struct ExpStrc* bldCnstIntExp(int intVl);
struct ExpStrc* bldCnstFltExp(float fltVl);
struct ExpStrc* bldCnstBlnExp(int blnVl);
struct ExpStrc* bldCnstStrExp(char* strVl);
struct ExpStrc* bldCnstNllExp();
struct ExpStrc* bldAsgnExp(struct ExpStrc* lvl, struct ExpStrc* exp);
struct ExpStrc* bldVrbExp(char* idtf);
//struct ExpStrc* bldVrbExp(string idtf);
struct ExpStrc* bldBnrExp(int opr, struct ExpStrc* lftExp, struct ExpStrc* rghtExp);
struct ExpStrc* bldUnrExp(int opr, struct ExpStrc* exp);
struct ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst);
//struct ExpStrc* bldFcnExp(string nm, struct ArgLstStrc* argLst);
struct ExpStrc* bldGlbAsgnExp(struct AsgnLstStrc* asgnLst);
struct ExpStrc* bldLclAsgnExp(struct AsgnLstStrc* asgnLst);
struct ExpStrc* bldRdExp(int typ);
struct ExpStrc* bldArrExp(struct ElmtLstStrc* elmtLst);
//struct ExpStrc* bldArrEvlExp(struct ExpStrc* vrb, struct AcsLstStrc* evlLst);
struct ExpStrc* bldLvlExp(struct ExpStrc* vrb);
struct ExpStrc* bldLvlExpAdd(struct ExpStrc* lvl, struct AcsLstStrc* evlLst);
struct ExpStrc* bldElmtAsgnExp(struct ExpStrc* arr, struct PstnLstStrc* pstnLst, struct ExpStrc* vl);
struct ExpStrc* bldNewArrExp(struct ExpStrc* cnt);
struct CnstStrc* clcBnrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpAdd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpSub(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpMul(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpDiv(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpAnd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpOr(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpEq(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpNe(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpGt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpGe(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpLt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpLe(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpBitAnd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpBitOr(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcBnrExpBitXor(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp);
struct CnstStrc* clcAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct AsgnExpStrc* exp);
struct CnstStrc* clcLclAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct LclAsgnExpStrc* exp);
struct CnstStrc* clcGlbAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct GlbAsgnExpStrc* exp);
struct CnstStrc* clcUnrExpPfxInc(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpPfxDec(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpSfxInc(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpSfxDec(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpNot(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpBitNot(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpSub(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExpAdd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcUnrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp);
struct CnstStrc* clcFcnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct FcnExpStrc* exp);
struct CnstStrc* clcRdIntExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp);
struct CnstStrc* clcRdFltExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp);
struct CnstStrc* clcRdBlnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp);
struct CnstStrc* clcRdStrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp);
struct CnstStrc* clcRdLnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp);
struct CnstStrc* clcRdExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp);
struct CnstStrc* clcArrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ArrExpStrc* exp);
struct CnstStrc* clcNewArrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct NewArrExpStrc* exp);
struct CnstStrc* clcArrEvlExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ArrEvlExpStrc* exp);
struct CnstStrc* clcElmtAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ElmtAsgnExpStrc* exp);
struct CnstStrc* clcLvlExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct LvlExpStrc* exp);
struct CnstStrc* clcExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ExpStrc* exp);


struct ExpStrc* bldCnstIntExp(int intVl)
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = CONST_EXPRESSION;

	exp->exp.cnst = bldIntCnst(intVl);

	return exp;
}

struct ExpStrc* bldCnstFltExp(float fltVl)
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = CONST_EXPRESSION;

	exp->exp.cnst = bldFltCnst(fltVl);

	return exp;
}

struct ExpStrc* bldCnstBlnExp(int blnVl)
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = CONST_EXPRESSION;

	exp->exp.cnst = bldBlnCnst(blnVl);

	return exp;
}

struct ExpStrc* bldCnstStrExp(char* strVl)
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = CONST_EXPRESSION;
	exp->exp.cnst = bldStrCnst(strVl);


	//prtCnst(exp->exp.cnst);

	return exp;
}

struct ExpStrc* bldCnstNllExp()
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = CONST_EXPRESSION;
	exp->exp.cnst = bldNllCnst();

	return exp;
}

struct ExpStrc* bldAsgnExp(struct ExpStrc* lvl, struct ExpStrc* exp)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = ASSIGN_EXPRESSION;

	//rslt->exp.asgnExp = (struct AsgnExpStrc*)malloc(sizeof(struct AsgnExpStrc));
	rslt->exp.asgnExp = new AsgnExpStrc;
	rslt->exp.asgnExp->lvl = lvl;
	rslt->exp.asgnExp->exp = exp;

	return rslt;
}

// struct ExpStrc *bldVrbDfnExp(struct VrbLstStrc *vrbLst)
// {
//     struct ExpStrc *rslt= (struct ExpStrc *)malloc(sizeof(struct ExpStrc ));

//     rslt->typ=VARIABLE_DEFINE_EXPRESSION;

//     rslt->exp.vrbDfnExp=(struct VrbDfnExpStrc *)malloc(sizeof(struct VrbDfnExpStrc));

//     rslt->exp.vrbDfnExp->vrbLst=vrbLst;

//     return rslt;
// }

struct ExpStrc* bldGlbAsgnExp(struct AsgnLstStrc* asgnLst)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = GLOBAL_ASSIGN_EXPRESSION;

	//rslt->exp.glbAsgnExp = (struct GlbAsgnExpStrc*)malloc(sizeof(struct GlbAsgnExpStrc));
	rslt->exp.glbAsgnExp = new GlbAsgnExpStrc;

	rslt->exp.glbAsgnExp->asgnLst = asgnLst;

	return rslt;
}

struct ExpStrc* bldLclAsgnExp(struct AsgnLstStrc* asgnLst)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = LOCAL_ASSIGN_EXPRESSION;

	//rslt->exp.lclAsgnExp = (struct LclAsgnExpStrc*)malloc(sizeof(struct LclAsgnExpStrc));
	rslt->exp.lclAsgnExp = new LclAsgnExpStrc;

	rslt->exp.lclAsgnExp->asgnLst = asgnLst;

	return rslt;
}

// struct ExpStrc *bldRdExp(int typ, struct ExpStrc * vrb)
// {
//     struct ExpStrc *rslt= (struct ExpStrc *)malloc(sizeof(struct ExpStrc ));

//     rslt->typ=READ_EXPRESSION;

//     rslt->exp.rdExpStrc=(struct RdExpStrc *)malloc(sizeof(struct RdExpStrc));

//     rslt->exp.rdExpStrc->typ= typ;

//     rslt->exp.rdExpStrc->vrb= vrb;

//     return rslt;
// }

struct ExpStrc* bldRdExp(int typ)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = READ_EXPRESSION;

	//rslt->exp.rdExp = (struct RdExpStrc*)malloc(sizeof(struct RdExpStrc));
	rslt->exp.rdExp = new RdExpStrc;

	rslt->exp.rdExp->typ = typ;

	return rslt;
}

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
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = LVALUE_EXPRESSION;

	rslt->exp.lvlExp = new LvlExpStrc;

	rslt->exp.lvlExp->vrb = vrb;

	rslt->exp.lvlExp->hasAcsLst = 0;
	rslt->exp.lvlExp->acs = NULL;

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
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = ELEMENT_ASSIGN_EXPRESSION;

	//rslt->exp.elmtAsgnExp = (struct ElmtAsgnExpStrc*)malloc(sizeof(struct ElmtAsgnExpStrc));
	rslt->exp.elmtAsgnExp = new ElmtAsgnExpStrc;

	rslt->exp.elmtAsgnExp->arr = arr;
	rslt->exp.elmtAsgnExp->pstnLst = pstnLst;
	rslt->exp.elmtAsgnExp->vl = vl;

	return rslt;
}


struct ExpStrc* bldNewArrExp(struct ExpStrc* cnt)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = NEW_ARRAY_EXPRESSION;

	//rslt->exp.newArrExp = (struct NewArrExpStrc*)malloc(sizeof(struct NewArrExpStrc));
	rslt->exp.newArrExp = new NewArrExpStrc;

	rslt->exp.newArrExp->cnt = cnt;

	return rslt;
}

//struct ExpStrc* bldVrbExp(char* nm)
//{
//	struct ExpStrc* exp = new ExpStrc;
//
//	exp->typ = VARIABLE_EXPRESSION;
//	exp->exp.vrbExp = (struct VrbExpStrc*)malloc(sizeof(struct VrbExpStrc));
//
//	exp->exp.vrbExp->nm = nm;
//
//	return exp;
//}

struct ExpStrc* bldVrbExp(char* nm)
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = VARIABLE_EXPRESSION;
	exp->exp.vrbExp = new VrbExpStrc;
	//(struct VrbExpStrc*)malloc(sizeof(struct VrbExpStrc));

	exp->exp.vrbExp->nm = nm;

	return exp;
}

struct ExpStrc* bldBnrExp(int opr, struct ExpStrc* lftExp, struct ExpStrc* rghtExp)
{
	struct ExpStrc* exp = new ExpStrc;

	exp->typ = BINARY_EXPRESSION;

	//exp->exp.bnrExp = (struct BnrExpStrc*)malloc(sizeof(struct BnrExpStrc));
	exp->exp.bnrExp = new BnrExpStrc;

	exp->exp.bnrExp->lftExp = lftExp;
	exp->exp.bnrExp->rghtExp = rghtExp;
	exp->exp.bnrExp->oprTyp = opr;

	return exp;
}

struct ExpStrc* bldUnrExp(int opr, struct ExpStrc* exp)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = UNARY_EXPRESSION;

	//rslt->exp.unrExp = (struct UnrExpStrc*)malloc(sizeof(struct UnrExpStrc));
	rslt->exp.unrExp = new UnrExpStrc;

	rslt->exp.unrExp->exp = exp;
	rslt->exp.unrExp->oprTyp = opr;

	return rslt;
}

//struct ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst)
//{
//	struct ExpStrc* rslt = new ExpStrc;
//
//	rslt->typ = FUNCTION_EXPRESSION;
//
//	rslt->exp.fcnExp = (struct FcnExpStrc*)malloc(sizeof(struct FcnExpStrc));
//
//	rslt->exp.fcnExp->nm = nm;
//	//strcpy(rslt->exp.fcnExp->nm, nm);
//
//	rslt->exp.fcnExp->argLst = argLst;
//
//	return rslt;
//
//}

struct ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst)
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = FUNCTION_EXPRESSION;

	rslt->exp.fcnExp = new FcnExpStrc;

	rslt->exp.fcnExp->nm = nm;

	rslt->exp.fcnExp->argLst = argLst;

	return rslt;

}

struct ExpStrc* bldNllExp()
{
	struct ExpStrc* rslt = new ExpStrc;

	rslt->typ = NULL_EXPRESSION;

	return rslt;
}

struct CnstStrc* clcBnrExpAdd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		str = lftCnst->vl.str + rghtCnst->vl.str;
		//str = (char*)malloc(strlen(lftCnst->vl.str) + strlen(rghtCnst->vl.str) + 0x10);
		//memset(str, 0, sizeof(str));

		//strcpy(str, lftCnst->vl.str);
		//strcat(str, rghtCnst->vl.str);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == INT_VALUE)
	{


		str = lftCnst->vl.str;

		printf("str lft: %s ", str.c_str());
		str += to_string(rghtCnst->vl.intVl);
		//str += strInt;
		printf("str: %s ", str.c_str());

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == INT_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//char* strInt;
		//strInt = (char*)malloc(0x10);
		//memset(strInt, 0, sizeof(strInt));

		//sprintf(strInt, "%d", lftCnst->vl.intVl);

		//str = (char*)malloc(strlen(strInt) + strlen(rghtCnst->vl.str) + 0x10);
		//memset(str, 0, sizeof(str));

		//strcpy(str, strInt);
		//strcat(str, rghtCnst->vl.str);

		//str = strInt;

		str = to_string(lftCnst->vl.intVl);
		str += rghtCnst->vl.str;

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == FLOAT_VALUE)
	{
		//char* strFlt;
		//strFlt = (char*)malloc(0x10);
		//memset(strFlt, 0, sizeof(strFlt));

		//sprintf(strFlt, "%f", rghtCnst->vl.flt);

		//str = (char*)malloc(strlen(lftCnst->vl.str) + strlen(strFlt) + 0x10);
		//memset(str, 0, sizeof(str));

		//strcpy(str, lftCnst->vl.str);
		//strcat(str, strFlt);

		str = lftCnst->vl.str;
		str += to_string(rghtCnst->vl.flt);

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == FLOAT_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{
		//char* strFlt;
		//strFlt = (char*)malloc(0x10);
		//memset(strFlt, 0, sizeof(strFlt));

		//sprintf(strFlt, "%f", lftCnst->vl.flt);

		//str = (char*)malloc(strlen(strFlt) + strlen(rghtCnst->vl.str) + 0x10);
		//memset(str, 0, sizeof(str));

		//strcpy(str, strFlt);
		//strcat(str, rghtCnst->vl.str);

		str = to_string(lftCnst->vl.flt);
		str += rghtCnst->vl.str;

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == STRING_VALUE && rghtCnst->CnstTyp == BOOLEAN_VALUE)
	{

		//str = (char*)malloc(strlen(lftCnst->vl.str) + 0x10);
		//memset(str, 0, sizeof(str));

		//strcpy(str, lftCnst->vl.str);

		//if (rghtCnst->vl.bln == 0)
		//{
		//	strcat(str, "false");
		//}
		//else
		//{
		//	strcat(str, "true");
		//}

		str = lftCnst->vl.str;

		str += rghtCnst->vl.bln == 0 ? "false" : "true";

		rslt = bldStrCnstByStr(str);
	}

	if (lftCnst->CnstTyp == BOOLEAN_VALUE && rghtCnst->CnstTyp == STRING_VALUE)
	{

		//str = (char*)malloc(strlen(rghtCnst->vl.str) + 0x10);
		//memset(str, 0, sizeof(str));

		//if (lftCnst->vl.bln == 0)
		//{
		//	strcpy(str, "false");
		//}
		//else
		//{
		//	strcpy(str, "true");
		//}

		//strcat(str, rghtCnst->vl.str);

		str = lftCnst->vl.bln == 0 ? "false" : "true";

		str += rghtCnst->vl.str;

		rslt = bldStrCnstByStr(str);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpSub(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpMul(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpDiv(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpMod(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpEq(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		rslt = bldBlnCnst(lftCnst->vl.str.compare(rghtCnst->vl.str) == 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpNe(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		rslt = bldBlnCnst(lftCnst->vl.str.compare(rghtCnst->vl.str) != 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpGt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		rslt = bldBlnCnst(strcmp(lftCnst->vl.str.c_str(), rghtCnst->vl.str.c_str()) > 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpGe(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		rslt = bldBlnCnst(lftCnst->vl.str.compare(rghtCnst->vl.str) >= 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}



struct CnstStrc* clcBnrExpLt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		rslt = bldBlnCnst(lftCnst->vl.str.compare(rghtCnst->vl.str) < 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpLe(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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
		rslt = bldBlnCnst(lftCnst->vl.str.compare(rghtCnst->vl.str) <= 0);
	}

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;

}

struct CnstStrc* clcBnrExpBitAnd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpBitOr(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpBitXor(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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


struct CnstStrc* clcBnrExpAnd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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

struct CnstStrc* clcBnrExpOr(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* lftCnst = clcExp(glbEnvr, fcnEnvr, exp->lftExp);
	struct CnstStrc* rghtCnst = clcExp(glbEnvr, fcnEnvr, exp->rghtExp);

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



struct CnstStrc* clcBnrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct BnrExpStrc* exp)
{
	struct CnstStrc* rslt;

	switch (exp->oprTyp)
	{
		//处理相同类型及不同类型变量之间的运算
	case ADD:
	{
		rslt = clcBnrExpAdd(glbEnvr, fcnEnvr, exp);

		break;
	}
	case SUB:
	{
		rslt = clcBnrExpSub(glbEnvr, fcnEnvr, exp);

		break;
	}
	case MUL:
	{
		rslt = clcBnrExpMul(glbEnvr, fcnEnvr, exp);
		break;
	}
	case DIV:
	{
		rslt = clcBnrExpDiv(glbEnvr, fcnEnvr, exp);
		break;
	}
	case MOD:
	{
		rslt = clcBnrExpMod(glbEnvr, fcnEnvr, exp);
		break;
	}
	case EQ:
	{
		rslt = clcBnrExpEq(glbEnvr, fcnEnvr, exp);
		break;
	}
	case NE:
	{
		rslt = clcBnrExpNe(glbEnvr, fcnEnvr, exp);
		break;
	}
	case GT:
	{
		rslt = clcBnrExpGt(glbEnvr, fcnEnvr, exp);
		break;
	}
	case GE:
	{
		rslt = clcBnrExpGe(glbEnvr, fcnEnvr, exp);
		break;
	}
	case LT:
	{
		rslt = clcBnrExpLt(glbEnvr, fcnEnvr, exp);
		break;
	}
	case LE:
	{
		rslt = clcBnrExpLe(glbEnvr, fcnEnvr, exp);
		break;
	}
	case AND:
	{
		rslt = clcBnrExpAnd(glbEnvr, fcnEnvr, exp);
		break;
	}
	case OR:
	{
		rslt = clcBnrExpOr(glbEnvr, fcnEnvr, exp);
		break;
	}
	case BIT_AND:
	{
		rslt = clcBnrExpBitAnd(glbEnvr, fcnEnvr, exp);
		break;
	}
	case BIT_OR:
	{
		rslt = clcBnrExpBitOr(glbEnvr, fcnEnvr, exp);
		break;
	}
	case BIT_XOR:
	{
		rslt = clcBnrExpBitXor(glbEnvr, fcnEnvr, exp);
	}

	}

	return rslt;
}

struct CnstStrc* clcUnrExpPfxInc(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	lvl = exp->exp->exp.lvlExp;

	struct VrbStrc* vrb;

	vrb = getVrb(glbEnvr, fcnEnvr, lvl->vrb->exp.vrbExp);

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

		lyr = exp->exp->exp.lvlExp->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(glbEnvr, fcnEnvr, exp->exp->exp.lvlExp->acs->acsLst[i]->pstn)->vl.intVl;

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

struct CnstStrc* clcUnrExpPfxDec(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct VrbStrc* vrb;

	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	lvl = exp->exp->exp.lvlExp;

	vrb = getVrb(glbEnvr, fcnEnvr, lvl->vrb->exp.vrbExp);

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

		lyr = exp->exp->exp.lvlExp->acs->acsLst.size();

		int i;

		//按层级定位数组中元素的位置，直至arrPrnt定位到包含元素的最内层的数组
		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(glbEnvr, fcnEnvr, exp->exp->exp.lvlExp->acs->acsLst[i]->pstn)->vl.intVl;

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

struct CnstStrc* clcUnrExpSfxInc(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct VrbStrc* vrb;

	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	lvl = exp->exp->exp.lvlExp;

	vrb = getVrb(glbEnvr, fcnEnvr, lvl->vrb->exp.vrbExp);

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

		lyr = exp->exp->exp.lvlExp->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(glbEnvr, fcnEnvr, exp->exp->exp.lvlExp->acs->acsLst[i]->pstn)->vl.intVl;
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

struct CnstStrc* clcUnrExpSfxDec(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct VrbStrc* vrb;

	struct CnstStrc* rslt = new CnstStrc;

	struct LvlExpStrc* lvl;

	lvl = exp->exp->exp.lvlExp;

	vrb = getVrb(glbEnvr, fcnEnvr, lvl->vrb->exp.vrbExp);

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

		lyr = exp->exp->exp.lvlExp->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			pstn = clcExp(glbEnvr, fcnEnvr, exp->exp->exp.lvlExp->acs->acsLst[i]->pstn)->vl.intVl;
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

struct CnstStrc* clcUnrExpNot(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{

	struct CnstStrc* rslt = NULL;

	struct CnstStrc* cnst;
	cnst = clcExp(glbEnvr, fcnEnvr, exp->exp);

	if (cnst->CnstTyp == INT_VALUE || cnst->CnstTyp == FLOAT_VALUE || cnst->CnstTyp == BOOLEAN_VALUE)
	{

		rslt = bldBlnCnst(cnst->vl.intVl == 0);

	}
	else if (cnst->CnstTyp == STRING_VALUE)
	{
		//if (cnst->vl.str != NULL)
		if (cnst->vl.str.empty() == false)
		{
			rslt = bldBlnCnst(strcmp(cnst->vl.str.c_str(), "") == 0);
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

struct CnstStrc* clcUnrExpBitNot(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{

	struct CnstStrc* rslt;

	struct CnstStrc* cnst;
	cnst = clcExp(glbEnvr, fcnEnvr, exp->exp);

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

struct CnstStrc* clcUnrExpSub(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct CnstStrc* cnst, * rslt;

	rslt = NULL;

	cnst = clcExp(glbEnvr, fcnEnvr, exp->exp);

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

struct CnstStrc* clcUnrExpAdd(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct CnstStrc* cnst, * rslt;

	rslt = NULL;

	cnst = clcExp(glbEnvr, fcnEnvr, exp->exp);

	rslt = bldCnstCpy(cnst);

	if (rslt == NULL)
	{
		throw new ExWrgOprndTyp;
	}

	return rslt;
}

struct CnstStrc* clcUnrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct UnrExpStrc* exp)
{
	struct CnstStrc* rslt;

	switch (exp->oprTyp)
	{
	case PREFIX_INCREMENT:
	{
		rslt = clcUnrExpPfxInc(glbEnvr, fcnEnvr, exp);
		break;
	}
	case PREFIX_DECREMENT:
	{
		rslt = clcUnrExpPfxDec(glbEnvr, fcnEnvr, exp);
		break;
	}
	case SUFFIX_INCREMENT:
	{
		rslt = clcUnrExpSfxInc(glbEnvr, fcnEnvr, exp);
		break;
	}
	case SUFFIX_DECREMENT:
	{
		rslt = clcUnrExpSfxDec(glbEnvr, fcnEnvr, exp);
		break;
	}
	case NOT:
	{
		rslt = clcUnrExpNot(glbEnvr, fcnEnvr, exp);
		break;
	}
	case BIT_NOT:
	{
		rslt = clcUnrExpBitNot(glbEnvr, fcnEnvr, exp);
		break;
	}
	case SUB:
	{
		rslt = clcUnrExpSub(glbEnvr, fcnEnvr, exp);
		break;
	}
	case ADD:
	{
		rslt = clcUnrExpAdd(glbEnvr, fcnEnvr, exp);
		break;
	}


	}

	return rslt;
}

struct CnstStrc* clcFcnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct FcnExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	struct NtvFcnStrc* ntvFcn;

	ntvFcn = getNtvFcn(glbEnvr, exp);

	struct FcnStrc* fcn;

	fcn = getFcn(glbEnvr, fcnEnvr, exp);

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
			arg = clcExp(glbEnvr, fcnEnvr, exp->argLst->argArr[i]);

			//argArr[i] = arg;
			argArr.push_back(arg);
		}

		rslt = ntvFcn->fcn(glbEnvr, ntvFcn->prmCnt, argArr);
	}
	else if (fcn != NULL)
	{
		//建立函数中的EnvrStrc

		struct EnvrStrc* envr;

		intlEnvr(&envr);

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
			arg = clcExp(glbEnvr, fcnEnvr, exp->argLst->argArr[i]);

			//vrb= addVrb(fcn->envr, fcn->prmLst->prmArr[i]->exp.vrbExp);

			vrb = addVrb(envr, fcn->prmLst->prmArr[i]->exp.vrbExp);

			asgnVrb(vrb, arg);
		}

		struct StmtRsltStrc* stmtRslt;

		stmtRslt = exctStmt(glbEnvr, envr, fcn->stmt);

		if (stmtRslt->typ == RETURN_RESULT && stmtRslt->rslt.rtnRslt->blnRslt == 1)
		{
			rslt = stmtRslt->rslt.rtnRslt->rslt;
		}
	}


	return rslt;

}

struct CnstStrc* clcRdIntExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp)
{
	int i;

	fscanf(stdin, "%d", &i);

	struct CnstStrc* rslt;

	rslt = bldIntCnst(i);

	return rslt;
}

struct CnstStrc* clcRdFltExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp)
{
	float f;

	fscanf(stdin, "%f", &f);

	struct CnstStrc* rslt;

	rslt = bldIntCnst(f);

	return rslt;
}
struct CnstStrc* clcRdBlnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp)
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

struct CnstStrc* clcRdStrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp)
{
	char* str = (char*)malloc(0x1000);

	fscanf(stdin, "%s", str);

	struct CnstStrc* rslt;

	rslt = bldStrCnst(str);

	return rslt;
}

struct CnstStrc* clcRdLnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp)
{
	char* str = (char*)malloc(0x1000);

	fgets(str, 0x1000, stdin);

	struct CnstStrc* rslt;

	rslt = bldStrCnst(str);

	return rslt;
}

struct CnstStrc* clcRdExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct RdExpStrc* exp)
{
	struct CnstStrc* rslt;

	switch (exp->typ)
	{
	case READ_INT:
	{
		rslt = clcRdIntExp(glbEnvr, fcnEnvr, exp);
		break;
	}
	case READ_FLOAT:
	{
		rslt = clcRdFltExp(glbEnvr, fcnEnvr, exp);
		break;
	}
	case READ:
	{
		rslt = clcRdStrExp(glbEnvr, fcnEnvr, exp);
		break;
	}
	case READ_BOOL:
	{
		rslt = clcRdBlnExp(glbEnvr, fcnEnvr, exp);
		break;
	}
	case READ_LINE:
	{
		rslt = clcRdLnExp(glbEnvr, fcnEnvr, exp);
	}
	}

	return rslt;
}



struct CnstStrc* clcLclAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct LclAsgnExpStrc* exp)
{
	struct CnstStrc* rslt = NULL;
	struct VrbStrc* vrb;

	int i;

	for (i = 0; i < exp->asgnLst->asgnArr.size(); i++)
	{
		struct VrbExpStrc* vrbExp;

		vrbExp = exp->asgnLst->asgnArr[i]->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp;


		if ((vrb = getEnvrVrb(fcnEnvr, vrbExp)) == NULL)
		{
			vrb = addVrb(fcnEnvr, vrbExp);
		}

		if (exp->asgnLst->asgnArr[i]->exp.asgnExp->exp->typ != NULL_EXPRESSION)
		{
			rslt = clcExp(glbEnvr, fcnEnvr, exp->asgnLst->asgnArr[i]->exp.asgnExp->exp);
			asgnVrb(vrb, rslt);
		}
		else
		{
			asgnVrb(vrb, bldNllCnst());
			rslt = bldNllCnst();

		}
	}


	return rslt;
}



struct CnstStrc* clcAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct AsgnExpStrc* exp)
{

	struct CnstStrc* rslt = new CnstStrc;

	rslt = clcExp(glbEnvr, fcnEnvr, exp->exp);

	struct LvlExpStrc* lvl;

	lvl = exp->lvl->exp.lvlExp;

	struct VrbStrc* vrb;

	vrb = getVrb(glbEnvr, fcnEnvr, exp->lvl->exp.lvlExp->vrb->exp.vrbExp);

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

		lyr = exp->lvl->exp.lvlExp->acs->acsLst.size();

		int i;

		for (i = 0; i < lyr; i++)
		{
			if (arrTmp->CnstTyp != ARRAY_VALUE)
			{
				throw new ExNotAvlbArr;
			}

			pstn = clcExp(glbEnvr, fcnEnvr, exp->lvl->exp.lvlExp->acs->acsLst[i]->pstn)->vl.intVl;

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

struct CnstStrc* clcArrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ArrExpStrc* exp)
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
		//rslt->vl.arr->elmtArr[i] = clcExp(glbEnvr, fcnEnvr, exp->elmtLst->elmtArr[i]);
		rslt->vl.arr->elmtArr.push_back(clcExp(glbEnvr, fcnEnvr, exp->elmtLst->elmtArr[i]));

		//printf("%d, ", rslt->vl.arr->elmtArr.back()->vl.intVl);
	}


	return rslt;
}

struct CnstStrc* clcNewArrExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct NewArrExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = ARRAY_VALUE;

	//rslt->vl.arr = (struct ArrStrc*)malloc(sizeof(struct ArrStrc*));
	rslt->vl.arr = new ArrStrc;

	int elmtCnt;

	elmtCnt = clcExp(glbEnvr, fcnEnvr, exp->cnt)->vl.intVl;

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

//struct CnstStrc* clcArrEvlExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ArrEvlExpStrc* exp)
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
//	arr = getVrb(glbEnvr, fcnEnvr, exp->arr->exp.vrbExp);
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
//			pstn = clcExp(glbEnvr, fcnEnvr, exp->evlLst->pstnArr[i])->vl.intVl;
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
//			strt = clcExp(glbEnvr, fcnEnvr, exp->evlLst->strtArr[i])->vl.intVl;
//			end = clcExp(glbEnvr, fcnEnvr, exp->evlLst->endArr[i])->vl.intVl;
//			stp = clcExp(glbEnvr, fcnEnvr, exp->evlLst->stpArr[i])->vl.intVl;
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

struct CnstStrc* clcElmtAsgnExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ElmtAsgnExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	int pstn;

	struct VrbStrc* arr;

	arr = getVrb(glbEnvr, fcnEnvr, exp->arr->exp.vrbExp);

	struct ArrStrc* arrPrnt;

	arrPrnt = arr->vl.arr;

	int lyr;

	lyr = exp->pstnLst->pstnArr.size();

	int i;

	for (i = 0; i < lyr - 1; i++)
	{
		pstn = clcExp(glbEnvr, fcnEnvr, exp->pstnLst->pstnArr[i])->vl.intVl;
		arrPrnt = arrPrnt->elmtArr[pstn]->vl.arr;
	}

	rslt = clcExp(glbEnvr, fcnEnvr, exp->vl);

	pstn = clcExp(glbEnvr, fcnEnvr, exp->pstnLst->pstnArr[lyr - 1])->vl.intVl;

	arrPrnt->elmtArr[pstn] = rslt;

	return rslt;


}


struct CnstStrc* clcLvlExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct LvlExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	struct VrbStrc* lvl;

	lvl = getVrb(glbEnvr, fcnEnvr, exp->vrb->exp.vrbExp);

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
				pstn = clcExp(glbEnvr, fcnEnvr, exp->acs->acsLst[i]->pstn)->vl.intVl;

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

				strt = clcExp(glbEnvr, fcnEnvr, exp->acs->acsLst[i]->strt)->vl.intVl;
				end = clcExp(glbEnvr, fcnEnvr, exp->acs->acsLst[i]->end)->vl.intVl;
				stp = clcExp(glbEnvr, fcnEnvr, exp->acs->acsLst[i]->stp)->vl.intVl;

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

struct CnstStrc* clcExp(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct ExpStrc* exp)
{
	struct CnstStrc* rslt = new CnstStrc;

	if (exp->typ == CONST_EXPRESSION)
	{
		rslt = exp->exp.cnst;

		//printf("cnst: %d\n", exp->exp.cnst->vl.intVl);
	}

	if (exp->typ == VARIABLE_EXPRESSION)
	{
		struct VrbStrc* vrb = getVrb(glbEnvr, fcnEnvr, exp->exp.vrbExp);

		//如果变量没有注册过，则注册变量并赋值为null
		if (vrb == NULL)
		{
			vrb = addVrb(glbEnvr, exp->exp.vrbExp);
			asgnVrb(vrb, bldNllCnst());
		}

		rslt = bldCnstFrmVrb(vrb);
		//printf("Calculate variable expression #1\n");
	}

	if (exp->typ == BINARY_EXPRESSION)
	{
		rslt = clcBnrExp(glbEnvr, fcnEnvr, exp->exp.bnrExp);
	}

	if (exp->typ == ASSIGN_EXPRESSION)
	{
		//如果已经注册为函数名则抛出异常
		if (getFcn(glbEnvr, fcnEnvr, bldFcnExp((char*)(exp->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp->nm.c_str()), NULL)->exp.fcnExp) != NULL)
		{
			throw new ExAlrdDfnAsFctn;
		}

		addVrb(glbEnvr, exp->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp);
		rslt = clcAsgnExp(glbEnvr, fcnEnvr, exp->exp.asgnExp);
	}

	if (exp->typ == UNARY_EXPRESSION)
	{
		rslt = clcUnrExp(glbEnvr, fcnEnvr, exp->exp.unrExp);
	}

	if (exp->typ == FUNCTION_EXPRESSION)
	{
		rslt = clcFcnExp(glbEnvr, fcnEnvr, exp->exp.fcnExp);
	}

	if (exp->typ == LOCAL_ASSIGN_EXPRESSION)
	{
		rslt = clcLclAsgnExp(glbEnvr, fcnEnvr, exp->exp.lclAsgnExp);
	}

	if (exp->typ == READ_EXPRESSION)
	{
		rslt = clcRdExp(glbEnvr, fcnEnvr, exp->exp.rdExp);
	}

	if (exp->typ == ARRAY_EXPRESSION)
	{
		printf("Calculate array expression #0\n");
		rslt = clcArrExp(glbEnvr, fcnEnvr, exp->exp.arrExp);
		//printf("Calculate array expression #1\n");
	}

	//if (exp->typ == ARRAY_EVALUATE_EXPRESSION)
	//{
	//	rslt = clcArrEvlExp(glbEnvr, fcnEnvr, exp->exp.arrEvlExp);
	//}

	if (exp->typ == ELEMENT_ASSIGN_EXPRESSION)
	{
		rslt = clcElmtAsgnExp(glbEnvr, fcnEnvr, exp->exp.elmtAsgnExp);
	}

	if (exp->typ == NEW_ARRAY_EXPRESSION)
	{
		rslt = clcNewArrExp(glbEnvr, fcnEnvr, exp->exp.newArrExp);
	}

	if (exp->typ == LVALUE_EXPRESSION)
	{
		rslt = clcLvlExp(glbEnvr, fcnEnvr, exp->exp.lvlExp);
	}

	return rslt;
}

//#endif 