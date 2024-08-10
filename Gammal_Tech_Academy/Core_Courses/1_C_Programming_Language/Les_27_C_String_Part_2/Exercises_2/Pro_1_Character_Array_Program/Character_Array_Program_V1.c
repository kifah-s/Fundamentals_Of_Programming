

//* Character Array Program (Version 1).

/*
 * Write a program that initializes a character array with the value "Gammal Tech" and prints the entire string.
 */

/*
! Output:
! Name: kifah
*/

#include <stdio.h>

void welcomeMessageFun();
void printCharacterArrayFun(char arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[] = "kifah";

    // Calling Functions.
    printCharacterArrayFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Character Array Program (Version 1) ..\n\n");
}

// Print character array - Function.
void printCharacterArrayFun(char arr[])
{
    printf("Name: %s", arr);
}
//* End Function ..
