// Jefferson V. Henry 
// CIS-123 
// Week 3, Program 4
// ~~ Instructions ~~
// Write a program that asks the user to input a temperature in Celsius degrees.
// The result should be the temperature expressed in Fahrenheit and Kelvin scales.
// Find the conversion formulas on the web.

#include <iostream>
using namespace std;

int main() {
    double cTemp;
    cout << "Provide a temperature in degrees Celsius." << endl;
    cout << "Degrees Celsius = ";
    cin >> cTemp;

    double fTemp, kTemp;
    fTemp = cTemp * (9/5.0) + 32;
    kTemp = cTemp + 273.15;

    cout << "Degrees Fahrenheit = " << fTemp << endl;
    cout << "Kelvins = " << kTemp << endl;
    return 0;
}
