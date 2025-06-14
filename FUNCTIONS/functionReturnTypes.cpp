#include <iostream>
using namespace std;

/*
Return keyword = used to exit a function immediately / send a value back to the program
Syntax = return expression;
*/
string greet(string name){
    return "Hello " + name + "!" + "\n";
}
int getAge(int age){
    return age;
}
double getTemp(){
    return 70.5;
}
bool isEven(int a){
    return a % 2 == 0;
}
void showMessage(){
    cout << "Void function!" << endl;
}
int main(){
    return 0;
}