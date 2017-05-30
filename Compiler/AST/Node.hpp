#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class Node {
public:
    virtual ~Node() {}
    virtual string genCode(CodeGenContext* context) { return "Node codeGen"; }
};