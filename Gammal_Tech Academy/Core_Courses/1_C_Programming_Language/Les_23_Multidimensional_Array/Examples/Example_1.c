

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example ..\n\n");

    // Declaration the array and the counters;
    int x[3][3][3];
    int i, j, k;

    // Storing the array values;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d", &x[i][j][k]);
            }
        }
    }
    printf("\n");

    // printing the array;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d\n", x[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}