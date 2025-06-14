#include <iostream>
using namespace std;
// Break statement = immediately exists a loop or a swtich when it runs, skipping any remaining iterations
// Continue statement = Skips the rest of the current iteration and jumps to the next one in the loop
int main(){

// Break statement example: Stop when a negative number is entered
    int num;

    while (true){
        cout << "Enter a positive number (or negaitve to stop): ";
        cin >> num;

        if (num < 0){
            break; // exit the loop
        }

        cout << "You entered: " << num << endl;
    }
    cout << "Loop ended." << endl;


// Continue statement: Skip even numbers from 1 to 10
    for (int i = 1; i <= 10; i++){
        if (i % 2 == 0){
            continue;
        }
        cout << "Odd number: " << i << endl; // Only prints odd numbers
    }

    // Process numbers using 'continue' and 'break'
    // Prompt the user to enter 10 positive numbers
    // IF the number is negative, continue
    // If user enters 0, use break to exit early
    // After input, display the valid numbers and the sum
    int numbers[10];
    int count = 0;
    int sum= 0;

    cout << "Enter 10 positive numbers (enter 0 to stop): ";

    for (int i = 0; i < 10; i++){
        int num;
        cout << "Number " << (i + 1) << ": ";
        cin >> num;

        if (num < 0){
            cout << "Negative number ignored." << endl;
            continue; // skip to next iteration
        }

        if(num == 0){
            cout << "Input stopped by user." << endl;
            break; // exit the loop early
        }

        numbers[count++] = num;
        sum += num;
        count++;
    }

    // Display valid numbers
    cout << "\nValid numbers entered: ";
    for (int i = 0; i < count; i++){
        cout << numbers[i] << " ";
    }

    cout << endl;

    cout << "\nSum of valid numbers: " << sum << endl;



    return 0;
}