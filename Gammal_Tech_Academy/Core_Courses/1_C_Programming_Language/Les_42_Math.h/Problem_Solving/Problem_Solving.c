//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <math.h>

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

    int N, i;
    double P, V, totalRevenue = 0, operationalCost;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%lf %lf", &P, &V);
        totalRevenue += P * V;
    }
    scanf("%lf", &operationalCost);
    printf("%.0lf\n", totalRevenue);
    if (totalRevenue >= operationalCost)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    printf("\n\n");

    return 0;
}