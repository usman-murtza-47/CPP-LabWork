#include <stdio.h>
void sum( int m, int n, int arr1[m][n], int arr2[m][n])
{
    
    int arr3[m][n];

    for (int i = 0; i < m; i++){

        for (int j = 0; j < n; j++)
        {
       
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\n", arr3[i][j]);
        }
    }
}

int main()
{
    int m, n;
    printf("Enter the no. of rows  :");
    scanf("%d", &m);
    printf("Enter the no. of columns  :");
    scanf("%d", &n);

    int arr1[m][n];
    int arr2[m][n];

    for (int i = 0; i < m; i++)
    {

        printf("Enter the elements for row %d :\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at %d position :", j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("Enter the elements for row %d :\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at %d position :", j);
            scanf("%d", &arr2[i][j]);
        }
    }
    sum( m, n, arr1, arr2);
}