

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int i, n, x, gx = 0, sx = 0, ex = 0, dx = 0;
    printf("\nEnter # of numbers: ");
    scanf("%d", &n);
    int z[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter #%d: ", i + 1);
        scanf("%d", &z[i]);
    }

    printf("\nEnter x: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        gx += z[i] > x ? 1 : 0;
        sx += z[i] < x ? 1 : 0;
        dx += z[i] % x == 0 ? 1 : 0;
        ex += z[i] == x ? 1 : 0;
    }
    printf("\n------------\n"
           "%d Greater than %d\n"
           "%d Smaller than %d\n"
           "%d Divisible by %d\n"
           "%d Equal to %d\n\n",
           gx, x, sx, x, dx, x, ex, x);
}
