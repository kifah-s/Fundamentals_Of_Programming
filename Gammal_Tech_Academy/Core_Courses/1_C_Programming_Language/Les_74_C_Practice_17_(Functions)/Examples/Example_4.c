

/* >>> Example 4 <<< */

#include <stdio.h>

int fun(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 3, y = 5;

    int z = fun(x, y);

    printf("\n%d\n\n", z);

    return 0;
}