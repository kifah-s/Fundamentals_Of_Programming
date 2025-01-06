

//* Matrix Addition Program (Version 1).

/*
* Create a program to perform matrix addition.

! Input:
! Please enter a number of rows: 2
! Please enter a number of columns: 3

! Please enter elements for matrix: 1
! Please enter element at [0][0]: 1
! Please enter element at [0][1]: 2
! Please enter element at [0][2]: 3
! Please enter element at [1][0]: 4
! Please enter element at [1][1]: 5
! Please enter element at [1][2]: 6

! Please enter elements for matrix: 2
! Please enter element at [0][0]: 7
! Please enter element at [0][1]: 8
! Please enter element at [0][2]: 9
! Please enter element at [1][0]: 10
! Please enter element at [1][1]: 11
! Please enter element at [1][2]: 12

! Output:
! Result Matrix (Sum):
! 8     10      12
! 14    16      18
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int rows, int columns, int mat_1[rows][columns], int mat_2[rows][columns], int sumMat[rows][columns]);

int main()
{
    // Declare Variables.
    int rows = 0, columns = 0;
    int myMatrix_1[2][3], myMatrix_2[2][3], sumMatrix[2][3];

    // Call Functions.
    resultFun(rows, columns, myMatrix_1, myMatrix_2, sumMatrix);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Matrix Addition Program (Version 1) ..\n\n");
}

// Git Rows - Function.
int gitRowsFun(int rows)
{
    printf("Please enter a numbers of rows: ");
    scanf("%d", &rows);

    return rows;
}

// Git Columns - Function.
int gitColumnsFun(int columns)
{
    printf("Please enter a numbers of columns: ");
    scanf("%d", &columns);

    return columns;
}

// Get Elements For Matrix 1 - Function.
void getElementsForMatrix_1Fun(int rows, int columns, int mat_1[rows][columns])
{
    printf("\nPlease enter elements for matrix: 1\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Please enter element at [%d][%d]: ", i, j);
            scanf("%d", &mat_1[i][j]);
        }
    }

    // printf("\nThe array 1 is:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         printf("%d      ", mat_1[i][j]);
    //     }
    //     printf("\n");
    // }
}

// Get Elements For Matrix 2 - Function.
void getElementsForMatrix_2Fun(int rows, int columns, int mat_2[rows][columns])
{
    printf("\nPlease enter elements for matrix: 2\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Please enter element at [%d][%d]: ", i, j);
            scanf("%d", &mat_2[i][j]);
        }
    }

    // printf("\nThe array 2 is:\n");
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         printf("%d      ", mat_2[i][j]);
    //     }
    //     printf("\n");
    // }
}

// Sum Matrix - Function.
void sumMatrixFun(int rows, int columns, int mat_1[rows][columns], int mat_2[rows][columns], int sumMat[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sumMat[i][j] = mat_1[i][j] + mat_2[i][j];
        }
    }

    printf("\nResult Matrix (Sum):\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d      ", sumMat[i][j]);
        }
        printf("\n");
    }
}

// Result - Function.
void resultFun(int rows, int columns, int mat_1[rows][columns], int mat_2[rows][columns], int sumMat[rows][columns])
{
    printWelcomeMessageFun();
    rows = gitRowsFun(rows);
    columns = gitColumnsFun(columns);
    getElementsForMatrix_1Fun(rows, columns, mat_1);
    getElementsForMatrix_2Fun(rows, columns, mat_2);
    sumMatrixFun(rows, columns, mat_1, mat_2, sumMat);
}
//* End Function ..
