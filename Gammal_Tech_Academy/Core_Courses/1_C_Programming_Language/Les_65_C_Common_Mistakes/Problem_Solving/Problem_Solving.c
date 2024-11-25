//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void distributeTasks(int tasks[], int N, int computers[], int M)
{
    int assignedTasks[M];
    for (int i = 0; i < M; i++)
    {
        assignedTasks[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        int minTime = 1001, chosenComp = 0;
        for (int j = 0; j < M; j++)
        {
            int time = tasks[i] / computers[j];
            if (time < minTime)
            {
                minTime = time;
                chosenComp = j;
            }
        }
        assignedTasks[chosenComp]++;
    }
    for (int i = 0; i < M; i++)
    {
        printf("%d ", assignedTasks[i]);
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int N, M;
    scanf("%d", &N);
    int tasks[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tasks[i]);
    }
    scanf("%d", &M);
    int computers[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &computers[i]);
    }
    distributeTasks(tasks, N, computers, M);

    printf("\n\n");

    return 0;
}