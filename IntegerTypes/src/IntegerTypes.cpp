//============================================================================
// Name        : IntegerTypes.cpp
// Author      : Nate Davis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Minimum int value: " << INT_MIN << endl;

	long int longValue = 4206942069;
	cout << "Long number: " << longValue << endl;

	short int shortValue = 12345;
	cout << "short number: " << shortValue << endl;

	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;

	return 0;
}
