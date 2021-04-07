/*
 * Person.cpp
 *
 *  Created on: Apr 2, 2021
 *      Author: nathaniel
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	age = 0;
	name = "";

}

Person::Person(string name, int age){
	this->age=age;
	this->name=name;

}

string Person::toString() {
	stringstream ss;

	ss << "Name : ";
	ss << name;
	ss << "; Age : ";
	ss << age;

	return ss.str();
}

