/*
 * Functions.cpp
 *
 *  Created on: Mar 7, 2021
 *      Author: nathaniel
 */

#include <iostream>
#include "Menu.h"

using namespace std;

void Menu::showMenu() {
	cout << "Combo # 1: bacon, eggs, toast" << endl;
	cout << "Combo # 2: ham, eggs, pancakes" << endl;
	cout << "Combo # 3: turkey, eggs, muffin" << endl;
	cout << "Combo # 4: sausage, eggs, waffle" << endl;
	cout << "Combo # 5: chicken, eggs, biscuit" << endl;
	cout << endl;
}

int Menu::getSelection(){
	cout << "Please input a selection: " << flush;
	int n;
	cin >> n;
	return n;
}

int Menu::verifySelection(int n) {

	while (n > 5 || n < 0){
		cout << "Please enter a number between 1 and 5 to indicate the meal you would like to order: " << flush;
		cin >> n;
	}
	return n;
}

void Menu::displaySelection(int n){
	switch(n){
		case 1:
			cout << "Your bacon, eggs, and toast are being prepared." << endl;
			break;
		case 2:
			cout << "Your ham, eggs, and pancakes are being prepared." << endl;
			break;
		case 3:
			cout << "Your turkey, eggs, and muffin are being prepared." << endl;
			break;
		case 4:
			cout << "Your sausage, eggs, and waffle are being prepared." << endl;
			break;
		case 5:
			cout << "Your chicken, eggs, and biscuit are being prepared." << endl;
			break;
		default:
			cout << "Please enter a number between 1 and 5 to indicate the meal you would like to order." << endl;
		}
}


