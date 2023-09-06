

/* >>> Example 2 <<< */

// www.gammal.tech

#include <stdio.h>

int main()
{
    int x, n = 0;
    while (scanf("%d", &x) && x != -1)
    {
        n++;
    }
    
    printf("\n%d\n\n", n);

    return 0;
}