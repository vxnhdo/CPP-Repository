#include <iostream>
#include <fstream>
using namespace std;

/* Write a program to open a file "numbers.txt" and print the average of the numbers it contains on EACH LINE
*/
int main(){
    ifstream inputFile("numbers.txt");
    if (!inputFile){ // if file did not open successfully
        cerr << "Error opening the file." << endl; // error message
        return 1; // return 1, if error
    }

    int num; // to store int data from "numbers.txt"
    int total = 0; // keeps track of total 
    int count = 0; // counter for number of ints extracted

    while (inputFile >> num){ // while inputFile can extract an integer and store it in integer 'num'
        total += num; // add the int 'num' to 'total'
        count++;      // increment count each time
    }

    inputFile.close(); // close file after reading is complete

    if (count == 0){
        cout << "No numbers found in file." << endl;
    } else {
        double average = total / double(count);
        cout << "Average = " << average << endl;
    }
    return 0;
}