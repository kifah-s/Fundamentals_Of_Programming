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

    int totalDays, day;

    // Prompt the user for input
    printf("Enter the total number of days allotted for the project: ");
    scanf("%d", &totalDays);

    // Countdown loop
    for (day = totalDays; day > 1; day--)
    {
        printf("%d days remaining.\n", day);
    }
    printf("1 day remaining.\n");

    printf("\n\n");

    return 0;
}