#include <iomanip> // for set precision
#include <iostream> 
using namespace std;

const double TAX = 0.0975; // 9.75 percent
const double TIP = 0.20; // 20 percent

double total(double originalBalance){ // Calculate Total amount
    return originalBalance * (1 + TAX + TIP);
}

int main(){
    double amt;
    cout << "Enter bill amount: $";
    cin >> amt;

    double totalAmount = total(amt);

    // Display showing 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Total including LA County Tax + 20% tip: $" << totalAmount << endl;

    return 0;
}