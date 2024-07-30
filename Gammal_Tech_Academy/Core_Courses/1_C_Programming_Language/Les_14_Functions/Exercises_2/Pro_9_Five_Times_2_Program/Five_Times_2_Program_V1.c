

//* Five Times 2 Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * The greeting function prints the message "Hello Gammal Tech",
 * The main function uses a loop to call the greeting function five times.
 */

/*
! Output:
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
*/

#include <stdio.h>

void welcomeMessageFun();
void greetingFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    for (int i = 0; i < 5; i++)
    {
        // Call greeting Function.
        greetingFun();
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Five Times 2 Program (Version 1) ..\n\n");
}

// Greeting - Function.
void greetingFun()
{
    printf("Hello Gammal Tech\n");
}

//* End Function ..
