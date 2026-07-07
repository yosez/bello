#pragma once


///TODO
#ifndef EX_H
#define EX_H
#include <print>
using std::string;
using std::print;

class ExBs
{
public:
    string rsn{};
    string arg{};
    string arg2{};
    string arg3{};
    int argCnt{0};


};

class ExSntx:public ExBs
{
    ExSntx(string rsn, string arg, string arg2, string arg3): ExBs(rsn, arg, arg2, arg3){};
};


class ExLgc:public ExBs
{
public:
    ExLgc(string rsn, string arg, string arg2, string arg3): ExBs(rsn, arg, arg2, arg3){};
};

class ExVrbNotFnd:public ExLgc
{
public:
    ExVrbNotFnd(string vrb): ExLgc("Variable {} not found.\n", vrb, string{}, string{}){};
};

class ExVrbRdfn : public ExLgc
{
    ExVrbRdfn(string vrb): ExLgc("Variable {} cannot be redefined.\n", vrb, string{}, string{}){};
};

class ExWrgOprndTyp:public ExLgc
{

};

class ExFcnNotFnd: public ExLgc
{

    ExFcnNotFnd(string fn): ExLgc("Function {} not found.\n", fn, string{}, string{}){};

};

class ExFcnRdfn: public ExLgc
{

};

class ExFcnTooMnyArg: public ExLgc
{

};

class ExFcnTooFewArg: public ExLgc
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

class ExClsNotDfn : public ExLgc
{

};

#endif
