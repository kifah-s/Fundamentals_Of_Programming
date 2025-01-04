

//* Extracting Hexadecimal Number Program (Version 1).

/*
* Extracting Hexadecimal Number from a String.

! Output:
! Hexadecimal Number: 1a3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int num);

int main()
{
    // Declare Variables.
    char myString[] = "1a3 kifah";
    int number = 0;

    // Call Functions.
    resultFun(myString, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extracting Hexadecimal Number Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
int extractingNumberFun(char myStr[], int num)
{
    sscanf(myStr, "%x", &num);

    return num;
}

// Result - Function.
void resultFun(char myStr[], int num)
{
    printWelcomeMessageFun();
    num = extractingNumberFun(myStr, num);

    printf("\nHexadecimal Number: %x\n\n", num);
}
//* End Function ..
