

//* Extracting Octal Number Program (Version 1).

/*
* Extracting Octal Number from a String.

! Output:
! Hexadecimal Number: 456
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int num);

int main()
{
    // Declare Variables.
    char myString[] = "456 kifah";
    int number = 0;

    // Call Functions.
    resultFun(myString, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extracting Octal Number Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
int extractingNumberFun(char myStr[], int num)
{
    sscanf(myStr, "%o", &num);

    return num;
}

// Result - Function.
void resultFun(char myStr[], int num)
{
    printWelcomeMessageFun();
    num = extractingNumberFun(myStr, num);

    printf("Octal Number: %o\n\n", num);
}
//* End Function ..
