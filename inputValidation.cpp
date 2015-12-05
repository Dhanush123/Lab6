// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include <cmath>

int main()
{
  cout << "Programmer: Dhanush Patel" << endl;
  cout << "Description: This program calculates a mortgage given a predetermined amount of money borrowed after a correct password has been entered." << endl;

  // input values
  int years = 15;
  int D = 1000;

  // output (calculated) values
  double p = 0.065 / 12; // 6.5% annual interest rate
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);

  cout << endl;
  //password entering
  string password = "pass123";
  string passwordEntered;
  do{
	cout << "Enter your password: ";
	cin >> passwordEntered;
  }while(password != passwordEntered);

  cout << endl;
  // formatting output (see 4.2)
  cout << "In " << years << " years, " << "$" << D << " deposited per month will grow to " << "$";
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout << S << "." << endl;
}





