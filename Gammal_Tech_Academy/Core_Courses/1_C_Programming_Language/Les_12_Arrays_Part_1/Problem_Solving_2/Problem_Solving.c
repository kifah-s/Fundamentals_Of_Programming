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

    int employees, tasks[10], totalTasks = 0;

    // Prompt the user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &employees);

    // Input the number of tasks completed by each employee
    for (int i = 0; i < employees; i++)
    {
        printf("Enter tasks completed by employee %d: ", i + 1);
        scanf("%d", &tasks[i]);
        totalTasks += tasks[i];
    }

    // Display the total number of tasks completed
    printf("Total tasks completed by all employees: %d\n", totalTasks);

    printf("\n\n");

    return 0;
}