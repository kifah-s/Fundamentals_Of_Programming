

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("\nEnter the number: ");
    scanf("%d%d%d", &x, &y, &z);

    if (y + (z * 2) <= x)
    {
        printf("\nTrue\n\n");
    }
    else
    {
        printf("\nFalse\n\n");
    }

    return 0;
}
