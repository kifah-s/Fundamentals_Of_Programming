

//* Gammal Tech Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * which prints the message "* Gammal Tech *",
 * and then the main function calls this greeting function and prints "Hello."
 */

/*
! Output:
! * Gammal Tech *
! Hello
*/

#include <stdio.h>

void welcomeMessageFun();
void greeting();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    greeting();

    printf("Hello");

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Gammal Tech Program (Version 1) ..\n\n");
}

// greeting - Function.
void greeting()
{
    printf("* Gammal Tech *\n");
}
//* End Function ..
