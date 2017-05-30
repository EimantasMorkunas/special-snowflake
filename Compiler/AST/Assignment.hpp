#pragma once
#include <iostream>
#include "Variable.hpp"

using namespace std;

class Assignment : public Statement {
public:
	Variable* variable;
    virtual ~Assignment() {}
    virtual string genCode() { return ""; }
};