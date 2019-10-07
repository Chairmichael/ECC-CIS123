// Problem 17, pg. 195
// Jefferson V. Henry
// 10/4/2019

#define PI 3.1415
#include <iostream>
using namespace std;

// Generate a table of conversion from radians to degrees.
// Start the radian column at 0.0, and increment by pi/10
// until the radian amount is 2pi.

int main() {
    cout.precision(3);
    cout.setf(ios::fixed);
    cout << "Radians to Degrees" << endl;
    double conversionFactor = 180/PI; // Radians*(this)=Degrees
    double radians = 0, degrees = 0;
    for (int i = 0; i < 20; ++i) {
        cout << radians << "\t" << degrees << endl;
        radians += PI / 10;
        degrees = radians * conversionFactor;
    }

    system("pause");
    return 0;
}