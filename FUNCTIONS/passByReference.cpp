#include <iostream>
using namespace std;
// Pass-by reference = When you pass arguments by reference then the function receives a reference to the original variable. Use the '&' symbol before the parameter name

void increment(int &num){ // function to increment & change the original value
    num++;
}
int main(){
    int i = 5;
    increment(i);
    cout << "After increment: " << i << endl;
    return 0;
}