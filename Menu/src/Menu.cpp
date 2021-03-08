//============================================================================
// Name        : Menu.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Menu.h"
using namespace std;

int main() {
	Menu menu1;
	menu1.showMenu();
	int selection = menu1.getSelection();
	selection = menu1.verifySelection(selection);
	menu1.displaySelection(selection);
	return 0;
}
