

//* Two Variables 2 Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * The greeting function declares two variables, x and y, with values 6 and 5 respectively,
 * performs both addition and subtraction operations on them,
 * and then prints the results. The main function calls the greeting function.
 */

/*
! Output:
! 5 + 6 = 11
! 6 - 5 = 1
*/

#include <stdio.h>

void welcomeMessageFun();
void greeting();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Call greeting Function.
    greeting();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Variables 2 Program (Version 1) ..\n\n");
}

// Greeting - Function.
void greeting()
{
    int x = 5, y = 6;

    printf("%i + %i = %i\n", x, y, x + y);
    printf("%i - %i = %i", y, x, y - x);
}

//* End Function ..
