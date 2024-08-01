

//* Sum Main Diagonal Program (Version 2).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * and calculates the sum of the elements on the main diagonal (from top-left to bottom-right),
 * Print the sum.
 */

/*
! Output:
! Matrix:
! 1 2 3
! 4 5 6
! 7 8 9

! Sum Of The Main Diagonal: 15
*/

#include <stdio.h>

void welcomeMessageFun();
void printMatrixFun(int mat[3][3]);
void sumMainDiagonalFun(int mat[3][3], int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Declare Variables.
    int sumMainDiagonal = 0;

    // Calling Functions.
    printMatrixFun(myMatrix);
    sumMainDiagonalFun(myMatrix, sumMainDiagonal);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Main Diagonal Program (Version 2) ..\n\n");
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

// Sum Main Diagonal - Function.
void sumMainDiagonalFun(int mat[3][3], int sum)
{
    for (int i = 0; i < 3; i++)
    {
        sum = sum + mat[i][i];
    }
    printf("\nSum Of The Main Diagonal: %d", sum);
}
//* End Function ..
