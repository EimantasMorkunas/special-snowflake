#pragma once
#include <iostream>
#include "Expression.hpp"

using namespace std;

class Identifier : public Expression {
public:
    virtual ~Identifier() {}
    virtual string genCode() { return "Shit works, gg"; }
};