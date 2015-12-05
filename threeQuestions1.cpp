// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

int main() {

	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program gives a correct/incorrect output based on user response to addition and subtraction problems." << endl;
    cout << endl;

	int answer1 = 5;
	int input1;
	cout << "2 + 3 = ";
	cin >> input1;
	if (answer1 == input1){
		cout << "Correct" << endl;
	}
	else{
		cout << "Incorrect" << endl;
	}

	int answer2 = 3;
	int input2;
	cout << "102 - 99 = ";
	cin >> input2;
	if (answer2 == input2){
		cout << "Correct" << endl;
	}
	else{
		cout << "Incorrect" << endl;
	}

	int answer3 = 41;
	int input3;
	cout << "12 + 29 = ";
	cin >> input3;
	if (answer3 == input3){
		cout << "Correct" << endl;
	}
	else{
		cout << "Incorrect" << endl;
	}

}
