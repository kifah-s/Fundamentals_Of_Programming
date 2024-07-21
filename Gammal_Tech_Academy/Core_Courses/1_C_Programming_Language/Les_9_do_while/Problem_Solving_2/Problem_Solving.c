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

    int activities, currentActivity = 1;

    // Prompt the user for input
    printf("Enter the number of group activities: ");
    scanf("%d", &activities);

    // Group unity loop
    do
    {
        printf("Activity %d: Together, we grow and succeed at Gammal Tech.\n", currentActivity);
        currentActivity++;
    } while (currentActivity <= activities);

    printf("\n\n");

    return 0;
}