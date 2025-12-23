#include <stdio.h>
int sum(int *p,int *q){
    *p=*p+*q;
    return *p;
}
int main(){
    int a=5;
    int b=10;
    int c;
    printf("The two numbers are %d and %d. \n",a,b);
    c= sum(&a,&b);
    printf("Their sum is %d",c);
}
