 #include <iostream>
using namespace std;

class Complex{
    int real;
    int imag;

    public:
    Complex(int r, int a){
        real = r;
        imag = a;
    }

    void addComplex( Complex c){
        int newr, newi;
        newr = real + c.real;
        newi = imag + c.imag;

        cout<<"THE RESULT AFTER SUM"<<endl;
        cout<< "REAL PART :"<<newr<<endl;
        cout<<"IMAG PART :"<<newi<<endl;
    }
};

int main(){
    Complex C1(45,6);
    Complex C2(15,4);

    C1.addComplex(C2);
}
