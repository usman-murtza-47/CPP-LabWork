// Default and Parameterized Constructors
// Create a class Circle with data member radius.
// Write a default constructor that sets radius to 1.
// Write a parameterized constructor that accepts radius from user.
// Add a function area() to calculate and display the area.
// Demonstrate both constructors in main().

#include<iostream>
using namespace std;

class Circle{
  private:
  double radius;
  public:
  Circle(){
    radius=1;
  }

  Circle(double r){
    radius=r;
  }
  double area(){
    return (3.14)*radius*radius;
  }

  void display(){
    cout<<"The area of the circle with radius "<<radius << " is "<<area()<<endl;
  }
};

int main(){
  double r1;
  Circle C1;
  C1.display();

  cout<<"Enter the radius "<<endl;
  cin>>r1;

  Circle C2(r1);
   C2.display();
  return 0;
}