

//* Subtract ASCII Values Program (Version 2).

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
void subtractASCIIValuesFun(int ch1, int ch2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int character_1 = 'A', character_2 = 'B';
    int result = 0;

    // Calling Functions.
    subtractASCIIValuesFun(character_1, character_2, result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Subtract ASCII Values Program (Version 2) ..\n\n");
}

// Subtract ASCII values - Function.
void subtractASCIIValuesFun(int ch1, int ch2, int res)
{
    res = ch2 - ch1;

    printf("Result: %d", res);
}
//* End Function ..
