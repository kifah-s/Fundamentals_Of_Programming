

//* Total Sum Program (Version 1).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * prints the entered matrix row-wise, calculates the sum of each row,
 * and finally calculates the total sum of all elements in the matrix.
 */

/*
! Output:
! Matrix and sum of each row:
! 1 2 3 (Sum: 6)
! 4 5 6 (Sum: 15)
! 7 8 9 (Sum: 24)

! Total sum of all matrix elements: 45
*/

#include <stdio.h>

void welcomeMessageFun();
void printMatrixFun(int mat[3][3], int sumRow, int totSum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Declare Variables.
    int sumRow = 0, totalSum = 0;

    // Calling Functions.
    printMatrixFun(myMatrix, sumRow, totalSum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Total Sum Program (Version 1) ..\n\n");
}

// Print Matrix - Function.
void printMatrixFun(int mat[3][3], int sumRow, int totSum)
{
    printf("Matrix and sum of each row:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", mat[i][j]);
            sumRow = sumRow + mat[i][j];
            totSum = totSum + mat[i][j];
        }
        printf("(Sum Row %d: %d)\n", i + 1, sumRow);
        sumRow = 0;
    }
    printf("\nTotal sum of all matrix elements: %d", totSum);
}
//* End Function ..
