#pragma once

#ifndef DFTN_H
#define DFTN_H

#include <cmath>
#include <vector>
#include <string>
#include <stack>
#include <map>

#include "dftn.h"

using namespace std;

#define isInt(val) ((val)->typ == ValEnm::Int)
#define isFlt(val) ((val)->typ == ValEnm::Flt)
#define isStr(val) ((val)->typ == ValEnm::Str)
#define isBln(val) ((val)->typ == ValEnm::Bln)
#define getInt(val) ((val)->v.int_)
#define getFlt(val) ((val)->v.flt)
#define getStr(val) ((val)->v.str)
#define getBln(val) ((val)->v.bln)
#define setInt(val, arg) {(val)->typ=ValEnm::Int; (val)->v.int_ = (arg); }
#define setFlt(val, arg) {(val)->typ=ValEnm::Flt; (val)->v.flt = (arg); }
#define setStr(val, arg) {(val)->typ=ValEnm::Str; (val)->v.str = (arg); }
#define setBln(val, arg) {(val)->typ=ValEnm::Bln; (val)->v.bln = (arg); }

struct VrbStrc;
struct VrbExpStrc;
struct ClsStrc;
struct ObjStrc;

struct FcnStrc;
struct EnvrStrc;

struct ValStrc;

struct FcnExpStrc;
struct VrbDfnStrc;
struct UnrExpStrc;
struct BnrExpStrc;
struct LvlExpStrc;
struct AsnExpStrc;
struct NewExpStrc;
struct ExpStrc;

struct IfStmtStrc;
struct ElsStmtStrc;
struct FcnStmtStrc;
struct ForStmtStrc;
struct WhlStmtStrc;
struct DoWhlStmtStrc;
struct BrkStmtStrc;
struct CntnStmtStrc;
struct RtnStmtStrc;
struct StmtBlkStrc;
struct ClsStmtStrc;
struct NlStmtStrc;
struct ExpStmtStrc;
struct StmtStrc;


struct RtnRsltStrc;
struct BrkRsltStrc;
struct CntnRsltStrc;
struct StmtRsltStrc;
struct PrmLstStrc;
struct ArgLstStrc;
struct VrbLstStrc;
struct PsnLstStrc;
struct ArrStrc;
struct ArrEvlExpStrc;
struct ElmtAsgnExpStrc;
struct NtvFcnStrc;
struct VarStmtStrc;
struct VarStmtStrc2;
struct StmtStkItmStrc;

///
typedef struct ValStrc* NtvFcnDfn(vector<EnvrStrc*>& envr, int prmCnt, vector <ValStrc*> prmArr);


int lstIndt = 0;

union ValUnn
{
	int bln;
	float flt;
	int int_;
	string* str;
	ArrStrc* arr;
	ObjStrc* obj;
	void* ptr;

public:
	ValUnn()
	{
	}

	// ValUnn(ValUnn &&val)
	// {
	// 	//memcpy(this, &val, sizeof(ValUnn));
	// }

	~ValUnn()
	{
	}

	//平凡拷贝构造
	ValUnn(const ValUnn &val)=default;


};


enum class ExpEnm
{
	Val = 1,
	Vrb,
	Bnr,
	Tnr,
	Asn,
	Unr,
	Fcn,
	Nl,
	Arr,
	ElmAsn,
	NewArr,
	Lvl,
	New,
};

enum class OpEnm
{
	Add=1,
	Sub,
	Mul,
	Div,
	Mod,
	Eq,
	Ne,
	Gt,
	Ge,
	Lt,
	Le,
	Asn,
	And,
	Or,
	Xor,
	Not,
	BAnd,
	BOr,
	BXor,
	BNot,
	Tnr,
	Pstv,
	Ngtv,
	PfxInc,
	PfxDec,
	SfxInc,
	SfxDec,
	Nl
};

enum class ValEnm : int
{
	Int = 1,
	Flt,
	Bln,
	Str,
	Nl,
	Arr,
	Obj,
	Ptr
};


