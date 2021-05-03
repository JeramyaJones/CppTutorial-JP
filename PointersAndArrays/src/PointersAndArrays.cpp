//============================================================================
// Name        : PointersAndArrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = {"One", "Two", "Three"};
	int amount = sizeof(texts)/sizeof(string);
	string *pTexts = texts;

	for (int i = 0; i < amount; i++){
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < amount; i++, pTexts++){
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(true) {
		cout << *pElement << " " << flush;
		if (pElement == pEnd){
			break;
		}
		pElement++;
	}





	return 0;
}
