

//* Two Integers Program (Version 1).

/*
* Write a program that takes two integers as input from the user,
* and uses sprintf to format them.

! Input:
! Please enter Two integers:
! First Number: 5
! Second Number: 7

! Output:
! Formatted: 5 and 7
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int firNum, int secNum, char myStr[]);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;
    char myString[100];

    // Call Functions.
    resultFun(firstNumber, secondNumber, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Two Integers Program (Version 1) ..\n\n");
}

// Get First Number - Function.
int getFirstNumberFun(int firNum)
{
    printf("Please enter Two integers: \n");
    printf("Please enter a First Number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Get Second Number - Function.
int getSecondNumberFun(int secNum)
{
    printf("Please enter a Second Number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Formatted - Function.
void formattedFun(int firNum, int secNum, char myStr[])
{
    sprintf(myStr, "Formatted: %d and %d", firNum, secNum);
}

// Result - Function.
void resultFun(int firNum, int secNum, char myStr[])
{
    printWelcomeMessageFun();
    firNum = getFirstNumberFun(firNum);
    secNum = getSecondNumberFun(secNum);
    formattedFun(firNum, secNum, myStr);

    printf("\n%s\n\n", myStr);
}
//* End Function ..
