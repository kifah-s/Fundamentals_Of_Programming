

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int n, a, x, count = 0;
    printf("Enter number of numbers: ");
    scanf("%d", &n);
    for (a = 0; a < n; a++)
    {
        printf("Enter number %d: ", a + 1);
        scanf("%d", &x);
        count += x < 0;
    }
    printf("\n%d\n\n", count);
    
    return 0;
}