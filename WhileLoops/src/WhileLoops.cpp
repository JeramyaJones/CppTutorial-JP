//============================================================================
// Name        : WhileLoops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 0;
	while(i < 5){
		cout << "Hello" << i << endl;
		i++;
	}
	cout << "end" << endl;

	//generate a random number based off time
	srand (time(NULL));
	int random = rand() % 10 + 1;
	cout << random << endl;

	//play with the random number
	int code = random;
	while(code >= 1){
		cout << "number" << code << endl;
		if (code % 2 != 0){
			cout << "Wowzers!" << code << endl;
		}
		else{
			cout << "Boobs" << code << endl;
		}
		code--;
	}




	return 0;
}
