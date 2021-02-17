//============================================================================
// Name        : Conditions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * == equality test
 * != Not equals
 * < less than
 * > greater than
 * <= less than or equal to
 * >= greater than or equal to
 */

int main() {

	int value1 = 7;
	int value2 = 4;


	if(value1 < 8){
		cout << "Condition one is true" << endl;
	}

	else {
		cout << " Condition one is false" << endl;
	}

	//AND
	if(value1 == 7 && value2 == 4){
			cout << "Condition two is true" << endl;
		}

		else {
			cout << " Condition two is false" << endl;
		}

	//OR
	if(value1 < 8 || value2 < 3){
			cout << "Condition three is true" << endl;
		}

		else {
			cout << " Condition three is false" << endl;
		}

	if((value2 != 8 && value1 == 10) || value1 < 10){
		cout << "Condition 4: true" << endl;
	}
	else{
		cout << "Condition 4: false" << endl;
	}

	//combine conditons into bools and use them in the if statement to make your code more readable.
	bool condition1 = (value2 != 8 && value1 == 10);
	bool condition2 = value1 < 10;

	if(condition1 || condition2){
		cout << "Condition 5 true" << endl;
	}
	else {
		cout << "Condition 5 true" << endl;
	}














	return 0;
}
