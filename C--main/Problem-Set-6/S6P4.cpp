#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(){
            cout<<"Person Contructor called "<<endl;
        }
};
class Employee :public Person{
    protected:
        string id;
    public:
    Employee(){
        cout<<"Employee Contructor called "<<endl;
    }
      
};

class Manager: public Employee{
    private:
      int salary;
    public:
        Manager(){
            cout<<"Manager Contructor called "<<endl;
        }
        Manager(string n, int a, string i, int s){
            name=n;
            age = a;
            id = i;
            salary = s;
    }
    void displayData(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Id is :"<<id<<endl;
        cout<<"Salary is :"<<salary<<endl;
    }


};
int main(){
    Manager m1("Raja",32,"Emp_0001",30000);
    m1.displayData();

    


}