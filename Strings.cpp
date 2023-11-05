#include <iostream>

using namespace std;

int main(){

    cout << "Giraffe Academy\n";
    string phrase = "Giraffe Academy";
    phrase[0] ='B';
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("Academy", 0)<< endl;
    cout << phrase.substr(8, 3);

    return 0;
}
