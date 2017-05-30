#pragma once
#include <string>
#include <map>
#include "ParamStruct.hpp"

using namespace std;

class CodeGenContext {
	public:
		map<string, string>* variableTypes;
		map <string, ParamStruct>* paramsOfFunctions;

		CodeGenContext(map<string, ParamStruct>* paramsOfFunctions) {
			this-> paramsOfFunctions = paramsOfFunctions;
		}
};