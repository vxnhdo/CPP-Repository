#include <iostream>
#include <string>
using namespace std;

// Inheritance = 2 Classes, Base Class = has attributes / members. Once the Derived Class wants to access Base Class members, it becomes a "Child" Class.

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private:
        string Company;
        int Age;

    protected:
        string Name;

    public:

    Employee (string name, string company, int age){ 
        Name = name;
        Company = company;
        Age = age;
    }

    // Setters
    void setName(string name){
        Name = name;
    }
    void setCompany(string company){
        Company = company;
    }
    void setAge(int age){
        if (age >= 18){
        Age = age;
        }
    }

    // Getters
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

    // Implementation for AbstractEmployee
    void AskForPromotion(){
        if (Age > 30){
            cout << Name << " is promoted!" << endl;
        } else {
            cout << Name << " has no promotion." << endl;
        }
    }
};
// Developer becomes a child class of base class Employee, now has access to all properties of Employee. 
// Provide a constructor & add public so no longer private by default
class Developer:public Employee {
    public:
        string FavProgLang;
        // Constructor with parameters from the base-class & current class
        Developer (string name, string company, int age, string favproglang):Employee(name, company, age){
            FavProgLang = favproglang;
        }

        // Print method
        void FixBug(){
            cout << Name << " fixed the bug using " << FavProgLang << endl;
        }
};

// Child class to inherit from Employee class
class Teacher: public Employee {
    public:
        string Subject;
    // Constructor
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
    void prepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson." << endl;
    }
};
int main(){
    Employee employ1 = Employee("Vinh", "YouTube", 21);
    Employee employ2 = Employee("Greg", "Amazon", 35);

    employ1.setAge(22);
    employ1.setCompany("Apple");
    employ1.setName("Gregcraft");


    Developer dev1 = Developer("Harry", "Amazon", 31, "C++");
    Developer dev2 = Developer("Nancy", "IBM", 21, "Python");

    Teacher teacher1 = Teacher("Jack", "UCLA", 28, "Physics");
    Teacher teacher2 = Teacher("Bob", "Harvard", 40, "Programming");

    dev1.FixBug();
    dev2.FixBug();
    dev1.AskForPromotion();
    dev1.introduction();

    teacher1.prepareLesson();
    teacher1.introduction();
    teacher2.prepareLesson();

    teacher1.AskForPromotion();
    


    
    return 0;
}