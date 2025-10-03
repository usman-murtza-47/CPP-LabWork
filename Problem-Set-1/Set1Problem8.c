#include<stdio.h>

int strLength( char*s){
  int count=0;
  while(*s!=0){
    count++;
    s++;
  }

  return count;
}

int main(){
  char str[]="HelloWorld";

  printf("The length of the string is %d",strLength(str));
  return 0;
}