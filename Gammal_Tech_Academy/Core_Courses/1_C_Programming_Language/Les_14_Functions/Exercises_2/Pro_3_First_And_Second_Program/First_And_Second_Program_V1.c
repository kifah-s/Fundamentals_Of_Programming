

//* First And Second Program (Version 1).

/*
 * Write a program that includes two functions, greetingFirst and greetingSecond,
 * The greetingFirst function prints the message "* Hello ",
 * and the greetingSecond function prints the message " Gammal Tech *",
 * The main function calls both greetingFirst and greetingSecond functions.
 */

/*
! Output:
! * Hello *
! * Gammal Tech *
*/

#include <stdio.h>

void welcomeMessageFun();
void greetingFirst();
void greetingSecond();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    greetingFirst();
    greetingSecond();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First And Second Program (Version 1) ..\n\n");
}

// Greeting First - Function.
void greetingFirst()
{
    printf("* Hello *\n");
}

// Greeting Second - Function.
void greetingSecond()
{
    printf("* Gammal Tech *\n");
}
//* End Function ..
