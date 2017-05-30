#pragma once
#include <iostream>
#include <vector>
#include "Node.hpp"
#include "Function.hpp"

using namespace std;

class Code : public Node {
public:
	vector<Function*> FunctionList;
    virtual ~Code() {}
    virtual string genCode() {
		string result = "";
		for(std::vector<Function*>::iterator it = FunctionList.begin(); it != FunctionList.end(); ++it) {
			result += (*it)->genCode();
		}
		return result;
	}
};