

//* Welcome Message 2 Program (Version 1).

/*
 * Write a program that prompts the user to enter their first name and last name,
 * reads the input, and then prints a welcome message with their full name.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter last name: saloum

! Output:
! Welcome, kifah saloum !!
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingFirstNameFun(char arr1[25]);
void gettingSecondNameFun(char arr2[25]);
void welcomeMessage2Fun(char arr1[25], char arr2[25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char firstName[25], lastName[25];

    // Calling Functions.
    gettingFirstNameFun(firstName);
    gettingSecondNameFun(lastName);
    welcomeMessage2Fun(firstName, lastName);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Welcome Message 2 Program (Version 1) ..\n\n");
}

// Getting first name - Function.
void gettingFirstNameFun(char arr1[25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1);
}

// Getting second name - Function.
void gettingSecondNameFun(char arr2[25])
{
    printf("Please enter second name: ");
    scanf("%s", arr2);
}

// Welcome message 2  - Function.
void welcomeMessage2Fun(char arr1[25], char arr2[25])
{
    printf("\nWelcome, %s %s !!", arr1, arr2);
}
//* End Function ..
