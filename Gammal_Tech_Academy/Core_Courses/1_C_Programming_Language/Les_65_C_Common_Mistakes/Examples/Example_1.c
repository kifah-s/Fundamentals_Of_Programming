

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int i, max = 0, x;
    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &x);
        if (x > max)
            max = x;
    }
    printf("\n%d\n\n", max);

    return 0;
}
