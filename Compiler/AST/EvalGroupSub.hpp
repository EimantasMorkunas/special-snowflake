#pragma once

#include <iostream>

#include "CodeGenContext.hpp"

using namespace std;

class EvalGroupSub {
public:
    Identifiers* identifiers;
    string comp;
    EvalGroupSub* evalGroupSub;

    EvalGroupSub(Identifiers* identifiers, string comp,
        EvalGroupSub* evalGroupSub) {
        this->identifiers = identifiers;
        this->comp = comp;
        this->evalGroupSub = evalGroupSub;
    }

    virtual ~EvalGroupSub() { delete identifiers; delete evalGroupSub; }

    virtual string genCode(CodeGenContext* context) {
        if (evalGroupSub == nullptr)
            return "";
        
        Identifiers* other = evalGroupSub->identifiers;

        int sizeThis = identifiers->IdentifierList.size();
        int sizeOther = other->IdentifierList.size();
        string result = "";

        for(int i = 0; i < sizeThis; ++i) {
            for(int j = 0; j < sizeOther; ++j) {
			    result += " && " + identifiers->IdentifierList[i]->genCode(context) + " " + comp
                    + " " + other->IdentifierList[j]->genCode(context);
            }
		}

        return result + evalGroupSub->genCode(context);
    }
};