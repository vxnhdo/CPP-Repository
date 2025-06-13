#include <iostream>
using namespace std;
// Function declarations
void showMenu();
void deposit(double &balance);
void withdraw(double &balance);
void viewBal();
int main(){
    double userBal = 0;
    int userChoice;
    do {
        showMenu();
        cin >> userChoice;
        switch (userChoice){
            case 1:
                deposit(userBal);
                break;
            case 2:
                withdraw(userBal);
                break;
            case 3:
                viewBal(userBal);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid, try again." << endl;
        }
    } while (userChoice != 4);
    return 0;
}
// Function to print menu options
void showMenu(){
    cout << "-----BANK OF GREG-----" << endl;
    cout << "1. Deposit (Cash / Check)" << endl;
    cout << "2. Withdraw (Custom / Set Amount)" << endl;
    cout << "3. View Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}
// Function to store deposit balance and update to balance
void deposit(double &balance){
    int type; // will ask if cash or check
    double depositAmount; // will store amount
    cout << "Enter deposit type: \n1. Cash\n2. Check\nEnter choice: ";
    cin >> type;

    if (type == 1 || type == 2){
        cout << "Enter deposit amount: ";
        cin >> depositAmount;
        if (depositAmount > 0){
            balance += depositAmount;
            cout << "Deposit of $" << depositAmount << " was successful." << endl;
        } else {
            cout << "Invalid amount." << endl;
        }
    } else {
        cout << "Invalid deposit type." << endl;
    } 
}

// Function to ask user for withdrawal amount and update balance
void withdraw(double &balance){
    int option;
    double amount; // store final withdraw amount
    cout << "Choose withdrawl amount: " << endl;
    cout << "1. $20\n2. $50\n3. $100\n4. Custom Amount" << endl;
    cout << "Enter choice: ";
    cin >> option;
    switch (option){
        case 1:
            amount = 20;
            break;
        case 2:
            amount = 50;
            break;
        case 3:
            amount = 10;;
            break;
        case 4:
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            break;
        default:
            cout << "Invalid choice." << endl;
            return;
    }

    if (amount > 0 && amount <= balance){
        balance -= amount;
        cout << "Withdraw $" << amount << " successful." << endl;
    } else {
        cout << "Insufficient funds." << endl;
    }
}
// Function to print the current balance without modifying anything
void viewBal(double balance){
    cout << "Balance: $" << balance << endl;
}