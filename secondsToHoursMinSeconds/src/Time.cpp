/*
 * Time.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: nathaniel
 */

#include <iostream>
#include "Time.h"

using namespace std;


Time::Time() {
	// TODO Auto-generated constructor stub
}


void Time::askSeconds(){
	cout << "Please enter the amount of seconds you would like converted to hours, minutes, seconds: " << flush;
}

int Time::getInput(){
	int n;
	cin >> n;
	return n;
}



void Time::convert(int seconds) {
	int remainder = 0;
	int hours = 0;
	int minutes = 0;
	bool isHours = seconds >= 3600;
	bool isMinutes = seconds >= 60;

	if (isHours == true){
		hours = seconds/3600;
		remainder = seconds%3600;
		minutes = remainder/60;
		remainder = remainder%60;
		seconds = remainder;
	}

	else if (isMinutes == true) {
		minutes = seconds/60;
		remainder = seconds%60;
		seconds = remainder;
	}
	cout << "Hours: " << hours << endl << "Minutes: " << minutes << endl << "Seconds: " << seconds << endl;

}








