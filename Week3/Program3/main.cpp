// Jefferson V. Henry 
// CIS-123 
// Week 3, Program 3
// ~~ Instructions ~~
// Write a program that asks the user to input a value of length expressed in
// inches, convert it to centimeters and print in the console.

#include <iostream>
using namespace std;

int main() {
    double length;
    cout << "inches = ";
    cin >> length;
    length *= 2.54;
    cout << "centimeters = " << length << endl;
    return 0;
}
