//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

typedef enum
{
    INNOVATION = 500,
    EFFICIENCY_IMPROVEMENT = 300,
    COST_SAVING = 400,
    OTHER = 0
} ContributionType;

int calculateTotalPoints(ContributionType contributions[], int size)
{
    int totalPoints = 0;
    for (int i = 0; i < size; i++)
    {
        totalPoints += contributions[i];
    }
    return totalPoints;
}

int main()
{
    problemSolvingFun();

    int n;
    scanf("%d", &n);

    ContributionType contributions[n];

    for (int i = 0; i < n; i++)
    {
        int type;
        scanf("%d", &type);
        contributions[i] = (ContributionType)type;
    }
    
    printf("%d\n", calculateTotalPoints(contributions, n));

    printf("\n\n");

    return 0;
}