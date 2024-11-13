

//* Difference Between Sum Odd and Even Program (Version 1).

/*
 * Write a program to find the difference between the sum of odd digits and even digits in a given number.
 */

/*
! Input:
! Please enter a number: 123456

! Output:
! Difference Between Sum Odd and Even digits: -3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printProductOfDigitFun(int num, int sumOddDig, int sumEvenDig, int dif);

int main()
{
    // Declare Variables.
    int number = 0, sumOddDigits = 0, sumEvenDigits = 0, difference = 0;

    // Call Functions.
    printProductOfDigitFun(number, sumOddDigits, sumEvenDigits, difference);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Difference Between Sum Odd and Even Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate sum odd digits - Function.
int calculateSumOddDigitsFun(int num, int sumOddDig)
{
    int digit = 0;

    while (num)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            sumOddDig = sumOddDig + digit;
        }

        num = num / 10;
    }

    return sumOddDig;
}

// Calculate sum Even digits - Function.
int calculateSumEvenDigitsFun(int num, int sumEvenDig)
{
    int digit = 0;

    while (num)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            sumEvenDig = sumEvenDig + digit;
        }

        num = num / 10;
    }

    return sumEvenDig;
}

// Calculate difference Between Sum Odd and Even digits - Function.
int calcDifBetSumOddAndEvenDigFun(int sumOddDig, int sumEvenDig, int dif)
{
    dif = sumOddDig - sumEvenDig;
    return dif;
}

// Print difference - Function.
void printProductOfDigitFun(int num, int sumOddDig, int sumEvenDig, int dif)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    sumOddDig = calculateSumOddDigitsFun(num, sumOddDig);
    sumEvenDig = calculateSumEvenDigitsFun(num, sumEvenDig);
    dif = calcDifBetSumOddAndEvenDigFun(sumOddDig, sumEvenDig, dif);

    printf("\nDifference Between Sum Odd and Even digits: %d\n\n", dif);
}
//* End Function ..
