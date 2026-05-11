#pragma once

#ifndef STMT_H
#define STMT_H

#include <stdio.h>
#include <chrono>
#include "dfn.h"
#include "ex.h"
#include "exp.h"
#include "vrb.h"

extern int chkStmtAlwSubStmt(Stmt* stmt);
extern int chkStmtAlwScndStmt(Stmt* stmt);
extern int asnVrbCpy(struct VrbStrc* vrb, struct ValStrc* vl);
extern Stmt* lstStmt;
extern Exp* bldVrbExp(char* idtf);
extern ValStrc* clcExp(vector<EnvrStrc*>& envr, struct Exp* exp);
extern VrbStrc* getVrb(vector<EnvrStrc*>& envr, struct VrbExp* vrbExp);
extern VrbStrc* addVrb(struct EnvrStrc* envr, struct VrbExp* vrbExp);
extern VrbStrc* addVrbGlb(vector<EnvrStrc*>& envr, VrbExp* vrbExp);
extern Exp* bldFcnExp(char* nm, struct ArgLstStrc* argLst);
extern FcnStrc* getFcn(vector<EnvrStrc*> envr, struct FcnExpStrc* fcnExp);
extern int addFcn(struct EnvrStrc* envr, struct FcnStrc* fcn);

//语句系列函数，参数为语句的内容部分，如创建if语句结构体的bldIfStmt函数的参数exp为if的条件表达式，stmt参数为if的条件为真执行的语句块
Stmt* bldExpStmt( Exp* exp);
Stmt* bldIfStmt(Exp* exp, Stmt* stmt);
Stmt* bldElsStmt();
Stmt* bldElsStmt(Stmt* stmt);
Stmt* bldIfElsStmt(Exp* exp, Stmt* stmt, Stmt* elsStmt);
Stmt* bldElifStmt(Exp* exp);
Stmt* bldForStmt(Stmt* intl, Stmt* exp, Stmt* itr, Stmt* stmt);
Stmt* bldWhlStmt(Stmt* exp, Stmt* stmt);
Stmt* bldDoWhlStmt( Stmt* exp, Stmt* stmt);
Stmt* bldStmtBlk();
Stmt* stmtBlkAdd(Stmt* stmtBlk, Stmt* stmt);
Stmt* bldBrkStmt(Exp* exp);
Stmt* bldCntnStmt(Exp* exp);
Stmt* bldFcnStmt(FcnStrc* fcn);
Stmt* bldRtnStmt(Exp* exp);
Stmt* bldVarStmt(AsnLstStrc* asnLst);
Stmt* bldVarStmt(int typ, AsnLstStrc* asgnLst);
Stmt* bldGlbStmt(AsnLstStrc* asnLst);
Stmt* bldNlStmt();
Stmt* bldClsStmt(ClsStrc* cls);

Stmt* bldIfStmt(Exp* exp);
Stmt* bldForStmt(Stmt* intl, Stmt* exp, Stmt* itr);
Stmt* bldWhlStmt(Stmt* exp);
Stmt* bldWhlStmt();
Stmt* bldElsStmt();

Stmt *bldForInitStmt(Exp* exp);
Stmt *bldForCdtnStmt(Exp * exp);
Stmt *bldForItrStmt(Exp *exp);




StmtRsltStrc* exctStmt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, Stmt* stmt);

Stmt* bldExpStmt(Exp* exp)
{
	struct ExpStmtStrc* rslt = new ExpStmtStrc(exp);

	rslt->typ = StmtEnm::Exp;

	rslt->exp = exp;

	return rslt;
}

Stmt* bldIfStmt(struct Exp* exp)
{
	IfStmt* rslt = new IfStmt(exp, nullptr);

	// rslt->typ = StmtEnm::If;
	//
	// rslt->exp = exp;
	// rslt->stmt = nullptr;

	return rslt;
}

Stmt* bldIfStmt(struct Exp* exp, Stmt* stmt)
{
	IfStmt* rslt = new IfStmt(exp, stmt, 0);

	// rslt->typ = StmtEnm::If;
	//
	// rslt->exp = exp;
	// rslt->stmt = stmt;
	//
	// rslt->expRslt = 0;

	//rslt->els = nullptr;

	return rslt;
}

Stmt* bldElsStmt(Stmt* stmt)
{
	struct ElsStmt* rslt = new ElsStmt(stmt);

	return rslt;
}

Stmt* bldElsStmt()
{
	struct ElsStmt* rslt = new ElsStmt(nullptr);

	return rslt;
}

