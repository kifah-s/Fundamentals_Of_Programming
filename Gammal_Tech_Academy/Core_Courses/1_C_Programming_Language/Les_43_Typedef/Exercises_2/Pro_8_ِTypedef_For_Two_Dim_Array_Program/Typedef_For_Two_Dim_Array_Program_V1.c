

//* Typedef For Two Dimensional Array Program (Version 1).

/*
 * Define a typedef for a two-dimensional array of integers named Matrix.
 * Create a program that declares and prints the values of a Matrix variable representing the identity matrix.
 */

/*
! Output:
! Identity Matrix:
! 1    0   0
! 0    1   0
! 0    0   1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef int Matrix[3][3];

void welcomeMessageFun();
void PrintValuesOfArrayFun(Matrix x);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    Matrix myArr = {{1, 0, 0},
                    {0, 1, 0},
                    {0, 0, 1}};

    // Call Function.
    PrintValuesOfArrayFun(myArr);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Two Dimensional Array Program (Version 1) ..\n\n");
}

// Print Values Of Array - Function.
void PrintValuesOfArrayFun(Matrix x)
{
    printf("Identity Matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
}
//* End Function ..
