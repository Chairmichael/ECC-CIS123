// Jefferson V. Henry 
// CIS-123 
// Week 4, Program 1
// ~~ Instructions ~~
// Write an application that asks the user to input four numbers. The inputted
// numbers should be stored in a 4 element array of doubles. The numbers should be
// summarized and the result printed in the console as well as the address of first
// and last element of the array.
// eg.
// User inputted:
// val 1 = 2
// val 2 = 3
// val 3 = 5
// val 4 = 6
// Output:
// Result = 16
// Address of first element = 0x69fed8
// Address of last element = 0x69fef8

#include <iostream>
using namespace std;

int main() {
    int length = 4, sum = 0, input = 0;
    double myData[length];
    cout << "Enter " << length << " integers" << endl;
    for (int i = 0; i < length; ++i) {
        cin >> input;
        myData[i] = input;
        sum += myData[i];
    }
    cout << "sum = " << sum << endl;
    cout << "First address =\t" << &myData[0] << endl;
    cout << "Last address =\t" << &myData[length-1] << endl;
    // system("pause");
    return 0;
}
