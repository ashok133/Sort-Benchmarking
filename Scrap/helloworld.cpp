#include <iostream>
#include "add.h"
using namespace std ;

// function prototyping
// int fact(int x) ;
// int add(int x, int y);

int main()
{
	int f,x,y,result;
	// cout << "Hello World!" << endl ;
	cout << "Enter the value of f: "  ;
	cin >> f ;
	// cout << "Entered value times 2 is " << (x*2) << endl;
	int fx ;
	fx = fact(f);
	cout << "Factorial of " << f <<" is: " << fx << endl ;
	cout << "Enter x and y: " << endl ;
	cin >> x;
	cin >> y;
	result = add(x,y);
	cout << x << " + " << y << " = " << result << endl;
	return 0;
}


