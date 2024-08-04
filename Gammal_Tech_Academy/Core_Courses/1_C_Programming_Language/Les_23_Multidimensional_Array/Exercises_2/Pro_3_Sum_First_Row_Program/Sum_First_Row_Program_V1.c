

//* Sum First Row Program (Version 1).

/*
 * Write a program that initializes a three-dimensional array x with predefined integer values,
 * The program then calculates and prints the sum of all elements in the first row of the array,
 * using nested loops.
 */

/*
! Output:
! Sum of first row: 45
*/

#include <stdio.h>

void welcomeMessageFun();
void sumFirstRowFun(int arr[3][3][3], int sumFir);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                            {{6, 5, 8}, {9, 4, 5}, {3, 5, 9}},
                            {{9, 8, 2}, {9, 6, 3}, {3, 3, 3}}};

    // Declare Variables.
    int sumFirstRow = 0;

    // Calling Functions.
    sumFirstRowFun(myArray, sumFirstRow);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum First Row Program (Version 1) ..\n\n");
}

// Sum first row - Function.
void sumFirstRowFun(int arr[3][3][3], int sumFir)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumFir = sumFir + arr[0][i][j];
        }
    }
    printf("Sum of first row: %d", sumFir);
}
//* End Function ..
