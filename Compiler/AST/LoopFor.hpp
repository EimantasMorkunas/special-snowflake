#pragma once

#include <iostream>

#include "Variable.hpp"
#include "Range.hpp"
#include "Block.hpp"

using namespace std;

class LoopFor : public Loop {
public:
    Variable* var;
    Range* range;
    Block* block;

    LoopFor(Variable* var, Range* range, Block* block) {
        this->var = var;
        this->range = range;
        this->block = block;
    }
    virtual ~LoopFor() { delete var; delete range; delete block; }
    
    virtual string genCode() {
        string name = var->genCode();
        return "for (int " + name + " = " + range->genCode(name) + ")" +
            "{" + block->genCode() + "}";
    }
};