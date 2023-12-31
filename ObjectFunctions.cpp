#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        
        Student(string name, string major, double gpa){
            name = name;
            major = major;
            gpa = gpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main(){

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);
    cout << student1.hasHonors();
    return 0;
}