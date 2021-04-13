//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void manipulate(double *pValue) {

	cout << " 2.Value of double manipulate " << *pValue << endl;

	*pValue = 10.0;

	cout << "3. Value of double manipulate " << *pValue << endl;
}

int main() {

	int nValue = 8;

	int* pnValue = &nValue;

	cout << "int value: " << nValue << endl;
	cout << "pointer to int address: " << pnValue << endl;
	cout << "int value via pointer: " << *pnValue << endl;

	cout << "+++++++++++++++++++++++" <<endl;

	double dValue = 1234.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;


	return 0;
}
