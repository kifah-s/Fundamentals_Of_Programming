

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    char x[3][3][15];
    int i, j;
    printf("\nPlease enter names : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%s", x[i][j]);
        }
    }
    printf("\n");

    printf("the names is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%s  ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}