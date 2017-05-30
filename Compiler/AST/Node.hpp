#pragma once
#include <iostream>

using namespace std;

class Node {
public:
    virtual ~Node() {}
    virtual string genCode() { return "Node codeGen"; }
};