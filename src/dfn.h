#pragma once

#ifndef DFN_H
#define DFN_H

#include <cmath>
#include <vector>
#include <string>
#include <stack>
#include <map>


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

//PMT STMT -> EXP
//PMT VRB -> VAL

struct VrbStrc;
struct VrbExp;
struct ClsStrc;
struct ObjStrc;

struct Fcn;
struct Envr;

struct ValStrc;

struct FcnExpStrc;
struct VrbDfnStrc;
struct UnrExpStrc;
struct BnrExpStrc;
struct LvlExpStrc;
struct AsnExpStrc;
struct NewExpStrc;
struct Exp;

struct IfStmt;
struct ElsStmt;
struct FcnStmt;
struct ForStmt;
struct WhlStmt;
struct DoWhlStmt;
struct BrkStmt;
struct CntnStmt;
struct RtnStmt;
struct StmtBlkStrc;
struct ClsStmt;
struct NlStmtStrc;
struct ExpStmtStrc;
struct Stmt;


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
struct VarStmt;
struct VarStmtStrc2;
struct StmtStkItmStrc;

///
typedef struct ValStrc* NtvFcnDfn(vector<Envr*>& envr, int prmCnt, vector <ValStrc*> prmArr);


int lstIndt = 0;


///TODO level quick float 修改为 double
///TODO level 1 ValUnn 考虑修改为 strc，并相应修改程序中程量ValStrc，更容易判定类型
///TODO level 1 ValUnn 是否可以修改为long
union ValUnn
{
	int bln;
	double flt;
	int int_;
	string* str;
	ArrStrc* arr;
	ObjStrc* obj;
	void* ptr;
	//void* nl;

public:
	ValUnn()
	{
	}

	explicit ValUnn(const int &int_):int_(int_)
	{}

	explicit ValUnn(const float &flt):flt(flt)
	{};

	explicit ValUnn( string* str):str(str)
	{};

	explicit ValUnn(ArrStrc* arr): arr(arr)
	{};

	explicit ValUnn(ObjStrc *obj):obj(obj)
	{};

	explicit ValUnn(char* str)
	{
		this->str = new string(str);
	};

	explicit ValUnn(void* ptr):ptr(ptr)
	{};


	~ValUnn()
	{
	}


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

struct Stmt
{
public:
	StmtEnm typ;
	int indt;

	Stmt(StmtEnm stmt, int indt): typ(stmt), indt(indt)
	{};

	Stmt(StmtEnm stmt): typ(stmt)
	{};

	virtual void mkPlm()
	{};
};

struct StmtStkItmStrc
{

	int indt;
	Stmt* stmt;
	int alwSubStmt = 0;
	int blnScndStmt = 0;
};

std::vector<StmtStkItmStrc*> stmtStk;

/// <summary>
///	多主句语句的栈
/// </summary>
std::vector<Stmt*> mltStmtStk;


/// 条件语句
struct CndStmtStrc : public Stmt
{
public:
	VrbStrc *vrb, *vrb2;
	OpEnm op;
	///如果有嵌套结构
	CndStmtStrc *cnd, *cnd2;

	CndStmtStrc(int indt, VrbStrc *vrb, VrbStrc *vrb2, OpEnm op, CndStmtStrc *cnd, CndStmtStrc *cnd2):Stmt(StmtEnm::Cnd), vrb(vrb), vrb2(vrb2), op(op),
		cnd(cnd), cnd2(cnd2)
	{};
};

struct ClsStrc
{
	string* nm;
	vector<VrbStrc*> vrb;
	vector<Fcn*> fcn;
	vector<VrbStrc*> shrVrb;
	vector<Fcn*> shrFcn;

	Stmt* dfn;
};


/// 对象结构体
struct ObjStrc
{
public:
	vector<VrbStrc*> vrb;
	vector<Fcn*> fcn;

	ClsStrc* cls;

	ObjStrc()
	{};

