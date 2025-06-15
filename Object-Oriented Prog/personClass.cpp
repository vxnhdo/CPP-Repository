#include <iostream>
using namespace std;
/* Write the body of a Class named Person, which keeps track of name, age and phone number.
Member variables should be private and include function headers for setters and getters.
Include a constructor
*/ 
class Person {
    private:
        string Name;
        int Age;
        string PhoneNumber;
    public:
        Person(string n, int a, string phone){ // Constructor will run when a new "Person" object is created and sets initial values
            Name = n;
            Age = a;
            PhoneNumber = phone;
        }

        // Setters = Allow you to change the values of private variables by passing a value to the function
        void setName(string n){
            Name = n;
        }

        void setAge(int a){
            Age = a;
        }   
        void setPhone(string phone){
            PhoneNumber = phone;
        }
        // Getters = Lets you read private variables without modifying them
        string getName() const { // Const = does not modify objet
            return Name;
        }
        
        int getAge() const {
            return Age;
        }
        
        string getPhone() const {
            return PhoneNumber;
        }
};
int main(){
    Person student1("Alice", 21, "626-262-6262");
    cout << "Name - " << student1.getName() << endl;
    cout << "Age - " << student1.getAge() << endl;
    cout << "Phone Number - " << student1.getPhone() << endl;
    return 0;
}