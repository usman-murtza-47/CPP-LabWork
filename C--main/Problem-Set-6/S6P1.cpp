#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        void showPerson(){
            cout<<"Name :"<<name<<endl;
            cout<<"Age :"<<age<<endl;
        }
};

class Student: public Person{
    public:
    string course;
    void displayDetails(){
        showPerson();
        cout<<"Course :"<<course<<endl;
    }

};
int main(){
    Person p1;
    p1.name="Raja";
    p1.age=32;

    Student s1;
    s1.name = p1.name;
    s1.age = p1.age;
    s1.course = "B.Arch";

    p1.showPerson();
    s1.displayDetails();


}