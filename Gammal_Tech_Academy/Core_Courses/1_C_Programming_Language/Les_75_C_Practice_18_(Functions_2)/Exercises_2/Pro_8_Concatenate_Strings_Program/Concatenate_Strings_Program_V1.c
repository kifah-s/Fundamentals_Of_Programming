

//* Concatenate Strings Program (Version 1).

/*
* Create a program with a function concatenateStrings that takes two strings as input and concatenates them.
* In the main function, take two strings as input, call the concatenateStrings function,
* and print the concatenated string.

! Input:
! Please enter a first string: Kifah
! Please enter a second string: Saloum

! Output:
! Concatenated String: KifahSaloum
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char firStr[], char secStr[], char conStr[]);

int main()
{
    // Declare Variables.
    char firstString[25], secondString[25], concatenatedString[50];

    // Call Functions.
    resultFun(firstString, secondString, concatenatedString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Strings Program (Version 1) ..\n\n");
}

// Get First String - Function.
void getFirstStringFun(char firStr[])
{
    printf("Please enter a first string: ");
    scanf("%s", firStr);
}

// Get Second String - Function.
void getSecondStringFun(char secStr[])
{
    printf("Please enter a second string: ");
    scanf("%s", secStr);
}

// Concatenate String - Function.
void concatenateStringFun(char firStr[], char secStr[], char conStr[])
{
    conStr = strcat(firStr, secStr);
    printf("Concatenated String: %s\n\n", conStr);
}

// Result - Function.
void resultFun(char firStr[], char secStr[], char conStr[])
{
    printWelcomeMessageFun();
    getFirstStringFun(firStr);
    getSecondStringFun(secStr);
    concatenateStringFun(firStr, secStr, conStr);

    // printf("\n\n");
}
//* End Function ..