Stmt *bldForInitStmt(Exp *exp)
{
	SglStmtStrc* stmt = new SglStmtStrc(exp);

	stmt->typ =StmtEnm::ForStmt;

	stmt->exp = exp;

	return stmt;
}

// StmtStrc *bldForCdtnStmt(VrbStrc *vrb, VrbStrc *vrb2, OpEnm op, CndStmtStrc* cnd, CndStmtStrc *cnd2)
// {
// 	CndStmtStrc *rsl = new CndStmtStrc(vrb, vrb2, op, cnd, cnd2);
//
// 	return rsl;
// }
//



Stmt* bldElifStmt(struct Exp* exp)
{
	ElifStmt* rslt = new ElifStmt(exp, nullptr, 0);


	return rslt;
}


// StmtStrc* bldIfElsStmt(struct ExpStrc* exp, StmtStrc* stmt, StmtStrc* elsStmt)
// {
// 	struct IfElsStmtStrc* rslt = new IfElsStmtStrc;
//
// 	rslt->typ = StmtEnm::IfEls;
//
// 	rslt->exp = exp;
// 	rslt->stmt = stmt;
// 	rslt->elsStmt = elsStmt;
//
// 	return rslt;
// }

Stmt* bldForStmt(Stmt* intl, Stmt* exp, Stmt* itr, Stmt* stmt)
{
	ForStmt* rslt = new ForStmt(intl, exp,  itr, stmt);

	return rslt;
}

Stmt* bldForStmt(Stmt* intl, Stmt* exp, Stmt* itr)
{
	ForStmt* rslt = new ForStmt(intl, exp, itr, nullptr);

	return rslt;
}

Stmt* bldWhlStmt(Exp* exp, Stmt* stmt)
{
	WhlStmt* rslt = new WhlStmt(exp, stmt);


	return rslt;
}

Stmt* bldWhlStmt(Exp* exp)
{
	WhlStmt* rslt = new WhlStmt(exp, nullptr);

	return rslt;
}

Stmt* bldWhlStmt()
{
	auto rslt = new WhlStmt(nullptr, nullptr);

	return rslt;
}

Stmt* bldDoWhlStmt(Stmt* exp, Stmt* stmt)
{
	DoWhlStmt* rslt = new DoWhlStmt(exp, stmt);

	return rslt;
}

Stmt* bldStmtBlk()
{
	StmtBlkStrc* rslt = new StmtBlkStrc;

	return rslt;
}

Stmt* stmtBlkAdd(Stmt* stmtBlk, Stmt* stmt)
{
	StmtBlkStrc* blk;

	blk = static_cast<StmtBlkStrc*>(stmtBlk);

	blk->stmtArr.push_back(stmt);

	return blk;
}

Stmt* bldBrkStmt(Exp* exp)
{
	BrkStmt* rslt = new BrkStmt(exp);

	return rslt;
}

Stmt* bldCntnStmt(struct Exp* exp)
{
	CntnStmt* rslt = new CntnStmt(exp);

	return rslt;
}

Stmt* bldFcnStmt(struct FcnStrc* fcn)
{
	FcnStmt* rslt = new FcnStmt(fcn);

	// rslt->typ = StmtEnm::DfnFcn;
	//
	// rslt->fcn = fcn;

	return rslt;
}

Stmt* bldRtnStmt(Exp* exp)
{
	RtnStmt* rslt = new RtnStmt(exp, exp==nullptr? 0:1);

	return rslt;
}

Stmt* bldVarStmt(AsnLstStrc* asnLst)
{
	VarStmt* rslt = new VarStmt(asnLst);


	return rslt;

}

Stmt* bldVarStmt(int typ, struct AsnLstStrc* asgnLst)
{
	struct VarStmt* rslt = new VarStmt;

	return rslt;

}

Stmt* bldGlbStmt(AsnLstStrc* asnLst)
{

	GlbStmtStrc* rslt = new GlbStmtStrc(asnLst);

	return rslt;
}

Stmt* bldNlStmt()
{
	NlStmtStrc* rslt = new NlStmtStrc();
	//rslt->typ = StmtEnm::Nll;

	return rslt;
}

Stmt* bldClsStmt(ClsStrc* cls)
{
	ClsStmt* rslt = new ClsStmt(cls);

	// rslt->typ = StmtEnm::Cls;
	//
	// rslt->cls = cls;

	return rslt;
}


