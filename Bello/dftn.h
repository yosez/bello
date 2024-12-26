#pragma once

#include <stdio.h>
#include <vector>
#include <string>
#include <stack>
#include <map>

using namespace std;

struct VrbStrc;
struct VrbExpStrc;
struct ClsStrc;
struct ObjStrc;
struct CnstStrc;
struct FcnStrc;
struct EnvrStrc;
struct FcnExpStrc;
struct VrbDfnStrc;
struct UnrExpStrc;
struct BnrExpStrc;
struct LvlExpStrc;
struct ExpStrc;

struct StmtStrc;
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

typedef struct CnstStrc* ntvFcnDfn(vector<EnvrStrc*>& envr, int prmCnt, vector <CnstStrc*> prmArr);


int lstIndt = 0;

union VlUnn
{
	int bln;
	float flt;
	int intVl;
	string* str;
	struct ArrStrc* arr;

public:
	VlUnn()
	{
	}

	~VlUnn()
	{
	}
};

enum ExpTyp
{
	CONST_EXPRESSION = 1,
	VARIABLE_EXPRESSION,
	BINARY_EXPRESSION,
	ASSIGN_EXPRESSION,
	UNARY_EXPRESSION,
	FUNCTION_EXPRESSION,
	VARIABLE_DEFINE_EXPRESSION,
	GLOBAL_ASSIGN_EXPRESSION,
	LOCAL_ASSIGN_EXPRESSION,
	NULL_EXPRESSION,
	READ_EXPRESSION,
	ARRAY_EXPRESSION,
	ARRAY_EVALUATE_EXPRESSION,
	ELEMENT_ASSIGN_EXPRESSION,
	NEW_ARRAY_EXPRESSION,
	LVALUE_EXPRESSION
};

enum VrbTyp
{
	INT = 1,
	FLOAT,
	BOOLEAN,
	STRING,
	NULL_TYPE,
	ARRAY
};


enum Unrtyp
{
	PREFIX_INCREMENT = 1,
	PREFIX_DECREMENT,
	SUFFIX_INCREMENT,
	SUFFIX_DECREMENT
};

enum StmtTyp
{
	EXPRESSION_STATEMENT = 1,
	IF_STATEMENT,
	IF_ELSE_STATEMENT,
	ELSE_STATEMENT,
	FOR_STATEMENT,
	WHILE_STATEMENT,
	DO_WHILE_STATEMENT,
	STATEMENT_BLOCK,
	BREAK_STATEMENT,
	CONTINUE_STATEMENT,
	FUNCTION_DEFINE_STATEMENT,
	RETURN_STATEMENT,
	VAR_STATEMENT,
	CLASS_VAR_STATEMENT,
	CLASS_FUNCTION_STATEMENT,
	CLASS_SHARED_VAR_STATEMENT,
	CLASS_SHARED_FUNCTION_STATEMENT,
	GLOBAL_STATEMENT,
	NULL_STATEMENT,
	CLASS_DEFINE_STATEMENT
};

enum StmtRsltTyp
{
	NORMAL_RESULT = 1,
	BREAK_RESULT,
	CONTINUE_RESULT,
	RETURN_RESULT
};

enum EnvrTyp
{
	TOP_LEVEL_ENVIRONMENT,
	FUNCTION_ENVIRONMENT,
	STATEMENT_BLOCK_ENVIRONMENT,
	STATEMENT_ENVIRONMENT
};



struct StmtStkItmStrc
{

	int indt;
	StmtStrc* stmt;
	int alwSubStmt = 0;
};

std::vector<StmtStkItmStrc*> stmtStk;

struct VrbStrc
{
	string nm;
	int typ;
	union VlUnn vl;

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

struct ObjStrc
{
	ClsStrc* cls;

	vector<VrbStrc*> vrb;
};

struct VrbExpStrc :ExpStrc
{
	string nm;
};

struct CnstStrc : ExpStrc
{
	int CnstTyp;
	union VlUnn vl;

public:
	CnstStrc()
	{
	};
};

struct AsgnExpStrc : ExpStrc
{
	struct ExpStrc* lvl;
	struct ExpStrc* exp;
};

struct BnrExpStrc : ExpStrc
{
	int oprTyp;
	struct ExpStrc* lftExp, * rghtExp;
};

struct UnrExpStrc : ExpStrc
{
	int oprTyp;
	struct ExpStrc* exp;
};

struct FcnExpStrc : ExpStrc
{
	string nm;

	struct ArgLstStrc* argLst;
};



//数组定义结构体
struct ArrExpStrc : ExpStrc
{
	struct ElmtLstStrc* elmtLst;
};

//数组取用结构体
struct ArrEvlExpStrc : ExpStrc
{
	// 0: 标识符数组变量 1: 数组表达式
	int blnArr;

	struct ExpStrc* arr;

	struct AcsLstStrc* evlLst;
};

struct LvlExpStrc : ExpStrc
{
	int hasAcsLst;
	struct ExpStrc* vrb;
	struct AcsLstStrc* acs;
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

struct ExpStrc
{
	int typ;
};

struct ExpStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
};

struct IfStmtStrc : public StmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;
	struct StmtStrc* els;
};

struct ElsStmtStrc :public StmtStrc
{
	struct StmtStrc* stmt;
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
	struct StmtStrc* exp;
	struct StmtStrc* stmt;
};

struct DoWhlStmtStrc : public StmtStrc
{
	struct StmtStrc* exp;
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

struct StmtStrc
{
	int typ;

	virtual ~StmtStrc();
};

//struct StmtStrc
//{
//	int typ;
//
//	StmtStrc* stmt;
//};

//return语句返回类型结构体
struct RtnRsltStrc
{
	int blnRslt;
	struct CnstStrc* rslt;
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
	int typ;
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

	EnvrTyp typ;

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
	EnvrStrc(EnvrTyp typ)
	{
		this->typ = typ;
	}
};

//数组结构体
struct ArrStrc
{

	vector<CnstStrc*> elmtArr;
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

	vector<ExpStrc*> prmArr;

};


//函数实参列表
struct ArgLstStrc
{
	//int argSz;
	//int argCnt;

	vector <ExpStrc*> argArr;
};

//赋值列表
struct AsgnLstStrc
{
	vector<ExpStrc*> asgnArr;
};

struct NtvFcnStrc
{
	string fcnNm;
	int prmCnt;
	ntvFcnDfn* fcn;
};


vector<EnvrStrc*> envr;

