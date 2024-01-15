

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    int x, r;
    
    start:

    r = 0;
    printf("\nEnter a number: ");
    scanf("%d", &x);

    while (x)
    {
        x /= 10;
        r++;
    }
    printf("\n%d\n\n", r);

    goto start;

    return 0;
}
