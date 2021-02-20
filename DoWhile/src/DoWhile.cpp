//============================================================================
// Name        : DoWhile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const string password = "Hello";
	string input;

	do {
		cout << "Enter your password: " << flush;
		cin >> input;
		if(input != password){
			cout << "Password incorrect" << endl;
		}
	}while (input != password);

	//display password accepted
	cout << "Password accepted" << endl;

	return 0;
}
