#include <iostream>
using namespace std;
// Searching for a target in an array based on a function
bool findTarget(int arr[], int size, int target){
    for (int i = 0; i < size; i++){ // Iterate through array 
        if (arr[i] == target){ // If index is equals to target
            return true;
        }
    }
    return false; // Return false after checking all elements & target is not found
}
int main(){

    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool foundTarget = findTarget(arr, size, 17);
    if (foundTarget){
        cout << "Target value was found." << endl; 
    } else {
        cout << "Target value was NOT found." << endl;
    }
    
    return 0;
}