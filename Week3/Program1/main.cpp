// Jefferson V. Henry 
// CIS-123 
// Week 3, Program 1
// ~~ Instructions ~~
// Write a program that asks the user to input three different line of text 
// (3 strings) then using cout print the combination of the three in the console.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1;
    cin >> str2;
    cin >> str3;
    cout << str1 + str2 + str3 << endl;
    system("pause");
    return 0;
}
