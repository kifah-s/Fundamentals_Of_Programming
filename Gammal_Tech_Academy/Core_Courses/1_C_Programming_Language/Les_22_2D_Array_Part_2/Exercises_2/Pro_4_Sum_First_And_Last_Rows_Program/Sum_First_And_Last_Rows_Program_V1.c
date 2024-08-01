

//* Sum First And Last Rows Program (Version 1).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * and calculates the sum of the elements in the first and last rows separately,
 * Print the sums.
 */

/*
! Output:
! Sum of the first row: 6

! Sum of the last row: 24
*/

#include <stdio.h>

void welcomeMessageFun();
void sumFirstRowFun(int mat[3][3], int sumFir);
void sumSecondRowFun(int mat[3][3], int sumSec);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Declare Variables.
    int sumFirst = 0, sumSecond = 0;

    // Calling Functions.
    sumFirstRowFun(myMatrix, sumFirst);
    sumSecondRowFun(myMatrix, sumSecond);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum First And Last Rows Program (Version 1) ..\n\n");
}

// Sum First Row - Function.
void sumFirstRowFun(int mat[3][3], int sumFir)
{
    for (int i = 0; i < 3; i++)
    {
        sumFir = sumFir + mat[0][i];
    }
    printf("Sum of the First row: %d", sumFir);
}

// Sum Second Row - Function.
void sumSecondRowFun(int mat[3][3], int sumSec)
{
    for (int i = 0; i < 3; i++)
    {
        sumSec = sumSec + mat[2][i];
    }
    printf("\nSum of the Second row: %d", sumSec);
}
//* End Function ..
