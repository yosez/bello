#pragma once

#include <stdio.h>


class ExBs
{

};

class ExSntx:public ExBs
{

};


class ExLgc:public ExBs
{

};

class ExVrbNotFnd:public ExLgc
{

};

class ExVrbRdfn : public ExLgc
{

};

class ExWrgOprndTyp:public ExLgc
{

};

class ExFcnNotFnd: public ExLgc
{

};

class ExFcnTooMnyArg: public ExLgc
{

};

class ExFcnTooFewArg: public ExLgc
{

};

class ExFcnRdfn: public ExLgc
{

};

class ExAlrdDfnAsVrb: public ExLgc
{

};

class ExAlrdDfnAsFctn: public ExLgc
{

};

class ExNotAvlbArr: public ExLgc
{

};

class ExIdxOutArrRng: public ExLgc
{

};