//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>

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

    int n;
    scanf("%d", &n);
    int tasks[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tasks[i]);
    }
    qsort(tasks, n, sizeof(int), compare);
    int total_waiting_time = 0, cumulative_time = 0;
    for (int i = 0; i < n; i++)
    {
        total_waiting_time += cumulative_time;
        cumulative_time += tasks[i];
    }
    printf("%d\n", total_waiting_time);

    printf("\n\n");

    return 0;
}