#include <iostream>
#include <string>
using namespace std;
// Encapsulation = Idea of bundling data & methods that operate under that data together, in a Class. The purpose is to prevent anything from the outside interacting with our data directly

// Setters & Getters = Control access to private data members

class Employee {
    private: // Private = Members only accessble inside
        string Name;
        string Company;
        int Age;

    public: // Public = Members are accessible from anywhere inside / outside

    Employee (string name, string company, int age){ 
        Name = name;
        Company = company;
        Age = age;
    }

    // Setters = Set private variables as their parameter counterpart
    void setName(string name){
        Name = name;
    }
    void setCompany(string company){
        Company = company;
    }
    void setAge(int age){
        if (age >= 18){ // Validation Rule = Will make change IF condition is True
        Age = age;
        }
    }

    // Getters = Return the current value of a private variable as read-only
    string getName(){
        return Name;
    }
    string getCompany(){
        return Company;
    }
    int getAge(){
        return Age;
    }

    void introduction(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
int main(){
    Employee employ1 = Employee("Vinh", "YouTube", 21);
    Employee employ2 = Employee("Greg", "Amazon", 35);

    // Calling 3 Setter functions
    employ1.setAge(22);
    employ1.setCompany("Apple");
    employ1.setName("Gregcraft");

    // Calling method
    employ1.introduction();


    
    return 0;
}