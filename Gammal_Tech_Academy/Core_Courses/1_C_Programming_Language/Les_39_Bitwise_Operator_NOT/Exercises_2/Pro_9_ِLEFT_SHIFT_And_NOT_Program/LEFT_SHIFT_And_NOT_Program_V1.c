

//* LEFT SHIFT And NOT Program (Version 1).

/*
 * Write a program that calculates the bitwise NOT of the
 * smallest negative integer and prints the result.
 */

/*
! Output:
! Bitwise NOT of the smallest negative integer: 2147483647
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 1 << 31;
    int result = ~number;

    printf("Bitwise NOT of the smallest negative integer: %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in LEFT SHIFT And NOT Program (Version 1) ..\n\n");
}

//* End Function ..
