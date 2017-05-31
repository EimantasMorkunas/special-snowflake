#pragma once
#include <iostream>
#include "CodeGenContext.hpp"

using namespace std;

class ArrayEnumed : public Array {
public:
	Identifiers* idents;
	ArrayEnumed(Identifiers* idents) {
		this->idents = idents;
	}
    virtual ~ArrayEnumed() {}
	virtual string getType() {return idents->IdentifierList[0]->getType();};
    virtual string genCode(CodeGenContext* context) { return "{" + idents->genCode(context) + "}"; }
};