enum UnrEnm
{
	PfxInc = 1,
	PfxDec,
	SfxInc,
	SfxDec
};

enum class StmtEnm: int
{
	Exp = 1,
	If,
	IfEls,
	Els,
	Elif,
	For,
	Whl,
	DoWhl,
	Blk,
	Brk,
	Cntn,
	/// <summary>
	/// 函数定义语句
	/// </summary>
	DfnFcn,
	Rtn,
	Var,
	ClsVar,
	ClsFcn,
	ClsShrVar,
	ClsShrFcn,
	Glb,
	Nl,
	Cls,
	ForStmt,
	Cnd,
	Sgl,

};

enum class RtnEnm
{
	Nrm = 1,
	Brk,
	Cntn,
	Rtn
};

enum class EnvrEnm
{
	TopLvl,
	Fcn,
	Blk,
	Stmt
};

struct StmtStrc
{
public:
	StmtEnm typ;
	int indt;

	StmtStrc(StmtEnm stmt, int indt): typ(stmt), indt(indt)
	{};

	StmtStrc(StmtEnm stmt): typ(stmt)
	{};
};

struct StmtStkItmStrc
{

	int indt;
	StmtStrc* stmt;
	int alwSubStmt = 0;
	int blnScndStmt = 0;
};

std::vector<StmtStkItmStrc*> stmtStk;

/// <summary>
///	多主句语句的栈
/// </summary>
std::vector<StmtStrc*> mltStmtStk;


/// 条件语句
struct CndStmtStrc : public StmtStrc
{
public:
	VrbStrc *vrb, *vrb2;
	OpEnm op;
	///如果有嵌套结构
	CndStmtStrc *cnd, *cnd2;

	CndStmtStrc(int indt, VrbStrc *vrb, VrbStrc *vrb2, OpEnm op, CndStmtStrc *cnd, CndStmtStrc *cnd2):StmtStrc(StmtEnm::Cnd), vrb(vrb), vrb2(vrb2), op(op),
		cnd(cnd), cnd2(cnd2)
	{};
};

struct ClsStrc
{
	string* nm;
	vector<VrbStrc*> vrb;
	vector<FcnStrc*> fcn;
	vector<VrbStrc*> shrVrb;
	vector<FcnStrc*> shrFcn;

	StmtStrc* dfn;
};


/// 对象结构体
struct ObjStrc
{
public:
	vector<VrbStrc*> vrb;
	vector<FcnStrc*> fcn;

	ClsStrc* cls;

	ObjStrc()
	{};

	ObjStrc(vector<VrbStrc *> vrb, vector<FcnStrc *> fcn, ClsStrc* cls): vrb(vrb), fcn(fcn), cls(cls)
	{};
};

// 单一语句
struct SglStmtStrc: public StmtStrc
{
public:
	ExpStrc* exp;

	SglStmtStrc(ExpStrc *exp): StmtStrc(StmtEnm::Sgl), exp(exp)
	{};
};


/// 表达式语句
struct ExpStrc
{
public:
	ExpEnm typ;

	ExpStrc (ExpEnm typ) : typ(typ)
	{};

	virtual ~ExpStrc() = default;
};

// 条件语句的逻辑表达式
struct CndStrc
{
	ExpStrc *lft, *rgt;
	OpEnm op;
};


/// 变量表达式 variable expression
struct VrbExpStrc :public ExpStrc
{
	string nm;

	//间接使用string的char*构造器
	VrbExpStrc(string nm): ExpStrc(ExpEnm::Vrb), nm(nm)
	{};
};

/// 程序值结构体
struct ValStrc
{
public:
	ValEnm typ;
	ValUnn v;

	ValStrc(ValEnm typ, ValUnn v): typ(typ), v(v)
	{};

	ValStrc()
	{
	};

	ValStrc(ValEnm typ): typ(typ)
	{};

	//拷贝构造
	ValStrc (const ValStrc & val) = default;

