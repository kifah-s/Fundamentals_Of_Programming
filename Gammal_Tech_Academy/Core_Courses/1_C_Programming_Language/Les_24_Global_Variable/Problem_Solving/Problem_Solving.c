//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

// Global variable to track the total number of tasks.
int totalTasks = 0;

// Function prototypes.
void addTasks(int tasks);

int main()
{
    problemSolvingFun();

    int tasks;

    // Input and processing for Team North America
    printf("Enter tasks completed by Team North America: ");
    scanf("%d", &tasks);
    addTasks(tasks);

    // Input and processing for Team Europe
    printf("Enter tasks completed by Team Europe: ");
    scanf("%d", &tasks);
    addTasks(tasks);

    // Input and processing for Team Asia
    printf("Enter tasks completed by Team Asia: ");
    scanf("%d", &tasks);
    addTasks(tasks);

    // Displaying the total number of tasks completed globally
    printf("Total tasks completed by all teams: %d\n", totalTasks);

    printf("\n\n");

    return 0;
}

//* Functions ..
void addTasks(int tasks)
{
    // Adding tasks to the global total
    totalTasks += tasks;
}
//* End Functions ..
