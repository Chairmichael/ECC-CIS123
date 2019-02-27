// Jefferson V. Henry 
// CIS-123 
// Week 5, Program 1, Exercise 1
// ~~ Instructions ~~
// Write a program that asks the user to input an integer number. Then starting
// from that number the program prints out in the console next 100 numbers.
// eg.
// User inputted:
// 11
// Output:
// 12
// 13
// 14
// 15
// ...
// ...
// 111

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < 100; ++i) {
        cout << ++num << endl;
    }
    // system("pause");
    return 0;
}
