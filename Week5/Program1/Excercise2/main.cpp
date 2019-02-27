// Jefferson V. Henry 
// CIS-123 
// Week 5, Program 1, Exercise 2
// ~~ Instructions ~~
// Write a program that prints out in the console all upper case and lower case
// letters from the alphabet (A-Z).
// eg.
// Output:
// A a B b C c D d E e F f G g H h I i J j K k L l M m 
// N n O o P p Q q R r S s T t U u V v W w X x Y y Z z

#include <iostream>
using namespace std;

int main() {
    char ch1 = 'A';
    char ch2 = 'a';
    for (int i = 0; i < 26; ++i) {
        cout << ch1++ << " ";
        cout << ch2++ << " ";
    }
    cout << endl;
    // system("pause");
    return 0;
}
