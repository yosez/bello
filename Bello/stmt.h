#pragma once

#include <stdio.h>
#include <malloc.h>
#include "y.tab.h"
#include "dftn.h"
#include "expt.h"


//语句系列函数，参数为语句的内容部分，如创建if语句结构体的bldIfStmt函数的参数exp为if的条件表达式，stmt参数为if的条件为真执行的语句块
struct StmtStrc* bldExpStmt(struct ExpStrc* exp);
struct StmtStrc* bldIfStmt(struct ExpStrc* exp, struct StmtStrc* stmt);
struct StmtStrc* bldElsStmt(struct StmtStrc* stmt);
struct StmtStrc* bldIfElsStmt(struct ExpStrc* exp, struct StmtStrc* stmt, struct StmtStrc* elsStmt);
struct StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr, struct StmtStrc* stmt);
struct StmtStrc* bldWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt);
struct StmtStrc* bldDoWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt);
struct StmtStrc* bldStmtBlk();
struct StmtStrc* stmtBlkAdd(struct StmtStrc* stmtBlk, struct StmtStrc* stmt);
struct StmtStrc* bldBrkStmt(struct ExpStrc* exp);
struct StmtStrc* bldCntnStmt(struct ExpStrc* exp);
struct StmtStrc* bldFcnStmt(struct FcnStrc* fcn);
struct StmtStrc* bldRtnStmt(struct ExpStrc* exp);
struct StmtStrc* bldVarStmt(struct AsgnLstStrc* asgnLst);
struct StmtStrc* bldGlbStmt(AsgnLstStrc* asgnLst);
struct StmtStrc* bldNllStmt();
struct StmtStrc* bldClsStmt();

struct StmtStrc* bldIfStmt(struct ExpStrc* exp);
struct StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr);
struct StmtStrc* bldWhlStmt(struct StmtStrc* exp);
struct StmtStrc* bldElsStmt();

extern int chkStmtAlwSubStmt(struct StmtStrc* stmt);


struct StmtRsltStrc* exctStmt(struct EnvrStrc* glbEnvr, struct EnvrStrc* fcnEnvr, struct StmtStrc* stmt);

struct StmtStrc* bldExpStmt(struct ExpStrc* exp)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = EXPRESSION_STATEMENT;

	rslt->stmt.expStmt = new ExpStmtStrc;

	rslt->stmt.expStmt->exp = exp;

	return rslt;
}


struct StmtStrc* bldIfStmt(struct ExpStrc* exp, struct StmtStrc* stmt)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = IF_STATEMENT;

	rslt->stmt.ifStmt = new IfStmtStrc;

	rslt->stmt.ifStmt->exp = exp;
	rslt->stmt.ifStmt->stmt = stmt;
	rslt->stmt.ifStmt->els = nullptr;

	return rslt;
}

struct StmtStrc* bldElsStmt(struct StmtStrc* stmt)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = ELSE_STATEMENT;

	rslt->stmt.elsStmt = new ElsStmtStrc;
	rslt->stmt.elsStmt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldElsStmt()
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = ELSE_STATEMENT;

	rslt->stmt.elsStmt = new ElsStmtStrc;
	rslt->stmt.elsStmt->stmt = nullptr;

	return rslt;
}


struct StmtStrc* bldIfStmt(struct ExpStrc* exp)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = IF_STATEMENT;

	rslt->stmt.ifStmt = new IfStmtStrc;

	rslt->stmt.ifStmt->exp = exp;
	rslt->stmt.ifStmt->stmt = nullptr;

	return rslt;
}


struct StmtStrc* bldIfElsStmt(struct ExpStrc* exp, struct StmtStrc* stmt, struct StmtStrc* elsStmt)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = IF_ELSE_STATEMENT;

	rslt->stmt.ifElsStmt = new IfElsStmtStrc;

	rslt->stmt.ifElsStmt->exp = exp;
	rslt->stmt.ifElsStmt->stmt = stmt;
	rslt->stmt.ifElsStmt->elsStmt = elsStmt;

	return rslt;
}

struct StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr, struct StmtStrc* stmt)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = FOR_STATEMENT;

	rslt->stmt.forStmt = new ForStmtStrc;

	rslt->stmt.forStmt->intl = intl;
	rslt->stmt.forStmt->exp = exp;
	rslt->stmt.forStmt->itr = itr;
	rslt->stmt.forStmt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldForStmt(struct StmtStrc* intl, struct StmtStrc* exp, struct StmtStrc* itr)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = FOR_STATEMENT;

	rslt->stmt.forStmt = new ForStmtStrc;

	rslt->stmt.forStmt->intl = intl;
	rslt->stmt.forStmt->exp = exp;
	rslt->stmt.forStmt->itr = itr;
	rslt->stmt.forStmt->stmt = nullptr;

	return rslt;
}