	ValStrc operator +(ValStrc &o2) const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this) && isInt(&o2))
		{
			setInt(rslt, getInt(this) + getInt(&o2));
		}
		else if (isInt(this) && isFlt(&o2))
		{
			setFlt(rslt, getInt(this) + getFlt(&o2));
		}
		else if (isFlt(this) && isInt(&o2))
		{
			setFlt(rslt, getFlt(this) + getInt(&o2))
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			setFlt(rslt, getFlt(this)+getFlt(&o2));
		}
		else if (isStr(this) && isStr(&o2))
		{
			setStr(rslt, new std::string(*getStr(this)+*getStr(&o2)))
		}

		return *rslt;
	}

	ValStrc operator -(ValStrc &o2) const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this) && isInt(&o2))
		{
			setInt(rslt, getInt(this) - getInt(&o2));
		}
		else if (isInt(this) && isFlt(&o2))
		{
			setFlt(rslt, getInt(this) - getFlt(&o2));
		}
		else if (isFlt(this) && isInt(&o2))
		{
			setFlt(rslt, getFlt(this) - getFlt(&o2));
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			setFlt(rslt, getFlt(this) - getFlt(&o2));
		}

		return *rslt;
	}

	ValStrc operator *(ValStrc &o2) const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this) && isInt(&o2))
		{
			setInt(rslt, getInt(this)*getInt(&o2));
		}
		else if (isInt(this) && isFlt(&o2))
		{
			setFlt(rslt, getInt(this)*getFlt(&o2))
		}
		else if (isFlt(this) && isInt(&o2))
		{
			setFlt(rslt, getFlt(this)*getInt(&o2))
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			setFlt(rslt, getFlt(this)*getFlt(&o2));
		}

		return *rslt;
	}

	ValStrc operator/(ValStrc &o2) const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this) && isInt(&o2))
		{
			setInt(rslt, getInt(this)/getInt(&o2));
		}
		else if (isInt(this) && isFlt(&o2) && getFlt(&o2)!=0)
		{
			setFlt(rslt, getInt(this)/getFlt(&o2));
		}
		else if (isFlt(this) && isInt(&o2))
		{
			setFlt(rslt, getFlt(this)/getFlt(&o2));
		}
		else if (isFlt(this) && isFlt(&o2) && getFlt(&o2)!=0)
		{
			setFlt(rslt, getFlt(this)/getFlt(&o2));
		}

		return *rslt;
	}

	ValStrc operator %(ValStrc &o2) const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this) && isInt(&o2))
		{
			setInt(rslt, getInt(this) % getInt(&o2));
		}
		else if (isInt(this) && isFlt(&o2))
		{
			setFlt(rslt, fmod(getInt(this) , getFlt(&o2)));
		}
		else if (isFlt(this) && isInt(&o2))
		{
			setFlt(rslt, fmod(getFlt(this) , getInt(&o2)));
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			setFlt(rslt, fmod(getFlt(this), getFlt(&o2)));
		}

		return *rslt;
	}

	ValStrc operator >(ValStrc &o2) const
	{

		bool bln;

		if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) > getInt(&o2);
		}
		else if (isInt(this) && isFlt(&o2))
		{
			bln = getInt(this) > getFlt(&o2);
		}
		else if (isFlt(this) && isInt(&o2))
		{
			bln = getFlt(this) > getInt(&o2);
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			bln = getFlt(this) > getFlt(&o2);
		}

		ValStrc *rslt;

		rslt = new ValStrc();
		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator >=(ValStrc &o2) const
	{
		bool bln;

		if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) >= getInt(&o2);
		}
		else if (isInt(this) && isFlt(&o2))
		{
			bln = getInt(this) >= getFlt(&o2);
		}
		else if (isFlt(this) && isInt(&o2))
		{
			bln = getFlt(this) >= getInt(&o2);
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			bln = getFlt(this) >= getFlt(&o2);
		}

		ValStrc *rslt;
		rslt = new ValStrc();
		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator <(ValStrc &o2) const
	{
		bool bln;

		if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) < getInt(&o2);
		}
		else if (isInt(this) && isFlt(&o2))
		{
			bln = getInt(this) < getFlt(&o2);
		}
		else if (isFlt(this) && isInt(&o2))
		{
			bln = getFlt(this) < getInt(&o2);
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			bln = getFlt(this) < getFlt(&o2);
		}

		ValStrc *rslt;
		rslt = new ValStrc();
		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator <=(ValStrc &o2) const
	{
		bool bln;

		if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) <= getInt(&o2);
		}
		else if (isInt(this) && isFlt(&o2))
		{
			bln = getInt(this) <= getFlt(&o2);
		}
		else if (isFlt(this) && isInt(&o2))
		{
			bln = getFlt(this) <= getInt(&o2);
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			bln = getFlt(this) <= getFlt(&o2);
		}

		ValStrc *rslt;
		rslt = new ValStrc();
		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator ==(ValStrc &o2) const
	{
		bool bln;

		if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) == getInt(&o2);
		}
		else if (isInt(this) && isFlt(&o2))
		{
			bln = getInt(this) == getFlt(&o2);
		}
		else if (isFlt(this) && isInt(&o2))
		{
			bln = getFlt(this) == getInt(&o2);
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			bln = getFlt(this) == getFlt(&o2);
		}
		else if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) == getBln(&o2);
		}
		else if (isStr(this) && isStr(&o2))
		{
			bln = getStr(this) ==getStr(&o2);
		}

		ValStrc *rslt;
		rslt = new ValStrc();
		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator !=(ValStrc &o2) const
	{
		bool bln;

		if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) != getInt(&o2);
		}
		else if (isInt(this) && isFlt(&o2))
		{
			bln = getInt(this) != getFlt(&o2);
		}
		else if (isFlt(this) && isInt(&o2))
		{
			bln = getFlt(this) != getInt(&o2);
		}
		else if (isFlt(this) && isFlt(&o2))
		{
			bln = getFlt(this) != getFlt(&o2);
		}
		else if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) != getBln(&o2);
		}
		else if (isStr(this) && isStr(&o2))
		{
			bln = getStr(this) != getStr(&o2);
		}

		ValStrc *rslt;
		rslt = new ValStrc();
		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator &&(ValStrc &o2) const
	{
		bool bln;

		if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) && getBln(&o2);
		}

		ValStrc *rslt= new ValStrc();

		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator ||(ValStrc &o2) const
	{
		bool bln;

		if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) || getBln(&o2);
		}

		ValStrc *rslt= new ValStrc;

		setBln(rslt, bln);

		return *rslt;
	}

	ValStrc operator ^(ValStrc &o2) const
	{
		int bln=0;

		ValStrc *rslt = new ValStrc();


		if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) ^ getBln(&o2);
			setBln(rslt, bln);
		}
		else if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) ^ getInt(&o2);
			setInt(rslt, bln);
		}
		else if (isInt(this) && isBln(&o2))
		{
			bln = getInt(this) ^ getBln(&o2);
			setInt(rslt, bln);
		}
		else if (isBln(this) && isInt(&o2))
		{
			bln = getBln(this) ^ getInt(&o2);
			setInt(rslt, bln);
		}

		return *rslt;
	}

	ValStrc operator &(ValStrc &o2) const
	{
		int bln=0;

		ValStrc *rslt = new ValStrc();

		if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) & getBln(&o2);
			setBln(rslt, bln);
		}
		else if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) & getInt(&o2);
			setInt(rslt, bln);
		}
		else if (isInt(this) && isBln(&o2))
		{
			bln = getInt(this) & getBln(&o2);
			setInt(rslt, bln);
		}
		else if (isBln(this) && isInt(&o2))
		{
			bln = getBln(this) & getInt(&o2);
			setInt(rslt, bln);
		}

		return *rslt;
	}

	ValStrc operator |(ValStrc &o2) const
	{
		int bln=0;

		ValStrc *rslt = new ValStrc();

		if (isBln(this) && isBln(&o2))
		{
			bln = getBln(this) | getBln(&o2);
			setBln(rslt, bln);
		}
		else if (isInt(this) && isInt(&o2))
		{
			bln = getInt(this) | getInt(&o2);
			setInt(rslt, bln);
		}
		else if (isInt(this) && isBln(&o2))
		{
			bln = getInt(this) | getBln(&o2);
			setInt(rslt, bln);
		}
		else if (isBln(this) && isInt(&o2))
		{
			bln = getBln(this) | getInt(&o2);
			setInt(rslt, bln);
		}

		return *rslt;
	}


	//一元运算符
	ValStrc operator+() const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this))
		{
			setInt(rslt, getInt(this));
		}
		else if (isFlt(this))
		{
			setInt(rslt, getFlt(this));
		}

		return *rslt;
	}

	ValStrc operator -() const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this))
		{
			setInt(rslt, -getInt(this));
		}
		else if (isFlt(this))
		{
			setFlt(rslt, -getFlt(this));
		}

		return *rslt;
	}

	ValStrc &operator++()
	{
		if (isInt(this))
		{
			setInt(this, getInt(this)+1);
		}
		else if (isFlt(this))
		{
			setFlt(this, getFlt(this)+1);
		}

		return *this;
	}

	ValStrc &operator--()
	{
		if (isInt(this))
		{
			setInt(this, getInt(this)-1);
		}
		else if (isFlt(this))
		{
			setFlt(this, getFlt(this)-1);
		}

		return *this;
	}

	ValStrc operator++(int)
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this))
		{
			setInt(rslt, getInt(this));
			setInt(this, getInt(this)+1);
		}
		else if (isFlt(this))
		{
			setFlt(rslt, getFlt(this));
			setFlt(this, getFlt(this)+1);
		}

		return *rslt;
	}

	ValStrc operator--(int)
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this))
		{
			setInt(rslt, getInt(this));
			setInt(this, getInt(this)-1);
		}
		else if (isFlt(this))
		{
			setInt(rslt, getFlt(this));
			setFlt(this, getFlt(this)-1);
		}

		return *rslt;
	}

	ValStrc operator !() const
	{
		ValStrc *rslt = new ValStrc();

		if (isInt(this))
		{
			setInt(rslt, !getInt(this));
		}
		else if (isBln(this))
		{
			setBln(rslt, !getBln(this));
		}

		return *rslt;
	}

	ValStrc operator~() const
	{
		ValStrc *rslt =new ValStrc();

		if (isInt(this))
		{
			setInt(rslt, ~getInt(this));
		}
		else if (isBln(this))
		{
			setBln(rslt, ~getBln(this));
		}

		return *rslt;
	}
};

