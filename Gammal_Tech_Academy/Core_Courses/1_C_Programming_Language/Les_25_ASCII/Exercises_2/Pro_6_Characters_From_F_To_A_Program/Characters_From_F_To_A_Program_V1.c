

//* Characters From 'F' To 'A' Program (Version 1).

/*
 * Write a program that uses a loop to print the ASCII values of characters,
 * from 'F' to 'A' in descending order.
 */

/*
! Output:
! 70
! 69
! 68
! 67
! 66
! 65
*/

#include <stdio.h>

void welcomeMessageFun();
void ASCIIValuesOfCharacters();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    ASCIIValuesOfCharacters();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Characters From 'F' To 'A' Program (Version 1) ..\n\n");
}

// ASCII values of characters 'F' To 'A' - Function.
void ASCIIValuesOfCharacters()
{
    printf("ASCII values of characters 'F' To 'A':\n\n");
    for (int i = 'F'; i >= 'A'; i--)
    {
        printf("%d\n", i);
    }
}
//* End Function ..
