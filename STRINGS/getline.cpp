#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, email, city;
    cout << "Name: ";
    getline(cin, name);
    cout << "Email address: ";
    cin >> email;
    cin.ignore();
    cout << "City: ";
    getline(cin, city);

    cout << "You entered: " << endl << "City: " << city << endl << "Email: " << email << endl << "Name: " << name << endl;
    
    return 0;
}