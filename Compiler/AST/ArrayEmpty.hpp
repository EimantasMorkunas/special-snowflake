#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayEmpty : public ArrayInit {
public:
	Integer* size;
	ArrayEmpty(Integer* size) {
		this->size = size;
	}
    virtual ~ArrayEmpty() {}
	virtual string getType() {return "INTEGER"; };
    virtual string genCode(CodeGenContext* context) {
		string result = "";
		for (int i = 0; i < size->value; i++) {
			result += "0, ";
		}
		if (result != "") {
			result = result.substr(0, result.size() - 2);
		}
		return result;
	};
};