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

    // Declare Variables.
    int teamMembers;

    // Prompt the user for input.
    printf("Enter the total number of team members: ");
    scanf("%d", &teamMembers);

    // Acknowledge each team member's contribution.
    for (int member = 1; member <= teamMembers; member++)
    {
        printf("Team member %d: Thank you for your valuable contribution!\n", member);
    }

    printf("\n\n");

    return 0;
}