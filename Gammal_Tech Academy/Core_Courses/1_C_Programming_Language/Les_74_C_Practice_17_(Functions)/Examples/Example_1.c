

/* >>> Example 1 <<< */

#include <stdio.h>

int fun(int y)
{
    if (y > 0)
        return 10;
    return -10;
}

int main()
{
    int x = 3;
    int z = fun(x);

    printf("\n%d\n\n", z);

    return 0;
}
