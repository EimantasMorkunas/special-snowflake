#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Node.hpp"
#include "Parameter.hpp"

using namespace std;

class Parameters : public Node {
public:
	vector<Parameter*> ParameterList;
    virtual ~Parameters() {}
    virtual string codeGen() {
		string result = "";
		for(std::vector<Parameter*>::iterator it = ParameterList.begin(); it != ParameterList.end(); ++it) {
			result += "," + (*it)->codeGen();
		}
		return result.substr(1);
	}
};