#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class VarOrInteger {
public:
    Variable* variable;
    Integer* integer; 
    
    VarOrInteger(Variable* variable, Integer* integer) {
        this->variable = variable;
        this->integer = integer;
    }
    virtual ~VarOrInteger() { delete variable; delete integer; }

    virtual string genCode(CodeGenContext* context) {
        return variable == nullptr ? integer->genCode(context) :
            variable->genCode(context);
    }
};