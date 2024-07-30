

//* Enter Number Program (Version 1).

/*
 * Write a program that includes a function named greeting,
 * The greeting function prints the message "Hello Gammal Tech",
 * The main function prompts the user to enter a number,
 * and then uses a loop to call the greeting function a number of times based on the user's input.
 */

/*
! Input:
! Please enter a number: 3

! Output:
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void greetingFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Getting Number Function.
    number = gettingNumberFun(number);

    for (int i = 0; i < number; i++)
    {
        // Call Greeting Function.
        greetingFun();
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Enter Number Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Greeting - Function.
void greetingFun()
{
    printf("\nHello Gammal Tech");
}

//* End Function ..
