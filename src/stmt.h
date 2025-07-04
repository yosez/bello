#pragma once

#ifndef STMT_H
#define STMT_H

#include <stdio.h>
#include <chrono>
#include "dftn.h"
#include "expt.h"
#include "exp.h"
#include "vrb.h"

extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);
extern int chkStmtAlwScndStmt(struct StmtStrc* stmt);
extern int asgnVrb(struct VrbStrc* vrb, struct CnstStrc* vl);
extern StmtStrc* lstStmt;
extern ExpStrc* bldVrbExp(char* idtf);
extern CnstStrc* clcExp(vector<EnvrStrc*>& envr, struct ExpStrc* exp);
extern VrbStrc* getVrb(vector<EnvrStrc*>& envr, struct VrbExpStrc* vrbExp);
extern VrbStrc* addVrb(struct EnvrStrc* envr, struct VrbExpStrc* vrbExp);
extern VrbStrc* addVrbGlb(vector<EnvrStrc*>& envr, VrbExpStrc* vrbExp);
extern ExpStrc* bldFcnExp(char* nm, struct ArgLstStrc* argLst);
extern FcnStrc* getFcn(vector<EnvrStrc*> envr, struct FcnExpStrc* fcnExp);
extern int addFcn(struct EnvrStrc* envr, struct FcnStrc* fcn);

//语句系列函数，参数为语句的内容部分，如创建if语句结构体的bldIfStmt函数的参数exp为if的条件表达式，stmt参数为if的条件为真执行的语句块
StmtStrc* bldExpStmt(struct ExpStrc* exp);
StmtStrc* bldIfStmt(struct ExpStrc* exp, struct StmtStrc* stmt);
StmtStrc* bldElsStmt();
StmtStrc* bldElsStmt(struct StmtStrc* stmt);
StmtStrc* bldIfElsStmt(struct ExpStrc* exp, struct StmtStrc* stmt, struct StmtStrc* elsStmt);
StmtStrc* bldElifStmt(struct ExpStrc* exp);
StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr, struct StmtStrc* stmt);
StmtStrc* bldWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt);
StmtStrc* bldDoWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt);
StmtStrc* bldStmtBlk();
StmtStrc* stmtBlkAdd(struct StmtStrc* stmtBlk, struct StmtStrc* stmt);
StmtStrc* bldBrkStmt(struct ExpStrc* exp);
StmtStrc* bldCntnStmt(struct ExpStrc* exp);
StmtStrc* bldFcnStmt(struct FcnStrc* fcn);
StmtStrc* bldRtnStmt(struct ExpStrc* exp);
StmtStrc* bldVarStmt(struct AsgnLstStrc* asgnLst);
StmtStrc* bldVarStmt(int typ, struct AsgnLstStrc* asgnLst);
StmtStrc* bldGlbStmt(AsgnLstStrc* asgnLst);
StmtStrc* bldNllStmt();
StmtStrc* bldClsStmt(struct ClsStrc* cls);

StmtStrc* bldIfStmt(struct ExpStrc* exp);
StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr);
StmtStrc* bldWhlStmt(struct StmtStrc* exp);
StmtStrc* bldWhlStmt();
StmtStrc* bldElsStmt();



struct StmtRsltStrc* exctStmt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct StmtStrc* stmt);

struct StmtStrc* bldExpStmt(struct ExpStrc* exp)
{
	struct ExpStmtStrc* rslt = new ExpStmtStrc;

	rslt->typ = StmtEnm::Exp;

	rslt->exp = exp;

	return rslt;
}

struct StmtStrc* bldIfStmt(struct ExpStrc* exp)
{
	struct IfStmtStrc* rslt = new IfStmtStrc;

	rslt->typ = StmtEnm::If;

	rslt->exp = exp;
	rslt->stmt = nullptr;

	return rslt;
}

struct StmtStrc* bldIfStmt(struct ExpStrc* exp, struct StmtStrc* stmt)
{
	struct IfStmtStrc* rslt = new IfStmtStrc;

	rslt->typ = StmtEnm::If;

	rslt->exp = exp;
	rslt->stmt = stmt;

	rslt->expRslt = 0;

	//rslt->els = nullptr;

	return rslt;
}

struct StmtStrc* bldElsStmt(struct StmtStrc* stmt)
{
	struct ElsStmtStrc* rslt = new ElsStmtStrc;

	rslt->typ = StmtEnm::Els;

