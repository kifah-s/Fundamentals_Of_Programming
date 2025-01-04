

//* Extracting Multiple Number Program (Version 1).

/*
* Extracting Multiple Numbers with Different Formats from this string "123 45.67 Multiple Formats"

! Output:
! Integer Value: 123
! Float Value: 45.67
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int intNum, float floNum);

int main()
{
    // Declare Variables.
    char myString[] = "123 45.67 Multiple Formats";
    int IntegerNumber = 0;
    float floatNumber = 0;

    // Call Functions.
    resultFun(myString, IntegerNumber, floatNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extracting Multiple Number Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
void extractingNumberFun(char myStr[], int intNum, float floNum)
{
    sscanf(myStr, "%d %f", &intNum, &floNum);
    printf("Integer Value: %d\n", intNum);
    printf("Float Value: %.2f\n\n", floNum);
}

// Result - Function.
void resultFun(char myStr[], int intNum, float floNum)
{
    printWelcomeMessageFun();
    extractingNumberFun(myStr, intNum, floNum);
}
//* End Function ..
