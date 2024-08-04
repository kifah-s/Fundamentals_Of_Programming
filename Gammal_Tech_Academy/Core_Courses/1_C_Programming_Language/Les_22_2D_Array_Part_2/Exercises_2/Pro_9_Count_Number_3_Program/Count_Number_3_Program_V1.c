

//* Count Number 3 Program (Version 1).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * prints the matrix, and counts the number of occurrences of the value '3' in the matrix.
 */

/*
! Output:
! Matrix and count of number 3:
! 1 2 3
! 4 3 6
! 7 8 3

! Count of number 3: 3
*/

#include <stdio.h>

void welcomeMessageFun();
void printMatrixFun(int mat[3][3], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 3, 6},
                          {7, 8, 3}};

    // Declare Variables.
    int counter = 0;

    // Calling Functions.
    printMatrixFun(myMatrix, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Number 3 Program (Version 1) ..\n\n");
}

// Print Matrix - Function.
void printMatrixFun(int mat[3][3], int cou)
{
    printf("Matrix and count of number 3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", mat[i][j]);

            // Check number 3.
            if (mat[i][j] == 3)
            {
                cou++;
            }
        }
        printf("\n");
    }
    printf("\nCount of number 3: %d", cou);
}
//* End Function ..
