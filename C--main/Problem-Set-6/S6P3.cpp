#include <iostream>
using namespace std;

class Employee{
    protected:
        string id;
        int salary;
};

class Manager: public Employee{
    public:
    
    void setData(string i, int s){
        id = i;
        salary = s;
    }
    void displayData(){
        cout<<"Id is :"<<id<<endl;
        cout<<"Salary is :"<<salary<<endl;
    }
};
int main(){
    Manager m1;
    m1.setData("Emp_0001",25000);
    m1.displayData();


}