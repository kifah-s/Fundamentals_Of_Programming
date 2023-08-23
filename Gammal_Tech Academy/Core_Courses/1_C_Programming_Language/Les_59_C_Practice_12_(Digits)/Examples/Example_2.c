

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    int x;
    printf("\nEnter number: ");
    scanf("%d", &x);

    while (x)
    {
        printf("\n%d", x % 10); // Print last digit.
        x /= 10;                // Remove last digit.
    }
    printf("\n\n");

    return 0;
}