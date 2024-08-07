

//* Subtract ASCII Values Program (Version 3).

/*
 * Write a program that defines a function sub to subtract
 * the ASCII value of 'A' from the ASCII value of 'B' and prints the result,
 * Then, call this function from the main function.
 */

/*
! Output:
! 1
*/

#include <stdio.h>

void welcomeMessageFun();
void subtractASCIIValuesFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    subtractASCIIValuesFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Subtract ASCII Values Program (Version 3) ..\n\n");
}

// Subtract ASCII values - Function.
void subtractASCIIValuesFun()
{
    // Declare variables.
    int character_1 = 'A', character_2 = 'B';
    int result = 0;

    result = character_2 - character_1;

    printf("Result: %d", result);
}
//* End Function ..
