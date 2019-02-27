// Jefferson V. Henry 
// CIS-123 
// Week 4, Program 2
// ~~ Instructions ~~
// Using SWITCH modify the vending machine program from the Conditional Statements.
// Write a program immitating a vending machine. The program should present the
// user with a choice of 6 products of your choice (Coke, Water, Chocolate Bar
// etc). Then allow the user to choose a product by entering a number 1-6. Add an
// exception for invalid input if the user inputs a number which doesn't correspond
// to any choice.
// eg.
// 1. Cola
// 2. Chocolate Bar
// 3. ...
// 4. ...
// 5. ...
// 6. ...
// User inputted:
// Choice: 2
// Output:
// Your have chosen a Chocolate Bar.
// eg.
// User inputted:
// Choice: 7
// Output:
// Error. Invalid choice.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int length = 6, choice;
    bool invalidInput;
    string items[length] = 
        {"Water", "Coke", "Pepsi", "Dr. Pepper", "Diet Water", "Vernor's"};

    do {
        // Print vending items
        cout << " ~~ Verner's Vending ~~ " << endl;
        for (int i = 0; i < length; ++i)
            cout << i+1 << ". " << items[i] << endl;
        // Get user input
        cin >> choice;
        invalidInput = false;
        // Validate input
        switch (choice) {
            case 1:
                cout << "You have chosen: " << items[0] << endl;
                break;
            case 2:
                cout << "You have chosen: " << items[1] << endl;
                break;
            case 3:
                cout << "You have chosen: " << items[2] << endl;
                break;
            case 4:
                cout << "You have wisely chosen: " << items[3] << endl;
                break;
            case 5:
                cout << "You have chosen: " << items[4] << endl;
                break;
            case 6:
                cout << "You have chosen: " << items[5] << endl;
                break;
            default:
                invalidInput = true;
                cout << "Error: Invalid choice" << endl;                
        }
    } 
    while (invalidInput);
    // system("pause");
    return 0;
}
