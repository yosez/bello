#pragma once

#ifndef VAL_H
#define VAL_H
#include <stdio.h>
#include <string.h>
#include "dftn.h"

// struct ValStrc;
// enum class ValEnm :int;

ValStrc* bldIntVal(int v)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Int;
	rslt->v.int_ = v;

	return rslt;
}

ValStrc* bldFltVal(float vl)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Flt;
	rslt->v.flt = vl;

	return rslt;
}

ValStrc* bldBlnVal(int vl)
{
	ValStrc* rslt = new ValStrc;

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

ValStrc* bldStrVal(char* vl)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Str;

	rslt->v.str = new string(vl);

	return rslt;
}

ValStrc* bldStrValByStr(string vl)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Str;
	rslt->v.str = new string(vl);

	return rslt;
}

ValStrc* bldArrVal(ArrStrc* arr)
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Arr;
	rslt->v.arr = arr;

	return rslt;
}

ValStrc* bldNllVal()
{
	ValStrc* rslt = new ValStrc;

	rslt->typ = ValEnm::Nll;

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
			printf("%s", "false");
		}
		else
		{
			printf("%s", "true");
		}
		break;
	}
	case ValEnm::Str:
	{
		printf("%s", v->v.str->c_str());
		break;
	}
	case ValEnm::Nll:
	{
		printf("null");
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
	case ValEnm::Nll:
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

#endif