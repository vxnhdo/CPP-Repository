#include <iostream>
using namespace std;
// Variable scope = where a variable is accessible in the program
// Global variables = declared outside of any function
// Syntax:
int globalVar = 100;
void myFunction(){
    cout << globalVar << endl; // can access globalVar
}

// Local variables = declared inside a function / block, only accessible within the block
// Syntax:
void myFunc(){
    int localVar = 5;
    cout << localVar;
}

// Example 1: Using Global AND Local Variables
void showValues(){
    int localVar = 50; // Local Variable
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl; // Global Variable
}
int main(){
    showValues();

    return 0;
}