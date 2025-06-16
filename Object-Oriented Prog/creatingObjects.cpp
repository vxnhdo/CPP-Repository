#include <iostream>
using namespace std;

class myClass {
    public: 
        int x, y;
        int sum;

        myClass(int first, int second){
            x = first;
            y = second;
            sum = x + y;
        };

        void setSum(){
            cout << sum << endl;
        }
        int getSum(){
            return sum;
        }
};
int main(){

    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    myClass object1(a, b);
    myClass object2(50, 65);

    cout << object1.getSum() << endl;
    cout << object2.getSum() << endl;

    return 0;
}