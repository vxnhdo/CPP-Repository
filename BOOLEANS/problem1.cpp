#include <iostream>
using namespace std;
// Write a single boolean expression that will evaluate to true, if the number of miles between 10,000 & 30,000 and the price if less than 10,000

int main(){

    int miles;
    double price;
    char choice;

    do {
    cout << "Enter the car mileage: ";
    cin >> miles;
    cout << endl;
    cout << "Enter the car price: ";
    cin >> price;

    bool deal = (miles >= 10000 && miles <= 30000) && (price <= 10000);
    if (deal){
        cout << "This car is a good deal!" << endl;
    } else {
        cout << "This car is NOT a good deal. :/" << endl;
    }

    cout << "Do you want to enter more information? (Y / N): ";
    cin >> choice;

    } while(choice != 'n' && choice != 'N');
    cout << "Exiting..." << endl;

    return 0;
}