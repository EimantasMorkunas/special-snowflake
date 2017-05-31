#pragma once

#include <iostream>

#include "EvalGroup.hpp"
#include "CodeGenContext.hpp"

using namespace std;

class BooleanExp {
public:
    EvalGroup* evalGroup;
    string boolean;
    
    BooleanExp(EvalGroup* evalGroup, string boolean) {
        this->evalGroup = evalGroup;
        this->boolean = boolean;
    }
    virtual ~BooleanExp() { delete evalGroup; }

    virtual string genCode(CodeGenContext* context) {
        return evalGroup == nullptr ? boolean : evalGroup->genCode(context);
    }
};