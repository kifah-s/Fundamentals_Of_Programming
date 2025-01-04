

//* Floating Number Program (Version 1).

/*
* Write a program that takes a floating-point number as input from the user,
* and uses sprintf to format it.

! Input:
! Please enter a Floating Number: 5.6

! Output:
! Formatted: 5.60
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(float num, char myStr[]);

int main()
{
    // Declare Variables.
    float number = 0;
    char myString[100];

    // Call Functions.
    resultFun(number, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Floating Number Program (Version 1) ..\n\n");
}

// Get Number - Function.
float getNumberFun(float num)
{
    printf("Please enter a Floating Number: ");
    scanf("%f", &num);

    return num;
}

// Formatted - Function.
void formattedFun(float num, char myStr[])
{
    sprintf(myStr, "Formatted: %.2f", num);
}

// Result - Function.
void resultFun(float num, char myStr[])
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    formattedFun(num, myStr);

    printf("\n%s\n\n", myStr);
}
//* End Function ..
