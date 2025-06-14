#include <iostream>
#include <string>
using namespace std;

// Abstraction = Hiding complex items behind a procedure
// Abstract Classes = Simulate behavior of interface, will serve as a contract, whatever Class signs the contract, will have to provide implemenetation for any methods

class AbstractEmployee {
    virtual void AskForPromotion() = 0; // Creates an Abstract function
};

// Employee Class has signed a contract with AbstractEmployee Class and now I need to provide implementation for the methods inside of Abstract inside of Employee
class Employee:AbstractEmployee {
    private:
        string Name;
        string Company;
        int Age;

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
int main(){
    Employee employ1 = Employee("Vinh", "YouTube", 21);
    Employee employ2 = Employee("Greg", "Amazon", 35);

    employ1.setAge(22);
    employ1.setCompany("Apple");
    employ1.setName("Gregcraft");

    employ1.introduction();

    cout << employ1.getName() << " is " << employ1.getAge() << " years old." << endl;

    // Test AskForPromotion method
    employ1.AskForPromotion();
    employ2.AskForPromotion();


    
    return 0;
}