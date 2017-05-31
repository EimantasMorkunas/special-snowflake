#pragma once
#include <iostream>
#include <string>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class ExpressionBrackets : public Expression {
public:
    string* op;
    Expression* right;
    ExpressionBrackets(Identifier* var, string* op, Expression* exp) {
        first = var;
        this->op = op;
        right = exp;
    }
    virtual ~ExpressionBrackets() {}
    virtual string genCode(CodeGenContext* context) { return first->genCode(context) + *op + "(" + right->genCode(context) + ")"; }
};