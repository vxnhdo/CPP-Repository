#include <iostream>
using namespace std;
// Type conversion = converting one data type to another
// Implicit conversion = automatic conversion by the compiler
// Explicit conversion = precede value with new data type in parentheses

int main(){

    // Implicit conversion
    double x = (int)3.14159;
    cout << x << endl; // 3

    char y = 100;
    cout << y << endl; // d

    // Explicit conversion 
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    cout << "Score: " << score << "%" << endl; // Score: 80%





    return 0;
}