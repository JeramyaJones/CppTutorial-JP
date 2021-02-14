//============================================================================
// Name        : Variables.cpp
// Author      : Nate Davis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Total: " <<numberCats + numberDogs << endl;

	cout << "new dog aquired" << endl;
	numberDogs = numberDogs +1;

	cout << "new number of dogs: " << numberDogs << endl;

	return 0;
}
