#include <iostream>
using namespace std;
// Class = A user-defined data type that contains members & member functions (variables & methods)

/* Access Specifiers:
1. public = members are accessible outside the class
2. private (default for C++) = members are NOT accessible outside the class, can be accessed by member functions
3. protected = like private, but accesible by derived classes used in inheritance

Classes contain Encapsulation: Hiding internal state & requiring all changes to go through methods
*/

class Student {
    private:
        string name;
        int age;
    public: 
    void setInfo(string n, int a){ // Setter
        name = n;
        age = a;
    }
    void getInfo(){ // Getter
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main(){
    Student stu1;
    stu1.setInfo("Bob", 16);
    stu1.getInfo();

    return 0;
}