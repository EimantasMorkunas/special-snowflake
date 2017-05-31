#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class Identifiers {
public:
    vector<Identifier*> IdentifierList;

    Identifiers() {

    }
    virtual ~Identifiers() {}

    virtual string genCode(CodeGenContext* context) {
        string result = "";
        for(std::vector<Identifier*>::iterator it = IdentifierList.begin(); it != IdentifierList.end(); ++it) {
			result += (*it)->genCode(context) + ",";
		}
        if (result != "") {
			result = result.substr(0, result.size() - 1);
		}
        return result;
     }
};