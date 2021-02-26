//============================================================================
// Name        : switchmenu.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string comboOne = "bacon, eggs, toast";
	string comboTwo = "ham, eggs, pancakes";
	string comboThree = "turkey, eggs, muffin";
	string comboFour = "sausage, eggs, waffle";
	string comboFive = "chicken, eggs, bisquite";

	cout << "Combo # 1: " << comboOne << endl;
	cout << "Combo # 2: " << comboTwo << endl;
	cout << "Combo # 3: " << comboThree << endl;
	cout << "Combo # 4: " << comboFour << endl;
	cout << "Combo # 5: " << comboFive << endl;
	cout << endl;
	cout << "Please input a selection: " << flush;

	int selection;
	cin >> selection;

	switch(selection){
	case 1:
		cout << "Your " << comboOne << " is being prepared." << endl;
		break;
	case 2:
		cout << "Your " << comboTwo << " is being prepared." << endl;
		break;
	case 3:
		cout << "Your " << comboThree << " is being prepared." << endl;
		break;
	case 4:
		cout << "Your " << comboFour << " is being prepared." << endl;
		break;
	case 5:
		cout << "Your " << comboFive << " is being prepared." << endl;
		break;
	}

	return 0;
}
