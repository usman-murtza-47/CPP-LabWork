#include<iostream>
using namespace std;

void reverse(int *arr,int n){
int *str=arr;
int *end =&arr[n-1];

while(str<end){

  int temp=*str;
  *str=*end;
  *end=temp;
  str++;
  end--;
}
}
void printarr(int *p,int n){
  cout<<"Array elements are:"<<endl;
for(int i=0;i<n;i++){
  cout<<*(p)<<" ";
  *p++;
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

cout<<"Before reverse,";
printarr(ptr,5);
cout<<endl;
cout<<" After reverse,";
reverse(ptr,5);
printarr(ptr,5);

  return 0;
}