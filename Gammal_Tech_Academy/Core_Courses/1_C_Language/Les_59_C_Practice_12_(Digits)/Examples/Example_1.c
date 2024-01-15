

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x;
    printf("\nEnter number: ");
    scanf("%d", &x);

    while (x)
    {
        printf("\n%d", x % 10);
        x /= 10;
    }
    printf("\n\n");

    return 0;
}