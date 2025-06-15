#include <iostream>
using namespace std;
// Implement Insertion Sort to sort an array of Integers in ascending order

void insertionSort(int arr[], int size){ // function does not return a value, takes an array & its size as parameters
    for (int i = 1; i < size; i++){
        int location = i; // Keeps track of the current position for insertValue
        int insertValue = arr[i]; // Current number to insert into sort
        while (location > 0 && arr[location - 1] > insertValue){ // while current element location is GREATER than zero AND the element before is GREATER than the value to insert
            arr[location] = arr[location - 1]; // copy the larger element one position to the right to make space for a new value
            location--; // move left to check the next element
        }
        arr[location] = insertValue; // once the spot is free, insert the value into its correct position
    }
}
int main(){
    int arr[] = {1, 21, 16, 89, 99, 46, 12, 35, 57, -1, 52};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " "; // -1 1 12 16 21 35 46 52 57 89 99
    }
    cout << endl;
    return 0;
}