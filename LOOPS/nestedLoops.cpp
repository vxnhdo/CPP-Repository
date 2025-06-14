#include <iostream>
using namespace std;
// Nested Loops = Having a loop inside another
int main(){

    // Ask student to enter their name and store in a string then Ask for 3 test scores and store in an array
    // Display the scores and calculate & display the average score
    string student;
    int testScores[3];
    double sum = 0;

    cout << "Enter your name: ";
    getline(cin, student);

    cout << "Enter 3 test scores: " << endl;
    for (int i = 0; i < 3; i++){
        cout << "Score #" << (i + 1) << ": ";
        cin >> testScores[i];
        sum += testScores[i];
    }

    cout << "\nStudent: " << student << endl;
    cout << "Scores: ";
    for (int i = 0; i < 3; i++){
        cout << testScores[i] << " ";
    }
    cout << endl;
    double avg = sum / 3;
    cout << "Average scores: " << avg << endl;


    // Print a 4 X 5 rectangle of asterisks
    for (int row = 0; row < 4; row++){
        for (int column = 0; column < 5; column++){
            cout << "* ";
        }
        cout << endl;
    }

    // Multiplication table 1-5
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 5; i++){
            cout << i << " X " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    // Iterating through an array = prints all pairs of elements in array
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << arr[i] << " : " << arr[j] << endl;
        }
        cout << endl;
    }

    // Pair elements of 2 parallel arrays, print each name with score using nested loops
    string names[] = {"Bob", "Bugs","Begone"};
    int scores[] = {99, 79, 59};
    const int SIZE = 3;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            cout << names[i] << " - " << scores[j] << endl;
        }
        cout << endl;
    }


    return 0;
}