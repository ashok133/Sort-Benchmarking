#include <iostream>
using namespace std ;

int readNumber()
{
	int x ;
	cout << "Enter a number: " ;
	cin >> x ;
	return x ;
}

void writeAnswer(int res)
{
	cout << "The result is: " << res << endl;
}