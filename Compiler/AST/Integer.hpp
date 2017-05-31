#pragma once

#include <iostream>

#include "CodeGenContext.hpp"
#include "Identifier.hpp"
#include "Number.hpp"

using namespace std;

class Integer : public Number {
public:
	string value;
	Integer(string value) {
		this->value = value;
	}
    virtual ~Integer() {}
	virtual string getType() { return "INTEGER"; }
    virtual string genCode(CodeGenContext* context) { return value; }
};