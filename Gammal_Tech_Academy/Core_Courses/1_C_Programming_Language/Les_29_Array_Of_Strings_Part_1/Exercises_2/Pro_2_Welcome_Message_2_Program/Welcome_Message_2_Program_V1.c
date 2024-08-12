

//* Welcome Message 2 Program (Version 1).

/*
 * Write a program that prompts the user to enter two names and stores them in a 2D character array x,
 * Use scanf to read the input, After reading each name,
 * print a welcome message for each user with their entered name,
 * Do not use loops (for, while, etc.) in the solution.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter second name: ahmad

! Output:
! Welcome, kifah
! Welcome, ahmad
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesFun(char arr1[2][25]);
void welcomeMessage2Fun(char arr1[2][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[2][25];

    // Calling Functions.
    gettingNamesFun(names);
    welcomeMessage2Fun(names);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Welcome Message 2 Program (Version 1) ..\n\n");
}

// Getting Names - Function.
void gettingNamesFun(char arr1[2][25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1[0]);

    printf("Please enter second name: ");
    scanf("%s", arr1[1]);
}

// Welcome Message 2 - Function.
void welcomeMessage2Fun(char arr1[2][25])
{
    printf("\nWelcome, %s", arr1[0]);
    printf("\nWelcome, %s", arr1[1]);
}
//* End Function ..
