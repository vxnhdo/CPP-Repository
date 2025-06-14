#include <iostream>
#include <fstream> // include file stream library
using namespace std;
// File Handling allows a program to create, read, write and append data to files. Good for persistent data storage after the program ends.

/*
Input file stream = For reading a file; 'ifstream'
Output file stream = For writing to a file; 'ofstream'

ALWAYS CLOSE the file using .close() after using it
*/
int main(){
    ofstream of(); // Open for writing
    ifstream in(); // Open for reading

    // To Open a File in Append Mode = ("fileName", ios::app)
    // Append Mode = If file exists, data is added to the end or if the file does not exist, it will be created

    // Example 1: Write to a file "log.txt" in append mode then print a success message then close the file or else print an error message
    ofstream outFile("log.txt", ios::app);
    if(!outFile){
        cout << "File failed to open!" << endl;
    } else {
        outFile << "New log entry." << endl;
        outFile.close();
        cout << "Data written successfully." << endl;
    }

    // Example 2: Read from file "log.txt" each file line then print each line to the console
    ifstream inFile("log.txt");
    string line;
    while (getline(inFile, line)){
        cout << line;
    }
    inFile.close();


}