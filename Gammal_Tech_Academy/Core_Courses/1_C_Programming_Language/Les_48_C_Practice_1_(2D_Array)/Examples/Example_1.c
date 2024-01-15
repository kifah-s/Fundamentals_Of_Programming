

/* >>> Example 1 <<< */

#include <stdio.h>

void print(int x[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int x[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};
    print(x);

    return 0;
}