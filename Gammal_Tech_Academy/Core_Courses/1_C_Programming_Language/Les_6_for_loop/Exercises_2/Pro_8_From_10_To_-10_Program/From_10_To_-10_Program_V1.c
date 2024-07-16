

//* From 10 To -10 Program (Version 1).

/*
 * Write a program to print the numbers from 10 to -10 using a for loop.
 */

/*
! Output:
! Numbers from 10 To -10:
! 10
! 9
! 8
! 7
! 6
! 5
! 4
! 3
! 2
! 1
! 0
! -1
! -2
! -3
! -4
! -5
! -6
! -7
! -8
! -9
! -10
*/

#include <stdio.h>

void welcomeMessageFun();
void fromNumberToNumberFun(int fromN, int toN);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int fromNumber = 10, toNumber = -10;

    fromNumberToNumberFun(fromNumber, toNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 10 To -10 Program (Version 1) ..\n\n");
}

// From 10 To -10 function.
void fromNumberToNumberFun(int fromN, int toN)
{
    printf("Numbers from %i to %i: \n", fromN, toN);
    for (int i = fromN; i >= toN; i--)
    {
        printf("%i\n", i);
    }
}

//* End Function ..
