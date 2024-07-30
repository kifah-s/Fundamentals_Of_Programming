

//* Sum And Sub Program (Version 1).

/*
 * Write a program that includes two functions, greetingSum and greetingSub,
 * The greetingSum function declares two variables, x and y, with values 6 and 5 respectively,
 * performs addition on them, and then prints the result,
 * The greetingSub function also declares two variables, x and y, with values 6 and 5 respectively,
 * performs subtraction on them, and then prints the result,
 * The main function calls both greetingSum and greetingSub functions.
 */

/*
! Output:
! Sum: 5 + 6 = 11
! Sub: 6 - 5 = 1
*/

#include <stdio.h>

void welcomeMessageFun();
void greetingSum();
void greetingSub();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Call greeting Sum Function.
    greetingSum();

    // Call greeting Sub Function.
    greetingSub();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum And Sub Program (Version 1) ..\n\n");
}

// Greeting Sum - Function.
void greetingSum()
{
    int x = 5, y = 6;

    printf("Sum: %i + %i = %i\n", x, y, x + y);
}

// Greeting Sub - Function.
void greetingSub()
{
    int x = 5, y = 6;

    printf("Sub: %i - %i = %i\n", y, x, y - x);
}

//* End Function ..
