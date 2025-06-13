#include <iostream>
using namespace std;
// Nested loops = Having one loop inside another
// Any type of loop can be nested inside another loop
/*
Syntax for 'for' loop
for (int i = 0; i < outer_limit; i++){
    for (int j  0; j < innter_limit; j++){
        // Code that runs every combination of i and j
    }
}
*/
int main(){

    // Example 1: Printing a rectangle of asterisks
    // Print a rectangle of '*' with 4 rows X 5 columns
    for (int row = 0; row < 4; row++){
        for (int col = 0; col < 5; col++){
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }

    // Multiplication Table (1 to 5)
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl; // Newline after each row
    }


    // Iterating through an array using nested loops
    // Print all pairs of elements in array

    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << arr[i] << ", " << arr[j];
        }
        cout << endl;
    }



    // Pair elements of 2 parallel arrays
    // Print each name with each score using nested loops
    string names[] = {"Alice", "Bob", "Charlie"};
    int scores[] = {85, 99, 75};
    int size1 = 3;

    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size1; j++){
            cout << names[i] << " - " << scores[j] << endl;
        }
        cout << endl;
    }



    // Ask student for their name and store it in a string
    // Ask for 3 test scores and store them in an array
    // Use a loop to display the scores
    // Calculate & display the average score

    string studentName;
    int scores2[3];
    int sum = 0;

    cout << "Enter your name: ";
    getline(cin, studentName);

    cout << "Enter 3 test scores: " << endl;
    for (int i = 0; i < 3; i++){
        cout << "Scores #" << i + 1 << ": ";
        cin >> scores2[i];
        sum += scores2[i];
    }

    // Display results
    cout << "\nStudent: " << studentName << endl;
    cout << "Scores entered: ";
    for (int i = 0; i < 3; i++){
        cout << scores2[i] << " ";
    }
    cout << endl;

    double average = sum / 3.0;
    cout << "Average scores: " << average << endl;




    return 0;
}