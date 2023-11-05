#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << 5 + 7 << endl;
    cout << 5 - 7 << endl;
    cout << 5 * 7 << endl;
    cout << 5 / 7 << endl;
    cout << 5 % 7 << endl;
    cout << 4 + 5 * 10 << endl;

    int wnum = 5;
    double dnum = 5.5;
    wnum++;
    cout << wnum << endl;
    cout << 5.5 + 9 << endl;

    cout << pow(2 , 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.1) << endl;
    cout << floor(4.9) << endl;
    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;
    return 0;
}