	rslt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldElsStmt()
{
	struct ElsStmtStrc* rslt = new ElsStmtStrc;

	rslt->typ = StmtEnm::Els;

	rslt->stmt = nullptr;

	return rslt;
}


struct StmtStrc* bldElifStmt(struct ExpStrc* exp)
{
	struct ElifStmtStrc* rslt = new ElifStmtStrc;

	rslt->typ = StmtEnm::Elsif;

	rslt->exp = exp;

	rslt->stmt = nullptr;

	rslt->expRslt = 0;

	return rslt;
}


struct StmtStrc* bldIfElsStmt(struct ExpStrc* exp, struct StmtStrc* stmt, struct StmtStrc* elsStmt)
{
	struct IfElsStmtStrc* rslt = new IfElsStmtStrc;

	rslt->typ = StmtEnm::IfEls;

	rslt->exp = exp;
	rslt->stmt = stmt;
	rslt->elsStmt = elsStmt;

	return rslt;
}

struct StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr, struct StmtStrc* stmt)
{
	struct ForStmtStrc* rslt = new ForStmtStrc;

	rslt->typ = StmtEnm::For;

	rslt->intl = intl;
	rslt->exp = exp;
	rslt->itr = itr;
	rslt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr)
{
	struct ForStmtStrc* rslt = new ForStmtStrc;

	rslt->typ = StmtEnm::For;

	rslt->intl = intl;
	rslt->exp = exp;
	rslt->itr = itr;
	rslt->stmt = nullptr;

	return rslt;
}

struct StmtStrc* bldWhlStmt(struct ExpStrc* exp, struct StmtStrc* stmt)
{
	struct WhlStmtStrc* rslt = new WhlStmtStrc;

	rslt->typ = StmtEnm::Whl;

	rslt->exp = exp;
	rslt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldWhlStmt(struct ExpStrc* exp)
{
	struct WhlStmtStrc* rslt = new WhlStmtStrc;

	rslt->typ = StmtEnm::Whl;

	rslt->exp = exp;
	rslt->stmt = nullptr;

	return rslt;
}

struct StmtStrc* bldWhlStmt()
{
	auto rslt = new WhlStmtStrc;

	rslt->typ = StmtEnm::Whl;

	rslt->exp = nullptr;

	rslt->stmt = nullptr;

	return rslt;
}

struct StmtStrc* bldDoWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt)
{
	struct DoWhlStmtStrc* rslt = new DoWhlStmtStrc;

	rslt->typ = StmtEnm::DoWhl;

	rslt->exp = static_cast<ExpStmtStrc*>(exp);
	rslt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldStmtBlk()
{
	struct StmtBlkStrc* rslt = new StmtBlkStrc;

	rslt->typ = StmtEnm::Blk;

	return rslt;
}

struct StmtStrc* stmtBlkAdd(struct StmtStrc* stmtBlk, struct StmtStrc* stmt)
{
	StmtBlkStrc* blk;

	blk = static_cast<StmtBlkStrc*>(stmtBlk);

	blk->stmtArr.push_back(stmt);

	return blk;
}

struct StmtStrc* bldBrkStmt(struct ExpStrc* exp)
{
	struct BrkStmtStrc* rslt = new BrkStmtStrc;

	rslt->typ = StmtEnm::Brk;

	rslt->exp = exp;

	return rslt;
}

struct StmtStrc* bldCntnStmt(struct ExpStrc* exp)
{
	struct CntnStmtStrc* rslt = new CntnStmtStrc;

	rslt->typ = StmtEnm::Cntn;

	rslt->exp = exp;

	return rslt;
}

struct StmtStrc* bldFcnStmt(struct FcnStrc* fcn)
{
	struct FcnStmtStrc* rslt = new FcnStmtStrc;

	rslt->typ = StmtEnm::DfnFcn;

	rslt->fcn = fcn;

	return rslt;
}

struct StmtStrc* bldRtnStmt(struct ExpStrc* exp)
{
	struct RtnStmtStrc* rslt = new RtnStmtStrc;

	rslt->typ = StmtEnm::Rtn;

	if (exp == NULL)
	{
		rslt->blnRslt = 0;
		rslt->exp = NULL;
	}
	else
	{
		rslt->blnRslt = 1;
		rslt->exp = exp;
	}

	return rslt;
}

struct StmtStrc* bldVarStmt(struct AsgnLstStrc* asgnLst)
{
	struct VarStmtStrc* rslt = new VarStmtStrc;

	rslt->typ = StmtEnm::Var;

	rslt->asgnLst = asgnLst;

