#include <iostream>
using namespace std;
int average(int val1, int val2, int val3){
    int result = (val1 + val2 + val3) / 3;
    return result;
}
int main(){
    average(10, 15, 25);
    
    return 0;
}