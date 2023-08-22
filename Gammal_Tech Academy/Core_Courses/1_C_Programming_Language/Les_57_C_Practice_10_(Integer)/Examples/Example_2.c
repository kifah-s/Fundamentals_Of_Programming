

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    start:

    int x, r = 0;
    
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
