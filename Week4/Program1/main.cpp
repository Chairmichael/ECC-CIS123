// Practice 4.1
// Jefferson V. Henry
// 10/4/2019


#include <iostream>
using namespace std;

int main() {
    /* 1 */
    cout << "Problem 1:" << endl;
    int count = 1;
    while (count < 5) {
        ++count;
    }
    cout << count << endl;
    cout << endl;

    /* 2 */
    // Infinite loop: -count doesn't do anything
    cout << "Problem 2:" << "Infinite loop: -count doesn't do anything" << endl;
    // count = 1;
    // while (count < 5) {
    //     -count;
    // }
    // cout << count << endl;
    cout << endl;

    /* 3 */
    cout << "Problem 3:" << endl;
    count = 10;
    while (count >= 0) {
        count -= 2;
    }
    cout << count << endl;
    cout << endl;

    /* 4 */
    cout << "Problem 4:" << endl;
    count = 0;
    do {
        count = count + 3;
    } while (count > 10);
    cout << count << endl;
    cout << endl;

    /* 5 */
    cout << "Problem 5:" << endl;
    const int MAX = 2;
    count = 0;
    bool flag = true;
    while (flag) {
        ++count;
        cout << count << endl;
        if (count > MAX) flag = false;
    }
    cout << endl;

    /* 6 */
    cout << "Problem 6:" << endl;
    count = 0;
    do {
        cout << count << endl;
        ++count;
    } while (count <= 0);
    cout << endl;

    system("pause");
    return 0;
}