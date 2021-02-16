//============================================================================
// Name        : CharAndBool.cpp
// Author      : Nate Davis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;

	cout << bValue << endl;

	char cValue = 'N';
	cout << cValue << endl;

	cout << "Size of char: " << sizeof(char) <<endl;
	wchar_t wValue = 'i';

	cout << (int)wValue << endl;

	return 0;
}
