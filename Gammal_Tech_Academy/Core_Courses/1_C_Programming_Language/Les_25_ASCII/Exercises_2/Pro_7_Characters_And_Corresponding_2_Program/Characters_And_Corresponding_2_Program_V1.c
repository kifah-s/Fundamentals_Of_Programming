

//* Characters And Corresponding 2 Program (Version 1).

/*
 * Write a program that uses a loop to print characters and their corresponding ASCII values,
 * from 'F' to 'A' in descending order.
 */

/*
! Output:
! F 70
! E 69
! D 68
! C 67
! B 66
! A 65
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
    printf("\n\nYou welcome in Characters And Corresponding 2 Program (Version 1) ..\n\n");
}

// ASCII values of characters 'F' To 'A' - Function.
void ASCIIValuesOfCharactersFun()
{
    printf("ASCII values of characters 'F' To 'A':\n\n");
    for (int i = 'F'; i >= 'A'; i--)
    {
        printf("%c\t%d\n", i, i);
    }
}
//* End Function ..
