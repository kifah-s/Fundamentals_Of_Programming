

//* Reverse and Concatenate 2 Program (Version 1).

/*
 * Write a program to reverse and concatenate two strings.
 */

/*
! Input:
! Please enter a first string: Hello
! Please enter a second string: World

! Output:
! dlroW olleH
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseAndConcatenateStringFun(char firStr[], char secStr[]);

int main()
{
    // Declare Variables.
    char firstString[50], secondString[50];

    // Call Functions.
    printReverseAndConcatenateStringFun(firstString, secondString);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse and Concatenate 2 Program (Version 1) ..\n\n");
}

// Receive First String - Function.
void receiveFirstStringFun(char firStr[])
{
    printf("Please enter a First String: ");
    scanf(" %[^\n]", firStr);
}

// Receive Second String - Function.
void receiveSecondStringFun(char secStr[])
{
    printf("Please enter a Second String: ");
    scanf(" %[^\n]", secStr);
}

// Print Reverse and Concatenate String - Function.
void printReverseAndConcatenateStringFun(char firStr[], char secStr[])
{
    welcomeMessageFun();
    receiveFirstStringFun(firStr);
    receiveSecondStringFun(secStr);

    printf("\n");

    int myStrLen = strlen(secStr);
    for (int i = myStrLen - 1; i >= 0; i--)
    {
        printf("%c", secStr[i]);
    }

    myStrLen = strlen(firStr);
    for (int i = myStrLen - 1; i >= 0; i--)
    {
        printf("%c", firStr[i]);
    }

    printf("\n\n");
}
//* End Function ..
