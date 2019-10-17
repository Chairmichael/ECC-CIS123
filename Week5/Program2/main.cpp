// Week 5, Program 5
// Problem 14, pg. 247
// Jefferson V. Henry
// 10/7/2019
/*
    Write a prgram that reads a file that contains only integers, 
    but some of the integers have embedded commas, as in '145,202'.
    The program should copy the information to a new file.
    Do not change the number of values per line in the file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const string INPUT_FILE = "integers.dat";
    const string OUTPUT_FILE = "integers_after.dat";

    ifstream fin(INPUT_FILE);
    ofstream fout(OUTPUT_FILE);
    if (fin.fail() || fout.fail()) {
        cerr << "Error occured while opening required files." << endl;
        exit(1);
    }
    char c;
    string num;
    while(fin >> noskipws >> c) {
        if (c == ' ' || c == '\n') {
            num += c;
        }
        else if (c != ',' && c < 48 || c > 57) {
            cerr << "Invalid data in file: " << INPUT_FILE << endl;
            cerr << c << endl;
            exit(1);
        } 
        else if (c != ',') {
            num += c;
        }
    }
    fout << num << endl;

    ifstream testIn(INPUT_FILE);
    // ofstream fout(OUTPUT_FILE);
    while (testIn >> noskipws >> c) {
        cout << c;
    }
    cout << "\n\n";
    cout << num << endl;

    system("pause");
    fin.close();
    fout.close();
}