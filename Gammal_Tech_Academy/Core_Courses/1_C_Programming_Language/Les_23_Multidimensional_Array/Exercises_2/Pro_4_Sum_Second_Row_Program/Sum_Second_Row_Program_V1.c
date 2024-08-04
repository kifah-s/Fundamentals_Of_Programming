

//* Sum Second Row Program (Version 1).

/*
 * Write a program that initializes a three-dimensional array x with predefined integer values,
 * The program then calculates and prints the sum of all elements in the Second row of the array,
 * using nested loops.
 */

/*
! Output:
! Sum of Second row: 54
*/

#include <stdio.h>

void welcomeMessageFun();
void sumSecondRowFun(int arr[3][3][3], int sumSec);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                            {{6, 5, 8}, {9, 4, 5}, {3, 5, 9}},
                            {{9, 8, 2}, {9, 6, 3}, {3, 3, 3}}};

    // Declare Variables.
    int sumSecondRow = 0;

    // Calling Functions.
    sumSecondRowFun(myArray, sumSecondRow);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Second Row Program (Version 1) ..\n\n");
}

// Sum Second row - Function.
void sumSecondRowFun(int arr[3][3][3], int sumSec)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumSec = sumSec + arr[1][i][j];
        }
    }
    printf("Sum of Second row: %d", sumSec);
}
//* End Function ..
