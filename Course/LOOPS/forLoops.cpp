#include <iostream>
using namespace std;
// FOR LOOPS = repeat a block of code a set number of times, with a built in counter
/* Syntax = for (initialization; conition; update){
    // code to repeat
}
*/
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cin.ignore();
    cout << "Multiplication table for " << num << ": " << endl;
    for (int i = 1; i <= 10; i++){
        cout << num << " X " << i << " = " << num * i << endl;
    }



    // Example 2 = Iterate through an array using a 'for-loop' that prints the sum and average of test scores
    int scores[] = {85, 92, 99, 78, 69};
    size_t len = sizeof(scores) / sizeof(scores[0]); // calculate the number of elements in the array
    int sum = 0;

    for (size_t i = 0; i < len ;i++){
        cout << "Score " << i + 1 << ": " << scores[i] << endl; // print each score
        sum += scores[i]; // add 'score' to sum
    }

    double avg = static_cast<double>(sum) / len;
    cout << "Average score: " << avg << endl;
    cout << "Total score: " << sum << endl;

    return 0;
}