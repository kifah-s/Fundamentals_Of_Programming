

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example - 2 ..\n\n");

    while (1)
    {
        int x[] = {9, 5, 3, 2, 7, 8, 9, -1}, i, y, count = 0;

        printf("Enter a number: ");
        scanf("%d", &y);

        for (i = 0; x[i] != -1; i++)
        {
            if (x[i] == y)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}