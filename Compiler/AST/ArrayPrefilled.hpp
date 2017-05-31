#pragma once
#include <iostream>
#include <string>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayPrefilled : public ArrayInit {
public:
	Integer* size;
	Identifier* fill;
	ArrayPrefilled(Integer* size, Identifier* fill) {
		this->size = size;
		this->fill = fill;
	}
    virtual ~ArrayPrefilled() {}
	virtual string getType() {return fill->getType();};
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for (int i = 0; i < size->value; i++) {
			result += fill->genCode(context) + ", ";
		}
		if (result != "") {
			result = result.substr(0, result.size() - 2);
		}
		return result;
	};
};