///变量结构体
struct VrbStrc
{
public:
	string *nm;

	ValStrc* val;

	ValEnm getTyp()
	{
		return val->typ;
	}

	ValUnn &getVal()
	{
		return val->v;
	}

	VrbStrc()
	{};

	VrbStrc(ValStrc* val, string* nm): val(val), nm(nm)
	{};
};

struct ValExpStrc: public ExpStrc
{
	ValStrc *val;

	ValExpStrc(ValStrc* val): ExpStrc(ExpEnm::Val), val(val)
	{};
};


// 赋值表达式 assign expression
struct AsnExpStrc : public ExpStrc
{
	LvlExpStrc* lvl;
	ExpStrc* exp;

	AsnExpStrc(LvlExpStrc* lvl, ExpStrc *exp): ExpStrc(ExpEnm::Asn), lvl(lvl), exp(exp)
	{};
};

struct NewExpStrc :public ExpStrc
{
	string* nm;
	ArgLstStrc* arg;

	//NewExpStrc(string *nm, ArgLstStrc* arg): ExpStrc(ExpEnm::New), nm(nm)
	NewExpStrc(string *nm): ExpStrc(ExpEnm::New), nm(nm)
	{};
};

struct BnrExpStrc : public ExpStrc
{
	OpEnm opr;
	ExpStrc* lft, * rgt;

