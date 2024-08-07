

//* Increments The Value Program (Version 1).

/*
 * Write a program that increments the value of a variable
 * containing the ASCII value of the character 'A' and prints the resulting character.
 */

/*
! Output:
! B
*/

#include <stdio.h>

void welcomeMessageFun();
void charactersFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int character = 65;

    // Calling Functions.
    charactersFun(character);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Increments The Value Program (Version 1) ..\n\n");
}

// Characters - Function.
void charactersFun(int num)
{
    num++;

    printf("Character: '%c'", num);
}
//* End Function ..
