#include <stdio.h>
int main()
{
    char *arr[5] = {
        "Yash",
        "Vishnav",
        "Rohit",
        "Mafia",
        "Bunty"};

    for (int i = 0; i < 5; i++)
    {printf("%s\n",*(arr+i));
    }
}