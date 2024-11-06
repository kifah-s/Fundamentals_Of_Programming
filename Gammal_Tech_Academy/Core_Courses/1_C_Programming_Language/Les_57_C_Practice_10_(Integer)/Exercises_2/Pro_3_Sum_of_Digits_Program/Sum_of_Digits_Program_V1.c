

//* Sum of Digits Program (Version 1).

/*
 * Write a program to calculate the sum of digits of a given number.
 */

/*
! Input:
! Please enter a number: 1235

! Output:
! Sum of digits: 11
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberFun(int num);
int calculateSumDigitsFun(int num, int sum, int dig);
void printSumDigitsFun(int num, int sum, int dig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, sum = 0, digit = 0;

    // Call Functions.
    number = receiveNumberFun(number);
    sum = calculateSumDigitsFun(number, sum, digit);
    printSumDigitsFun(number, sum, digit);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum of Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate sum digits - Function.
int calculateSumDigitsFun(int num, int sum, int dig)
{
    while (num != 0)
    {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}

// Print sum digits - Function.
void printSumDigitsFun(int num, int sum, int dig)
{
    printf("\nSum of digits: %d", sum);
}
//* End Function ..
