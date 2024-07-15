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

    // Declare variables.
    int allottedDays, daysTaken;

    // Prompt the user for input
    printf("Enter the number of days allotted for the project: ");
    scanf("%d", &allottedDays);

    printf("Enter the number of days taken to complete the project: ");
    scanf("%d", &daysTaken);

    // Determine if the project was completed on time
    if (daysTaken <= allottedDays)
    {
        printf("\nCongratulations! You have met the deadline.\n");
    }
    else
    {
        printf("\nYou have missed the deadline. Please try to complete tasks on time.\n");
    }

    printf("\n\n");

    return 0;
}