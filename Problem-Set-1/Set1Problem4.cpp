#include<iostream>
using namespace std;

void sum(int *p, int *q){
  int sum1=*p+*q;

  cout<<"The sum of two numbers is : "<<sum1<<endl;
}

int main(){
  int a=6;
  int b=9;

  sum(&a,&b);
  return 0;
}