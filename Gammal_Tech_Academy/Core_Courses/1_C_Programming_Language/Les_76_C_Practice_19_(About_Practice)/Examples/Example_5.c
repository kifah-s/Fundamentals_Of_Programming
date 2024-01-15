

/* >>> Example 5 <<< */

// www.gammal.tech

#include <stdio.h>

int main()
{
    int x, n = 1;
    while (scanf("%d", &x) && x != -1)
    {
        if (x % 2 == 1)
        {
            n++;
        }
    }

    printf("\n%d\n\n", n);

    return 0;
}