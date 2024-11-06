

//* Sum of Digits 2 Program (Version 1).

/*
 * program to run continuously, allowing the user to enter multiple numbers,
 * and calculating the sum of their digits.
 */

/*
! Input & Output:
! Please enter a number (0 to exit) : 123
! Sum of digits: 6
! Please enter a number (0 to exit) : 159
! Sum of digits: 15
! Please enter a number (0 to exit) : 0
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

    while (1)
    {
        // Declare Variables.
        int number = 0, sum = 0, digit = 0;

        // Call Functions.
        number = receiveNumberFun(number);
        if (number == 0)
        {
            break;
        }

        // Call Functions.
        sum = calculateSumDigitsFun(number, sum, digit);
        printSumDigitsFun(number, sum, digit);
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum of Digits 2 Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("\n\nPlease enter a number: ");
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