	return rslt;

}

struct StmtStrc* bldVarStmt(int typ, struct AsgnLstStrc* asgnLst)
{
	struct VarStmtStrc* rslt = new VarStmtStrc;

	rslt->typ = StmtEnm::Var;

	rslt->asgnLst = asgnLst;

	return rslt;

}

struct StmtStrc* bldGlbStmt(AsgnLstStrc* asgnLst)
{

	GlbStmtStrc* rslt = new GlbStmtStrc;

	rslt->typ = StmtEnm::Glb;

	rslt->asgnLst = asgnLst;

	return rslt;
}

struct StmtStrc* bldNllStmt()
{
	NllStmtStrc* rslt = new NllStmtStrc;
	rslt->typ = StmtEnm::Nll;

	return rslt;
}

struct StmtStrc* bldClsStmt(ClsStrc* cls)
{
	struct ClsStmtStrc* rslt = new ClsStmtStrc;

	rslt->typ = StmtEnm::Cls;

	rslt->cls = cls;

	return rslt;
}


struct StmtRsltStrc* exctStmt(vector<EnvrStrc*>& envr, struct StmtStrc* stmt)
{
	struct StmtRsltStrc* rslt = new StmtRsltStrc;

	rslt->typ = RtnEnm::Nrm;

	if (chkStmtAlwScndStmt(stmt) == 0 || chkStmtAlwScndStmt(stmt) == 1)
	{
		while (mltStmtStk.size() > 0 && mltStmtStk.back()->indt >= stmt->indt)
		{
			mltStmtStk.pop_back();
		}
	}
	//else if (chkStmtAlwScndStmt(stmt) == 1)
	//{
	//	while (mltStmtStk.size() > 0 && mltStmtStk.back()->indt >= stmt->indt)
	//	{
	//		mltStmtStk.pop_back();
	//	}
	//}
	else if (chkStmtAlwScndStmt(stmt) == 2 || chkStmtAlwScndStmt(stmt) == 3)
	{
		while (mltStmtStk.size() > 0 && mltStmtStk.back()->indt > stmt->indt)
		{
			mltStmtStk.pop_back();
		}
	}

