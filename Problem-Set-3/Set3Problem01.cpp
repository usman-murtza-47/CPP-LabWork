// Basic Class Definition
// Create a class Student with two data members: rollNo and name. Write a program to:
// 1.Create an object of the class.
// 2.Assign values to its data members.
// 3.Display the values.


#include<iostream>
using namespace std;

class Student{
  private:
   int rollNo;
   string name;
  public:
  Student(int r,string n):rollNo{r},name{n}{}
  
  void display(){
    cout<<"Displaying the values"<<endl;
    cout<<"The name of the student is "<<name<<" and the roll number of the student is "<<rollNo<<endl;
  }

};


int main(){
  Student S1(241103036,"Usman");
  S1.display();

  return 0;
}