#include<stdio.h>
void reverse(int *arr, int n){
    int *ptr=arr;
    int *end=&arr[n-1];
    while (ptr<end){
        int c=*ptr;
        *ptr=*end;
        *end=c;
        ptr++;
        end--;
    }

}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("The elements of array before reversing :\n");
    for (int i=0;i<5;i++){
        printf("%d \n ",arr[i]);
    }
     printf("The elements of array after reversing :\n");
     reverse(arr,5);
     int *ptr=arr;
     for (int i=0;i<5;i++){
        printf("%d\n",*ptr);
        ptr++;
        
}
}