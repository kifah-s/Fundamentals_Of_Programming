

//* Reverse and Concatenate Program (Version 2).

/*
 * Write a program to reverse and concatenate two numbers.
 */

/*
! Input:
! Please enter a first number: 597
! Please enter a second number: 126

! Output:
! Reversed and concatenate number: 795621
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseAndConcatenateNumberFun(int firNum, int secNum, int conNum);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, concatenateNumber = 0;

    // Call Functions.
    printReverseAndConcatenateNumberFun(firstNumber, secondNumber, concatenateNumber);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse and Concatenate Program (Version 2) ..\n\n");
}

// Receive first number - Function.
int receiveFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Receive second number - Function.
int receiveSecondNumberFun(int secNum)
{
    printf("Please enter a second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Reverse and Concatenate Number - Function.
int reverseAndConcatenateNumberFun(int firNum, int secNum, int conNum)
{
    int digit = 0;
    while (firNum)
    {
        digit = firNum % 10;
        conNum = conNum * 10 + digit;
        firNum = firNum / 10;
    }
    while (secNum)
    {
        digit = secNum % 10;
        conNum = conNum * 10 + digit;
        secNum = secNum / 10;
    }

    return conNum;
}

// Print Reverse and Concatenate Number - Function.
void printReverseAndConcatenateNumberFun(int firNum, int secNum, int conNum)
{
    welcomeMessageFun();
    firNum = receiveFirstNumberFun(firNum);
    secNum = receiveSecondNumberFun(secNum);
    conNum = reverseAndConcatenateNumberFun(firNum, secNum, conNum);

    printf("\nReversed and concatenate number: %d\n\n", conNum);
}
//* End Function ..
