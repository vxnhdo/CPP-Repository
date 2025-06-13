#include <iostream>
#include <cstdlib> // for rand & srand
#include <ctime>   // for time()
using namespace std;

int main(){
    srand(time(0));
    int randomNumber = rand() % 6 + 1; // range (1-6) = 1 2 3 4 5 6
    cout << randomNumber;

    return 0;
}