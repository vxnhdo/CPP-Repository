#include <iostream>
#include <vector>
using namespace std;

// Create a type alias for vector of integers
using IntVector = vector<int>;

int main(){

    // typedef syntax: typedef existing_type new_type_name;
    /* typedef unsigned int uint;
    // uint age = 30; // 'uint' is now an alias for 'unsigned int' */

    // anywhere 'unit' is used it will be treated as 'unsigned int'

    // type aliases syntax: using new_type_name = existing_type;
    // same as typedef
    using uint = unsigned int;
    uint age = 30;

    // Vector of integers using type alias
    IntVector numbers = {1, 2, 3, 4, 5};

    for (int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}