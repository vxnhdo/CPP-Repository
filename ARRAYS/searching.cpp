#include <iostream>
using namespace std;
// Array = A collection of elements, all of the same data type.
/* 1. Element = A single value in the array
2. Index = Position number
3. Size = Total number of elements

Size Declaration = Tells the compiler how much space to reserve for the array in memory. Must be a literal number OR const integer

Searching through arrays = Looping through each element and checking for the value targeted
*/
int main(){
    int myArr[5];   // Array of 5 integers

    int scores[10]; // Size declaration of 10 integers

    int size = sizeof(scores) / sizeof(scores[0]); // How to calculate the size of an array

    // Sequential Search: 
    int nums[] = {4, 8, 15, 16, 23, 42};
    int numsSz = sizeof(nums) / sizeof(nums[0]);
    int target = 23;
    bool found = false;

    for (int i = 0; i < numsSz; i++){
        if (nums[i] == target){
            cout << "Found at Index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "Not found." << endl;
    }



    return 0;
}