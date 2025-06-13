#include <iostream>
#include <string>
using namespace std;
/*
1. User chooses number of food times to enter
2. Create a string array to store those items
3. User will then input each food item
4. Display full list
*/
int main(){
    const int MAX  = 50;
    int itemCount;

    cout << "Number of food items on menu?: ";
    cin >> itemCount;

    // Validate itemCount
    if (itemCount < 1 || itemCount > MAX){
        cout << "Invalid number of items, must be between 1 and " << MAX << endl;
        return 1;
    }

    // Declare string array to input items into
    string menu[MAX];

    cin.ignore();
    // Input items
    for (int i = 0; i < itemCount; i++){
        cout << "Enter food item " << (i + 1) << ": ";
        getline(cin, menu[i]);
    }

    // Print menu
    cout << "\nRestaurant Menu" << endl;
    for (int i = 0; i < itemCount; i++){
        cout << "- " << menu[i] << endl;
    }
    return 0;
}