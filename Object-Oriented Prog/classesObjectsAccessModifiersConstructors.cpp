#include <iostream>
#include <string>
using namespace std;
// Object-Oriented Programming = set of ideas & concepts,a standard to solve a problem.

// Class method = Function
class Employee {
    private:

    public:
        string Name;
        string Company;
        int Age;

        // In the Constructor, each Parameter will be made equal to the intended variable inside the Class
    Employee (string name, string company, int age){ 
        Name = name;
        Company = company;
        Age = age;
    }

    // A void function that will print the info of the given parameters using Class variables
    void introduction(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
int main(){
    Employee employ1 = Employee("Vinh", "YouTube", 21);
    Employee employ2 = Employee("Greg", "Amazon", 35);

    // Or Set specific values of properties of Employee object
    employ1.Name = "Vinnie";
    employ1.Company = "Google";
    employ1.Age = 22;

    // Call function inside of Employee class
    employ1.introduction();
    employ2.introduction();
    
    return 0;
}