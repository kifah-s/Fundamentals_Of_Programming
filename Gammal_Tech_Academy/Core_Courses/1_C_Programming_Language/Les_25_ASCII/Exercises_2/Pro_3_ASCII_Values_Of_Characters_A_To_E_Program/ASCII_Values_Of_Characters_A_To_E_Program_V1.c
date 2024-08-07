

//* ASCII Values Of Characters 'A' To 'E' Program (Version 1).

/*
 * Write a program that uses a loop to print the ASCII values of characters 'A' to 'E'.
 */

/*
! Output:
! ASCII values of characters 'A' To 'E':
! 65 66 67 68 69
*/

#include <stdio.h>

void welcomeMessageFun();
void ASCIIValuesOfCharactersFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    ASCIIValuesOfCharactersFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in ASCII Values Of Characters 'A' To 'E' Program (Version 1) ..\n\n");
}

// ASCII values of characters 'A' To 'E' - Function.
void ASCIIValuesOfCharactersFun()
{
    printf("ASCII value of character 'A' To 'E':\n\n");
    for (int i = 'A'; i <= 'E'; i++)
    {
        printf("%d\t", i);
    }
}
//* End Function ..
