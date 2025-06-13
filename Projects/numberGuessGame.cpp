#include <iostream>
#include <cstdlib> // For rand() & srand()
#include <ctime> // For time() = seed random number generator
using namespace std;

/*
Number guessing game = This program will generate a random number between 1-100 and ask the user to guess it

Use do-while loops, random numbers and time functions

The user should be prompted to enter their guess & the program provides feedback on whether the guess is too high, too low OR correct
*/
int main(){
    char playAgain; // condition to be checked if user wants to play again

    do {
        srand(time(0)); // Seed random number generator
        int randomNumber = rand() % 100 + 1; // 1-100
        int guess; // store user guess
        int tries = 0; // store # of tries

        cout << "\nChoose a number between 1 to 100: ";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            tries++;

            if (guess < randomNumber){
                cout << "Too low, try again." << endl;
            } else if (guess > randomNumber){
                cout << "Too high, try again." << endl;
            } else {
                cout << "Correct in, " << tries << " tries." << endl;
            }
        } while (guess != randomNumber);
        cout << "Play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
    cout << "Exiting..." << endl;

    return 0;
}