

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int i, x, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &x);
        sum += x;
    }
    printf("\n%d\n\n", sum);

    return 0;
}
