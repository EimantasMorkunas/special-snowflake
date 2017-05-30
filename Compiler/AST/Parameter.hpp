#pragma once
#include <iostream>
#include "Node.hpp"
#include "TypeName.hpp"

using namespace std;

class Parameter : public Node {
public:
	Variable* name;
	TypeName* type;
	bool isOut;
	Parameter(Variable* name, TypeName* type, bool isOut) {
		this->name = name;
		this->type = type;
		this->isOut = isOut;
	}
    virtual ~Parameter() {}
    virtual string codeGen() {
		string result = type->codeGen() + " ";
		if (isOut) {
			result += "&";
		}
		return result + name->codeGen();
	}
};