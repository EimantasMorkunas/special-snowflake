#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "CodeGenContext.hpp"
#include "Node.hpp"
#include "Parameter.hpp"

using namespace std;

class Parameters : public Node {
public:
	vector<Parameter*> ParameterList;
    virtual ~Parameters() {}
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for(std::vector<Parameter*>::iterator it = ParameterList.begin(); it != ParameterList.end(); ++it) {
			result += "," + (*it)->genCode(context);
		}
		return result.substr(1);
	}
};