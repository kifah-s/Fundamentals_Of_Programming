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

    int N, M;
    scanf("%d %d", &N, &M);
    int happinessLevels[N], shiftPositions[M];
    // Reading initial happiness levels
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &happinessLevels[i]);
    }
    // Reading shift positions
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &shiftPositions[i]);
    }
    // Calculating final happiness levels
    for (int i = 0; i < N; i++)
    {
        int finalLevel = happinessLevels[i];
        for (int j = 0; j < M; j++)
        {
            finalLevel <<= shiftPositions[j]; // Applying left shift
        }
        printf("%d\n", finalLevel);
    }

    printf("\n\n");

    return 0;
}