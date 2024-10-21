

//* Elements Of 2D Array Program (Version 1).

/*
 * Write a program that defines a function print to display the elements of a 2D array.
 * The program should declare a 2D array x with dimensions 3x3 and values { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }.
 * Call the print function to display the elements of the array.
 */

/*
! Output:
! Original Array elements: 1 2 3 4 5 6 7 8 9
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
    printf("\n\nYou welcome in Elements Of 2D Array Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[3][3])
{
    printf("Original Array Elements: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}
//* End Function ..
