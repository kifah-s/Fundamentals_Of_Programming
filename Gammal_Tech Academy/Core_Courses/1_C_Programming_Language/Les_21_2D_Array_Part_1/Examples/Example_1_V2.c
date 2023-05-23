

/* >>> Example 1 ( Version - 2 ) <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example 1 ( Version - 2 ) ..\n\n");

    int i, j, x[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    return 0;
}