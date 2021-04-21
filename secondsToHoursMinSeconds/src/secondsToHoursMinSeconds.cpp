//============================================================================
// Name        : secondsToHoursMinSeconds.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Time.h"
using namespace std;

int main() {

	Time time;
	time.askSeconds();
	int seconds = time.getInput();
	time.convert(seconds);











	return 0;
}
