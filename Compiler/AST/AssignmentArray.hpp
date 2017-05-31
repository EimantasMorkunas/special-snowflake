#pragma once
#include <iostream>
#include <typeinfo>
#include <string>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"
#include "Expression.hpp"
#include "Integer.hpp"

using namespace std;

class AssignmentArray : public Assignment {
public:
	AssignmentArray(Variable* var, Array* array) {
		this->variable = var;
		this->array = array;
	}
	Array* array;
    virtual ~AssignmentArray() {}
    virtual string genCode(CodeGenContext* context) {
		string type = array->getType();
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
		return typeName + " " + variable->genCode(context) + "[] = " + array->genCode(context);
	}
};