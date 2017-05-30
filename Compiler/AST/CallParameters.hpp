#pragma once

#include <iostream>
#include <vector>
#include "CodeGenContext.hpp"
#include "Node.hpp"
#include "CallParameter.hpp"

using namespace std;

class CallParameters : public Node {
public:
	vector<CallParameter*> CallParameterList;
	CallParameters() {}
    virtual ~CallParameters() {}
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for(std::vector<CallParameter*>::iterator it = CallParameterList.begin(); it != CallParameterList.end(); ++it) {
			result += "," + (*it)->genCode(context);
		}
		if (result == "") {
			return result;
		}
		return result.substr(1);
	}
};