

//* Just Number Program (Version 1).

/*
 * Write a program that prompts the user to enter a number,
 * If the number is 0, it should print "Not positive or negative.",
 * Otherwise, it should print "Just a number."
 */

/*
! Input:
! Please enter a number: 0

! Output:
! Not positive or negative.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    checkNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Just a number Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Check number - Function.
void checkNumberFun(int num)
{
    switch (num)
    {
    case 0:
        printf("\nNot positive or negative.");
        break;

    default:
        printf("\nJust a number.");
    }
}
//* End Function ..
