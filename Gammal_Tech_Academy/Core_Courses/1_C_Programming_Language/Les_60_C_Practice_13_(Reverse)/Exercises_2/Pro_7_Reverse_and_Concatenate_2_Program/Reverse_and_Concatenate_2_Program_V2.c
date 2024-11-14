

//* Reverse and Concatenate 2 Program (Version 2).

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

void printReverseAndConcatenateStringFun(char firStr[], char secStr[], char conStr[]);

int main()
{
    // Declare Variables.
    char firstString[50], secondString[50], concatenateString[100];

    // Call Functions.
    printReverseAndConcatenateStringFun(firstString, secondString, concatenateString);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse and Concatenate 2 Program (Version 2) ..\n\n");
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

// Concatenate String - Function.
void concatenateStringFun(char firStr[], char secStr[], char conStr[])
{
    strcpy(conStr, strcat(firStr, secStr));
}

// Print Reverse and Concatenate String - Function.
void printReverseAndConcatenateStringFun(char firStr[], char secStr[], char conStr[])
{
    welcomeMessageFun();
    receiveFirstStringFun(firStr);
    receiveSecondStringFun(secStr);
    concatenateStringFun(firStr, secStr, conStr);

    printf("\n");

    int myStrLen = strlen(conStr);
    for (int i = myStrLen - 1; i >= 0; i--)
    {
        printf("%c", conStr[i]);
    }

    printf("\n\n");
}
//* End Function ..
