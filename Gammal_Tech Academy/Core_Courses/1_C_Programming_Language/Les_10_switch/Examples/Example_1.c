

/* >>> Example 1 <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example ..\n\n");

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("\nOne\n");
        break;
    case 2:
        printf("\nTwo\n");
    case 4:
        printf("\nFour\n");
        break;
    default:
        printf("\nNumber\n");
    }

    printf("\n\n");

    return 0;
}
