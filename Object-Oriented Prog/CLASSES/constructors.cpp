#include <iostream>
using namespace std;
class Car {
    private:
        string make;
        int year;

    public:
        void setCar(string m, int y){
            make = m;
            year = y;
        }
        void getCar(){
            cout << "Make: " << make << endl;
            cout << "Year: " << year << endl;
        }
};
int main(){
    Car car1;
    car1.setCar("Toyota", 2025);
    car1.getCar();

    
    return 0;
}