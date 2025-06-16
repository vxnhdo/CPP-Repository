#include <iostream>
using namespace std;
// Variable Scope = region of code where a variable exists and can be used if a variable is out of scope, it cannot be accessed. 

int globalVariable = 100; // Global Scope = variables declared outside all functions, accessible from any function after declaration

void example(){ // Local Scope = variables declare insde {}, can exists within that block
    int x = 5; // x only exists in this block
    if (x > 0){
        int y = 10; // y only exists in this block
        cout << y << endl; 
    }
    // y would not exist in this block
}
void func(){
    cout << globalVariable << endl;
}

int main(){
    return 0;
}