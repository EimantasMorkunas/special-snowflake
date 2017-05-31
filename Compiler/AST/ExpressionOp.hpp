#pragma once
#include <iostream>
#include <string>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"

using namespace std;

class ExpressionOp : public Expression {
public:
    string* op;
    Expression* right;
    ExpressionOp(Identifier* var, string* op, Expression* exp) {
        first = var;
        this->op = op;
        right = exp;
    }
    virtual ~ExpressionOp() {}
    virtual string genCode(CodeGenContext* context) { return first->genCode(context) + *op + right->genCode(context); }
};