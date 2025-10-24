// Member Functions Outside Class
// Create a class Rectangle with data members length and width.
// Define a member function area() outside the class (using scope resolution operator).
// In main(), create an object and display its area.


#include<iostream>
using namespace std;

class Rectangle{
  private:
  double length;
  double width;
  public:
  Rectangle(double l,double w):length{l},width{w}{}
double area();
  void display();
};

double Rectangle::area(){
  return length*width;
}

void Rectangle::display(){
  cout<<"The rectangle with length "<<length<<" and the width "<<width<<" has a area of "<<area()<<endl;
}
int main(){
  Rectangle R1(45,13);
  R1.display();
  
  return 0;
}