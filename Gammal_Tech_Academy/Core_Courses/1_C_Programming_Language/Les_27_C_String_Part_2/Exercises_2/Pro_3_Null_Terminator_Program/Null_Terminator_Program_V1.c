

//* Null Terminator Program (Version 1).

/*
 * Write a program that initializes a character array name1 with the value "Gammal\0Tech",
 * (including the null terminator \0), Print the string using the printf function.
 */

/*
! Output:
! Name: kifah
*/

#include <stdio.h>

void welcomeMessageFun();
void printCharacterArrayFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "kifah\0saloum";

    // Calling Functions.
    printCharacterArrayFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Null Terminator Program (Version 1) ..\n\n");
}

// Print character array - Function.
void printCharacterArrayFun(char arr1[])
{
    printf("Name: %s", arr1);
}
//* End Function ..
