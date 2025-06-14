#include <iostream>
using namespace std;

// Class Scope = Variables and Functions declared inside a Class belong to that class scope
// variables & functions are accessible ONLY through objects of that class unless "static"
// Access to members is controlled by access specifiers = public, private and protected

class Car {
    private:
        int speed;
    public:
        void setSpeed(int s){
            speed = s;
        }
        int getSpeed(){
            return speed;
        }
        void drive(){
            cout << "Driving!!!...";
        }
};
int main(){
    Car myCar;
    myCar.setSpeed(100);
    myCar.drive(); 
    cout << myCar.getSpeed() << " mph." << endl;
     
}