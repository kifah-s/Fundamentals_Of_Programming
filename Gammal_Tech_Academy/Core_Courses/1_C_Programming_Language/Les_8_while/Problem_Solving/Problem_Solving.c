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

    int employees, currentEmployee = 1;
    
    // Prompt the user for input.
    printf("Enter the number of employees for compliance check: ");
    scanf("%d", &employees);

    // Compliance check loop.
    while (currentEmployee <= employees)
    {
        printf("Checking employee %d: Compliance with rules ensures success for everyone.\n", currentEmployee);
        currentEmployee++;

        printf("\n\n");

        return 0;
    }
}