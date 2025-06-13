#include <iostream>
#include <string> // Include the string library for string manipulation
using namespace std;
int main(){

    // Username validator using .length() and .find()
    string username;
    cout << "Enter username: ";
    getline(cin, username);

    if (username.length() == 0){
        cout << "Username cannot be empty." << endl;
    } else if (username.length() < 4){
        cout << "Username must be at least 4 characters long." << endl;
    } else if (username.find(" ")){
        cout << "Username cannot contain spaces." << endl;
    } else {
        cout << "Welcome " << username << "!" << endl;
    }



    // Word reverser
    string word, reversed = "";
    cout << "Enter a word: ";
    cin >> word;

    for (int i = static_cast<int>(word.length()) - 1; i >= 0; i--) {
        reversed += word[i]; // Add each character from the end
    }

    cout << "Reversed word: " << reversed << endl;
    
    return 0;
}