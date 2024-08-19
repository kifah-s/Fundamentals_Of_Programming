

//* Variable And Pointer Program (Version 2).

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
void variableAndPointerFun(int n, int *p);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables And Pointer.
    int number = 5;
    int *pointer;

    // Calling Functions.
    variableAndPointerFun(number, pointer);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Variable And Pointer Program (Version 2) ..\n\n");
}

// Variable And Pointer - Function.
void variableAndPointerFun(int n, int *p)
{
    p = &n;

    printf("Value of num: %d\n", n);
    printf("Value of num using pointer: %d", *p);
}
//* End Function ..
