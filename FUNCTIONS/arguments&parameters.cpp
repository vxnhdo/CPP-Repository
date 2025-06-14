#include <iostream>
using namespace std;
// Parameters = variables declared in function definition and acts as placeholders for vlaues that the function will receive when called upon
// - Can have default values to make arguments optional

// Arguments = Actual values or variables that are passed to the function when calling it

// Integer function
int add(int a, int b){
    return a + b;
}

// Print function
void greet(string name = "Guest"){
    cout << "Welcome, " << name << "." << endl;
}

int main(){
    int x = 5, y = 10;

    int result = add(x, y);
    cout << "Sum: " << result << endl;
    greet();
    greet("Greg");
    return 0;
}