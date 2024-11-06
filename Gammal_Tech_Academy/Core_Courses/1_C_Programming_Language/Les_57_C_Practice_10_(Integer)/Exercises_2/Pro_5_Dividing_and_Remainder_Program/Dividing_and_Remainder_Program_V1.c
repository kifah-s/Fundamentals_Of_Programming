

//* Dividing and Remainder Program (Version 1).

/*
 * Write a program that takes a number as input,
 * and prints both the result of dividing the number by 10 and the remainder.
 */

/*
! Input:
! Please enter a number: 15

! Output:
! Quotient after dividing by 10: 1
! Remainder: 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printResultAndRemainderFun(int num, int res, int rem);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, result = 0, remainder = 0;

    // Call Functions.
    printResultAndRemainderFun(number, result, remainder);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Dividing and Remainder Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate result of dividing - Function.
int calculateResultOfDividingFun(int num, int res)
{
    res = num / 10;

    // printf("%d", res);
    return res;
}

// Calculate remainder of dividing - Function.
int calculateRemainderOfDividingFun(int num, int rem)
{
    rem = num % 10;

    // printf("%d", rem);
    return rem;
}

// Print result and remainder - Function.
void printResultAndRemainderFun(int num, int res, int rem)
{
    num = receiveNumberFun(num);
    res = calculateResultOfDividingFun(num, res);
    rem = calculateRemainderOfDividingFun(num, rem);

    printf("\nQuotient after dividing by 10: %d", res);
    printf("\nRemainder: %d", rem);
}
//* End Function ..
