

//* Two Variables Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * The greeting function declares two variables, x and y, with values 5 and 6 respectively,
 * adds them together, and then prints the result. The main function calls the greeting function.
 */

/*
! Output:
! 5 + 6 = 11
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
    printf("\n\nYou welcome in Two Variables Program (Version 1) ..\n\n");
}

// Greeting - Function.
void greeting()
{
    int x = 5, y = 6, sum = 0;
    sum = x + y;

    printf("%i + %i = %i", x, y, sum);
}

//* End Function ..
