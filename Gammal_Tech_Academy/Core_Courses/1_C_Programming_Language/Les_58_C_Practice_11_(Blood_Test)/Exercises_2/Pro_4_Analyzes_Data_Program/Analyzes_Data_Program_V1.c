

//* Analyzes Data Program (Version 1).

/*
 * Write a program that takes blood test results as input and analyzes the data.
 */

/*
! Input:
! Please enter blood test result: 6

! Output:
! Blood test analysis:
! Positive or Negative: Positive.
! Even or Odd: Even.
! Numbers of digits: 1.
! Prime or Not Prime: Not Prime
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printDataFun(int num, int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counter = 0;

    // Call Functions.
    printDataFun(number, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Analyzes Data Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Positive, Negative or Zero - Function.
void positiveNegativeOrZeroFun(int num)
{
    if (num > 0)
    {
        printf("Positive.\n");
    }
    else if (num < 0)
    {
        printf("Negative.\n");
    }
    else
    {
        printf("Zero.\n");
    }
}

// Even or odd - Function.
void evenOrOddFun(int num)
{
    if (num % 2 == 0)
    {
        printf("Even.\n");
    }
    else
    {
        printf("Odd.\n");
    }
}

// Calculate Number Of Digits - Function.
int calculateNumberOfDigitsFun(int num, int cou)
{
    cou = 0;

    while (num != 0)
    {
        num /= 10;
        cou++;
    }

    return cou;
}

// Prime or Not Prime - Function.
void primeOrNotPrimeFun(int num)
{
    if (num > 1 && num % 2 != 0 || num == 2)
    {
        printf("Prime.\n");
    }
    else
    {
        printf("Not Prime.\n");
    }
}

// Print Data - Function.
void printDataFun(int num, int cou)
{
    num = receiveNumberFun(num);

    printf("\nBlood test analysis:\n");

    printf("Positive or Negative: ");
    positiveNegativeOrZeroFun(num);

    printf("Even or Odd: ");
    evenOrOddFun(num);

    cou = calculateNumberOfDigitsFun(num, cou);
    printf("Number of Digits: %d", cou);

    printf("\nPrime or Not Prime: ");
    primeOrNotPrimeFun(num);
}
//* End Function ..
