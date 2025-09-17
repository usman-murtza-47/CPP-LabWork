#include<stdio.h>
int main(){
    char first[]="Hello";
    char second[]="Hi";
    char third[]="Come";
    char fourth[]="Play";
    char fifth[]="Fifa";

char *arr[5]={first,second,third,fourth,fifth};


printf("THE 5 names are:\n");
for (int i=0;i<5;i++){
  
    printf("%s\n",arr[i]);
} 
}