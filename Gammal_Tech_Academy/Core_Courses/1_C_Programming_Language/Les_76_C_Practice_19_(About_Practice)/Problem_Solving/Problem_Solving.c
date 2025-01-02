//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n, r, i, j, eligible;
    scanf("%d", &n);
    int points[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &points[i]);
    }
    scanf("%d", &r);
    int rewards[r];
    for (i = 0; i < r; i++)
    {
        scanf("%d", &rewards[i]);
    }
    for (i = 0; i < r; i++)
    {
        eligible = 0;
        for (j = 0; j < n; j++)
        {
            if (points[j] >= rewards[i])
            {
                eligible++;
            }
        }
        printf("%d\n", eligible);
    }

    printf("\n\n");

    return 0;
}