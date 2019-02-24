// Jefferson V. Henry 
// CIS-123 
// Week 2, Program 1
// ~~ Instructions ~~
// Declare one variable for each of the basic type (char, int, short, float,
// double), name them with the letters from alphabet starting from a. For each of
// the variable write a comment with information about the number of bytes reserved
// and the minimum - maximum value range of given type.
// eg.  
// char a;   //character 1 byte -128 to 127

#include <iostream>
using namespace std;

int main() {
    char a;     // Character, 1 byte, -128 to 127
    int b;      // Integer, 4 bytes, -2147483648 to 2147483647
    short c;    // Integer, 2 bytes, -32768 to 32767
    float d;    // Floating point, 4 bytes, -3.402823e+38 to 3.402823e+38
    double e;   // Floating point, 8 bytes, -1.797693e+308 to 1.797693e+308
    return 0;
}
