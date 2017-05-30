#pragma once
using namespace std;

struct ParamStruct {
	string* name;
	string* type;
	bool isOut;

	ParamStruct(string* name, string* type, bool isOut) {
		this->name = name;
		this->type = type;
		this->isOut = isOut;
	}
};