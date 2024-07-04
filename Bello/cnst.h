#pragma once

#include <stdio.h>
#include <string.h>

#include "y.tab.h"
#include "dftn.h"
// #ifndef DFTN_H
// #define DFTN_H
// #endif

extern struct CnstStrc;


struct CnstStrc* bldIntCnst(int vl)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = INT_VALUE;
	rslt->vl.intVl = vl;

	return rslt;
}

struct CnstStrc* bldFltCnst(float vl)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = FLOAT_VALUE;
	rslt->vl.flt = vl;

	return rslt;
}

struct CnstStrc* bldBlnCnst(int vl)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = BOOLEAN_VALUE;

	if (vl != 0)
	{
		rslt->vl.bln = 1;
	}
	else
	{
		rslt->vl.bln = 0;
	}

	return rslt;
}

struct CnstStrc* bldStrCnst(char* vl)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = STRING_VALUE;
	rslt->vl.str = string(vl);

	return rslt;
}

struct CnstStrc* bldStrCnst(string vl)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = STRING_VALUE;
	rslt->vl.str = vl;

	return rslt;
}

struct CnstStrc* bldArrCnst(struct ArrStrc* arr)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = ARRAY_VALUE;
	rslt->vl.arr = arr;

	return rslt;
}

struct CnstStrc* bldNllCnst()
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = NULL_VALUE;

	return rslt;
}

struct CnstStrc* bldCnstCpy(struct CnstStrc* cnst)
{
	struct CnstStrc* rslt = new CnstStrc;

	rslt->CnstTyp = cnst->CnstTyp;
	//rslt->vl = cnst->vl;
	memset(&(rslt->vl), 0, sizeof(VlUnn));
	memcpy(&(rslt->vl), &(cnst->vl), sizeof(VlUnn));

	return rslt;
}

int prtCnst(struct CnstStrc* cnst)
{
	//printf("Print const.\n");
	switch (cnst->CnstTyp)
	{
	case INT_VALUE:
	{
		printf("%d", cnst->vl.intVl);
		break;
	}
	case FLOAT_VALUE:
	{
		printf("%f", cnst->vl.flt);
		break;
	}
	case BOOLEAN_VALUE:
	{
		if (cnst->vl.bln == 0)
		{
			printf("%s", "false");
		}
		else
		{
			printf("%s", "true");
		}
		break;
	}
	case STRING_VALUE:
	{
		printf("%s", cnst->vl.str);
		break;
	}
	case NULL_VALUE:
	{
		printf("null");
		break;
	}
	case ARRAY_VALUE:
	{
		printf("[");
		int i;
		for (i = 0; i < cnst->vl.arr->elmtArr.size(); i++)
		{
			prtCnst(cnst->vl.arr->elmtArr[i]);

			if (i != cnst->vl.arr->elmtArr.size() - 1)
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

int prtlnCnst(struct CnstStrc* cnst)
{
	//printf("Print const.\n");
	switch (cnst->CnstTyp)
	{
	case INT_VALUE:
	{
		printf("%d\n", cnst->vl.intVl);
		break;
	}
	case FLOAT_VALUE:
	{
		printf("%f\n", cnst->vl.flt);
		break;
	}
	case BOOLEAN_VALUE:
	{
		if (cnst->vl.bln == 0)
		{
			printf("%s\n", "false");
		}
		else
		{
			printf("%s\n", "true");
		}
		break;
	}
	case STRING_VALUE:
	{
		printf("%s\n", cnst->vl.str);
		break;
	}
	case NULL_VALUE:
	{
		printf("null\n");
		break;
	}
	case ARRAY_VALUE:
	{
		// int i;
		// for (i=0;i<cnst->vl.arr->elmtCnt;i++)
		// {
		//     prtCnst(cnst->vl.arr->elmtArr[i]);
		// }

		printf("[");
		int i;
		//for (i = 0; i < cnst->vl.arr->elmtCnt; i++)
		for (i = 0; i < cnst->vl.arr->elmtArr.size(); i++)
		{
			prtCnst(cnst->vl.arr->elmtArr[i]);

			if (i != cnst->vl.arr->elmtArr.size() - 1)
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

