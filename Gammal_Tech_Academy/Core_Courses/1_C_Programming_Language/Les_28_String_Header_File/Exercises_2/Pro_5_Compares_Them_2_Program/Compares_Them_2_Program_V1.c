

//* Compares Them 2 Program (Version 1).

/*
 * Write a simple program that takes two strings as input,
 * and compares them without using the strcmp library function,
 * If the strings are equal, the program should print "true"; otherwise, it should print "false",
 * Ensure that the program prompts the user for input and provides clear output.
 */

/*
! Input:
! Please Enter the first string: Kifah
! Please Enter the second string: Kifah

! Output:
! True.
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
    printf("\n\nYou welcome in Compares Them 2 Program (Version 1) ..\n\n");
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
    int counter = 1;

    for (int i = 0; arr1[i] != '\0' || arr2[i] != '\0'; i++)
    {
        if (arr1[i] != arr2[i])
        {
            counter = 0;
            break;
        }
    }

    if (counter == 1)
    {
        printf("\nTrue.");
    }
    else
    {
        printf("\nFalse.");
    }
}
//* End Function ..
