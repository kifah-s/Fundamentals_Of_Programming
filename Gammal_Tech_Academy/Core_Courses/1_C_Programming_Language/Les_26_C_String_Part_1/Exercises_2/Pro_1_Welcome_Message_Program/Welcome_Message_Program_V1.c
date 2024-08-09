

//* Welcome Message Program (Version 1).

/*
 * Write a program that prompts the user to enter their name,
 * reads the input, and then prints a welcome message with their name.
 */

/*
! Input:
! Please enter your name: kifah

! Output:
! Welcome, kifah !!
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingUserNameFun(char arr[25]);
void welcomeMessage2Fun(char arr[25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char userName[25];

    // Calling Functions.
    gettingUserNameFun(userName);
    welcomeMessage2Fun(userName);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Welcome Message Program (Version 1) ..\n\n");
}

// Getting user name - Function.
void gettingUserNameFun(char arr[25])
{
    printf("Please enter your name: ");
    scanf("%s", arr);
}

// Welcome message 2  - Function.
void welcomeMessage2Fun(char arr[25])
{
    printf("\nWelcome, %s !!", arr);
}
//* End Function ..
