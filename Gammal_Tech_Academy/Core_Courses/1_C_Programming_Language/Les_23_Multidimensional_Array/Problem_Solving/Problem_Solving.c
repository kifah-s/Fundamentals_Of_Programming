//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

//* End Functions ..

#define SIZE 3

int main()
{
    problemSolvingFun();

    int space[SIZE][SIZE][SIZE], startNum;
    
    // Prompt and initialize each layer with user-provided starting numbers
    for (int layer = 0; layer < SIZE; layer++)
    {
        printf("Enter the starting number for layer %d: ", layer + 1);
        scanf("%d", &startNum);
        for (int row = 0; row < SIZE; row++)
        {
            for (int col = 0; col < SIZE; col++)
            {
                space[layer][row][col] = startNum++;
            }
        }
    }
    
    // Display the 3D array
    for (int i = 0; i < SIZE; i++)
    {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                printf("%d ", space[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}