#include <stdio.h>
int main(){
    int a=5;
    int *p=&a;
    printf("Address of the variable is %d \n",p);
    printf("Value of the variable a is %d",*p);
  }