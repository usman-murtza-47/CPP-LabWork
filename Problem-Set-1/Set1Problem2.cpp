#include<iostream>
using namespace std;

void swapByValue(int a,int b){
  cout<<"------Inside the swap by value function-------"<<endl;
  cout<<"Before swapping the value of a and b is "<<a<<" and "<<b<<" respectively"<<endl;
  
  int temp=a;
  a=b;
  b=temp;

  cout<<"After swapping the value of a and b is "<<a<<" and "<<b<<" respectively"<<endl;
  cout<<"------swap by value function ended-------"<<endl;
}
void swapByRefrence(int  *a,int *b){
  cout<<"------Inside the swap by refrence function-------"<<endl;
  cout<<"Before swapping the value of a and b is "<<*a<<" and "<<*b<<" respectively"<<endl;
  
  int temp=*a;
  *a=*b;
  *b=temp;

  cout<<"After swapping the value of a and b is "<<*a<<" and "<<*b<<" respectively"<<endl;
  cout<<"------swap by refrence function ended-------"<<endl;
}


int main(){
   int a;
   cout<<"Enter the value of variable:"<<endl;
   cin>>a;

   int b;
   cout<<"Enter the value of variable:"<<endl;
   cin>>b;

   swapByValue(a,b);

   cout<<"Value of a and b after swap by value function ended "<<a<<" and "<<b<<" respectively"<<endl;

   swapByRefrence(&a,&b);

    cout<<"Value of a and b after swap by refrence function ended "<<a<<" and "<<b<<" respectively"<<endl;

  
  return 0;
}