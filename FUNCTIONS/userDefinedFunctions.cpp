#include <iostream>
#include <string>
using namespace std;
// User-defined function = block of code that performs a specific task
// Functions have reusability, readability, modularity and maintainability

// Syntax: 1. Declaration, 2. Definition, 3. Function call

// Declaration: return_type function_name(parameter_list);, before main
int add(int a, int b);

string reverseString(string str);

int main(){
    // Function call in main
    int result = add(3, 4);
    cout << result;
    cout << endl;

    string original;
    cout << "Enter the string; ";
    getline(cin, original);

    string reversed = reverseString(original);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

// Definition: include body & return statement if needed, below main
int add(int a, int b){
    return a + b;
}
// reverse the string, takes string as input & return the reversed version
string reverseString(string str){
    int n = str.length(); // integer n = length of string
    // Use a loop to run up to the halfway point of the string
    for (int i = 0; i < n / 2; i++){
        // 1. saves the current character at position i
        char temp = str[i]; 
        // 2. replace it with the character from opposite end
        str[i] = str[n - i - 1];
        // 3. Put the original str[i] at that opposite end
        str[n - i - 1] = temp;
    }
    return str; // after all swaps are done, return the string
}