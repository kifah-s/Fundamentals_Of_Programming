

//* Compares Them Program (Version 2).

/*
 * Write a C program that takes two strings as input from the user,
 * compares them using strcmp, and prints "true" if the strings are equal and "false" otherwise,
 * Ensure that the program prompts the user for input and provides clear output.
 */

/*
! Input:
! Please Enter the first string: hello
! Please Enter the second string: world

! Output:
! False.
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingFirstStringFun(char firStr[]);
void gettingSecondStringFun(char SecStr[]);
void comparesThemFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char firstString[25], secondString[25];

    // Calling Functions.
    gettingFirstStringFun(firstString);
    gettingSecondStringFun(secondString);
    comparesThemFun(firstString, secondString);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Compares Them Program (Version 2) ..\n\n");
}

// Getting First String - Function.
void gettingFirstStringFun(char firStr[])
{
    printf("Please Enter the first string: ");
    scanf("%s", firStr);
}

// Getting Second String - Function.
void gettingSecondStringFun(char SecStr[])
{
    printf("Please Enter the Second string: ");
    scanf("%s", SecStr);
}

// Compares Them - Function.
void comparesThemFun(char arr1[], char arr2[])
{
    int result = strcmp(arr1, arr2);

    if (result == 0)
    {
        printf("\nTrue.");
    }
    else
    {
        printf("\nFalse.");
    }
}
//* End Function ..