	try
	{

		if (stmt->typ == StmtEnm::Exp)
		{
			struct CnstStrc* rsltExp;

			rsltExp = clcExp(envr, static_cast<ExpStmtStrc*>(stmt)->exp);

		}

		if (stmt->typ == StmtEnm::Var)
		{
			VarStmtStrc* varStmt = static_cast<VarStmtStrc*>(stmt);

			struct VrbStrc* vrb;

			int i;

			for (i = 0; i < varStmt->asgnLst->asgnArr.size(); i++)
			{
				struct CnstStrc* rslt;
				struct VrbExpStrc* vrbExp;

				vrbExp = varStmt->asgnLst->asgnArr[i]->lvl->vrb;

				if ((vrb = getVrb(envr, vrbExp)) == NULL)
				{
					vrb = addVrb(envr[envr.size() - 1], vrbExp);
				}
				else
				{
					throw new ExVrbRdfn();
				}

				if (varStmt->asgnLst->asgnArr[i]->exp->typ != NULL_EXPRESSION)
				{
					rslt = clcExp(envr, varStmt->asgnLst->asgnArr[i]->exp);
					asgnVrb(vrb, rslt);
				}
				else
				{
					asgnVrb(vrb, bldNllCnst());
					//rslt = bldNllCnst();

				}
			}


			return rslt;
		}

		if (stmt->typ == StmtEnm::Glb)
		{
			GlbStmtStrc* glbStmt = static_cast<GlbStmtStrc*>(stmt);

			struct VrbStrc* vrb;

			//获取glb语句声明全局变量的个数
			int lnt = glbStmt->asgnLst->asgnArr.size();

			struct VrbExpStrc* glb;

			//检查变量是否已经被定义过
			for (int i = 0; i < lnt; i++)
			{
				glb = glbStmt->asgnLst->asgnArr[i]->lvl->vrb;

				vrb = getVrb(envr, glb);

				if (vrb != NULL)
				{
					throw new ExVrbRdfn();
				}

				vrb = addVrbGlb(envr, glb);

				CnstStrc* vl = clcExp(envr, glbStmt->asgnLst->asgnArr[i]->exp);

				asgnVrb(vrb, vl);
			}

			printf("glb dfnd\n");


			return rslt;
		}

		if (stmt->typ == StmtEnm::If)
		{
			auto ifStmt = static_cast<IfStmtStrc*>(stmt);

			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			//printf("clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl: %d\n", clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl);

			if ((ifStmt->expRslt = clcExp(envr, ifStmt->exp)->vl.intVl) != 0)
			{
				rslt = exctStmt(envr, ifStmt->stmt);
			}
			//else if (ifStmt->els != nullptr)
			//{
			//	rslt = exctStmt(envr, ifStmt->els);
			//}
			//else if (ifStmt->elif != nullptr)
			//{
			//	rslt = exctStmt(envr, ifStmt->elif);
			//}

			//删除创建的环境
			envr.pop_back();

			//语句加入多主句语句栈
			mltStmtStk.push_back(stmt);

		}

		if (stmt->typ == StmtEnm::Els)
		{

			auto elsStmt = static_cast<ElsStmtStrc*>(stmt);

			auto lstStmt = mltStmtStk.back();

			if (lstStmt->typ == StmtEnm::If)
			{
				//如果上句已经执行
				if (static_cast<IfStmtStrc*>(lstStmt)->expRslt == 1)
				{

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}

			if (lstStmt->typ == StmtEnm::Elsif)
			{
				//如果上句已经执行
				if (static_cast<ElifStmtStrc*>(lstStmt)->expRslt == 1)
				{

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}


			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			rslt = exctStmt(envr, elsStmt->stmt);

			envr.pop_back();
		}

		if (stmt->typ == StmtEnm::Elsif)
		{

			auto elifStmt = static_cast<ElifStmtStrc*>(stmt);

			auto lstStmt = mltStmtStk.back();

			if (lstStmt->typ == StmtEnm::If)
			{
				//如果上句已经执行
				if (static_cast<IfStmtStrc*>(lstStmt)->expRslt == 1)
				{
					//本句赋值为无需执行的状态
					elifStmt->expRslt = 1;

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}

			if (lstStmt->typ == StmtEnm::Elsif)
			{
				//如果上句已经执行
				if (static_cast<ElifStmtStrc*>(lstStmt)->expRslt == 1)
				{
					//本句赋值为无需执行的状态
					elifStmt->expRslt = 1;

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}



			CnstStrc* expRslt = nullptr;
			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			if ((elifStmt->expRslt = clcExp(envr, elifStmt->exp)->vl.intVl) != 0)
			{
				rslt = exctStmt(envr, elifStmt->stmt);
			}

			envr.pop_back();

			//语句加入多主句语句栈
			mltStmtStk.push_back(stmt);

		}

		if (stmt->typ == StmtEnm::IfEls)
		{
			//prtCnst(clcExp(stmt->stmt.ifStmt->exp)); 

			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			auto ifStmt = static_cast<IfElsStmtStrc*>(stmt);

			if ((clcExp(envr, ifStmt->exp)->vl.intVl) != 0)
			{
				rslt = exctStmt(envr, ifStmt->stmt);
			}
			else
			{
				rslt = exctStmt(envr, ifStmt->elsStmt);
			}

			//删除创建的环境
			envr.pop_back();
		}

		if (stmt->typ == StmtEnm::For)
		{
			std::chrono::steady_clock::time_point tmStrt;
			tmStrt = std::chrono::steady_clock::now();

			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			auto forStmt = static_cast<ForStmtStrc*>(stmt);

			rslt = exctStmt(envr, forStmt->intl);

			while ((clcExp(envr, static_cast<ExpStmtStrc*>(forStmt->exp)->exp)->vl.intVl) != 0)
			{
				//上一次循环中使用了continue语句
				if (rslt->typ == RtnEnm::Cntn)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					exctStmt(envr, forStmt->itr);

					continue;
				}

				rslt = exctStmt(envr, forStmt->stmt);

				if (rslt->typ == RtnEnm::Rtn)
				{
					break;
				}

				if (rslt->typ == RtnEnm::Brk)
				{
					rslt->rslt.brkRslt->brkCnt--;

					if (rslt->rslt.brkRslt->brkCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					break;
				}

				if (rslt->typ == RtnEnm::Cntn)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					exctStmt(envr, forStmt->itr);

					continue;
				}

				exctStmt(envr, forStmt->itr);


			}

			//continue语句对本层循环有效
			if (rslt->typ == RtnEnm::Cntn)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = RtnEnm::Nrm;

			}

			envr.pop_back();

			std::chrono::steady_clock::time_point tmEnd;
			tmEnd = std::chrono::steady_clock::now();

			//printf("tm: %d\n", chrono::duration_cast<chrono::microseconds>(tmEnd - tmStrt));
		}

		if (stmt->typ == StmtEnm::Whl)
		{

			auto whlStmt = static_cast<WhlStmtStrc*>(stmt);

			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			while (whlStmt->exp == nullptr || clcExp(envr, (whlStmt->exp))->vl.intVl != 0)
			{
				if (rslt->typ == RtnEnm::Cntn)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					continue;
				}

				rslt = exctStmt(envr, whlStmt->stmt);

				if (rslt->typ == RtnEnm::Rtn)
				{
					break;
				}

				if (rslt->typ == RtnEnm::Brk)
				{
					rslt->rslt.brkRslt->brkCnt--;
					if (rslt->rslt.brkRslt->brkCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					break;
				}

				if (rslt->typ == RtnEnm::Cntn)
				{

					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					continue;
				}
			}

			if (rslt->typ == RtnEnm::Cntn)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = RtnEnm::Nrm;
			}

			envr.pop_back();
		}

		if (stmt->typ == StmtEnm::DoWhl)
		{
			auto doWhlStmt = static_cast<DoWhlStmtStrc*>(stmt);

			do
			{
				if (rslt->typ == RtnEnm::Cntn)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					continue;
				}

				rslt = exctStmt(envr, doWhlStmt);

				if (rslt->typ == RtnEnm::Rtn)
				{
					break;
				}

				if (rslt->typ == RtnEnm::Brk)
				{
					rslt->rslt.brkRslt->brkCnt--;

					if (rslt->rslt.brkRslt->brkCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					break;
				}

				if (rslt->typ == RtnEnm::Cntn)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = RtnEnm::Nrm;
					}

					continue;
				}
			} while (clcExp(envr, doWhlStmt->exp->exp)->vl.intVl != 0);

			if (rslt->typ == RtnEnm::Cntn)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = RtnEnm::Nrm;
			}

		}

