#include<iostream>
using namespace std;

int main(){
   int a;
   cout<<"Enter the value of variable:"<<endl;
   cin>>a;
   
   int* ptr =&a;
   cout<<"The value of a is :"<<a<<endl;
   cout<<"The address of a is :"<<ptr<<endl;
   
  return 0;
}