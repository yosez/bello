#pragma once

#ifndef VAL_H
#define VAL_H
#include <stdio.h>
#include <string.h>
#include "dfn.h"
#include <print>
using std::print;

extern ValStrc* bldStrVal(ValStrc* v);

ValStrc* bldIntVal(int v)
{
	ValStrc* rslt = new ValStrc(ValEnm::Int, std::move(ValUnn(v)));

	return rslt;
}

ValStrc* bldFltVal(float v)
{
	ValStrc* rslt = new ValStrc(ValEnm::Flt, std::move(ValUnn(v)));

	return rslt;
}

ValStrc* bldBlnVal(int vl)
{
	ValStrc* rslt = new ValStrc();

	rslt->typ = ValEnm::Bln;

	if (vl != 0)
	{
		rslt->v.bln = 1;
	}
	else
	{
		rslt->v.bln = 0;
	}

	return rslt;
}

ValStrc* bldStrVal(char* v)
{
	ValStrc* rslt = new ValStrc(ValEnm::Str, std::move(ValUnn(v)));

	return rslt;
}

///TODO
ValStrc* bldStrValByStr(string vl)
{
	ValStrc* rslt = new ValStrc(ValEnm::Str , std::move(ValUnn( &vl)));

	return rslt;
}

ValStrc* bldStrValByStrPtr(string* vl)
{
	ValStrc* rslt = new ValStrc(ValEnm::Str , std::move(ValUnn( vl)));

	return rslt;
}

ValStrc* bldArrVal(ArrStrc* arr)
{
	ValStrc* rslt = new ValStrc(ValEnm::Arr, std::move(ValUnn(arr)));

	return rslt;
}

ValStrc* bldNlVal()
{
	ValStrc* rslt = new ValStrc(ValEnm::Nl, std::move(ValUnn()));


	return rslt;
}

ValStrc* cpyVal(ValStrc* v)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = v->typ;

	memset(&(rslt->v), 0, sizeof(ValUnn));
	memcpy(&(rslt->v), &(v->v), sizeof(ValUnn));

	return rslt;
}

int prtVal(ValStrc* v)
{
	switch (v->typ)
	{
	case ValEnm::Int:
	{
		printf("%d", v->v.int_);
		break;
	}
	case ValEnm::Flt:
	{
		printf("%f", v->v.flt);
		break;
	}
	case ValEnm::Bln:
	{
		if (v->v.bln == 0)
		{
			print("{}", "false");
		}
		else
		{
			print("{}", "true");
		}
		break;
	}
	case ValEnm::Str:
	{

		print("{}", v->v.str->c_str());
		break;
	}
	case ValEnm::Nl:
	{
		print("(null)");
		break;
	}
	case ValEnm::Arr:
	{
		printf("[");
		int i;
		for (i = 0; i < v->v.arr->elmtArr.size(); i++)
		{
			prtVal(v->v.arr->elmtArr[i]);

			if (i != v->v.arr->elmtArr.size() - 1)
			{
				printf(", ");
			}
		}

		printf("]");

		break;
	}
	}

	return 0;
}

int prtlnVal(ValStrc* v)
{
	switch (v->typ)
	{
		case ValEnm::Int:
		{
			printf("%d\n", v->v.int_);
			break;
		}
		case ValEnm::Flt:
		{
			printf("%f\n", v->v.flt);
			break;
		}
		case ValEnm::Bln:
		{
			if (v->v.bln == 0)
			{
				printf("%s\n", "false");
			}
			else
			{
				printf("%s\n", "true");
			}
			break;
		}
		case ValEnm::Str:
		{
			printf("%s\n", v->v.str->c_str());
			break;
		}
		case ValEnm::Nl:
		{
			printf("null\n");
			break;
		}
		case ValEnm::Arr:
		{
			printf("[");
			int i;
			for (i = 0; i < v->v.arr->elmtArr.size(); i++)
			{
				prtVal(v->v.arr->elmtArr[i]);

				if (i != v->v.arr->elmtArr.size() - 1)
				{
					printf(", ");
				}
			}

			printf("]\n");

			break;
		}
	}

	return 0;
}

// int prtlnVal(ValStrc* v)
// {
// 	switch (v->typ)
// 	{
// 	case ValEnm::Int:
// 	{
// 		printf("%d\n", v->v.int_);
// 		break;
// 	}
// 	case ValEnm::Flt:
// 	{
// 		printf("%f\n", v->v.flt);
// 		break;
// 	}
// 	case ValEnm::Bln:
// 	{
// 		if (v->v.bln == 0)
// 		{
// 			printf("%s\n", "false");
// 		}
// 		else
// 		{
// 			printf("%s\n", "true");
// 		}
// 		break;
// 	}
// 	case ValEnm::Str:
// 	{
// 		printf("%s\n", v->v.str->c_str());
// 		break;
// 	}
// 	case ValEnm::Nll:
// 	{
// 		printf("null\n");
// 		break;
// 	}
// 	case ValEnm::Arr:
// 	{
//
// 		printf("[");
// 		int i;
//
// 		for (i = 0; i < v->v.arr->elmtArr.size(); i++)
// 		{
// 			prtVal(v->v.arr->elmtArr[i]);
//
// 			if (i != v->v.arr->elmtArr.size() - 1)
// 			{
// 				printf(", ");
// 			}
// 		}
// 		printf("]\n");
//
// 		break;
// 	}
// 	}
//
// 	return 0;
// }

#endif