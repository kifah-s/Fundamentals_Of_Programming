

//* Extracting Number Program (Version 1).

/*
* Extracting a Number from a String.

! Output:
! Number is: 60
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int num);

int main()
{
    // Declare Variables.
    char myString[] = "60 kifah";
    int number = 0;

    // Call Functions.
    resultFun(myString, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extracting Number Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
int extractingNumberFun(char myStr[], int num)
{
    sscanf(myStr, "%d", &num);

    return num;
}

// Result - Function.
void resultFun(char myStr[], int num)
{
    printWelcomeMessageFun();
    num = extractingNumberFun(myStr, num);

    printf("\nThe Number is: %d\n\n", num);
}
//* End Function ..
