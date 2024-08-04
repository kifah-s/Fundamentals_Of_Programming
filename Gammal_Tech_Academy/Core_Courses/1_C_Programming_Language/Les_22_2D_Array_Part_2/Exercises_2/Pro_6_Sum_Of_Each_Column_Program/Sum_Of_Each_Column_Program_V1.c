

//* Sum Of Each Column Program (Version 1).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * and calculates the sum of each column,
 * Print the entered matrix and the sum of each column.
 */

/*
! Output:
! Matrix:
! 1 2 3
! 4 5 6
! 7 8 9

! Sum Of Each Column:
! Column 1: 12
! Column 2: 15
! Column 3: 18
*/

#include <stdio.h>

void welcomeMessageFun();
void printMatrixFun(int mat[3][3]);
void sumColumn1Fun(int mat[3][3], int sumCol1);
void sumColumn2Fun(int mat[3][3], int sumCol2);
void sumColumn3Fun(int mat[3][3], int sumCol3);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Declare Variables.
    int sumColumn1 = 0, sumColumn2 = 0, sumColumn3 = 0;

    // Calling Functions.
    printMatrixFun(myMatrix);
    sumColumn1Fun(myMatrix, sumColumn1);
    sumColumn2Fun(myMatrix, sumColumn2);
    sumColumn3Fun(myMatrix, sumColumn3);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Each Column Program (Version 1) ..\n\n");
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

// Sum Column 1 - Function.
void sumColumn1Fun(int mat[3][3], int sumCol1)
{
    for (int i = 0; i < 3; i++)
    {
        sumCol1 = sumCol1 + mat[i][0];
    }
    printf("\nSum Of Each Column:\n");
    printf("Column 1: %d\n", sumCol1);
}

// Sum Column 2 - Function.
void sumColumn2Fun(int mat[3][3], int sumCol2)
{
    for (int i = 0; i < 3; i++)
    {
        sumCol2 = sumCol2 + mat[i][1];
    }
    printf("Column 2: %d\n", sumCol2);
}

// Sum Column 3 - Function.
void sumColumn3Fun(int mat[3][3], int sumCol3)
{
    for (int i = 0; i < 3; i++)
    {
        sumCol3 = sumCol3 + mat[i][2];
    }
    printf("Column 3: %d\n", sumCol3);
}
//* End Function ..
