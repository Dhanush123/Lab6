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
	cout << "Description: This programs tells a user how their guess of a random number between 1-10 was." << endl;
	cout << endl;

	int numberToGuess = 1+ (rand() % 10);
	cout << "Guess a number between 1 and 10: ";
	int numberGuessed;
	cin >> numberGuessed;

	//give user guess result
	if (numberGuessed == numberToGuess)
		cout << "Your guess was correct, the number was " << numberToGuess;
	if (numberGuessed < numberToGuess)
		cout << "Your guess was lower than the actual number which was " << numberToGuess;
	else
		cout << "Your guess was higher than the actual number which was " << numberToGuess;
}
