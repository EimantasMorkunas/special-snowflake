#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class Variable : public Identifier {
public:
    int type;
    string name;
    Variable(char* name) {
        string temp(name);
        this->name = string(temp);
    }
    virtual ~Variable() {}
    virtual string getType() { return "VAR"; };
    virtual string genCode(CodeGenContext* context) { return name; }
};