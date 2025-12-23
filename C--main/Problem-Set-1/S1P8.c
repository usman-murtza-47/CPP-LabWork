#include <stdio.h>
int strlength(char *s)
{
    int a=0;
    while(*s++)
    {
        a++;
    }
    return a;
}

    int main()
    {
        char str[] = "Programming";
        printf("Length of string is :%d", strlength(str));
    }
