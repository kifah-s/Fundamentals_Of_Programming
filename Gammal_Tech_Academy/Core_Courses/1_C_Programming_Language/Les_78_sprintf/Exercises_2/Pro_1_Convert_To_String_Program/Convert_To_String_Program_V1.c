

//* Convert To String Program (Version 1).

/*
* Write a program that takes an integer as input from the user and uses sprintf to convert it to a string.

! Input:
! Please enter an integer: 159

! Output:
! Converted String: 159
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
    printf("\n\nYou welcome in Convert To String Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int intNum)
{
    printf("Please enter an integer: ");
    scanf("%d", &intNum);

    return intNum;
}

// Convert To String - Function.
void convertToStringFun(int intNum, char charNum[])
{
    sprintf(charNum, "%d", intNum);
}

// Result - Function.
void resultFun(int intNum, char charNum[])
{
    printWelcomeMessageFun();
    intNum = getNumberFun(intNum);
    convertToStringFun(intNum, charNum);

    printf("\nConverted String: %s\n\n", charNum);
}
//* End Function ..
