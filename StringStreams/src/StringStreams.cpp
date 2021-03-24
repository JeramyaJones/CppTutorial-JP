//============================================================================
// Name        : StringStreams.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {

	//declare veriables
	string name = "bob";
	int age = 32;
	bool female = false;

	//initilize stringstream
	stringstream ss;

	//set variables in stringstream
	ss << "Name is: ";
	ss << name;
	ss << "; age is: ";
	ss << age;
	if (female == false){
		ss << "; sex is: male";
	}
	else {
		ss << "; sex is: female";
	}

	//set all as string
	string info = ss.str();
	//print the string containing ints and strings.
	cout << info << endl;

	return 0;
}
