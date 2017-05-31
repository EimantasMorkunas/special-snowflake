#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class FunctionCall : public Statement {
public:
	Variable* name;
	CallParameters* params;
	FunctionCall(Variable* name, CallParameters* params) {
		this->name = name;
		this->params = params;
	}
    virtual ~FunctionCall() {}
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		int i = 0;
		for(std::vector<CallParameter*>::iterator it = params->CallParameterList.begin(); it != params->CallParameterList.end(); ++it) {
			if ((*it)->isOut) {
				vector<ParamStruct*> pS = *context->paramsOfFunctions->at(name->name);
				string type = *(pS[i]->type);
				string value;
				if (type == "string") {
					value = "\"\"";
				} else if (type == "char") {
					value = "\'\'";
				} else {
					value = "0";
				}
				result += type + " " + (*it)->name->genCode(context) + " = " + " " + value + ";";
			}
			i++;
		}
		return result + name->name + "(" + params->genCode(context) + ")";
	}
};