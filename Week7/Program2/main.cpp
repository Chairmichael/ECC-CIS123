// Jefferson V. Henry 
// CIS-123 
// Week 7, Program 2
// ~~ Instructions ~~

// Write a program that asks the user to input 5 floating point numbers (stored in
// a 5 element array of doubles). Write two functions "minValue" and "maxValue"
// that take into argument an array of doubles and returns a double. "minValue"
// should return the minimum value of the array and "maxValue" should return the
// maximum value of the array.
// eg.
// User inputted:
// 3
// 2.31
// 2.32
// 17
// 19
// Output:
// The minimum value was: 2.31 - minValue(array)
// The maximum value was: 19 - maxValue(array)

#include <iostream>
using namespace std;

double minValue(double nums[]);
double maxValue(double nums[]);

int main() {
    double userNums[5];
    for (int i = 0; i < 5; ++i) {
        cin >> userNums[i];
    }
    cout << minValue(userNums) << endl;
    cout << maxValue(userNums) << endl;
    system("pause");
    return 0;
}

double minValue(double nums[]) {
    double n = nums[0];
    for (int i = 0; i < 5; ++i) {
        if (nums[i] < n) {
            n = nums[i]; 
        }
    }
}

double maxValue(double nums[]) {
    double n = nums[0];
    for (int i = 0; i < 5; ++i) {
        if (nums[i] > n) {
            n = nums[i]; 
        }
    }
}