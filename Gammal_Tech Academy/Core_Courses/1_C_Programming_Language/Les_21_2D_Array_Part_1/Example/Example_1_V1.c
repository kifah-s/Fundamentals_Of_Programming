

/* >>> Example 1 ( Version - 1 ) <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example 1 ( Version - 1 ) ..\n\n");

    int x[5][5] = {{1, 1, 1, 1, 1},
                   {2, 2, 2, 2, 2},
                   {3, 3, 3, 3, 3},
                   {4, 4, 4, 4, 4},
                   {5, 5, 5, 5, 5}};

    int i, j;

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