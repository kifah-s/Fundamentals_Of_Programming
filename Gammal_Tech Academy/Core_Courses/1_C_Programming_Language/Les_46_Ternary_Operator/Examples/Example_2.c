

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    x % 2 == 0 ? printf("\neven\n\n") : printf("\nodd\n\n");

    return 0;
}