#pragma once

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "y.tab.h"
//#ifndef DFTN_H
//#define DFTN_H
//#endif
#include "dftn.h"
#ifndef EXP_H
#define EXP_H
#endif

ClsStrc* bldCls(char* nm)
{
	ClsStrc* rslt = new ClsStrc;

	rslt->nm = new string(nm);

	return rslt;

}