#include <stdio.h>
int main()
{
    int arr[5] = {11, 12, 13, 14, 15};
    int *ptr;
    ptr = arr;
    for (int i = 1; i <= 5; i++)
    {
        printf("%d \n", *ptr);
        ptr++;
    }
    return 0;
}