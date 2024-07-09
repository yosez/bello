#pragma once

#include <stdio.h>
#include <vector>
#include <string>


using namespace std;

struct VrbStrc;
struct VrbExpStrc;
struct CnstStrc;
struct FcnExpStrc;
struct VrbDfnStrc;
struct UnrExpStrc;
struct BnrExpStrc;
struct LvlExpStrc;
struct ExpStrc;
struct PrtStmtStrc;
struct IfStmtStrc;
struct ForStmtStrc;
struct WhlStmtStrc;
struct DoWhlStmtStrc;
struct BrkStmtStrc;
struct CntnStmtStrc;
struct RtnStmtStrc;
struct StmtBlkStrc;
struct StmtStrc;
struct RtnRsltStrc;
struct BrkRsltStrc;
struct CntnRsltStrc;
struct StmtRsltStrc;
struct FcnStrc;
struct EnvrStrc;
struct PrmLstStrc;
struct ArgLstStrc;
struct VrbLstStrc;
struct PstnLstStrc;
struct ArrStrc;
struct ArrEvlExpStrc;
struct ElmtAsgnExpStrc;
struct NtvFcnStrc;
struct VarStmtStrc;

//typedef struct CnstStrc* ntvFcnDfn(struct EnvrStrc* envr, int prmCnt, vector <CnstStrc*> prmArr);
typedef struct CnstStrc* ntvFcnDfn(vector<EnvrStrc*>& envr, int prmCnt, vector <CnstStrc*> prmArr);


//struct EnvrStrc* glbEnvr;


union VlUnn
{
	int bln;
	float flt;
	int intVl;
	//string *str;
	string str;
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
	PRINT_STATEMENT = 1,
	EXPRESSION_STATEMENT,
	IF_STATEMENT,
	IF_ELSE_STATEMENT,
	FOR_STATEMENT,
	WHILE_STATEMENT,
	DO_WHILE_STATEMENT,
	STATEMENT_BLOCK,
	BREAK_STATEMENT,
	CONTINUE_STATEMENT,
	FUNCTION_DEFINE_STATEMENT,
	RETURN_STATEMENT,
	VAR_STATEMENT,
	NULL_STATEMENT
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


struct VrbStrc
{
	string nm;
	int typ;
	union VlUnn vl;

	//public:
	//	VrbStrc();
};

struct VrbExpStrc
{
	string nm;
};

struct CnstStrc
{
	int CnstTyp;
	union VlUnn vl;

public:
	CnstStrc()
	{
	}
};

struct AsgnExpStrc
{
	struct ExpStrc* lvl;
	struct ExpStrc* exp;
};

struct BnrExpStrc
{
	int oprTyp;
	struct ExpStrc* lftExp, * rghtExp;
};

struct UnrExpStrc
{
	int oprTyp;
	struct ExpStrc* exp;
};

struct FcnExpStrc
{
	string nm;

	struct ArgLstStrc* argLst;
};


struct GlbAsgnExpStrc
{
	struct AsgnLstStrc* asgnLst;
};

struct LclAsgnExpStrc
{
	struct AsgnLstStrc* asgnLst;
};

//read函数结构体
struct RdExpStrc
{
	int typ;
};

//数组定义结构体
struct ArrExpStrc
{
	struct ElmtLstStrc* elmtLst;
};

//数组取用结构体
struct ArrEvlExpStrc
{
	// 0: 标识符数组变量 1: 数组表达式
	int blnArr;

	struct ExpStrc* arr;

	struct AcsLstStrc* evlLst;
};

struct LvlExpStrc
{
	int hasAcsLst;
	struct ExpStrc* vrb;
	struct AcsLstStrc* acs;
};

// struct ArrEvlExpStrc
// {
//     // 0: 标识符数组变量 1: 数组表达式
//     int blnArr;

//     struct ExpStrc *arr;

//     struct PstnLstStrc * pstnLst;
// };

struct NewArrExpStrc
{
	struct ExpStrc* cnt;
};

//数组元素赋值表达式结构体
struct ElmtAsgnExpStrc
{
	struct ExpStrc* arr;

