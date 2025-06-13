#include <iostream>
#include <string>
using namespace std;
/*
1. Pass an array & size to a function
2. Pass target value to find
3. Use a for or for-each loop
4. Return index if target is found OR -1 if NOT found
*/

// Full Example: Function that takes an array, size of array and target value to find
int findTarget(int arr[], int size, int target){ 
    // Loop through each element then check if the element matches target
    for (int i = 0; i < size; i++){
        if(arr[i] == target){
            return i; // return index of where target is located
        }
    }
    return -1; // If not found
}

// Example 2: Search for a string in an array
int findString(string arr[], int size, string target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1; // Not found
}
int main(){
    // Example 1
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 30;
    int result = findTarget(numbers, size, target);

    if(result != -1){
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found" << endl;
    }


    // Example 2
    string fruits[] = {"Apple", "Banana", "Mango", "Grape", "Orange"};
    int size2 = sizeof(fruits) / sizeof(fruits[0]);
    string target2 = "Mango";
    int index = findString(fruits, size2, target2);
    if (index != -1){
        cout << "Found " << target2 << " at index " << index << endl;
    } else {
        cout << target2 << " not found." << endl;
    }
    return 0;
}