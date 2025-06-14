#include <iostream>
#include <string> // for 'string' type
using namespace std;
// For each loop = iterate over all elements in an array / container
int main(){
    // Syntax = for (datatype variable : collectiom ){}
    int nums[] = {10, 20, 30, 40, 50};
    for (int num : nums){
        cout << num << " "; // 10 20 30 40 50
    }
    cout << endl;

    string word = "Hello";
    for (char ch : word){
        cout << ch << " "; // H e l l o
    }
    cout << endl;

}