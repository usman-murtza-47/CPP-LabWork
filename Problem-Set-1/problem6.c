#include <stdio.h>
void inputarr(int *A){
  
  printf("Enter the element:");
  for(int i=0;i<5;i++){
  scanf("%d",&A[i]);
}
}

void printarr(int *B){
int *ptr=B;


printf("Accessing array elements using pointers:");
printf("\n");

for(int i=0;i<5;i++){
    printf("%d ",*ptr);
    ptr++;
    
}
}

int main() {
int Array1[5];
inputarr(Array1);
printarr(Array1);

    return 0;
}
