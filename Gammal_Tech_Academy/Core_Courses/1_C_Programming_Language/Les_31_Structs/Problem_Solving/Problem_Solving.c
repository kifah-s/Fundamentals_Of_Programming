//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int skill;
    int experience;
} Developer;

typedef struct
{
    int required_skill;
    int required_experience;
} Project;

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
    Project projects[N];
    Developer developers[M];
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &projects[i].required_skill, &projects[i].required_experience);
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &developers[i].skill, &developers[i].experience);
    }
    for (int i = 0; i < N; i++)
    {
        int bestMatch = 0;
        int bestScore = -1;
        for (int j = 0; j < M; j++)
        {
            int skillMatch = abs(projects[i].required_skill - developers[j].skill);
            int expMatch = abs(projects[i].required_experience - developers[j].experience);
            int totalMatch = skillMatch + expMatch;
            if (bestScore == -1 || totalMatch < bestScore)
            {
                bestScore = totalMatch;
                bestMatch = j;
            }
        }
        printf("%d\n", bestMatch + 1);
    }

    printf("\n\n");

    return 0;
}