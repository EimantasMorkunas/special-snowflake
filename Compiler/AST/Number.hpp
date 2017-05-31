#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class Number : public Identifier {
public:
    virtual ~Number() { }
	virtual string getType() = 0;
    virtual string genCode(CodeGenContext* context) = 0;
};