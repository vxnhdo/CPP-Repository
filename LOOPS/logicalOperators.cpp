#include <iostream>
#include <string>
using namespace std;
int main(){
    // Logical operators: && (and), || (or), ! (not)
    // && = both conditions must be true
    // || = at least one condition must be true
    // ! = negates the condition, if true then false, if false then true

    // Example of && (AND)
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 65){
        cout << "You are of working age." << endl;
    } else {
        cout << "You are NOT of working age." << endl;
    }

    // Example of || (OR)
    string username;
    cout << "Enter your username: ";
    cin >> username;
    
    if (username == "admin" || username == "manager"){
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;
    }

    // Example of ! (NOT)
    bool lightOn = false;
    if (!lightOn){
        cout << "Light is off, turning ON now." << endl;
        lightOn = true;
    } 
    cout << "Light Status: " << (lightOn ? "ON" : "OFF") << endl;


    return 0;
}