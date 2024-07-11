

//* Swaps Two Numbers Program.

//* Write program that swaps the values of two numbers.

/*
! Output:
! Before swapping: num1  = 5, num2 = 8.
! After swapping: num1  = 8, num2 = 5.
*/

#include <stdio.h>

void welcomeMessageFun();

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int num1 = 5, num2 = 8, swap = 0;

    printf("Before swapping: num1  = %i, num2 = %i.\n\n", num1, num2);

    // Swapping value.
    swap = num1;
    num1 = num2;
    num2 = swap;

    printf("After swapping: num1  = %i, num2 = %i.", num1, num2);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Swaps Two Numbers Program ..\n\n");
}
//* End Function ..
