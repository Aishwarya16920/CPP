#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string atitle, string aauthor, int apages){
            title = atitle;
            author = aauthor;
            pages = apages;
        }
};

int main(){

    Book book1("Harry Potter", "JK Rowling", 500);

    Book book2("Lord of the Rings", "Tolkein", 700);

    Book book3;

    cout << book1.title << endl; 
    cout << book2.title << endl;
    cout << book3.title;
    return 0;
}