struct StmtStrc* bldWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = WHILE_STATEMENT;

	rslt->stmt.whlStmt = new WhlStmtStrc;

	rslt->stmt.whlStmt->exp = exp;
	rslt->stmt.whlStmt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldWhlStmt(struct StmtStrc* exp)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = WHILE_STATEMENT;

	rslt->stmt.whlStmt = new WhlStmtStrc;

	rslt->stmt.whlStmt->exp = exp;
	rslt->stmt.whlStmt->stmt = nullptr;

	return rslt;
}

struct StmtStrc* bldDoWhlStmt(struct StmtStrc* exp, struct StmtStrc* stmt)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = DO_WHILE_STATEMENT;

	rslt->stmt.doWhlStmt = new DoWhlStmtStrc;

	rslt->stmt.doWhlStmt->exp = exp;
	rslt->stmt.doWhlStmt->stmt = stmt;

	return rslt;
}

struct StmtStrc* bldStmtBlk()
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = STATEMENT_BLOCK;

	rslt->stmt.stmtBlk = new StmtBlkStrc;

	return rslt;
}

struct StmtStrc* stmtBlkAdd(struct StmtStrc* stmtBlk, struct StmtStrc* stmt)
{

	stmtBlk->stmt.stmtBlk->stmtArr.push_back(stmt);

	return stmtBlk;
}

struct StmtStrc* bldBrkStmt(struct ExpStrc* exp)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = BREAK_STATEMENT;

	rslt->stmt.brkStmt = new BrkStmtStrc;

	rslt->stmt.brkStmt->exp = exp;

	return rslt;
}

struct StmtStrc* bldCntnStmt(struct ExpStrc* exp)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = CONTINUE_STATEMENT;

	rslt->stmt.cntnStmt = new CntnStmtStrc;

	rslt->stmt.cntnStmt->exp = exp;

	return rslt;
}

struct StmtStrc* bldFcnStmt(struct FcnStrc* fcn)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = FUNCTION_DEFINE_STATEMENT;

	rslt->stmt.fcnStmt = new FcnStmtStrc;

	rslt->stmt.fcnStmt->fcn = fcn;

	return rslt;
}

struct StmtStrc* bldRtnStmt(struct ExpStrc* exp)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = RETURN_STATEMENT;

	rslt->stmt.rtnStmt = new RtnStmtStrc;

	if (exp == NULL)
	{
		rslt->stmt.rtnStmt->blnRslt = 0;
		rslt->stmt.rtnStmt->exp = NULL;
	}
	else
	{
		rslt->stmt.rtnStmt->blnRslt = 1;
		rslt->stmt.rtnStmt->exp = exp;
	}

	return rslt;
}

struct StmtStrc* bldVarStmt(struct AsgnLstStrc* asgnLst)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = VAR_STATEMENT;

	rslt->stmt.varStmt = new VarStmtStrc;

	rslt->stmt.varStmt->asgnLst = asgnLst;

	return rslt;

}

struct StmtStrc* bldGlbStmt(AsgnLstStrc* asgnLst)
{
	printf("test\n");
	StmtStrc* rslt = new StmtStrc;

	rslt->typ = GLOBAL_STATEMENT;

	rslt->stmt.glbStmt = new GlbStmtStrc;

	rslt->stmt.glbStmt->asgnLst = asgnLst;

	printf("test #2\n");

	//printf("asgnLst: %s", rslt->stmt.glbStmt->asgnLst->asgnArr[0]->exp.lvlExp->vrb->exp.vrbExp->nm.c_str());

	return rslt;
}

struct StmtStrc* bldNllStmt()
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = NULL_STATEMENT;

	return rslt;
}

struct StmtStrc* bldClsStmt(ClsStrc *cls)
{
	struct StmtStrc* rslt = new StmtStrc;

	rslt->typ = CLASS_DEFINE_STATEMENT;

	rslt->stmt.clsStmt = new ClsStmtStrc;

	rslt->stmt.clsStmt->cls = cls;

	return rslt;
}


struct StmtRsltStrc* exctStmt(vector<EnvrStrc*>& envr, struct StmtStrc* stmt)
{
	struct StmtRsltStrc* rslt = new StmtRsltStrc;

	rslt->typ = NORMAL_RESULT;

	struct StmtRsltStrc* stt;

