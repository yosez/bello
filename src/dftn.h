#pragma once

#ifndef DFTN_H
#define DFTN_H


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
struct NllStmtStrc;
struct ExpStmtStrc;
struct StmtStrc;


struct RtnRsltStrc;
struct BrkRsltStrc;
struct CntnRsltStrc;
struct StmtRsltStrc;
struct PrmLstStrc;
struct ArgLstStrc;
struct VrbLstStrc;
struct PstnLstStrc;
struct ArrStrc;
struct ArrEvlExpStrc;
struct ElmtAsgnExpStrc;
struct NtvFcnStrc;
struct VarStmtStrc;
struct VarStmtStrc2;
struct StmtStkItmStrc;

typedef struct ValStrc* ntvFcnDfn(vector<EnvrStrc*>& envr, int prmCnt, vector <ValStrc*> prmArr);


int lstIndt = 0;

union ValUnn
{
	int bln;
	float flt;
	int int_;
	string* str;
	struct ArrStrc* arr;
	struct ObjStrc* obj;

public:
	ValUnn()
	{
	}

	ValUnn(ValUnn &&val)
	{
		memcpy(this, &val, sizeof(ValUnn));
	}

	~ValUnn()
	{
	}

	//平凡拷贝构造
	ValUnn(const ValUnn &val)=default;


};

// enum ExpTyp
// {
// 	ExpEnm::Cnst = 1,
// 	ExpEnm::Vrb,
// 	ExpEnm::Bnr,
// 	ExpEnm::Tnr,
// 	ExpEnm::Asn,
// 	ExpEnm::Unr,
// 	ExpEnm::Fcn,
// 	VARIABLE_DEFINE_EXPRESSION,
// 	GLOBAL_ExpEnm::Asn,
// 	LOCAL_ExpEnm::Asn,
// 	ExpEnm::Nll,
// 	READ_EXPRESSION,
// 	ExpEnm::Arr,
// 	ARRAY_EVALUATE_EXPRESSION,
// 	ELEMENT_ExpEnm::Asn,
// 	NEW_ExpEnm::Arr,
// 	ExpEnm::Lvl,
// 	ExpEnm::New
// };

enum class ExpEnm
{
	Val = 1,
	Vrb,
	Bnr,
	Tnr,
	Asn,
	Unr,
	Fcn,
	Nll,
	Arr,
	ElmAsn,
	NewArr,
	Lvl,
	New,
};

enum class OprEnm
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
	SfxDec
};

enum class ValEnm : int
{
	Int = 1,
	Flt,
	Bln,
	Str,
	Nll,
	Arr,
	Obj
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
	Elsif,
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
	Nll,
	Cls
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



struct ClsStrc
{
	string* nm;
	vector<VrbStrc*> vrb;
	vector<FcnStrc*> fcn;
	vector<VrbStrc*> shrVrb;
	vector<FcnStrc*> shrFcn;

	StmtStrc* dfn;
};

struct ObjStrc
{

	vector<VrbStrc*> vrb;
	vector<FcnStrc*> fcn;

	ClsStrc* cls;
};


struct ExpStrc
{
public:
	ExpEnm typ;
};

struct VrbExpStrc :public ExpStrc
{
	string nm;
};

struct ValStrc
{
public:
	ValEnm typ;
	ValUnn v;

public:
	ValStrc()
	{
	};

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

	ValStrc operator -(ValStrc &o2)
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

	ValStrc operator *(ValStrc &o2)
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

	ValStrc operator/(ValStrc &o2)
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
			printf("%d, ", getInt(this));
			setInt(this, getInt(this)+1);
			printf("%d", getInt(this));
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

	//ValStrc operator
};

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
};

struct ValExpStrc: public ExpStrc
{
	ValStrc *val;
};



struct AsnExpStrc : public ExpStrc
{
	LvlExpStrc* lvl;
	ExpStrc* exp;
};

struct NewExpStrc :public ExpStrc
{
	string* nm;
	ArgLstStrc* arg;
};

struct BnrExpStrc : public ExpStrc
{
	OprEnm opr;
	ExpStrc* lft, * rgt;
};

struct UnrExpStrc : public ExpStrc
{
	OprEnm opr;
	struct LvlExpStrc* exp;
};

struct TnrExpStrc : public ExpStrc
{
	OprEnm opr;
	ExpStrc* frst, * scnd, * trd;
};

struct FcnExpStrc : public ExpStrc
{
	string nm;

	struct ArgLstStrc* argLst;
};



//数组定义结构体
struct ArrExpStrc :public ExpStrc
{
	struct ElmtLstStrc* elmtLst;
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
	int hasAcsLst;
	struct VrbExpStrc* vrb;
	struct AcsLstStrc* acs;

	int hasAtb;
	struct LvlExpStrc* atb;

	int hasFcn;
	struct FcnExpStrc* fcn;

	int blnIvk;
};


struct NewArrExpStrc :ExpStrc
{
	struct ExpStrc* cnt;
};

//数组元素赋值表达式结构体
struct ElmtAsgnExpStrc :ExpStrc
{
	struct ExpStrc* arr;

	struct PstnLstStrc* pstnLst;

	struct ExpStrc* vl;
};





struct ExpStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
};

struct IfStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;
	//struct StmtStrc* els;
	//struct StmtStrc* elif;
	int expRslt;
};

struct ElsStmtStrc :public StmtStrc
{
	struct StmtStrc* stmt;
};

struct ElifStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;

	int expRslt;
};

struct IfElsStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;
	struct StmtStrc* elsStmt;
};

struct ForStmtStrc : public StmtStrc
{
	struct StmtStrc* intl;
	struct StmtStrc* exp;
	struct StmtStrc* itr;
	struct StmtStrc* stmt;
};

struct WhlStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;
};

struct DoWhlStmtStrc : public StmtStrc
{
	struct ExpStmtStrc* exp;
	struct StmtStrc* stmt;
};

struct BrkStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
};

struct CntnStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
};

struct FcnStmtStrc : public StmtStrc
{
	struct FcnStrc* fcn;
};

struct ClsStmtStrc : public StmtStrc
{
	struct ClsStrc* cls;
};

struct StmtBlkStrc : public StmtStrc
{
	vector<StmtStrc*> stmtArr;
};

struct RtnStmtStrc : public StmtStrc
{
	int blnRslt;
	struct ExpStrc* exp;
};

struct VarStmtStrc : public StmtStrc
{
	struct AsgnLstStrc* asgnLst;
};

struct VarStmtStrc2 : public StmtStrc
{
	std::map<string, ExpStrc*> asgnLst;
};

struct GlbStmtStrc : public StmtStrc
{
	struct AsgnLstStrc* asgnLst;
};

struct NllStmtStrc : public StmtStrc
{

};


//return语句返回类型结构体
struct RtnRsltStrc
{
	int blnRslt;
	struct ValStrc* rslt;
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
	struct PrmLstStrc* prmLst;
	struct StmtStrc* stmt;
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
struct PstnLstStrc
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
struct AsgnLstStrc
{
	vector<AsnExpStrc*> asgnArr;
};

struct NtvFcnStrc
{
	string fcnNm;
	int prmCnt;
	ntvFcnDfn* fcn;
};


vector<EnvrStrc*> envr;

#endif