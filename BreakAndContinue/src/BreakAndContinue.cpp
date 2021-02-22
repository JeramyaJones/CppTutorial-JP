//============================================================================
// Name        : BreakAndContinue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* break example
	for(int i = 0; i < 5; i++){
		cout << "i is " << i << endl;
		if(i==3){
			break;
		}
		cout << "Looping" << endl;
	}

	cout << "END" <<endl;
*/
	/* continue example
	for(int i = 0; i < 5; i++){
			cout << "i is " << i << endl;
			if(i==3){
				continue;
			}
			cout << "Looping" << endl;
		}*/

	const string password = "Hello";
	string input;

	do {
		cout << "Enter your password: " << flush;
		cin >> input;
		if(input == password){
			break;
		}
			else{
			cout << "Password incorrect" << endl;
		}
	}while (true);

	//display password accepted
	cout << "Password accepted" << endl;

	cout << "END" <<endl;

	return 0;
}
