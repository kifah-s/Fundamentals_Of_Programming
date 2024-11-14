

//* Reverse and Concatenate Program (Version 1).

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
#include <stdlib.h>

void printReverseAndConcatenateNumberFun(int firNum, int secNum, int revFirNum, int revSecNum, int conNum);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, reverseFirstNumber = 0, reverseSecondNumber = 0, concatenateNumber = 0;

    // Call Functions.
    printReverseAndConcatenateNumberFun(firstNumber, secondNumber, reverseFirstNumber, reverseSecondNumber, concatenateNumber);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse and Concatenate Program (Version 1) ..\n\n");
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

// Reverse Number - Function.
int reverseNumberFun(int num, int revNum)
{
    int digit = 0;
    while (num)
    {
        digit = num % 10;
        revNum = revNum * 10 + digit;
        num = num / 10;
    }

    return revNum;
}

// Concatenate number - Function.
int concatenateNumberFun(int revFirNum, int revSecNum, int conNum)
{
    char firNum[25], secNum[25];

    sprintf(firNum, "%d", revFirNum);
    sprintf(secNum, "%d", revSecNum);

    conNum = atoi(strcat(firNum, secNum));

    return conNum;
}

// Print Reverse and Concatenate Number - Function.
void printReverseAndConcatenateNumberFun(int firNum, int secNum, int revFirNum, int revSecNum, int conNum)
{
    welcomeMessageFun();
    firNum = receiveFirstNumberFun(firNum);
    secNum = receiveSecondNumberFun(secNum);
    revFirNum = reverseNumberFun(firNum, revFirNum);
    revSecNum = reverseNumberFun(secNum, revSecNum);
    conNum = concatenateNumberFun(revFirNum, revSecNum, conNum);

    printf("\nReversed and concatenate number: %d\n\n", conNum);
}
//* End Function ..
