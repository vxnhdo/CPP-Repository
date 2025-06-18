#include <iostream>
using namespace std;
// While Loops are best for Menu-Driven programs, by displaying a list of options for the user & runs based on the user's input, then the program continues to show until the user chooses to exit.
int main(){

    int choice;
    cout << "Calculator Menu" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    while(choice != 3){
        if (choice == 1){
            cout << "Addition!" << endl;
        } else if (choice == 2){
            cout << "Subtracttion!" << endl;
        } else {
            cout << "Invalid input." << endl;
        }

        cout << "Calculator Menu" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

    }
    cout << "Program exit." << endl;
    
    return 0;
}