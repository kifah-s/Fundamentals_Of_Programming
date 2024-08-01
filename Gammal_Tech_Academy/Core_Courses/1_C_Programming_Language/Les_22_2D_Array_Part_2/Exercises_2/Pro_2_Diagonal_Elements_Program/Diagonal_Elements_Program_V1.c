

//* Diagonal Elements Program (Version 1).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * and prints the diagonal elements of the matrix.
 */

/*
! Output:
! Diagonal Elements:
! 1 5 9
*/

#include <stdio.h>

void welcomeMessageFun();
void printDiagonalElementsFun(int arr[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    //* Clarification .
    // printf("Diagonal Elements:\n");
    // printf("%d  ", myMatrix[0][0]);
    // printf("%d  ", myMatrix[1][1]);
    // printf("%d", myMatrix[2][2]);

    // Calling Functions.
    printDiagonalElementsFun(myMatrix);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Diagonal Elements Program (Version 1) ..\n\n");
}

// Print Diagonal Elements - Function.
void printDiagonalElementsFun(int arr[3][3])
{
    printf("Diagonal Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d", arr[i][j]);
            }
        }
        printf("  ");
    }
}
//* End Function ..
