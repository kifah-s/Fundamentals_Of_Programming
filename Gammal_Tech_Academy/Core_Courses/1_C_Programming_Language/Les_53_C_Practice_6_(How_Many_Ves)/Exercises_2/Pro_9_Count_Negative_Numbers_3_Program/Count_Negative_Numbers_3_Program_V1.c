

//* Count Negative Numbers 3 Program (Version 1).

/*
 * Write a program to count the number of negative numbers in an array using pointers.
 */

/*
! Output:
! Number of negative numbers in the array: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int myArray[] = {5, -2, 8, -1, -7, 3, -4};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    int count = 0;

    // Declare Pointer.
    int *myPointer = myArray;

    for (int i = 0; i < arrLength; i++)
    {
        if (*myPointer < 0)
        {
            count++;
        }
        myPointer++;
    }

    printf("Number of negative numbers in the array: %d", count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Negative Numbers 3 Program (Version 1) ..\n\n");
}
//* End Function ..
