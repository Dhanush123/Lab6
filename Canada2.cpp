// Lab 6
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program converts user given Celsius temperature(s) to Fahrenheit one(s)." << endl;
    cout << endl;

    while(true){
    double celsiusTemperature;
    cout << "What's the temperature in Celsius? ";
    cin >> celsiusTemperature;
    if(celsiusTemperature == -999)
    {
    	break;
    }

    double fahrenheitTemperature = ((9.0/5) * celsiusTemperature) + 32;

    cout << celsiusTemperature << " Celsius equals ";
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(1);
    cout << fahrenheitTemperature << " Fahrenheit" << endl;
    cout << endl;
    }
}

