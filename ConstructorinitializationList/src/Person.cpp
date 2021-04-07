/*
 * Person.cpp
 *
 *  Created on: Apr 2, 2021
 *      Author: nathaniel
 */

#include "Person.h"
#include <sstream>

Person::Person(): name("unnamed"), age(0) {

}

Person::Person(string name, int age): name(name), age(age) {

}

string Person::toString() {
	stringstream ss;

	ss << "Name : ";
	ss << name;
	ss << "; Age : ";
	ss << age;

	return ss.str();
}

