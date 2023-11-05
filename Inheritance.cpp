#include <iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes pepper chicken" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makeSpecialDish(){
            cout << "The chef makes Italian Chicken" << endl;
        }
        void makePasta(){
            cout << "The chef makes Pasta" << endl;
        }
};

int main(){

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();
    italianChef.makePasta();
    return 0;
}