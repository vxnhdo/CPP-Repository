#include <iostream>
using namespace std;
// Sequential Search = Checks each element one-by-one, starting from the beginning until the target is found OR the end has reached. Worked on sorted AND unsorted arrays.

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }   
    }
    return -1;
}
int main(){
    int nums[] = {9, 3, 2, 27, 1, 7, 5, 56, 79, 323, 878, 1010, 23354};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 79;
    int result = linearSearch(nums, size, target);

    if (result != -1){
        cout << "Target: " << target << " found at Index " << result << endl;
    } else {
        cout << "Number not found." << endl;
    }
    
    return 0;
}