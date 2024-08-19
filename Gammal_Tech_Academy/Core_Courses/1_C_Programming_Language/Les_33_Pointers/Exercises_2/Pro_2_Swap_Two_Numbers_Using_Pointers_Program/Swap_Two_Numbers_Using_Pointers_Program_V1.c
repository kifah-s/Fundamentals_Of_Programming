

//* Swap Two Numbers Using Pointers Program (Version 1).

/*
 * Program to Swap Two Numbers Using Pointers.
 */

/*
! Output:
! Before Swapping: x: 5, y: 10;
! After Swapping: x: 10, y: 5;
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void swapTwoNumbersUsingPointersFun(int *x, int *y);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int x = 5, y = 10;

    printf("Before Swapping: x: %d, y: %d\n", x, y);

    // Calling Functions.
    swapTwoNumbersUsingPointersFun(&x, &y);

    printf("After Swapping: x: %d, y: %d\n", x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Swap Two Numbers Using Pointers Program (Version 1) ..\n\n");
}

// Swap Two Numbers - Function.
void swapTwoNumbersUsingPointersFun(int *x, int *y)
{
    int temporaryVar = *x;
    *x = *y;
    *y = temporaryVar;
}
//* End Function ..
