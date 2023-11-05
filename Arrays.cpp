#include <iostream>

using namespace std;

int main(){

    int luckyNums[20] = {2, 4, 5, 7, 9};
    luckyNums[0] = 23;  
    cout << luckyNums[0];

    return 0;
}