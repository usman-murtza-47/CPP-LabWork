#include <stdio.h>

void Sum(int m,int n,int o,int arr[m][n][o]){
    int s=0;
       for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("\n");
            for (int k = 0; k < o; k++)
            {
                s+= arr[i][j][k];
            }
        }
    }
    printf("Sum of all elements : %d",s);

}
int main()
{
    int m, n, o;
    printf("Enter the depth of array :");
    scanf("%d", &m);
    printf("Enter the number of rows :");
    scanf("%d", &n);
    printf("Enter the number of columns :");
    scanf("%d", &o);
    int arr[m][n][o];
    for (int i = 0; i < m; i++)
    {
        printf("Enter the elements of %d depth :\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of %d row :\n", j);
            for (int k = 0; k < o; k++)
            {
                printf("Enter the element at %d position :",k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("\n");
            for (int k = 0; k < o; k++)
            {
                printf("%d \t", arr[i][j][k]);
            }
        }
    }
    Sum(m,n,o,arr);
}