	struct PstnLstStrc* pstnLst;

	struct ExpStrc* vl;
};

struct ExpStrc
{
	int typ;
	union
	{
		struct CnstStrc* cnst;
		struct VrbExpStrc* vrbExp;
		struct BnrExpStrc* bnrExp;
		struct UnrExpStrc* unrExp;
		struct AsgnExpStrc* asgnExp;
		struct FcnExpStrc* fcnExp;
		struct GlbAsgnExpStrc* glbAsgnExp;
		struct LclAsgnExpStrc* lclAsgnExp;
		struct RdExpStrc* rdExp;
		struct ArrExpStrc* arrExp;
		struct ArrEvlExpStrc* arrEvlExp;
		struct ElmtAsgnExpStrc* elmtAsgnExp;
		struct NewArrExpStrc* newArrExp;
		struct LvlExpStrc* lvlExp;
	} exp;
};

struct ExpStmtStrc
{
	struct ExpStrc* exp;
};

struct PrtStmtStrc
{
	int typ;
	struct ExpStrc* exp;
};

struct IfStmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;
};

struct IfElsStmtStrc
{
	struct ExpStrc* exp;
	struct StmtStrc* stmt;
	struct StmtStrc* elsStmt;
};

struct ForStmtStrc
{
	struct StmtStrc* intl;
	struct StmtStrc* exp;
	struct StmtStrc* itr;
	struct StmtStrc* stmt;
};

struct WhlStmtStrc
{
	struct StmtStrc* exp;
	struct StmtStrc* stmt;
};

struct DoWhlStmtStrc
{
	struct StmtStrc* exp;
	struct StmtStrc* stmt;
};

struct BrkStmtStrc
{
	struct ExpStrc* exp;
};

struct CntnStmtStrc
{
	struct ExpStrc* exp;
};

struct FcnStmtStrc
{
	struct FcnStrc* fcn;
};

struct StmtBlkStrc
{
	vector<StmtStrc*> stmtArr;
};

struct RtnStmtStrc
{
	int blnRslt;
	struct ExpStrc* exp;
};

struct VarStmtStrc
{
	struct AsgnLstStrc* asgnLst;
};

struct StmtStrc
{
	int typ;
	union
	{
		struct ExpStmtStrc* expStmt;
		struct IfStmtStrc* ifStmt;
		struct IfElsStmtStrc* ifElsStmt;
		struct ForStmtStrc* forStmt;
		struct WhlStmtStrc* whlStmt;
		struct DoWhlStmtStrc* doWhlStmt;
		struct BrkStmtStrc* brkStmt;
		struct CntnStmtStrc* cntnStmt;
		struct PrtStmtStrc* prtStmt;
		struct StmtBlkStrc* stmtBlk;
		struct FcnStmtStrc* fcnStmt;
		struct RtnStmtStrc* rtnStmt;
		struct VarStmtStrc* varStmt;
	} stmt;
};

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
	struct EnvrStrc* envr;
	struct PrmLstStrc* prmLst;
	struct StmtStrc* stmt;
};


//变量环境结构体

struct EnvrStrc
{

	EnvrTyp typ;

	//int vrbSz, vrbCnt;
	vector<VrbStrc*> vrbArr;

	//int fcnSz, fcnCnt;
	vector<FcnStrc*> fcnArr;

	//int ntvFcnSz, ntvFcnCnt;
	vector<NtvFcnStrc*> ntvFcnArr;

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
	//int elmtSz;
	//int elmtCnt;

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
	//int prmSz;
	//int prmCnt;

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
	//int asgnSz;
	//int asgnCnt;

	vector<ExpStrc*> asgnArr;
};

struct NtvFcnStrc
{
	string fcnNm;
	int prmCnt;
	ntvFcnDfn* fcn;
};


vector<EnvrStrc*> envr;

