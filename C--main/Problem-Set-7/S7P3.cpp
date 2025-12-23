#include <iostream>
using namespace std;

template <class T>

class MinMaxPair{
    T minVal;
    T maxVal;
    public:

    MinMaxPair(T a, T b){
        minVal = a;
        maxVal = b;
    }

    void print(){
        cout<<minVal<<endl;
        cout<<maxVal<<endl;
    }

};
 
int main(){
    MinMaxPair <float> obj1(2.4,8.6);
    obj1.print();
}