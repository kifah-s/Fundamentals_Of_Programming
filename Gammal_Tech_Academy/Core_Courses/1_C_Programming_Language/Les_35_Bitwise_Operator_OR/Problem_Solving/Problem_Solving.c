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

    int n;
    scanf("%d", &n);
    unsigned int planet, bestPlanet = 0;
    int maxScore = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%u", &planet);
        int climateScore = planet & 0xFF;
        int techIndex = (planet >> 8) & 0xFF;
        int resourceScore = (planet >> 16) & 0xFF;
        int distanceFactor = (planet >> 24) & 0xFF;

        if ((climateScore | techIndex) > 200 && (resourceScore | distanceFactor) < 100)
        {
            int totalScore = climateScore + techIndex + resourceScore + distanceFactor;
            if (totalScore > maxScore)
            {
                maxScore = totalScore;
                bestPlanet = planet;
            }
        }
    }

    if (bestPlanet)
    {
        printf("%u\n", bestPlanet);
    }
    else
    {
        printf("No suitable planet found\n");
    }

    printf("\n\n");

    return 0;
}