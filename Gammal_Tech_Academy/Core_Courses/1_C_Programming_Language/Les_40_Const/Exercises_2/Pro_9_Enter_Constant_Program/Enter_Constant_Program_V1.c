

//* Enter Constant Program (Version 1).

/*
 * Write a program that prompts the user to enter a
 * constant integer. Declare a constant integer variable and
 * initialize it with the user-input value. Print the constant integer.
 */

/*
! Input:
! Please enter an integer: 6

! Output:
! Constant integer: 6
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Constant.
    const int userInput;

    printf("Please enter an integer: ");
    scanf("%d", &userInput);

    printf("Constant integer: %d", userInput);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Enter Constant Program (Version 1) ..\n\n");
}
//* End Function ..
