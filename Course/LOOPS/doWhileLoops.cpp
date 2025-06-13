#include <iostream>
#include <string>
using namespace std;
// Do while loop runs at least once, condition is checked after the loop body

int main(){
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);

    string answer;
    do {
        cout << "Yes or No?: ";
        cin >> answer;
    } while (answer == "yes");
    return 0;
}