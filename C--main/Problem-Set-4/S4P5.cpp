#include <iostream>
using namespace std;

class Student{
    public:
    int marks;
    string name;

    Student(int m, string s){
        marks = m;
        name = s;
    }

    void display(){
        cout<<"The name is :"<<name<<endl;
        cout<<"The marks are :"<<marks<<endl;
    }
};

void compare(Student &S1, Student &S2){
    if (S1.marks > S2.marks){
        cout<<"THE MAXIMUM MARKS ARE :"<<S1.marks<<endl;
    }
    if (S2.marks > S1.marks){
        cout<<"THE MAXIMUM MARKS ARE :"<<S2.marks<<endl;
    }
}
int main(){
    Student S1(485,"Krishanav");
    Student S2(480,"Gama Pehalwan");
    S1.display();
    S2.display();
    compare(S1,S2);
}