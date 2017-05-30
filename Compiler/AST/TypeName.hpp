#pragma once
#include <iostream>

using namespace std;

class TypeName : public Node {
public:
	string* name;
	TypeName(string* name) {
        this->name = name;
	}
    virtual ~TypeName() {}
    virtual string codeGen() { return *name; }
};