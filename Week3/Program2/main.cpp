// Jefferson V. Henry 
// CIS-123 
// Week 3, Program 2
// ~~ Instructions ~~
// Using the console input write a program that asks the user to input two integer
// numbers. After that, swap (exchange) the values inputted and print them in the
// console.
// For example if:
// a = 5;
// b = 10;
// at the end of your program
// a = 10;
// b = 5;

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c;
    // cout << "a=";
    // cin >> a;
    // cout << "b=";
    // cin >> b;
    cout << "not swapped" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;
    c = a;
    a = b;
    b = a;
    cout << "swapped" << endl;
    cout << "a=" << a << endl << "b=" << b << endl;
    system("pause");
    return 0;
}
