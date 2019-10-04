// Practice 3.1
// Jefferson V. Henry
// 10/4/2019


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 5.5, b = 1.5, k = 3;
    /* 1 */
    cout << "a < 10.0 + k: " << (a < 10.0 + k) << endl;
    /* 2 */
    cout << "a + b >= 6.5: " << (a + b >= 6.5) << endl;
    /* 3 */
    cout << "k != a - b: " << (k != a - b) << endl;
    /* 4 */
    cout << "b - k > a: " << (b - k > a) << endl;
    /* 5 */
    cout << "!(a == 3 * b): " << (!(a == 3 * b)) << endl;
    /* 6 */
    cout << "-k <= k + 6: " << (-k <= k + 6) << endl;
    /* 7 */
    cout << "a < 10 && a > 5: " << (a < 10 && a > 5) << endl;
    /* 8 */
    cout << "fabs(k) > 3 || k < b - a: " << (fabs(k) > 3 || k < b - a) << endl;
    /* 9 */
    cout << "a + b not_eq 6.5: " << (a + b not_eq 6.5) << endl;
    /* 10 */
    cout << "a < 0 and b < 0: " << (a < 0 and b < 0) << endl;
    /* 11 */
    cout << "a < 0 not_eq b < 0: " << (a < 0 not_eq b < 0) << endl;
    system("pause");
    return 0;
}