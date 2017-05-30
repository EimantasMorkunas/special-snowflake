#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class Statement : public Node {
public:
    virtual ~Statement() {}
    virtual string genCode(CodeGenContext* context) { return ""; }
};