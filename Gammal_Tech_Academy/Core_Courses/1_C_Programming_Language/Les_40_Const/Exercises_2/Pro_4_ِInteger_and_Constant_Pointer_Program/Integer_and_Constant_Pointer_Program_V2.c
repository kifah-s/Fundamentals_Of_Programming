

//* Integer and Constant Pointer Program (Version 2).

/*
 * Write a program that declares an integer variable and a
 * constant pointer to that integer. Initialize the integer
 * variable with a value and use the constant pointer to print its value.
 */

/*
! Output:
! Value of my variable: 8
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printValueFun(const int *conPoi);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 8;

    // Declare Pointer.
    const int *constantPointer;

    // constantPointer = &num;

    // Call Function.
    printValueFun(&num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Integer and Constant Pointer Program (Version 2) ..\n\n");
}

// Print Value - Function.
void printValueFun(const int *conPoi)
{
    printf("Value of my variable: %d", *conPoi);
}
//* End Function ..
