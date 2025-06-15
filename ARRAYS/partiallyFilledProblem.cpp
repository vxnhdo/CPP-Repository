#include <iostream>
#include <string>
using namespace std;
/* Write a function that takes a partially-filled array of strings as a parameter. Then in the function, ask the user to enter a name. If the array is full OR the name exists in the array, do not add it and return false. Else, add it and return true. The logical size of the array should be returned by reference */
bool addName(string arr[], int &logicalSize, int physicalSize){
    string name;
    cout << "Enter a name: ";
    getline(cin, name);

    if (logicalSize >= physicalSize){ // Checks if array is full
        cout << "Array is full. No more entries." << endl;
        return false;
    }

    for (int i = 0; i < logicalSize; i++){ 
        if (arr[i] == name){ // checks if current array index contains the name string
            cout << "Name exists in the array." << endl;
            return false;
        }
    }

    arr[logicalSize] = name; // Add name to array at current logical index
    logicalSize++; // increment logicalSize 
    return true;   // return true, if success
}
int main(){
    const int SIZE = 5;
    string names[SIZE];     // string array with size 5
    int logicalSize = 0; // Keeps track of # of names 

    for(int i = 0; i < SIZE; i++){
        if (addName(names, logicalSize, SIZE)){ // Calls the addName function until SIZE has been reached
            cout << "Name added." << endl;
        } else {
            cout << "Name not added." << endl;
        }
        cout << "Current logical size = " << logicalSize << endl; // Prints logical size after each entruy
    }

    cout << "Final list of names: " << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "Name " << (i + 1) << " - " << names[i] << endl;
    }
    return 0;
}