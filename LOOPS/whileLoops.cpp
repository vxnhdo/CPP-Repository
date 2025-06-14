#include <iostream>
#include <string>
using namespace std;
// While loop = repeats a block of code as long as a condition is true
// Syntax:
// while (condition){
//   // code to run while condition is true
// }

// condition is checked before each iteration and if it is false, the loop ends

int main(){
    // Countdown from 5
    int count = 5;
    while (count > 0){
        cout << count << endl;
        count--;
    }

    cout << "Happy New Year!" << endl;
    

    // Ask until the password is correct
    string password;
    while (password != "secret123"){
        cout << "Enter password: ";
        cin >> password;
    }

    cout << "Access granted!" << endl;
    return 0;
}