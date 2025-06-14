#include <iostream>
using namespace std;
/* Write a main function with a menu-driven program that gives the user 3 options to choose from. If the 1st option is chose, call addEmployee function with no parameters. If the 2nd option to chose, call removeEmployee function with no parameters. If the 3rd option is chose, quit the program;
*/
void addEmployee();
void removeEmployee();

int main(){
    int choice;
    do {
        cout << "-----Welcome to the Employee Management System-----" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Remove Employee" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice 1-3: ";
        cin >> choice;

        switch(choice){
            case 1:
                addEmployee();
                break;
            case 2:
                removeEmployee();
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    
    } while (choice != 3);
    return 0;
}