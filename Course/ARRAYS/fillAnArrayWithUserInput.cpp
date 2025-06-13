#include <iostream>
using namespace std;
/*
1. Define an array, 2. Use a loop to take input from the user
3. Store each input in the array, 4. OPTIONAL = Print the array 
*/
int main(){
    const int SIZE = 5;
    int nums[SIZE];
    cout << "Enter " << SIZE << " numbers: " << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "Number " << (i + 1) << ": ";
        cin >> nums[i];
    }
    // Print the array to confirm
    cout << "You entered: ";
    for (int i = 0; i < SIZE; i++){
        cout << nums[i] << " ";
    }
}