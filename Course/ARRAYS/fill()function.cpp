#include <iostream>
#include <algorithm>
using namespace std;
// Fill() = assign a specific value to every element in a range
int main(){
    // Syntax = fill(start, end, value);

    int nums[5];
    fill(nums, nums+5, 7);
    for (int i = 0; i < 5; i++){
        cout << nums[i] << " "; // 7 7 7 7 7 
    }
    cout << endl;

}