struct StmtRsltStrc* exctStmt(vector<EnvrStrc*>& envr, Stmt* stmt)
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
			struct ValStrc* rsltExp;

			rsltExp = clcExp(envr, static_cast<ExpStmtStrc*>(stmt)->exp);

		}

		if (stmt->typ == StmtEnm::Var)
		{
			VarStmt* varStmt = static_cast<VarStmt*>(stmt);

			struct VrbStrc* vrb;

			int i;

			for (i = 0; i < varStmt->asnLst->asgnArr.size(); i++)
			{
				struct ValStrc* rslt;
				struct VrbExp* vrbExp;

				vrbExp = varStmt->asnLst->asgnArr[i]->lvl->vrb;

				if ((vrb = getVrb(envr, vrbExp)) == NULL)
				{
					vrb = addVrb(envr[envr.size() - 1], vrbExp);
				}
				else
				{
					throw new ExVrbRdfn();
				}

				if (varStmt->asnLst->asgnArr[i]->exp->typ != ExpEnm::Nl)
				{
					rslt = clcExp(envr, varStmt->asnLst->asgnArr[i]->exp);
					asnVrbCpy(vrb, rslt);
				}
				else
				{
					asnVrbCpy(vrb, bldNlVal());
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
			int lnt = glbStmt->asnLst->asgnArr.size();

			struct VrbExp* glb;

			//检查变量是否已经被定义过
			for (int i = 0; i < lnt; i++)
			{
				glb = glbStmt->asnLst->asgnArr[i]->lvl->vrb;

				vrb = getVrb(envr, glb);

				if (vrb != NULL)
				{
					throw new ExVrbRdfn();
				}

				vrb = addVrbGlb(envr, glb);

				ValStrc* vl = clcExp(envr, glbStmt->asnLst->asgnArr[i]->exp);

				asnVrbCpy(vrb, vl);
			}

			printf("glb dfnd\n");


			return rslt;
		}

		if (stmt->typ == StmtEnm::If)
		{
			auto ifStmt = static_cast<IfStmt*>(stmt);

			envr.push_back(new EnvrStrc(EnvrEnm::Stmt));

			//printf("clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl: %d\n", clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl);

			if ((ifStmt->expRslt = clcExp(envr, ifStmt->exp)->v.int_) != 0)
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

			auto elsStmt = static_cast<ElsStmt*>(stmt);

			auto lstStmt = mltStmtStk.back();

			if (lstStmt->typ == StmtEnm::If)
			{
				//如果上句已经执行
				if (static_cast<IfStmt*>(lstStmt)->expRslt == 1)
				{

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}

			if (lstStmt->typ == StmtEnm::Elif)
			{
				//如果上句已经执行
				if (static_cast<ElifStmt*>(lstStmt)->expRslt == 1)
				{

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}


			envr.push_back(new EnvrStrc(EnvrEnm::Stmt));

			rslt = exctStmt(envr, elsStmt->stmt);

			envr.pop_back();
		}

		if (stmt->typ == StmtEnm::Elif)
		{

			auto elifStmt = static_cast<ElifStmt*>(stmt);

			auto lstStmt = mltStmtStk.back();

			if (lstStmt->typ == StmtEnm::If)
			{
				//如果上句已经执行
				if (static_cast<IfStmt*>(lstStmt)->expRslt == 1)
				{
					//本句赋值为无需执行的状态
					elifStmt->expRslt = 1;

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}

			if (lstStmt->typ == StmtEnm::Elif)
			{
				//如果上句已经执行
				if (static_cast<ElifStmt*>(lstStmt)->expRslt == 1)
				{
					//本句赋值为无需执行的状态
					elifStmt->expRslt = 1;

					rslt = new StmtRsltStrc;
					rslt->typ = RtnEnm::Nrm;

					return rslt;
				}

			}



			ValStrc* expRslt = nullptr;
			envr.push_back(new EnvrStrc(EnvrEnm::Stmt));

			if ((elifStmt->expRslt = clcExp(envr, elifStmt->exp)->v.int_) != 0)
			{
				rslt = exctStmt(envr, elifStmt->stmt);
			}

			envr.pop_back();

			//语句加入多主句语句栈
			mltStmtStk.push_back(stmt);

		}

		// if (stmt->typ == StmtEnm::IfEls)
		// {
		// 	//prtCnst(clcExp(stmt->stmt.ifStmt->exp));
		//
		// 	envr.push_back(new EnvrStrc(EnvrEnm::Stmt));
		//
		// 	auto ifStmt = static_cast<IfElStmtStrc*>(stmt);
		//
		// 	if ((clcExp(envr, ifStmt->exp)->v.int_) != 0)
		// 	{
		// 		rslt = exctStmt(envr, ifStmt->stmt);
		// 	}
		// 	else
		// 	{
		// 		rslt = exctStmt(envr, ifStmt->elsStmt);
		// 	}
		//
		// 	//删除创建的环境
		// 	envr.pop_back();
		// }

		if (stmt->typ == StmtEnm::For)
		{
			std::chrono::steady_clock::time_point tmStrt;
			tmStrt = std::chrono::steady_clock::now();

			envr.push_back(new EnvrStrc(EnvrEnm::Stmt));

			auto forStmt = static_cast<ForStmt*>(stmt);

			rslt = exctStmt(envr, forStmt->intl);

			while ((clcExp(envr, static_cast<ExpStmtStrc*>(forStmt->exp)->exp)->v.int_) != 0)
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

			auto whlStmt = static_cast<WhlStmt*>(stmt);

			envr.push_back(new EnvrStrc(EnvrEnm::Stmt));

			while (whlStmt->exp == nullptr || clcExp(envr, (whlStmt->exp))->v.int_ != 0)
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
			auto doWhlStmt = static_cast<DoWhlStmt*>(stmt);

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
			} while (clcExp(envr, reinterpret_cast<ExpStmtStrc*>(doWhlStmt->exp)->exp)->v.int_ != 0);

			if (rslt->typ == RtnEnm::Cntn)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = RtnEnm::Nrm;
			}

		}

		if (stmt->typ == StmtEnm::Blk)
		{
			auto stmtBlk = static_cast<StmtBlkStrc*>(stmt);

			envr.push_back(new EnvrStrc(EnvrEnm::Blk));

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
			auto brkStmt = static_cast<BrkStmt*>(stmt);

			rslt->typ = RtnEnm::Nrm;

			rslt->rslt.brkRslt = new BrkRsltStrc;

			rslt->rslt.brkRslt->brkCnt = clcExp(envr, brkStmt->exp)->v.int_;
		}

		if (stmt->typ == StmtEnm::Cntn)
		{
			auto cntnStmt = static_cast<CntnStmt*>(stmt);

			rslt->typ = RtnEnm::Cntn;

			rslt->rslt.cntnRslt = new CntnRsltStrc;

			rslt->rslt.cntnRslt->cntnCnt = clcExp(envr, cntnStmt->exp)->v.int_;
		}

		if (stmt->typ == StmtEnm::DfnFcn)
		{
			auto fcnStmt = static_cast<FcnStmt*>(stmt);

			if (getFcn(envr, static_cast<FcnExpStrc*>(bldFcnExp((char*)(fcnStmt->fcn->nm.c_str()), NULL))) != NULL)
			{
				throw new ExFcnRdfn;
			}

			if (getVrb(envr, static_cast<VrbExp*>(bldVrbExp((char*)(fcnStmt->fcn->nm.c_str())))) != NULL)
			{
				throw new ExAlrdDfnAsVrb;
			}

			addFcn(envr[envr.size() - 1], fcnStmt->fcn);
		}

		if (stmt->typ == StmtEnm::Cls)
		{
			auto clsStmt = static_cast<ClsStmt*>(stmt);

			ClsStrc* cls = clsStmt->cls;

			//遍历类定义语句，填充类定义
			StmtBlkStrc* blk = static_cast<StmtBlkStrc*>(clsStmt->cls->dfn);
			std::vector<Stmt*>& stmtArr = blk->stmtArr;

			for (int i = 0; i < blk->stmtArr.size(); i++)
			{
				switch (stmtArr.at(i)->typ)
				{
				case StmtEnm::Var:
				{
					for (int j = 0; j < static_cast<VarStmt*>(stmtArr.at(i))->asnLst->asgnArr.size(); j++)
					{
						VrbStrc* vrb = new VrbStrc;
						//获取变量名称
						vrb->nm = new string(static_cast<VarStmt*>(stmtArr.at(i))->asnLst->asgnArr.at(j)->lvl->vrb->nm);

						//获取变量值
						ValStrc* expRslt = clcExp(envr, static_cast<VarStmt*>(stmtArr.at(i))->asnLst->asgnArr.at(j)->exp);

						printf("expRslt typ: %d cnst typ: %d\n", expRslt->typ, expRslt->typ);

						asnVrbCpy(vrb, expRslt);

						cls->vrb.push_back(vrb);
					}

					break;
				}
				case StmtEnm::DfnFcn:
				{
					//将函数定义语句添加到类结构体中
					cls->fcn.push_back(static_cast<FcnStmt*>(stmtArr.at(i))->fcn);

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
			auto rtnStmt = static_cast<RtnStmt*>(stmt);

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

int chkStmtAlwSubStmt(Stmt* stmt)
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
	case StmtEnm::Elif:
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

int chkStmtAlwScndStmt(Stmt* stmt)
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
	case StmtEnm::Elif:
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