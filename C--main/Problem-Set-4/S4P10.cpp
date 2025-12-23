#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    int salary;
    Employee(int i, int s){
        id = i;
        salary = s;
    }

    void display(){
        cout<<"The ID is :"<<id<<endl;
        cout<<"The Salary is :"<<salary<<endl;
    }
    void updateSalary(Employee &e){
        e.salary = salary;
    }
};
void swap(Employee *e1, Employee *e2){
    int a;
    a = e2->salary ;
    e2->salary = e1->salary;
    e1->salary = a;
}
int main(){
    Employee E1(241103002,5000000);
    Employee E2(100000001,2600000);
    E1.display();
    E2.display();
    E2.updateSalary(E1);
    Employee *e1 = &E1;
    Employee *e2 = &E2;
    swap(e1,e2);
    E1.display();
    E2.display();
}