

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    x % 2 == 0 ? printf("\neven\n\n") : printf("\nodd\n\n");
    /* x % 2 == 1 ? printf("\nodd\n\n") : printf("\neven\n\n"); */
    /* x % 2 ? printf("\nodd\n\n") : printf("\neven\n\n"); */

    return 0;
}