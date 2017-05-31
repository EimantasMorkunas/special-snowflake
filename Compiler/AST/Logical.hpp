#pragma once

#include <iostream>

#include "Evaluation.hpp"
#include "CodeGenContext.hpp"

using namespace std;

class Logical : public Statement {
public:
    int type;
    Evaluation* eval;
    Block* block1;
    Block* block2;
    Logical* logical;

    Logical(int type, Evaluation* eval, Block* block1,
        Block* block2, Logical* logical) {
        this->type = type;
        this->eval = eval;
        this->block1 = block1;
        this->block2 = block2;
        this->logical = logical;
    }
    virtual ~Logical() { 
        delete eval; delete block1;
        delete block2; delete logical;
    }

    virtual string genCode(CodeGenContext* context) {
        if (type == 1) {
            return "if (" + eval->genCode(context) + ") {" + block1->genCode(context) +
                "} else {" + block2->genCode(context) + "}";
        } else if (type == 2) {
            return "if (" + eval->genCode(context) + ") {" + block1->genCode(context) +
                "} else " + logical->genCode(context);
        } else {
            return "if (" + eval->genCode(context) + ") {" + block1->genCode(context) + "}";
        }
    }
};