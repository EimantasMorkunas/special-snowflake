#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class FunctionCall : public Statement {
public:
	Variable* name;
	CallParameters* params;
    virtual ~FunctionCall() {}
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		
		for(std::vector<CallParameter*>::iterator it = params->CallParameterList.begin(); it != params->CallParameterList.end(); ++it) {
			if ((*it)->isOut) {
				string type = context->paramsOfFunctions->at(name->name).type;
				string default;
				if (type == "string") {
					default = "\"\"":
				} else if (type == "char") {
					default = "\'\'";
				} else {
					default = "0";
				}
				result += type + " " + (*it)->name->name + " = " + " " + default + ";";
			}
		}
		return result + name->name + "(" + params->codeGen() + ")";
	}
};