	BnrExpStrc(OpEnm opr, ExpStrc* lft, ExpStrc* rgt): ExpStrc(ExpEnm::Bnr), opr(opr), lft(lft), rgt(rgt)
	{};
};

struct UnrExpStrc : public ExpStrc
{
	OpEnm opr;
	ExpStrc* exp;

	UnrExpStrc(OpEnm opr, ExpStrc* exp) : ExpStrc(ExpEnm::Unr), opr(opr), exp(exp)
	{};
};


struct TnrExpStrc : public ExpStrc
{
public:
	OpEnm opr;
	ExpStrc* frst, * scnd, * trd;

	TnrExpStrc(OpEnm opr, ExpStrc* frst, ExpStrc* scnd, ExpStrc* trd):ExpStrc(ExpEnm::Tnr), opr(opr), frst(frst),
		scnd(scnd), trd(trd)
	{};
};

struct FcnExpStrc : public ExpStrc
{
public:
	string nm;

	ArgLstStrc* argLst;

	FcnExpStrc(string nm, ArgLstStrc* arg): ExpStrc(ExpEnm::Fcn), nm(nm), argLst(arg)
	{};
};



//数组定义结构体
struct ArrExpStrc :public ExpStrc
{
public:
	struct ElmtLstStrc* elmtLst;

