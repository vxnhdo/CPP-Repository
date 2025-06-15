#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 10;
bool findBook(string arr[], int size, string target){ // Function to find a book by its title then return true or false, if it exists in the array
    for (int i = 0; i < size; i++){
        if (arr[i] == target){ // if the target is found in the array, return true. Else, false.
            return true; 
        }   
    }
    return false; 
}

bool addBook(string arr[], int &size, string title){ // Function to add a book, based on array, its size and string title
    if (size >= MAX_BOOKS){ // if size is greater than or equal to MAX_BOOKS array size, return false
        cout << "Inventory is full." << endl;
        return false;
    }

    if (findBook(arr, size, title)){ // if findBook function is true, retur false
        cout << "Book exists in the inventory." << endl;
        return false;
    }

    arr[size] = title; // Adds current title to the current logical index & is incremented after
    size++;
    cout << "Book added successfully." << endl;
    return true;
}
int main(){
    string books[MAX_BOOKS]; // string array with size 10
    int numOfBooks = 0; // counter for # of books
    int userChoice; // int to hold user choice
    string title;   // string to hold user book title input

    do { // Menu loops until user chooses to quit
        cout << "---Library Inventory---" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Find a Book" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter a choice: ";
        cin >> userChoice;
        cin.ignore(); // clears whitespace from input buffer

        switch (userChoice){
            case 1: // if '1' is entered, ask for a book title then call addBook function
                cout << "Enter a book title to add: ";
                getline(cin, title);
                addBook(books, numOfBooks, title);
                break;
            case 2: // if '2' is entered, adk for a book title then call findBook to return a success or error message
                cout << "Enter a book title to find: ";
                getline(cin, title);
                if (findBook(books, numOfBooks, title)){
                    cout << "Book is in stock." << endl;
                    break;
                } else {
                    cout << "Book is NOT in stock." << endl;
                    break;
                }
            case 3: // if '3' is entered, quit the program
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid input, try again." << endl;
        }
    } while (userChoice != 3); // do this loop while userChoice is NOT equal to 3
    cout << "Goodbye!" << endl;

    return 0;
}