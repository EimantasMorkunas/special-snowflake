#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class Float : public Identifier {
public:
	string value;
	Float(string value) {
		this->value = value;
	}
    virtual ~Float() {}
	virtual string getType() {return "FLOAT"; }
    virtual string genCode(CodeGenContext* context) { return value; }
};