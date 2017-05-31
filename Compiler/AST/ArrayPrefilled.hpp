#pragma once
#include <iostream>
#include <string>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayPrefilled : public ArrayInit {
public:
	string* size;
	Identifier* fill;
	ArrayPrefilled(string* size, Identifier* fill) {
		this->size = size;
		this->fill = fill;
	}
    virtual ~ArrayPrefilled() {}
	virtual string getType() {return fill->getType();};
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for (int i = 0; i < stoi(*size); i++) {
			result += fill->genCode(context) + ", ";
		}
		if (result != "") {
			result = result.substr(0, result.size() - 2);
		}
		return result;
	};
};