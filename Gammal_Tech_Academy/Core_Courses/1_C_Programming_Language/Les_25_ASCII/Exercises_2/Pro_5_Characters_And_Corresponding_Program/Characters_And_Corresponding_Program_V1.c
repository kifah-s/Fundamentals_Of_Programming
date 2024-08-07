

//* Characters And Corresponding Program (Version 1).

/*
 * Write a program that uses a loop to print both the characters and their corresponding ASCII values,
 * for characters 'A' to 'F'.
 */

/*
! Output:
! A 65
! B 66
! C 67
! D 68
! E 69
! F 70
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
    printf("\n\nYou welcome in Characters And Corresponding Program (Version 1) ..\n\n");
}

// ASCII values of characters 'A' To 'E' - Function.
void ASCIIValuesOfCharacters()
{
    printf("ASCII values of characters:\n\n");
    for (int i = 'A'; i <= 'F'; i++)
    {
        printf("%c\t%d\n", i, i);
    }
}
//* End Function ..
