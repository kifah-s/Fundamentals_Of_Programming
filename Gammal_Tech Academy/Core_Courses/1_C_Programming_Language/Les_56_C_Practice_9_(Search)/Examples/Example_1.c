

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x, n, i, s, count = 0;
    printf("\nEnter number of numbers: ");
    scanf("%d", &n);

    printf("Enter number want to search: ");
    scanf("%d", &s);

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter number: ", i + 1);
        scanf("%d", &x);
        if (s == x)
        {
            count++;
        }
        /* count += s == x; */
    }
    printf("\n%d\n\n", count);

    return 0;
}