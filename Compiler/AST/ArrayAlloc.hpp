#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayAlloc : public Array {
public:
	ArrayInit* init;
	ArrayAlloc(ArrayInit* init) {
		this->init = init;
	}
    virtual ~ArrayAlloc() {}
	virtual string getType() {return init->getType();}
    virtual string genCode(CodeGenContext* context) { return "{" + init->genCode(context) + "}"; }
};