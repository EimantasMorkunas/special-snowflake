#pragma once
#include <iostream>
#include <string>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayEmpty : public ArrayInit {
public:
	string* size;
	ArrayEmpty(string* size) {
		this->size = size;
	}
    virtual ~ArrayEmpty() {}
	virtual string getType() {return "INTEGER"; };
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for (int i = 0; i < stoi(*size); i++) {
			result += "0, ";
		}
		if (result != "") {
			result = result.substr(0, result.size() - 2);
		}
		return result;
	};
};