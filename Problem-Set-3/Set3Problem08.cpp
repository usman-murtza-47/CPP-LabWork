// Object as Function Argument
// Create a class Complex with two data members real and imag.
// Define a function add(Complex c) that adds the current object with object c and returns the result.
// In main(), create two complex numbers and add them.

#include<iostream>
using namespace std;


class Complex{
  private:
   int real;
   int imag;
   string z;
  public:
    Complex(int r=0,int i=0):real{r},imag{i}{ }
    Complex add (Complex c){
      Complex temp;
      temp.real=real+c.real;
      temp.imag=imag+c.imag;
      return temp;   
    }

    void display(){
      cout<<real<<"+"<<imag<<"i"<<endl;
    }

};

int main(){
  Complex c1(4,5);
  Complex c2(5,6);
  Complex Sum=c1.add(c2);
  Sum.display();
  return 0;
}