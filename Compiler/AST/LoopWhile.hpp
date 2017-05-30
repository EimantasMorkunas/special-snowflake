#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class LoopWhile : public Loop {
public:
    LoopWhile() {}
    virtual ~LoopWhile() {}

    virtual string genCode(CodeGenContext* context) { return ""; }
};