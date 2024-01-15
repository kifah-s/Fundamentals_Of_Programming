

/* >>> Example 1 <<< */

#include <stdio.h>

// Global Variable;
int x = 5;

void fun()
{
    printf("\n%d\n\n\n", x);
}

int main()
{
    printf("\n%d\n", x);
    fun();
    return 0;
}