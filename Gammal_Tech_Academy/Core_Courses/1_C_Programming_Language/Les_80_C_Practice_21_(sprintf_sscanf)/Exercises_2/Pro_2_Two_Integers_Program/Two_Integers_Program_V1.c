

//* Two Integers Program (Version 1).

/*
* Ask the user for two integers, format and print them in a sentence.

! Input:
! Please enter first number: 60
! Please enter second number: 3

! Output:
! The sum is 63, and the difference is 57.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int firNum, int secNum, int sumNum, int diffNum);

int main()
{
    // Declare Variables.
    char myString[100];
    int firstNumber = 0, secondNumber = 0, sumNumbers = 0, differenceNumbers = 0;

    // Call Functions.
    resultFun(myString, firstNumber, secondNumber, sumNumbers, differenceNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Two Integers Program (Version 1) ..\n\n");
}

// Git First Number - Function.
int gitFirstNumberFun(int firNum)
{
    printf("Please enter first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Git Second Number - Function.
int gitSecondNumberFun(int secNum)
{
    printf("Please enter second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Format Numbers - Function.
void formatNumbersFun(char myStr[], int firNum, int secNum, int sumNum, int diffNum)
{
    sumNum = firNum + secNum;
    diffNum = firNum - secNum;

    sprintf(myStr, "The sum is: %d, and the difference is: %d", sumNum, diffNum);
}

// Result - Function.
void resultFun(char myStr[], int firNum, int secNum, int sumNum, int diffNum)
{
    printWelcomeMessageFun();
    firNum = gitFirstNumberFun(firNum);
    secNum = gitSecondNumberFun(secNum);
    formatNumbersFun(myStr, firNum, secNum, sumNum, diffNum);

    printf("\n%s\n\n", myStr);
}
//* End Function ..
