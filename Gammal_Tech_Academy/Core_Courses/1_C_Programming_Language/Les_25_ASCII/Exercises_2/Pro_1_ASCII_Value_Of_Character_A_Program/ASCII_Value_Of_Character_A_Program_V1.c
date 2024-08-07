

//* ASCII Value Of Character A Program (Version 1).

/*
 * Write a program that initializes a variable s,
 * with the ASCII value of the character 'A',
 * and prints its value.
 */

/*
! Output:
! ASCII value of character 'A': 65
*/

#include <stdio.h>

void welcomeMessageFun();
void ASCIIValueOfCharacterFun(char cha);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char character = 'A';

    // Calling Functions.
    ASCIIValueOfCharacterFun(character);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in ASCII Value Of Character A Program (Version 1) ..\n\n");
}

// ASCII value of character - Function.
void ASCIIValueOfCharacterFun(char cha)
{
    printf("ASCII value of character 'A': %d", cha);
}
//* End Function ..
