#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number from 0 to 10: ";
    cin >> x;
    while (x < 0 || x > 10){
        cout << "Invalid, try again." << endl;
        cout << "Enter a number from 0 to 10: ";
        cin >> x;
    }

    cout << "Success!" << endl;
    
    return 0;
}