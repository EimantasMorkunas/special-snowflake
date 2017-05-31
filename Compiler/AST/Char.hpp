#pragma once

#include <iostream>

#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class Char : public Identifier {
public:
    int type;
    string value;
    Char(string value) {
        this->value = value;
    }
    virtual ~Char() {}
    virtual string getType() { return "CHAR"; };
    virtual string genCode(CodeGenContext* context) { return value; }
};