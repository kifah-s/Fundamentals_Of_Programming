

/* >>> Example 1 <<< */

// www.gammal.tech

#include <stdio.h>

int main()
{
    int n, x, min, max, i;
    printf("\nEnter the number of numbers: ");
    scanf("%d %d", &n, &x);

    min = max = x;

    for (i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    printf("\nMax = %d\n", max);
    printf("Min = %d\n\n", min);

    return 0;
}
