#include <iostream>
#include <cstdlib> // c-standard library for rand() & srand()
#include <ctime>   // for time()
using namespace std;
int main(){
    srand(time(0)); // seed random number generator
    int randomNumber = rand() % 100 + 1; 
    string event;

    string events[] = {"Found Gold!", "Fell into River!", "Big Chungus Arrived!", "Met Obama!", "Discover underground tunnel!"};
    int size = sizeof(events) / sizeof(events[0]);

    // Generate random index from 0 to size of array 
    int randomIndex = rand() % size; // range = 0 1 2 3 4
    
    cout << "Random event: " << events[randomIndex] << endl;

    return 0;
}