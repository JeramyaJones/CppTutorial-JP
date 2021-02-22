//============================================================================
// Name        : MultidimensionalArrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string animals[2][3] = {
			{"Fox", "Dog", "Cat"},
			{"Mouse", "Squirrel", "Parrot"}
	};

	for (int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	// 1-10 times table
	int table[10][10];
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			table[i][j] = (i * j);
			//cout << i << "X" << j << "=" << table[i][j] << endl;
		}
	}

	for(int i=1; i<=10; i++){
			for(int j=1; j<=10; j++){
				if(j == 10){
					cout << table[i][j] << endl;
				}
				else{
					cout << table[i][j] << ", " << flush;
				}
			}
	}



	/*
	for (int i=0; i<11; i++){
			for(int j=0; j<11; j++){
				int total = j * i;
				cout << j << " X " << i << " = " << total << endl;
			}
	}*/






	return 0;
}
