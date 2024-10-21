

//* Elements Of 2D Array 2 Program (Version 1).

/*
 * Write a program to declare and initialize a 2D array with values { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
 * and print its elements.
 */

/*
! Output:
! Elements of array:
! 1 2 3
! 4 5 6
! 7 8 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printElementsFun(int arr[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    // Call Functions.
    printElementsFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Elements Of 2D Array 2 Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[3][3])
{
    printf("Elements of array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
//* End Function ..
