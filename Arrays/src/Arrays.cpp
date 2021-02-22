//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Array of integers" << endl;
	cout << "=================" << endl;

	int value[3];

	value[0] = 88;
	value[1] = 45;
	value[2] = 6;

	cout << value[0] << endl;
	cout << value[1] << endl;
	cout << value[2] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "=================" << endl;

	double numbers[4] = {4.5, 2.3, 7.2, 8.1};

	for (int i = 0; i < 4; i++){
		cout << "element at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initialiazing with zero values" << endl;
	cout << "=================" << endl;

	int numberArray[8] = { };

	for (int i = 0; i < 8; i++){
		cout << "element at index " << i << ": " << numberArray[i] << endl;
	}

	cout << endl << "Initialiazing with strings" << endl;
	cout << "=================" << endl;
	//Array of strings
	string texts[] = {"apple", "banana", "orange"};

	for (int i = 0; i < 3; i++){
			cout << "element at index " << i << ": " << texts[i] << endl;
		}

	cout << endl << "12 times table" << endl;
	cout << "=================" << endl;
	//12 times table
	int timesTable[12] = { };
	for (int i = 0; i < 12; i++){
		timesTable[i] = (i * 12);
		cout << "12 X " << i << " = " << timesTable[i] << endl;
	}










	return 0;
}
