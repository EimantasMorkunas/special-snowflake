#include <iostream>

extern int yyparse();

using namespace std;

int main()
{
	int result = yyparse();
	if (result == 0)
		cout << "Grammar is correct." << endl;
	else
		cout << "Grammar is incorrect." << endl;
	return result;
}