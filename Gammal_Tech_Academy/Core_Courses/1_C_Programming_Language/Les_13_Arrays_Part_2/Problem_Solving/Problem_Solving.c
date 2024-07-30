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

    int employees, tasks[10], sum = 0;
    float average;

    // Prompt the user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &employees);

    // Ensure the number of employees does not exceed the array size
    if (employees > 10)
    {
        printf("The maximum number of employees is 10.\n");
        return 1;
    }

    // Input the number of tasks completed by each employee
    for (int i = 0; i < employees; i++)
    {
        printf("Enter tasks completed by employee %d: ", i + 1);
        scanf("%d", &tasks[i]);
        sum += tasks[i];
    }

    // Calculate the average number of tasks completed
    average = (float)sum / employees;
    printf("Average tasks completed per employee: %.2f\n", average);

    printf("\n\n");

    return 0;
}