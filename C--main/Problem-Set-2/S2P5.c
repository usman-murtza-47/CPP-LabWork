#include <stdio.h>{

void transpose(int m, int n, int arr1[m][n]){
    int arr2[n][m];
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            arr2[i][j] = arr1[j][i];
        }
    }
    printf("\nThe matrix after transpose is : \n");
    for (int i = 0; i < n; i++)
    {   printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
    }
}

int main(){
     int m, n;
    printf("Enter the no. of rows  :");
    scanf("%d", &m);
    printf("Enter the no. of columns  :");
    scanf("%d", &n);

    int arr1[m][n];

    for (int i = 0; i < m; i++)
    {

        printf("Enter the elements for row %d :\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at %d position :", j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The matrix before transpose :\n");
      for (int i = 0; i < m; i++)
    {   printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
    }
    transpose(m,n,arr1);

}