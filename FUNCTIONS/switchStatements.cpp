#include <iostream>
using namespace std;
// Switch statement = Let you run different blocks of code depending on the value of a single variable OR expression
// Syntax:
/*
switch(expression){
    case value1:
        // code to run
        break; // exits the switch statement
        
    case value2:
        // code to run
        break; // exits the switch statement

    // You can have as many cases as you want

    default:
        // code to run if no cases match
        break; // exits the switch statement
}
*/
// break exits the switch, without it the code falls through to the next case
int main(){

    // Simple calculator
    char op;
    int a, b;

    cout << "Enter an operator (+ or -): " << endl;;
    cin >> op;
    cout << "Enter the first number: " << endl;;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;


    switch(op){
        case '+':
            cout << "Result: " << (a + b) << endl;
            break;
        case '-':
            cout << "Result: " << (a - b) << endl;
            break;
        default: 
            cout << "Invalid operator!" << endl;
    }




    // Vending Machine Menu
    int choice;
    cout << "Welcome to the Vending Machine Menu: " << endl;
    cout << "1. Water" << endl;
    cout << "2. Soda" << endl;
    cout << "3. Juice" << endl;
    cout << "4. Cancel" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice){
        case 1: 
            cout << "You selected Water." << endl;
            break;
        case 2:
            cout << "You selected Soda." << endl;
            break;
        case 3:
            cout << "You selected Juice." << endl;
            break;
        case 4:
            cout << "Transaction cancelled." << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }


    return 0;
}