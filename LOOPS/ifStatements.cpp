#include <iostream>
using namespace std;
// IF statements = do something if a condition is true, if not then do something else
/* 
Basic syntax:
if (condition){
    // code to run if condition is true
} else if (condition2) {
    // runs if condition2 is true
} else {
    // runs if none of the conditions are true
}
*/
int main(){

    // Check if a number if positive
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0){
        cout << "The number is positive." << endl;
    } else if (number == 0){
        cout << "That number is zero." << endl;
    } else {
        cout << "That number is negative." << endl;
    }

    // Check voting eligibility
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18){
        cout << "You are eligble to vote." << endl;
    } else {
        cout << "You are NOT eligble to vote." << endl;
    }



    return 0;
}