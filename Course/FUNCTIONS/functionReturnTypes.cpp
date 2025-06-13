#include <iostream>
using namespace std;
/*
Return keyword = used to exit function immediately / send a value back to the program
Syntax: return expression;
Passes result back to caller, stops execution of function once reached 
Function Return Types: int, double, string void
*/
string greet(string name){ // returns string
    return "Hello " + name + "!" + "\n"; // string concatenation
}

int getAge(int age){       // returns integer
    return age;
}

double getTemp(){          // returns double precision decimal
    return 70.5;
}

char getGrade(){           // returns character
    return 'A';
}
bool isEven(int a){        // returns boolean - true/false
    return a & 2 == 0;
}

void showMessage(){        // returns nothing, used for printing / modifying
    cout << "Void function." << endl;
}
int main(){
    return 0;
}