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

    int numberOfPeople;
    scanf("%d", &numberOfPeople);

    char *lightIntensity = numberOfPeople == 0 ? "OFF" : (numberOfPeople == 1 ? "MEDIUM" : "FULL");
    
    printf("%s\n", lightIntensity);

    printf("\n\n");

    return 0;
}