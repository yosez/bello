#pragma once

#ifndef EXP_H
#define EXP_H

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "dftn.h"
#include "val.h"
#include "envr.h"
#include "arr.h"
#include "stmt.h"
#include "expt.h"
#include "cls.h"
#include "vrb.h"

extern struct StmtRsltStrc *exctStmt(vector<EnvrStrc *> &envr, struct StmtStrc *stmt);

extern VrbStrc *getObjVrb(VrbStrc *vrb, LvlExpStrc *lvl);

extern ValStrc *bldValFrmVrb(struct VrbStrc *vrb);

extern VrbStrc *getEnvrVrb(struct EnvrStrc *envr, struct VrbExpStrc *vrbExp);

extern NtvFcnStrc *getNtvFcn(struct EnvrStrc *envr, struct FcnExpStrc *fcn);

extern NtvFcnStrc *getNtvFcn(vector<EnvrStrc *> envr, struct FcnExpStrc *fcn);

extern FcnStrc *getFcn(vector<EnvrStrc *> envr, struct FcnExpStrc *fcnExp);

extern VrbStrc *getVrb(vector<EnvrStrc *> &envr, struct VrbExpStrc *vrbExp);

extern VrbStrc *getVrb(vector<EnvrStrc *> &envr, struct LvlExpStrc *lvl);

extern int addFcn(struct EnvrStrc *envr, struct FcnStrc *fcn);

extern struct ClsStrc *getGlbCls(vector<EnvrStrc *> &envr, string nm);

//struct CnstStrc* bldCnstIntExp(int intVl);
//struct CnstStrc* bldCnstFltExp(float fltVl);
//struct CnstStrc* bldCnstBlnExp(int blnVl);
//struct CnstStrc* bldCnstStrExp(char* strVl);
//struct CnstStrc* bldCnstNllExp();
//struct AsgnExpStrc* bldAsgnExp(ExpStrc* lvl, ExpStrc* exp);
//struct VrbExpStrc* bldVrbExp(char* idtf);
//struct BnrExpStrc* bldBnrExp(int opr, ExpStrc* lftExp, ExpStrc* rghtExp);
//struct UnrExpStrc* bldUnrExp(int opr, ExpStrc* exp);
//struct FcnExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst);
//struct ArrExpStrc* bldArrExp(struct ElmtLstStrc* elmtLst);
//struct LvlExpStrc* bldLvlExp(ExpStrc* vrb);
//ExpStrc* bldLvlExpAdd(ExpStrc* lvl, struct AcsLstStrc* evlLst);
//struct ElmtAsgnExpStrc* bldElmtAsgnExp(ExpStrc* arr, struct PstnLstStrc* pstnLst, ExpStrc* vl);
//struct NewArrExpStrc* bldNewArrExp(ExpStrc* cnt);

ExpStrc *bldExpFromVal(ValStrc *val);

ExpStrc *bldIntValExp(int intVl);

ExpStrc *bldFltValExp(float fltVl);

ExpStrc *bldBlnValExp(int blnVl);

ExpStrc *bldStrValExp(char *strVl);

ExpStrc *bldNllValExp();

ExpStrc *bldAsnExp(ExpStrc *lvl, ExpStrc *exp);

ExpStrc *bldVrbExp(char *idtf);

ExpStrc *bldBnrExp(OprEnm opr, ExpStrc *lftExp, ExpStrc *rghtExp);

ExpStrc *blnTrpExp(OprEnm opr, ExpStrc *frstExp, ExpStrc *scndExp, ExpStrc *trdExp);

ExpStrc *bldUnrExp(OprEnm opr, ExpStrc *exp);

ExpStrc *bldFcnExp(char *nm, struct ArgLstStrc *argLst);

ExpStrc *bldArrExp(struct ElmtLstStrc *elmtLst);

ExpStrc *bldLvlExp(ExpStrc *vrb);

ExpStrc *bldLvlExpAdd(ExpStrc *lvl, struct AcsLstStrc *evlLst);

ExpStrc *bldElmtAsgnExp(ExpStrc *arr, struct PstnLstStrc *pstnLst, ExpStrc *vl);

ExpStrc *bldNewArrExp(ExpStrc *cnt);

ExpStrc *bldNewExp(char *cls);

