#include<stdio.h>

int strlength (char *s){
int count=0;
while(s[count]!=0){
  count++;
}
return count;
}
int main ()  {
  char str[]="Usman";
  
  printf( "The length of the given string is %d",strlength(str));
  return 0;
}

