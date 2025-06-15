#include <iostream>
using namespace std;
// Write a C++ function that takes an array of integers as a parameter. Then count and return the number of negative numbers in the array
int numNegatives(int arr[], int size){
    int negativeCount = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] < 0){
            negativeCount++;
        }
    }
    return negativeCount; // Return final result after loop is complete
}
int main(){
    int nums[] = {-1, -2, -3, -4, -5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int negativeNums = numNegatives(nums, size);
    cout << "Negative numbers in the array: " << negativeNums << endl;
    return 0;
}