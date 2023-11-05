#include <iostream>

using namespace std;

int main(){

    bool isFemale = true;
    bool isTall = false;

    if(isFemale && isTall){
        cout << "You are a Tall Female";
    }

    else if(isFemale && !isTall){
        cout << "You are a short Female";
    }

    else if (!isFemale && isTall){
        cout << "You are tall but npt a Female";
    }

    else{
        cout << "You are not a Female and not tall";
    }

    return 0;
}