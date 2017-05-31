#pragma once
#include <string>
#include <map>
#include <vector>
#include "ParamStruct.hpp"

using namespace std;

class CodeGenContext {
	public:
		map <string, string>* variableTypes;
		map <string, vector<ParamStruct*>*>* paramsOfFunctions;

		CodeGenContext(map<string, vector<ParamStruct*>*>* paramsOfFunctions) {
			this-> paramsOfFunctions = paramsOfFunctions;
		}
};