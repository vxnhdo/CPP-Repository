#include <iostream>
using namespace std;

// Create a namespace outside of main funciton
namespace first {
    int x = 1;
}

// Define a namesapce called MathUtils
namespace MathUtils {
    int add(int a, int b) {
        return a + b;
    }
    int multiply(int a, int b){
        return a * b;
    }
}


int main(){
    // Namespaces = provide a solution for preventing name conflicts
    // Each entity needs a unique name
    // Namespaces allow for identically named entities as long as the namespaces are different

    int x = 0;

    cout << x << endl;        // Uses local version, if namespace is not specified

    cout << first::x << endl; // Uses first namespace version

    
    // Call functions using their namespace qualifiers
    int sum = MathUtils::add(3, 4);
    int product = MathUtils::multiply(5, 6);

    cout << "Sum: " << sum << endl;         // Sum: 7
    cout << "Product: " << product << endl; // Product: 30







    return 0;
}