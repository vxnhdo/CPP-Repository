#include <iostream>
#include <cstdlib> // C-Standard Library for access to rand() & srand() number generation
#include <ctime>   // C-Time for seeding the random number generator with current time
using namespace std;

int main(){

    srand(time(0)); // Seed random number generator with current time
    int flips = 0;  // to keep track of # of coin flips
    bool landedOnSide = false; // flag to keep loop repeating until coin lands

    while (!landedOnSide){ // while landedOnSide = false
        flips++; // increments flips
        int result = rand() % 6000 + 1; // set result as a random number between 1 and 6000
        if (result == 1){ // if result equals 1
            landedOnSide = true; // set landedOnSide = true 
        }
    }

    cout << "Coin landed on its side after " << flips << " flips." << endl;

    return 0;
}