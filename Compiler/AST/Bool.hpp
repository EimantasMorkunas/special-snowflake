#pragma once

#include <iostream>

#include "BooleanExp.hpp"
#include "CodeGenContext.hpp"

using namespace std;

class Bool {
public:
    BooleanExp* boolExp;
    bool nop;
    
    Bool(BooleanExp* boolExp, bool nop) {
        this->boolExp = boolExp;
        this->nop = nop;
    }
    virtual ~Bool() { delete boolExp; }

    virtual string genCode(CodeGenContext* context) {
        return nop ? "!(" + boolExp->genCode(context) + ")" : boolExp->genCode(context);
    }
};