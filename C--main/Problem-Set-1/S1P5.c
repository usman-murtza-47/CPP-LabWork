#include <stdio.h>
int max(int *a, int *b, int *c)
{
    if ((*a > *b) && (*a > *c))
    {
        return *a;
    }
    else if ((*b > *a) && (*b > *c))
    {
        return *b;
    }
    else
    {
        return *c;
    }
}
int main()
{
    int a, b, c;
    printf("Enter 1st number :\n");
    scanf("%d", &a);
    printf("Enter 2nd number :\n");
    scanf("%d", &b);
    printf("Enter 3rd number :\n");
    scanf("%d", &c);
    printf("The greatest integer is %d",max(&a,&b,&c));
}
