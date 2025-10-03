#include<iostream>
using namespace std;
void increement(int *p){
 int i=*p+1;
cout<<"The value after increement : "<<i<<endl;
}

int main(){
  int a=5;
  
  increement(&a);

  return 0;

}