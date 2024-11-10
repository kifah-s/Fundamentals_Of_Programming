

//* Count Digits And Check Number Program (Version 1).

/*
 * Write a program that counts the number of digits in a given number and,
 * checks if it is positive, negative, or zero.
 */

/*
! Input:
! Please enter a number: -9865

! Output:
! Number of digits in -9865: 4
! -9865 is negative.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printResult(int num, int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counter = 0;

    // Call Functions.
    printResult(number, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Digits And Check Number Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Number Of Digits - Function.
int calculateNumberOfDigitsFun(int num, int cou)
{
    while (num != 0)
    {
        num /= 10;
        cou++;
    }

    return cou;
}

// Positive, Negative or Zero - Function.
void positiveNegativeOrZeroFun(int num)
{
    if (num > 0)
    {
        printf("\n%d is Positive.", num);
    }
    else if (num < 0)
    {
        printf("\n%d is Negative.", num);
    }
    else
    {
        printf("\nZero.");
    }
}

// Print result.
void printResult(int num, int cou)
{
    num = receiveNumberFun(num);
    cou = calculateNumberOfDigitsFun(num, cou);
    printf("Number of digits in %d: %d", num, cou);
    positiveNegativeOrZeroFun(num);
}
//* End Function ..
