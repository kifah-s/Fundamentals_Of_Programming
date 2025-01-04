

//* Two Integers and String Program (Version 1).

/*
* Write a program that takes two integers and a string as input from the user,
* and uses sprintf to format them.

! Input:
! Please enter Two integers:
! First Number: 5
! Second Number: 7
! Please enter a string: kifah

! Output:
! Formatted: 5, 7, kifah
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int firNum, int secNum, char str[], char myStr[]);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;
    char str[50], myString[100];

    // Call Functions.
    resultFun(firstNumber, secondNumber, str, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Two Integers and String Program (Version 1) ..\n\n");
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

// Get String - Function.
void getStringFun(char str[])
{
    printf("Please enter a string: ");
    scanf("%s", str);
}

// Formatted - Function.
void formattedFun(int firNum, int secNum, char str[], char myStr[])
{
    sprintf(myStr, "Formatted: %d, %d, %s", firNum, secNum, str);
}

// Result - Function.
void resultFun(int firNum, int secNum, char str[], char myStr[])
{
    printWelcomeMessageFun();
    firNum = getFirstNumberFun(firNum);
    secNum = getSecondNumberFun(secNum);
    getStringFun(str);
    formattedFun(firNum, secNum, str, myStr);

    printf("\n%s\n\n", myStr);
}
//* End Function ..