		if (stmt->typ == StmtEnm::Blk)
		{
			auto stmtBlk = static_cast<StmtBlkStrc*>(stmt);

			envr.push_back(new EnvrStrc(STATEMENT_BLOCK_ENVIRONMENT));

			int i;

			for (i = 0; i < stmtBlk->stmtArr.size(); i++)
			{
				rslt = exctStmt(envr, stmtBlk->stmtArr[i]);

				if (rslt->typ == RtnEnm::Rtn)
				{
					break;
				}

				if (rslt->typ == RtnEnm::Brk || rslt->typ == RtnEnm::Cntn)
				{
					break;
				}
			}

			envr.pop_back();
		}

		if (stmt->typ == StmtEnm::Brk)
		{
			auto brkStmt = static_cast<BrkStmtStrc*>(stmt);

			rslt->typ = RtnEnm::Nrm;

			rslt->rslt.brkRslt = new BrkRsltStrc;

			rslt->rslt.brkRslt->brkCnt = clcExp(envr, brkStmt->exp)->vl.intVl;
		}

		if (stmt->typ == StmtEnm::Cntn)
		{
			auto cntnStmt = static_cast<CntnStmtStrc*>(stmt);

			rslt->typ = RtnEnm::Cntn;

			rslt->rslt.cntnRslt = new CntnRsltStrc;

			rslt->rslt.cntnRslt->cntnCnt = clcExp(envr, cntnStmt->exp)->vl.intVl;
		}

		if (stmt->typ == StmtEnm::DfnFcn)
		{
			auto fcnStmt = static_cast<FcnStmtStrc*>(stmt);

			if (getFcn(envr, static_cast<FcnExpStrc*>(bldFcnExp((char*)(fcnStmt->fcn->nm.c_str()), NULL))) != NULL)
			{
				throw new ExFcnRdfn;
			}

			if (getVrb(envr, static_cast<VrbExpStrc*>(bldVrbExp((char*)(fcnStmt->fcn->nm.c_str())))) != NULL)
			{
				throw new ExAlrdDfnAsVrb;
			}

			addFcn(envr[envr.size() - 1], fcnStmt->fcn);
		}

