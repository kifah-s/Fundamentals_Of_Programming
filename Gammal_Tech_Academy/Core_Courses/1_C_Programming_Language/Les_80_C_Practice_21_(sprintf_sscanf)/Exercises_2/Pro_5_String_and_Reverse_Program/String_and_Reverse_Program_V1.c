

//* String and Reverse Program (Version 1).

/*
* Ask the user for a string and reverse it. Print both the original and reversed strings.

! Input:
! Please enter a string: kifah

! Output:
! Origin: kifah
! Reversed: hafik
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], char revStr[]);

int main()
{
    // Declare Variables.
    char myString[50], reverseString[50];

    // Call Functions.
    resultFun(myString, reverseString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in String and Reverse Program (Version 1) ..\n\n");
}

// Git String - Function.
void gitStringFun(char myStr[])
{
    printf("Please enter a string: ");
    scanf("%s", myStr);
}

// Reversed String - Function.
void reversedStringFun(char myStr[], char revStr[])
{
    int len = strlen(myStr);
    for (int i = 0; i < len; i++)
    {
        revStr[i] = myStr[len - i - 1];
    }
}

// Result - Function.
void resultFun(char myStr[], char revStr[])
{
    printWelcomeMessageFun();
    gitStringFun(myStr);
    reversedStringFun(myStr, revStr);

    printf("\nOrigin: %s\n", myStr);
    printf("Reversed: %s\n\n", revStr);
}
//* End Function ..
