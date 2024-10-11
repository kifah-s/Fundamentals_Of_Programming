//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

#define MAX_MACROS 1000

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

    int N, M;
    char macros[MAX_MACROS][21];
    int times[MAX_MACROS];
    char sequence[21];
    int totalTime = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d", macros[i], &times[i]);
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%s", sequence);
        for (int j = 0; j < N; j++)
        {
            if (strcmp(sequence, macros[j]) == 0)
            {
                totalTime += times[j];
                break;
            }
        }
    }
    printf("%d\n", totalTime);

    printf("\n\n");

    return 0;
}