

//* First And Second 2 Program (Version 1).

/*
 * Write a program that includes two functions, greetingFirst and greetingSecond,
 * The greetingFirst function prints the message "* The best Website *",
 * and the greetingSecond function prints the message " Gammal Tech *",
 * The main function prints "Hello" and then calls both greetingSecond and greetingFirst functions.
 */

/*
! Output:
! Hello * Gammal Tech *
! * The best Website *
*/

#include <stdio.h>

void welcomeMessageFun();
void greetingFirst();
void greetingSecond();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    printf("Hello ");

    greetingSecond();
    greetingFirst();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First And Second 2 Program (Version 1) ..\n\n");
}

// Greeting First - Function.
void greetingFirst()
{
    printf("* The best Website *\n");
}

// Greeting Second - Function.
void greetingSecond()
{
    printf("* Gammal Tech *\n");
}
//* End Function ..
