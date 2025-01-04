//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

#define MAX_EMPLOYEES 100
#define MAX_OFFICES 100

int main()
{
    problemSolvingFun();

    int n, m, i, j;
    char preference;
    int happiness[MAX_EMPLOYEES][MAX_OFFICES];
    // Reading the number of employees and offices
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        int maxIdx = 0;
        scanf(" %c", &preference);
        for (j = 0; j < m; j++)
        {
            scanf("%d", &happiness[i][j]);
            if (happiness[i][maxIdx] < happiness[i][j])
            {
                maxIdx = j;
            }
        }
        if (preference == 'W')
        {
            for (j = 0; j < m; j++)
            {
                printf("%d ", (maxIdx + j) % m + 1);
            }
            printf("\n");
        }
        else if (preference == 'M')
        {
            printf("%d\n", maxIdx + 1);
        }
        else
        {
            printf("%d\n", maxIdx + 1);
        }
    }
    
    printf("\n\n");

    return 0;
}