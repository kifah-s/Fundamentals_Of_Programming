

//* Extracting Floating Number Program (Version 1).

/*
* Extracting a Floating-Point Number from a String.

! Output:
! Number is: 3.14
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], float num);

int main()
{
    // Declare Variables.
    char myString[] = "3.14 kifah";
    float number = 0;

    // Call Functions.
    resultFun(myString, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extracting Floating Number Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
float extractingNumberFun(char myStr[], float num)
{
    sscanf(myStr, "%f", &num);

    return num;
}

// Result - Function.
void resultFun(char myStr[], float num)
{
    printWelcomeMessageFun();
    num = extractingNumberFun(myStr, num);

    printf("\nThe Number is: %.2f\n\n", num);
}
//* End Function ..
