#include <iostream>
using namespace std;
// Pass-by value = when you pass arguments by value, the function gets a copy of the data & changes made inside the function do NOT affect the original variable outside

void increment(int num){
    num++;
    cout << "Inside increment: " << num << endl;
}
int main(){
    int x = 10;
    increment(x); // Inside increment: 6
    cout << "After increment: " << x << endl; // After increment: 10
    return 0;
}