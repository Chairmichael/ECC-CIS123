// Week 6, Program 6
// Jefferson V. Henry
// 10/4/2019

#include <iostream>
#include <cmath>
using namespace std;

double addition();
double subtraction();
double multiplication();
double division();
double exponentiation();
bool chooseOperation(char);

/*
    Exercise 1.
    Write a function "addition". When the function gets invoked - addition(); -
    the user is asked to input any two numbers which are added together. The
    calculation is printed out in the console.

    Exercise 2.
    Write a function "subtraction". When the function gets invoked -
    subtraction(); - the user is asked to input any two numbers: the one to
    subtract from and the one to subtract with. The calculation is printed out
    in the console.

    Exercise 3.
    Write a function "multiplication". When the function gets invoked -
    multiplication(); - the user is asked to input any two numbers: the one to
    multiply and the one to multiply with. The calculation is printed out in the
    console.

    Exercise 4.
    Write a function "division". When the function gets invoked - division(); -
    the user is asked to input any two numbers: the one to divide and the one to
    divide by. The calculation is printed out in the console.

    Exercise 5.
    Write a function "exponentiation". When the function gets invoked -
    exponentiation(); - the user is asked to input any two numbers: the base and
    the exponent (n-th power). The calculation is printed out in the console.

    Exercise 6.
    Copy the functions and their declarations created in the exercises from 1 to
    5 and write sixth function "chooseOperation". The "chooseOperation" function
    should take one char parameter. The body of the function should contain a
    switch for the choice parameter which depending on the user input should
    invoke the corresponding mathematical functions from the exercises 1 to 5.

    Write a simple calculator program that asks the user to choose a
    mathematical operation to perform by inputting an operator symbol: '+' -
    addition, '-' - subtraction, '*' - multiplication, '/' - division, '^' -
    exponentiation. The mathematical symbol is used as the parameter for
    chooseOperation function. The calculator should work in an infinite loop.
    eg. 
    User inputted: + 
    Output: The result of addition function
*/

double addition() {
    cout << "Addition, two numbers seperated by whitespace:" << endl;
    double a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << "= " << c << endl;
    return c;
}

double subtraction() {
    cout << "Subtraction, two numbers seperated by whitespace:" << endl;
    double a, b, c;
    cin >> a >> b;
    c = a - b;
    cout << "= " << c << endl;
    return c;
}

double multiplication() {
    cout << "Multiplication, two numbers seperated by whitespace:" << endl;
    double a, b, c;
    cin >> a >> b;
    c = a * b;
    cout << "= " << c << endl;
    return c;
}

double division() {
    cout << "Division, two numbers seperated by whitespace:" << endl;
    double a, b, c;
    cin >> a >> b;
    c = a / b;
    cout << "= " << c << endl;
    return c;
}

double exponentiation() {
    cout << "Exponentiation, two numbers seperated by whitespace:" << endl;
    double a, b, c;
    cin >> a >> b;
    c = pow(a, b);
    cout << "= " << c << endl;
    return c;
}

bool chooseOperation(char op) {
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
    case 'q':
        return false;
        break;
    default:
        cout << "Error: Invalid operator" << endl;
        break;
    }
    return true;
}

int main() {
    bool continue_calc = true;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    while (continue_calc) {
        cout << "Select an operation to do, or q to quit:" << endl;
        cout << "+, -, *, /, ^" << endl;
        char choice;
        cin >> choice;
        continue_calc = chooseOperation(choice);
    }
    return 0;
}
