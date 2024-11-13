

//* Sum Of Digits Program (Version 1).

/*
 * Write a program that calculates the sum of the digits in a given number.
 */

/*
! Input:
! Please enter a number: 12345

! Output:
! Sum of digits in 12345: 15
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printSumFun(int num, int sum);

int main()
{
    // Declare Variables.
    int number = 0, sum = 0;

    // Call Functions.
    printSumFun(number, sum);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate sum of digits - Function.
int calculateSumOfDigitsFun(int num, int sum)
{
    while (num)
    {
        int dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}

// Print Sum - Function.
void printSumFun(int num, int sum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    sum = calculateSumOfDigitsFun(num, sum);

    printf("\nSum of digits in %d: %d\n\n", num, sum);
}
//* End Function ..