	try
	{

		if (stmt->typ == EXPRESSION_STATEMENT)
		{
			struct CnstStrc* rsltExp;

			rsltExp = clcExp(envr, stmt->stmt.expStmt->exp);

			//printf("clcExp(envr, stmt->stmt.expStmt->exp): %d\n", clcExp(envr, stmt->stmt.expStmt->exp)->vl.intVl);
		}

		if (stmt->typ == VAR_STATEMENT)
		{
			struct VrbStrc* vrb;

			int i;

			for (i = 0; i < stmt->stmt.varStmt->asgnLst->asgnArr.size(); i++)
			{
				struct CnstStrc* rslt;
				struct VrbExpStrc* vrbExp;

				vrbExp = stmt->stmt.varStmt->asgnLst->asgnArr[i]->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp;

				if ((vrb = getVrb(envr, vrbExp)) == NULL)
				{
					vrb = addVrb(envr[envr.size()-1], vrbExp);
				}
				else
				{
					throw new ExVrbRdfn();
				}

				if (stmt->stmt.varStmt->asgnLst->asgnArr[i]->exp.asgnExp->exp->typ != NULL_EXPRESSION)
				{
					rslt = clcExp(envr, stmt->stmt.varStmt->asgnLst->asgnArr[i]->exp.asgnExp->exp);
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

		if (stmt->typ == GLOBAL_STATEMENT)
		{
			struct VrbStrc* vrb;

			//获取glb语句声明全局变量的个数
			int lnt = stmt->stmt.glbStmt->asgnLst->asgnArr.size();

			struct VrbExpStrc* glb;

			//检查变量是否已经被定义过
			for (int i = 0; i < lnt; i++)
			{
				glb = stmt->stmt.glbStmt->asgnLst->asgnArr[i]->exp.asgnExp->lvl->exp.lvlExp->vrb->exp.vrbExp;

				vrb = getVrb(envr, glb);

				if (vrb != NULL)
				{
					throw new ExVrbRdfn();
				}

				vrb = addVrbGlb(envr, glb);

				CnstStrc* vl = clcExp(envr, stmt->stmt.glbStmt->asgnLst->asgnArr[i]->exp.asgnExp->exp);

				asgnVrb(vrb, vl);
			}

			printf("glb dfnd\n");


			return rslt;
		}

		if (stmt->typ == IF_STATEMENT)
		{
			//int envrLyr = envr.size();
			envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			//printf("clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl: %d\n", clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl);

			if ((clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl) != 0)
			{
				rslt = exctStmt(envr, stmt->stmt.ifStmt->stmt);
			}
			else if (stmt->stmt.ifStmt->els != NULL)
			{
				rslt = exctStmt(envr, stmt->stmt.ifStmt->els);
			}

			//删除创建的环境
			envr.pop_back();

		}

		if (stmt->typ == IF_ELSE_STATEMENT)
		{
			//prtCnst(clcExp(stmt->stmt.ifStmt->exp)); 

			//envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			if ((clcExp(envr, stmt->stmt.ifStmt->exp)->vl.intVl) != 0)
			{
				rslt = exctStmt(envr, stmt->stmt.ifElsStmt->stmt);
			}
			else
			{
				rslt = exctStmt(envr, stmt->stmt.ifElsStmt->elsStmt);
			}

			//删除创建的环境
			//envr.pop_back();
		}

		if (stmt->typ == FOR_STATEMENT)
		{
			//envr.push_back(new EnvrStrc(STATEMENT_ENVIRONMENT));

			rslt = exctStmt(envr, stmt->stmt.forStmt->intl);

			while ((clcExp(envr, stmt->stmt.forStmt->exp->stmt.expStmt->exp)->vl.intVl) != 0)
			{
				//上一次循环中使用了continue语句
				if (rslt->typ == CONTINUE_RESULT)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					exctStmt(envr, stmt->stmt.forStmt->itr);

					continue;
				}

				rslt = exctStmt(envr, stmt->stmt.forStmt->stmt);

				if (rslt->typ == RETURN_RESULT)
				{
					break;
				}

				if (rslt->typ == BREAK_RESULT)
				{
					rslt->rslt.brkRslt->brkCnt--;

					if (rslt->rslt.brkRslt->brkCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					break;
				}

				if (rslt->typ == CONTINUE_RESULT)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					exctStmt(envr, stmt->stmt.forStmt->itr);

					continue;
				}

				exctStmt(envr, stmt->stmt.forStmt->itr);


			}

			//continue语句对本层循环有效
			if (rslt->typ == CONTINUE_RESULT)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = NORMAL_RESULT;

			}

			//envr.pop_back();
		}

		if (stmt->typ == WHILE_STATEMENT)
		{
			while (clcExp(envr, stmt->stmt.whlStmt->exp->stmt.expStmt->exp)->vl.intVl != 0)
			{
				if (rslt->typ == CONTINUE_RESULT)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					continue;
				}

				rslt = exctStmt(envr, stmt->stmt.whlStmt->stmt);

				if (rslt->typ == RETURN_RESULT)
				{
					break;
				}

				if (rslt->typ == BREAK_RESULT)
				{
					rslt->rslt.brkRslt->brkCnt--;
					if (rslt->rslt.brkRslt->brkCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					break;
				}

				if (rslt->typ == CONTINUE_RESULT)
				{
					//printf("while continue #2: %d\n",rslt->rslt.cntnRslt->cntnCnt);
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					continue;
				}
			}

			if (rslt->typ == CONTINUE_RESULT)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = NORMAL_RESULT;
			}
		}

		if (stmt->typ == DO_WHILE_STATEMENT)
		{
			do
			{
				if (rslt->typ == CONTINUE_RESULT)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					continue;
				}

				rslt = exctStmt(envr, stmt->stmt.doWhlStmt->stmt);

				if (rslt->typ == RETURN_RESULT)
				{
					break;
				}

				if (rslt->typ == BREAK_RESULT)
				{
					rslt->rslt.brkRslt->brkCnt--;

					if (rslt->rslt.brkRslt->brkCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					break;
				}

				if (rslt->typ == CONTINUE_RESULT)
				{
					rslt->rslt.cntnRslt->cntnCnt--;

					if (rslt->rslt.cntnRslt->cntnCnt == 0)
					{
						rslt->typ = NORMAL_RESULT;
					}

					continue;
				}
			} while (clcExp(envr, stmt->stmt.doWhlStmt->exp->stmt.expStmt->exp)->vl.intVl != 0);

			if (rslt->typ == CONTINUE_RESULT)
			{
				rslt->rslt.cntnRslt->cntnCnt = 0;
				rslt->typ = NORMAL_RESULT;
			}

		}

		if (stmt->typ == STATEMENT_BLOCK)
		{
			envr.push_back(new EnvrStrc(STATEMENT_BLOCK_ENVIRONMENT));

			int i;

			for (i = 0; i < stmt->stmt.stmtBlk->stmtArr.size(); i++)
			{
				rslt = exctStmt(envr, stmt->stmt.stmtBlk->stmtArr[i]);

				if (rslt->typ == RETURN_RESULT)
				{
					break;
				}

				if (rslt->typ == BREAK_RESULT || rslt->typ == CONTINUE_RESULT)
				{
					break;
				}
			}

			envr.pop_back();
		}

		if (stmt->typ == BREAK_STATEMENT)
		{
			rslt->typ = BREAK_RESULT;

			rslt->rslt.brkRslt = new BrkRsltStrc;

			rslt->rslt.brkRslt->brkCnt = clcExp(envr, stmt->stmt.brkStmt->exp)->vl.intVl;
		}

		if (stmt->typ == CONTINUE_STATEMENT)
		{
			rslt->typ = CONTINUE_RESULT;

			rslt->rslt.cntnRslt = new CntnRsltStrc;

			rslt->rslt.cntnRslt->cntnCnt = clcExp(envr, stmt->stmt.cntnStmt->exp)->vl.intVl;
		}

		if (stmt->typ == FUNCTION_DEFINE_STATEMENT)
		{
			if (getFcn(envr, bldFcnExp((char*)(stmt->stmt.fcnStmt->fcn->nm.c_str()), NULL)->exp.fcnExp) != NULL)
			{
				throw new ExFcnRdfn;
			}

			if (getVrb(envr, bldVrbExp((char*)(stmt->stmt.fcnStmt->fcn->nm.c_str()))->exp.vrbExp) != NULL)
			{
				throw new ExAlrdDfnAsVrb;
			}

			addFcn(envr[envr.size()-1], stmt->stmt.fcnStmt->fcn);
		}

		if (stmt->typ == RETURN_STATEMENT)
		{

			rslt->typ = RETURN_RESULT;

			rslt->rslt.rtnRslt = new RtnRsltStrc;

			rslt->rslt.rtnRslt->blnRslt = stmt->stmt.rtnStmt->blnRslt;

			if (rslt->rslt.rtnRslt->blnRslt == 1)
			{
				rslt->rslt.rtnRslt->rslt = clcExp(envr, stmt->stmt.rtnStmt->exp);
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


	return rslt;
}

int chkStmtAlwSubStmt(struct StmtStrc* stmt)
{
	switch (stmt->typ)
	{
		case IF_STATEMENT:
		case FOR_STATEMENT:
		case WHILE_STATEMENT:
		case DO_WHILE_STATEMENT:
		case FUNCTION_DEFINE_STATEMENT:
		case ELSE_STATEMENT:
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
