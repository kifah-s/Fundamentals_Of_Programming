

//* Reverse Digits Program (Version 1).

/*
 * Write a program to reverse the digits of a given number.
 */

/*
! Input:
! Please enter a number: 123456

! Output:
! Reverse Number: 654321
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseNumberFun(int num, int revNum);

int main()
{
    // Declare Variables.
    int number = 0, reverseNum = 0;

    // Call Functions.
    printReverseNumberFun(number, reverseNum);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
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

// Print Reverse Number - Function.
void printReverseNumberFun(int num, int revNum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);

    printf("\nReverse Number: %d\n\n", revNum);
}
//* End Function ..