	ArrExpStrc(ElmtLstStrc* elmtLst): ExpStrc(ExpEnm::Arr), elmtLst(elmtLst)
	{};
};

//数组取用结构体
struct ArrEvlExpStrc :public ExpStrc
{
	// 0: 标识符数组变量 1: 数组表达式
	int blnArr;

	struct ExpStrc* arr;

	struct AcsLstStrc* evlLst;
};

struct LvlExpStrc :public ExpStrc
{
public:

	VrbExpStrc* vrb;

	int hasAcsLst;
	AcsLstStrc* acs;

	int hasAtb;
	LvlExpStrc* atb;

	int hasFcn;
	FcnExpStrc* fcn;

	int blnIvk;

	LvlExpStrc(VrbExpStrc* vrb): ExpStrc(ExpEnm::Lvl), vrb(vrb)
	{};

	LvlExpStrc(VrbExpStrc* vrb, int hasAcsLst, AcsLstStrc* acs): ExpStrc(ExpEnm::Lvl), hasAcsLst(hasAcsLst), vrb(vrb), acs(acs)
	{};

	LvlExpStrc(VrbExpStrc* vrb, int hasAtb,  LvlExpStrc* atb): ExpStrc(ExpEnm::Lvl), hasAtb(hasAtb), vrb(vrb), atb(atb)
	{};

	LvlExpStrc(VrbExpStrc* vrb, int hasFcn, FcnExpStrc* fcn): ExpStrc(ExpEnm::Lvl), hasFcn(hasFcn), vrb(vrb), fcn(fcn)
	{};
};


struct NewArrExpStrc :ExpStrc
{
	struct ExpStrc* cnt;
};

//数组元素赋值表达式结构体
struct ElmtAsgnExpStrc :ExpStrc
{
	ExpStrc* arr;

	PsnLstStrc* psnLst;

	ExpStrc* val;

	ElmtAsgnExpStrc(ExpStrc *arr, PsnLstStrc* psnLst, ExpStrc* val): ExpStrc(ExpEnm::ElmAsn), arr(arr), psnLst(psnLst), val(val)
	{};
};




///表达式语句
struct ExpStmtStrc : public StmtStrc
{
	ExpStrc* exp;

	ExpStmtStrc(ExpStrc *exp): StmtStrc(StmtEnm::Exp), exp(exp)
	{};
};

struct IfStmtStrc : public StmtStrc
{
	ExpStrc* exp;
	StmtStrc* stmt;
	int expRslt;

	IfStmtStrc(ExpStrc* exp, StmtStrc* stmt): StmtStrc(StmtEnm::If), exp(exp), stmt(stmt)
	{};

	IfStmtStrc(ExpStrc* exp, StmtStrc* stmt, int rslt): StmtStrc(StmtEnm::If), exp(exp), stmt(stmt), expRslt(rslt)
	{};
};

