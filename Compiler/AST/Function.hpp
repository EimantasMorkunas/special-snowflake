#pragma once
#include <iostream>
#include "Node.hpp"
#include "Parameters.hpp"

using namespace std;

class Function : public Node {
public:
	Block* block;
	Variable* name;
	Parameters* params;
	Function(Variable* name, Parameters* params, Block* block) {
		this->name = name;
		this->block = block;
		this->params = params;
	}
    virtual ~Function() {}
    virtual string genCode() { return "int " + name->genCode() + "(" + params->genCode() + "){" + block->genCode() + "}"; }
};