#pragma once
#include <iostream>
#include "Identifier.hpp"

using namespace std;

class Integer : public Identifier {
public:
	int value;
	Integer(char* value) {
		this->value = atoi(value);
	}
    virtual ~Integer() {}
    virtual string codeGen() { return to_string(value); }
};