	ObjStrc(vector<VrbStrc *> vrb, vector<Fcn *> fcn, ClsStrc* cls): vrb(vrb), fcn(fcn), cls(cls)
	{};
};

// 单一语句
struct SglStmtStrc: public Stmt
{
public:
	Exp* exp;

	SglStmtStrc(Exp *exp): Stmt(StmtEnm::Sgl), exp(exp)
	{};
};


/// 表达式语句
struct Exp
{
public:
	ExpEnm typ;

	Exp (ExpEnm typ) : typ(typ)
	{};

	virtual ~Exp() = default;
};

// 条件语句的逻辑表达式
struct CndStrc
{
	Exp *lft, *rgt;
	OpEnm op;
};


/// 变量表达式 variable expression
struct VrbExp :public Exp
{
	string nm;

	//间接使用string的char*构造器
	VrbExp(string nm): Exp(ExpEnm::Vrb), nm(nm)
	{};
};

/// TODO 考虑和ValUnn合成1个
/// 程序值结构体
struct ValStrc
{
public:
	ValEnm typ;
	ValUnn v;

	ValStrc(const ValEnm &typ, const ValUnn &v): typ(typ), v(v)
	{};

	ValStrc()
	{
	};

	explicit ValStrc(char* v): typ(ValEnm::Str)
	{
		this->v = ValUnn(v);
	}

	ValStrc(const ValEnm &typ): typ(typ)
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

struct ValExpStrc: public Exp
{
	ValStrc *val;

	ValExpStrc(ValStrc* val): Exp(ExpEnm::Val), val(val)
	{};
};


// 赋值表达式 assign expression
struct AsnExpStrc : public Exp
{
	LvlExpStrc* lvl;
	Exp* exp;

	AsnExpStrc(LvlExpStrc* lvl, Exp *exp): Exp(ExpEnm::Asn), lvl(lvl), exp(exp)
	{};
};

struct NewExpStrc :public Exp
{
	string* nm;
	ArgLstStrc* arg;

	//NewExpStrc(string *nm, ArgLstStrc* arg): ExpStrc(ExpEnm::New), nm(nm)
	NewExpStrc(string *nm): Exp(ExpEnm::New), nm(nm)
	{};
};

struct BnrExpStrc : public Exp
{
	OpEnm opr;
	Exp* lft, * rgt;

	BnrExpStrc(OpEnm opr, Exp* lft, Exp* rgt): Exp(ExpEnm::Bnr), opr(opr), lft(lft), rgt(rgt)
	{};
};

struct UnrExpStrc : public Exp
{
	OpEnm opr;
	Exp* exp;

	UnrExpStrc(OpEnm opr, Exp* exp) : Exp(ExpEnm::Unr), opr(opr), exp(exp)
	{};
};


struct TnrExpStrc : public Exp
{
public:
	OpEnm opr;
	Exp* frst, * scnd, * trd;

	TnrExpStrc(OpEnm opr, Exp* frst, Exp* scnd, Exp* trd):Exp(ExpEnm::Tnr), opr(opr), frst(frst),
		scnd(scnd), trd(trd)
	{};
};

struct FcnExpStrc : public Exp
{
public:
	string nm;

	ArgLstStrc* argLst;

	FcnExpStrc(string nm, ArgLstStrc* arg): Exp(ExpEnm::Fcn), nm(nm), argLst(arg)
	{};
};



//数组定义结构体
struct ArrExpStrc :public Exp
{
public:
	struct ElmtLstStrc* elmtLst;

	ArrExpStrc(ElmtLstStrc* elmtLst): Exp(ExpEnm::Arr), elmtLst(elmtLst)
	{};
};

//数组取用结构体
struct ArrEvlExpStrc :public Exp
{
	// 0: 标识符数组变量 1: 数组表达式
	int blnArr;

	struct Exp* arr;

	struct AcsLstStrc* evlLst;
};

struct LvlExpStrc :public Exp
{
public:

	VrbExp* vrb;

	int hasAcsLst;
	AcsLstStrc* acs;

	int hasAtb;
	LvlExpStrc* atb;

