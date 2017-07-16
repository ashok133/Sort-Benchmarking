#include <iostream>
#include "calc.h"
using namespace std ;

int main()
{
	int x,y,op,result ;
	cout << "Enter two numbers: " << endl ;
	cin >> x ;
	cin >> y ;
	cout << "Choose an operator: \n\t1: +\n\t2: -\n\t3: *\n\t4: /" <<endl ;
	cin >> op ;
	result = calcResult(x,y,op);
	cout << "The result is: " << result << endl;

}
