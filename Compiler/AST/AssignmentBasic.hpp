#pragma once
#include <iostream>
#include <typeinfo>
#include <string>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"
#include "Expression.hpp"
#include "Integer.hpp"

using namespace std;

class AssignmentBasic : public Assignment {
public:
	AssignmentBasic(Variable* var, Expression* exp) {
		this->variable = var;
		this->exp = exp;
	}
	Expression* exp;
    virtual ~AssignmentBasic() {}
    virtual string genCode(CodeGenContext* context) {
		string type = exp->first->getType();
		string typeName;
		if (type == "INTEGER") {
			typeName = "int";
		}
		if (type == "FLOAT") {
			typeName = "double";
		}
		if (type == "CHAR") {
			typeName = "char";
		}
		if (type == "STRING") {
			typeName = "string";
		}
		if (type == "VAR") {
			typeName = context->variableTypes->at((((Variable*)exp->first)->name));
		}
		context->variableTypes->insert(pair<string, string>(variable->name, typeName));
		return typeName + " " + variable->genCode(context) + " = " + exp->genCode(context);
	}
};