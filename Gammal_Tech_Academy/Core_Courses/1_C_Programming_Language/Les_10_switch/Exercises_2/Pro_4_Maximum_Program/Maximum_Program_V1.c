

//* Maximum Program (Version 1).

/*
 * Write a program to input two numbers and find the maximum.
 */

/*
! Input:
! Please enter a first number: 5
! Please enter a second number: 8

! Output:
! 8 is the maximum.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void checkMaximumNumberFun(int firNum, int secNum, int max);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, maximum = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    checkMaximumNumberFun(firstNumber, secondNumber, maximum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum Program (Version 1) ..\n\n");
}

// Getting First number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Check maximum number - Function.
void checkMaximumNumberFun(int firNum, int secNum, int max)
{
    if (firNum > secNum)
    {
        max = firNum;
    }
    else
    {
        max = secNum;
    }

    switch (max)
    {
    default:
        printf("\n%i is the maximum.", max);
    }
}
//* End Function ..
