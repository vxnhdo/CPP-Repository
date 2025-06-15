#include <iostream>
#include <cctype> // for isdigit() method
#include <string>
using namespace std;

int main(){
    string result;
    cout << "Enter a number: ";
    cin >> result;

    bool isNum; // to check the input 

    for (size_t i = 0; i < result.size(); i++){ // for loop to loop through each character of result
        if (!isdigit(result[i])){ // if any character of result is not a digit, return false & break out of the loop
            isNum = false;
            break;
        } else {
            isNum = true;
        }
    }
    if (isNum){ // if isNum is true, display it times 5, else display an error message
        cout << (stoi(result) * 5) << endl;
    } else {
        cout << "Enter a number next time!" << endl;
    }

    return 0;
}