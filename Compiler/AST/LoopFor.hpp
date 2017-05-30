#pragma once

#include <iostream>
#include "CodeGenContext.hpp"
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
    
    virtual string genCode(CodeGenContext* context) {
        string name = var->genCode(context);
        return "for (int " + name + " = " + range->genCode(context, name) + ")" +
            "{" + block->genCode(context) + "}";
    }
};