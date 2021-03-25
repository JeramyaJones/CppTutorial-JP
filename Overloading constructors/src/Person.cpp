/*
 * Person.cpp
 *
 *  Created on: Mar 23, 2021
 *      Author: nathaniel
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	name = "undefined";
	age = 0;
	job = "unemployed";

}

Person::Person(string newName, int newAge, string newJob){
	age = newAge;
	name = newName;
	job = newJob;
}

string Person::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age : ";
	ss << age;
	if (job != ""){
		ss << "; job : ";
		ss << job;
	};


	return ss.str();
}

