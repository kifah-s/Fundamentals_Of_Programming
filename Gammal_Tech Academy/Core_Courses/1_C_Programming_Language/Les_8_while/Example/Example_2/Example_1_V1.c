

/* >>> Example 2 - ( Version - 1 ) <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example 2 - ( Version - 1 ) ..\n\n");

    int x, sum = 0;

    printf("Enter Item price : ");
    scanf("%d", &x);

    while (x != 0)
    {
        sum = sum + x;
        printf("Enter Item price : ");
        scanf("%d", &x);
    }

    printf("\nTotal = %d\n\n\n", sum);

    return 0;
}