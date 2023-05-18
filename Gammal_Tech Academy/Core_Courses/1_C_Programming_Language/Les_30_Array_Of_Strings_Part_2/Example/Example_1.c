

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    char x[3][3][15] = {{"aaa", "bbb", "ccc"},
                        {"111", "222", "333"},
                        {"AAA", "BBB", "CCC"}};
    int i, j;
    printf("\n\nThe names is : \n\n");
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