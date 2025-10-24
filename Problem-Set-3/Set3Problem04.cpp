// Create a class Employee with data members id and salary.
// Write a parameterized constructor to initialize data members.
// Create two objects and display their details.

#include<iostream>
using namespace std;

class Employee{
  private:
  string id;
  double salary;
  public:
  Employee(string i,double s):id{i},salary{s}{};
  void display(){
    cout<<"The id of the employee is "<<id<<" and employee's monthly salary is "<<salary<<endl;
}
};


int main(){
  Employee E1("USM4N",999);
  Employee E2("FS47",999);

  E1.display();
  E2.display();
  return 0;
}