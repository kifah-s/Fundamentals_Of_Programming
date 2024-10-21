

//* Last Row Program (Version 2).

/*
 * Write a program to declare a 3x3 2D array of integers { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
 * and print the elements in the last row.
 */

/*
! Output:
! Elements in the las row: 7 8 9
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
    printf("\n\nYou welcome in Last Row Program (Version 2) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[3][3])
{
    printf("Elements in the las row: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[2][i]);
    }
}
//* End Function ..
