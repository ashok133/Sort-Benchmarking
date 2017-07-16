#include <iostream>
using namespace std ;

int calcResult(int x, int y, int op)
{
	if (op == 1) return x+y;
	else if (op == 2) return x-y;
	else if (op == 3) return x*y;
	else if (op == 4 && x>y) return x/y;
	else 
		{
			cout << "Invalid operator or numbers. Try again." <<endl;
			exit(0);	
		}
}