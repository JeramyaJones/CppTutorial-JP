//============================================================================
// Name        : IfElse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "1. \tAdd new record." << endl;
	cout << "2. \tSearch record." << endl;
	cout << "3. \tView record." << endl;
	cout << "4. \tQuit." << endl;
	cout << "5. \tDelete record." << endl;

	cout << "Enter your selection: " << flush;
	int value;
	cin >> value;
	if (value < 3){
		cout << "Insuffecent previlgies to use these menu options." << endl;
	}
	else{
		cout << "command accessable." << endl;
	}





	return 0;
}
