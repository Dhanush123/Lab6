// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(0));
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program randomly prints either heads or tails." << endl;
	cout << endl;

	//randomize & choose heads/tails
	int num = rand() % 2;
	if(num == 0){
		cout << "Heads" << endl;
	}
	else{
		cout << "Tails" << endl;
	}

}

