#include <iostream>
using namespace std;

void sort(int arr[], int size);
void descendSort(int arr[], int size);


int main(){
    int arr[] = {10, 9, 4, 5, 1, 2, 3, 7, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // sort(arr, size);
    descendSort(arr, size);

    for (int element : arr ){
        cout << element << " ";
    }
    return 0;
}
// Ascending order
void sort(int arr[], int size){
    int temp; // to swap values
    // Outer loop = Controls # of passes to array, after each pass, the next largest number bubbles to the end
    for (int i = 0; i < size - 1; i++){
        // Inner loop = iterate through the array and compare adjacent items, ignore 'i' and stop one before the end 
        for (int j = 0; j < size - i - 1; j++){
            // If the element to the left is greater than the element to the right, swap them
            if(arr[j] > arr[j + 1]){ // Greater than
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Descending order
void descendSort(int arr[], int size){
    int temp; // to swap values
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j + 1]){ // Less than 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}