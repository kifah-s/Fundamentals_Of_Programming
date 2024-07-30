

//* Five Times Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * The greeting function uses a loop to print the message "Hello Gammal Tech" five times,
 * The main function calls the greeting function.
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

    // Call greeting Function.
    greetingFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Five Times Program (Version 1) ..\n\n");
}

// Greeting - Function.
void greetingFun()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Hello Gammal Tech\n");
    }
}

//* End Function ..
