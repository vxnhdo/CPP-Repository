#include <iostream>
using namespace std;
// cout << (insertion operator)
// cin >> (extraction operator)
int main(){
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name); // Use getline to allow spaces in the name
    cout << "Hello, " << name << endl;
 
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;


     


    return 0;
}