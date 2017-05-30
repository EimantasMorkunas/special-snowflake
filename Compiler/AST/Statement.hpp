#pragma once
#include <iostream>

using namespace std;

class Statement : public Node {
public:
    virtual ~Statement() {}
    virtual string genCode() { return ""; }
};