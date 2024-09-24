

//* RIGHT SHIFT And NOT Program (Version 1).

/*
 * Write a program that takes an integer as input,
 * performs a right shift operation, and then applies the bitwise NOT operation on the result.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! Bitwise NOT of right shifted result: -3
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Getting number.
    printf("Please enter a number: ");
    scanf("%d", &number);

    int shiftedResult = number >> 1;
    int result = ~shiftedResult;

    printf("Bitwise NOT of the smallest negative integer: %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in RIGHT SHIFT And NOT Program (Version 1) ..\n\n");
}

//* End Function ..
