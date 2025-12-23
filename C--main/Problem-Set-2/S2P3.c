#include <stdio.h>

void sum(int a[], int n)
{
    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            evensum += *(a + i);
        }
        if (*(a + i) % 2 == 1)
        {
            oddsum += *(a + i);
        }
    }
     
    printf("Sum of odd elements is %d \n", oddsum);
    printf("Sum of even elements is %d \n", evensum);

    
}
int main()
{
    int n;
    printf("Enter the length of array :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at index position %d :", i);
        scanf("%d", &a[i]);
    }
    sum(a, n);
}

