//============================================================================
// Name        : Arithmetic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


/* Operators in order of precedence
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 */

/*
 * homework
 * write a program that takes seconds and converts them to hours, minutes, seconds.
 * Write a for loop that iterates 10,000 times; outputs a dot every 100 iterations. (use mod%)
 */


int main() {

	double value1 = (double)7/2; //the solution displays a decimal point because double will support it.
	cout << value1 <<endl;

	int value2 = (int)7.3;
	cout << value2 <<endl;  //the remainder .3 is discarded because an int cant contain it.

	int value3 = 8;
	value3 += 1;	//value3 = value3+1 or value3++
	cout << value3 <<endl;

	int value4 = 10;
	value4 /= 5;	//value4 = value4 / 5
	cout << value4 << endl;

	int value5 = 13 % 5;	//mod givs the remainder of a division expression.
	cout << value5 <<endl;

	double equation = ((5/4)%2)+(2*6);	//always use brackets
	cout << equation <<endl;
















	return 0;
}










