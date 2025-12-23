#include <stdio.h>
void increment(int *p){
    *p=*p+1;
}
int main(){
    int a=5;
    increment(&a);
    printf("The value of a after increment is %d",a);
}