struct ElsStmtStrc :public StmtStrc
{
	struct StmtStrc* stmt;

	ElsStmtStrc(StmtStrc* stmt): StmtStrc(StmtEnm::Els), stmt(stmt)
	{};

};

struct ElifStmtStrc : public StmtStrc
{
	ExpStrc* exp;
	StmtStrc* stmt;

	int expRslt;

	ElifStmtStrc(ExpStrc* exp, StmtStrc* stmt, int expRslt): StmtStrc(StmtEnm::Elif), exp(exp), stmt(stmt), expRslt(expRslt)
	{};
};

// struct IfElsStmtStrc : public StmtStrc
// {
// 	struct ExpStrc* exp;
// 	struct StmtStrc* stmt;
// 	struct StmtStrc* elsStmt;
// };

struct ForStmtStrc : public StmtStrc
{
	StmtStrc* intl;
	StmtStrc* exp;
	StmtStrc* itr;
	StmtStrc* stmt;

	ForStmtStrc(StmtStrc* init, StmtStrc* exp, StmtStrc* itr, StmtStrc* stmt): StmtStrc(StmtEnm::For), intl(init),
		exp(exp), itr(itr), stmt(stmt)
	{};
};

struct WhlStmtStrc : public StmtStrc
{
	CndStrc* cnd;
	ExpStrc* exp;
	StmtStrc* stmt;

	WhlStmtStrc(ExpStrc* exp, StmtStrc *stmt ): StmtStrc(StmtEnm::Whl), exp(exp), stmt(stmt)
	{};

	//WhlStmtStrc(CndStrc* cnd, StmtStrc *stmt) : StmtStrc(StmtEnm::Cnd), cnd(cnd), stmt(stmt)
	//{};
};

struct DoWhlStmtStrc : public StmtStrc
{
	//CndStrc* cnd;
	StmtStrc* exp;
	StmtStrc* stmt;

	DoWhlStmtStrc(StmtStrc *exp): StmtStrc(StmtEnm::DoWhl), exp(exp)
	{};

	DoWhlStmtStrc(StmtStrc *exp, StmtStrc *stmt): StmtStrc(StmtEnm::DoWhl), exp(exp), stmt(stmt)
	{};

};

struct BrkStmtStrc : public StmtStrc
{
	ExpStrc* exp;

	BrkStmtStrc(): StmtStrc(StmtEnm::Brk)
	{};

	//break(2)是可以的
	BrkStmtStrc(ExpStrc * exp): StmtStrc(StmtEnm::Brk), exp(exp)
	{};
};

struct CntnStmtStrc : public StmtStrc
{
	ExpStrc* exp;

	CntnStmtStrc(): StmtStrc(StmtEnm::Cntn)
	{};

	//可以使用continue(2)语句
	CntnStmtStrc(ExpStrc* exp): StmtStrc(StmtEnm::Cntn), exp(exp)
	{};
};

struct FcnStmtStrc : public StmtStrc
{
	FcnStrc* fcn;

	FcnStmtStrc(FcnStrc* fcn): StmtStrc(StmtEnm::DfnFcn), fcn(fcn)
	{};
};

struct ClsStmtStrc : public StmtStrc
{
	ClsStrc* cls;

	ClsStmtStrc(ClsStrc* cls): StmtStrc(StmtEnm::Cls), cls(cls)
	{};

};

struct StmtBlkStrc : public StmtStrc
{
	vector<StmtStrc*> stmtArr;

	StmtBlkStrc(): StmtStrc(StmtEnm::Blk)
	{};
};

struct RtnStmtStrc : public StmtStrc {
	int blnRslt;
	ExpStrc* exp;

	RtnStmtStrc(ExpStrc *exp): StmtStrc(StmtEnm::Rtn), exp(exp)
	{};

	RtnStmtStrc(ExpStrc *exp, int rslt): StmtStrc(StmtEnm::Rtn), exp(exp), blnRslt(rslt)
	{};

};