	int hasFcn;
	FcnExpStrc* fcn;

	int blnIvk;

	LvlExpStrc(VrbExp* vrb): Exp(ExpEnm::Lvl), vrb(vrb)
	{};

	LvlExpStrc(VrbExp* vrb, int hasAcsLst, AcsLstStrc* acs): Exp(ExpEnm::Lvl), hasAcsLst(hasAcsLst), vrb(vrb), acs(acs)
	{};

	LvlExpStrc(VrbExp* vrb, int hasAtb,  LvlExpStrc* atb): Exp(ExpEnm::Lvl), hasAtb(hasAtb), vrb(vrb), atb(atb)
	{};

	LvlExpStrc(VrbExp* vrb, int hasFcn, FcnExpStrc* fcn): Exp(ExpEnm::Lvl), hasFcn(hasFcn), vrb(vrb), fcn(fcn)
	{};
};


struct NewArrExpStrc :Exp
{
	struct Exp* cnt;
};

//数组元素赋值表达式结构体
struct ElmtAsgnExpStrc :Exp
{
	Exp* arr;

	PsnLstStrc* psnLst;

	Exp* val;

	ElmtAsgnExpStrc(Exp *arr, PsnLstStrc* psnLst, Exp* val): Exp(ExpEnm::ElmAsn), arr(arr), psnLst(psnLst), val(val)
	{};
};




///表达式语句
struct ExpStmtStrc : public Stmt
{
	Exp* exp;

	ExpStmtStrc(Exp *exp): Stmt(StmtEnm::Exp), exp(exp)
	{};
};

struct IfStmt : public Stmt
{
	Exp* exp;
	Stmt* stmt;
	int expRslt;

	IfStmt(Exp* exp, Stmt* stmt): Stmt(StmtEnm::If), exp(exp), stmt(stmt)
	{};

	IfStmt(Exp* exp, Stmt* stmt, int rslt): Stmt(StmtEnm::If), exp(exp), stmt(stmt), expRslt(rslt)
	{};
};

struct ElsStmt :public Stmt
{
	struct Stmt* stmt;

	ElsStmt(Stmt* stmt): Stmt(StmtEnm::Els), stmt(stmt)
	{};

};

struct ElifStmt : public Stmt
{
	Exp* exp;
	Stmt* stmt;

	int expRslt;

	ElifStmt(Exp* exp, Stmt* stmt, int expRslt): Stmt(StmtEnm::Elif), exp(exp), stmt(stmt), expRslt(expRslt)
	{};
};

// struct IfElsStmtStrc : public StmtStrc
// {
// 	struct ExpStrc* exp;
// 	struct StmtStrc* stmt;
// 	struct StmtStrc* elsStmt;
// };

struct ForStmt : public Stmt
{
	Stmt* intl;
	Stmt* exp;
	Stmt* itr;
	Stmt* stmt;

	ForStmt(Stmt* init, Stmt* exp, Stmt* itr, Stmt* stmt): Stmt(StmtEnm::For), intl(init),
		exp(exp), itr(itr), stmt(stmt)
	{};
};

struct WhlStmt : public Stmt
{
	CndStrc* cnd;
	Exp* exp;
	Stmt* stmt;

	WhlStmt(Exp* exp, Stmt *stmt ): Stmt(StmtEnm::Whl), exp(exp), stmt(stmt)
	{};

	//WhlStmtStrc(CndStrc* cnd, StmtStrc *stmt) : StmtStrc(StmtEnm::Cnd), cnd(cnd), stmt(stmt)
	//{};
};

struct DoWhlStmt : public Stmt
{
	CndStrc* cnd;
	Stmt* exp;
	Stmt* stmt;

	DoWhlStmt(Stmt *exp): Stmt(StmtEnm::DoWhl), exp(exp)
	{};

	DoWhlStmt(Stmt *exp, Stmt *stmt): Stmt(StmtEnm::DoWhl), exp(exp), stmt(stmt)
	{};

};

///TODO 可以携带最终计算值
struct BrkStmt : public Stmt
{
	Exp* exp;

