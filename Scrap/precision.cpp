#include <iostream>
#include <iomanip>		// for setting precision
using namespace std ;
int main()
{	
	int prec = 7 ;
	double f(1.23333e13f) ;
	cout << setprecision(prec);
	cout << sizeof(f) << endl;
	//cout << "Enter a float: " ;
	//cin >> setprecision(9) ;
	// cin >> f ;
	cout << "Precision upto " << prec << " digits: " << f << endl ;
	return 0 ;
}