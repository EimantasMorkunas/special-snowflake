#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Node.hpp"

using namespace std;

class CallParameter : public Node {
public:
	Identifier* name;
	bool isOut;
	CallParameter(Identifier* name, bool isOut) {
		this->name = name;
		this->isOut = isOut;
	}
    virtual ~CallParameter() {}
    virtual string genCode(CodeGenContext* context) {
		return name->genCode(context);
	}
};