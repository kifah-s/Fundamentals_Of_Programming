

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int i, n = 0, sum_1 = 0, sum_2 = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum_1 += i;
    }
    printf("sum_1 = %d\n", sum_1);

    sum_2 = (n * (n + 1)) / 2;
    printf("sum_2 = %d\n\n", sum_2);

    return 0;
}
