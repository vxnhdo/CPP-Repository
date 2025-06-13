#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    // Example 2
    int greg[] = {60, 70, 80, 90, 100};
    int j = 0;
    while (j < 5){
        cout << greg[j] << " ";
        j++;
    }

    // Ex 3: Range-based loop
    int array[] = {110, 120, 130, 140, 150};
    for (int val : array){
        cout << val << " ";
    }

    // Ex 4: For loop with length calculation
    int ARR[] = {160, 170, 180, 190, 200};
    int length = sizeof(ARR) / sizeof(ARR[0]);
    for (int i = 0; i < length; i++){
        cout << ARR[i] << " ";
    }

    return 0;
}