#pragma once

#include <iostream>

#include "Bool.hpp"
#include "CodeGenContext.hpp"

using namespace std;

class Evaluation {
public:
    Bool* bb;
    string logOp;
    Evaluation* eval;

    Evaluation(Bool* bb, string logOp, Evaluation* eval) {
      this->bb = bb;
      this->logOp = logOp;
      this->eval = eval;
    }
    virtual ~Evaluation() { 
        delete bb; delete eval;
    }

    virtual string genCode(CodeGenContext* context) {
       return logOp == "" ? "(" + bb->genCode(context) + ")" : 
        "(" + bb->genCode(context) + ") " + logOp + " " + eval->genCode(context);

    }
};