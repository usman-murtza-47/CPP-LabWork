
#include<stdio.h>
//using call by value//
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("The value of a and b after swapping is %d and %d",a,b);
}
int main(){
    int a=5, b=6;
    
    printf("The value of a and b is %d and %d \n",a,b);
    swap(a,b);
   }
  //using call by reference//

#include <stdio.h>
 void swap(int *a,int *b){
        int c=*a;
        *a=*b;
        *b=c;
      printf("The value of a and b after swapping is %d and %d",*a,*b);
        }
int main(){
    int a=5, b=6;
    printf("The value of a and b  is %d and %d \n",a,b);
   swap(&a,&b);
   }
   