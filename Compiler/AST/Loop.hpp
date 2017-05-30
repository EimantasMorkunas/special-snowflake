#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class Loop : public Statement {
public:
    virtual ~Loop() {}
    virtual string genCode(CodeGenContext* context) { return ""; }
};