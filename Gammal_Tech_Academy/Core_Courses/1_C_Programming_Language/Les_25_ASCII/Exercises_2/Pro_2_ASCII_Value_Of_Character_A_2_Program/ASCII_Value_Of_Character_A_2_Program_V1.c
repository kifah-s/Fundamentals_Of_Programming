

//* ASCII Value Of Character A 2 Program (Version 1).

/*
 * Write a program that directly prints the ASCII value of the character 'A'.
 */

/*
! Output:
! ASCII value of character 'A': 65
*/

#include <stdio.h>

void welcomeMessageFun();
void ASCIIValueOfCharacterFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    ASCIIValueOfCharacterFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in ASCII Value Of Character A 2 Program (Version 1) ..\n\n");
}

// ASCII value of character - Function.
void ASCIIValueOfCharacterFun()
{
    printf("ASCII value of character 'A': %d", 'A');
}
//* End Function ..
