#include <iostream>
using namespace std;

int main(){
    // 1. Using a for loop to iterate over an array
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++){
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // 2. Using a while loop to iterate over an array
    int arr1[] = {60, 70, 80, 90, 100};
    int j = 0;
    while (j < 5){
        cout << arr1[j] << endl;
        j++;
    }

    // 3. Using a range-based for loop
    int arr2[] = {110, 120, 130, 140, 150};
    for(int value : arr2){
        cout << value << endl;
    }

    // 4. Using a for-loop WITH length calculation
    int arr3[] = {160, 170, 180, 190, 200};
    int length = sizeof(arr3) / sizeof(arr3[0]);
    for (int i = 0; i < length; i++){
        cout << arr3[i] << endl;
    }
    return 0;
}