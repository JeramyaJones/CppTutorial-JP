/*
 * Cat.cpp
 *
 *  Created on: Mar 14, 2021
 *      Author: nathaniel
 */

#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if(happy){
		cout << "Yayyyy!" << endl;
	}
	else{
		cout << "You bastard!" << endl;
	}
}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}

