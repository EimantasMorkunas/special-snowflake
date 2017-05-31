#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "CodeGenContext.hpp"
#include "Node.hpp"
#include "Function.hpp"

using namespace std;

class Code : public Node {
public:
	vector<Function*> FunctionList;
    virtual ~Code() {}
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for(std::vector<Function*>::iterator it = FunctionList.begin(); it != FunctionList.end(); ++it) {
			context->variableTypes = new map<string, string>();
			for (vector<Parameter*>::iterator it2 = (*it)->params->ParameterList.begin(); it2 != (*it)->params->ParameterList.end(); ++it2) {
				string* a = new string (*((*it2)->type->name));
				string* b = new string ((*it2)->name->name);
				context->variableTypes->insert(pair<string, string>(*b, *a));
			}
			result += (*it)->genCode(context);
			delete context->variableTypes;
		}
		return result;
	}
};