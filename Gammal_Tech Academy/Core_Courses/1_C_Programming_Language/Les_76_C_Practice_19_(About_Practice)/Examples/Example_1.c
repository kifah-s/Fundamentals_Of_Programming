

/* >>> Example 1 <<< */

// www.gammal.tech

#include <stdio.h>

int isPal(int x)
{
    int y = x, z = 0;

    while (y)
    {
        z = z * 10 + y % 10;
        y /= 10;
    }

    return x == z;
}

int main()
{
    int x, n = 0;

    while (scanf("%d", &x) && x != -1)
    {
        if (isPal(x))
        {
            n++;
        }
    }
    printf("\n%d\n\n", n);
}
