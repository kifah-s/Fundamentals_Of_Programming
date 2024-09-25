

//* Constant Integer Program (Version 2).

/*
 * Write a program that declares a constant integer and
 * initializes it with the value 5. Print the value of the constant.
 */

/*
! Output:
! The value of the constant : 5;
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printConstantNumberFun(const int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    const int constantNumber = 5;

    // Print Constant number.
    printConstantNumberFun(constantNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Constant Integer Program (Version 2) ..\n\n");
}

// Print constant number - Function.
void printConstantNumberFun(const int num)
{
    printf("The value of the constant: %d", num);
}

//* End Function ..
