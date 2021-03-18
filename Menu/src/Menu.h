/*
 * Menu.h
 *
 *  Created on: Mar 7, 2021
 *      Author: nathaniel
 */

#ifndef MENU_H_
#define MENU_H_

class Menu {
private:
	bool valid;

public:

	Menu();		//Constructor
	~Menu();	//Destructor
	void showMenu();
	int getSelection();
	int verifySelection(int n);
	void displaySelection(int n);
};

#endif /* MENU_H_ */
