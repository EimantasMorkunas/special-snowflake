#pragma once

#include <iostream>

#include "CodeGenContext.hpp"
#include "Evaluation.hpp"

using namespace std;

class LoopWhile : public Loop {
public:
    Evaluation* eval;
    Block* block;

    LoopWhile(Evaluation* eval, Block* block) {
        this->eval = eval;
        this->block = block;
    }
    virtual ~LoopWhile() { delete eval; delete block; }

    virtual string genCode(CodeGenContext* context) {
        return "while (" + eval->genCode(context) + ") {" +
            block->genCode(context) + "}";
    }
};