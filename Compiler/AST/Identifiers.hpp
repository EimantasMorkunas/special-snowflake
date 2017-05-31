#pragma once

#include <vector>
#include <string>
#include <iostream>

#include "Expression.hpp"

using namespace std;

class Identifiers {
public:
    vector<Identifier*> IdentifierList;

    Identifiers() {

    }
    virtual ~Identifiers() {}

    virtual string genCode() { return "Shit works, gg"; }
};