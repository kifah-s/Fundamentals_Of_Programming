

//* From Number To 1 Program (Version 1).

/*
 * Write a program to print the numbers from 10 to -10 using a for loop.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! Numbers from 6 To 1:
! 6
! 5
! 4
! 3
! 2
! 1
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int fromN);
void fromNumberTo1Fun(int fromN, int toN);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int fromNumber = 0, toNumber = 1;

    fromNumber = gettingNumberFun(fromNumber);
    fromNumberTo1Fun(fromNumber, toNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From Number To 1 Program (Version 1) ..\n\n");
}

// Getting Number function.
int gettingNumberFun(int fromN)
{
    printf("Please enter a number: ");
    scanf("%i", &fromN);

    return fromN;
}

// From number to 1 function.
void fromNumberTo1Fun(int fromN, int toN)
{
    printf("\nNumbers from %i to %i: \n", fromN, toN);
    for (int i = fromN; i >= toN; i--)
    {
        printf("%i\n", i);
    }
}

//* End Function ..
