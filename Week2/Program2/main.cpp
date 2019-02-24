// Jefferson V. Henry 
// CIS-123 
// Week 2, Program 2 
// ~~ Instructions ~~
// Initialize the variables from the first exercise with values of your own choice.
// Use cout (console output) to print out the values and their addresses in console
// (each should be on different line)
// eg.
// variable a;
// (variable a value, address of variable a)
// variable b;
// (variable b value, address of variable b)

#include <iostream>
using namespace std;

int main() {
    char a = 'f';
    cout << a << endl;
    cout << &a << endl;

    int b = 12;
    cout << b << endl;
    cout << &b << endl;  

    short c = 2;
    cout << c << endl;
    cout << &c << endl;

    float d = 12.3;
    cout << d << endl;
    cout << &d << endl;

    double e = 321.123;
    cout << e << endl;
    cout << &e << endl;

    return 0;
}
