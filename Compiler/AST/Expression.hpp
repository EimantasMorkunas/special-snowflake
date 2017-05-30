#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class Expression : public Node {
public:
    Identifier* first;
    virtual ~Expression() {}
    virtual string genCode(CodeGenContext* context) { return ""; }
};