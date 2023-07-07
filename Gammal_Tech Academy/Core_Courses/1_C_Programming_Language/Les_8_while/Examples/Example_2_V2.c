

/* >>> Example 2 ( Version 2 ) <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example 2 ( Version 2 ) ..\n\n");

    int x, sum = 0;

    while (x != 0)
    {
        printf("Enter Item price : ");
        scanf("%d", &x);
        sum = sum + x;
    }

    printf("\nTotal = %d\n\n\n", sum);

    return 0;
}