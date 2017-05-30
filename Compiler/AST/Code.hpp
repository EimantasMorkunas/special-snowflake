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
    virtual string genCode() {
		CodeGenContext* context = new CodeGenContext();
		string result = "";
		for(std::vector<Function*>::iterator it = FunctionList.begin(); it != FunctionList.end(); ++it) {
			context->variableTypes = new map<string, string>();
			result += (*it)->genCode(context);
			delete context->variableTypes;
		}
		delete context;
		return result;
	}
};