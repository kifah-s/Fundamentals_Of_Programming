

//* 2D Matrix Program (Version 1).

/*
 * Write a program to count the number of negative numbers in a 2D matrix.
 */

/*
! Output:
! Number of negative numbers in the Matrix: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCountOfNegativeFun(int arr[3][3], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int myArray[3][3] = {{1, -2, 3},
                         {-4, 5, -6},
                         {7, 8, -9}};
    int count = 0;

    // Call Functions.
    printCountOfNegativeFun(myArray, count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in 2D Matrix Program (Version 1) ..\n\n");
}

// Count negative numbers - Function.
int countNegativeNumbersFun(int arr[3][3], int cou)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < 0)
            {
                cou++;
            }
        }
    }

    return cou;
}

// Print number of negative numbers - Function.
void printCountOfNegativeFun(int arr[3][3], int cou)
{
    cou = countNegativeNumbersFun(arr, cou);
    printf("Number of negative numbers in the Matrix: %d", cou);
}
//* End Function ..
