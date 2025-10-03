#include<iostream>
using namespace std;

void printarr(int *p,int n){
  cout<<"Array elements are:"<<endl;
for(int i=0;i<n;i++){
  cout<<*(p)<<" ";
  *p++;
  cout<<endl;
}
}


int main(){

  int arr[5];
 int*ptr=arr;
 cout<<"Enter 5 integers:"<<endl;
  for(int i=0;i<5;i++){
    cin>>*(ptr);
    ptr++;
  }
ptr=arr;
  printarr(ptr,5);

  return 0;
}

