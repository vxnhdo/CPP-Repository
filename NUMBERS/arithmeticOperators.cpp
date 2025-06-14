#include <iostream>
using namespace std;
// Order of Precedence
// Parentheses ()
// Multiply & Divide 
// Add & Subtract
int main(){
    int students = 20;
    students += 1; // Addition
    students++;    // Increment
    students--;    // Decrement
    students -= 1; // Subtraction
    students *= 2; // Multiplication
    students /= 2; // Division
    // Students = 20
    int remainder = students % 3; // Modulus operator, gives the remainder of division

    cout << "Students: " << students << endl; // Students: 20
    cout << "Remainder: " << remainder << endl; // Remainder: 2

    int a = 10;
    int b = 5;

    int sum = a + b;          // Addition
    int difference = a - b;   // Subtraction
    int product = a * b;      // Multiplication
    int quotient = a / b;     // Division
    int remainder1 = a % b;      // Modulus

    cout << "Sum: " << sum << endl;               // Sum: 15
    cout << "Difference: " << difference << endl; // Difference: 5
    cout << "Product: " << product << endl;       // Product: 50
    cout << "Quotient: " << quotient << endl;     // Quotient: 2
    cout << "Remainder: " << remainder1 << endl;   // Remainder: 0


 
    return 0;
}