

//* Format as Hexadecimal Program (Version 1).

/*
* Write a program that takes an integer as input from the user,
* and uses sprintf to format it as a hexadecimal number.

! Input:
! Please enter an integer: 255

! Output:
! Hexadecimal: FF
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int intNum, char charNum[]);

int main()
{
    // Declare Variables.
    int intNumber = 0;
    char charNumber[50];

    // Call Functions.
    resultFun(intNumber, charNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Format as Hexadecimal Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int intNum)
{
    printf("Please enter an integer: ");
    scanf("%d", &intNum);

    return intNum;
}

// Convert To Hexadecimal - Function.
void convertToHexadecimalFun(int intNum, char charNum[])
{
    sprintf(charNum, "%X", intNum);
}

// Result - Function.
void resultFun(int intNum, char charNum[])
{
    printWelcomeMessageFun();
    intNum = getNumberFun(intNum);
    convertToHexadecimalFun(intNum, charNum);

    printf("\nHexadecimal: %s\n\n", charNum);
}
//* End Function ..
