#pragma once
#include <iostream>

using namespace std;

class LoopWhile : public Loop {
public:
    LoopWhile() {}
    virtual ~LoopWhile() {}

    virtual string genCode() { return ""; }
};