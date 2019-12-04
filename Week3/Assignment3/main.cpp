// Jefferson V. Henry 
// 9/11/2019
// CIS-123 
// Week 3, Program 3

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 5.5, b = 1.5;
    int k = 3;

    cout << "1: a < 10.0 + k == " << (a < 10.0 + k) << endl;
    cout << "2: a + b >= 6.5 == " << (a + b >= 6.5) << endl;
    cout << "3: k != a - b == " << (k != a - b) << endl;
    cout << "4: b - k > a == " << (b - k > a) << endl;
    cout << "5: !(a == 3 * b) == " << (!(a == 3 * b)) << endl;
    cout << "6: -k <= k + 6 == " << (-k <= k + 6) << endl;
    cout << "7: a < 10 && a > 5 == " << (a < 10 && a > 5) << endl;
    cout << "8: fabs(k) > 3 || k < b - a == " << (fabs(k) > 3 || k < b - a) << endl;
    cout << "9: a + b not_eq 6.5 == " << (a + b not_eq 6.5) << endl;
    cout << "10: a < 0 and b < 0 == " << (a < 0 and b < 0) << endl;
    cout << "11: a < 0 not_eq b < 0 == " << (a < 0 not_eq b < 0) << endl; 

    return 0;
}
