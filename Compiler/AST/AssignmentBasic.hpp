#pragma once
#include <iostream>
#include "Expression.hpp"

using namespace std;

class AssignmentBasic : public Assignment {
public:
	AssignmentBasic(Variable* var, Expression* exp) {
		this->variable = var;
		this->exp = exp;
	}
	Expression* exp;
    virtual ~AssignmentBasic() {}
    virtual string codeGen() { return variable->codeGen() + " = " + exp->codeGen(); }
};