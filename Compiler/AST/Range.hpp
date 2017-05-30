#pragma once

#include <iostream>
#include "CodeGenContext.hpp"
#include "VarOrInteger.hpp"

using namespace std;

class Range {
public:
    VarOrInteger* varOrIntegerFrom;
    VarOrInteger* varOrIntegerTo;

    Range(VarOrInteger* varOrIntegerFrom,
        VarOrInteger* varOrIntegerTo) {
        this->varOrIntegerFrom = varOrIntegerFrom;
        this->varOrIntegerTo = varOrIntegerTo;
    }
    virtual ~Range() { delete varOrIntegerFrom; delete varOrIntegerTo; }
    
    virtual string genCode(CodeGenContext* context, string name) {
        return varOrIntegerFrom != nullptr ? varOrIntegerFrom->genCode(context) + 
             "; " + name + " <= " + varOrIntegerTo->genCode(context) + "; " + "++" + name :
             "0; " + name + " < " + varOrIntegerTo->genCode(context) + "; " + "++" + name;
    }
};