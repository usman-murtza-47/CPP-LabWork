#include<iostream>
using namespace std;
 
void maxnum(int *p, int *q,int *r){
int max=*p;

if(*q>max){max=*q;}
if(*r>max){max=*r;}

cout<<"The greatest number of all three is : "<<max<<endl;
}
int main(){
  int a=9;
  int b=18;
  int c=27;

  maxnum(&a,&b,&c);
  return 0;
}