struct VarStmtStrc : public StmtStrc
{
	struct AsnLstStrc* asnLst;

	VarStmtStrc(AsnLstStrc *lst): StmtStrc(StmtEnm::Var), asnLst(lst)
	{};

	VarStmtStrc():StmtStrc(StmtEnm::Var)
	{};

};

struct VarStmtStrc2 : public StmtStrc
{
	std::map<string, ExpStrc*> asnLst;


};

struct GlbStmtStrc : public StmtStrc
{
	AsnLstStrc* asnLst;

	GlbStmtStrc(): StmtStrc(StmtEnm::Glb)
	{};

	GlbStmtStrc(AsnLstStrc* asgnLst): StmtStrc(StmtEnm::Glb), asnLst(asgnLst)
	{};

};

struct NlStmtStrc : public StmtStrc
{
	NlStmtStrc(): StmtStrc(StmtEnm::Nl)
	{};
};


//return语句返回类型结构体
struct RtnRsltStrc
{
	int blnRslt;
	ValStrc* rslt;
};

//break语句返回类型结构体
struct BrkRsltStrc
{
	int brkCnt;
};

//continue语句返回类型结构体
struct CntnRsltStrc
{
	int cntnCnt;
};

//语句返回类型结构体
struct StmtRsltStrc
{
	RtnEnm typ;
	union
	{
		struct RtnRsltStrc* rtnRslt;
		struct BrkRsltStrc* brkRslt;
		struct CntnRsltStrc* cntnRslt;
	}rslt;

};

//函数信息结构体
struct FcnStrc
{
	string nm;
	PrmLstStrc* prm;
	StmtStrc* stmt;

	FcnStrc(string nm, PrmLstStrc* prm, StmtStrc* stmt): nm(nm), prm(prm), stmt(stmt)
	{};

};


//变量环境结构体

struct EnvrStrc
{

	EnvrEnm typ;

	vector<VrbStrc*> vrbArr;

	vector<FcnStrc*> fcnArr;

	vector<NtvFcnStrc*> ntvFcnArr;

	//用于保存全局变量，只在顶层空间中有效
	vector<VrbStrc*> glbArr;

	vector<ClsStrc*> clsArr;

public:
	EnvrStrc()
	{
	}
	EnvrStrc(EnvrEnm typ)
	{
		this->typ = typ;
	}
};

//数组结构体
struct ArrStrc
{

	vector<ValStrc*> elmtArr;
};

//数组元素列表
struct ElmtLstStrc
{
	vector<ExpStrc*> elmtArr;
};

//数组定位列表
struct PsnLstStrc
{
	//int pstnSz;
	//int pstnCnt;

	vector<ExpStrc*> pstnArr;
};

/// <summary>
/// 数组引用的结构体，引用方式可以是直接指定索引数值或者提供切片
/// </summary>
struct AcsStrc
{
	// 1 数组取值为切片 0 数组取值为指定元素
	int blnSlc;

	ExpStrc* pstn;
	ExpStrc* strt;
	ExpStrc* end;
	ExpStrc* stp;
};

//数组评估列表，acsLst中的每个元素是指某一层的访问索引或切片
struct AcsLstStrc
{

	vector<AcsStrc*> acsLst;

};

//函数形参列表
struct PrmLstStrc
{

	vector<VrbExpStrc*> prmArr;
	vector<ExpStrc*> expArr;
};


//函数实参列表
struct ArgLstStrc
{
	vector <VrbExpStrc*> prmArr;
	vector <ExpStrc*> argArr;
};

//赋值列表
struct AsnLstStrc
{
	vector<AsnExpStrc*> asgnArr;

	AsnLstStrc()
	{};

	//AsnLstStrc
};

struct NtvFcnStrc
{
	string fcnNm;
	int prmCnt;
	NtvFcnDfn* fcn;

	NtvFcnStrc(string fcnNm, int prmCnt, NtvFcnDfn* fcn): fcnNm(fcnNm), prmCnt(prmCnt), fcn(fcn)
	{};
};


vector<EnvrStrc*> envr;

#endif