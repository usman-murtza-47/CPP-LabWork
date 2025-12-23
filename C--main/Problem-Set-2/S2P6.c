#include <stdio.h>

void maxe(int m, int n, int arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < n; j++)
        {

            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        printf("\nMaximum element of %d row is : %d \n ", i+1, max);
    }
}
int main()
{
    int m, n;
    printf("Enter the number of rows :");
    scanf("%d", &m);
    printf("Enter the number of columns :");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        printf("Enter the elements of %d row :\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements at position %d :", j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    maxe(m,n,arr);
}