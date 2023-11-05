#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main(){

    sayHi("Aishu", 23);

    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << "! You are " << age;
}