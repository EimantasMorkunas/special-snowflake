#pragma once

#include <iostream>

#include "Identifiers.hpp"
#include "EvalGroupSub.hpp"
#include "CodeGenContext.hpp"

using namespace std;

class EvalGroup {
public:
    Identifiers* identifiers;
    string comp;
    EvalGroupSub* evalGroupSub;

    EvalGroup(Identifiers* identifiers, string comp,
        EvalGroupSub* evalGroupSub) {
        this->identifiers = identifiers;
        this->comp = comp;
        this->evalGroupSub = evalGroupSub;
    }

    virtual ~EvalGroup() { delete identifiers; delete evalGroupSub; }

    virtual string genCode(CodeGenContext* context) {
        Identifiers* other = evalGroupSub->identifiers;

        int sizeThis = identifiers->IdentifierList.size();
        int sizeOther = other->IdentifierList.size();
        string result = "";

        for(int i = 0; i < sizeThis; ++i) {
            for(int j = 0; j < sizeOther; ++j) {
                if (i != 0 || j != 0) {
                    result += " && ";
                }
			    result += identifiers->IdentifierList[i]->genCode(context) + " " + comp
                    + " " + other->IdentifierList[j]->genCode(context);
            }
		}

        return result + evalGroupSub->genCode(context);
    }
};