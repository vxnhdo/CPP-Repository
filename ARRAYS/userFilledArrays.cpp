#include <iostream>
using namespace std;
/* Write a function that takes an integer array of size 10. Then ask the user to enter a number for each index. Then, pass the array to numNegatives ad print back in main, the number of negative values in the array
*/
int numNegatives(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] < 0){
            count++;
        }
    }
    return count;
}
int main(){
    const int SIZE = 10; // Const int named SIZE set to 10
    int numbers[SIZE];   // size 10 array

    cout << "Enter 10 integers (positive OR negative): ";
    for (int i = 0; i < 10; i++){ // Loop to ask for input
        cout << "Index " << (i + 1) << ": ";
        cin >> numbers[i];
        cout << endl;
    }

    int negativeCount = numNegatives(numbers, SIZE);
    cout << "Negative numbers in array: " << negativeCount << endl;

    return 0;
}