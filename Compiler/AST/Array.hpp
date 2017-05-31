#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class Array : public Node {
public:
    virtual ~Array() {}
	virtual string getType() = 0;
    virtual string genCode(CodeGenContext* context) = 0;
};