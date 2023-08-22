

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x, r = 0;

    printf("\nEnter a number: ");
    scanf("%d", &x);

    while (x)
    {
        x /= 10;
        r++;
    }
    printf("\n%d\n\n", r);

    return 0;
}
