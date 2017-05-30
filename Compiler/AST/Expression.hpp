#pragma once
#include <iostream>

using namespace std;

class Expression : public Node {
public:
    virtual ~Expression() {}
    virtual string codeGen() { return ""; }
};