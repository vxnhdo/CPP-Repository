#include <iostream>
using namespace std;
// IF-statement = do something if a condition is true, if not do something else
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0){
        cout << "Number is positive." << endl;
    } else if (num == 0){
        cout << "Number is zero." << endl;
    } else {
        cout << "Number is negative." << endl;
    }

    // Example 2
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18){
        cout << "Eligble to vote." << endl;
    } else {
        cout << "Not eligble to vote." << endl;
    }
    return 0;
}