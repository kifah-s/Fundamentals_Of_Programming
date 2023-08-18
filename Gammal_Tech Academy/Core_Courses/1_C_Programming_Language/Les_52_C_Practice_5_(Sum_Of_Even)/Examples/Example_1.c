

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x, n, i, sum = 0;
    printf("\nEnter the number of number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            sum += x;
        }
    }
    printf("\n%d\n\n", sum);
    return 0;
}