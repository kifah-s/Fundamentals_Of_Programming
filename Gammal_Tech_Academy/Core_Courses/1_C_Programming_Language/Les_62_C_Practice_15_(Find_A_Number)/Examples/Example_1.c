

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int i, y, x[] = {8, 5, 6, 90, 3, 1};

    printf("\nEnter a number: ");
    scanf("%d", &y);

    for (i = 0; i < 6; i++)
    {
        if (x[i] == y)
        {
            printf("\nFound\n\n");
            return 0;
        }
    }
    printf("\nNot Found\n\n");

    return 0;
}
