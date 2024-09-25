

//* Constant Integer and Pointer Program (Version 1).

/*
 * Write a program that declares a constant integer
 * variable and a pointer to that constant integer. Initialize the
 * constant integer variable and use the pointer to print its value.
 */

/*
! Output:
! Value: 42
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    const int num = 42;

    // Declare Pointer.
    const int *pointer = &num;

    // Print Value.
    printf("Value: %d", *pointer);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Constant Integer and Pointer Program (Version 1) ..\n\n");
}
//* End Function ..
