#pragma once
#include <iostream>
#include <typeinfo>
#include <string>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"
#include "Expression.hpp"
#include "Integer.hpp"

using namespace std;

class AssignmentArrayElement : public Assignment {
public:
	VarOrInteger* index;
	Expression* exp;
	AssignmentArrayElement(Variable* var, VarOrInteger* index, Expression* exp) {
		variable = var;
		this->index = index;
		this->exp = exp;
	}
    virtual ~AssignmentArrayElement() {}
    virtual string genCode(CodeGenContext* context) {
		return variable->genCode(context) + "[" + index->genCode(context) + "]=" + exp->genCode(context);
	}
};