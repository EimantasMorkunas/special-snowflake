#pragma once

#include <iostream>

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

    virtual string genCode() {
        return variable == nullptr ? integer->genCode() :
            variable->genCode();
    }
};