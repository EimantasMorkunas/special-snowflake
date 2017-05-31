#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class VarOrInteger {
public:
    Variable* variable;
    string integer; 
    
    VarOrInteger(Variable* variable, string integer) {
        this->variable = variable;
        this->integer = integer;
    }
    virtual ~VarOrInteger() { delete variable; }

    virtual string genCode(CodeGenContext* context) {
        return variable == nullptr ? integer :
            variable->genCode(context);
    }
};