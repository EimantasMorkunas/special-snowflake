#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class TypeName : public Node {
public:
	string* name;
	TypeName(string* name) {
        this->name = name;
	}
    virtual ~TypeName() {}
    virtual string genCode(CodeGenContext* context) { return *name; }
};