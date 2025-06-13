#include <iostream>
#include <string>
using namespace std;
/*
How to pass an array to a function = Arrays are passed by reference, you do not pass a full copy of the array. Instead you pass a pointer to the first element

Syntax (Pass with Bracket Notation) =
void functionName(type arrayName[], int size);

*/

// Example 1: Print Elements of an Array
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Example 2: Function that doubles each element
void doubleValues(int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] *= 2; // Modify in-place
    }
}
int main(){
    // Example1
    int numbers[] = {10, 20, 30, 40, 50};
    printArray(numbers, 5); // Pass array and its size

    // Example 2
    int data[] = {1, 2, 3, 4};
    doubleValues(data, 4);
    // Print updated array
    for (int i = 0; i < 4; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}