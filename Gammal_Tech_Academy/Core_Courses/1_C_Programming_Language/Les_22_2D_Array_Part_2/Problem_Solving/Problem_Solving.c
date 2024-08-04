//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

//* End Functions ..

#define ROWS 2
#define COLS 2

int main()
{
    problemSolvingFun();

    int matrix[ROWS][COLS], sum = 0;

    // Prompt the user to enter values for the matrix
    printf("Enter values for the 2x2 matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Display the sum of the matrix elements
    printf("Sum of all elements: %d\n", sum);

    printf("\n\n");

    return 0;
}