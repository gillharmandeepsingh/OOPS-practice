#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }
};

int main(){
    Student s;
    s.name="ABC";
    s.rollno=101;
    s.display();
}