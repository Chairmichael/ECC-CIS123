// Jefferson V. Henry 
// CIS-123 
// Week 7, Program 1

#include <iostream>
#include <math.h>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void exponentiation();
void chooseOperation();

int main() {
    chooseOperation();
    system("pause");
    return 0;
}

void addition() {
    double x, y;
    cout << "Addition:" << endl << " ";
    cin >> x;
    cout << "+";
    cin >> y;
    cout << "=" << x+y << endl;
}

void subtraction() {
    double x, y;
    cout << "Subtraction:" << endl << " ";
    cin >> x;
    cout << "-";
    cin >> y;
    cout << "=" << x-y << endl;
}

void multiplication() {
    double x, y;
    cout << "Multiplication:" << endl << " ";
    cin >> x;
    cout << "*";
    cin >> y;
    cout << "=" << x*y << endl;
}

void division() {
    double x, y;
    cout << "Division:" << endl << " ";
    cin >> x;
    cout << "/";
    cin >> y;
    cout << "=" << x/y << endl;
}

void exponentiation() {
    double x, y, n;
    cout << "Exponentiation:" << endl << " ";
    cin >> x;
    cout << "^";
    cin >> y;
    cout << "=" << pow(x, y) << endl;
}

void chooseOperation() {
    char op;
    cout << "Choose an Operation (+, -, *, /, ^): ";
    cin >> op;
    switch (op) {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '^':
            exponentiation();
            break;
        default:
            cout << "Improper character" << endl;
    }
}