		if (stmt->typ == StmtEnm::Cls)
		{
			auto clsStmt = static_cast<ClsStmtStrc*>(stmt);

			ClsStrc* cls = clsStmt->cls;

			//遍历类定义语句，填充类定义
			StmtBlkStrc* blk = static_cast<StmtBlkStrc*>(clsStmt->cls->dfn);
			std::vector<StmtStrc*>& stmtArr = blk->stmtArr;

			for (int i = 0; i < blk->stmtArr.size(); i++)
			{
				switch (stmtArr.at(i)->typ)
				{
				case StmtEnm::Var:
				{
					for (int j = 0; j < static_cast<VarStmtStrc*>(stmtArr.at(i))->asgnLst->asgnArr.size(); j++)
					{
						VrbStrc* vrb = new VrbStrc;
						//获取变量名称
						vrb->nm = new string(static_cast<VarStmtStrc*>(stmtArr.at(i))->asgnLst->asgnArr.at(j)->lvl->vrb->nm);

						//获取变量值
						CnstStrc* expRslt = clcExp(envr, static_cast<VarStmtStrc*>(stmtArr.at(i))->asgnLst->asgnArr.at(j)->exp);

						printf("expRslt typ: %d cnst typ: %d\n", expRslt->typ, expRslt->CnstTyp);

						asgnVrb(vrb, expRslt);

						cls->vrb.push_back(vrb);
					}

					break;
				}
				case StmtEnm::DfnFcn:
				{
					//将函数定义语句添加到类结构体中
					cls->fcn.push_back(static_cast<FcnStmtStrc*>(stmtArr.at(i))->fcn);

					break;
				}
				}
			}

			//将类定义结构体添加到中环境中

			envr.back()->clsArr.push_back(cls);

			//printf("stmt: %s\n", envr.back()->clsArr[0]->nm->c_str());

			//printf("var: %s\n", envr.back()->clsArr.front()->vrb.front()->nm->c_str());
		}

		if (stmt->typ == StmtEnm::Rtn)
		{
			auto rtnStmt = static_cast<RtnStmtStrc*>(stmt);

			rslt->typ = RtnEnm::Rtn;

			rslt->rslt.rtnRslt = new RtnRsltStrc;

			rslt->rslt.rtnRslt->blnRslt = rtnStmt->blnRslt;

			if (rslt->rslt.rtnRslt->blnRslt == 1)
			{
				rslt->rslt.rtnRslt->rslt = clcExp(envr, rtnStmt->exp);
			}

		}

	}
	catch (ExVrbNotFnd* ex)
	{
		printf("Error: Variable not found.\n");
	}
	catch (ExVrbRdfn* ex)
	{
		printf("Error: Variable can't be redefined.");
	}
	catch (ExWrgOprndTyp* ex)
	{
		printf("Error: Operands not supported for the operation.\n");
	}
	catch (ExFcnNotFnd* ex)
	{
		printf("Error: Function not found.\n");
	}
	catch (ExFcnTooMnyArg* ex)
	{
		printf("Error: Too many arguments for calling the function.\n");
	}
	catch (ExFcnTooFewArg* ex)
	{
		printf("Error: Too few arguments for calling the function.\n");
	}
	catch (ExFcnRdfn* ex)
	{
		printf("Error: Function redefined.\n");
	}
	catch (ExAlrdDfnAsVrb* ex)
	{
		printf("Error: The name of the function has been defined as a variable.\n");
	}
	catch (ExAlrdDfnAsFctn* ex)
	{
		printf("Error: The name of the variable has been defined as a function.\n");
	}
	catch (ExNotAvlbArr* ex)
	{
		printf("Error: The variable isn't a available array.\n");
	}
	catch (ExIdxOutArrRng* ex)
	{
		printf("Error: The index given is out of range of the array.\n");
	}
	catch (ExClsNotDfn* ex)
	{
		printf("Error: The class is not defined.\n");
	}

	return rslt;
}

int chkStmtAlwSubStmt(struct StmtStrc* stmt)
{
	switch (stmt->typ)
	{
	case StmtEnm::If:
	case StmtEnm::For:
	case StmtEnm::Whl:
	case StmtEnm::DoWhl:
	case StmtEnm::DfnFcn:
	case StmtEnm::Els:
	case StmtEnm::Cls:
	case StmtEnm::Elsif:
	{
		return 1;
		break;
	}
	default:
	{
		return 0;
	}

	}
}

int chkStmtAlwScndStmt(struct StmtStrc* stmt)
{
	switch (stmt->typ)
	{
		//多主句起始语句
	case StmtEnm::If:
	case StmtEnm::DoWhl:
	{
		return 1;
		break;
	}
	//多主句中间语句
	case StmtEnm::Elsif:
	{
		return 2;
		break;
	}
	//多主句结束语句
	case StmtEnm::Els:
	{
		return 3;
		break;
	}
	default:
	{
		return 0;
	}

	}
}

#endif