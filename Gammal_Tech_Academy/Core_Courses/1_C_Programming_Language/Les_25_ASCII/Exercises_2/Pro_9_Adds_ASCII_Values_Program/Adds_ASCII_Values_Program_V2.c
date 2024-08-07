

//* Adds ASCII Values Program (Version 2).

/*
 * Write a program that adds the ASCII values of the characters 'A' and 'B' and prints the result.
 */

/*
! Output:
! 131
*/

#include <stdio.h>

void welcomeMessageFun();
void addsASCIIValuesFun(int ch1, int ch2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int character_1 = 'A', character_2 = 'B';
    int result = 0;

    // Calling Functions.
    addsASCIIValuesFun(character_1, character_2, result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Adds ASCII Values Program (Version 2) ..\n\n");
}

// Adds ASCII values - Function.
void addsASCIIValuesFun(int ch1, int ch2, int res)
{
    res = ch1 + ch2;

    printf("Result: %d", res);
}
//* End Function ..
