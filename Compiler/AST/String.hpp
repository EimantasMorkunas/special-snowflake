#pragma once

#include <iostream>

#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class String : public Identifier {
public:
    int type;
    string value;
    String(string value) {
        this->value = value;
    }
    virtual ~String() {}
    virtual string getType() { return "STRING"; };
    virtual string genCode(CodeGenContext* context) { return value; }
};