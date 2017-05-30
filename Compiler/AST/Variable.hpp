#pragma once
#include <iostream>
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
    virtual string codeGen() { return name; }
};