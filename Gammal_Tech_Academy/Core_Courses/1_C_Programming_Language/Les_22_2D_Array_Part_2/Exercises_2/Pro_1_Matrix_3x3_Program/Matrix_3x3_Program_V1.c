

//* Matrix 3x3 Program (Version 1).

/*
 * Write a program that initializes a 3x3 matrix with predefined values and prints the matrix.
 */

/*
! Output:
! Matrix:
! 1 2 3
! 4 5 6
! 7 8 9
*/

#include <stdio.h>

void welcomeMessageFun();
void printMatrixFun(int mat[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Calling Functions.
    printMatrixFun(myMatrix);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Matrix 3x3 Program (Version 1) ..\n\n");
}

// Print Matrix - Function.
void printMatrixFun(int mat[3][3])
{
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}
//* End Function ..
