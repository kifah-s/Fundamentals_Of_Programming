

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x, y = 0;

    printf("\nEnter number: ");
    scanf("%d", &x);

    while (x)
    {
        y = y * 10 + x % 10;
        x /= 10; // Remove last digit.
    }

    printf("\n%d\n\n", y);

    return 0;
}
