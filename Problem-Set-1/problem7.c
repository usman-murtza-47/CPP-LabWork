#include <stdio.h>
int reverseArray(int *arr,int n){ 
  int *str=arr;
  int *end=&arr[n-1];
    while(str<end){
        int temp;
        temp=*str;
        *str=*end;
        *end=temp;
        str++;
        end--;
    }
    return 0;
}

int printArray(int *arr,int n){
    int *ptr=arr;
for(int i=0;i<5;i++){
    printf("%d ",*ptr);
    ptr++;
    }
    return 0;
}

int main() {
int arr[5]={1,2,3,4,5};
printf("Accessing array elements before reversing:");
printArray(arr ,5);
printf("\n");
printf("Accessing array elements after reversing:");
reverseArray(arr,5);
printArray(arr ,5);    
return 0;
}
