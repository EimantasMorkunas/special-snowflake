#pragma once
#include <iostream>
#include "CodeGenContext.hpp"
#include "Identifier.hpp"
#include "Expression.hpp"

using namespace std;

class ExpressionBasic : public Expression {
public:
	ExpressionBasic(Identifier* ident) {
		first = ident;
	}
    virtual ~ExpressionBasic() {}
    virtual string genCode(CodeGenContext* context) { return first->genCode(context); }
};