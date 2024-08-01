//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

//* End Functions ..

#define ROWS 3
#define COLS 3

int main()
{
    problemSolvingFun();

    int matrix[ROWS][COLS];

    // Prompt the user to fill the matrix
    printf("Enter %d values for the matrix:\n", ROWS * COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}