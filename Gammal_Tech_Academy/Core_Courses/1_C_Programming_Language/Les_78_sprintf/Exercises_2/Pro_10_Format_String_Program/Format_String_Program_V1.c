

//* Format String Program (Version 1).

/*
* Write a program that takes a string as input from the user,
* and uses sprintf to format it.

! Input:
! Please enter a string: kifah

! Output:
! Formatted: kifah
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char str[], char myStr[]);

int main()
{
    // Declare Variables.
    char str[50], myString[100];

    // Call Functions.
    resultFun(str, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Format String Program (Version 1) ..\n\n");
}

// Get String - Function.
void getStringFun(char str[])
{
    printf("Please enter a string: ");
    scanf("%s", str);
}

// Formatted - Function.
void formattedFun(char str[], char myStr[])
{
    sprintf(myStr, "Formatted: %s", str);
}

// Result - Function.
void resultFun(char str[], char myStr[])
{
    printWelcomeMessageFun();
    getStringFun(str);
    formattedFun(str, myStr);

    printf("\n%s\n\n", myStr);
}
//* End Function ..