	BrkStmt(): Stmt(StmtEnm::Brk)
	{};

	//break(2)是可以的
	BrkStmt(Exp * exp): Stmt(StmtEnm::Brk), exp(exp)
	{};
};

struct CntnStmt : public Stmt
{
	Exp* exp;

	CntnStmt(): Stmt(StmtEnm::Cntn)
	{};

	//可以使用continue(2)语句
	CntnStmt(Exp* exp): Stmt(StmtEnm::Cntn), exp(exp)
	{};
};

struct FcnStmt : public Stmt
{
	Fcn* fcn;

	FcnStmt(Fcn* fcn): Stmt(StmtEnm::DfnFcn), fcn(fcn)
	{};
};

struct ClsStmt : public Stmt
{
	ClsStrc* cls;

	ClsStmt(ClsStrc* cls): Stmt(StmtEnm::Cls), cls(cls)
	{};

};

struct StmtBlkStrc : public Stmt
{
	vector<Stmt*> stmtArr;

	StmtBlkStrc(): Stmt(StmtEnm::Blk)
	{};
};

struct RtnStmt : public Stmt {
	int blnRslt;
	Exp* exp;

	RtnStmt(Exp *exp): Stmt(StmtEnm::Rtn), exp(exp)
	{};

	RtnStmt(Exp *exp, int rslt): Stmt(StmtEnm::Rtn), exp(exp), blnRslt(rslt)
	{};

};

struct VarStmt : public Stmt
{
	struct AsnLstStrc* asnLst;

	VarStmt(AsnLstStrc *lst): Stmt(StmtEnm::Var), asnLst(lst)
	{};

	VarStmt():Stmt(StmtEnm::Var)
	{};

};

struct VarStmtStrc2 : public Stmt
{
	std::map<string, Exp*> asnLst;


};

struct GlbStmtStrc : public Stmt
{
	AsnLstStrc* asnLst;

	GlbStmtStrc(): Stmt(StmtEnm::Glb)
	{};

	GlbStmtStrc(AsnLstStrc* asgnLst): Stmt(StmtEnm::Glb), asnLst(asgnLst)
	{};

};

struct NlStmtStrc : public Stmt
{
	NlStmtStrc(): Stmt(StmtEnm::Nl)
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
struct Fcn
{
	string nm;
	PrmLstStrc* prm;
	Stmt* stmt;

	Fcn(string nm, PrmLstStrc* prm, Stmt* stmt): nm(nm), prm(prm), stmt(stmt)
	{};

};


//变量环境结构体

struct Envr
{

	EnvrEnm typ;

	vector<VrbStrc*> vrbArr;

	vector<Fcn*> fcnArr;

	vector<NtvFcnStrc*> ntvFcnArr;

	//用于保存全局变量，只在顶层空间中有效
	vector<VrbStrc*> glbArr;

	vector<ClsStrc*> clsArr;

public:
	Envr()
	{
	}
	Envr(EnvrEnm typ)
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
	vector<Exp*> elmtArr;
};

//数组定位列表
struct PsnLstStrc
{
	//int pstnSz;
	//int pstnCnt;

	vector<Exp*> pstnArr;
};

/// <summary>
/// 数组引用的结构体，引用方式可以是直接指定索引数值或者提供切片
/// </summary>
struct AcsStrc
{
	// 1 数组取值为切片 0 数组取值为指定元素
	int blnSlc;

	Exp* pstn;
	Exp* strt;
	Exp* end;
	Exp* stp;
};

//数组评估列表，acsLst中的每个元素是指某一层的访问索引或切片
struct AcsLstStrc
{

	vector<AcsStrc*> acsLst;

};

//函数形参列表
struct PrmLstStrc
{

	vector<VrbExp*> prmArr;
	vector<Exp*> expArr;
};


//函数实参列表
struct ArgLstStrc
{
	vector <VrbExp*> prmArr;
	vector <Exp*> argArr;
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


vector<Envr*> envr;

#endif