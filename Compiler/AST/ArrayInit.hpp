#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayInit : public Node {
public:
    virtual ~ArrayInit() {}
	virtual string getType() = 0;
    virtual string genCode(CodeGenContext* context) = 0;
};