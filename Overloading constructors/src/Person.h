/*
 * Person.h
 *
 *  Created on: Mar 23, 2021
 *      Author: nathaniel
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
	string job;

public:
	Person();
	Person(string newName, int newAge) {name = newName; age = newAge;}; //inline code defined here rather than in the cpp file.
	Person(string newName, int newAge, string newJob); //prototype, defined in cpp file.
	string toString();
};

#endif /* PERSON_H_ */
