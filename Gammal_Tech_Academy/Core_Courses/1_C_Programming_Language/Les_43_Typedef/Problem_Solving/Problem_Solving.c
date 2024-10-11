//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int capacity;
    int used;
} Cluster;

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int N, M, i, j, totalDeployments = 0;
    scanf("%d %d", &N, &M);
    Cluster clusters[N];
    int tasks[M];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &clusters[i].capacity);
        clusters[i].used = 0;
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d", &tasks[i]);
    }
    qsort(tasks, M, sizeof(int), compare);
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (clusters[j].used + tasks[i] <= clusters[j].capacity)
            {
                clusters[j].used += tasks[i];
                totalDeployments++;
                break;
            }
        }
        if (j == N)
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("%d\n", totalDeployments);

    printf("\n\n");

    return 0;
}