

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    int x;
    printf("\nEnter number: ");
    scanf("%d", &x);

    while (x)
    {
        printf("\n\nlast digit: %d\n", x % 10);  // Print last digit.
        printf("Remove last digit, the number now: %d", x /= 10); // Remove last digit.
    }
    printf("\n\n");

    return 0;
}