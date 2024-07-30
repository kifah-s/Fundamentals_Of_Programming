//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

// Function to add tasks to the total
int addTasks(int total, int employeeTasks)
{
    return total + employeeTasks;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int employees, employeeTasks, totalTasks = 0;

    // Prompt the user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &employees);

    // Input tasks and update total for each employee
    for (int i = 0; i < employees; i++)
    {
        printf("Enter tasks completed by employee %d: ", i + 1);
        scanf("%d", &employeeTasks);
        totalTasks = addTasks(totalTasks, employeeTasks);
    }

    // Display the total number of tasks completed
    printf("Total tasks completed by all employees: %d\n", totalTasks);

    printf("\n\n");

    return 0;
}
