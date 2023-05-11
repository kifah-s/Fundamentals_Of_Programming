

/* >>> Example 2 <<< */

#include <stdio.h>

void fun()
{
    int x = 5;

    printf("\n%d\n\n\n", x);
}

int main()
{
    // printf("\n%d\n", x); // Error
    fun();

    return 0;
}