/*
 * Cat.cpp
 *
 *  Created on: Mar 7, 2021
 *      Author: nathaniel
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed" << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meoowwwww" << endl;
	} else {
		cout << "Ssssss" << endl;
	}
}

void Cat::jump() {
	cout << "Jump!!" << endl;
}

