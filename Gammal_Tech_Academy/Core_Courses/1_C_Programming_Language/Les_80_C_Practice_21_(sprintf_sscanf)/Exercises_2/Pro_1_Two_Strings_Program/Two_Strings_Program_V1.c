

//* Two Strings Program (Version 1).

/*
* Ask the user for two strings and concatenate them. Print the result.

! Input:
! Please enter first string: kifah
! Please enter second string: saloum

! Output:
! concatenated string: kifah saloum
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], char firStr[], char secStr[]);

int main()
{
    // Declare Variables.
    char myString[100], firstString[25], secondString[25];

    // Call Functions.
    resultFun(myString, firstString, secondString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Two Strings Program (Version 1) ..\n\n");
}

// Git First String - Function.
void gitFirstStringFun(char firStr[])
{
    printf("Please enter first string: ");
    scanf("%s", firStr);
}

// Git Second String - Function.
void gitSecondStringFun(char secStr[])
{
    printf("Please enter second string: ");
    scanf("%s", secStr);
}

// Concatenated String - Function.
void concatenatedStringFun(char myStr[], char firStr[], char secStr[])
{
    sprintf(myStr, "%s %s", firStr, secStr);
}

// Result - Function.
void resultFun(char myStr[], char firStr[], char secStr[])
{
    printWelcomeMessageFun();
    gitFirstStringFun(firStr);
    gitSecondStringFun(secStr);
    concatenatedStringFun(myStr, firStr, secStr);

    printf("\nConcatenated String: %s\n\n", myStr);
}
//* End Function ..
