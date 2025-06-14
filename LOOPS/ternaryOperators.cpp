#include <iostream>
using namespace std;
int main(){
    // Ternary operator = Shorthand way to write a simple if-else
    // syntax:
    // condition ? value_if_true : value_if_false;

    // "if condition is true, it returns value_if_true"
    // "if condition is false, it returns value_if_false"

    // Even or add check example
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    string result = (num % 2 == 0) ? "Even" : "Odd";

    cout << "The number is " << result << "." << endl;

    // Find the larger of 2 numbers
    int a, b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;

    // (a > b) = condition
    // if true, max = a
    // if false, max = b
    int max = (a > b) ? a : b;
    cout << "The larger number is " << max << "." << endl;

    



    return 0;
}