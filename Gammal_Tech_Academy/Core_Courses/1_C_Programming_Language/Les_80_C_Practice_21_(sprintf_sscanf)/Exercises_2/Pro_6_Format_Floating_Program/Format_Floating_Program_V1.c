

//* Format Floating Program (Version 1).

/*
* Ask the user for a floating-point number, format it, and print it with two decimal places.

! Input:
! Please enter a floating number: 7.369

! Output:
! Formatted Value: 7.37
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], float floNum);

int main()
{
    // Declare Variables.
    char myString[50];
    float floatNumber = 0;

    // Call Functions.
    resultFun(myString, floatNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Format Floating Program (Version 1) ..\n\n");
}

// Git Floating Number - Function.
float gitFloatingNumberFun(float floNum)
{
    printf("Please enter a Floating Number: ");
    scanf("%f", &floNum);

    return floNum;
}

// Formatted Value - Function.
void formattedValueFun(char myStr[], float floNum)
{
    sprintf(myStr, "Formatted Value: %.2f", floNum);
}

// Result - Function.
void resultFun(char myStr[], float floNum)
{
    printWelcomeMessageFun();
    floNum = gitFloatingNumberFun(floNum);
    formattedValueFun(myStr, floNum);

    printf("\n%s\n\n", myStr);
}
//* End Function ..
