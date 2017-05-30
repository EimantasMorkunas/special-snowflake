#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Node.hpp"

using namespace std;

class Identifier : public Node {
public:
    virtual ~Identifier() {}
    virtual string getType() = 0;
    virtual string genCode(CodeGenContext* context) = 0;
};