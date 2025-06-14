#include <iostream>
using namespace std;
// Array = collection of fixed-size elements of the same data type
// Each element of an array can be accessed by an 'index'
// arrays store multiple values of one variable, indexing begins at 0

int main(){
    // Syntax: type arrayName[size];
    // Access/ Modify: arrayName[index] = value;
    // Display: cout << arrayName[index];

    // Example 1. Integer array
    int numbers[5];
    
    // initialize values
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;

    // Prints all values
    for (int i = 0; i < 5; i++){
        cout << "Element " << i + 1<< ": " << numbers[i] << endl;
    }



    // Example 2. Array with initialization
    string fruits[] = {"Apple", "Banana", "Mango"};

    for (int i = 0; i < 3; i++){
        cout << "Fruit " << i + 1 << ": " << fruits[i] << endl;
    }

    // 1. Finding the length / size
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // ratio = number of elements

    // 2. Sum of elements
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }

    // 3. Searching an element
    int key = 30;
    bool found = false;
    for (int i = 0; i < 5; i++){
        if (arr[i] == key){
            found = true;
            break;
        }
    }
    cout << "Size: " << size << ", Sum: " << sum << ", Found: " << (found ? "Yes" : "No") << endl;


    return 0;
}