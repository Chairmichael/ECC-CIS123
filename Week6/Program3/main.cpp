// Jefferson V. Henry 
// CIS-123 
// Week 6, Program 3
// ~~ Instructions ~~
// Write a program that asks the user to input any number (integer or floating
// point) and the n-th power (integer) the number should be raised to. Then
// calculate the result of the exponentiation of this number to the said power.
// eg.
// User inputted:
// Number: 2
// N-th power: 5
// Output:
// The number 2 to the power of 5 is equal to 32.

#include <iostream>
using namespace std;

int main() {
    int num, pow, result;
    cout << "Number: ";
    cin >> num;
    cout << "Power: ";
    cin >> pow;
    result = num;

    for (int i = 0; i < pow; ++i) {
        result *= num;
    }
    cout << "Result: " << result << endl;

    system("pause");
    return 0;
}
