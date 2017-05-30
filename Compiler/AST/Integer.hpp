#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class Integer : public Identifier {
public:
	int value;
	Integer(char* value) {
		this->value = atoi(value);
	}
    virtual ~Integer() {}
	virtual string getType() {return "INTEGER"; }
    virtual string genCode(CodeGenContext* context) { return to_string(value); }
};