#pragma once
#include <iostream>
#include <vector>
#include "Node.hpp"
#include "Statement.hpp"

using namespace std;

class Block : public Node {
public:
	vector<Statement*> StatementList;
	Block() {}
    virtual ~Block() {}
    virtual string codeGen() {
		string result = "";
		for(std::vector<Statement*>::iterator it = StatementList.begin(); it != StatementList.end(); ++it) {
			result += (*it)->codeGen() + ";";
		}
		return result;
	}
};