

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example ..\n\n");

    int i, j;
    int x[6][5] = {{1, 1, 1, 1, 1},
                   {2, 2, 2, 2, 2},
                   {3, 3, 3, 3, 3},
                   {4, 4, 4, 4, 4},
                   {5, 5, 5, 5, 5},
                   {6, 6, 6, 6, 6}};

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}