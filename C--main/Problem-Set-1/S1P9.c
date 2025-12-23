#include<stdio.h>
int main(){
    char a[]="Virat";
    char b[]="Apple";
    char c[]="Rohan";
    char d[]="Mango";
    char e[]="Riya";
char *arr[5]={a,b,c,d,e};


for (int i=0;i<5;i++){
  
    printf("%s\t",arr[i]);
} 
}