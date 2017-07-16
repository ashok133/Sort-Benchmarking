#include <iostream>
#include "io.h"
using namespace std ;

int main()
{
	int a,b,res ;
	a = readNumber();
	b = readNumber();
	res = a+b ;
	writeAnswer(res);
	return 0;
}
