#pragma once
#include <iostream>

using namespace std;

class Loop : public Statement {
public:
    virtual ~Loop() {}
    virtual string genCode() { return ""; }
};