ValStrc *clcBnrExp(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpAdd(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpSub(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpMul(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpDiv(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpAnd(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpOr(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpEq(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpNe(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpGt(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpGe(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpLt(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpLe(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpBitAnd(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpBitOr(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcBnrExpBitXor(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp);

ValStrc *clcTnrExp(vector<EnvrStrc *> &envr, TnrExpStrc *exp);

ValStrc *clcTnrExpQm(vector<EnvrStrc *> &envr, struct TnrExpStrc *exp);

ValStrc *clcAsgExp(vector<EnvrStrc *> &envr, struct AsnExpStrc *asn);

ValStrc *clcUnrExpPfxInc(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpPfxDec(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpSfxInc(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpSfxDec(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpNot(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpBitNot(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpSub(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExpAdd(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcUnrExp(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp);

ValStrc *clcFcnExp(vector<EnvrStrc *> &envr, struct FcnExpStrc *exp);

ValStrc *clcFcnExp(vector<EnvrStrc *> &envr, struct FcnStrc *fcn, struct FcnExpStrc *exp);

ValStrc *clcArrExp(vector<EnvrStrc *> &envr, struct ArrExpStrc *exp);

ValStrc *clcNewArrExp(vector<EnvrStrc *> &envr, struct NewArrExpStrc *exp);

ValStrc *clcArrEvlExp(vector<EnvrStrc *> &envr, struct ArrEvlExpStrc *exp);

ValStrc *clcElmtAsgnExp(vector<EnvrStrc *> &envr, struct ElmtAsgnExpStrc *exp);

ValStrc *clcLvlExp(vector<EnvrStrc *> &envr, struct LvlExpStrc *exp);

ValStrc *clcNewExp(vector<EnvrStrc *> &envr, struct NewExpStrc *exp);

ValStrc *clcExp(vector<EnvrStrc *> &envr, ExpStrc *exp);


ExpStrc *bldExpFromVal(ValStrc *val)
{
    ValExpStrc *exp = new ValExpStrc;

    exp->typ = ExpEnm::Val;

    exp->val = val;

    return exp;
}

ExpStrc *bldIntValExp(int intVl)
{
    ValStrc *exp;

    exp = bldIntVal(intVl);

    ValExpStrc *rslt = new ValExpStrc;

    rslt->val = exp;
    rslt->typ = ExpEnm::Val;

    return rslt;
}

ExpStrc *bldFltValExp(float fltVl)
{
    ValStrc *val;

    val = bldFltVal(fltVl);

    ValExpStrc *rslt = new ValExpStrc;

    rslt->typ = ExpEnm::Val;

    rslt->val = val;

    return rslt;
}

ExpStrc *bldBlnValExp(int blnVl)
{
    ValStrc *val;

    val = bldBlnVal(blnVl);

    ValExpStrc *rslt = new ValExpStrc;

    rslt->typ = ExpEnm::Val;

    rslt->val = val;

    return rslt;
}

ExpStrc *bldStrValExp(char *strVl)
{
    ValStrc *val;

    val = bldStrVal(strVl);

    ValExpStrc *rslt = new ValExpStrc;

    rslt->typ = ExpEnm::Val;

    rslt->val = val;

    return rslt;
}

ExpStrc *bldNllValExp()
{
    ValStrc *val;

    val = bldNllVal();

    ValExpStrc *rslt = new ValExpStrc;

    rslt->typ = ExpEnm::Val;

    rslt->val = val;

    return rslt;
}

ExpStrc *bldAsnExp(ExpStrc *lvl, ExpStrc *exp)
{
    struct AsnExpStrc *rslt = new AsnExpStrc;

    rslt->typ = ExpEnm::Asn;

    rslt->lvl = static_cast<LvlExpStrc *>(lvl);
    rslt->exp = exp;

    return rslt;
}


ExpStrc *bldArrExp(struct ElmtLstStrc *elmtLst)
{
    struct ArrExpStrc *rslt = new ArrExpStrc;

    rslt->typ = ExpEnm::Arr;

    rslt->elmtLst = elmtLst;

    return rslt;
}

ExpStrc *bldLvlExp(ExpStrc *vrb)
{
    struct LvlExpStrc *rslt = new LvlExpStrc;

    rslt->typ = ExpEnm::Lvl;

    rslt->vrb = static_cast<VrbExpStrc *>(vrb);

    rslt->hasAcsLst = 0;
    rslt->acs = nullptr;

    rslt->hasAtb = 0;
    rslt->atb = nullptr;

    rslt->hasFcn = 0;
    rslt->fcn = nullptr;

    rslt->blnIvk = 0;

    return rslt;
}

ExpStrc *bldLvlExpAdd(ExpStrc *lvl, struct AcsLstStrc *evlLst)
{
    static_cast<LvlExpStrc *>(lvl)->acs = evlLst;

    if (evlLst != NULL)
    {
        static_cast<LvlExpStrc *>(lvl)->hasAcsLst = 1;
    }

    return lvl;
}

ExpStrc *bldElmtAsgnExp(ExpStrc *arr, struct PstnLstStrc *pstnLst, ExpStrc *vl)
{
    struct ElmtAsgnExpStrc *rslt = new ElmtAsgnExpStrc;

    rslt->typ = ExpEnm::ElmAsn;

    rslt->arr = arr;
    rslt->pstnLst = pstnLst;
    rslt->vl = vl;

    return rslt;
}


ExpStrc *bldNewArrExp(ExpStrc *cnt)
{
    struct NewArrExpStrc *rslt = new NewArrExpStrc;

    rslt->typ = ExpEnm::NewArr;

    rslt->cnt = cnt;

    return rslt;
}

ExpStrc *bldNewExp(char *cls)
{
    auto rslt = new NewExpStrc;
    rslt->typ = ExpEnm::New;
    rslt->nm = new string(cls);

    return rslt;
}


ExpStrc *bldVrbExp(char *nm)
{
    struct VrbExpStrc *exp = new VrbExpStrc;

    exp->typ = ExpEnm::Vrb;

    exp->nm = nm;

    return exp;
}

ExpStrc *bldBnrExp(OprEnm opr, ExpStrc *lftExp, ExpStrc *rghtExp)
{
    BnrExpStrc *exp = new BnrExpStrc;

    exp->typ = ExpEnm::Bnr;

    exp->lft = lftExp;
    exp->rgt = rghtExp;
    exp->opr = opr;

    return exp;
}

ExpStrc *bldTnrExp(OprEnm opr, ExpStrc *frstExp, ExpStrc *scndExp, ExpStrc *trdExp)
{
    TnrExpStrc *exp = new TnrExpStrc;

    exp->typ = ExpEnm::Tnr;

    exp->opr = opr;

    exp->frst = frstExp;
    exp->scnd = scndExp;
    exp->trd = trdExp;

    return exp;
}

ExpStrc *bldUnrExp(OprEnm opr, ExpStrc *exp)
{
    struct UnrExpStrc *rslt = new UnrExpStrc;

    rslt->typ = ExpEnm::Unr;

    rslt->exp = exp;
    rslt->opr = opr;

    return rslt;
}


ExpStrc *bldFcnExp(char *nm, struct ArgLstStrc *argLst)
{
    struct FcnExpStrc *rslt = new FcnExpStrc;

    rslt->typ = ExpEnm::Fcn;

    rslt->nm = nm;

    rslt->argLst = argLst;

    return rslt;
}

ExpStrc *bldNllExp()
{
    ExpStrc *rslt = new ExpStrc;

    rslt->typ = ExpEnm::Nll;

    return rslt;
}

ValStrc *clcBnrExpAdd(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftVal = clcExp(envr, exp->lft);
    ValStrc *rgtVal = clcExp(envr, exp->rgt);

    ValStrc *rslt = nullptr;

    rslt = new ValStrc(*lftVal + *rgtVal);
    return rslt;


    if (lftVal->typ == ValEnm::Int && rgtVal->typ == ValEnm::Int)
    {
        rslt = bldIntVal(lftVal->v.int_ + rgtVal->v.int_);
    }
    if (lftVal->typ == ValEnm::Int && rgtVal->typ == ValEnm::Flt)
    {
        rslt = bldFltVal(lftVal->v.int_ + rgtVal->v.flt);
    }
    if (lftVal->typ == ValEnm::Flt && rgtVal->typ == ValEnm::Int)
    {
        rslt = bldFltVal(lftVal->v.flt + rgtVal->v.int_);
    }

    string str;

    if (lftVal->typ == ValEnm::Str && rgtVal->typ == ValEnm::Str)
    {
        str = *(lftVal->v.str) + *(rgtVal->v.str);

        rslt = bldStrValByStr(str);
    }

    if (lftVal->typ == ValEnm::Str && rgtVal->typ == ValEnm::Int)
    {
        str = *(lftVal->v.str);

        str += to_string(rgtVal->v.int_);

        rslt = bldStrValByStr(str);
    }

    if (lftVal->typ == ValEnm::Int && rgtVal->typ == ValEnm::Str)
    {
        str = to_string(lftVal->v.int_);
        str += *(rgtVal->v.str);

        rslt = bldStrValByStr(str);
    }

    if (lftVal->typ == ValEnm::Str && rgtVal->typ == ValEnm::Flt)
    {
        str = *lftVal->v.str;
        str += to_string(rgtVal->v.flt);

        rslt = bldStrValByStr(str);
    }

    if (lftVal->typ == ValEnm::Flt && rgtVal->typ == ValEnm::Str)
    {
        str = to_string(lftVal->v.flt);
        str += *(rgtVal->v.str);

        rslt = bldStrValByStr(str);
    }

    if (lftVal->typ == ValEnm::Str && rgtVal->typ == ValEnm::Bln)
    {
        str = *(lftVal->v.str);

        str += rgtVal->v.bln == 0 ? "false" : "true";

        rslt = bldStrValByStr(str);
    }

    if (lftVal->typ == ValEnm::Bln && rgtVal->typ == ValEnm::Str)
    {
        str = lftVal->v.bln == 0 ? "false" : "true";

        str += *(rgtVal->v.str);

        rslt = bldStrValByStr(str);
    }

    if (rslt == nullptr)
    {
        printf("bnr exp err\n");
        throw new ExWrgOprndTyp;
    }


    return rslt;
}

ValStrc *clcBnrExpSub(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = nullptr;

    rslt = new ValStrc(*lftCnst - *rghtCnst);

    return rslt;

    // if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    // {
    // 	rslt = bldIntVal(lftCnst->v.int_ - rghtCnst->v.int_);
    // }
    // if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    // {
    // 	rslt = bldFltVal(lftCnst->v.int_ - rghtCnst->v.flt);
    // }
    // if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    // {
    // 	rslt = bldFltVal(lftCnst->v.flt - rghtCnst->v.int_);
    // }

    if (rslt == nullptr)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpMul(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = nullptr;
    rslt = new ValStrc(*lftCnst + *rghtCnst);

    // if (rslt == nullptr)
    // {
    // 	throw new ExWrgOprndTyp;
    // }

    return rslt;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldIntVal(lftCnst->v.int_ * rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldFltVal(lftCnst->v.int_ * rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldFltVal(lftCnst->v.flt * rghtCnst->v.int_);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpDiv(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = nullptr;
    rslt = new ValStrc(*lftCnst / *rghtCnst);

    return rslt;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldIntVal(lftCnst->v.int_ / rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldFltVal(lftCnst->v.int_ / rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldFltVal(lftCnst->v.flt / rghtCnst->v.int_);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpMod(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = nullptr;
    rslt = new ValStrc(*lftCnst % *rghtCnst);

    return rslt;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldIntVal(lftCnst->v.int_ % rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldFltVal(fmod(lftCnst->v.int_, rghtCnst->v.flt));
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldFltVal(fmod(lftCnst->v.flt, rghtCnst->v.int_));
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpEq(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ == rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt == rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal((float) lftCnst->v.int_ == rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt == (float) rghtCnst->v.int_);
    }

    if (lftCnst->typ == ValEnm::Str && rghtCnst->typ == ValEnm::Str)
    {
        //rslt = bldBlnCnst(strcmp(lftCnst->vl.str, rghtCnst->vl.str) == 0);
        rslt = bldBlnVal(lftCnst->v.str->compare(*rghtCnst->v.str) == 0);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpNe(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ != rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt != rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal((float) lftCnst->v.int_ != rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt != (float) rghtCnst->v.int_);
    }

    if (lftCnst->typ == ValEnm::Str && rghtCnst->typ == ValEnm::Str)
    {
        //rslt = bldBlnCnst(strcmp(lftCnst->vl.str, rghtCnst->vl.str) != 0);
        rslt = bldBlnVal(lftCnst->v.str->compare(*rghtCnst->v.str) != 0);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpGt(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ > rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt > rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal((float) lftCnst->v.int_ > rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt > (float) rghtCnst->v.int_);
    }

    if (lftCnst->typ == ValEnm::Str && rghtCnst->typ == ValEnm::Str)
    {
        rslt = bldBlnVal(strcmp(lftCnst->v.str->c_str(), rghtCnst->v.str->c_str()) > 0);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpGe(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ >= rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt >= rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal((float) lftCnst->v.int_ >= rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt >= (float) rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Str && rghtCnst->typ == ValEnm::Str)
    {
        //rslt = bldBlnCnst(strcmp(lftCnst->vl.str, rghtCnst->vl.str) >= 0);
        rslt = bldBlnVal(lftCnst->v.str->compare(*rghtCnst->v.str) >= 0);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}


ValStrc *clcBnrExpLt(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ < rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt < rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal((float) lftCnst->v.int_ < rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt < (float) rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Str && rghtCnst->typ == ValEnm::Str)
    {
        //rslt = bldBlnCnst(strcmp(lftCnst->vl.str.c_str(), rghtCnst->vl.str.c_str()) < 0);
        rslt = bldBlnVal(lftCnst->v.str->compare(*rghtCnst->v.str) < 0);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpLe(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ <= rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt <= rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal((float) lftCnst->v.int_ <= rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt <= (float) rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Str && rghtCnst->typ == ValEnm::Str)
    {
        //rslt = bldBlnCnst(strcmp(lftCnst->vl.str.c_str(), rghtCnst->vl.str.c_str()) <= 0);
        rslt = bldBlnVal(lftCnst->v.str->compare(*rghtCnst->v.str) <= 0);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpBitAnd(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if ((lftCnst->typ == ValEnm::Int || lftCnst->typ == ValEnm::Flt || lftCnst->typ == ValEnm::Bln) &&
        (rghtCnst->typ == ValEnm::Int || rghtCnst->typ == ValEnm::Flt || rghtCnst->typ == ValEnm::Bln))
    {
        rslt = bldIntVal(lftCnst->v.int_ & rghtCnst->v.int_);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpBitOr(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if ((lftCnst->typ == ValEnm::Int || lftCnst->typ == ValEnm::Flt || lftCnst->typ == ValEnm::Bln) &&
        (rghtCnst->typ == ValEnm::Int || rghtCnst->typ == ValEnm::Flt || rghtCnst->typ == ValEnm::Bln))
    {
        rslt = bldIntVal(lftCnst->v.int_ | rghtCnst->v.int_);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpBitXor(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if ((lftCnst->typ == ValEnm::Int || lftCnst->typ == ValEnm::Flt || lftCnst->typ == ValEnm::Bln) &&
        (rghtCnst->typ == ValEnm::Int || rghtCnst->typ == ValEnm::Flt || rghtCnst->typ == ValEnm::Bln))
    {
        rslt = bldIntVal(lftCnst->v.int_ ^ rghtCnst->v.int_);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}


ValStrc *clcBnrExpAnd(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ && rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt && rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.int_ && rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt && (float) rghtCnst->v.int_);
    }

    if (lftCnst->typ == ValEnm::Bln || rghtCnst->typ == ValEnm::Bln)
    {
        rslt = bldBlnVal(lftCnst->v.bln && rghtCnst->v.bln);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcBnrExpOr(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *lftCnst = clcExp(envr, exp->lft);
    ValStrc *rghtCnst = clcExp(envr, exp->rgt);

    ValStrc *rslt = NULL;

    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.int_ || rghtCnst->v.int_);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.flt || rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Int && rghtCnst->typ == ValEnm::Flt)
    {
        rslt = bldBlnVal(lftCnst->v.int_ || rghtCnst->v.flt);
    }
    if (lftCnst->typ == ValEnm::Flt && rghtCnst->typ == ValEnm::Int)
    {
        rslt = bldBlnVal(lftCnst->v.flt || (float) rghtCnst->v.int_);
    }

    if (lftCnst->typ == ValEnm::Bln || rghtCnst->typ == ValEnm::Bln)
    {
        rslt = bldBlnVal(lftCnst->v.bln || rghtCnst->v.bln);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}


ValStrc *clcBnrExp(vector<EnvrStrc *> &envr, struct BnrExpStrc *exp)
{
    ValStrc *rslt;

    ValStrc *lft = clcExp(envr, exp->lft);
    ValStrc *rgt = clcExp(envr, exp->rgt);

    switch (exp->opr)
    {
        //处理相同类型及不同类型变量之间的运算
        case OprEnm::Add:
        {
            //rslt = clcBnrExpAdd(envr, exp);
            rslt = new ValStrc(*lft + *rgt);

            break;
        }
        case OprEnm::Sub:
        {
            rslt = new ValStrc(*lft - *rgt);
            //rslt = clcBnrExpSub(envr, exp);

            break;
        }
        case OprEnm::Mul:
        {
            rslt = new ValStrc(*lft * *rgt);
            //rslt = clcBnrExpMul(envr, exp);
            break;
        }
        case OprEnm::Div:
        {
            rslt = new ValStrc(*lft / *rgt);
            //rslt = clcBnrExpDiv(envr, exp);
            break;
        }
        case OprEnm::Mod:
        {
            rslt = new ValStrc(*lft % *rgt);
            //rslt = clcBnrExpMod(envr, exp);
            break;
        }
        case OprEnm::Eq:
        {
            rslt = new ValStrc(*lft == *rgt);
            //rslt = clcBnrExpEq(envr, exp);
            break;
        }
        case OprEnm::Ne:
        {
            rslt = new ValStrc(*lft != *rgt);
            //rslt = clcBnrExpNe(envr, exp);
            break;
        }
        case OprEnm::Gt:
        {
            rslt = new ValStrc(*lft > *rgt);
            //rslt = clcBnrExpGt(envr, exp);
            break;
        }
        case OprEnm::Ge:
        {
            rslt = new ValStrc(*lft >= *rgt);
            //rslt = clcBnrExpGe(envr, exp);
            break;
        }
        case OprEnm::Lt:
        {
            rslt = new ValStrc(*lft < *rgt);
            //rslt = clcBnrExpLt(envr, exp);
            break;
        }
        case OprEnm::Le:
        {
            rslt = new ValStrc(*lft <= *rgt);
            //rslt = clcBnrExpLe(envr, exp);
            break;
        }
        case OprEnm::And:
        {
            rslt = new ValStrc(*lft && *rgt);
            //rslt = clcBnrExpAnd(envr, exp);
            break;
        }
        case OprEnm::Or:
        {
            rslt = new ValStrc(*lft || *rgt);
            //rslt = clcBnrExpOr(envr, exp);
            break;
        }
        case OprEnm::Xor:
        {
            rslt = new ValStrc(*lft ^ *rgt);
            break;
        }
        case OprEnm::BAnd:
        {
            rslt = new ValStrc(*lft & *rgt);
            //rslt = clcBnrExpBitAnd(envr, exp);
            break;
        }
        case OprEnm::BOr:
        {
            rslt = new ValStrc(*lft | *rgt);
            //rslt = clcBnrExpBitOr(envr, exp);
            break;
        }
        case OprEnm::BXor:
        {
            rslt = new ValStrc(*lft ^ *rgt);
            //rslt = clcBnrExpBitXor(envr, exp);
            break;
        }
    }

    return rslt;
}

ValStrc *clcTnrExp(vector<EnvrStrc *> &envr, TnrExpStrc *exp)
{
    ValStrc *rslt = nullptr;
    switch (exp->opr)
    {
        case OprEnm::Tnr:
        {
            rslt = clcTnrExpQm(envr, exp);
            break;
        }
    }

    return rslt;
}

ValStrc *clcTnrExpQm(vector<EnvrStrc *> &envr, TnrExpStrc *exp)
{
    ValStrc *rslt;

    if (clcExp(envr, exp->frst)->v.int_ != 0)
    {
        rslt = clcExp(envr, exp->scnd);
    } else
    {
        rslt = clcExp(envr, exp->trd);
    }

    return rslt;
}

ValStrc *clcUnrExpPfxInc(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    struct LvlExpStrc *lvl;

    //***此修改可能有问题
    lvl = static_cast<LvlExpStrc *>(exp->exp);

    struct VrbStrc *vrb;

    vrb = getVrb(envr, static_cast<VrbExpStrc *>(lvl->vrb));

    if (vrb == NULL)
    {
        throw new ExVrbNotFnd;
    }

    if (lvl->hasAcsLst == 0)
    {
        if (vrb->getTyp() == ValEnm::Int)
        {
            vrb->val->v.int_++;
            rslt = bldValFrmVrb(vrb);
        }

        if (vrb->getTyp() == ValEnm::Flt)
        {
            vrb->getVal().flt++;
            rslt = bldValFrmVrb(vrb);
        }
    }
    //定位到数组元素的情况
    else
    {
        int pstn;

        struct ArrStrc *arrPrnt;

        arrPrnt = vrb->getVal().arr;

        int lyr;

        int nbr;

        lyr = lvl->acs->acsLst.size();

        int i;

        for (i = 0; i < lyr; i++)
        {
            pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->v.int_;

            if (i < lyr - 1)
            {
                arrPrnt = arrPrnt->elmtArr[pstn]->v.arr;
            }
        }


        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Int)
        {
            arrPrnt->elmtArr[pstn]->v.int_++;
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Flt)
        {
            arrPrnt->elmtArr[pstn]->v.flt++;
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
        }
    }


    return rslt;
}

ValStrc *clcUnrExpPfxDec(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    struct VrbStrc *vrb;

    ValStrc *rslt = new ValStrc;

    struct LvlExpStrc *lvl;

    //***此修改可能有问题
    lvl = static_cast<LvlExpStrc *>(exp->exp);

    //lvl = exp->exp->exp.lvlExp;

    vrb = getVrb(envr, static_cast<VrbExpStrc *>(lvl->vrb));

    if (vrb == NULL)
    {
        throw new ExVrbNotFnd;
    }

    if (lvl->hasAcsLst == 0)
    {
        if (vrb->getTyp() == ValEnm::Int)
        {
            vrb->getVal().int_--;
            rslt = bldValFrmVrb(vrb);
        }

        if (vrb->getTyp() == ValEnm::Flt)
        {
            vrb->getVal().flt--;
            rslt = bldValFrmVrb(vrb);
        }
    }
    //定位到数组元素的情况
    else
    {
        int pstn;

        struct ArrStrc *arrPrnt;

        arrPrnt = vrb->getVal().arr;

        int lyr;

        lyr = lvl->acs->acsLst.size();

        int i;

        //按层级定位数组中元素的位置，直至arrPrnt定位到包含元素的最内层的数组
        for (i = 0; i < lyr; i++)
        {
            pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->v.int_;

            if (i < lyr - 1)
            {
                arrPrnt = arrPrnt->elmtArr[pstn]->v.arr;
            }
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Int)
        {
            arrPrnt->elmtArr[pstn]->v.int_--;
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Flt)
        {
            arrPrnt->elmtArr[pstn]->v.flt--;
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
        }
    }


    return rslt;
}

ValStrc *clcUnrExpSfxInc(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    struct VrbStrc *vrb;

    ValStrc *rslt = new ValStrc;

    struct LvlExpStrc *lvl;

    //***此修改可能有问题
    //lvl = static_cast<LvlExpStrc*>(exp->exp);
    lvl = static_cast<LvlExpStrc*>(exp->exp);

    vrb = getVrb(envr, static_cast<VrbExpStrc *>(lvl->vrb));

    //lvl = exp->exp->exp.lvlExp;

    //vrb = getVrb(envr, lvl->vrb->exp.vrbExp);

    if (vrb == NULL)
    {
        throw new ExVrbNotFnd;
    }

    if (lvl->hasAcsLst == 0)
    {
        if (vrb->getTyp() == ValEnm::Int)
        {
            rslt = bldValFrmVrb(vrb);

            vrb->getVal().int_++;
        }

        if (vrb->getTyp() == ValEnm::Flt)
        {
            rslt = bldValFrmVrb(vrb);

            vrb->getVal().flt++;
        }
    }
    //定位到数组元素的情况
    else
    {
        int pstn;

        struct ArrStrc *arrPrnt;

        arrPrnt = vrb->getVal().arr;

        int lyr;

        lyr = lvl->acs->acsLst.size();

        int i;

        for (i = 0; i < lyr; i++)
        {
            pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->v.int_;
            if (i < lyr - 1)
            {
                arrPrnt = arrPrnt->elmtArr[pstn]->v.arr;
            }
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Int)
        {
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
            arrPrnt->elmtArr[pstn]->v.int_++;
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Flt)
        {
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
            arrPrnt->elmtArr[pstn]->v.flt++;
        }
    }


    return rslt;
}

ValStrc *clcUnrExpSfxDec(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    struct VrbStrc *vrb;

    ValStrc *rslt = new ValStrc;

    struct LvlExpStrc *lvl;

    //***此修改可能有问题
    lvl = static_cast<LvlExpStrc*>(exp->exp);

    vrb = getVrb(envr, static_cast<VrbExpStrc *>(lvl->vrb));

    //lvl = exp->exp->exp.lvlExp;

    //vrb = getVrb(envr, lvl->vrb->exp.vrbExp);

    if (vrb == NULL)
    {
        throw new ExVrbNotFnd;
    }

    if (lvl->hasAcsLst == 0)
    {
        if (vrb->getTyp() == ValEnm::Int)
        {
            rslt = bldValFrmVrb(vrb);

            vrb->getVal().int_--;
        }

        if (vrb->getTyp() == ValEnm::Flt)
        {
            rslt = bldValFrmVrb(vrb);

            vrb->getVal().flt--;
        }
    }
    //定位到数组元素的情况
    else
    {
        int pstn;

        struct ArrStrc *arrPrnt;

        arrPrnt = vrb->getVal().arr;

        int lyr;

        lyr = lvl->acs->acsLst.size();

        int i;

        for (i = 0; i < lyr; i++)
        {
            pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->v.int_;
            if (i < lyr - 1)
            {
                arrPrnt = arrPrnt->elmtArr[pstn]->v.arr;
            }
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Int)
        {
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
            arrPrnt->elmtArr[pstn]->v.int_--;
        }

        if (arrPrnt->elmtArr[pstn]->typ == ValEnm::Flt)
        {
            rslt = cpyVal(arrPrnt->elmtArr[pstn]);
            arrPrnt->elmtArr[pstn]->v.flt--;
        }
    }


    return rslt;
}

ValStrc *clcUnrExpNot(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    ValStrc *rslt = NULL;

    ValStrc *cnst;
    cnst = clcExp(envr, exp->exp);

    if (cnst->typ == ValEnm::Int || cnst->typ == ValEnm::Flt || cnst->typ == ValEnm::Bln)
    {
        rslt = bldBlnVal(cnst->v.int_ == 0);
    } else if (cnst->typ == ValEnm::Str)
    {
        //if (cnst->vl.str != NULL)
        if (cnst->v.str->empty() == false)
        {
            rslt = bldBlnVal(strcmp(cnst->v.str->c_str(), "") == 0);
        } else
        {
            rslt = bldBlnVal(0);
        }
    } else if (cnst->typ == ValEnm::Arr)
    {
        if (cnst->v.arr->elmtArr.size() == 0)
        {
            rslt = bldBlnVal(1);
        } else
        {
            rslt = bldBlnVal(0);
        }
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcUnrExpBitNot(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    ValStrc *rslt;

    ValStrc *cnst;
    cnst = clcExp(envr, exp->exp);

    if (cnst->typ == ValEnm::Int || cnst->typ == ValEnm::Flt || cnst->typ == ValEnm::Bln)
    {
        rslt = cpyVal(cnst);
        rslt->v.int_ = ~rslt->v.int_;
    }
    // else if (cnst->CnstTyp == ValEnm::Str)
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
    // else if (cnst->CnstTyp == ValEnm::Arr)
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

ValStrc *clcUnrExpSub(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    ValStrc *cnst, *rslt;

    rslt = NULL;

    cnst = clcExp(envr, exp->exp);

    if (cnst->typ == ValEnm::Int)
    {
        rslt = bldIntVal(-cnst->v.int_);
    } else if (cnst->typ == ValEnm::Flt)
    {
        rslt = bldFltVal(-cnst->v.flt);
    } else if (cnst->typ == ValEnm::Bln)
    {
        rslt = bldBlnVal(cnst->v.bln);
    }

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcUnrExpAdd(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    ValStrc *cnst, *rslt;

    rslt = NULL;

    cnst = clcExp(envr, exp->exp);

    rslt = cpyVal(cnst);

    if (rslt == NULL)
    {
        throw new ExWrgOprndTyp;
    }

    return rslt;
}

ValStrc *clcUnrExp(vector<EnvrStrc *> &envr, struct UnrExpStrc *exp)
{
    ValStrc *val;

    val = clcExp(envr, exp->exp);

    ValStrc *rslt;



    switch (exp->opr)
    {
        case OprEnm::PfxInc:
        {
            VrbStrc *vrb = getVrb(envr, static_cast<LvlExpStrc*> (exp->exp));

            rslt = new ValStrc(++ (*val));

            vrb->val = rslt;

            //rslt = clcUnrExpPfxInc(envr, exp);
            break;
        }
        case OprEnm::PfxDec:
        {
            VrbStrc *vrb = getVrb(envr, static_cast<LvlExpStrc*> (exp->exp));

            rslt = new ValStrc(-- *val);

            vrb->val = rslt;
            //rslt = clcUnrExpPfxDec(envr, exp);
            break;
        }
        case OprEnm::SfxInc:
        {
            VrbStrc *vrb = getVrb(envr, static_cast<LvlExpStrc*> (exp->exp));

            rslt = new ValStrc(*val);

            vrb ->val = new ValStrc(++ *val);
            //rslt = clcUnrExpSfxInc(envr, exp);
            break;
        }
        case OprEnm::SfxDec:
        {
            VrbStrc *vrb = getVrb(envr, static_cast<LvlExpStrc*> (exp->exp));

            rslt = new ValStrc(*val);

            vrb->val = new ValStrc(-- *val);
            //rslt = clcUnrExpSfxDec(envr, exp);
            break;
        }
        case OprEnm::Not:
        {
            rslt = new ValStrc(! (*val));

            //rslt = clcUnrExpNot(envr, exp);
            break;
        }
        case OprEnm::BNot:
        {
            rslt = new ValStrc(~ (*val));
            //rslt = clcUnrExpBitNot(envr, exp);
            break;
        }
        case OprEnm::Ngtv:
        {
            rslt = new ValStrc(- (*val));
            //rslt = clcUnrExpSub(envr, exp);
            break;
        }
        case OprEnm::Pstv:
        {
            rslt = new ValStrc(+ (*val));
            //rslt = clcUnrExpAdd(envr, exp);
            break;
        }
    }

    return rslt;
}

ValStrc *clcFcnExp(vector<EnvrStrc *> &envr, struct FcnExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    struct NtvFcnStrc *ntvFcn;

    ntvFcn = getNtvFcn(envr, exp);

    struct FcnStrc *fcn;

    fcn = getFcn(envr, exp);

    if (ntvFcn == nullptr && fcn == nullptr)
    {
        throw new ExFcnNotFnd;
    } else if (ntvFcn != nullptr)
    {
        //计算各个参数的值并赋值给传参数组

        int i;

        ValStrc *arg;
        int argCnt = 0, argSz;

        //如果函数参数个数不正确
        if (exp->argLst->argArr.size() > ntvFcn->prmCnt)
        {
            throw new ExFcnTooMnyArg;
        } else if (exp->argLst->argArr.size() < ntvFcn->prmCnt)
        {
            throw new ExFcnTooFewArg;
        }

        //struct CnstStrc** argArr = (struct CnstStrc**)malloc(sizeof(struct CnstStrc*) * ntvFcn->prmCnt);
        vector<ValStrc *> argArr;

        //printf("clc fcn prm cnt: %d\n", exp->argLst->argArr.size());

        for (i = 0; i < exp->argLst->argArr.size(); i++)
        {
            //printf("ntvFcn arg[%2d] typ: %d\n", i, exp->argLst->argArr.at(i)->typ);

            arg = clcExp(envr, exp->argLst->argArr[i]);

            //printf("aft clc ntvFcn arg[%2d] typ: %d\n", i, exp->argLst->argArr.at(i)->typ);

            argArr.push_back(arg);
        }

        rslt = ntvFcn->fcn(envr, ntvFcn->prmCnt, argArr);
    } else if (fcn != nullptr)
    {
        //在建立函数环境前，计算实参的各个值

        for (int i = 0; i < exp->argLst->argArr.size(); i++)
        {
            //printf("bfr argArr[%d] typ: %d\n", i, exp->argLst->argArr[i]->typ);

            if (exp->argLst->argArr[i] != nullptr)
            {
                exp->argLst->argArr[i] = bldExpFromVal(clcExp(envr, exp->argLst->argArr[i]));
            }

            //printf("aft argArr[%d] typ: %d\n", i, exp->argLst->argArr[i]->typ);
        }

        //建立函数中的EnvrStrc

        struct EnvrStrc *envrFcn = new EnvrStrc(EnvrEnm::Fcn);

        envr.push_back(envrFcn);

        //计算各个参数的值并赋值给形参

        int i;

        ValStrc *arg;
        int argCnt = 0, argSz;

        //此处暂时屏蔽
        //如果函数参数个数不正确
        //if (exp->argLst->argArr.size() > fcn->prmLst->prmArr.size())
        //{
        //	throw new ExFcnTooMnyArg;
        //}
        //else if (exp->argLst->argArr.size() < fcn->prmLst->prmArr.size())
        //{
        //	throw new ExFcnTooFewArg;
        //}

        struct VrbStrc *vrb;

        //函数参数赋值
        for (i = 0; i < exp->argLst->argArr.size(); i++)
        {
            //位置参数赋值
            if (exp->argLst->prmArr[i] == nullptr)
            {
                //printf("bfr lctn prm asgn: typ: %d\n", exp->argLst->argArr[i]->typ);

                arg = clcExp(envr, exp->argLst->argArr[i]);

                //printf("bfr lctn prm asgn: arg: cnstTyp: %d typ: %d\n",arg->typ, arg->typ);

                vrb = addVrb(envrFcn, fcn->prmLst->prmArr[i]);

                asnVrb(vrb, arg);

                //printf("aft lctn prm asgn: typ: %d\n", vrb->getTyp());
            }
            //关键字参数赋值
            else
            {
                arg = clcExp(envr, exp->argLst->argArr[i]);
                vrb = getEnvrVrb(envrFcn, exp->argLst->prmArr[i]);

                if (vrb == nullptr)
                {
                    vrb = addVrb(envrFcn, exp->argLst->prmArr[i]);
                }

                asnVrb(vrb, arg);
            }
        }

        for (i = 0; i < fcn->prmLst->prmArr.size(); i++)
        {
            //默认参数赋值
            vrb = getEnvrVrb(envrFcn, fcn->prmLst->prmArr[i]);

            if (vrb == nullptr && fcn->prmLst->expArr[i] != nullptr)
            {
                vrb = addVrb(envrFcn, fcn->prmLst->prmArr[i]);
                arg = clcExp(envr, fcn->prmLst->expArr[i]);

                asnVrb(vrb, arg);
            }
        }

        struct StmtRsltStrc *stmtRslt;

        stmtRslt = exctStmt(envr, fcn->stmt);

        if (stmtRslt->typ == RtnEnm::Rtn && stmtRslt->rslt.rtnRslt->blnRslt == 1)
        {
            rslt = stmtRslt->rslt.rtnRslt->rslt;
        }

        envr.pop_back();
    }


    return rslt;
}

/// <summary>
/// 使用函数结构体以及函数表达式结构体计算函数表达式
/// </summary>
ValStrc *clcFcnExp(vector<EnvrStrc *> &envr, struct FcnStrc *fcn, struct FcnExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    if (fcn != nullptr)
    {
        //在建立函数环境前，计算实参的各个值

        for (int i = 0; i < exp->argLst->argArr.size(); i++)
        {
            if (exp->argLst->argArr[i] != nullptr)
            {
                exp->argLst->argArr[i] = bldExpFromVal(clcExp(envr, exp->argLst->argArr[i]));
            }
        }

        //建立函数中的EnvrStrc

        struct EnvrStrc *envrFcn = new EnvrStrc(EnvrEnm::Fcn);

        envr.push_back(envrFcn);

        //计算各个参数的值并赋值给形参

        int i;

        ValStrc *arg;
        int argCnt = 0, argSz;

        //此处暂时屏蔽
        //如果函数参数个数不正确
        //if (exp->argLst->argArr.size() > fcn->prmLst->prmArr.size())
        //{
        //	throw new ExFcnTooMnyArg;
        //}
        //else if (exp->argLst->argArr.size() < fcn->prmLst->prmArr.size())
        //{
        //	throw new ExFcnTooFewArg;
        //}

        struct VrbStrc *vrb;

        //函数参数赋值
        for (i = 0; i < exp->argLst->argArr.size(); i++)
        {
            //位置参数赋值
            if (exp->argLst->prmArr[i] == nullptr)
            {
                arg = clcExp(envr, exp->argLst->argArr[i]);

                vrb = addVrb(envrFcn, fcn->prmLst->prmArr[i]);

                asnVrb(vrb, arg);
            }
            //关键字参数赋值
            else
            {
                arg = clcExp(envr, exp->argLst->argArr[i]);
                vrb = getEnvrVrb(envrFcn, exp->argLst->prmArr[i]);

                if (vrb == nullptr)
                {
                    vrb = addVrb(envrFcn, exp->argLst->prmArr[i]);
                }

                asnVrb(vrb, arg);
            }
        }

        for (i = 0; i < fcn->prmLst->prmArr.size(); i++)
        {
            //默认参数赋值
            vrb = getEnvrVrb(envrFcn, fcn->prmLst->prmArr[i]);

            if (vrb == nullptr && fcn->prmLst->expArr[i] != nullptr)
            {
                vrb = addVrb(envrFcn, fcn->prmLst->prmArr[i]);
                arg = clcExp(envr, fcn->prmLst->expArr[i]);

                asnVrb(vrb, arg);
            }
        }

        struct StmtRsltStrc *stmtRslt;

        stmtRslt = exctStmt(envr, fcn->stmt);

        if (stmtRslt->typ == RtnEnm::Rtn && stmtRslt->rslt.rtnRslt->blnRslt == 1)
        {
            rslt = stmtRslt->rslt.rtnRslt->rslt;
        }

        envr.pop_back();
    }


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
//		if (exp->asgnLst->asgnArr[i]->exp.asgnExp->exp->typ != ExpEnm::Nll)
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


ValStrc *clcAsgExp(vector<EnvrStrc *> &envr, struct AsnExpStrc *asn)
{
    ValStrc *rslt = new ValStrc;

    rslt = clcExp(envr, asn->exp);

    LvlExpStrc *lvl;

    lvl = asn->lvl;

    struct VrbStrc *vrb;

    //vrb = getVrb(envr, static_cast<VrbExpStrc*> (lvl->vrb));
    vrb = getVrb(envr, lvl);

    //printf("asn\n");

    //printf("asn vrb: %s\n", vrb->nm->c_str());

    if (lvl->hasAcsLst == 0)
    {
        asnVrb(vrb, rslt);
        //printf("vrb asgn: typ: %d\n", vrb->typ);
        //printf("vrb asgn: ctn vrb: %s\n", vrb->vl.obj->vrb.back()->nm->c_str());
    }
    //定位到数组元素的情况
    else
    {
        int pstn;

        ValStrc *arrTmp;

        arrTmp = bldValFrmVrb(vrb);

        int lyr;

        lyr = lvl->acs->acsLst.size();

        int i;

        for (i = 0; i < lyr; i++)
        {
            if (arrTmp->typ != ValEnm::Arr)
            {
                throw new ExNotAvlbArr;
            }

            pstn = clcExp(envr, lvl->acs->acsLst[i]->pstn)->v.int_;

            if (pstn >= arrTmp->v.arr->elmtArr.size())
            {
                throw new ExIdxOutArrRng;
            }

            if (i < lyr - 1)
            {
                arrTmp = arrTmp->v.arr->elmtArr[pstn];
            }
        }

        if (pstn >= arrTmp->v.arr->elmtArr.size())
        {
            throw new ExIdxOutArrRng;
        }

        arrTmp->v.arr->elmtArr[pstn] = rslt;
    }


    return rslt;
}

ValStrc *clcArrExp(vector<EnvrStrc *> &envr, struct ArrExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    rslt->typ = ValEnm::Arr;

    int elmtCnt;

    rslt->v.arr = new ArrStrc;

    int i;

    elmtCnt = exp->elmtLst->elmtArr.size();

    //printf("arr: %d:", elmtCnt);

    for (i = 0; i < elmtCnt; i++)
    {
        //rslt->vl.arr->elmtArr[i] = clcExp(envr, exp->elmtLst->elmtArr[i]);
        rslt->v.arr->elmtArr.push_back(clcExp(envr, exp->elmtLst->elmtArr[i]));

        //printf("%d, ", rslt->vl.arr->elmtArr.back()->vl.intVl);
    }


    return rslt;
}

ValStrc *clcNewArrExp(vector<EnvrStrc *> &envr, struct NewArrExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    rslt->typ = ValEnm::Arr;

    //rslt->vl.arr = (struct ArrStrc*)malloc(sizeof(struct ArrStrc*));
    rslt->v.arr = new ArrStrc;

    int elmtCnt;

    elmtCnt = clcExp(envr, exp->cnt)->v.int_;

    //rslt->vl.arr->elmtSz = elmtCnt + 0x10;
    //rslt->vl.arr->elmtCnt = elmtCnt;

    //rslt->vl.arr->elmtArr = (struct CnstStrc**)malloc(sizeof(struct CnstStrc*) * rslt->vl.arr->elmtSz);

    int i;

    for (i = 0; i < elmtCnt; i++)
    {
        //rslt->vl.arr->elmtArr[i] = bldNllCnst();
        rslt->v.arr->elmtArr.push_back(bldNllVal());
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

ValStrc *clcElmtAsgnExp(vector<EnvrStrc *> &envr, struct ElmtAsgnExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    int pstn;

    struct VrbStrc *arr;

    arr = getVrb(envr, static_cast<VrbExpStrc *>(exp->arr));

    struct ArrStrc *arrPrnt;

    arrPrnt = arr->getVal().arr;

    int lyr;

    lyr = exp->pstnLst->pstnArr.size();

    int i;

    for (i = 0; i < lyr - 1; i++)
    {
        pstn = clcExp(envr, exp->pstnLst->pstnArr[i])->v.int_;
        arrPrnt = arrPrnt->elmtArr[pstn]->v.arr;
    }

    rslt = clcExp(envr, exp->vl);

    pstn = clcExp(envr, exp->pstnLst->pstnArr[lyr - 1])->v.int_;

    arrPrnt->elmtArr[pstn] = rslt;

    return rslt;
}


ValStrc *clcLvlExp(vector<EnvrStrc *> &envr, struct LvlExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    VrbStrc *vrb;

    vrb = getVrb(envr, exp->vrb);

    //printf("vrb == nullptr: %d typ: %d: %d55\n", (int)(vrb == nullptr), vrb->getTyp(), vrb->getVal().int_);

    if (vrb == nullptr)
    {
        throw new ExVrbNotFnd();
        return nullptr;
    }

    FcnExpStrc *fcnExp = nullptr;
    FcnStrc *fcn = nullptr;

    //如果是调用对象的函数
    if (exp->blnIvk)
    {
        printf("clc lvl exp obj fcn\n");

        fcn = getObjFcn(vrb, exp);

        while (exp->hasAtb == 1)
        {
            exp = exp->atb;
        }

        rslt = clcFcnExp(envr, fcn, exp->fcn);

        return rslt;
    }

    //如果左值表达式中有属性
    if (exp->hasAtb == 1)
    {
        printf("hasAtb typ: %d tgt typ: %d\n", vrb->getTyp(), OBJECT_VALUE);

        vrb = getObjVrb(vrb, exp);

        while (exp->hasAtb == 1)
        {
            exp = exp->atb;
        }
    }

    //如果是变量名的情况
    if (exp->hasAcsLst == 0)
    {
        //printf("hasAcsLst == 0 vrb typ: %d\n", vrb->typ);
        rslt = bldValFrmVrb(vrb);

        //printf("vrb: %d rslt: %d\n", vrb->getVal().int_, rslt->v.int_);

        //printf("rslt typ: %d\n", rslt->typ);
    }
    //如果是数组评估表达式的情况
    else
    {
        int pstn;

        ValStrc *arrTmp, *arrTmp2;

        struct ArrStrc *arrNew;


        int i;
        int j;

        int strt, end, stp;

        //printf("vrb typ: %d\n", vrb->getTyp());
        //arrTmp用于迭代取数组的值
        arrTmp = bldValFrmVrb(vrb);

        //printf("arrTmp typ: %d\n", arrTmp->typ);

        int lyr = exp->acs->acsLst.size();

        for (i = 0; i < lyr; i++)
        {
            //printf("clcLvlExp cnst typ: %d\n", arrTmp->typ);
            //检查是否是有效的数组
            //if (arrTmp->CnstTyp != ExpEnm::Lvl)
            //{
            //	throw new ExNotAvlbArr;
            //}

            //该层为数组索引的情况
            if (exp->acs->acsLst[i]->blnSlc == 0)
            {
                pstn = clcExp(envr, exp->acs->acsLst[i]->pstn)->v.int_;

                //如果数组索引为负数，实际的数组索引为数组索引值（负数）加数组长度
                if (pstn < 0)
                {
                    pstn = arrTmp->v.arr->elmtArr.size() + pstn;
                }

                if (pstn >= arrTmp->v.arr->elmtArr.size())
                {
                    throw new ExIdxOutArrRng;
                }

                arrTmp = arrTmp->v.arr->elmtArr[pstn];
            }

            if (exp->acs->acsLst[i]->blnSlc != 0)
            {
                intlArr(&arrNew);

                strt = clcExp(envr, exp->acs->acsLst[i]->strt)->v.int_;
                end = clcExp(envr, exp->acs->acsLst[i]->end)->v.int_;
                stp = clcExp(envr, exp->acs->acsLst[i]->stp)->v.int_;

                if (strt < 0)
                {
                    strt = arrTmp->v.arr->elmtArr.size() + strt;
                }

                if (end < 0)
                {
                    end = arrTmp->v.arr->elmtArr.size() + end;
                }

                if (strt >= arrTmp->v.arr->elmtArr.size())
                {
                    throw new ExIdxOutArrRng;
                }

                if (end >= arrTmp->v.arr->elmtArr.size())
                {
                    throw new ExIdxOutArrRng;
                }

                if (strt <= end && stp > 0)
                {
                    for (j = strt; j <= end; j += stp)
                    {
                        addElmt(arrNew, arrTmp->v.arr->elmtArr[j]);
                    }
                }

                if (strt > end && stp < 0)
                {
                    for (j = strt; j >= end; j += stp)
                    {
                        addElmt(arrNew, arrTmp->v.arr->elmtArr[j]);
                    }
                }

                arrTmp = bldArrVal(arrNew);
            }
        }

        //获得得取值结果应该是值，不是引用
        rslt = cpyVal(arrTmp);
    }

    return rslt;
}

ValStrc *clcNewExp(vector<EnvrStrc *> &envr, struct NewExpStrc *exp)
{
    ClsStrc *cls = nullptr;

    printf("new exp: %s\n", exp->nm->c_str());

    cls = getGlbCls(envr, *(exp->nm));

    if (cls != nullptr)
    {
        printf("get cls\n");
        auto obj = istObj(cls);

        return obj;
    } else
    {
        throw ExClsNotDfn();
    }
}

ValStrc *clcExp(vector<EnvrStrc *> &envr, ExpStrc *exp)
{
    ValStrc *rslt = new ValStrc;

    if (exp->typ == ExpEnm::Vrb)
    {
        struct VrbStrc *vrb = getVrb(envr, static_cast<VrbExpStrc *>(exp));

        //如果变量没有注册过，则注册变量并赋值为null
        if (vrb == NULL)
        {
            vrb = addVrb(envr[envr.size() - 1], static_cast<VrbExpStrc *>(exp));
            asnVrb(vrb, bldNllVal());
        }

        rslt = bldValFrmVrb(vrb);
    }

    if (exp->typ == ExpEnm::Bnr)
    {
        rslt = clcBnrExp(envr, static_cast<BnrExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Tnr)
    {
        rslt = clcTnrExp(envr, static_cast<TnrExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Asn)
    {
        AsnExpStrc *asnExp = static_cast<AsnExpStrc *>(exp);

        //如果已经注册为函数名则抛出异常
        if (getFcn(envr, static_cast<FcnExpStrc *>(bldFcnExp((char *) (asnExp->lvl->vrb->nm.c_str()), NULL))) != NULL)
        {
            throw new ExAlrdDfnAsFctn;
        }

        if (getVrb(envr, asnExp->lvl->vrb) == nullptr)
        {
            addVrb(envr[envr.size() - 1], asnExp->lvl->vrb);

            //printf("getVrb: %d\n", getVrb(envr, asnExp->lvl->vrb)!=nullptr);
        }

        rslt = clcAsgExp(envr, asnExp);

        //printf("aft asn %d\n", getVrb(envr, asnExp->lvl->vrb)->getVal().int_);
        //printf("aft asgn: rslt typ: %d cnst typ: %d\n", rslt->typ, rslt->CnstTyp);
        //printf("aft asgn: rslt vrb: %s typ: %d\n", rslt->vl.obj->vrb.back()->nm->c_str(), rslt->vl.obj->vrb.back()->typ);
    }

    if (exp->typ == ExpEnm::Unr)
    {
        rslt = clcUnrExp(envr, static_cast<UnrExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Fcn)
    {
        rslt = clcFcnExp(envr, static_cast<FcnExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Arr)
    {
        rslt = clcArrExp(envr, static_cast<ArrExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::ElmAsn)
    {
        rslt = clcElmtAsgnExp(envr, static_cast<ElmtAsgnExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::NewArr)
    {
        rslt = clcNewArrExp(envr, static_cast<NewArrExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Lvl)
    {
        rslt = clcLvlExp(envr, static_cast<LvlExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Nll)
    {
        rslt = bldNllVal();
    }

    if (exp->typ == ExpEnm::New)
    {
        rslt = clcNewExp(envr, static_cast<NewExpStrc *>(exp));
    }

    if (exp->typ == ExpEnm::Val)
    {
        rslt = static_cast<ValExpStrc *>(exp)->val;
        //printf("tsfm rslt: %d\n", isBln(rslt));
    }

    return rslt;
}


#endif
