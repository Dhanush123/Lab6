// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program calculates the change due for user given values of cash payment and tendered amount and gives a concise output." << endl;
    cout << endl;

    int cashPayment;
    cout << "Cash payment amount: ";
    cin >> cashPayment;
    cin.ignore(1000, 10);

    int amountTendered;
    cout << "Tendered amount: ";
    cin >> amountTendered;
    cin.ignore(1000, 10);

    int changeDue = amountTendered - cashPayment;

    cout << "Change due: " << changeDue << endl;

    //do all the change calculations
    int hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;

    int tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;

    int fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;

    int thousands = changeDue / 1000;
    changeDue = changeDue % 1000;

    int fiveHundreds = changeDue / 500;
    changeDue = changeDue % 500;

    int hundreds = changeDue / 100;
    changeDue = changeDue % 100;

    int fifties = changeDue / 50;
    changeDue = changeDue % 50;

    int twenties = changeDue / 20;
    changeDue = changeDue % 20;

    int tens = changeDue / 10;
    changeDue = changeDue % 10;

    int fives = changeDue / 5;
    changeDue = changeDue % 5;

    int twos = changeDue / 2;
    changeDue = changeDue % 2;

    int ones = changeDue / 1;
    changeDue = changeDue % 1;

    cout << "" << endl;
    cout << "Change paid out in:" << endl;
    if (hundredThousands != 0)
    cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
    if (tenThousands != 0)
    cout << " this many ten thousand dollar bills: " << tenThousands << endl;
    if (fiveThousands != 0)
    cout << " this many five thousand dollar bills: " << fiveThousands << endl;
    if (thousands != 0)
    cout << " this many thousand dollar bills: " << thousands << endl;
    if (fiveHundreds != 0)
    cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
    if (hundreds != 0)
    cout << " this many hundred dollar bills: " << hundreds << endl;
    if (fifties != 0)
    cout << " this many fifty dollar bills: " << fifties << endl;
    if (twenties != 0)
    cout << " this many twenty dollar bills: " << twenties << endl;
    if (tens != 0)
    cout << " this many ten dollar bills: " << tens << endl;
    if (fives != 0)
    cout << " this many five dollar bills: " << fives << endl;
    if (twos != 0)
    cout << " this many two dollar bills: " << twos << endl;
    if (ones != 0)
    cout << " this many one dollar bills: " << ones << endl;
}

