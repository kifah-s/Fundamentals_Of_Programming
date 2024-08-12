

//* Welcome Message Program (Version 1).

/*
 * Write a program that prompts the user to enter their name and stores it in a character array x,
 * Use scanf to read the input, After reading the name,
 * print a message welcoming the user with their entered name.
 */

/*
! Input:
! Please enter your name: kifah

! Output:
! Welcome, kifah
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNameFun(char arr1[]);
void welcomeMessage2Fun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[25];

    // Calling Functions.
    gettingNameFun(name);
    welcomeMessage2Fun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Welcome Message Program (Version 1) ..\n\n");
}

// Getting Name - Function.
void gettingNameFun(char arr1[])
{
    printf("Please enter your name: ");
    scanf("%s", arr1);
}

// Welcome Message 2 - Function.
void welcomeMessage2Fun(char arr1[])
{
    printf("\nWelcome, %s", arr1);
}
//* End Function ..
