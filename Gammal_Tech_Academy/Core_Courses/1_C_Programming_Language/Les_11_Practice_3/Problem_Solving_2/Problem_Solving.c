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

    int totalProblems, problemNumber;

    // Prompt the user for input
    printf("Enter the number of programming problems you've practiced: ");
    scanf("%d", &totalProblems);

    // Iterate through each problem
    for (problemNumber = 1; problemNumber <= totalProblems; problemNumber++)
    {
        printf("Problem %d: ", problemNumber);

        // Categorize the problem based on its number
        if (problemNumber <= 33)
        {
            printf("Easy level - Great start, keep practicing!\n");
        }
        else if (problemNumber <= 66)
        {
            printf("Medium level - You're progressing, keep it up!\n");
        }
        else
        {
            printf("Hard level - Excellent work, you're mastering the tough ones!\n");
        }
    }

    printf("\n\n");

    return 0;
}