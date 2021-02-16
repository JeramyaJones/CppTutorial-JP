//============================================================================
// Name        : FloatingPointTypes.cpp
// Author      : Nate Davis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;
	cout << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;
	double dValue = 76.4;
	cout << setprecision(20) << fixed << dValue << endl;
	long double lValue = 123.456789876543210;

	cout << setprecision(20) << fixed << lValue << endl;

	cout << sizeof(lValue) << endl;













	return 0;
}
