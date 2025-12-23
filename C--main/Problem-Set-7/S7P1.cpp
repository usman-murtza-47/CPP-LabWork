#include <iostream>
using namespace std;

template <class T>

void printTwo(T a, T b){
    cout<<a<<" "<<b;
}

int main(){
    int x,y;
    cout<<"enter the first number :"<<endl;
    cin>>x;
    cout<<"enter the second number :"<<endl;
    cin>>y;
    printTwo(x,y);
}