// Jefferson V. Henry 
// CIS-123 
// Week 5, Program 2
// ~~ Instructions ~~
// Write a program that prints out in the console a simple representation of 3x3
// plane. The plane should be filled with numbers from 1 to 9 (stored in 3x3 array
// representing x,y coordinates of the plane).
// 1 2 3
// 4 5 6
// 7 8 9
// The value from coordinate (1, 1) is 1 (array[0][0]).

#include <iostream>
using namespace std;

int main() {
    int xSize = 3, ySize = 3, start=1;
    int plane[ySize][xSize];
    for (int i = 0; i < ySize; ++i) {
        for (int j = 0; j < xSize; ++j, ++start) {
            plane[i][j] = start;
            cout << plane[i][j] << " ";
        }
        cout << endl;        
    }
    system("pause");
    return 0;
}
