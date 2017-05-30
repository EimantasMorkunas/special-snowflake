#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Variable.hpp"

using namespace std;

class Assignment : public Statement {
public:
	Variable* variable;
    virtual ~Assignment() {}
    virtual string genCode(CodeGenContext* context) { return ""; }
};