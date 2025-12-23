#include <iostream>
using namespace std;

 class Complex{
    public:
    int real;
    int imag;

    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int a, int b){
        real = a;
        imag = b;

    }
    void display(){
        cout<<"The real part is :"<<real<<endl;
        cout<<"The imag part is :"<<imag;
    }
};

Complex add(Complex c1, Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main(){
    Complex c1(14,56);
    Complex c2(85,20);
    Complex c3;
    c3 = add(c1,c2);
    c3.display();
}