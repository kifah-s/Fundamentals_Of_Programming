

//* Gammal Tech 2 Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * which prints the message "* Gammal Tech *",
 * and then the main function prints "Hello" and calls the greeting function.
 */

/*
! Output:
! Hello
! * Gammal Tech *
*/

#include <stdio.h>

void welcomeMessageFun();
void greeting();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    printf("Hello\n");

    greeting();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Gammal Tech 2 Program (Version 1) ..\n\n");
}

// Greeting - Function.
void greeting()
{
    printf("* Gammal Tech *\n");
}
//* End Function ..
