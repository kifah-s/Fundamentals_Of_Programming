

//* Variable And Pointer Program (Version 1).

/*
 * Program to Declare a Variable and a Pointer.
 */

/*
! Output:
! Value of num: 5
! Value of num using pointer: 5
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void variableAndPointerFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    variableAndPointerFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Variable And Pointer Program (Version 1) ..\n\n");
}

// Variable And Pointer - Function.
void variableAndPointerFun()
{
    int number = 5;
    int *pointer = &number;

    printf("Value of num: %d\n", number);
    printf("Value of num using pointer: %d", *pointer);
}
//* End Function ..
