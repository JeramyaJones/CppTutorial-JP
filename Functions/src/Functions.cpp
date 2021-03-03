//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "utils.h"
using namespace std;

void showMenu(string one, string two, string three, string four, string five);

string comboOne = "bacon, eggs, toast";
string comboTwo = "ham, eggs, pancakes";
string comboThree = "turkey, eggs, muffin";
string comboFour = "sausage, eggs, waffle";
string comboFive = "chicken, eggs, biscuit";

int main() {
	showMenu(comboOne, comboTwo, comboThree, comboFour, comboFive);
	int selection = getSelection();
	displaySelection(selection);
	return 0;
}


void showMenu(string one, string two, string three, string four, string five){
	cout << "Combo # 1: " << one << endl;
	cout << "Combo # 2: " << two << endl;
	cout << "Combo # 3: " << three << endl;
	cout << "Combo # 4: " << four << endl;
	cout << "Combo # 5: " << five << endl;
	cout << endl;
}

int getSelection(){
	cout << "Please input a selection: " << flush;
	int selection;
	cin >> selection;
	return selection;
}

void displaySelection(int n){
	switch(n){
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
		default:
			cout << "Please enter a number between 1 and 5 to indicate the meal you would like to order." << endl;
		}
}

