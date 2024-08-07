

//* ASCII Values Of Characters 'a' To 'f' Program (Version 1).

/*
 * Write a program that uses a loop to print the ASCII values of characters 'a' to 'f'.
 */

/*
! Output:
! ASCII values of characters 'a' To 'f':
! 97 98 99 100 101 102
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
    printf("\n\nYou welcome in ASCII Values Of Characters 'a' To 'f' Program (Version 1) ..\n\n");
}

// ASCII values of characters 'a' To 'f' - Function.
void ASCIIValuesOfCharacters()
{
    printf("ASCII values of characters 'a' To 'f':\n\n");
    for (int i = 'a'; i <= 'f'; i++)
    {
        printf("%d\t", i);
    }
}
//* End Function ..
