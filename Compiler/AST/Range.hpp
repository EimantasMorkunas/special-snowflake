#pragma once

#include <iostream>

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
    
    virtual string genCode(string name) {
        return varOrIntegerFrom != nullptr ? varOrIntegerFrom->genCode() + 
             "; " + name + " <= " + varOrIntegerTo->genCode() + "; " + "++" + name :
             "0; " + name + " < " + varOrIntegerTo->genCode() + "; " + "++" + name;
    }
};